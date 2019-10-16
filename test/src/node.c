#include <stdlib.h>
#include <stdio.h>
#include "node.h"

#define INF ((void*) -1)

struct token_t * token_init   (enum yytokentype type, int value) {
	struct token_t * tok = malloc(sizeof(struct token_t));
	tok->type = type;
	tok->value = value;
	tok->leaf_count = 0;
	tok->root = NULL;

	const unsigned int capacity = 1;
	tok->leaf = calloc(capacity, sizeof(void*));
	//tok->leaf = malloc(capacity * sizeof(void*));
	tok->leaf[capacity - 1] = INF;
	return tok;
}

void token_free (struct token_t ** tok_ptr) {
	#ifdef UNITTEST_NODE
	printf("clearing node %p\n", (void*) *tok_ptr);
	#endif
	
	struct token_t * tok = *tok_ptr;

	// call free on each child node
	for (int i = 0; i < tok->leaf_count; ++i) {
		token_free( &(tok->leaf[i]) );
	}
	
	// call free on child node vector pointer
	free(tok->leaf);
	
	// call free on this node
	free(tok);

	// set pointer to NULL
	*tok_ptr = NULL;
}

void token_insert (struct token_t * root, struct token_t * leaf) {
	if (root->leaf[root->leaf_count] == INF) {
		long              newcap = 2 * (1 + &root->leaf[root->leaf_count] - root->leaf);
		struct token_t ** newvec = realloc(root->leaf, newcap * sizeof(void*));

		#ifdef UNITTEST_NODE
		printf("realloc %p => %p\n", (void*) root->leaf, (void*) newvec);
		#endif

		if (newvec != NULL) {
			newvec[newcap-1] = INF;
			root->leaf = newvec;
		} else {
			fprintf(stderr, "abort: failed to realloc pointer\n");
			abort();
		}
	}

	root->leaf[root->leaf_count++] = leaf;
	leaf->root = root;
}

#ifdef UNITTEST_NODE
int main(void) {
	struct token_t * tok = token_init(258, 0);

	for (int i = 0; i < 5; ++i) {
		printf("%d\n", i);
		struct token_t * tokn = token_init(258, i+1);
		token_insert(tok, tokn);
	}

	printf("tok = %p\n", (void*) tok);
	printf("tok->type = %d\n", tok->type);
	printf("tok->value = %d\n", tok->value);
	printf("tok->leaf_count = %d\n", tok->leaf_count);
	printf("tok->root = %p\n", (void*) tok->root);
	printf("tok->leaf = %p\n", (void*) tok->leaf);

	int i = 0;
	while(tok->leaf[i] != INF) {
		printf("tok->leaf[%d] = %p\n", i, (void*) tok->leaf[i]);
		++i;
	}
	printf("tok->leaf[%d] = %p\n", i, (void*) tok->leaf[i]);
	
	printf("%ld\n", 1 + &tok->leaf[3] - tok->leaf);
	
	token_free(&tok);
	printf("tok = %p\n", (void*)tok);

	return 0;
}

#endif





