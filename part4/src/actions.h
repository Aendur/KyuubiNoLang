#ifndef ACTIONS_H
#define ACTIONS_H

// #include "node.h"
// #include "table.h"
// #include "table-stack.h"


void add_symbol_var(int type, const char * key);
void add_symbol_arr(int type, const char * key);
Symbol * add_symbol_par(Node* params);

Table * begin(const char * name);
Table * begin_fun(int type, const char * name, struct arg_list * args);
Table * assign(Node * node);
Table * finish(void);

#endif

