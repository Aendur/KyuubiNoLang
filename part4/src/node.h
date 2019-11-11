#ifndef NODE_H
#define NODE_H

typedef struct node Node;

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

struct node {
	Node *  root;
	Node ** leaf;
	int  nleaves;
	int     type;
	char *  name;
	//struct symtab_pair * symtab_entry;
};

Node * node_init(int, const char *, ...);
void node_free(Node **);
void node_free_recursive(Node **);
void print_node(Node *);
void print_tree(Node *, int);

#endif