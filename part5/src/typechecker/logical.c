#include "typechecker.h"
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

Symbol * tc_op_or(Node * src1, Node * src2) {
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
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.ival || op2->attr->value.ival); break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.ival || op2->attr->value.cval); break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.ival || op2->attr->value.fval); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.cval || op2->attr->value.ival); break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.cval || op2->attr->value.cval); break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.cval || op2->attr->value.fval); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.fval || op2->attr->value.ival); break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.fval || op2->attr->value.cval); break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.fval || op2->attr->value.fval); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	tgt->attr->return_type = INT; // bools are ints

	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		gen_binary("or", tgt, src1->symbol, src2->symbol);
	}
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}


Symbol * tc_op_and(Node * src1, Node * src2) {
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
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.ival && op2->attr->value.ival); break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.ival && op2->attr->value.cval); break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.ival && op2->attr->value.fval); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.cval && op2->attr->value.ival); break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.cval && op2->attr->value.cval); break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.cval && op2->attr->value.fval); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.fval && op2->attr->value.ival); break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.fval && op2->attr->value.cval); break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (op1->attr->value.fval && op2->attr->value.fval); break;
			default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node->name, tc_type_str(type1), tc_type_str(type2)); break;
	}

	tgt->attr->return_type = INT; // bools are ints

	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		gen_binary("and", tgt, src1->symbol, src2->symbol);
	}
	// clean up
	tc_prune(node);
	if(tc_temp_symbol(op2)) table_free(&op2);
	if(tc_temp_symbol(op1)) table_free(&op1);
	return tgt;
}




