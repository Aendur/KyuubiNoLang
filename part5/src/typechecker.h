#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include "node.h"
#include "table.h"

// error messengers
void error_type1(Node * node, const char * type1);
void error_type2(Node * node, const char * type1, const char * type2);
void error_cast(const char * type1, const char * type2);
void error_lvalue1(Node * n);
void error_lvalue2(Node * n);
void error_unknown_type(void);
void error_unknown_class(void);
void error_div_by_zero(void);
void error_cannot_evaluate(void);
void error_not_integer(void);

// tools
void tc_prune(Node * root);
bool tc_temp_symbol(Symbol * symbol);
const char * tc_type_str(int type);
char tc_type_chr(int stype, int rtype);

// functions
char * tc_fcall_args(Node * node);
void tc_fcall(Node * node);

// array declaration with size
void tc_arr_decl(Node * src);

// Expressions
void tc_evaluate(Node * node);

// Unary ops
bool tc_unary_promotion(Symbol ** tgt, Symbol * src);
Symbol * tc_op_pos(Node * src);
Symbol * tc_op_neg(Node * src);
Symbol * tc_op_not(Node * src);
Symbol * tc_op_inc(Node * src);
Symbol * tc_op_dec(Node * src);

// Binary ops
Symbol * tc_pull_operand(Symbol * op);
bool tc_binary_promotion(Symbol ** tgt, Symbol ** op1, Symbol ** op2);
bool div_by_zero(Symbol * den);
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

