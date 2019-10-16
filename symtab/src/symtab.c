/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * MIT License                                                                     *
 *                                                                                 *
 * Copyright (c) 2019 Diogo Cesar Ferreira                                         *
 *                                                                                 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy    *
 * of this software and associated documentation files (the "Software"), to deal   *
 * in the Software without restriction, including without limitation the rights    *
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is           *
 * furnished to do so, subject to the following conditions:                        *
 *                                                                                 *
 * The above copyright notice and this permission notice shall be included in all  *
 * copies or substantial portions of the Software.                                 *
 *                                                                                 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR      *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          *
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   *
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   *
 * SOFTWARE.                                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "symtab.h"

#include <stdlib.h>
#include <string.h>

typedef struct symtab_table Table;

Table * symtab_init (int num_tabs, int tab_size) {
	if (num_tabs < 1) { num_tabs = 1; }
	if (tab_size < 1) { tab_size = 1; }

	Table * tab = malloc(sizeof(Table));
	tab->tabs = malloc(num_tabs * sizeof(struct symtab_pair*));
	tab->num_tabs = num_tabs;
	tab->tab_size = tab_size;
	for (int i = 0; i < num_tabs; ++i) {
		tab->tabs[i] = calloc(tab_size, sizeof(struct symtab_pair));
	}
	return tab;
}

void symtab_free (Table** tab) {
	Table * t = *tab;
	for (int i = 0; i < t->num_tabs; ++i) { 
		free(t->tabs[i]);
	}
	free(t->tabs);
	free(t);
	(*tab) = NULL;
}

unsigned long symtab_hash(const char * str, unsigned long key) {
	unsigned int len = strlen(str);
	unsigned int pos = 0;
	unsigned long seed = 1;
	unsigned long hash = 0;
	while (pos < len) {
		hash += seed * (unsigned long) str[pos];
		seed *= key;
		++pos;
	}
	return hash;
}


