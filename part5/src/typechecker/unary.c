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
extern Tablestack * operation_stack;


//////////////////////
// UNARY OPERATIONS //
//////////////////////

bool tc_unary_promotion(Symbol * op[2]) {
	op[1] = ts_pull(operation_stack);
	
	assert(op[1]->attr->symbol_type != 0);

	int uuid;
	if (tc_temp_symbol(op[1])) { table_retire(ts_top(context_stack), op[1]->key); sscanf(op[1]->key, "$%d", & uuid); if (uuid == ts_top(context_stack)->uuid) { --(ts_top(context_stack)->uuid); }}
	bool defined = (op[1]->attr->defined);

	// char key[40];
	// snprintf(key, 40, "$%d", ++ts_top(context_stack)->uuid);
	// printf("%s\n", key);
	op[0] = add_symbol(defined ? CONSTANT : VARIABLE, op[1]->attr->return_type, NULL);
	op[0]->attr->defined = defined;
	op[0]->attr->temporary = true;
	ts_push(operation_stack, op[0]);

	return defined;
}

Symbol * tc_op_neg(Node * src) {
	Symbol * op[2];
	bool promoted = tc_unary_promotion(op);
	bool error = false;
	// compile time evaluation
	// try to evaluate expression at compile time
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: op[0]->attr->value.ival = -src->symbol->attr->value.ival; break;
		case CHAR: op[0]->attr->value.cval = -src->symbol->attr->value.cval; break;
		case FLOAT: op[0]->attr->value.fval = -src->symbol->attr->value.fval; break;
		default: error = true; error_type1(src->root->name, tc_type_str(type)); break;
	}

	// generate code for this node (cannot perform CTE)
	if (!promoted && !error) { 
		gen_unary("minus", op[0], src->symbol);
	}
	
	// if there was an error, clean up
	if(error) { if(tc_temp_symbol(op[0])) table_free(&op[0]); }

	// cleanup others
	if(tc_temp_symbol(op[1])) table_free(&op[1]);
	tc_prune(src->root);
	return op[0];
}

Symbol * tc_op_not(Node * src) {
	Symbol * op[2];
	bool promoted = tc_unary_promotion(op);
	bool error = false;
	// compile time evaluation
	// try to evaluate expression at compile time
	int type = src->symbol->attr->return_type;
	switch(type) {
		case INT: op[0]->attr->value.ival = !src->symbol->attr->value.ival; break;
		case CHAR: op[0]->attr->value.ival = !src->symbol->attr->value.cval; break;
		case FLOAT: op[0]->attr->value.ival = !src->symbol->attr->value.fval; break;
		default: error = true; error_type1(src->root->name, tc_type_str(type)); break;
	}
	op[0]->attr->return_type = INT; // bools are ints

	// generate code for this node (cannot perform CTE)
	if (!promoted && !error) { 
		gen_unary("not", op[0], src->symbol);
	}
	
	// if there was an error, clean up
	if(error) { if(tc_temp_symbol(op[0])) table_free(&op[0]); }

	// cleanup others
	if(tc_temp_symbol(op[1])) table_free(&op[1]);
	tc_prune(src->root);
	return op[0];
}

Symbol * tc_op_inc(Node * src) {
	(void) src;
	// if (src->symbol->attr->symbol_type == CONSTANT) {
	// 	error_lvalue2(src->root);
	// 	return NULL;
	// }
	// Symbol * op[2];
	// int type = src->symbol->attr->return_type;
	// switch(type) {
	// 	case INT: src->symbol->attr->value.ival += 1; tgt = src->symbol; break;
	// 	case CHAR: src->symbol->attr->value.cval += 1; tgt = src->symbol; break;
	// 	case FLOAT: src->symbol->attr->value.fval += 1; tgt = src->symbol; break;
	// 	default: error_type1(src->root->name, tc_type_str(type)); break;
	// }
	return NULL;
}

Symbol * tc_op_dec(Node * src) {
	(void) src;
	// if (src->symbol->attr->symbol_type == CONSTANT) {
	// 	error_lvalue2(src->root);
	// 	return NULL;
	// }
	// Symbol * op[2];
	// int type = src->symbol->attr->return_type;
	// switch(type) {
	// 	case INT: src->symbol->attr->value.ival -= 1; tgt = src->symbol; break;
	// 	case CHAR: src->symbol->attr->value.cval -= 1; tgt = src->symbol; break;
	// 	case FLOAT: src->symbol->attr->value.fval -= 1; tgt = src->symbol; break;
	// 	default: error_type1(src->root->name, tc_type_str(type)); break;
	// }
	// // tc_cut_tree(src, 0);
	return NULL;
}


