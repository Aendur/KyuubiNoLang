#ifndef GENERATOR_H
#define GENERATOR_H

// #include "node.h"
#include "table.h"
void gen_context_begin(Symbol *context);
void gen_context_end(Symbol * context);
void gen_function_begin(Symbol * args);
void gen_function_end(Symbol * args, Symbol * expr);
void gen_set_defined_code(Symbol * symbol);
void gen_unary(const char *instruction, Symbol *tgt, Symbol *src);
void gen_binary(const char *instruction, Symbol *tgt, Symbol *src1, Symbol *src2);
void gen_asm(const char *str);
void gen_cast(int new_type, Symbol *tgt, Symbol *src);

void gen_do(Symbol * ctx, Symbol * expr);

#endif

