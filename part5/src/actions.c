#include "actions.h"
#include "parser.h"

#include "node-list.h"
#include "table-stack.h"
#include "arg-list.h"
#include "error.h"
#include "misc.h"
#include "generator.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

extern int nline;
extern int ncol0;
extern int ncol1;
extern Tablestack * context_stack;
extern Tablestack * operation_stack;
extern int yynerrs;

////////////////////
// ERROR HANDLERS //
////////////////////
void yyerror (char const * msg) {
	fprintf(stderr, "Line %d, column %d: %s\n", nline, ncol0, msg);
}

////////////////////
// SCOPE MANAGERS //
////////////////////

Table * begin(void) {
	if (ts_top(context_stack) == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	char * key = ts_top(context_stack)->attr->reserved_label;
	char * name = NULL;
	Symbol * new_context;
	// if there is a name, search for it in the current context
	if (key != NULL) {
		name = (char*) key;
		new_context = table_find(ts_top(context_stack), name);
		
		// if it exists, error
		if (new_context != NULL) {
			error_redefinition(name);
			return NULL;
		}
	} else {
		// create a unique random name if arg is NULL
		do { free(name); name = random_label(NULL, 9, NULL); } while (table_find(ts_top(context_stack), name) != NULL);
	}

	// if there is not a name, or it does not exist, create a new context
	new_context = table_insert(ts_top(context_stack), name);
	if (key == NULL) { free(name); }

	if (new_context == NULL) {
		// if it was not inserted, error
		fprintf(stderr, "unable to insert context\n");
		return NULL;
	} else {
		// otherwise push it into the stack
		new_context->root = ts_top(context_stack);
		new_context->uuid = ts_top(context_stack)->uuid;
		ts_push(context_stack, new_context);

		//gen_context_begin(new_context);

		return new_context;
	}
}

Table * begin_fun(int type, const char * name, struct arg_list * args) {
	if (ts_top(context_stack) == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }
	if (name == NULL) { fprintf(stderr, "function name is null\n"); return NULL; }

	char * key = al_key(args);
	Symbol * new_context = table_find(ts_top(context_stack), name);
	if (new_context == NULL) {
		new_context = table_insert(ts_top(context_stack), name);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = VOID; //type;
	}

	if (new_context->root == NULL) {
		new_context->root = ts_top(context_stack);
	} else if (new_context->root != ts_top(context_stack)) {
		fprintf(stderr, "context error\n");
	}
	ts_push(context_stack, new_context);

	new_context = table_find(ts_top(context_stack), key);
	if (new_context == NULL) {
		new_context = table_insert(ts_top(context_stack), key);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
		new_context->attr->arg_list = args;
		new_context->root = ts_top(context_stack);
		ts_push(context_stack, new_context);
		add_symbol_args(args);
		gen_function_begin(new_context);		
	} else {
		error_redefinition_fun(name, key);
		al_free(&args);
	}
	free(key);
	return new_context;
}

Table * finish(void) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }
	Symbol * new_context = ts_pull(context_stack);
	// gen_context_end(new_context);
	return  new_context;
}

Table * finish_fun(const char * name) {
	if (context_stack->size < 3) { fprintf(stderr, "stack too short (fun)\n"); return NULL; }

	Symbol * new_context = ts_pull(context_stack);
	
	if (new_context->attr->function_returns == false) {
		gen_function_end(new_context, NULL);
		if(new_context->attr->return_type != VOID) { warning_no_return(name); }
	}
	
	new_context = ts_pull(context_stack);
	return  new_context;
}

void assign_context(Node * node) {
	if (ts_top(context_stack) == NULL) {
		fprintf(stderr, "assign context: stack is empty\n");
	} else {
		node->context = ts_top(context_stack);
	}
}

void assign_body(Node * node) {
	if (ts_top(context_stack) == NULL) {
		fprintf(stderr, "assign body: stack is empty\n");
	} else {
		ts_top(context_stack)->attr->statement_tree = node;
	}
}

////////////////////////
// SYMBOL TABLE MANIP //
////////////////////////
void add_symbol_args(struct arg_list * args) {
	if (args != NULL) {
		struct arg * arg = args->first;
		while(arg != NULL) {
			switch(arg->decl_type) {
				case ARRAY: add_symbol_var(arg->data_type, arg->name, true)->attr->symbol_type=ARRAY; break;
				case VARIABLE: add_symbol_var(arg->data_type, arg->name, true); break;
				default: fprintf(stderr, "unknown arg decl type\n")   ; break;
			}
			arg = arg->next;
		}
	}
}

Symbol * add_symbol_var(int type, const char * key, bool is_arg) {
	switch (type) { case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add var with incompatible type %d\n", type); return NULL; }
	if(key == NULL) { fprintf(stderr, "add var with null key\n"); return NULL; }

	bool is_global = strcmp(ts_top(context_stack)->key, ":WORLD:") == 0;
	
	Symbol * ret = add_symbol(VARIABLE, type, key);
	if (ret == NULL) { return NULL; }
	
	Symbol * temp = NULL;
	if (is_global) {
		gen_global_var(ret);
	} else {
		if (is_arg) {
			snprintf(ret->attr->code, sizeof(ret->attr->code), "#%d", ts_top(context_stack)->attr->n_args++);
			temp = add_symbol(VARIABLE, type, ret->attr->code);
			if (temp == NULL) { table_free(&ret); return NULL; }
			else { attr_copy(temp->attr, ret->attr); }
		} else {
			temp = add_symbol(VARIABLE, type, NULL);
			if (temp == NULL) { table_free(&ret); return NULL; }
			else { attr_copy(ret->attr, temp->attr); }
		}
	}

	return ret;
}

Symbol * add_symbol_arr(int type, const char * key, void* value) {
	switch (type) { case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr with incompatible type %d\n", type); return NULL; }
	//if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }
	char * new_key = NULL;
	if(key  == NULL) {
		new_key = random_label("str_", 9, NULL);
	} else {
		new_key = (char*) key;
	}
	Symbol * symbol = table_find(ts_bot(context_stack), new_key);
	if (symbol != NULL) {
		error_redefinition(new_key);
		if (key == NULL) { free(new_key); }
		return NULL;
	} else {
		symbol = table_insert(ts_bot(context_stack), new_key);
		symbol->attr->symbol_type = ARRAY;
		symbol->attr->return_type = type;
		snprintf(symbol->attr->code, sizeof(symbol->attr->code), "&%s", symbol->key);

		if (type == CHAR) {
			if (value != NULL) {
				const char * val = (const char *) value;
				set_symbol_str_sval(symbol, val);
				symbol->attr->length = strlen(val) + 1;
				symbol->attr->defined = true;
				gen_global_str(symbol);
			}
		}

		if (key == NULL) { free(new_key); }
		return symbol;
	}
}

Symbol * add_symbol_cte(int type, const char * val) {
	if(val == NULL) { fprintf(stderr, "add cte with null val\n"); return NULL; }
	static void * kindex = 0;
	char * key = str_ptr("$k", ++kindex, NULL);
	Symbol * s = NULL;
	switch(type) {
		case CONSTANT_FLOAT: s = add_symbol(CONSTANT, FLOAT , key); if (s!=NULL) { set_symbol_str_fval(s, val); } break;
		case CONSTANT_INT  : s = add_symbol(CONSTANT, INT   , key); if (s!=NULL) { set_symbol_str_ival(s, val); } break;
		case CONSTANT_HEX  : s = add_symbol(CONSTANT, INT   , key); if (s!=NULL) { set_symbol_str_hval(s, val); } break;
		case CONSTANT_CHAR : s = add_symbol(CONSTANT, CHAR  , key); if (s!=NULL) { set_symbol_str_cval(s, val); } break;
		default: fprintf(stderr, "add cte with incompatible type %d\n", type); break;
	}
	free(key);

	if (s != NULL) {
		s->attr->temporary = false;
		s->attr->defined = true;
		strncpy(s->attr->code, val, sizeof(s->attr->code));
		ts_push(operation_stack, s);
	}
	return s;
}

Symbol * add_symbol(int symbol_type, int data_type, const char * key0) {
	Symbol * symbol = NULL;
	char * key;
	if (key0 == NULL) {
		key = malloc(40);
		snprintf(key, 40, "$%d", ts_top(context_stack)->uuid + 1);
	} else {
		key = (char*) key0;
	}
	
	if(ts_top(context_stack)->root != NULL && strcmp(ts_top(context_stack)->root->key, key) == 0) {
		error_redefinition_vf(key);
		if (key0 == NULL) { free(key); }
		return NULL;
	}
	
	symbol = table_find(ts_top(context_stack), key);

	if (symbol == NULL) {
		symbol = table_insert(ts_top(context_stack), key);
		symbol->attr->symbol_type = symbol_type;
		symbol->attr->return_type = data_type;
		strncpy(symbol->attr->code, key, sizeof(symbol->attr->code));
		if (key0 == NULL) {
			free(key);
			++(ts_top(context_stack)->uuid);
		}
		return symbol;
	} else {
		error_redefinition(key);
		if (key0 == NULL) { free(key); }
		return NULL;
	}
}

void set_symbol_str_sval(Symbol * symbol, const char * value) {
	symbol->attr->value.sval = malloc(strlen(value)+1);
	strcpy((char*)symbol->attr->value.sval, value);
}
void set_symbol_str_cval(Symbol * symbol, const char * value) {
	char * pos = (char*) value;
	char c = lit_to_char(&pos);
	symbol->attr->value.cval = c;
}
void set_symbol_str_ival(Symbol * symbol, const char * value) {
	symbol->attr->value.ival = strtol(value, NULL, 10);
}
void set_symbol_str_hval(Symbol * symbol, const char * value) {
	symbol->attr->value.ival = strtol(value, NULL, 16);
}
void set_symbol_str_fval(Symbol * symbol, const char * value) {
	symbol->attr->value.fval = strtof(value, NULL);
}

Symbol * retrieve(Node * node, const char * key, int type) {
	Symbol * s = table_find_back(node->context, key);
	if (s == NULL) {
		error_undeclared(key);
		return NULL;
	} else {
		//int stype = s->attr->symbol_type;
		if (false) { //stype != type) {
			error_not_variable(key, type);
			return NULL;
		} else {
			node->symbol = s;
			if (type != FUNCTION)
				ts_push(operation_stack, s);
			return s;
		}
	}
}

Symbol * retrieve_fun(Node * node, const char * key, int type) {
	assert(type == FUNCTION);
	Symbol * s = table_find_back(node->context, key);
	if (s == NULL) {
		error_undeclared(key);
		return NULL;
	} else {
		int stype = s->attr->symbol_type;
		if (stype != type) {
			error_not_variable(key, type);
			return NULL;
		} else {
			node->symbol = s;
			if (type != FUNCTION)
				ts_push(operation_stack, s);
			return s;
		}
	}
}
