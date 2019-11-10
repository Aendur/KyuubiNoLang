#ifndef NODE_LIST_H
#define NODE_LIST_H

typedef struct node Node;
typedef struct nodelist Nodelist;

struct nodelist {
	Node ** nodes;
	int size;
	int capacity;
};

Nodelist * nl_init(void);
Node * nl_push(Nodelist*, Node*);
void nl_free(Nodelist**);
void nl_print(Nodelist*);

#endif