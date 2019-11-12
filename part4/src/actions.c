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


Table * assign(Node * node) {
	if (context_stack->top == NULL) { fprintf(stderr, "assign: stack is empty\n"); return NULL; }
	node->context = context_stack->top;
	return context_stack->top;
}


void redefinition_error(const char * name) {
	char msg[128];
	snprintf(msg, 128, "semantic error: redefinition of %s\n", name);
	yyerror(msg);
	yynerrs++;
}

Table * begin(const char * name) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	// create a new context
	Table * new_context = table_init(16);

	// name context
	char * key;
	if (name == NULL) {
		key = malloc(40);
		snprintf(key, 40, "%p", (void*) new_context);;
	} else {
		key = malloc(strlen(name)+1);
		strcpy(key, name);
	} 

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

	free(key);
	return new_context;
}

Table * finish(void) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }
	Table * context = ts_pull(context_stack);
	return  context;
}

void add_symbol_var(Node * node) {
	if(node == NULL) { fprintf(stderr, "add var from null node\n"); return; }
	// DISCOVER TYPE
	// type = node->leaf[0];

	// DISCOVER NAME
	const char * key;
	if (node->nleaves > 1) {
		key = node->leaf[1]->name;
	} else {
		fprintf(stderr, "node has no identifier\n");
		return;
	}
	
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		//symbol->attr->node = node;
	} else {
		yynerrs++;
		char * msg = malloc(128);
		snprintf(msg, 128, "semantic error: redefinition of %s\n", key);
		yyerror(msg);
		free(msg);
	}

}

void add_symbol_arr(Node * node) {
	if(node == NULL) { fprintf(stderr, "add arr from null node\n"); return; }
	// DISCOVER TYPE
	// type = node->leaf[0];

	// DISCOVER NAME
	const char * key;
	if (node->nleaves > 1) {
		key = node->leaf[1]->name;
	} else {
		fprintf(stderr, "node has no identifier\n");
		return;
	}
	
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		// symbol->attr->node = node;
	} else {
		yynerrs++;
		char * msg = malloc(128);
		snprintf(msg, 128, "semantic error: redefinition of %s\n", key);
		yyerror(msg);
		free(msg);
	}
}

const char* add_symbol_fun(Node * node) {
	if(node == NULL) { fprintf(stderr, "add func from null node\n"); return NULL; }
	
	// node->leaf[0] = function-declarator
	Node * fnode; 
	if (node->nleaves > 0) { fnode = node->leaf[0]; }
	else { fprintf(stderr, "func has no declarator\n"); return NULL; }
	
	// DISCOVER RETURN TYPE
	// fnode->leaf[0] // type
	
	// DISCOVER FUNCTN NAME
	// fnode->leaf[1] // IDENTIFIER
	const char * key;
	if (fnode->nleaves > 1) { key = fnode->leaf[1]->name; }
	else { fprintf(stderr, "func node has no identifier\n"); return NULL; }
	
	// DISCOVER PARAMS
	// fnode->leaf[2] // parameter-list
	if (fnode->nleaves > 2) {
		Node * plist = fnode->leaf[2];
		Node * param;
		while(plist->nleaves > 1 && plist->type == LIST) {
			param = plist->leaf[1];

			// DISCOVER PARAM TYPE
			// type = param->leaf[0]
			// if(param->nleaves > 0) {}
			
			// DISCOVER PARAM ID
			// ID   = param->leaf[1]
			if (param->type == DECL_VAR) { add_symbol_var(param); }
			else if (param->type == DECL_VEC) { add_symbol_arr(param); }
			
			// get next
			plist = plist->leaf[0];
		}

		// LAST PARAM
		// DISCOVER PARAM TYPE
		// type = param->leaf[0]
		// if(param->nleaves > 0) {}
			
		// DISCOVER PARAM ID
		// ID   = param->leaf[1]
		if (plist->type == DECL_VAR) { add_symbol_var(plist); }
		else if (plist->type == DECL_VEC) { add_symbol_arr(plist); }
	}

	return key;
}


/*
void add_symbol_var(Node* node) {
	char * name = node->leaf[1]->name;
	if(symtab_find(symbol_table, name) == NULL) {
		symtab_insert(&symbol_table, name, node);
	}
}

void add_symbol_fun(Node* node) {
	char * name = malloc(strlen(node->leaf[1]->name) * 2);
	strcpy(name, node->leaf[1]->name);
	char * pos = &name[strlen(name)];
	*pos = '_'; ++pos;
	if (node->nleaves == 2) {
		*pos = 'v'; ++pos;
		*pos = 0;
	} else {
		recurse_types(node, &pos);
		*pos = 0;
	}
	symtab_insert(&symbol_table, name, node);
	free(name);
}
*/
