#ifndef ACTIONS_H
#define ACTIONS_H

#include "node.h"
#include "table.h"

void add_symbol_var(Node* node);
void recurse_types(Node * n0, char ** str);
void add_symbol_fun(Node* node);

#endif

