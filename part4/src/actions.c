#include "actions.h"
#include <stdlib.h>
#include <string.h>

extern Table * symbol_table;

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
