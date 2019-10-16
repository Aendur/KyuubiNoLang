/** @file */

#ifndef NODE_H
#define NODE_H

#include "asm.tab.h"

/// holds token info
struct token_t {
	enum yytokentype type;   /// type, as defined by bison
	int value;               /// value
	int leaf_count;          /// number of children
	struct token_t * root;   /// pointer to parent
	struct token_t ** leaf;  /// pointers to children
};


/// initialize a new token and return its addr
struct token_t * token_init   (enum yytokentype, int);

/// release token and children from memory and set it to null (recursive)
void             token_free (struct token_t **);

/// inserts t1 into t0's children list, reallocs if necessary
void             token_insert (struct token_t * t0, struct token_t * t1);

#endif

