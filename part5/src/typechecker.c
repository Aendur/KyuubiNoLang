#include "typechecker.h"
#include "parser.h"
#include "misc.h"

#include <stdio.h>
#include <stdlib.h>

extern int yynerrs;
static const int ERROR_MSG_BUFFER=256;


void error_type(Node * n, const char * type1) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s requires 'int', 'char' or 'float' types, not '%s'", n->name, type1);
	++yynerrs;
	yyerror(msg);
}

void error_types(Node * node, char * type1, char * type2) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: incompatible types, '%s' and '%s'", type1, type2);
	++yynerrs;
	yyerror(msg);
}

void error_lvalue(Node * n) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s operator requires lvalue", n->name);
	++yynerrs;
	yyerror(msg);
}

void error_unknown_type(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine symbol return type");
	++yynerrs;
	yyerror(msg);
}

void error_unknown_class(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine symbol class");
	++yynerrs;
	yyerror(msg);
}


struct tc_type_resolver {
	bool error; // false if error
	int promote; // first or second operand
	int type;   // promote to this type
};

int tc_resolve_types(int type1, int type2) {


}

void tc_resolve(Node * tgtnode, Node * srcnode) {
	Symbol * tgt = tgtnode->symbol;
	Symbol * src = srcnode->symbol;
	if (tgt == NULL) { fprintf(stderr, "typecheck null target sybmol\n"); return; }
	if (src == NULL) { /*nothing to do, */ return; }

	int tgt_type = tgt->attr->return_type;
	int src_type = src->attr->return_type;

	if (tgt_type == UNDEFINED) { tgt->attr->return_type = src_type; return; }
	if (tgt_type == src_type)    { return; }

	switch (tgt_type) {
		case FLOAT: switch(src_type) {
			case UNDEFINED: return;
			case STRING:    error_types(tgtnode, "float", "char[]"); return;
			case FLOAT:     return;
			case CHAR:      return;
			case INT :      return;
			case VOID:      error_types(tgtnode, "float", "void"); return;
			default:        error_types(tgtnode, "float", "unknown type"); return;
		} break;
		case CHAR : switch(src_type) {
			case UNDEFINED: return;
			case STRING:    error_types(tgtnode, "char", "char[]"); return;
			case FLOAT:     tgt->attr->return_type = src_type; return;
			case CHAR:      tgt->attr->return_type = src_type; return;
			case INT :      tgt->attr->return_type = src_type; return;
			case VOID:      error_types(tgtnode, "char", "void"); return;
			default:        error_types(tgtnode, "char", "unknown type"); return;
		} break;
		case INT  : switch(src_type) {
			case UNDEFINED: return;
			case STRING:    error_types(tgtnode, "int", "char[]"); return;
			case FLOAT:     tgt->attr->return_type = src_type; return;
			case CHAR:      return;
			case INT :      return;
			case VOID:      error_types(tgtnode, "int", "void"); return;
			default:        error_types(tgtnode, "int", "unknown type"); return;
		} break;
		case VOID : switch(src_type) {
			case UNDEFINED: return;
			case STRING:    error_types(tgtnode, "void", "char[]"); return;
			case FLOAT:     error_types(tgtnode, "void", "float"); return;
			case CHAR:      error_types(tgtnode, "void", "char"); return;
			case INT :      error_types(tgtnode, "void", "int"); return;
			case VOID:      return;
			default:        error_types(tgtnode, "void", "unknown type"); return;
		} break;
		case STRING: switch(src_type) {
			case UNDEFINED: return;
			case STRING:    return;
			case FLOAT:     error_types(tgtnode, "char[]", "float"); return;
			case CHAR:      error_types(tgtnode, "char[]", "char"); return;
			case INT :      error_types(tgtnode, "char[]", "int"); return;
			case VOID:      error_types(tgtnode, "char[]", "void"); return;
			default:        error_types(tgtnode, "char[]", "unknown type"); return;
		} break;
		default: {
			++yynerrs;
			char msg[ERROR_MSG_BUFFER];
			snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine type");
			yyerror(msg);
		} break;
	}
}

void tc_cut_tree(Node * leaf, int index) {
	Node * root = leaf->root;
	root->nleaves--;
	node_free_recursive(&(root->leaf[index]));
}

void tc_evaluate(Node * node) {
	if (node == NULL) { fprintf(stderr, "evaluate null node\n"); return; }

	//fprintf(stderr, "unary op does not have 1 operand\n"); return NULL; 

	if (node->nleaves == 1) {
		Node * op1 = node->leaf[0]; 
		if (op1 == NULL) {fprintf(stderr, "null unary operand\n"); return; }
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
		if (op1 == NULL) { fprintf(stderr, "null binary operand1\n"); return; }
		if (op2 == NULL) { fprintf(stderr, "null binary operand2\n"); return; }
		switch(node->type) {
			// case OP_ASSIGN: tc_assign_op(node); break;
			// case OP_OR:  tc_binary_op(node); break;
			// case OP_AND: tc_binary_op(node); break;
			// case OP_EQ:  tc_binary_op(node); break;
			// case OP_NE:  tc_binary_op(node); break;
			// case OP_LT:  tc_binary_op(node); break;
			// case OP_LE:  tc_binary_op(node); break;
			// case OP_GE:  tc_binary_op(node); break;
			// case OP_GT:  tc_binary_op(node); break;
			// case OP_ADD: tc_binary_op(node); break;
			// case OP_SUB: tc_binary_op(node); break;
			// case OP_MUL: tc_binary_op(node); break;
			// case OP_DIV: tc_binary_op(node); break;
			// case OP_MOD: tc_binary_op(node); break;
			default: fprintf(stderr, "unknown binary operator\n"); break;
		}
	} else {
		fprintf(stderr, "unknown op\n");
	}
}

//////////////////////
// UNARY OPERATIONS //
//////////////////////

Symbol * tc_op_pos(Node * src) {
	switch(src->symbol->attr->return_type) {
		case VOID: error_type(src->root, "void"); return NULL;
		case INT: return src->symbol;
		case CHAR: return src->symbol;
		case FLOAT: return src->symbol;
		case STRING: error_type(src->root, "char[]"); return NULL;
		default: error_unknown_type(); return NULL;
	}
}

Symbol * tc_op_neg(Node * src) {
	Symbol * tgt = NULL;
	switch(src->symbol->attr->symbol_type) {
		case CONSTANT:
			tgt = src->symbol;
			break;
		case VARIABLE:
			tgt = add_symbol(CONSTANT, src->symbol->attr->return_type, NULL);
			tgt->attr->defined = true;
			break;
		default:
			error_unknown_class();
			return NULL;
	}
	switch(src->symbol->attr->return_type) {
		case VOID: error_type(src->root, "void"); table_free(&tgt); break;
		case INT: tgt->attr->value.ival = -src->symbol->attr->value.ival; break;
		case CHAR: tgt->attr->value.cval = -src->symbol->attr->value.cval; break;
		case FLOAT: tgt->attr->value.fval = -src->symbol->attr->value.fval; break;
		case STRING: error_type(src->root, "char[]"); table_free(&tgt); break;
		default: error_unknown_type(); table_free(&tgt); break;
	}

	// cut tree if symbol was promoted
	if (tgt == src->symbol) { tc_cut_tree(src, 0); }
	return tgt;
}

Symbol * tc_op_not(Node * src) {
	Symbol * tgt = add_symbol(CONSTANT, INT, NULL);
	switch(src->symbol->attr->return_type) {
		case VOID: error_type(src->root, "void"); table_free(&tgt); break;
		case INT: tgt->attr->value.ival = !(src->symbol->attr->value.ival); break;
		case CHAR: tgt->attr->value.ival = !(src->symbol->attr->value.cval); break;
		case FLOAT: tgt->attr->value.ival = !(src->symbol->attr->value.fval); break;
		case STRING: error_type(src->root, "char[]"); table_free(&tgt); break;
		default: error_unknown_type(); table_free(&tgt); break;
	}
	return tgt;
}

Symbol * tc_op_inc(Node * src) {
	if (src->symbol->attr->symbol_type == CONSTANT) {
		error_lvalue(src->root);
		return NULL;
	}
	Symbol * tgt = NULL;
	switch(src->symbol->attr->return_type) {
		case VOID: error_type(src->root, "void"); break;
		case INT: src->symbol->attr->value.ival += 1; tgt = src->symbol; break;
		case CHAR: src->symbol->attr->value.cval += 1; tgt = src->symbol; break;
		case FLOAT: src->symbol->attr->value.fval += 1; tgt = src->symbol; break;
		case STRING: error_type(src->root, "char[]"); break;
		default: error_unknown_type(); break;
	}
	tc_cut_tree(src, 0);
	return tgt;
}

Symbol * tc_op_dec(Node * src) {
	if (src->symbol->attr->symbol_type == CONSTANT) {
		error_lvalue(src->root);
		return NULL;
	}
	Symbol * tgt = NULL;
	switch(src->symbol->attr->return_type) {
		case VOID: error_type(src->root, "void"); break;
		case INT: src->symbol->attr->value.ival -= 1; tgt = src->symbol; break;
		case CHAR: src->symbol->attr->value.cval -= 1; tgt = src->symbol; break;
		case FLOAT: src->symbol->attr->value.fval -= 1; tgt = src->symbol; break;
		case STRING: error_type(src->root, "char[]"); break;
		default: error_unknown_type(); break;
	}
	tc_cut_tree(src, 0);
	return tgt;
}


///////////////////////
// BINARY OPERATIONS //
///////////////////////

Symbol * tc_op_add(Node * src1, Node * src2) {
	Symbol * tgt = NULL;
	if (src1->symbol->attr->symbol_type == CONSTANT && src1->symbol->attr->symbol_type == CONSTANT) {
		tgt = src1->symbol;
	} else {

	}
	// //switch(src->symbol->attr->symbol_type) {
	// //	case VARIABLE:
	// //		tgt = add_symbol(CONSTANT, src->symbol->attr->return_type, NULL);
	// //		tgt->attr->defined = true;
	// //		break;
	// //	default:
	// //		error_unknown_class();
	// //		return NULL;
	// //}
	// switch(src->symbol->attr->return_type) {
	// 	case VOID: error_type(src->root, "void"); table_free(&tgt); break;
	// 	case INT: tgt->attr->value.ival = -src->symbol->attr->value.ival; break;
	// 	case CHAR: tgt->attr->value.cval = -src->symbol->attr->value.cval; break;
	// 	case FLOAT: tgt->attr->value.fval = -src->symbol->attr->value.fval; break;
	// 	case STRING: error_type(src->root, "char[]"); table_free(&tgt); break;
	// 	default: error_unknown_type(); table_free(&tgt); break;
	// }

	// // cut tree if symbol was promoted
	// if (tgt == src->symbol) { tc_cut_tree(src, 0); }
	// return tgt;
}

