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

///////////////////////////////
// BINARY LOGICAL OPERATIONS //
///////////////////////////////

Symbol * tc_op_and(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if (promoted) { EVALUATE(OP_AND); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("and", tgt, src1->symbol, src2->symbol);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

Symbol * tc_op_or(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_OR); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("or", tgt, src1->symbol, src2->symbol);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

//////////////////////////////////
// BINARY RELATIONAL OPERATIONS //
//////////////////////////////////

Symbol * tc_op_lt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_LT); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("slt", tgt, src1->symbol, src2->symbol);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}


Symbol * tc_op_le(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_LE); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("sleq", tgt, src1->symbol, src2->symbol);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}


Symbol * tc_op_ge(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_GE); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("slt", tgt, src1->symbol, src2->symbol);
		gen_unary ("not", tgt, tgt);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

Symbol * tc_op_gt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_GT); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("sleq", tgt, src1->symbol, src2->symbol);
		gen_unary ("not" , tgt, tgt);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}


Symbol * tc_op_eq(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_EQ); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("seq", tgt, src1->symbol, src2->symbol);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}


Symbol * tc_op_ne(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	if(promoted) { EVALUATE(OP_NE); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("seq", tgt, src1->symbol, src2->symbol);
		gen_unary ("not", tgt, tgt);
	}

	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}


