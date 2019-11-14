#ifndef TABLE_H
#define TABLE_H

#include <stdbool.h>

struct attr {
	int symbol_type;
	int return_type;
	struct table * context;
};

struct bucket {
	struct pair * first;
	struct pair * last;
	unsigned long size;
};

typedef struct pair Symbol;
struct pair {
	const char * key;
	struct attr * attr;
	struct pair * next;
};

typedef struct table Table;
struct table {
	unsigned long n_buckets;
	unsigned long n_keys;
	struct table  * root;
	struct table  * next;
	struct bucket * buckets;
};

Table * table_init (unsigned long size);
void table_free (Table** tab);
double table_loadf (Table* tab);
unsigned long table_hash (const char * key);
struct pair * table_find (Table* tab, const char* key);
struct pair * table_insert (Table* tab, const char* key); //, struct attr* val);
Table * table_rehash (Table** tab);

struct pair * pair_init(const char * key); //, struct attr * val);
void pair_print(struct pair * pair);
void attr_print(struct attr * attr);

void table_printm (Table* tab);
void table_printf (Table* tab, int level);

unsigned long round_to_2(unsigned long x);


#endif

