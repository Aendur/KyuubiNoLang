#include "actions.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//extern Table * symbol_table;
extern Tablestack * context_stack;


void assign(Node * node) {
	node->context = context_stack->top;
}

void add_symbol_var(Node * node) {
	// (void) node;
	// printf("Include variable in table.\n");
	
	// type = node->leaf[0];
	const char * key;
	if (node->nleaves > 1) {
		key = node->leaf[1]->name;
	} else {
		fprintf(stderr, "node has no identifier");
	}
	
	struct pair * pair = table_insert(context_stack->top, key);
	pair->attr->node = node;
}

void add_symbol_fun(Node * node) {
	(void) node;
	printf("Include function in table.\n");
}

void add_symbol_arr(Node * node) {
	(void) node;
	printf("Include array in table.\n");
}

/*
void add_symbol_var(Node* node) {
	char * name = node->leaf[1]->name;
	if(symtab_find(symbol_table, name) == NULL) {
		symtab_insert(&symbol_table, name, node);
	}
}

void recurse_types(Node * n0, char ** str) {
	if (n0 == NULL) { return; }
	if (n0->type == 'D' && n0->nleaves > 0) {
		**str = n0->leaf[0]->name[0];
		*str = (*str) + 1;
	} else if (n0->type == 'E' && n0->nleaves > 0) {
		**str = n0->leaf[0]->name[0] - 0x20;
		*str = (*str) + 1;
	} else {
		for(int i = 0; i < n0->nleaves; ++i) {
			recurse_types(n0->leaf[i], str);
		}
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
