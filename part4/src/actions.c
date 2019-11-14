// #include "actions.h"
// #include "parser.h"
// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
//extern Table * symbol_table;
//extern Tablestack * context_stack;
//extern int nline;
//extern int ncol0;
//extern int yynerrs;


#define ERROR_MSG_BUFF 256


void redefinition_error(const char * name) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of '%s'", name);
	yyerror(msg);
	yynerrs++;
}

void redefinition_error_fun(const char * name, const char * pars) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of '%s' with parameters '%s'", name, pars);
	yyerror(msg);
	yynerrs++;
}

Table * begin(const char * name) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	Symbol * new_context;
	// if there is a name, search for it in the current context
	if (name != NULL) {
		new_context = table_find(context_stack->top, name);
		
		// if it exists, error
		if (new_context != NULL) {
			redefinition_error(name);
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
		ts_push(context_stack, new_context);
		return new_context;
	}
}

char * build_key(struct arg_list * args) {
	//float[]
	char * key;
	if(args == NULL) {
		key = malloc(5);
		strcpy(key, "void");
	} else {
		int N = 9 * args->size + 1;
		int n = 0;
		key = malloc(N);
		char * pos = key;

		struct arg * arg = args->first;
		while(arg != NULL) {
			switch(arg->data_type) {
				case FLOAT: n = snprintf(pos, N, "float")             ; pos += n; N -= n; break;
				case CHAR : n = snprintf(pos, N, "char" )             ; pos += n; N -= n; break;
				case INT  : n = snprintf(pos, N, "int"  )             ; pos += n; N -= n; break;
				default   : n = snprintf(pos, N, "%d", arg->data_type); pos += n; N -= n; break;
			}
			switch(arg->decl_type) {
				case VARIABLE: n = snprintf(pos, N, ","  )                ; pos += n; N -= n; break;
				case ARRAY   : n = snprintf(pos, N, "[],")                ; pos += n; N -= n; break;
				default      : n = snprintf(pos, N, "%d,", arg->decl_type); pos += n; N -= n; break;
			}
			arg = arg->next;
		}
		*(pos-1) = 0;
	}
	return key;
}

void add_symbol_args(struct arg_list * args) {
	if (args != NULL) {
		struct arg * arg = args->first;
		while(arg != NULL) {
			switch(arg->decl_type) {
				case ARRAY   : add_symbol_arr(arg->data_type, arg->name); break;
				case VARIABLE: add_symbol_var(arg->data_type, arg->name); break;
				default      : break;
			}
			arg = arg->next;
		}
	}
}

Table * begin_fun(int type, const char * name, struct arg_list * args) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }
	if (name == NULL) { fprintf(stderr, "function name is null\n"); return NULL; }

	char * key = build_key(args);
	Symbol * new_context = table_find(context_stack->top, name);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, name);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
	}
	ts_push(context_stack, new_context);

	new_context = table_find(context_stack->top, key);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, key);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
		new_context->attr->arg_list = args;
		ts_push(context_stack, new_context);
	} else {
		redefinition_error_fun(name, key);
	}
	free(key);

	add_symbol_args(args);

	return new_context;
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

Table * finish(void) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }

	Symbol * new_context = ts_pull(context_stack);
	new_context->root = context_stack->top;
	return  new_context;
}

Symbol * add_symbol_var(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }
	
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = VARIABLE;
		symbol->attr->return_type = type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * add_symbol_arr(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }

	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = ARRAY;
		symbol->attr->return_type = type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}
