#ifndef TABLE_H
#define TABLE_H

#include <stdbool.h>

typedef struct table Symbol;
typedef struct table Table;
struct table {
	const char * key;
	struct attr * attr;
	struct table * next;
	struct table * prev;

	unsigned long n_buckets;
	unsigned long n_keys;
	struct table  * root;
	//struct table  * below;
	struct bucket * buckets;

	int uuid;
};

struct bucket {
	struct table * first;
	struct table * last;
	unsigned long size;
};

struct attr {
	char code[40];
	char *reserved_label;
	char *reserved_while;
	int symbol_type;
	int return_type;
	bool global;
	bool defined;
	bool temporary;
	bool function_returns;
	union {
		int   ival;
		char  cval;
		const char* sval;
		float fval;
	} value;
	int length;
	int arg_num;
	int n_args;
	struct arg_list * arg_list;
	struct node * statement_tree;
};

struct table * table_init (unsigned long size, const char * key);
void table_free (Table** tab);
double table_loadf (Table* tab);
unsigned long table_hash (const char * key);
struct table * table_find (Table* tab, const char* key);
struct table * table_find_back (Table* tab, const char* key);
struct table * table_insert (Table* tab, const char* key); //, struct attr* val);
struct table * table_retire (Table* tab, const char* key);
void           table_remove (Table* tab, const char* key);
struct table * table_rehash (Table** tab);

// struct pair * pair_init(const char * key);
//void pair_print(struct pair * pair);
void pair_print(struct table * pair);
void attr_print(struct attr * attr);
void attr_copy(struct attr * tgt, struct attr * src);

void table_printm (Table* tab);
void table_printf (Table* tab, int level);

unsigned long round_to_2(unsigned long x);


#endif

