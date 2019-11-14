#include "node-list.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>


Nodelist * nl_init(void) {
	Nodelist * nl = malloc(sizeof(Nodelist));
	nl->size     = 0;
	nl->capacity = 16;
	nl->nodes    = calloc(nl->capacity, sizeof(Node*));
	return nl;
}

Node * nl_push(Nodelist * nl, Node * n0) {
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

	return n0;
}

void nl_free(Nodelist** nl) {
	if (nl == NULL || *nl == NULL) { return; }
	Nodelist * nlist = *nl;
	for(int i = 0; i < nlist->size; ++i) {
		node_free(&(nlist->nodes[i]));
	}
	free(nlist->nodes);
	free(nlist);
	*nl = NULL;
}

void nl_print(Nodelist* nl) {
	printf("Nodes: %d Cap: %d\n", nl->size, nl->capacity);
	for(int i = 0; i < nl->size; ++i) {
		print_node(nl->nodes[i]);
		//printf("ADDR %p\n", (void*)nl->nodes[i]);
	}
}

#ifdef UNIT_TEST_NODE_LIST
int main() {
	Nodelist * nl = nl_init();

	char name[128];

	for(int i = 0; i < 50; ++i) {
		sprintf(name, "%d", i);
		nl_push(nl, node_init(100,  name, ENDARG));
		nl_print(nl);
	}

	nl_free(&nl);
}

#endif