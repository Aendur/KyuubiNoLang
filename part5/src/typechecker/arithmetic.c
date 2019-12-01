#include "typechecker.h"
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
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;
	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival + op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival + op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.ival + op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval + op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval + op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval + op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval + op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval + op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval + op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	if (promoted) { // prune this subtree tree if symbol was promoted
		tc_prune(node);
		table_free(&op2);
	}
	if (error) { // clean up if there was an error
		table_free(&tgt);
	}

	return tgt;
}


Symbol * tc_op_sub(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;
	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival - op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival - op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.ival - op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval - op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval - op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval - op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval - op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval - op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval - op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	if (promoted) { // prune this subtree tree if symbol was promoted
		tc_prune(node);
		table_free(&op2);
	}
	if (error) { // clean up if there was an error
		table_free(&tgt);
	}

	return tgt;
}


Symbol * tc_op_mul(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;
	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival * op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival * op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.ival * op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval * op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval * op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval * op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval * op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval * op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval * op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	if (promoted) { // prune this subtree tree if symbol was promoted
		tc_prune(node);
		table_free(&op2);
	}
	if (error) { // clean up if there was an error
		table_free(&tgt);
	}

	return tgt;
}



Symbol * tc_op_div(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;

	if (div_by_zero(op2)) { return NULL; }
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;

	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival / op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival / op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.ival / op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval / op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval / op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval / op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval / op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval / op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval / op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	if (promoted) { // prune this subtree tree if symbol was promoted
		tc_prune(node);
		table_free(&op2);
	}
	if (error) { // clean up if there was an error
		table_free(&tgt);
	}

	return tgt;
}

Symbol * tc_op_mod(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	Symbol * op2 = src2->symbol;
	Symbol * tgt = NULL;

	if (div_by_zero(op2)) { return NULL; }
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;

	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.ival % (int) op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.ival % (int) op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.ival % (int) op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.cval % (int) op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.cval % (int) op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.cval % (int) op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.fval % (int) op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.fval % (int) op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.fval % (int) op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	tgt->attr->return_type = INT; // mod is int

	if (promoted) { // prune this subtree tree if symbol was promoted
		tc_prune(node);
		table_free(&op2);
	}
	if (error) { // clean up if there was an error
		table_free(&tgt);
	}

	return tgt;
}
