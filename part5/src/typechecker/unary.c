#include "typechecker.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"
#include "error.h"
#include "generator.h"

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
	if (tc_temp_symbol(src)) {
		(*tgt) = src;
	} else {
		(*tgt) = add_symbol(CONSTANT, src->attr->return_type, NULL);
		(*tgt)->attr->defined = src->attr->defined;
	}
	return src->attr->defined;
}

Symbol * tc_op_neg(Node * src) {
	Symbol * tgt = NULL;

	// try to evaluate expression at compile time
	bool promoted = tc_unary_promotion(&tgt, src->symbol);

	bool error = false;
	int type = src->symbol->attr->return_type;
	// compile time evaluation
	switch(type) {
		case INT: tgt->attr->value.ival = -src->symbol->attr->value.ival; break;
		case CHAR: tgt->attr->value.cval = -src->symbol->attr->value.cval; break;
		case FLOAT: tgt->attr->value.fval = -src->symbol->attr->value.fval; break;
		default: error = true; error_type1(src->root->name, tc_type_str(type)); break;
	}
	// prune this subtree tree if symbol was promoted (CTE)
	if (promoted) { tc_prune(src->root); }
	// otherwise,
	else {
		// if there was an error, clean up
		if(error) { if(tc_temp_symbol(tgt)) table_free(&tgt); }
		// otherwise, generate code for this node (cannot perform CTE)
		else { gen_unary("minus", tgt, src->symbol); } 
	}
	return tgt;
}

Symbol * tc_op_not(Node * src) {
	Symbol * tgt = NULL;

	// try to evaluate expression at compile time
	bool promoted = tc_unary_promotion(&tgt, src->symbol);

	bool error = false;
	int type = src->symbol->attr->return_type;
	// compile time evaluation
	switch(type) {
		case INT: tgt->attr->value.ival = !src->symbol->attr->value.ival; break;
		case CHAR: tgt->attr->value.ival = !src->symbol->attr->value.cval; break;
		case FLOAT: tgt->attr->value.ival = !src->symbol->attr->value.fval; break;
		default: error = true; error_type1(src->root->name, tc_type_str(type)); break;
	}
	tgt->attr->return_type = INT; // bools are ints
	// prune this subtree tree if symbol was promoted (CTE)
	if (promoted) { tc_prune(src->root); }
	// otherwise,
	else {
		// if there was an error, clean up
		if(error) { if(tc_temp_symbol(tgt)) table_free(&tgt); }
		// otherwise, generate code for this node (cannot perform CTE)
		else { gen_unary("not", tgt, src->symbol); } 
	}
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
		default: error_type1(src->root->name, tc_type_str(type)); break;
	}
	//if(src->symbol->attr->defined) {
	//	tc_prune(src->root);
	//} else {
	//	//gen_binary
	//}
	
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
		default: error_type1(src->root->name, tc_type_str(type)); break;
	}
	// tc_cut_tree(src, 0);
	return tgt;
}


