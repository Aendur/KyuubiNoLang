#ifndef TABLE_H
#define TABLE_H

#include <stdbool.h>

/*
enum symtab_type {
	SYMTAB_FUNCTION,
	SYMTAB_VARIABLE,
	SYMTAB_ARRAY,
	SYMTAB_SCOPE,
};

struct arg_type {
	int type;
	struct arg_type * next;
};
*/
struct attr {
	// int n_args;
	// struct arg_type * first_arg;
	// struct arg_type * last_arg;
	// union {
	// 	float fval;
	// 	int   ival;
	// 	char  cval;
	// 	char* sval;
	// } value;
	// struct symtab_table * root;
	struct node * node;
	struct table * context;
};


struct bucket {
	struct pair * first;
	struct pair * last;
	unsigned long size;
};

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

void table_printm (Table* tab);
void table_printf (Table* tab);

unsigned long round_to_2(unsigned long x);


#endif

