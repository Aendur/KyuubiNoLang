#ifndef TOKEN_H
#define TOKEN_H

enum tokenclass {
	/* -4 */ ERROR_INVALID_CHAR_CONST = -4,
	/* -3 */ ERROR_INVALID_IDENTIFIER = -3,
	/* -2 */ ERROR_UNRECOGNIZED_TOKEN = -2,
	/* -1 */ ERROR_SCANNER = -1,
	/*  1 */ KW_IF = 1,
	/*  2 */ KW_ELSE,
	/*  3 */ KW_DO,
	/*  4 */ KW_WHILE,
	/*  5 */ KW_RETURN,
	/*  6 */ TYPE_VOID,
	/*  7 */ TYPE_BOOL,
	/*  8 */ TYPE_CHAR,
	/*  9 */ TYPE_INT,
	/* 10 */ TYPE_FLOAT,
	/* 11 */ OP_ADD,
	/* 12 */ OP_SUB,
	/* 13 */ OP_MUL,
	/* 14 */ OP_DIV,
	/* 15 */ OP_REM,
	/* 16 */ OP_INC,
	/* 17 */ OP_DEC,
	/* 18 */ OP_LT,
	/* 19 */ OP_LE,
	/* 20 */ OP_EQ,
	/* 21 */ OP_GE,
	/* 22 */ OP_GT,
	/* 23 */ OP_NE,
	/* 24 */ OP_NOT,
	/* 25 */ OP_AND,
	/* 26 */ OP_OR, 
	/* 27 */ POI_LBRACE,
	/* 28 */ POI_RBRACE,
	/* 29 */ POI_LBRACKET,
	/* 30 */ POI_RBRACKET,
	/* 31 */ POI_LPAR,
	/* 32 */ POI_RPAR,
	/* 33 */ POI_SEMICOLON,
	/* 34 */ POI_COMMA,
	/* 35 */ POI_EQ,
	/* 36 */ IDENTIFIER,
	/* 37 */ CONSTANT,
	/* 38 */ STRING_LITERAL
};

struct token {
	int line;
	int column;
	enum tokenclass tc;
	char * text;
	struct token * next;
};

struct tokenlist {
	struct token * first;
	struct token * last;
};

const char* tok_to_str(enum tokenclass);
struct token * new_token(int, int, enum tokenclass, const char*);
void add_token(struct tokenlist*, struct token*);
void clear_tokens (struct tokenlist*);


#endif