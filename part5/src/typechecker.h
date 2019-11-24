#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include "node.h"
#include "table.h"

void error_type(Node * n, const char *);
void error_types(Node * node, char * type1, char * type2);
void error_lvalue(Node * n);
void error_unknown_type(void);
void error_unknown_class(void);

void tc_cut_tree(Node * leaf, int index);

// Expressions
void tc_evaluate(Node * node);

// Unary ops
Symbol * tc_op_pos(Node * src);
Symbol * tc_op_neg(Node * src);
Symbol * tc_op_not(Node * src);
Symbol * tc_op_inc(Node * src);
Symbol * tc_op_dec(Node * src);

// Binary ops
Symbol * tc_op_add(Node * src1, Node * src2);


#endif

