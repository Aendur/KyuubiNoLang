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
extern Tablestack * operation_stack;


///////////////////////
// BINARY OPERATIONS //
///////////////////////

// void debug_stack_print(Tablestack * stack) {
// 	struct selene * elem = stack->top;
// 	printf("%d\n", stack->size);
// 	while (elem != stack->bot) {
// 		printf("%s\n", elem->symbol->key);
// 		getchar();
// 		elem = elem->below;
// 	}
// }

bool tc_binary_promotion(Symbol * op[3]) {
	// debug_stack_print(operation_stack);
	// getchar();
	op[2] = ts_pull(operation_stack);
	op[1] = ts_pull(operation_stack);
	
	if (op[2] == NULL || op[1] == NULL) { return false; }
	assert(op[1]->attr->symbol_type != 0);
	assert(op[2]->attr->symbol_type != 0);

	int uuid;
	if (tc_temp_symbol(op[2])) { table_retire(ts_top(context_stack), op[2]->key); sscanf(op[2]->key, "$%d", & uuid); if (uuid == ts_top(context_stack)->uuid) { --(ts_top(context_stack)->uuid); }}
	if (tc_temp_symbol(op[1])) { table_retire(ts_top(context_stack), op[1]->key); sscanf(op[1]->key, "$%d", & uuid); if (uuid == ts_top(context_stack)->uuid) { --(ts_top(context_stack)->uuid); }}
	bool defined = (op[1]->attr->defined && op[2]->attr->defined);

	op[0] = add_symbol(defined ? CONSTANT : VARIABLE, op[1]->attr->return_type, NULL);
	op[0]->attr->defined = defined;
	op[0]->attr->temporary = true;
	ts_push(operation_stack, op[0]);

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

	Symbol * op2 = ts_pull(operation_stack);
	if (op2 != src2->symbol) { return NULL; }
	
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
	if (!error) {
		gen_set_defined_code(op2);
		if (type1 != type2) {
			Symbol * temp = add_symbol(CONSTANT, type1, NULL);
			gen_cast(type1, temp, op2);
			gen_unary("mov", tgt, temp);
			if (tc_temp_symbol(temp)) { table_remove(ts_top(context_stack), temp->key); --ts_top(context_stack)->uuid; }
		} else {
			gen_unary("mov", tgt, op2);
		}
		// printf("INT %d\n", INT);
		// printf("CHAR %d\n", CHAR);
		// printf("FLOAT %d\n", FLOAT);
		// printf("%d %d\n", type1, type2);
		// getchar();
		tc_prune(node);
		if (tc_temp_symbol(op2)) { table_remove(ts_top(context_stack), op2->key); --ts_top(context_stack)->uuid; }
	} else {
		// clean up if there was an error
		tgt = NULL;
	}
	return tgt;
}

//////////////////////////////////
// BINARY ARITHMETIC OPERATIONS //
//////////////////////////////////

Symbol * tc_op_add(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_ADD);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("add", op[0], op[1], op[2]);
	}
	
	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

// Symbol * tc_op_sub(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_mul(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_div(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_mod(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_lt(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_le(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_gt(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_ge(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_eq(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_ne(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_or(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }
// Symbol * tc_op_and(Node * src1, Node * src2) { (void) src1; (void) src2; return NULL; }


Symbol * tc_op_sub(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_SUB);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("sub", op[0], op[1], op[2]);
	}
	
	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_mul(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_MUL);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("mul", op[0], op[1], op[2]);
	}
	
	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_div(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	if (div_by_zero(op[2])) { return NULL; }
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_DIV);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("div", op[0], op[1], op[2]);
	}
	
	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_mod(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	if (div_by_zero(op[2])) { return NULL; }
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_MOD);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("mod", op[0], op[1], op[2]);
	}
	
	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

///////////////////////////////
// BINARY LOGICAL OPERATIONS //
///////////////////////////////

Symbol * tc_op_and(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_AND);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("and", op[0], op[1], op[2]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_or(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_OR);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("or", op[0], op[1], op[2]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

//////////////////////////////////
// BINARY RELATIONAL OPERATIONS //
//////////////////////////////////

Symbol * tc_op_lt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_LT);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("slt", op[0], op[1], op[2]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_le(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_LE);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("sleq", op[0], op[1], op[2]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_ge(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_GE);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("slt", op[0], op[1], op[2]);
		gen_unary ("not", op[0], op[0]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

Symbol * tc_op_gt(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_GT);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("sleq", op[0], op[1], op[2]);
		gen_unary ("not" , op[0], op[0]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_eq(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_EQ);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("seq", op[0], op[1], op[2]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}


Symbol * tc_op_ne(Node * src1, Node * src2) {
	Node * node = src1->root;
	Symbol * op[3];
	bool promoted = tc_binary_promotion(op);
	bool error = false;

	assert(op[1] == src1->symbol);
	assert(op[2] == src2->symbol);

	// perform CTE if possible
	EVALUATE(OP_NE);
	
	// if CTE was not possible, generate code for this node
	if (!promoted && !error) {
		tc_gen_cast(op);
		gen_binary("seq", op[0], op[1], op[2]);
		gen_unary ("not", op[0], op[0]);
	}

	// clean up
	if (tc_temp_symbol(op[2])) { table_free(&(op[2])); }
	if (tc_temp_symbol(op[1])) { table_free(&(op[1])); }
	tc_prune(node);
	return op[0];
}

