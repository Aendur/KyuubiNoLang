#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include "node.h"
#include "table.h"

void error_type(Node * node, char * type1, char * type2);
void error_node(const char * msg, Node * node);

// void  tc_resolve(Node * tgtnode, Node * srcnode);
// void  tc_typecheck_lazy(Node * node);
// void tc_typecheck(Node * node);
void tc_evaluate(Node * node);

#endif

