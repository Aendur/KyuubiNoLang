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


#define ERROR_MSG_BUFF 128


void redefinition_error(const char * name) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of %s\n", name);
	yyerror(msg);
	yynerrs++;
}

Table * begin(const char * name) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	// create a new context
	Table * new_context = table_init(16, name);
	const char * key = new_context->key;

	// search for key in the current context
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		// insert symbol
		symbol = table_insert(context_stack->top, key);
		symbol->attr->context = new_context;

		// push stack
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
	} else {
		redefinition_error(key);
		table_free(&new_context);
	}
	
	return new_context;
}

Table * assign(Node * node) {
	if (context_stack->top == NULL) { fprintf(stderr, "assign: stack is empty\n"); return NULL; }
	node->context = context_stack->top;
	return context_stack->top;
}

Table * finish(void) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }
	Table * context = ts_pull(context_stack);
	return  context;
}

void add_symbol_var(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return; }
	
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = VARIABLE;
		symbol->attr->return_type = type;
	} else {
		yynerrs++;
		char * msg = malloc(ERROR_MSG_BUFF);
		snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of variable %s\n", key);
		yyerror(msg);
		free(msg);
	}
}

void add_symbol_arr(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return; }

	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = ARRAY;
		symbol->attr->return_type = type;
	} else {
		yynerrs++;
		char * msg = malloc(ERROR_MSG_BUFF);
		snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of variable %s\n", key);
		yyerror(msg);
		free(msg);
	}
}

/*
Symbol * add_symbol_fun(int type, const char * id, Node* params) {
	//int nparams = 0
	//if(params == NULL);


	Symbol * symbol = table_find(context_stack->top, id);
	if (symbol != NULL) {
		yynerrs++;
		char * msg = malloc(ERROR_MSG_BUFF);
		snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of function %s\n", key);
		yyerror(msg);
		free(msg);
		return NULL;
	} else {
		symbol = table_insert(context_stack->top, id);
	}


	return "";
}

*/