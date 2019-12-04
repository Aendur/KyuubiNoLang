#ifndef ERROR_H
#define ERROR_H

#include "node.h"

// used in actions
void error_redefinition(const char * name);
void error_redefinition_fun(const char * name, const char * pars);
void error_redefinition_vf(const char * name);
void error_not_variable(const char * name, int type);
void error_undeclared(const char * name);
void warning_no_return(const char * name);


// used in the typechecker
void error_type1(const char*op, const char * type1);
void error_type2(const char*op, const char * type1, const char * type2);
void error_cast(const char * type1, const char * type2);
void error_lvalue1(Node * n);
void error_lvalue2(Node * n);
void error_unknown_type(void);
void error_unknown_class(void);
void error_div_by_zero(void);
void error_cannot_evaluate(void);
void error_not_integer(void);
void error_undeclared_fun(const char * name, const char * args);
void error_no_context(void);
void error_init_array(void);



#endif

