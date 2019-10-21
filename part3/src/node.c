#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
//#include <wchar.h>
#include "parser.h"
#include "node.h"
#include "string.h"

extern int yyleng;
extern char * yytext;

Node * node_init(int type, const char * name, ...) {
	Node * n0 = malloc(sizeof(Node));
	n0->root = NULL;
	n0->type = type;
	n0->name = malloc(strlen(name) + 1);
	strcpy(n0->name, name);

	// init va
	va_list argn, args;
	va_start(argn, name);
	va_copy (args, argn);

	// count number of args
	n0->nleaves = 0;
	Node * n1;
	while((n1 = va_arg(argn, Node*)) != NULL) { ++n0->nleaves; }
	va_end(argn);

	// append nodes
	if (n0->nleaves > 0) {
		n0->leaf = malloc(n0->nleaves * sizeof(Node*));
		for(int l = 0; l < n0->nleaves; ++l) {
			n1 = va_arg(args, Node*);
			n0->leaf[l] = n1;
			n1->root = n0;
		}
	}
	va_end(args);

	return n0;
}

void node_free(Node ** n) {
	if ( n == NULL) { fprintf(stderr, "trying to free null pointer arg\n"); return; }
	if (*n == NULL) { fprintf(stderr, "trying to free null pointer obj\n"); return; }
	Node * n0 = *n;
	free(n0->leaf);
	free(n0->name);
	free(n0);
	*n = NULL;
}

void node_free_recursive(Node ** n) {
	if ( n == NULL) { fprintf(stderr, "trying to free null pointer arg\n"); return; }
	if (*n == NULL) { fprintf(stderr, "trying to free null pointer obj\n"); return; }
	Node * n0 = *n;
	for(int i = 0; i < n0->nleaves; ++i) { node_free_recursive(&(n0->leaf[i])); }
	free(n0->leaf);
	free(n0->name);
	free(n0);
	*n = NULL;
}

void print_node(Node * n) {
	printf("%p %p %p %d %d %s", (void*) n, (void*) n->root, (void*) n->leaf, n->nleaves, n->type, n->name);
	for (int i =0; i < n->nleaves; ++i) { printf(" %p", (void*) n->leaf[i]); }
	printf("\n");
}

void print_tree(Node * root, int level) {
	int lvl = 0;
	while(lvl < level-1) { ++lvl; printf("   "); }
	while(lvl < level)   { ++lvl; printf("-> "); }
	printf("%-s\n", root->name);

	for(int l = 0; l < root->nleaves; ++l) {
		print_tree(root->leaf[l], level+1);
	}
}

#ifdef UNIT_TEST_NODE
int main() {
	//Node * n9 = node_init_term(100, "3");
	//Node * n8 = node_init_term(100, "5");
	Node * n9 = node_init(100, "9", NULL);
	Node * n8 = node_init(100, "8", NULL);
	Node * n7 = node_init(100, "7", NULL);
	Node * n6 = node_init(100, "6", NULL);
	Node * n5 = node_init(100, "5", n6, n7, n8, n9, NULL);
	print_node(n9);
	print_node(n8);
	print_node(n7);
	print_node(n6);
	print_node(n5);
	print_tree(n5, 0);
	node_free_recursive(&n5);
}

#endif