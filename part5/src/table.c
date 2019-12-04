#include "table.h"
#include "arg-list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Initialize a new table with <size> buckets
Table * table_init (size_t size, const char * key) {
	//if (key == NULL) { fprintf(stderr, "unable to init table with NULL key\n"); return NULL; }

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
	tab->uuid = -1;
	tab->buckets = calloc(size, sizeof(struct bucket));

	// was pair
	// was actions name context
	if (key == NULL) {
		tab->key = malloc(40);
		snprintf((char*) tab->key, 40, "@%lX", (unsigned long) tab << 40 >> 40);
	} else {
		tab->key = malloc(strlen(key)+1);
		strcpy((char*) tab->key, key);
	}

	// was pair
	tab->attr = calloc(1, sizeof(struct attr));
	tab->next = NULL;
	tab->prev = NULL;

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
struct table * table_insert (struct table * tab, const char* key0) {
	if (tab == NULL) { fprintf(stderr, "Trying to insert on null object\n"); return NULL; }

	const char * key; // = key0;
	bool temp = false;
	if (key0 == NULL) {
		key = malloc(40);
		snprintf((char*) key, 40, "$%d", ++tab->uuid);
		temp = true;
	} else {
		key = key0;
	}

	struct table * new_pair = table_init(16, key);
	new_pair->attr->temporary = temp;
	if(temp) { snprintf(new_pair->attr->code, sizeof(new_pair->attr->code), "%s", key); }

	unsigned long hash = table_hash(new_pair->key);
	unsigned long index = hash % tab->n_buckets;

	if (tab->buckets[index].size == 0) {
		tab->buckets[index].first = new_pair;
		tab->buckets[index].last = new_pair;
		tab->buckets[index].size++;
		tab->n_keys++;
	} else {
		struct table * pair = tab->buckets[index].first;
		while(pair != NULL && strcmp(pair->key, new_pair->key) != 0) { pair = pair->next; }

		if (pair == NULL) { // key not found
			tab->buckets[index].last->next = new_pair;
			new_pair->prev = tab->buckets[index].last;
			tab->buckets[index].last = new_pair;
			tab->buckets[index].size++;
			tab->n_keys++;
		} else { // key already present
			table_free(&new_pair);
		}
	}

	if (key != key0) { free((void*)key); }
	return new_pair;
}

// Remove a key from the table. The returned pointer must still be freed
struct table * table_retire (struct table * tab,  const char* key) {
	if (tab == NULL) { fprintf(stderr, "Trying to remove from null object\n"); return NULL; }
	if (key == NULL) { fprintf(stderr, "Trying to remove null key\n"); return NULL; }

	int uuid = -1;
	int is_uuid = sscanf(key, "$%d", &uuid);
	if (is_uuid && uuid !=  tab->uuid) {
		fprintf(stderr, "Can only remove last temp value (last=$%d, current=$%d)\n", tab->uuid, uuid);
		return NULL;
	}


	unsigned long hash = table_hash(key);
	unsigned long index = hash % tab->n_buckets;

	if (tab->buckets[index].size == 0) {
		fprintf(stderr, "Unable to remove key (empty bucket)\n");
		return NULL;
	} else { //if (tab->buckets[index].size == 1) {
		struct table * pair = tab->buckets[index].first;
		while(pair != NULL && strcmp(pair->key, key) != 0) { pair = pair->next; }

		if (pair == NULL) { // key not found
			fprintf(stderr, "Unable to remove key (not found)\n");
			return NULL;
		} else { // key found
			if (tab->buckets[index].size == 1) {
				tab->buckets[index].first = NULL;
				tab->buckets[index].last = NULL;
				tab->buckets[index].size--;
				tab->n_keys--;
				if(is_uuid) { tab->uuid--; }
				return pair;
			} else {
				if (pair == tab->buckets[index].first) {
					tab->buckets[index].first = pair->next;
					pair->next->prev = NULL;
					pair->next = NULL;
				} else if (pair == tab->buckets[index].last ) {
					tab->buckets[index].last = pair->prev;
					pair->prev->next = NULL;
					pair->prev = NULL;
				} else {
					pair->prev->next = pair->next;
					pair->next->prev = pair->prev;
					pair->prev = NULL;
					pair->next = NULL;
				}
				tab->buckets[index].size--;
				tab->n_keys--;
				if(is_uuid) { tab->uuid--; }
				return pair;
			}
		}
	}
}

// Remove a key from the table and free it
void table_remove (struct table * tab,  const char* key) {
	struct table * rem = table_retire(tab, key);
	table_free(&rem);
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


// Copy attributes from src to tgt
void attr_copy(struct attr * tgt, struct attr * src) {
	memcpy(tgt, src, sizeof(struct attr));
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
void attr_print(struct attr * attr) {
	printf("[");
	if(attr==NULL) { printf("null"); }
	else {
		printf(" s_type=");
		switch(attr->symbol_type) {
			case LIST:          printf("LIST");          break;
			case VARIABLE:      printf("VARIABLE");      break;
			case CONSTANT:      printf("CONSTANT");      break;
			case ARRAY:         printf("ARRAY");         break;
			case ARRAY_INDEX:   printf("ARRAY_INDEX");   break;
			case FUNCTION:      printf("FUNCTION");      break;
			case FUNCTION_CALL: printf("FUNCTION_CALL"); break;
			case GENERIC_NODE:  printf("GENERIC_NODE");  break;
			default: printf("%d", attr->symbol_type); break;
		}

		printf(", defined=%d", attr->defined);

		printf(", r_type=");
		switch(attr->return_type) {
			case VOID: printf("void, value=(void)"); break;
			case INT: printf("int, value=%d", attr->value.ival); break;
			case CHAR: printf("char, value=%c", attr->defined ? attr->value.cval : '?'); break;
			case FLOAT: printf("float, value=%f", attr->value.fval); break;
			case STRING: printf("char[], value=%s", attr->defined ? attr->value.sval : "(null)"); break;
			default: printf("%d", attr->return_type); break;
		}
		
		printf(", length=%d", attr->length);

		printf(", code=%s", attr->code);

		printf(", arg_num=%d", attr->arg_num);

		printf(", temp=%d", attr->temporary);

		char * args = al_key(attr->arg_list);
		printf(", args=%s", args);
		free(args);
	}
	printf(" ]");
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

void print_others(Table * tab) {
	const char k0[] = "key29";
	const char k1[] = "key38";
	const char k2[] = "key47";
	const char k3[] = "key56";
	Table * t;
	t = table_find(tab, k0); if(t==NULL) {printf("(null) ");} else {printf("(%p<-%p->%p) ",(void*)t->prev,(void*)t,(void*)t->next);}
	t = table_find(tab, k1); if(t==NULL) {printf("(null) ");} else {printf("(%p<-%p->%p) ",(void*)t->prev,(void*)t,(void*)t->next);}
	t = table_find(tab, k2); if(t==NULL) {printf("(null) ");} else {printf("(%p<-%p->%p) ",(void*)t->prev,(void*)t,(void*)t->next);}
	t = table_find(tab, k3); if(t==NULL) {printf("(null) ");} else {printf("(%p<-%p->%p)\n",(void*)t->prev,(void*)t,(void*)t->next);}
}

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


	printf("\ntest remove\n");
	tab = table_init(16, "key1");
	// char keychain[10];
	// for (int i = 0; i < 64; ++i) {
	// 	snprintf(keychain, 10, "key%d", i);
	// 	printf("%s %lu\n", keychain, table_hash(keychain) % 16);
	// 	table_insert(tab, keychain);
	// }
	const char k0[] = "key29"; table_insert(tab, k0);
	const char k1[] = "key38"; table_insert(tab, k1);
	const char k2[] = "key47"; table_insert(tab, k2);
	const char k3[] = "key56"; table_insert(tab, k3);
	struct table * rem;

	rem = table_retire(tab, "key00"); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k0); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k0); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k1); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k1); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k2); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k2); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k3); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k3); print_others(tab); table_free(&rem);

	table_insert(tab, k0);
	table_insert(tab, k1);
	table_insert(tab, k2);
	table_insert(tab, k3);
	print_others(tab);
	rem = table_retire(tab, k3); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k3); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k2); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k2); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k1); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k1); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k0); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k0); print_others(tab); table_free(&rem);


	table_insert(tab, k0);
	table_insert(tab, k1);
	table_insert(tab, k2);
	table_insert(tab, k3);
	print_others(tab);
	rem = table_retire(tab, k2); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k2); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k1); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k1); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k0); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k0); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k3); print_others(tab); table_free(&rem);
	rem = table_retire(tab, k3); print_others(tab); table_free(&rem);

	table_insert(tab, k0);
	table_insert(tab, k1);
	table_insert(tab, k2);
	table_insert(tab, k3);
	table_remove(tab, k1);
	table_remove(tab, k2);
	table_remove(tab, k3);
	table_remove(tab, k0);

	printf("\n\ntest uuid\n");
	table_insert(tab, NULL);
	table_insert(tab, NULL);
	table_insert(tab, NULL);
	table_printf(tab,0);
	table_remove(tab, "$0"); table_printf(tab, 0); getchar();
	table_remove(tab, "$1"); table_printf(tab, 0); getchar();
	table_remove(tab, "$2"); table_printf(tab, 0); getchar();
	table_remove(tab, "$2"); table_printf(tab, 0); getchar();
	table_remove(tab, "$0"); table_printf(tab, 0); getchar();
	table_remove(tab, "$1"); table_printf(tab, 0); getchar();
	table_remove(tab, "$0"); table_printf(tab, 0); getchar();

	table_free(&tab);


	return 0;
}


#endif

