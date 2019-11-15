#define ERROR_MSG_BUFF 256

void redefinition_error(const char * name) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of '%s'", name);
	yyerror(msg);
	yynerrs++;
}

void redefinition_error_fun(const char * name, const char * pars) {
	char msg[ERROR_MSG_BUFF];
	snprintf(msg, ERROR_MSG_BUFF, "semantic error: redefinition of '%s' with parameters '%s'", name, pars);
	yyerror(msg);
	yynerrs++;
}

Table * begin(const char * name) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }

	Symbol * new_context;
	// if there is a name, search for it in the current context
	if (name != NULL) {
		new_context = table_find(context_stack->top, name);
		
		// if it exists, error
		if (new_context != NULL) {
			redefinition_error(name);
			return NULL;
		}
	}

	// if there is not a name, or it does not exist, create a new context
	new_context = table_insert(context_stack->top, name);

	if (new_context == NULL) {
		// if it was not inserted, error
		fprintf(stderr, "unable to insert context\n");
		return NULL;
	} else {
		// otherwise push it into the stack
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
		return new_context;
	}
}

char * build_key(struct arg_list * args) {
	//float[]
	char * key;
	if(args == NULL) {
		key = malloc(5);
		strcpy(key, "void");
	} else {
		int N = 9 * args->size + 1;
		int n = 0;
		key = malloc(N);
		char * pos = key;

		struct arg * arg = args->first;
		while(arg != NULL) {
			switch(arg->data_type) {
				case FLOAT: n = snprintf(pos, N, "float")             ; pos += n; N -= n; break;
				case CHAR : n = snprintf(pos, N, "char" )             ; pos += n; N -= n; break;
				case INT  : n = snprintf(pos, N, "int"  )             ; pos += n; N -= n; break;
				default   : n = snprintf(pos, N, "%d", arg->data_type); pos += n; N -= n; break;
			}
			switch(arg->decl_type) {
				case VARIABLE: n = snprintf(pos, N, ","  )                ; pos += n; N -= n; break;
				case ARRAY   : n = snprintf(pos, N, "[],")                ; pos += n; N -= n; break;
				default      : n = snprintf(pos, N, "%d,", arg->decl_type); pos += n; N -= n; break;
			}
			arg = arg->next;
		}
		*(pos-1) = 0;
	}
	return key;
}

void add_symbol_args(struct arg_list * args) {
	if (args != NULL) {
		struct arg * arg = args->first;
		while(arg != NULL) {
			switch(arg->decl_type) {
				case ARRAY   : add_symbol_arr(arg->data_type, arg->name); break;
				case VARIABLE: add_symbol_var(arg->data_type, arg->name); break;
				default      : break;
			}
			arg = arg->next;
		}
	}
}

Table * begin_fun(int type, const char * name, struct arg_list * args) {
	if (context_stack->top == NULL) { fprintf(stderr, "begin: stack is empty\n"); return NULL; }
	if (name == NULL) { fprintf(stderr, "function name is null\n"); return NULL; }

	char * key = build_key(args);
	Symbol * new_context = table_find(context_stack->top, name);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, name);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
	}
	new_context->root = context_stack->top;
	ts_push(context_stack, new_context);

	new_context = table_find(context_stack->top, key);
	if (new_context == NULL) {
		new_context = table_insert(context_stack->top, key);
		new_context->attr->symbol_type = FUNCTION;
		new_context->attr->return_type = type;
		new_context->attr->arg_list = args;
		new_context->root = context_stack->top;
		ts_push(context_stack, new_context);
	} else {
		redefinition_error_fun(name, key);
	}
	free(key);

	add_symbol_args(args);

	return new_context;
}

void assign_context(Node * node) {
	if (context_stack->top == NULL) {
		fprintf(stderr, "assign context: stack is empty\n");
	} else {
		node->context = context_stack->top;
	}
}

void assign_body(Node * node) {
	if (context_stack->top == NULL) {
		fprintf(stderr, "assign body: stack is empty\n");
	} else {
		context_stack->top->attr->statement_tree = node;
	}
}

Table * finish(void) {
	if (context_stack->size < 2) { fprintf(stderr, "stack too short\n"); return NULL; }
	Symbol * new_context = ts_pull(context_stack);
	return  new_context;
}

Symbol * add_symbol_var(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }
	
	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = VARIABLE;
		symbol->attr->return_type = type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * add_symbol_arr(int type, const char * key) {
	switch (type) { case VOID: case INT: case CHAR: case FLOAT: break; default: fprintf(stderr, "add arr without type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add arr with null key\n"); return NULL; }

	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = ARRAY;
		symbol->attr->return_type = type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * add_symbol(int symbol_type, int data_type, const char * key) {
	switch (data_type) { case VOID: case INT: case CHAR: case FLOAT: case STRING: break; default: fprintf(stderr, "undefined type\n"); return NULL; }
	if(key  == NULL) { fprintf(stderr, "add symbol with null key\n"); return NULL; }

	Symbol * symbol = table_find(context_stack->top, key);
	if (symbol == NULL) {
		symbol = table_insert(context_stack->top, key);
		symbol->attr->symbol_type = symbol_type;
		symbol->attr->return_type = data_type;
		return symbol;
	} else {
		redefinition_error(key);
		return NULL;
	}
}

Symbol * retrieve(Node * node, const char * key) {
	Symbol * s = table_find_back(node->context, key);
	if (s == NULL) {
		char msg[ERROR_MSG_BUFF];
		snprintf(msg, ERROR_MSG_BUFF, "semantic error: undeclared symbol '%s'", key);
		yyerror(msg);
		yynerrs++;

		//printf("%p\n", (void*)node->context);
		table_printf(node->context, 0);
		getchar();
		return NULL;
	} else {
		node->symbol = s;
		return s;
	}
}

char * str_ptr(const char * prefix, void* address, const char * suffix) {
	unsigned long size = 24;
	if(prefix != NULL) { size += strlen(prefix); }
	if(suffix != NULL) { size += strlen(suffix); }
	char * str = calloc(size, sizeof(char));

	if (prefix == NULL && suffix == NULL) {
		snprintf(str, size, "%p", address);
	} else if (prefix != NULL && suffix == NULL) {
		snprintf(str, size, "%s:%p", prefix, address);
	} else if (prefix == NULL && suffix != NULL) {
		snprintf(str, size, "%p:%s", address, suffix);
	} else {
		snprintf(str, size, "%s:%p:%s", prefix, address, suffix);
	}
	return str;
}

// Symbol * evaluate(Node * node) {
// 	if (node == NULL) {
// 		return NULL;
// 	}
// // %token OP_INC "++"
// // %token OP_DEC "--"
// // %token OP_NOT "!"
// // %token OP_MUL "*"
// // %token OP_DIV "/"
// // %token OP_MOD "%"
// // %token OP_ADD "+"
// // %token OP_NEG
// // %token OP_SUB "-"
// // %token OP_LT "<" 
// // %token OP_GT ">" 
// // %token OP_LE "<="
// // %token OP_GE ">="
// // %token OP_EQ "=="
// // %token OP_NE "!="
// // %token OP_OR "||"
// // %token OP_AND "&&"
// // %token OP_ASSIGN "="
// 	switch(node->type) {
// 		case OP_INC   :  /* "++" */ break;
// 		case OP_DEC   :  /* "--" */ break;
// 		case OP_NOT   :  /* "!"  */ break;
// 		case OP_MUL   :  /* "*"  */ break;
// 		case OP_DIV   :  /* "/"  */ break;
// 		case OP_MOD   :  /* "%"  */ break;
// 		case OP_ADD   :  /* "+"  */ break;
// 		case OP_NEG   :  /* "-"  */ break;
// 		case OP_SUB   :  /* "-"  */ break;
// 		case OP_LT    :  /* "<"  */ break;
// 		case OP_GT    :  /* ">"  */ break;
// 		case OP_LE    :  /* "<=" */ break;
// 		case OP_GE    :  /* ">=" */ break;
// 		case OP_EQ    :  /* "==" */ break;
// 		case OP_NE    :  /* "!=" */ break;
// 		case OP_OR    :  /* "||" */ break;
// 		case OP_AND   :  /* "&&" */ break;
// 		case OP_ASSIGN:  /* "="  */ break;
// 		default: break;
// 	}
// 	//node->nleaves
// }

int resolve_types(int type1, int type2) {
	if (type1 == 0) { return type2; }
	if (type2 == 0) { return type1; }
	if (type1 == type2) { return type1; }

	switch(type1) {
		case STRING: switch(type2) {
			case STRING: return STRING;
			case FLOAT:  return -1;
			case CHAR:   return -1;
			case INT:    return -1;
			case VOID:   return -1;
			default:     return -1;
		}
		case FLOAT:  switch(type2) {
			case STRING: return -1;
			case FLOAT:  return FLOAT;
			case CHAR:   return FLOAT;
			case INT:    return FLOAT;
			case VOID:   return -1;
			default:     return -1;
		}
		case CHAR:   switch(type2) {
			case STRING: return -1;
			case FLOAT:  return FLOAT;
			case CHAR:   return CHAR;
			case INT:    return INT;
			case VOID:   return -1;
			default:     return -1;
		}
		case INT:    switch(type2) {
			case STRING: return -1;
			case FLOAT:  return FLOAT;
			case CHAR:   return INT;
			case INT:    return INT;
			case VOID:   return -1;
			default:     return -1;
		}
		case VOID:    switch(type2) {
			case STRING: return -1;
			case FLOAT:  return -1;
			case CHAR:   return -1;
			case INT:    return -1;
			case VOID:   return VOID;
			default:     return -1;
		}
		default: return -1;
	}
}

int typecheck(Node * node) {
	if (node == NULL) { return 0; }

	//if (node->symbol != NULL) {
	//	if (node->type == CONSTANT) {
	//		return node->symbol->attr->return_type;
	//	}
	//}

	if (node->nleaves == 0) {
		if (node->symbol == NULL) {
			fprintf(stderr, "0 leaves no symbol\n");
			return -1;
		}
	} else if (node->nleaves == 1) {
		return typecheck(node->leaf[0]);
	} else /* if (node->nleaves > 1) */ {
		int ntype = typecheck(node->leaf[0]);
		for (int i = 1; i < node->nleaves; ++i) {
			ntype = resolve_types(ntype, typecheck(node->leaf[i]));
		}
		return ntype;
	}
}
