#include "generator.h"
#include "lines.h"
#include "misc.h"
#include "parser.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

extern struct lines * output_lines;
extern struct lines * output_table;

void gen_asm(const char * str) {
	int size = strlen(str);
	char * new_str = malloc(size+1);
	strncpy(new_str, str+1, size);
	new_str[size-2] = 0;
	lines_append(output_lines, new_str);
	free(new_str);
}

void gen_context_begin(Symbol * context) {
	int size = strlen(context->key) + 2;
	char * label = malloc(size);
	if (label != NULL) {
		snprintf(label, size, "%s:", context->key);
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_context_end(Symbol * context) {
	int size = strlen(context->key) + 6;
	char * label = malloc(size);
	if (label != NULL) {
		snprintf(label, size, "%s_end:", context->key);
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_function_begin(Symbol * args) {
	char * label = function_label(args);
	if (label != NULL) {
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_function_end(Symbol * args, Symbol * expr) {
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

void gen_set_defined_code(Symbol * symbol) {
	if(symbol->attr->defined && symbol->attr->symbol_type != ARRAY) {
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

void gen_nullary(const char * instruction, Symbol * src) {
	gen_set_defined_code(src);
	int size = strlen(instruction) + strlen(src->attr->code) + 8;
	char * line = malloc(size);
	snprintf(line, size, "\t%s %s", instruction, src->attr->code);
	lines_append(output_lines, line);
	free(line);	
}

void gen_unary(const char * instruction, Symbol * tgt, Symbol * src) {
	gen_set_defined_code(src);
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

void gen_inc(const char * instruction, Symbol * tgt) {
	int size = strlen(instruction) + 2 * strlen(tgt->attr->code) + 24;
	char * line = malloc(size);
	if (tgt->attr->return_type == FLOAT)
		snprintf(line, size, "\t%s %s, %s, %f", instruction, tgt->attr->code, tgt->attr->code, 1.0f);
	else
		snprintf(line, size, "\t%s %s, %s, %d", instruction, tgt->attr->code, tgt->attr->code, 1);
	lines_append(output_lines, line);
	free(line);
}


void gen_cast(int new_type, Symbol * tgt, Symbol * src) {
	int src_type = src->attr->return_type;
	int size = 20 + strlen(tgt->attr->code) + strlen(src->attr->code);
	char * line = malloc(size);
	bool cast = false;
	switch(new_type) {
		case INT: switch(src_type) {
			case INT: cast = false; break;
			case CHAR: snprintf(line, size, "\tchtoint %s, %s", tgt->attr->code, src->attr->code); cast = true; break;
			case FLOAT: snprintf(line, size, "\tfltoint %s, %s", tgt->attr->code, src->attr->code); cast = true; break;
			default: cast = false; break;
		} break;
		case CHAR: switch(src_type) {
			case INT: snprintf(line, size, "\tinttoch %s, %s", tgt->attr->code, src->attr->code); cast = true; break;
			case CHAR: cast = false; break;
			case FLOAT: snprintf(line, size, "\tfltoch %s, %s", tgt->attr->code, src->attr->code); cast = true; break;
			default: cast = false; break;
		} break;
		case FLOAT: switch(src_type) {
			case INT: snprintf(line, size, "\tinttofl %s, %s", tgt->attr->code, src->attr->code); cast = true; break;
			case CHAR: snprintf(line, size, "\tchtofl %s, %s", tgt->attr->code, src->attr->code); cast = true; break;
			case FLOAT: cast = false; break;
			default: cast = false; break;
		} break;
		default: cast = false; break;
	}
	if (cast) { lines_append(output_lines, line); }
	free(line);
}

void gen_call(Symbol * func) {
	int size = strlen(func->key) + strlen(func->root->key) + 16;
	char * line = malloc(size);
	int n_args = func->attr->n_args;
	assert((n_args == 0 && func->key[0] == 'v') || (n_args == (int) strlen(func->key)));
	if (line != NULL) {
		snprintf(line, size, "\tcall %s_%s, %d", func->root->key, func->key, n_args);
		lines_append(output_lines, line);
		free(line);
	}
}

void gen_do(Symbol * ctx, Symbol * expr) {
	int size = strlen(ctx->key) + strlen(expr->attr->code) + 12;
	char * instruction = malloc(size);
	if (instruction != NULL) {
		snprintf(instruction, size, "\tbrnz %s, %s", ctx->key, expr->attr->code);
		lines_append(output_lines, instruction);
		free(instruction);
	}
}

void gen_label(const char *prefix, const char *text, const char *suffix) {
	int size = 1;
	size += prefix == NULL ? 0 : strlen(prefix);
	size += text   == NULL ? 0 : strlen(text)  ;
	size += suffix == NULL ? 0 : strlen(suffix);
	char * label = calloc(size+1, sizeof(char));
	if (label != NULL) {
		if(prefix != NULL) strncat(label, prefix, size);
		if(text   != NULL) strncat(label, text  , size);
		if(suffix != NULL) strncat(label, suffix, size);
		strncat(label, ":", size);
		lines_append(output_lines, label);
		free(label);
	}
}

void gen_jump(const char * instr, const char * label, Symbol * expr) {
	int size = strlen(instr) + strlen(label) + 16;
	size += expr == NULL ? 0 : strlen(expr->attr->code);

	char * instruction = malloc(size);
	if (instruction != NULL) {
		if (expr == NULL) {
			snprintf(instruction, size, "\t%s %s"    , instr, label);
		} else {
			snprintf(instruction, size, "\t%s %s, %s", instr, label, expr->attr->code);
		}
		lines_append(output_lines, instruction);
		free(instruction);
	}
}

void gen_global_var(Symbol * var) {
	int size = sizeof(var->attr->code) + 8;
	char * line = malloc(size);
	switch(var->attr->return_type) {
		case INT: snprintf(line, size, "int %s", var->attr->code); break;
		case CHAR: snprintf(line, size, "char %s", var->attr->code); break;
		case FLOAT: snprintf(line, size, "float %s", var->attr->code); break;
		default: break;
	}
	lines_append(output_table, line);
	free(line);
}

void gen_global_str(Symbol * var) {
	int size = sizeof(var->attr->code) + sizeof(var->attr->value.sval) + 16;
	char * line = malloc(size);
	snprintf(line, size, "char %s[] = %s", var->key, var->attr->value.sval);
	if(var->attr->defined) {
		free((char*) var->attr->value.sval);
		var->attr->value.sval = NULL;
	}
	lines_append(output_table, line);
	free(line);
}


