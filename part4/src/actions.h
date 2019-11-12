#ifndef ACTIONS_H
#define ACTIONS_H

// #include "node.h"
// #include "table.h"
// #include "table-stack.h"


void add_symbol_var(Node* node);
const char* add_symbol_fun(Node* node);
void add_symbol_arr(Node* node);

Table * begin(const char * name);
Table * assign(Node * node);
Table * finish(void);

#endif

