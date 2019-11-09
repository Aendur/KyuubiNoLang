#ifndef TABLE_H
#define TABLE_H

#include <stdbool.h>


struct arg_type {
	int type;
	struct arg_type * next;
};

struct symbol {
	int type;
	int n_args;
	struct arg_type * first_arg;
	struct arg_type * last_arg;
	struct symtab_table * leaf;
};


struct symtab_pair {
	const char * key;
	void * val;
};

typedef struct symtab_table Table;
struct symtab_table {
	struct symtab_table * root;
	struct symtab_pair ** buckets;
	int tab_size;
	int num_keys;
};

Table * symtab_init      (int);
void    symtab_free      (Table**);
void *  symtab_find      (Table*, const char*);
void    symtab_insert    (Table**, const char*, void*);
bool    symtab_try_insert(Table* , const char*, void*);
bool    symtab_copy_keys (Table* , Table*);
void    symtab_print     (Table*);
void    symtab_printf    (Table*);
unsigned long symtab_hash(const char *, unsigned long);


#endif

