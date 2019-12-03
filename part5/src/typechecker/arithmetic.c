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
// BINARY ARITHMETIC OPERATIONS //
//////////////////////////////////

Symbol * tc_op_add(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	if (promoted) { EVALUATE(OP_ADD); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("add", op[0], op[1], op[2]);
	}
	
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

Symbol * tc_op_or(Node * src1, Node * src2) {(void) src1; (void) src2; return NULL;}
Symbol * tc_op_and(Node * src1, Node * src2) {(void) src1; (void) src2; return NULL;}


Symbol * tc_op_sub(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_SUB); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("sub", op[0], op[1], op[2]);
	}
	
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

Symbol * tc_op_mul(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_MUL); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("mul", op[0], op[1], op[2]);
	}
	
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

Symbol * tc_op_div(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};

	if (div_by_zero(op[2])) { return NULL; }
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_DIV); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("div", op[0], op[1], op[2]);
	}
	
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

Symbol * tc_op_mod(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};

	if (div_by_zero(op[2])) { return NULL; }
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	if(promoted) { EVALUATE(OP_MOD); }
	
	// if CTE was not possible, generate code for this node
	else if (!error) {
		tc_gen_cast(op);
		gen_binary("mod", op[0], op[1], op[2]);
	}
	
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	return op[0];
}

