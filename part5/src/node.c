#include "node.h"
#include "parser.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

extern int yyleng;
extern char * yytext;
extern int nline;
extern int ncol0;
extern int ncol1;

Node * node_init(int type, const char * name, ...) {
	Node * n0 = malloc(sizeof(Node));
	n0->root = NULL;
	n0->type = type;
	n0->name = malloc(strlen(name) + 1);
	n0->context = NULL;
	n0->symbol  = NULL;
	n0->line = nline;
	n0->col0 = ncol0;
	n0->col1 = ncol1;
	strcpy(n0->name, name);

	// init va
	va_list argn, args;
	va_start(argn, name);
	va_copy (args, argn);

	// count number of args
	n0->nleaves = 0;
	Node * n1;
	while((n1 = va_arg(argn, Node*)) != ENDARG) { ++n0->nleaves; }
	va_end(argn);

	// #ifdef DEBUG
	// printf("creating node %s with %d leaves\n", n0->name, n0->nleaves);
	// #endif

	// append nodes
	if (n0->nleaves > 0) {
		n0->leaf = malloc(n0->nleaves * sizeof(Node*));
		for(int l = 0; l < n0->nleaves; ++l) {
			n0->leaf[l] = NULL;
			n1 = va_arg(args, Node*);

			if (n1 == ENDARG) {
				fprintf(stderr, "endarg child\n");
			} else if (n1 == NULL) {
				//fprintf(stderr, "null child\n");
			} else {
				n0->leaf[l] = n1;
				n1->root = n0;
			}
		}
	} else {
		n0->leaf = NULL;
	}

	va_end(args);

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
	if (n == NULL) { fprintf(stderr, "trying to print null node\n"); return;}
	printf("%p %p %p %d %d %s", (void*) n, (void*) n->root, (void*) n->leaf, n->nleaves, n->type, n->name);
	for (int i =0; i < n->nleaves; ++i) { printf(" %p", (void*) n->leaf[i]); }
	printf("\n");
}

#include "table.h"
void print_tree(Node * root, int level) {
	int lvl = 0;
	while(lvl++ < level) { printf("   "); }

	if (root == NULL) {
		printf("(null)\n");
	} else {
		if (root->name != NULL) { printf("%-s ", root->name); }
		else { printf("(null name)"); }

		if(root->symbol != NULL) { attr_print(root->symbol->attr); }
		else { printf("(null symbol)"); }
		printf("\n");

		for(int l = 0; l < root->nleaves; ++l) {
			print_tree(root->leaf[l], level+1);
		}
	}
}


#ifdef UNIT_TEST_NODE
int main() {
	// Nodelist * nl = nodelist_init();
	Node * n9 = node_init(9, "node9", ENDARG);
	Node * n8 = node_init(8, "node8", ENDARG);
	Node * n7 = node_init(7, "node7", n9, ENDARG);
	Node * n6 = node_init(6, "node6", ENDARG);
	Node * n5 = node_init(5, "node5", ENDARG);
	Node * n4 = node_init(4, "node4", n6, n7, n8, ENDARG);
	Node * n3 = node_init(3, "node3", n4, n5, ENDARG);
	Node * n2 = node_init(2, "node2", n3, ENDARG);
	Node * n1 = node_init(1, "node1", ENDARG);
	Node * n0 = node_init(0, "node0", n1, n2, ENDARG);
	
	print_node(n0);
	print_node(n1);
	print_node(n2);
	print_node(n3);
	print_node(n4);
	print_node(n5);
	print_node(n6);
	print_node(n7);
	print_node(n8);
	print_node(n9);

	print_tree(n0, 0);
	node_free_recursive(&n0);
	// node_free_recursive(&nl->nodes[0]);
	// nodelist_free(&nl);
}

#endif