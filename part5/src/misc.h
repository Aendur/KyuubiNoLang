#ifndef MISC_H
#define MISC_H

#include "table.h"
#include <stdio.h>

// misc
char * str_ptr(const char * prefix, void* address, const char * suffix);
char * function_label(Symbol * args);
char * random_label(const char * prefix, int len, const char * suffix);
FILE * cat_files(const char * f1, const char * f2);
char lit_to_char(char ** str);

#endif

