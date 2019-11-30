#include "actions.h"
#include "parser.h"

#include "node-list.h"
#include "table-stack.h"
#include "arg-list.h"
#include "error.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int nline;
extern int ncol0;
extern int ncol1;
extern Tablestack * context_stack;
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

Table * begin(const char * name) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	Symbol * new_context;
	// if there is a name, search for it in the current context
	if (name != NULL) {
		new_context = table_find(context_stack->top, name);
		
		// if it exists, error
		if (new_context != NULL) {
			error_redefinition(name);
			return NULL;
		}
	}

	// if there is not a name, or it does not exist, create a new context
	new_context = table_insert(context_stack->top, name);

	if (new_context == NULL) {
		// if it was not inserted, error
		fprintf(stderr, "unable to insert context\n");
		return NULL;
	} else {
		// otherwise push it into the stack
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
		return new_context;
	}
}

Table * begin_fun(int type, const char * name, struct arg_list * args) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }
	if (name == NULL) { fprintf(stderr, "function name is null\n"); return NULL; }

	char * key = al_key(args);
	Symbol * new_context = table_find(context_stack->top, name);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, name);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = VOID; //type;
	}

	if (new_context->root == NULL) {
		new_context->root = context_stack->top;
	} else if (new_context->root != context_stack->top) {
		fprintf(stderr, "context error\n");
	}
	ts_push(context_stack, new_context);

	new_context = table_find(context_stack->top, key);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, key);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
		if (type == VOID) { new_context->attr->function_returns = true; }
		new_context->attr->arg_list = args;
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
		add_symbol_args(args);
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
	return  new_context;
}

Table * finish_fun(const char * name) {
	if (context_stack->size < 3) { fprintf(stderr, "stack too short (fun)\n"); return NULL; }

	Symbol * new_context = ts_pull(context_stack);
	if (new_context->attr->function_returns == false) { warning_no_return(name); }
	new_context = ts_pull(context_stack);
	return  new_context;
}

void assign_context(Node * node) {
	if (context_stack->top == NULL) {
		fprintf(stderr, "assign context: stack is empty\n");
	} else {
		node->context = context_stack->top;
	}
}

void assign_body(Node * node) {
	if (context_stack->top == NULL) {
		fprintf(stderr, "assign body: stack is empty\n");
	} else {
		context_stack->top->attr->statement_tree = node;
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
				case ARRAY   : add_symbol_arr(arg->data_type, arg->name, -1); break;
				case VARIABLE: add_symbol_var(arg->data_type, arg->name)    ; break;
				default      : fprintf(stderr, "unknown arg decl type\n")   ; break;
			}
			arg = arg->next;
		}
	}
}

Symbol * add_symbol_var(int type, const char * key) {
	switch (type) { case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add var with incompatible type %d\n", type); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add var with null key\n"); return NULL; }

	return add_symbol(VARIABLE, type, key);	
	// Symbol * symbol = table_find(context_stack->top, key);
	// if (symbol == NULL) {
	// 	symbol = table_insert(context_stack->top, key);
	// 	symbol->attr->symbol_type = VARIABLE;
	// 	symbol->attr->return_type = type;
	// 	return symbol;
	// } else {
	// 	error_redefinition(key);
	// 	return NULL;
	// }
}

Symbol * add_symbol_arr(int type, const char * key, int length) {
	switch (type) { case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr with incompatible type %d\n", type); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }

	Symbol * s = add_symbol(ARRAY, type, key);
	s->attr->length = length;
	return s;
	// Symbol * symbol = table_find(context_stack->top, key);
	// if (symbol == NULL) {
	// 	symbol = table_insert(context_stack->top, key);
	// 	symbol->attr->symbol_type = ARRAY;
	// 	symbol->attr->return_type = type;
	// 	return symbol;
	// } else {
	// 	error_redefinition(key);
	// 	return NULL;
	// }
}

Symbol * add_symbol(int symbol_type, int data_type, const char * key) {
	//switch (data_type) { case VOID: case INT: case CHAR: case FLOAT: case STRING: break; default: fprintf(stderr, "undefined type\n"); return NULL; }
	//if(key  == NULL) { fprintf(stderr, "add symbol with null key\n"); return NULL; }

	Symbol * symbol = NULL;
	if (key != NULL) {
		if(context_stack->top->root != NULL && strcmp(context_stack->top->root->key, key) == 0) {
			error_redefinition_vf(key);
			return NULL;
		}
		symbol = table_find(context_stack->top, key);
	}

	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = symbol_type;
		symbol->attr->return_type = data_type;
		return symbol;
	} else {
		error_redefinition(key);
		return NULL;
	}
}

void set_symbol_str_sval(Symbol * symbol, const char * value) {
	symbol->attr->value.sval = malloc(strlen(value)+1);
	strcpy((char*)symbol->attr->value.sval, value);
	symbol->attr->defined = true;
}
void set_symbol_str_cval(Symbol * symbol, const char * value) {
	#warning handle special chars
	// printf("charvalue=%s %d\n", value, strlen(value));
	symbol->attr->value.cval = value[1];
	symbol->attr->defined = true;
}
void set_symbol_str_ival(Symbol * symbol, const char * value) {
	symbol->attr->value.ival = strtol(value, NULL, 10);
	symbol->attr->defined = true;
}
void set_symbol_str_hval(Symbol * symbol, const char * value) {
	symbol->attr->value.ival = strtol(value, NULL, 16);
	symbol->attr->defined = true;
}
void set_symbol_str_fval(Symbol * symbol, const char * value) {
	symbol->attr->value.fval = strtof(value, NULL);
	symbol->attr->defined = true;
}

Symbol * retrieve(Node * node, const char * key, int type) {
	Symbol * s = table_find_back(node->context, key);
	if (s == NULL) {
		error_undeclared(key);
		return NULL;
	} else {
		if(s->attr->symbol_type != type) {
			error_not_variable(key, type);
			return NULL;
		} else {
			node->symbol = s;
			return s;
		}
	}
}


