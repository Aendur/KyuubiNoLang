#ifndef MISC_H
#define MISC_H

#include "node.h"
#include "table.h"

// misc
char * str_ptr(const char * prefix, void* address, const char * suffix);
char * function_label(Symbol * args);

#endif

