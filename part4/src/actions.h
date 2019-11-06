#ifndef ACTIONS_H
#define ACTIONS_H

#include "node.h"
#include "table.h"


enum nodetypes {
	NODE_TERMINAL,
	NODE_LIST,
	NODE_BINARY_OP,
	NODE_VECTOR_INDEX,
	NODE_DECL_ARRAY,
	NODE_DECL_FUNCTION,
	NODE_DECL_VARIABLE,
	NODE_FUNCTION_CALL,
	NODE_IF,
	NODE_IF_ELSE,
	NODE_RETURN,
	NODE_WHILE,
	NODE_DO_WHILE,
};

void add_symbol_var(Node* node);
void recurse_types(Node * n0, char ** str);
void add_symbol_fun(Node* node);

#endif

