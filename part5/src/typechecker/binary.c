#include "typechecker.h"
#include "generator.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"
#include "error.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yynerrs;
extern void * kindex;
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
	bool defined = ((*op1)->attr->defined && (*op2)->attr->defined);
	bool temp2 = tc_temp_symbol(*op2);
	bool temp1 = tc_temp_symbol(*op1);
	
	if (temp2) { (*op2) = table_retire(context_stack->top, (*op2)->key); }
	if (temp1) { (*op1) = table_retire(context_stack->top, (*op1)->key); }
	
	(*tgt) = add_symbol(CONSTANT, (*op1)->attr->return_type, NULL);
	(*tgt)->attr->defined = defined;
	
	return defined;
}

bool div_by_zero(Symbol * den) {
	if (den->attr->defined) {
		switch(den->attr->return_type) {
			case INT: if ((int) den->attr->value.ival == 0) { error_div_by_zero(); return true; } else { return false; }
			case CHAR: if ((int) den->attr->value.cval == 0) { error_div_by_zero(); return true; } else { return false; }
			case FLOAT: if ((int) den->attr->value.fval == 0) { error_div_by_zero(); return true; } else { return false; }
			default: return false;
		}
	} else {
		switch(den->attr->return_type) {
			case INT: den->attr->value.ival = 1; return false;
			case CHAR: den->attr->value.cval = (char) 1; return false;
			case FLOAT: den->attr->value.fval = 1.0f; return false;
			default: return false;
		}
	}
}

/////////////////////////////////
// BINARY ASSIGNMENT OPERATION //
/////////////////////////////////

Symbol * tc_op_assign(Node * tgt1, Node * src2) {
	Node * node = tgt1->root;
	Symbol * tgt = tgt1->symbol;
	if (tgt->attr->symbol_type == CONSTANT) {
		error_lvalue1(node);
		return NULL;
	}
	Symbol * op2 = src2->symbol;

	int type1 = tgt->attr->return_type;
	int type2 = op2->attr->return_type;
	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->value.ival = op2->attr->value.ival; break;
			case CHAR: tgt->attr->value.ival = op2->attr->value.cval; break;
			case FLOAT: error = true; error_cast(tc_type_str(type1), tc_type_str(type2)); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: error = true; error_cast(tc_type_str(type1), tc_type_str(type2)); break;
			case CHAR: tgt->attr->value.cval = op2->attr->value.cval; break;
			case FLOAT: error = true; error_cast(tc_type_str(type1), tc_type_str(type2)); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->value.fval = op2->attr->value.ival; break;
			case CHAR: tgt->attr->value.fval = op2->attr->value.cval; break;
			case FLOAT: tgt->attr->value.fval = op2->attr->value.fval; break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	// prune this subtree tree if symbol was promoted
	if (op2->attr->defined) {
		tgt->attr->defined = true;
		tc_prune(node);
		//strcpy(tgt->attr->code, op2->attr->code);
		gen_set_defined_code(tgt);
		if (tc_temp_symbol(op2)) { table_remove(context_stack->top, op2->key); }
	} else {
		strcpy(tgt->attr->code, op2->attr->code);
	}

	// clean up if there was an error
	if (error) { tgt = NULL; }

	return tgt;
}
