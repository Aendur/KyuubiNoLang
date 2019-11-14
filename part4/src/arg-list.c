#include "arg-list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct arg_list * al_init(int data_type, int decl_type, const char * name) {
	if(name == NULL) { fprintf (stderr, "null arg name\n"); return NULL; }
	
	struct arg_list * al = malloc(sizeof(struct arg_list));
	struct arg * new = malloc(sizeof(struct arg));
	
	al->first = new;
	al->last  = new;
	al->size  = 1;

	new->data_type = data_type;
	new->decl_type = decl_type;
	new->name = malloc(strlen(name)+1);
	strcpy((char*)new->name, name);
	new->next = NULL;

	return al;
}

struct arg_list * al_link(struct arg_list * head, struct arg_list ** tail) {
	if(head == NULL) { fprintf (stderr, "null head arg list\n"); return NULL; }
	if(tail == NULL) { fprintf (stderr, "null &tail arg list\n"); return head; }
	if(*tail == NULL) { fprintf (stderr, "null tail arg list\n"); return head; }

	head->last->next = (*tail)->first;
	head->last = (*tail)->last;
	head->size += (*tail)->size;

	free(*tail);
	*tail = NULL;

	return head;
}

void al_free(struct arg_list ** alist) {
	if(alist == NULL) { fprintf (stderr, "null ** arg list\n"); return; }
	if(*alist == NULL) { fprintf (stderr, "null * arg list\n"); return; }

	struct arg_list * al = *alist;
	struct arg * arg = al->first;
	struct arg * next;

	while(arg != NULL) {
		next = arg->next;
		free((char*)arg->name);
		free(arg);
		arg = next;
	}
	free(al);
	*alist = NULL;
}

void al_print(struct arg_list * al) {
	if(al == NULL) { fprintf (stderr, "null arg list\n"); return; }

	struct arg * arg = al->first;
	while(arg != NULL) {
		printf("%d %d %s\n", arg->data_type, arg->decl_type, arg->name);
		arg=arg->next;
	}
}

#ifdef UNIT_TEST_ALIST
int main() {
	struct arg_list * al1 = al_init(-1, -10, NULL);
	struct arg_list * al2 = al_init( 0,   0, "a");
	struct arg_list * al3 = al_init( 1,  10, "b");
	struct arg_list * al4 = al_init( 2,  20, "c");
	struct arg_list * al5 = al_init( 3,  30, "d");
	struct arg_list * al6 = al_init( 4,  40, "e");
	struct arg_list * al7 = al_init( 5,  50, "f");
	struct arg_list * al8 = al_init( 6,  60, "g");
	struct arg_list * al9 = al_init( 7,  70, "h");


	al_link(al2, &al3);
	al_link(al4, &al5);
	al_link(al6, &al7);
	al_link(al8, &al9);

	al_link(al2, &al4);
	al_link(al6, &al8);

	al_link(al2, &al6);

	al_print(al2);
	printf("addr: %p size: %u\n", (void*) al2, al2->size);
	al_free(&al2);

	printf("%p\n", (void*) al1);
	printf("%p\n", (void*) al2);
	printf("%p\n", (void*) al3);
	printf("%p\n", (void*) al4);
	printf("%p\n", (void*) al5);
	printf("%p\n", (void*) al6);
	printf("%p\n", (void*) al7);
	printf("%p\n", (void*) al8);
	printf("%p\n", (void*) al9);
}
#endif