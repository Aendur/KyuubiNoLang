#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "table.h"

typedef struct symtab_table Table;

Table * symtab_init (int size) {
	if (size < 1) { size = 1;}
	Table * tab = malloc(sizeof(Table));
	tab->tab_size = size;
	tab->num_keys = 0;
	tab->buckets = malloc(tab->tab_size * sizeof(struct symtab_pair*));
	for(int i = 0; i < tab->tab_size; ++i) {
		tab->buckets[i] = calloc(2, sizeof(struct symtab_pair));
	}
	return tab;
}

void symtab_free (Table** tab) {
	Table * t = *tab;
	if (t == NULL) { return; }
	for (int i = 0; i < t->tab_size; ++i) {
		free((void*) t->buckets[i][0].key);
		free((void*) t->buckets[i][1].key);
		free(t->buckets[i]);
	}
	free(t->buckets);
	free(t);
	(*tab) = NULL;
}

// Dan Bernstein's algorithm (djb2)
// taken from http://www.cse.yorku.ca/~oz/hash.html, 2019-10-19
unsigned long symtab_hash(const char *str, unsigned long key) {
	(void) key;
	unsigned long hash = 5381;
	int c; 
	while ((c = *str++) != '\0') {
		hash = ((hash << 5) + hash) + c; // hash*33 + c
	}
	return hash;
}


void * symtab_find (Table * tab, const char* key) {
	unsigned long index = symtab_hash(key, 5381) % tab->tab_size;
	if (tab->buckets[index][0].key != NULL && strcmp(tab->buckets[index][0].key, key) == 0) {
		return tab->buckets[index][0].val;
	} else
	if (tab->buckets[index][1].key != NULL && strcmp(tab->buckets[index][1].key, key) == 0) {
		return tab->buckets[index][1].val;
	} else {
		return NULL;
	}
}

void symtab_insert (Table ** t, const char* key, void* val) {
	Table * tab = *t;
	if (symtab_try_insert(tab, key, val) == true) { return; }
	
	int factor = 1;
	bool inserted = false;
	Table * new = NULL;
	while (!inserted) {
		symtab_free(&new);
		factor <<= 1;
		new = symtab_init(tab->tab_size * factor);
		inserted = symtab_copy_keys(new, tab) && symtab_try_insert(new, key, val);
	}
	symtab_free(t);
	*t = new;
}

bool symtab_try_insert (Table * tab, const char* key, void* val) {
	unsigned long index = symtab_hash(key, 5381) % tab->tab_size;
	if (tab->buckets[index][0].key == NULL) {
		char * str = malloc(strlen(key)+1);
		strcpy(str, key);
		tab->buckets[index][0].key = str;
		tab->buckets[index][0].val = val;
		tab->num_keys++;
		return true;
	} else
	if (strcmp(tab->buckets[index][0].key, key) == 0) {
		tab->buckets[index][0].val = val;
		return true;
	} else
	if (tab->buckets[index][1].key == NULL) {
		char * str = malloc(strlen(key)+1);
		strcpy(str, key);
		tab->buckets[index][1].key = str;
		tab->buckets[index][1].val = val;
		tab->num_keys++;
		return true;
	} else
	if (strcmp(tab->buckets[index][1].key, key) == 0) {
		tab->buckets[index][1].val = val;
		return true;
	} else {
		return false;
	}
}

bool symtab_copy_keys(Table * dst, Table * src) {
	bool inserted = true;
	for(int i = 0; inserted && i < src->tab_size; ++i) {
		if (inserted && src->buckets[i][0].key != NULL) { inserted = inserted && symtab_try_insert(dst, src->buckets[i][0].key, src->buckets[i][0].val); }
		if (inserted && src->buckets[i][1].key != NULL) { inserted = inserted && symtab_try_insert(dst, src->buckets[i][1].key, src->buckets[i][1].val); }
	}
	return inserted;
}

void symtab_print(Table * tab) {
	for(int i = 0; i < tab->tab_size; ++i) {
		printf("%d-0 %s %p\n", i, tab->buckets[i][0].key, tab->buckets[i][0].val);
		printf("%d-1 %s %p\n", i, tab->buckets[i][1].key, tab->buckets[i][1].val);
	}
}

#ifdef UNIT_TEST_HASH

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct symtab_table Table;

int exec_insertions(void);
int main(void) {
	srand(time(NULL));
	char str[] = {'A','A','A','A','A', 0};
	Table * tab = symtab_init(16);
	for (int N = 0; N < 150; ++N) {
		symtab_insert(&tab, str, tab);
		symtab_print(tab);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	symtab_free(&tab);
	return 0;
}


#endif

