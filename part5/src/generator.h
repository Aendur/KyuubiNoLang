#ifndef GENERATOR_H
#define GENERATOR_H

// #include "node.h"
#include "table.h"

void gen_function_begin(Symbol * args);
void gen_function_end(Symbol * args, Symbol * expr);
void gen_set_defined_code(Symbol * symbol);
void gen_unary(const char * instruction, Symbol * tgt, Symbol * src);

#endif

