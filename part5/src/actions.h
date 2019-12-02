#ifndef ACTIONS_H
#define ACTIONS_H

#include "node.h"
#include "table.h"

// error
void yyerror (char const * msg);

// scope
Table * begin(const char * name);
Table * begin_fun(int type, const char * name, struct arg_list * args);
Table * finish(void);
Table * finish_fun(const char * name);
void assign_context(Node * node);
void assign_body(Node * node);

// symbol table
void add_symbol_args(struct arg_list * args);
Symbol * add_symbol_var(int type, const char * key);
Symbol * add_symbol_arr(int type, const char * key, int size);
Symbol * add_symbol_cte(int type, const char * val);
Symbol * add_symbol(int symbol_type, int data_type, const char * key);
Symbol * retrieve(Node * node, const char * key, int type);
void set_symbol_str_sval(Symbol * symbol, const char * value);
void set_symbol_str_cval(Symbol * symbol, const char * value);
void set_symbol_str_ival(Symbol * symbol, const char * value);
void set_symbol_str_hval(Symbol * symbol, const char * value);
void set_symbol_str_fval(Symbol * symbol, const char * value);
void set_symbol_str_sval(Symbol * symbol, const char * value);

#endif

