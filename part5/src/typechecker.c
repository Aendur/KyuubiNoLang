#include "typechecker.h"
#include "parser.h"
#include "misc.h"

#include <stdio.h>
#include <stdlib.h>

extern int yynerrs;
static const int ERROR_MSG_BUFFER=256;

void error_type(Node * node, char * type1, char * type2) {
	//++yynerrs;
	//yyerror(msg);
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: incompatible types, '%s' and '%s'", type1, type2);
	error_node(msg, node);
}

void error_node(const char * msg, Node * node) {
	++yynerrs;
	yyerror(msg);
	fprintf(stderr, "Line %d, column %d, node, %s\n", node->line, node->col0, msg);
}

// void tc_resolve(Symbol * tgt, Symbol * src) {
void tc_resolve(Node * tgtnode, Node * srcnode) {
	Symbol * tgt = tgtnode->symbol;
	Symbol * src = srcnode->symbol;
	if (tgt == NULL) { fprintf(stderr, "typecheck null target sybmol\n"); return; }
	if (src == NULL) { /*nothing to do, */ return; }

	// int tgtsym = tgt->attr->symbol_type;
	// int srcsym = src->attr->symbol_type;

	int tgtret = tgt->attr->return_type;
	int srcret = src->attr->return_type;

	if (tgtret == UNDEFINED) { tgt->attr->return_type = srcret; return; }
	if (tgtret == srcret)    { return; }

	switch (tgtret) {
		case FLOAT: switch(srcret) {
			case UNDEFINED: return;
			case STRING:    error_type(tgtnode, "float", "char[]"); return;
			case FLOAT:     return;
			case CHAR:      return;
			case INT :      return;
			case VOID:      error_type(tgtnode, "float", "void"); return;
			default:        error_type(tgtnode, "float", "unknown type"); return;
		} break;
		case CHAR : switch(srcret) {
			case UNDEFINED: return;
			case STRING:    error_type(tgtnode, "char", "char[]"); return;
			case FLOAT:     tgt->attr->return_type = srcret; return;
			case CHAR:      tgt->attr->return_type = srcret; return;
			case INT :      tgt->attr->return_type = srcret; return;
			case VOID:      error_type(tgtnode, "char", "void"); return;
			default:        error_type(tgtnode, "char", "unknown type"); return;
		} break;
		case INT  : switch(srcret) {
			case UNDEFINED: return;
			case STRING:    error_type(tgtnode, "int", "char[]"); return;
			case FLOAT:     tgt->attr->return_type = srcret; return;
			case CHAR:      return;
			case INT :      return;
			case VOID:      error_type(tgtnode, "int", "void"); return;
			default:        error_type(tgtnode, "int", "unknown type"); return;
		} break;
		case VOID : switch(srcret) {
			case UNDEFINED: return;
			case STRING:    error_type(tgtnode, "void", "char[]"); return;
			case FLOAT:     error_type(tgtnode, "void", "float"); return;
			case CHAR:      error_type(tgtnode, "void", "char"); return;
			case INT :      error_type(tgtnode, "void", "int"); return;
			case VOID:      return;
			default:        error_type(tgtnode, "void", "unknown type"); return;
		} break;
		case STRING: switch(srcret) {
			case UNDEFINED: return;
			case STRING:    return;
			case FLOAT:     error_type(tgtnode, "char[]", "float"); return;
			case CHAR:      error_type(tgtnode, "char[]", "char"); return;
			case INT :      error_type(tgtnode, "char[]", "int"); return;
			case VOID:      error_type(tgtnode, "char[]", "void"); return;
			default:        error_type(tgtnode, "char[]", "unknown type"); return;
		} break;
		default: {
			++yynerrs;
			char msg[ERROR_MSG_BUFFER];
			snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine type");
			yyerror(msg);
		} break;
	}
}


// Symbol * tc_typecheck_lazy(Node * node) {
// 	if (node == NULL) { return NULL; }
// 	if (node->symbol == NULL) {
// 		char * key = str_ptr("node", node, NULL);
// 		node->symbol = add_symbol(GENERIC_NODE, UNDEFINED, key);
// 		free(key);
// 	}
// 	Symbol * leaf_symbol;
// 	if (node->nleaves == 0) {
// 		/* do nothing */ 		
// 	} else if (node->nleaves == 1) {
// 		leaf_symbol = tc_typecheck_lazy(node->leaf[0]);
// 		// tc_resolve(node->symbol, leaf_symbol);
// 		tc_resolve(node, node->leaf[0]);
// 	} else { //if (node->nleaves > 1) {
// 		for (int i = 0; i < node->nleaves; ++i) {
// 			leaf_symbol = tc_typecheck_lazy(node->leaf[i]);
// 			// tc_resolve(node->symbol, leaf_symbol);
// 			tc_resolve(node, node->leaf[i]);
// 		}
// 	}
// 	return node->symbol;
// }


// void tc_typecheck(Node * node) {
// 	if (node == NULL) { return NULL; }
// }


void tc_evaluate(Node * node) {
	
}
