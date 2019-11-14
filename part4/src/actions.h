#ifndef ACTIONS_H
#define ACTIONS_H

Symbol * add_symbol_var(int type, const char * key);
Symbol * add_symbol_arr(int type, const char * key);
void add_symbol_args(struct arg_list * args);

Table * begin(const char * name);
Table * begin_fun(int type, const char * name, struct arg_list * args);
Table * finish(void);

void assign_context(Node * node);
void assign_body(Node * node);

#endif

