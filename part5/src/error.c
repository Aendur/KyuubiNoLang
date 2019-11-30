#include "error.h"
#include "parser.h"
#include <stdio.h>

extern int yynerrs;
static const int ERROR_MSG_BUFFER = 256;

void error_redefinition(const char * name) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: redefinition of '%s'", name);
	++yynerrs;
	yyerror(msg);
}

void error_redefinition_fun(const char * name, const char * pars) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: redefinition of '%s' with argument types '%s'", name, pars);
	++yynerrs;
	yyerror(msg);
}

void error_redefinition_vf(const char * name) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: declaration of '%s' conflicts with its scope function name", name);
	++yynerrs;
	yyerror(msg);
}

void error_not_variable(const char * name, int type) {
	const char * typestr;
	switch(type) {
		case FUNCTION: typestr = "function"; break;
		case VARIABLE: typestr = "variable"; break;
		case ARRAY: typestr = "array"; break;
		default: typestr = "unknown symbol class"; break;
	}
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: '%s' is cannot be used as '%s'", name, typestr);
	++yynerrs;
	yyerror(msg);
}

void error_undeclared(const char * name) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: undeclared symbol '%s'", name);
	++yynerrs;
	yyerror(msg);
}

void warning_no_return(const char * name) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "warning: non-void function '%s' does not have a topmost return statement", name);
	//++yynerrs;
	yyerror(msg);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void error_type1(Node * node, const char * type1) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s requires 'int', 'char' or 'float' types, not '%s'", node->name, type1);
	++yynerrs;
	yyerror(msg);
}

void error_type2(Node * node, const char * type1, const char * type2) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: incompatible types, '%s' %s '%s'", type1, node->name, type2);
	++yynerrs;
	yyerror(msg);
}

void error_cast(const char * type1, const char * type2) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: cannot implicitly cast from '%s' to '%s'", type2, type1);
	++yynerrs;
	yyerror(msg);
}

void error_lvalue1(Node * node) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s operator requires an lvalue as the left-hand operand", node->name);
	++yynerrs;
	yyerror(msg);
}

void error_lvalue2(Node * node) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: %s operator requires an lvalue as the right-hand operand", node->name);
	++yynerrs;
	yyerror(msg);
}

void error_unknown_type(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine symbol type");
	++yynerrs;
	yyerror(msg);
}

void error_unknown_class(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine symbol class");
	++yynerrs;
	yyerror(msg);
}

void error_div_by_zero(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: integer division by zero");
	++yynerrs;
	yyerror(msg);
}

void error_cannot_evaluate(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: expression cannot be evaluated at compile time");
	++yynerrs;
	yyerror(msg);
}

void error_not_integer(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: expression does not evaluate to an integer");
	++yynerrs;
	yyerror(msg);
}

void error_undeclared_fun(const char * name, const char * args) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: there is no definition of '%s' with argument types '%s'", name, args);
	++yynerrs;
	yyerror(msg);
}

void error_no_context(void) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "semantic error: unable to determine context");
	++yynerrs;
	yyerror(msg);
}



