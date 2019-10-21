#ifndef TABLE_H
#define TABLE_H

struct symtab_pair {
	const char * key;
	void * val;
};

struct symtab_table {
	struct symtab_pair ** buckets;
	int tab_size;
	int num_keys;
};


struct symtab_table * symtab_init (int);
void   symtab_free   (struct symtab_table**);
void * symtab_find   (struct symtab_table*, const char*);

void   symtab_insert     (struct symtab_table**, const char*, void*);
bool   symtab_try_insert (struct symtab_table* , const char*, void*);
bool   symtab_copy_keys  (struct symtab_table* , struct symtab_table*);

void   symtab_print      (struct symtab_table*);



unsigned long symtab_hash(const char *, unsigned long);


#endif

