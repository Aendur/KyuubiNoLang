#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "parser.h"
#include "node.h"
#include "string.h"

extern int yyleng;
extern char * yytext;

Nodelist * nodelist_init(void) {
	Nodelist * nl = malloc(sizeof(Nodelist));
	nl->size     = 0;
	nl->capacity = 16;
	nl->nodes    = calloc(nl->capacity, sizeof(Node*));
	return nl;
}

void nodelist_push(Nodelist * nl, Node * n0) {
	if (nl->size < nl->capacity) {
		nl->nodes[nl->size] = n0;
		nl->size++;
	} else {
		Node ** newn = realloc(nl->nodes, 2 * nl->capacity * (sizeof(Node*)));
		if (newn == NULL) { fprintf (stderr, "failed to realloc\n"); }
		else {
			nl->nodes = newn;
			nl->capacity = 2 * nl->capacity;
			nl->nodes[nl->size] = n0;
			nl->size++;
			for (int i = nl->size; i < nl->capacity; ++i) { nl->nodes[i] = NULL; }
		}
	}
}

void nodelist_free(Nodelist** nl) {
	if (nl == NULL || *nl == NULL) { return; }
	Nodelist * nlist = *nl;
	for(int i = 0; i < nlist->size; ++i) {
		node_free(&(nlist->nodes[i]));
	}
	free(nlist->nodes);
	free(nlist);
	*nl = NULL;
}

void nodelist_print(Nodelist* nl) {
	printf("Nodes: %d Cap: %d\n", nl->size, nl->capacity);
	for(int i = 0; i < nl->size; ++i) {
		printf("ADDR %p\n", (void*)nl->nodes[i]);
	}
}

Node * node_init(Nodelist * node_list, int type, const char * name, ...) {
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
	} else {
		n0->leaf = NULL;
	}
	va_end(args);

	nodelist_push(node_list, n0);
	return n0;
}

void node_free(Node ** n) {
	if ( n == NULL) { fprintf(stderr, "trying to free null pointer arg\n"); return; }
	if (*n == NULL) { fprintf(stderr, "trying to free null pointer obj\n"); return; }
	Node * n0 = *n;
	free(n0->leaf); n0->leaf = NULL;
	free(n0->name); n0->name = NULL;
	free(n0);
	*n = NULL;
}

void node_free_recursive(Node ** n) {
	if ( n == NULL) { fprintf(stderr, "trying to free null pointer arg\n"); return; }
	if (*n == NULL) { fprintf(stderr, "trying to free null pointer obj\n"); return; }
	Node * n0 = *n;
	for(int i = 0; i < n0->nleaves; ++i) { node_free_recursive(&(n0->leaf[i])); }
	free(n0->leaf); n0->leaf = NULL;
	free(n0->name); n0->name = NULL;
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
	while(lvl < level) { ++lvl; printf("   "); }
	// while(lvl < level-1) { ++lvl; printf("   "); }
	// while(lvl < level)   { ++lvl; printf("-> "); }
	printf("%-s\n", root->name);
	for(int l = 0; l < root->nleaves; ++l) { print_tree(root->leaf[l], level+1); }
}


#ifdef UNIT_TEST_NODE
int main() {
	Nodelist * nl = nodelist_init();
	Node * n9 = node_init(nl, 100, "9", NULL);
	Node * n8 = node_init(nl, 100, "8", NULL);
	Node * n7 = node_init(nl, 100, "7", NULL);
	Node * n6 = node_init(nl, 100, "6", NULL);
	Node * n5 = node_init(nl, 100, "5", n6, n7, n8, n9, NULL);
	node_init(nl, 100, "6", NULL); nodelist_print(nl); 
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	node_init(nl, 100, "6", NULL); nodelist_print(nl);
	print_node(n9);
	print_node(n8);
	print_node(n7);
	print_node(n6);
	print_node(n5);
	print_tree(n5, 0);
	nodelist_free(&nl);
	//node_free_recursive(&n5);
}

#endif