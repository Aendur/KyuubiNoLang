#include <stdlib.h>
#include <string.h>
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
	for (int i = 0; i < t->tab_size; ++i) { free(t->buckets[i]); }
	free(t->buckets);
	free(t);
	(*tab) = NULL;
}

// Dan Bernstein's algorithm (djb2)
// taken from http://www.cse.yorku.ca/~oz/hash.html, 2019-10-19
unsigned long symtab_hash(const char *str, unsigned long key) {
	(void) key;
	unsigned long hash = key; // 5381;
	int c; 
	while ((c = *str++) != '\0') {
		hash = ((hash << 5) + hash) + c; // hash*33 + c
	}
	return hash;
}


void * symtab_find (Table * tab, const char* key) {
	unsigned long index = symtab_hash(key, 5381) % tab->tab_size;
	if (strcmp(tab->buckets[index][0].key, key) == 0) {
		return tab->buckets[index][0].val;
	} else
	if (strcmp(tab->buckets[index][1].key, key) == 0) {
		return tab->buckets[index][1].val;
	} else {
		return NULL;
	}
}

void symtab_insert (Table ** t, const char* key, void* val) {
	Table * tab = *t;
	if (symtab_try_insert(tab, key, val)) { return; }
	
	int factor = 1;
	bool inserted = false;
	Table * new = NULL;
	while (!inserted) {
		symtab_free(&new);
		factor <<= 1;
		new = symtab_init(tab->tab_size * factor);
		inserted = symtab_copy_keys(new, tab) && symtab_try_insert(new, key, val);
	}
}

bool symtab_try_insert (Table * tab, const char* key, void* val) {
	unsigned long index = symtab_hash(key, 5381) % tab->tab_size;
	if (strcmp(tab->buckets[index][0].key, key) != 0) {
		tab->buckets[index][0].key = strdup(key);
		tab->buckets[index][0].val = val;
		tab->num_keys++;
		return true;
	} else
	if (strcmp(tab->buckets[index][1].key, key) != 0) {
		tab->buckets[index][1].key = strdup(key);
		tab->buckets[index][1].val = val;
		tab->num_keys++;
		return true;
	} else {
		return false;
	}
}

bool symtab_copy_keys(Table * dst, Table * src) {
	bool inserted = true;
	for(int i = 0; inserted && i < src->tab_size; ++i) {
		if (src->buckets[i][0].key != NULL) { inserted = inserted && symtab_try_insert(dst, src->buckets[i][0].key, src->buckets[i][0].val); }
		if (src->buckets[i][1].key != NULL) { inserted = inserted && symtab_try_insert(dst, src->buckets[i][1].key, src->buckets[i][1].val); }
	}
	return inserted;
}


#ifdef UNIT_TEST_HASH

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct symtab_table Table;

const int SIZE = 512;
const int NTABS = 3;
int * count;
int exec_insertions(void);
int exec_insertions2(void);

int main(void) {
	srand(time(NULL));
	count = calloc(SIZE, sizeof(int));
	int N = exec_insertions();
	for (int i = 0; i < SIZE; ++i) { printf("%d %.2f %d %d\n", N, (float) N / (float) (SIZE * NTABS), i, count[i]); }
	free(count);

	return 0;
}

int exec_insertions(void) {
	static int N = 0;
	static int M = 1000;
	static char str[] = {'A','A','A','A','A',0};
	unsigned long keys[] = {5381, 5381, 5381};
	printf("%s\n", str);
	do {
		++N;

		unsigned long hash;
		hash = symtab_hash(str, keys[N % NTABS]) % SIZE;
		if (count[hash] < NTABS) {
			count[hash]++;
		} else {
			break;
		}

		int i = strlen(str) - 1;
		while (++str[i] > 'z') {
			str[i] = 'A';
			--i;
		}
	} while (N < M);
	return N;
}


#endif

