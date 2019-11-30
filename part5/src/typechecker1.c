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

//////////////////////
// UNARY OPERATIONS //
//////////////////////
bool tc_unary_promotion(Symbol ** tgt, Symbol * src) {
	if (src->attr->defined) {
		if (tc_temp_symbol(src)) {
			(*tgt) = src;
			return true;
		} else {
			(*tgt) = add_symbol(CONSTANT, src->attr->return_type, NULL);
			(*tgt)->attr->defined = true;
			return false;
		}
	} else {
		(*tgt) = add_symbol(CONSTANT, src->attr->return_type, NULL);
		(*tgt)->attr->defined = false;
		return false;
	}
}

Symbol * tc_op_pos(Node * src) {
	Symbol * tgt = NULL;
	bool promoted = tc_unary_promotion(&tgt, src->symbol);

	bool error = false;
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: tgt->attr->value.ival = src->symbol->attr->value.ival; break;
		case CHAR: tgt->attr->value.cval = src->symbol->attr->value.cval; break;
		case FLOAT: tgt->attr->value.fval = src->symbol->attr->value.fval; break;
		default: error = true; error_type1(src->root, tc_type_str(type)); break;
	}
	
	if (promoted) { tc_prune(src->root); } // prune this subtree tree if symbol was promoted
	else if(error) { table_free(&tgt); }   // clean up if there was an error

	return tgt;
}

Symbol * tc_op_neg(Node * src) {
	Symbol * tgt = NULL;
	bool promoted = tc_unary_promotion(&tgt, src->symbol);

	bool error = false;
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: tgt->attr->value.ival = -src->symbol->attr->value.ival; break;
		case CHAR: tgt->attr->value.cval = -src->symbol->attr->value.cval; break;
		case FLOAT: tgt->attr->value.fval = -src->symbol->attr->value.fval; break;
		default: error = true; error_type1(src->root, tc_type_str(type)); break;
	}
	
	if (promoted) { tc_prune(src->root); } // prune this subtree tree if symbol was promoted
	else if(error) { table_free(&tgt); }   // clean up if there was an error

	return tgt;
}

Symbol * tc_op_not(Node * src) {
	Symbol * tgt = NULL;
	bool promoted = tc_unary_promotion(&tgt, src->symbol);

	bool error = false;
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: tgt->attr->value.ival = !(src->symbol->attr->value.ival); break;
		case CHAR: tgt->attr->value.ival = !(src->symbol->attr->value.cval); break;
		case FLOAT: tgt->attr->value.ival = !(src->symbol->attr->value.fval); break;
		default: error = true; error_type1(src->root, tc_type_str(type)); break;
	}
	
	if (tc_temp_symbol(tgt)) { tgt->attr->return_type = INT; } // bools are ints
	if (promoted) { tc_prune(src->root); } // prune this subtree tree if symbol was promoted
	else if(error) { table_free(&tgt); }   // clean up if there was an error

	return tgt;
}

Symbol * tc_op_inc(Node * src) {
	if (src->symbol->attr->symbol_type == CONSTANT) {
		error_lvalue2(src->root);
		return NULL;
	}
	Symbol * tgt = NULL;
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: src->symbol->attr->value.ival += 1; tgt = src->symbol; break;
		case CHAR: src->symbol->attr->value.cval += 1; tgt = src->symbol; break;
		case FLOAT: src->symbol->attr->value.fval += 1; tgt = src->symbol; break;
		default: error_type1(src->root, tc_type_str(type)); break;
	}
	// tc_cut_tree(src, 0);
	return tgt;
}

Symbol * tc_op_dec(Node * src) {
	if (src->symbol->attr->symbol_type == CONSTANT) {
		error_lvalue2(src->root);
		return NULL;
	}
	Symbol * tgt = NULL;
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: src->symbol->attr->value.ival -= 1; tgt = src->symbol; break;
		case CHAR: src->symbol->attr->value.cval -= 1; tgt = src->symbol; break;
		case FLOAT: src->symbol->attr->value.fval -= 1; tgt = src->symbol; break;
		default: error_type1(src->root, tc_type_str(type)); break;
	}
	// tc_cut_tree(src, 0);
	return tgt;
}

