#include "table.h"
#include "arg-list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// static unsigned int table_uuid = 0;

// Initialize a new table with <size> buckets
Table * table_init (size_t size, const char * key) {
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
	tab->below = NULL;
	tab->buckets = calloc(size, sizeof(struct bucket));

	// was pair
	// was actions name context
	if (key == NULL) {
		tab->key = malloc(40);
		snprintf((char*) tab->key, 40, "%p", (void*) tab);
		//snprintf((char*) tab->key, 40, "$%d", table_uuid++);
	} else {
		tab->key = malloc(strlen(key)+1);
		strcpy((char*) tab->key, key);
	}
	// was pair
	tab->attr = calloc(1, sizeof(struct attr));
	tab->next = NULL;

	return tab;
}

// Release a table from memory
void table_free (Table** tab) {
	if (tab == NULL) { fprintf(stderr, "table_free ** null\n"); return; }
	if (*tab == NULL) { fprintf(stderr, "table_free * null\n"); return; }
	Table * table = *tab;

	for(unsigned int i = 0; i < table->n_buckets; ++i) {
		struct table * pair = table->buckets[i].first;
		struct table * next = NULL;
		while (pair != NULL) {
			next = pair->next;
			table_free(&pair);
			// free((char*) pair->key); pair->key = NULL;
			// free(pair->attr); pair->attr = NULL;
			// free(pair);
			pair = next;
			table->buckets[i].size--;
		}
	}

	al_free(&(table->attr->arg_list));
	free((char*) table->key);    table->key = NULL;
	free(table->attr);           table->attr = NULL;
	free(table->buckets);        table->buckets = NULL;
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
struct table * table_find (struct table * tab, const char* key) {
	if (tab == NULL) { fprintf(stderr, "Trying to search on null object\n"); return NULL; }
	if (key == NULL) { fprintf(stderr, "Trying to search for null key\n"); return NULL; }
	unsigned long hash = table_hash(key);
	unsigned long index = hash % tab->n_buckets;
	
	//struct pair * pair = tab->buckets[index].first;
	struct table * pair = tab->buckets[index].first;
	while(pair != NULL && strcmp(pair->key, key) != 0) { pair = pair->next; }
	return pair;
}

// Search for key in all tables from current to root, returns NULL if not found
struct table * table_find_back (struct table * tab, const char* key) {
	if (tab == NULL) { fprintf(stderr, "Trying to search on null object\n"); return NULL; }
	struct table * pair;
	do {
		pair = table_find(tab, key);
		tab = tab->root;
	} while (tab != NULL && pair == NULL);
	return pair;
}

// Insert (key,val) pair in table
struct table * table_insert (struct table * tab, const char* key) {
	if (tab == NULL) { fprintf(stderr, "Trying to insert on null object\n"); return NULL; }

	struct table * new_pair = table_init(16, key);

	unsigned long hash = table_hash(new_pair->key);
	unsigned long index = hash % tab->n_buckets;

	if (tab->buckets[index].size == 0) {
		tab->buckets[index].first = new_pair;
		tab->buckets[index].last = new_pair;
		tab->buckets[index].size++;
		tab->n_keys++;
		return new_pair;
	} else {
		struct table * pair = tab->buckets[index].first;
		while(pair != NULL && strcmp(pair->key, new_pair->key) != 0) { pair = pair->next; }

		if (pair == NULL) { // key not found
			tab->buckets[index].last->next = new_pair;
			tab->buckets[index].last = new_pair;
			tab->buckets[index].size++;
			tab->n_keys++;
			return new_pair;
		} else { // key already present
			table_free(&new_pair);
			return NULL;
		}
	}
}


// Rehashes a table to decrease load factor
struct table * table_rehash (struct table ** tab) {
	if (tab == NULL) { fprintf(stderr, "table_rehash ** null\n"); return NULL; }
	if (*tab == NULL) { fprintf(stderr, "table_rehash * null\n"); return NULL; }
	struct table * oldtab = *tab;
	struct table * newtab = table_init(oldtab->n_keys, oldtab->key);

	for (unsigned int i = 0; i < oldtab->n_buckets; ++i) {
		//struct pair * pair = oldtab->buckets[i].first;
		struct table * pair = oldtab->buckets[i].first;
		while(pair != NULL) {
			//struct pair * newpair = table_insert(newtab, pair->key);
			struct table * newpair = table_insert(newtab, pair->key);
			if (newpair == NULL) { fprintf(stderr, "unable to insert newpair\n"); }
			else {
				// COPY VAL
				memcpy(newpair->attr, pair->attr, sizeof(struct attr));
			}
			pair = pair->next;
		}
	}

	table_free(tab);
	return newtab;
}

// #ifdef DEBUG
// #include "node.h"
// #endif

// Print table
void table_printf (struct table * tab, int level) {
	if (tab == NULL) { return; }
	for (unsigned int i = 0; i < tab->n_buckets; ++i) {
		struct table * pair = tab->buckets[i].first;
		while(pair != NULL) {
			for (int lvl = 0; lvl < level; ++lvl) { printf("   "); }
			pair_print(pair);

			table_printf(pair, level+1);
			pair = pair->next;
		}
	}
	//table_printm(tab);
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
		//struct pair * pair = tab->buckets[i].first;
		struct table * pair = tab->buckets[i].first;
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

// prints a (key,val) pair object
//void pair_print(struct pair * pair) {
void pair_print(struct table * pair) {
	if (pair != NULL) {
		//printf("(key=\"%s\",", pair->key);
		//printf("attr=");
		//printf(")\n");
		printf("%s  ", pair->key);
		attr_print(pair->attr);
		printf("\n");
	} else {
		printf("(null)");
	}
}


#include "parser.h"
#include "arg-list.h"
void attr_print(struct attr * attr) {
	printf("<");
	if(attr==NULL) { printf("null"); }
	else {
		printf("s_type=");
		switch(attr->symbol_type) {
			case LIST:          printf("LIST");          break;
			case VARIABLE:      printf("VARIABLE");      break;
			case CONSTANT:      printf("CONSTANT");      break;
			case ARRAY:         printf("ARRAY");         break;
			case ARRAY_INDEX:   printf("ARRAY_INDEX");   break;
			case FUNCTION:      printf("FUNCTION");      break;
			case FUNCTION_CALL: printf("FUNCTION_CALL"); break;
			case DECLARATION:   printf("DECLARATION");   break;
			case GENERIC_NODE:  printf("GENERIC_NODE");  break;
			default: printf("%d", attr->symbol_type); break;
		}

		printf(",r_type=");
		switch(attr->return_type) {
			case INT:   printf("int");   break;
			case VOID:  printf("void");  break;
			case CHAR:  printf("char");  break;
			case FLOAT: printf("float"); break;
			default: printf("%d", attr->return_type); break;
		}

		char * args = al_key(attr->arg_list);
		printf(",args=%s", args);
		free(args);
	}
	printf(">");
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
int main(void) {
	printf("\ntest round to 2\n");
	{ unsigned long i = 254; printf("%10lu %10lu\n", i, round_to_2(i)); }
	{ unsigned long i = 255; printf("%10lu %10lu\n", i, round_to_2(i)); }
	{ unsigned long i = 256; printf("%10lu %10lu\n", i, round_to_2(i)); }
	{ unsigned long i = 257; printf("%10lu %10lu\n", i, round_to_2(i)); }

	printf("\ntest table init\n");
	Table * tab = table_init(16, "key1");
	table_printm(tab);

	printf("\ntest hashing / find empty\n");
	char str[] = {'A','A','A','A','A', 0};
	printf("%s %lu\n", str, table_hash(str));
	printf("str: %s addr: %p\n", str, (void*) table_find(tab, str));

	printf("\ntest insertions / find not empty\n");
	struct table * p;
	p = table_find(tab, "string1");
	printf("find: ");
	pair_print(p);

	p = table_insert(tab, "string1");
	printf("insert: ");
	pair_print(p);

	//goto cleanup;

	p = table_find(tab, "string1");
	printf("find: ");
	pair_print(p);

	p = table_insert(tab, "string1");
	printf("insert: ");
	pair_print(p);

	p = table_find(tab, "string1");
	printf("find: ");
	pair_print(p);


	int NMAX = 1000;
	printf("\ntest many insertions\n");

	//getchar();
	for (int N = 0; N < NMAX; ++N) {
		p = table_insert(tab, str);
		pair_print(p);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	table_printm(tab);

	for (size_t i = 0; i < strlen(str); ++i) { str[i] = 'A'; }
	printf("\ntest many repeated insertions\n"); //getchar();
	for (int N = 0; N < NMAX; ++N) {
		p = table_insert(tab, str);
		pair_print(p);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	table_printm(tab);

	for (size_t i = 0; i < strlen(str); ++i) { str[i] = 'A'; }
	printf("\ntest many searches\n"); //getchar();
	for (int N = 0; N < NMAX; ++N) {
		p = table_find(tab, str);
		pair_print(p);
		int i = strlen(str) - 1;
		while (++str[i] > 'z') { str[i] = 'A'; --i; }
	}
	table_printm(tab);
	
	printf("\ntest print\n"); //getchar();
	table_print_debug(tab);

	// before_rehash:
	printf("\ntest rehash\n");
	Table * tab2 = table_rehash(&tab);
	table_printm(tab);
	table_printm(tab2);

	printf("\ntest print after rehash\n");
	table_print_debug(tab);
	table_print_debug(tab2);


	printf("\ntest free\n");
	table_free(&tab2);
	table_printm(tab2);
	// cleanup:
	table_free(&tab);
	table_printm(tab);
	return 0;
}


#endif

