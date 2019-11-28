#include "typechecker.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"
//#include "table.h"

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

void error_cast(const char * type1, const char * type2) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: cannot implicitly cast from '%s' to '%s'", type2, type1);
	++yynerrs;
	yyerror(msg);
}

void error_lvalue1(Node * node) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s operator requires an lvalue as the left-hand operand", node->name);
	++yynerrs;
	yyerror(msg);
}

void error_lvalue2(Node * node) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s operator requires an lvalue as the right-hand operand", node->name);
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

void error_cannot_evaluate(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: expression cannot be evaluated at compile time");
	++yynerrs;
	yyerror(msg);
}

void error_not_integer(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: expression does not evaluate to an integer");
	++yynerrs;
	yyerror(msg);
}

void error_undeclared_fun(const char * name, const char * args) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: there is no definition of '%s' with argument types '%s'", name, args);
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

char tc_type_chr(int stype, int rtype) {
	char ret;
	switch(rtype) {
		case VOID: ret = 'v'; break;
		case INT: ret = 'i'; break;
		case CHAR: ret = 'c'; break;
		case FLOAT: ret = 'f'; break;
		default: ret = '?';  break;
	}
	if (stype == ARRAY) {
		ret -= 0x20;
	}
	return ret;
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
			case VAR_INIT:  node->symbol = tc_op_assign(op1, op2); break;
			case OP_ASSIGN: node->symbol = tc_op_assign(op1, op2); break;
			case OP_OR:     node->symbol = tc_op_or(op1, op2); break;
			case OP_AND:    node->symbol = tc_op_and(op1, op2); break;
			case OP_EQ:     node->symbol = tc_op_eq(op1, op2); break;
			case OP_NE:     node->symbol = tc_op_ne(op1, op2); break;
			case OP_LT:     node->symbol = tc_op_lt(op1, op2); break;
			case OP_LE:     node->symbol = tc_op_le(op1, op2); break;
			case OP_GE:     node->symbol = tc_op_ge(op1, op2); break;
			case OP_GT:     node->symbol = tc_op_gt(op1, op2); break;
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


void tc_arr_decl(Node * node) {
	if (node == NULL) { fprintf(stderr, "arr decl null node\n"); return; }

	assert(node->type == ARR_DECL);
	assert(node->nleaves == 1);
	Node * leaf1 = node->leaf[0]; 
	if (leaf1 == NULL) {fprintf(stderr, "null arr decl arg node\n"); return; }
	Symbol * op1 = leaf1->symbol;
	if (op1 == NULL) {fprintf(stderr, "null arr decl arg\n"); return; }

	bool error;
	if (op1->attr->defined == false) {
		error_cannot_evaluate();
		error = true;
	} else {
		switch(op1->attr->return_type) {
			case CHAR: error = false; op1->attr->value.ival = (int) op1->attr->value.cval; break;
			case INT: error = false; break;
			default: error = true; error_not_integer(); break;
		}
	}

	if(!error) {
		node->symbol->attr->length = op1->attr->value.ival;
		if(tc_temp_symbol(op1)) {
			table_remove(context_stack->top, op1->key);
		}
		tc_prune(node);
	}
}

// list expr -> include
// NULL expr -> init
// list NULL -> collect
// NULL NULL -> void

#include <string.h>
char * tc_fcall_args(Node * list_node, Node * expr_node) {
	static char args[128];
	static char * pos = args;

	Symbol * s;
	if (expr_node != NULL) {
		s = expr_node->symbol;
		if (s==NULL) { return args; }
		*pos = tc_type_chr(s->attr->symbol_type, s->attr->return_type);
		*(++pos) = 0;
	} else {
		if (list_node == NULL) {
			*pos = tc_type_chr(VARIABLE, VOID);
			*(++pos) = 0;
		} else {
			pos = args;
		}
	}

	return args;
}

void tc_fcall(Node * node) {
	if (node == NULL) { fprintf(stderr, "fcall null node\n"); return; }

	assert(node->type == FUNCTION_CALL);
	Symbol * funct = NULL;
	char * key = NULL; 
	if (node->nleaves == 0) {
		key = tc_fcall_args(NULL, NULL);
		funct = table_find(node->symbol, key);
	} else if (node->nleaves == 1) {
		key = tc_fcall_args(node->leaf[0], NULL);
		funct = table_find(node->symbol, key);
	} else {
		fprintf(stderr, "too many leaves for fcall node\n");
	}

	if (funct == NULL) {
		error_undeclared_fun(node->symbol->key, key);
	} else {
		node->symbol = funct;
	}
}
