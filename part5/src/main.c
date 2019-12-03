#include <stdio.h>
#include "parser.h"
#include "scanner.h"
#include "typechecker.h"
#include "node.h"
#include "misc.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
// #include "actions.h"
#include "lines.h"
#include <time.h>

//#include <getopt.h>

extern int yynerrs;
int nline = 1;
int ncol0 = 1;
int ncol1 = 1;
Node * root = NULL;
//Nodelist * node_list;
//Table * symbol_table;
Tablestack * context_stack;
//int no_scope = 0;
FILE * output = NULL;
struct lines * output_lines;

int main(int argc, char** argv) {
	srand(time(NULL));
	// printf("'%s' ", random_label(NULL, 0, NULL)); printf("'%s' ", random_label(NULL, 1, NULL)); printf("'%s'\n", random_label(NULL, 2, NULL));
	// printf("'%s' ", random_label("", 0, NULL)); printf("'%s' ", random_label("", 1, NULL)); printf("'%s'\n", random_label("", 2, NULL));
	// printf("'%s' ", random_label("a", 0, NULL)); printf("'%s' ", random_label("a", 1, NULL)); printf("'%s'\n", random_label("a", 2, NULL));
	// printf("'%s' ", random_label(NULL, 0, "")); printf("'%s' ", random_label(NULL, 1, "")); printf("'%s'\n", random_label(NULL, 2, ""));
	// printf("'%s' ", random_label(NULL, 0, "b")); printf("'%s' ", random_label(NULL, 1, "b")); printf("'%s'\n", random_label(NULL, 2, "b"));
	// return 0;

	// handle cmd line arguments
	if (argc < 2) {
		fprintf(stderr, "Missing input file.\n");
		return 0;
	}

	// open input file
	yyin = fopen(argv[1], "r");

	// check input file validity
	if (yyin == NULL) {
		fprintf(stderr, "Failed to open file %s.\n", argv[1]);
		return 0;
	}

	// initialize context stack with global symbol table
	context_stack = ts_init();
	ts_push(context_stack, table_init(16, ":global.scope:"));

	// initialize node list
	// node_list = nl_init();
	
	// Init output text buffer
	output_lines = lines_init();
	
	// call GNU Bison
	yyparse();

	if (yynerrs == 0) {
		printf("------------------------------\n");
		printf("SYNTAX TREE\n");
		printf("------------------------------\n");
		print_tree(root, 0);
	}

	printf("------------------------------\n");
	printf("SYMBOL TABLE\n");
	printf("------------------------------\n");
	ts_printf(context_stack);


	bool output_is_stdout = true;
	if (yynerrs == 0) {
		printf("------------------------------\n");
		printf("OUTPUT\n");
		printf("------------------------------\n");
		// Open output file
		if (output_is_stdout)
			output = stdout;
		else output = fopen("k.tac", "w");
		lines_write(output, output_lines);
	}

	// close input file
	fclose(yyin);
	// close output file;
	if (!output_is_stdout) { fclose(output); }

	// release resources
	yylex_destroy();
	//table_free(&symbol_table);
	ts_free(&context_stack);
	// nl_free(&node_list);
	node_free_recursive(&root);
	lines_free(&output_lines);


	return 0;
}

