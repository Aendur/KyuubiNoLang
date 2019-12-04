#include <stdio.h>
#include "parser.h"
#include "scanner.h"
#include "typechecker.h"
#include "node.h"
#include "misc.h"
#include "node-list.h"
#include "table.h"
#include "table-stack.h"
#include "lines.h"
#include <time.h>

//#include <getopt.h>

extern int yynerrs;
int nline = 1;
int ncol0 = 1;
int ncol1 = 1;
Node * root = NULL;
Tablestack * context_stack = NULL;
Tablestack * operation_stack = NULL;
FILE * output = NULL;
struct lines * output_lines = NULL;
struct lines * output_table = NULL;

int main(int argc, char** argv) {
	srand(time(NULL));

	// char * str = "this\nis\x40some\tstring l\\\\iteral";
	// char * pos = str;
	// char c = 0;
	// printf("%s\n", str);
	// while ((c = lit_to_char(&pos)) != 0) {
	// 	printf("%d '%c'\n", c, c);
	// }
	// getchar();

	// handle cmd line arguments
	if (argc < 2) {
		fprintf(stderr, "Missing input file.\n");
		return 0;
	}

	// preprocess input file
	FILE * fin = cat_files("src/stdio.k", argv[1]);

	// check input file validity
	if (fin == NULL) {
		fprintf(stderr, "Failed to open file %s.\n", argv[1]);
		return 0;
	}

	// open input file
	yyin = fin;

	// initialize context stack with global symbol table
	context_stack = ts_init();
	ts_push(context_stack, table_init(16, ":WORLD:"));

	// initialize an empty operation stack
	operation_stack = ts_init();

	// Init output text buffers
	output_lines = lines_init();
	output_table = lines_init();
	
	// call GNU Bison
	yyparse();

	// if (yynerrs == 0) {
	// 	printf("------------------------------\n");
	// 	printf("SYNTAX TREE\n");
	// 	printf("------------------------------\n");
	// 	print_tree(root, 0);
	// }

	printf("------------------------------\n");
	printf("SYMBOL TABLE\n");
	printf("------------------------------\n");
	ts_printf(context_stack);

	if (yynerrs == 0) {
		// printf("------------------------------\n");
		// printf("OUTPUT\n");
		// printf("------------------------------\n");

		// open output file
		printf("output file: k.tac\n");
		output = fopen("k.tac", "w");

		// write out table section
		fprintf(output, ".table\n");
		lines_write(output, output_table);

		// write out code section
		fprintf(output, ".code\n");
		lines_write(output, output_lines);

		// set program entry point
		fprintf(output, "main:\n");
		fprintf(output, "\tcall main_v\n\n");

		// close output file
		fclose(output);
	}

	// close input file
	fclose(yyin);

	// remove preprocessed file
	remove("k.tmp");

	// release resources
	yylex_destroy();
	
	// release operations stack
	while(operation_stack->size > 0) { ts_pull(operation_stack); }
	ts_free(&operation_stack);
	ts_free(&context_stack);
	
	// nl_free(&node_list);
	node_free_recursive(&root);
	lines_free(&output_lines);
	lines_free(&output_table);


	return 0;
}

