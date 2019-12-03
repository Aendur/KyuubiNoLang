#include "generator.h"
#include "lines.h"
#include "misc.h"
#include "parser.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

extern struct lines * output_lines;

void gen_asm(const char * str) {
	int size = strlen(str);
	char * new_str = malloc(size+1);
	strncpy(new_str, str+1, size);
	new_str[size-2] = 0;
	lines_append(output_lines, new_str);
	free(new_str);
}

void gen_function_begin(Symbol * args) {
	char * label = function_label(args);
	if (label != NULL) {
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_set_defined_code(Symbol * symbol) {
	if(symbol->attr->defined) {
		switch(symbol->attr->return_type) {
			case INT: snprintf(symbol->attr->code, sizeof(symbol->attr->code), "%d", symbol->attr->value.ival); break;
			case CHAR: snprintf(symbol->attr->code, sizeof(symbol->attr->code), "'%c'", symbol->attr->value.cval); break;
			case FLOAT: snprintf(symbol->attr->code, sizeof(symbol->attr->code), "%f", symbol->attr->value.fval); break;
			default: fprintf(stderr, "dont know how to set this type\n"); break;
		}
	} else {
		// snprintf(symbol->attr->code, sizeof(symbol->attr->code), "%s", symbol->key);
	}
}

void gen_function_end(Symbol * args, Symbol * expr) {
	//if (expr != NULL && expr->attr->defined)  {
	//	
	//}

	char msg[40] = "\treturn";
	if (args->attr->function_returns) {
		switch(args->attr->return_type) {
			case INT: strncat(strncat(msg, " ", sizeof(msg)-1), expr->attr->code, sizeof(msg)-1); break;
			case CHAR: strncat(strncat(msg, " ", sizeof(msg)-1), expr->attr->code, sizeof(msg)-1); break;
			case FLOAT: strncat(strncat(msg, " ", sizeof(msg)-1), expr->attr->code, sizeof(msg)-1); break;
			case VOID: break; 
			default: fprintf(stderr, "cant return this type\n"); break;
		}
	} else {
		switch(args->attr->return_type) {
			case INT: strncat(msg, " 0", 23); break;
			case CHAR: strncat(msg, " '\\0'", 23); break;
			case FLOAT: strncat(msg, " 0.0", 23); break;
			case VOID: break; 
			default: fprintf(stderr, "cant return this type\n"); break;
		}
	}

	lines_append(output_lines, msg);
}


void gen_unary(const char * instruction, Symbol * tgt, Symbol * src) {
	int size = strlen(instruction) + strlen(tgt->attr->code) + strlen(src->attr->code) + 8;
	char * line = malloc(size);
	snprintf(line, size, "\t%s %s, %s", instruction, tgt->attr->code, src->attr->code);
	lines_append(output_lines, line);
	free(line);
}

void gen_binary(const char * instruction, Symbol * tgt, Symbol * src1, Symbol * src2) {
	gen_set_defined_code(src1);
	gen_set_defined_code(src2);
	int size =
		strlen(instruction)
		+ strlen(tgt->attr->code)
		+ strlen(src1->attr->code)
		+ strlen(src2->attr->code) + 8;
	char * line = malloc(size);
	snprintf(line, size, "\t%s %s, %s, %s", instruction, tgt->attr->code, src1->attr->code, src2->attr->code);
	lines_append(output_lines, line);
	free(line);
}

void gen_implicit_cast(Symbol * op1, Symbol * op2) {
	int type1 = op1->attr->return_type;
	int type2 = op2->attr->return_type;
	int size = 12 + strlen(op1->attr->code) + strlen(op2->attr->code);
	char * line = malloc(size);
	bool cast = false;
	switch(type1) {
		case INT: switch(type2) {
			case INT: cast = false; break;
			case CHAR: snprintf(line, size, "\tchtoint %s, %s", op2->attr->code, op2->attr->code); cast = true; break;
			case FLOAT: snprintf(line, size, "\tinttofl %s, %s", op1->attr->code, op1->attr->code); cast = true; break;
			default: cast = false; break;
		} break;
		case CHAR: switch(type2) {
			case INT: snprintf(line, size, "\tchtoint %s, %s", op1->attr->code, op1->attr->code); cast = true; break;
			case CHAR: cast = false; break;
			case FLOAT: snprintf(line, size, "\tchtofl %s, %s", op1->attr->code, op1->attr->code); cast = true; break;
			default: cast = false; break;
		} break;
		case FLOAT: switch(type2) {
			case INT: snprintf(line, size, "\tinttofl %s, %s", op2->attr->code, op2->attr->code); cast = true; break;
			case CHAR: snprintf(line, size, "\tchtofl %s, %s", op2->attr->code, op2->attr->code); cast = true; break;
			case FLOAT: cast = false; break;
			default: cast = false; break;
		} break;
		default: cast = false; break;
	}
	if (cast) { lines_append(output_lines, line); }
	free(line);
}

