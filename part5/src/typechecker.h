#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include "node.h"
#include "table.h"

// error messengers
void error_type(Node * n, const char *);
void error_types(Node * node, char * type1, char * type2);
void error_lvalue(Node * n);
void error_unknown_type(void);
void error_unknown_class(void);
void error_div_by_zero(void);

// tools
void tc_cut_tree(Node * leaf, int index);
bool tc_temp_symbol(Symbol * symbol);

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
bool div_by_zero(Symbol * num, Symbol * den);
Symbol * tc_op_add(Node * src1, Node * src2);
Symbol * tc_op_sub(Node * src1, Node * src2);
Symbol * tc_op_mul(Node * src1, Node * src2);
Symbol * tc_op_div(Node * src1, Node * src2);
Symbol * tc_op_mod(Node * src1, Node * src2);


#endif

