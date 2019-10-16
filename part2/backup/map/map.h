#ifndef SYMBOL_H
#define SYMBOL_H

#include <stdint.h>


typedef enum {
	TOKEN_IDENTIFIER,
	TOKEN_OPERATOR,
	TOKEN_TYPESPEC,
} Type;

struct token {
	char * name;
	Type type;
};

struct symbol_table {

};

uint64_t hash(char*);
uint64_t index(uint64_t, uint64_t);

#endif


if (          x <= y && x <= z) { return x; }
if (y <= x      &&      y <= z) { return y; }
if (z <= x && z <= y          ) { return z; }



