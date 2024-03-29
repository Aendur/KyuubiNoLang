#ifndef GENERATOR_H
#define GENERATOR_H

// #include "node.h"
#include "table.h"
void gen_context_begin(Symbol *context);
void gen_context_end(Symbol * context);
void gen_function_begin(Symbol * args);
void gen_function_end(Symbol * args, Symbol * expr);
void gen_set_defined_code(Symbol * symbol);
void gen_nullary(const char * instruction, Symbol * src);
void gen_unary(const char *instruction, Symbol *tgt, Symbol *src);
void gen_binary(const char *instruction, Symbol *tgt, Symbol *src1, Symbol *src2);
void gen_inc(const char * instruction, Symbol * tgt);
void gen_asm(const char *str);
void gen_cast(int new_type, Symbol *tgt, Symbol *src);

void gen_call(Symbol * func);

void gen_do(Symbol * ctx, Symbol * expr);
void gen_jump(const char * instr, const char * label, Symbol * expr);
void gen_label(const char *prefix, const char *text, const char *suffix);

void gen_global_var(Symbol * var);
void gen_global_str(Symbol * var);

#endif

