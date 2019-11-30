#include <stdio.h>
#include "parser.h"
#include "scanner.h"
#include "typechecker.h"
#include "node.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
// #include "actions.h"
#include "lines.h"

//#include <getopt.h>

extern int yynerrs;
int nline = 1;
int ncol0 = 1;
int ncol1 = 1;
Node * root = NULL;
//Nodelist * node_list;
//Table * symbol_table;
Tablestack * context_stack;
int no_scope = 0;
FILE * output;
struct lines * output_lines;

int main(int argc, char** argv) {
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

	// Open output file
	output = fopen("k.tac", "w");
	
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


	printf("------------------------------\n");
	printf("OUTPUT\n");
	printf("------------------------------\n");
	lines_write(output, output_lines);

	// close input file
	fclose(yyin);
	// close output file;
	fclose(output);

	// release resources
	yylex_destroy();
	//table_free(&symbol_table);
	ts_free(&context_stack);
	// nl_free(&node_list);
	node_free_recursive(&root);
	lines_free(&output_lines);


	return 0;
}

