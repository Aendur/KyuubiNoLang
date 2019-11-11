#include "actions.h"
#include "parser.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//extern Table * symbol_table;
extern Tablestack * context_stack;
extern int nline;
extern int ncol0;
extern int yynerrs;


void assign(Node * node) {
	node->context = context_stack->top;
}

Table * enclose(Node * node, const char * name) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }

	Table * leaf_context = ts_pull(context_stack);
	leaf_context->root = context_stack->top;

	struct pair * pair;
	if (name == NULL) {
		char * key = malloc(3 * sizeof(unsigned long));
		snprintf(key, 20, "%p", (void*) leaf_context);
		pair = table_insert(context_stack->top, key);
		free(key);
	} else {
		struct pair * pair = table_find(context_stack->top, name);
		if (pair != NULL) {
			yynerrs++;
			char * msg = malloc(64);
			snprintf(msg, 64, "semantic error: redefinition of %s\n", name);
			yyerror(msg);
			free(msg);
			//return pair;
		} else {
			pair = table_insert(context_stack->top, name);
		}
	}

	pair->attr->node    = node;
	pair->attr->context = leaf_context;
	return leaf_context;
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
	}
	
	struct pair * pair = table_insert(context_stack->top, key);
	pair->attr->node = node;
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
	}
	
	struct pair * pair = table_insert(context_stack->top, key);
	pair->attr->node = node;
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
