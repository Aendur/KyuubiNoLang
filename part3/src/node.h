#ifndef NODE_H
#define NODE_H

typedef union YYSTYPE YYSTYPE;

typedef struct node Node;
struct node {
	Node *  root;
	Node ** leaf;
	int  nleaves;
	int     type;
	char *  name;
};

Node * node_init(int, const char *, ...);
void node_free(Node **);
void node_free_recursive(Node **);
void print_node(Node *);
void print_tree(Node *, int); //, int, int);

#endif