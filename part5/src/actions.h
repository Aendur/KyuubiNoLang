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


// error
void yyerror (char const * msg);
void error_redefinition(const char * name);
void error_redefinition_fun(const char * name, const char * pars);
void error_undeclared(const char * name);

// scope
Table * begin(const char * name);
Table * begin_fun(int type, const char * name, struct arg_list * args);
Table * finish(void);
void assign_context(Node * node);
void assign_body(Node * node);

// symbol table
void add_symbol_args(struct arg_list * args);
Symbol * add_symbol_var(int type, const char * key);
Symbol * add_symbol_arr(int type, const char * key, int size);
Symbol * add_symbol(int symbol_type, int data_type, const char * key);
Symbol * retrieve(Node * node, const char * key);

// misc
char * str_ptr(const char * prefix, void* address, const char * suffix);

#endif

