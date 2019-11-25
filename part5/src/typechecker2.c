#include "typechecker.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

extern int yynerrs;
//static const int ERROR_MSG_BUFFER=256;
extern Tablestack * context_stack;


///////////////////////
// BINARY OPERATIONS //
///////////////////////

Symbol * tc_pull_operand(Symbol * op) {
	assert(op != NULL);
	if (tc_temp_symbol(op)) {
		return table_retire(context_stack->top, op->key);
	} else {
		return op;
	}
}

bool tc_binary_promotion(Symbol ** tgt, Symbol ** op1, Symbol ** op2) {
	if ((*op1)->attr->defined && (*op2)->attr->defined) {
		if (tc_temp_symbol(*op1) && tc_temp_symbol(*op2)) {
			(*op2) = tc_pull_operand(*op2);
			(*tgt) = (*op1);
			return true;
		} else {
			(*op2) = tc_pull_operand(*op2);
			(*tgt) = add_symbol(CONSTANT, (*op1)->attr->return_type, NULL);
			(*tgt)->attr->defined = true;
			return true;
		}
	} else {
		(*tgt) = add_symbol(CONSTANT, (*op1)->attr->return_type, NULL);
		(*tgt)->attr->defined = false;
		return false;
	}
}

bool div_by_zero(Symbol * den) {
	// if(num->attr->return_type != FLOAT) {
		switch(den->attr->return_type) {
			case INT: if (den->attr->value.ival == 0) { error_div_by_zero(); return true; } else { return false; }
			case CHAR: if (den->attr->value.cval == 0) { error_div_by_zero(); return true; } else { return false; }
			case FLOAT: if (den->attr->value.fval == 0.0f) { error_div_by_zero(); return true; } else { return false; }
			default: return false;
		}
	// } else {
	// 	return false;
	// }
}

/////////////////////////////////
// BINARY ASSIGNMENT OPERATION //
/////////////////////////////////

Symbol * tc_op_assign(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op1 = src1->symbol;
	if (op1->attr->symbol_type == CONSTANT) {
		error_lvalue1(node);
		return NULL;
	}

	Symbol * op2 = src2->symbol;
	Symbol * tgt = op1;


	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;
	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->value.ival = op2->attr->value.ival; break;
			case CHAR: tgt->attr->value.ival = op2->attr->value.cval; break;
			case FLOAT: error = true; error_cast(tc_type_str(type1), tc_type_str(type2)); break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: error = true; error_cast(tc_type_str(type1), tc_type_str(type2)); break;
			case CHAR: tgt->attr->value.cval = op2->attr->value.cval; break;
			case FLOAT: error = true; error_cast(tc_type_str(type1), tc_type_str(type2)); break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->value.fval = op2->attr->value.ival; break;
			case CHAR: tgt->attr->value.fval = op2->attr->value.cval; break;
			case FLOAT: tgt->attr->value.fval = op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
	}

	if (op2->attr->defined) { // prune this subtree tree if symbol was promoted
		tgt->attr->defined = true;
		tc_prune(node);
		if (tc_temp_symbol(op2)) {
			table_remove(context_stack->top, op2->key);
		}
	}
	if (error) { // clean up if there was an error
		tgt = NULL;
	}

	return tgt;
}
