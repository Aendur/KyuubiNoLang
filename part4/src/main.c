#include <stdio.h>
#include "parser.h"
#include "scanner.h"
#include "node.h"
#include "table.h"

extern int yynerrs;
int nline = 1;
int ncol0 = 1;
int ncol1 = 1;
Node * root;
Nodelist * node_list;
Table * symbol_table;


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

	symbol_table = symtab_init(16);
	node_list = nodelist_init();

	yyparse();
	//printf("%d\n", yynerrs);
	
	if (yynerrs == 0) {
		printf("------------------------------\n");
		printf("SYMBOL TABLE\n");
		printf("------------------------------\n");
		symtab_printf(symbol_table);
		printf("------------------------------\n");
		printf("SYNTAX TREE\n");
		printf("------------------------------\n");
		print_tree(root, 0);
	}

	symtab_free(&symbol_table);
	nodelist_free(&node_list);
	
	// close input file
	fclose(yyin);

	yylex_destroy();
	//yy_destroy();
	return 0;
}

