#ifndef ACTIONS_H
#define ACTIONS_H

#include <stdbool.h>

Symbol * add_symbol(int symbol_type, int data_type, const char * key);
Symbol * add_symbol_var(int type, const char * key);
Symbol * add_symbol_arr(int type, const char * key);
void add_symbol_args(struct arg_list * args);

Table * begin(const char * name);
Table * begin_fun(int type, const char * name, struct arg_list * args);
Table * finish(void);
Symbol * retrieve(Node * node, const char * key);

void assign_context(Node * node);
void assign_body(Node * node);


char * str_ptr(const char * prefix, void* address, const char * suffix);

Symbol * evaluate(Node * node);
Symbol * typecheck_lazy(Node * node);

#endif

