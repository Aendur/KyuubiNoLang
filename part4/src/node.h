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

typedef struct nodelist Nodelist;
struct nodelist {
	Node ** nodes;
	int size;
	int capacity;
};

Node * node_init(Nodelist *, int, const char *, ...);
void node_free(Node **);
void node_free_recursive(Node **);
void print_node(Node *);
void print_tree(Node *, int); //, int, int);

Nodelist * nodelist_init(void);
void nodelist_push(Nodelist*, Node*);
void nodelist_free(Nodelist**);
void nodelist_print(Nodelist*);


#endif