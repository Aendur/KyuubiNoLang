#include "typechecker.h"
#include "parser.h"
#include "misc.h"
#include "table-stack.h"
#include "error.h"
#include "generator.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yynerrs;
extern Tablestack * context_stack;

///////////
// Tools //
///////////

void tc_prune(Node * root) {
	while (root->nleaves > 0) {
		root->nleaves -= 1;
		node_free_recursive(&(root->leaf[root->nleaves]));
	}
}

// void tc_graft(Node * root, int index) {
// 	if (root == NULL) { fprintf(stderr, "null root\n"); return; }
// 	if (index >= root->nleaves) { fprintf(stderr, "not enought leaves\n"); return; }
// 	if (root->leaf[index] == NULL) { fprintf(stderr, "null leaf\n"); return; }
// 	if (root->leaf[index]->nleaves != 1) { fprintf(stderr, "cannot graft n:1\n"); return; }

// 	Node * leaf = root->leaf[index]->leaf[0];
// 	node_free(&root->leaf[index]);
// 	root->leaf[index] = leaf;
// }

bool tc_temp_symbol(Symbol * symbol) {
	bool a = symbol->attr->temporary;
	bool b = ( symbol->key[0] == '$' && symbol->key[1] >= '0' && symbol->key[1] <= '9' );
	bool c = ( symbol->key[0] == '$' && symbol->key[1] == 'k');
	assert(a == b || a == c);
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

void tc_asm(const char * str) {
	if (str != NULL) {
		gen_asm(str);
	}
}

/////////////////
// Expressions //
/////////////////
void tc_evaluate(Node * node) {
	if (node == NULL) { fprintf(stderr, "evaluate null node\n"); return; }

	if (node->nleaves == 0) {
		switch(node->type) {
			case RETURN: node->symbol = tc_return(NULL); break; //node->symbol = tc_op_pos(op1); break;
			default: fprintf(stderr, "unknown 0-ary operator\n"); break;
		}
	} else if (node->nleaves == 1) {
		Node * op1 = node->leaf[0]; 
		if (op1 == NULL) {fprintf(stderr, "null unary operand node\n"); return; }
		if (op1->symbol == NULL) {fprintf(stderr, "null unary operand\n"); return; }
		switch(node->type) {
			case OP_POS: break; //node->symbol = tc_op_pos(op1); break;
			case OP_NEG: node->symbol = tc_op_neg(op1); break;
			case OP_NOT: node->symbol = tc_op_not(op1); break;
			case OP_INC: node->symbol = tc_op_inc(op1); break;
			case OP_DEC: node->symbol = tc_op_dec(op1); break;
			case RETURN: node->symbol = tc_return(op1); break;
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
		// node->symbol = funct;
		node->symbol = add_symbol(CONSTANT, funct->attr->return_type, NULL);
	}
}

Symbol * tc_return(Node * op1) {
	Symbol * context = context_stack->top;
	if (context == NULL) { error_no_context(); return NULL; }
	
	Symbol * tgt = NULL;

	if (op1 == NULL) {
		if (context->attr->return_type == VOID) {
			context->attr->function_returns = true;
			gen_function_end(context, NULL);
		} else {
			error_type2("return type", tc_type_str(context->attr->return_type), tc_type_str(VOID));
		}
	} else {
		assert(op1->symbol != NULL);
		Symbol * expr = op1->symbol;

		if (context->attr->return_type == expr->attr->return_type) {
			context->attr->function_returns = true;
			
			if(expr->attr->defined == true) {
				char * tgt_key = NULL;
				do { free(tgt_key); tgt_key = random_label("ret.", 9, NULL); } while (table_find(context_stack->top, tgt_key) != NULL);
				tgt = add_symbol(CONSTANT, expr->attr->return_type, tgt_key);
				free(tgt_key);
				attr_copy(tgt->attr, expr->attr);
				gen_set_defined_code(tgt);
				if(tc_temp_symbol(expr)) { table_remove(context, expr->key); }
				tc_prune(op1->root);
			} else {
				tgt = expr;
			}
			gen_function_end(context, tgt);
		} else {
			error_type2("return type", tc_type_str(context->attr->return_type), tc_type_str(expr->attr->return_type));
		}
	}
	return tgt;
}

//////////////////
// FLOW CONTROL //
//////////////////

#define THROW(msg, ret)                                      \
	fprintf(stderr, "%s:%d: %s\n", __FILE__, __LINE__, msg); \
	return ret

void tc_free_do(Node * expr) {
	if (expr == NULL) { THROW("jump do null expr",); }
	if (expr->symbol == NULL) { THROW("jump do null expr symbol",); }
	if (context_stack->top->attr->reserved_while == NULL) { THROW("jump do null label",); }
	char * label = context_stack->top->attr->reserved_while;
	gen_jump("brnz", label, expr->symbol);
	context_stack->top->attr->reserved_while = NULL;
	free(label);
}

void tc_init_while(const char * prefix, const char * suffix) {
	char * new_label = NULL;
	do {
		free(new_label);
		new_label = random_label(prefix, 9, suffix);
	} while (table_find(context_stack->top, new_label) != NULL);

	table_insert(context_stack->top, new_label);
	context_stack->top->attr->reserved_while = new_label;
	gen_label(NULL, new_label, NULL);
}

void tc_jump_while(Node * expr) {
	if (expr == NULL) { THROW("jump while null expr",); }
	if (expr->symbol == NULL) { THROW("jump while null symbol",); }
	if (context_stack->top->attr->reserved_while == NULL) { THROW("jump while null label",); }
	
	const char * label = context_stack->top->attr->reserved_while;
	int size = 5 + strlen(label);
	char * label_end = malloc(size);
	if (label_end != NULL) {
		snprintf(label_end, size, "%s_end", label);
		gen_jump("brz", label_end, expr->symbol);
		free(label_end);
	}
}

void tc_free_while(void) {
	if (context_stack->top->attr->reserved_while == NULL) { THROW("free while null label",); }
	char * new_label = context_stack->top->attr->reserved_while;
	gen_jump("jump", new_label, NULL);
	gen_label(NULL, new_label, "_end");
	free(new_label);
	context_stack->top->attr->reserved_while = NULL;
}

void tc_init_if(Node * expr, const char * prefix, const char * suffix) {
	if (expr == NULL) { THROW("init if null expr",); }
	if (expr->symbol == NULL) { THROW("init if null expr symbol",); }

	// reserve a new label
	char * new_label = NULL;
	do {
		free(new_label);
		new_label = random_label(prefix, 9, suffix);
	} while (table_find(context_stack->top, new_label) != NULL);
	table_insert(context_stack->top, new_label);
	context_stack->top->attr->reserved_while = new_label;

	// create end-if jump
	int size = 12 + strlen(new_label);
	char * label_end = malloc(size);
	if (label_end != NULL) {
		snprintf(label_end, size, "%s_end0", new_label);
		gen_jump("brz", label_end, expr->symbol);
		free(label_end);
	}
	gen_label(NULL, new_label, NULL);
}

void tc_init_else(void) {
	if (context_stack->top->attr->reserved_while == NULL) { THROW("init else null label",); }
	char * new_label = context_stack->top->attr->reserved_while;

	// create end-if
	int size = 12 + strlen(new_label);
	char * label_end1 = malloc(size);
	char * label_end2 = malloc(size);
	if (label_end1 != NULL && label_end2 != NULL) {
		snprintf(label_end1, size, "%s_end0", new_label);
		snprintf(label_end2, size, "%s_end1", new_label);
		gen_jump("jump", label_end2, NULL);
		gen_label(NULL, label_end1, NULL);
		free(label_end1);
		free(label_end2);
	} else {
		free(label_end1);
		free(label_end2);
	}
}

void tc_free_if(bool has_else) {
	if (context_stack->top->attr->reserved_while == NULL) { THROW("free if null label",); }
	char * new_label = context_stack->top->attr->reserved_while;

	// create end-if
	int size = 12 + strlen(new_label);
	char * label_end = malloc(size);
	if (label_end != NULL) {
		snprintf(label_end, size, "%s_end%d", new_label, has_else);
		gen_label(NULL, label_end, NULL);
		free(label_end);
	}

	free(new_label);
	context_stack->top->attr->reserved_while = NULL;
}
