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

int tc_who_casts(int type1, int type2) {
	switch(type1) {
		case INT: switch(type2) {
			case INT: return 0;
			case CHAR: return 2;
			case FLOAT: return 1;
			default: return -1;
		} break;
		case CHAR: switch(type2) {
			case INT: return 1;
			case CHAR: return 0;
			case FLOAT: return 1;
			default: return -1;
		} break;
		case FLOAT: switch(type2) {
			case INT: return 2;
			case CHAR: return 2;
			case FLOAT: return 0;
			default: return -1;
		} break;
		default: return -1;
	}
}

void tc_gen_cast(Symbol * op[3]) {
	int t[3] = {
		op[0]->attr->return_type,
		op[1]->attr->return_type,
		op[2]->attr->return_type,
	};
	int caster = tc_who_casts(t[1], t[2]);
	if(caster) {
		int other = 3-caster;
		if(tc_temp_symbol(op[caster])) {
	 		gen_cast(t[other], op[caster], op[caster]);
		} else {
			gen_cast(t[other], op[0], op[caster]);
			op[caster] = op[0];
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
		gen_set_defined_code(tgt);
		if (tc_temp_symbol(op2)) { table_remove(context_stack->top, op2->key); }
		tc_prune(node);
	} else {
		strcpy(tgt->attr->code, op2->attr->code);
	}

	// clean up if there was an error
	if (error) { tgt = NULL; }
	return tgt;
}

//////////////////////////////////
// BINARY ARITHMETIC OPERATIONS //
//////////////////////////////////

Symbol * tc_op_add(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	EVALUATE(OP_ADD);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("add", op[0], op[1], op[2]);
	}
	
	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_sub(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	EVALUATE(OP_SUB);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("sub", op[0], op[1], op[2]);
	}
	
	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_mul(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	EVALUATE(OP_MUL);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("mul", op[0], op[1], op[2]);
	}
	
	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_div(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};

	if (div_by_zero(op[2])) { return NULL; }
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	EVALUATE(OP_DIV);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("div", op[0], op[1], op[2]);
	}
	
	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_mod(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};

	if (div_by_zero(op[2])) { return NULL; }
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;
	
	// perform CTE if possible
	EVALUATE(OP_MOD);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("mod", op[0], op[1], op[2]);
	}
	
	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

///////////////////////////////
// BINARY LOGICAL OPERATIONS //
///////////////////////////////

Symbol * tc_op_and(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_AND);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("and", op[0], op[1], op[2]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_or(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_OR);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("or", op[0], op[1], op[2]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
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
	EVALUATE(OP_LT);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("slt", op[0], op[1], op[2]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_le(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_LE);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("sleq", op[0], op[1], op[2]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_ge(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_GE);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("slt", op[0], op[1], op[2]);
		gen_unary ("not", op[0], op[0]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_gt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_GT);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("sleq", op[0], op[1], op[2]);
		gen_unary ("not" , op[0], op[0]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_eq(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_EQ);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("seq", op[0], op[1], op[2]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_ne(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3] = {NULL, src1->symbol, src2->symbol};
	bool promoted = tc_binary_promotion(&op[0], &op[1], &op[2]);
	bool error = false;

	// perform CTE if possible
	EVALUATE(OP_NE);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("seq", op[0], op[1], op[2]);
		gen_unary ("not", op[0], op[0]);
	}

	// clean up
	if(tc_temp_symbol(src1->symbol)) table_free(&(src1->symbol));
	if(tc_temp_symbol(src2->symbol)) table_free(&(src2->symbol));
	tc_prune(node);
	return op[0];
}

