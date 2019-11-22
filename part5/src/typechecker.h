#ifndef TYPECHECKER_H
#define TYPECHECKER_H

#include "node.h"
#include "table.h"

void error_type(Node * node, char * type1, char * type2);
void error_node(const char * msg, Node * node);
Symbol * typecheck_lazy(Node * node);
void resolve_types(Node * tgtnode, Node * srcnode) {


#endif

