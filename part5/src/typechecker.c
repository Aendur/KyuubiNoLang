#include "typechecker.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

extern int yynerrs;
static const int ERROR_MSG_BUFFER=256;
extern Tablestack * context_stack;

/////////////////////
// Error messaging //
/////////////////////

void error_type1(Node * node, const char * type1) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s requires 'int', 'char' or 'float' types, not '%s'", node->name, type1);
	++yynerrs;
	yyerror(msg);
}

void error_type2(Node * node, const char * type1, const char * type2) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: incompatible types, '%s' %s '%s'", type1, node->name, type2);
	++yynerrs;
	yyerror(msg);
}

void error_lvalue(Node * node) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s operator requires lvalue", node->name);
	++yynerrs;
	yyerror(msg);
}

void error_unknown_type(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine symbol type");
	++yynerrs;
	yyerror(msg);
}

void error_unknown_class(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine symbol class");
	++yynerrs;
	yyerror(msg);
}

void error_div_by_zero(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: integer division by zero");
	++yynerrs;
	yyerror(msg);
}

///////////
// Tools //
///////////

void tc_prune(Node * root) {
	while (root->nleaves > 0) {
		root->nleaves -= 1;
		node_free_recursive(&(root->leaf[root->nleaves]));
	}
}

//void tc_cut_tree(Node * leaf, int index) {
//	Node * root = leaf->root;
//	root->nleaves--;
//	node_free_recursive(&(root->leaf[index]));
//}

bool tc_temp_symbol(Symbol * symbol) {
	bool a = symbol->attr->temporary;
	bool b = ( symbol->key[0] == '$'
		&&   symbol->key[1] >= '0'
		&&   symbol->key[1] <= '9'
	);
	assert(a == b);
	return a;
}

const char * tc_type_str(int type) {
	switch(type) {
		case VOID: return "void"; 
		case INT: return "int"; 
		case CHAR: return "char"; 
		case FLOAT: return "float"; 
		case STRING: return "char[]"; 
		default: return "unknown type"; 
	}
}

/////////////////
// Expressions //
/////////////////
void tc_evaluate(Node * node) {
	if (node == NULL) { fprintf(stderr, "evaluate null node\n"); return; }

	//fprintf(stderr, "unary op does not have 1 operand\n"); return NULL; 

	if (node->nleaves == 1) {
		Node * op1 = node->leaf[0]; 
		if (op1 == NULL) {fprintf(stderr, "null unary operand node\n"); return; }
		if (op1->symbol == NULL) {fprintf(stderr, "null unary operand\n"); return; }
		switch(node->type) {
			case OP_POS: node->symbol = tc_op_pos(op1); break;
			case OP_NEG: node->symbol = tc_op_neg(op1); break;
			case OP_NOT: node->symbol = tc_op_not(op1); break;
			case OP_INC: node->symbol = tc_op_inc(op1); break;
			case OP_DEC: node->symbol = tc_op_dec(op1); break;
			default: fprintf(stderr, "unknown unary operator\n"); break;
		}
	} else if (node->nleaves == 2) {
		Node * op1 = node->leaf[0];
		Node * op2 = node->leaf[1];
		if (op1 == NULL) { fprintf(stderr, "null binary operand node\n"); return; }
		if (op1->symbol == NULL) { fprintf(stderr, "null binary operand\n"); return; }
		if (op2 == NULL) { fprintf(stderr, "null binary operand node\n"); return; }
		if (op2->symbol == NULL)  {fprintf(stderr, "null binary operand\n"); return; }

		switch(node->type) {
			case OP_ASSIGN: node->symbol = NULL; break; /*tc_op_assign(op1, op2); break;*/
			case OP_OR:     node->symbol = NULL; break; /*tc_op_or(op1, op2); break;*/ 
			case OP_AND:    node->symbol = NULL; break; /*tc_op_and(op1, op2); break;*/ 
			case OP_EQ:     node->symbol = NULL; break; /*tc_op_eq(op1, op2); break;*/ 
			case OP_NE:     node->symbol = NULL; break; /*tc_op_ne(op1, op2); break;*/ 
			case OP_LT:     node->symbol = NULL; break; /*tc_op_lt(op1, op2); break;*/ 
			case OP_LE:     node->symbol = NULL; break; /*tc_op_le(op1, op2); break;*/ 
			case OP_GE:     node->symbol = NULL; break; /*tc_op_ge(op1, op2); break;*/ 
			case OP_GT:     node->symbol = NULL; break; /*tc_op_gt(op1, op2); break;*/ 
			case OP_ADD:    node->symbol = tc_op_add(op1, op2); break;
			case OP_SUB:    node->symbol = tc_op_sub(op1, op2); break;
			case OP_MUL:    node->symbol = tc_op_mul(op1, op2); break;
			case OP_DIV:    node->symbol = tc_op_div(op1, op2); break;
			case OP_MOD:    node->symbol = tc_op_mod(op1, op2); break;
			default: fprintf(stderr, "unknown binary operator\n"); break;
		}
	} else {
		fprintf(stderr, "unknown op\n");
	}
}

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
		error_lvalue(src->root);
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
		error_lvalue(src->root);
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

bool div_by_zero(Symbol * num, Symbol * den) {
	if(num->attr->return_type != FLOAT) {
		switch(den->attr->return_type) {
			case INT: if (den->attr->value.ival == 0) { error_div_by_zero(); return true; } else { return false; }
			case CHAR: if (den->attr->value.cval == 0) { error_div_by_zero(); return true; } else { return false; }
			case FLOAT: if (den->attr->value.fval == 0.0f) { error_div_by_zero(); return true; } else { return false; }
			default: return false;
		}
	} else {
		return false;
	}
}

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
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval + op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval + op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval + op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval + op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval + op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval + op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
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
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval - op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval - op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval - op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval - op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval - op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval - op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
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
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval * op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval * op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval * op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval * op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval * op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval * op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
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

	if (div_by_zero(op1, op2)) { return NULL; }
	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;

	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival / op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.ival / op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.ival / op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = op1->attr->value.cval / op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = CHAR; tgt->attr->value.cval = op1->attr->value.cval / op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.cval / op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval / op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval / op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = FLOAT; tgt->attr->value.fval = op1->attr->value.fval / op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
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

	bool promoted = tc_binary_promotion(&tgt, &op1, &op2);
	tgt->attr->return_type = INT; // mod is int
	if (div_by_zero(tgt, op2)) {
		if (promoted) { // prune this subtree tree if symbol was promoted
			table_free(&op2);
		}
		return NULL;
	}

	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;

	bool error = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.ival % (int) op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.ival % (int) op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.ival % (int) op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case CHAR: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.ival = (int) op1->attr->value.cval % (int) op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.cval = (int) op1->attr->value.cval % (int) op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.fval = (int) op1->attr->value.cval % (int) op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		case FLOAT: switch(type2) {
			case INT: tgt->attr->return_type = INT; tgt->attr->value.fval = (int) op1->attr->value.fval % (int) op2->attr->value.ival; break;
			case CHAR: tgt->attr->return_type = INT; tgt->attr->value.fval = (int) op1->attr->value.fval % (int) op2->attr->value.cval; break;
			case FLOAT: tgt->attr->return_type = INT; tgt->attr->value.fval = (int) op1->attr->value.fval % (int) op2->attr->value.fval; break;
			default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
		} break;
		default: error = true; error_type2(node, tc_type_str(type1), tc_type_str(type2)); break;
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
