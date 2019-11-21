#ifndef ACTIONS_H
#define ACTIONS_H

#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
#include "arg-list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int nline;
extern int ncol0;
extern int ncol1;
extern Node * root;
extern Nodelist * node_list;
extern Tablestack * context_stack;


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

void redefinition_error(const char * name);
void redefinition_error_fun(const char * name, const char * pars);

void type_error(Node * node, char * type1, char * type2);
void node_error(const char * msg, Node * node);
Symbol * typecheck_lazy(Node * node);


#endif

