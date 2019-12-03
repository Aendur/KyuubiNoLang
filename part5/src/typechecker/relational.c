#include "typechecker.h"
#include "evaluator.h"
#include "generator.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"
#include "error.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

extern int yynerrs;
//static const int ERROR_MSG_BUFFER=256;
extern Tablestack * context_stack;

//////////////////////////////////
// BINARY RELATIONAL OPERATIONS //
//////////////////////////////////

Symbol * tc_op_lt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	bool error = false;
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_LT); }
		// if CTE was not possible, generate code for this node
	else if(!error) { gen_binary("slt", tgt, src1->symbol, src2->symbol); }
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}


Symbol * tc_op_le(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	bool error = false;
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_LE); }
	// if CTE was not possible, generate code for this node
	else if(!error) { gen_binary("sleq", tgt, src1->symbol, src2->symbol); }
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}


Symbol * tc_op_ge(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	bool error = false;
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_GE); }
	// if CTE was not possible, generate code for this node
	else if(!error) { gen_binary("slt", tgt, src1->symbol, src2->symbol); gen_unary ("not", tgt, tgt); }
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}

Symbol * tc_op_gt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	bool error = false;
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_GT); }
	// if CTE was not possible, generate code for this node
	else if(!error) { gen_binary("sleq", tgt, src1->symbol, src2->symbol); gen_unary ("not" , tgt, tgt); }
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}


Symbol * tc_op_eq(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	bool error = false;
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_EQ); }
	// if CTE was not possible, generate code for this node
	else if(!error) { gen_binary("seq", tgt, src1->symbol, src2->symbol); }
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}


Symbol * tc_op_ne(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	bool error = false;
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_NE); }
	// if CTE was not possible, generate code for this node
	else if(!error) { gen_binary("seq", tgt, src1->symbol, src2->symbol); gen_unary ("not", tgt, tgt); }
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}

