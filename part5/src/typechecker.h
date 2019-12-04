#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include "node.h"
#include "table.h"
#include <stdbool.h>

// tools
void tc_prune(Node * root);
bool tc_temp_symbol(Symbol * symbol);
const char * tc_type_str(int type);
char tc_type_chr(int stype, int rtype);

// functions
char * tc_fcall_args(Node * list_node, Node * expr_node);
void tc_fcall(Node * node, Node * args);
Symbol * tc_return(Node * src);

// asm
void tc_asm(const char * str);

// flow control
void tc_free_do(Node * expr);
void tc_init_while(const char * prefix, const char * suffix);
void tc_jump_while(Node * expr);
void tc_free_while(void);
void tc_init_if(Node * expr, const char * prefix, const char * suffix);
void tc_init_else(void);
void tc_free_if(bool);

// array declaration with size
//void tc_arr_decl(Node * src);
void tc_arr_init(Node * node, Symbol * init);

// Expressions
void tc_evaluate(Node * node);


// Unary ops
bool tc_unary_promotion(Symbol * op[2]);
// Symbol * tc_op_pos(Node * src);
Symbol * tc_op_neg(Node * src);
Symbol * tc_op_not(Node * src);
Symbol * tc_op_inc(Node * src);
Symbol * tc_op_dec(Node * src);

// Binary ops
Symbol * tc_pull_operand(Symbol * op);
bool tc_binary_promotion(Symbol * op[3]);
bool div_by_zero(Symbol * den);
int tc_who_casts(int type1, int type2);
void tc_gen_cast(Symbol * op[3]);
//arithmetic
Symbol * tc_op_add(Node * src1, Node * src2);
Symbol * tc_op_sub(Node * src1, Node * src2);
Symbol * tc_op_mul(Node * src1, Node * src2);
Symbol * tc_op_div(Node * src1, Node * src2);
Symbol * tc_op_mod(Node * src1, Node * src2);
//relational
Symbol * tc_op_lt(Node * src1, Node * src2);
Symbol * tc_op_le(Node * src1, Node * src2);
Symbol * tc_op_gt(Node * src1, Node * src2);
Symbol * tc_op_ge(Node * src1, Node * src2);
Symbol * tc_op_eq(Node * src1, Node * src2);
Symbol * tc_op_ne(Node * src1, Node * src2);
//logical
Symbol * tc_op_or(Node * src1, Node * src2);
Symbol * tc_op_and(Node * src1, Node * src2);
//assignment
Symbol * tc_op_assign(Node * src1, Node * src2);

#endif

