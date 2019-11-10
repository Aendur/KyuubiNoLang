#include "table.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
typedef struct table Table;
struct table {
	size_t n_buckets;
	size_t n_keys;
	struct table  *  root;
	struct bucket ** buckets;
};
*/

// Initialize a new table with <size> buckets
Table * table_init (size_t size) {
	if (size < 16) {
		size = 16;
	} else {
		// our hash function prefers mod 2^n
		size = round_to_2(size);
	}

	Table * tab = malloc(sizeof(Table));
	tab->n_buckets = size;
	tab->n_keys = 0;
	tab->root = NULL;
	tab->buckets = calloc(size, sizeof(struct bucket));
	return tab;
}

// Release a table from memory
void table_free (Table** tab) {
	if (tab == NULL) { fprintf(stderr, "table_free ** null\n"); return; }
	if (*tab == NULL) { fprintf(stderr, "table_free * null\n"); return; }
	Table * table = *tab;

	for(unsigned int i = 0; i < table->n_buckets; ++i) {
		struct pair * pair = table->buckets[i].first;
		struct pair * next = NULL;
		while (pair != NULL) {
			next = pair->next;
			free((char*) pair->key); pair->key = NULL;
			//free(pair->val); pair->val = NULL;
			free(pair);
			pair = next;
			table->buckets[i].size--;
		}
	}

	free(table->buckets);
	table->buckets = NULL;
	free(table);
	*tab = NULL;
}

// Calculate a table's load factor
double table_loadf  (Table* tab) {
	return (double) tab->n_keys / (double) tab->n_buckets;
}

// Dan Bernstein's algorithm (djb2)
// taken from http://www.cse.yorku.ca/~oz/hash.html, 2019-10-19
unsigned long table_hash(const char *str) {
	unsigned long hash = 5381;
	int c; 
	while ((c = *str++) != '\0') {
		hash = ((hash << 5) + hash) + c; // hash*33 + c
	}
	return hash;
}

// Search for key in table, returns NULL if not found
struct pair * table_find (Table* tab, const char* key) {
	if (tab == NULL) { fprintf(stderr, "Trying to search on null object\n"); return NULL; }
	unsigned long hash = table_hash(key);
	unsigned long index = hash % tab->n_buckets;
	
	struct pair * pair = tab->buckets[index].first;
	while(pair != NULL && strcmp(pair->key, key) != 0) { pair = pair->next; }
	return pair;
}

// Insert (key,val) pair in table
struct pair* table_insert (Table* tab, const char* key, struct symbol* val) {
	if (tab == NULL) { fprintf(stderr, "Trying to insert on null object\n"); return NULL; }
	unsigned long hash = table_hash(key);
	unsigned long index = hash % tab->n_buckets;

	if (tab->buckets[index].size == 0) {
		struct pair * pair = pair_init(key, val);
		tab->buckets[index].first = pair;
		tab->buckets[index].last = pair;
		tab->buckets[index].size++;
		tab->n_keys++;
		return pair;
	} else {
		struct pair * pair = tab->buckets[index].first;
		while(pair != NULL && strcmp(pair->key, key) != 0) { pair = pair->next; }

		if (pair == NULL) { // key not found
			pair = pair_init(key, val);
			tab->buckets[index].last->next = pair;
			tab->buckets[index].last = pair;
			tab->buckets[index].size++;
			tab->n_keys++;
			return pair;
		} else { // key already present
			return NULL;
		}
	}
}


// Rehashes a table to decrease load factor
Table * table_rehash (Table ** tab) {
	if (tab == NULL) { fprintf(stderr, "table_rehash ** null\n"); return NULL; }
	if (*tab == NULL) { fprintf(stderr, "table_rehash * null\n"); return NULL; }
	Table * oldtab = *tab;
	Table * newtab = table_init(oldtab->n_keys);

	for (unsigned int i = 0; i < oldtab->n_buckets; ++i) {
		struct pair * pair = oldtab->buckets[i].first;
		while(pair != NULL) {
			table_insert(newtab, pair->key, pair->val);
			pair = pair->next;
		}
	}

	table_free(tab);
	return newtab;
}

// Print table
void table_printf (Table* tab) {
	table_printm(tab);
}

// Print table metadata
void table_printm (Table* tab) {
	printf("address: %p\n", (void*) tab);
	if (tab == NULL) { return; }

	printf("n_buckets: %lu\n", tab->n_buckets);
	printf("n_keys: %lu\n", tab->n_keys);
	printf("load factor: %f\n", table_loadf(tab));
}

// print table data for debugging
void table_print_debug (Table* tab) {
	unsigned long complexity = 0;
	unsigned long collisions = 0;
	if (tab == NULL) { return; }
	for(unsigned long i = 0; i < tab->n_buckets; ++i) {
		struct pair * pair = tab->buckets[i].first;
		while(pair != NULL) {
			printf("%lu %lu %lu ", i, table_hash(pair->key), tab->n_buckets);
			pair_print(pair);
			pair = pair->next;
			++collisions;
		}
		if (tab->buckets[i].size > 0) { --collisions; }
		unsigned long n = tab->buckets[i].size;
		complexity += ((n*n + n) / 2);
	}
	printf("complexity: %lu/%lu (%f)\n", complexity, tab->n_keys, (double) complexity / (double) tab->n_keys);
	printf("collisions: %lu\n", collisions);
}

// Construct a (key,val) pair object
struct pair * pair_init(const char * key, struct symbol * val) {
	size_t len = strlen(key) + 1;
	struct pair * pair = malloc(sizeof(struct pair));
	pair->key = malloc(len);
	pair->key = memcpy((char*) pair->key, key, len);
	pair->val = val;
	pair->next = NULL;
	return pair;
}


// prints a (key,val) pair object
void pair_print(struct pair * pair) {
	printf("addr: %p ", (void*) pair);
	if (pair != NULL) {
		printf("(\"%s\",", pair->key);
		printf("%p,", (void*) pair->val);
		printf("%p)", (void*) pair->next);
	}
	printf("\n");
}


// rounds an integer to the next greater power of two
unsigned long round_to_2(unsigned long x) {
	unsigned long c = 0;
	unsigned long y = x;
	while(x > 1) {
		x >>= 1;
		++c;
	}
	x <<= c;
	if (y > x) { x <<= 1; }
	return x;
}

#ifdef UNIT_TEST_HASH
#include <time.h>

int exec_insertions(void);
int main(void) {
	srand(time(NULL));
	
	printf("\ntest table init\n");
	Table * tab = table_init(16);
	table_printm(tab);

	printf("\ntest hashing / find empty\n");
	char str[] = {'A','A','A','A','A', 0};
	printf("%s %lu\n", str, table_hash(str));
	printf("str: %s addr: %p\n", str, (void*) table_find(tab, str));

	printf("\ntest insertions / find not empty\n");
	struct  pair * p;
	p = table_find(tab, "string1");
	printf("find: ");
	pair_print(p);

	p = table_insert(tab, "string1", NULL);
	printf("insert: ");
	pair_print(p);

	p = table_find(tab, "string1");
	printf("find: ");
	pair_print(p);

	p = table_insert(tab, "string1", NULL);
	printf("insert: ");
	pair_print(p);

	p = table_find(tab, "string1");
	printf("find: ");
	pair_print(p);

	int NMAX = 1000;
	printf("\ntest many insertions\n"); getchar();
	for (int N = 0; N < NMAX; ++N) {
		p = table_insert(tab, str, NULL);
		pair_print(p);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	table_printm(tab);

	for (size_t i = 0; i < strlen(str); ++i) { str[i] = 'A'; }
	printf("\ntest many repeated insertions\n"); getchar();
	for (int N = 0; N < NMAX; ++N) {
		p = table_insert(tab, str, NULL);
		pair_print(p);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	table_printm(tab);

	for (size_t i = 0; i < strlen(str); ++i) { str[i] = 'A'; }
	printf("\ntest many searches\n"); getchar();
	for (int N = 0; N < NMAX; ++N) {
		p = table_find(tab, str);
		pair_print(p);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	table_printm(tab);
	
	printf("\ntest print\n"); getchar();
	table_print_debug(tab);

	printf("\ntest rehash\n"); getchar();
	Table * tab2 = table_rehash(&tab);
	table_printm(tab);
	table_printm(tab2);

	printf("\ntest print after rehash\n"); getchar();
	table_print_debug(tab);
	table_print_debug(tab2);


	printf("\ntest free\n");
	table_free(&tab);
	table_printm(tab);
	table_free(&tab2);
	table_printm(tab2);

	printf("\ntest round to 2\n");
	{ unsigned long i = 254; printf("%10lu %10lu\n", i, round_to_2(i)); }
	{ unsigned long i = 255; printf("%10lu %10lu\n", i, round_to_2(i)); }
	{ unsigned long i = 256; printf("%10lu %10lu\n", i, round_to_2(i)); }
	{ unsigned long i = 257; printf("%10lu %10lu\n", i, round_to_2(i)); }
	
	return 0;
}


#endif

