%option nounput
%option noinput
%option never-interactive
%option outfile="src/lex.yy.c"
%option header-file="src/lex.yy.h"

D [0-9]
L [a-zA-Z_]
H [a-fA-F0-9]

%x COMMENT_BLOCK
%x COMMENT_LINE

%{
#include "token.h"

extern int  nline;
extern int  ncolumn;

static void update_position(void);
static int  identifier(void);
static int  character_const(void);
%}

%%
					/* block comments */
"/*"				{ update_position(); BEGIN(COMMENT_BLOCK); }
<COMMENT_BLOCK>"*/"	{ update_position(); BEGIN(INITIAL); }
<COMMENT_BLOCK>\n 	{ update_position(); }
<COMMENT_BLOCK>. 	{ update_position(); }

					/* single line comments */
"//" 				{ update_position(); BEGIN(COMMENT_LINE); }
<COMMENT_LINE>\n	{ update_position(); BEGIN(INITIAL); }
<COMMENT_LINE>.		{ update_position(); }

			/* keywords */
"if"		{ update_position(); return KW_IF; }
"else"		{ update_position(); return KW_ELSE; }
"do"		{ update_position(); return KW_DO; }
"while"		{ update_position(); return KW_WHILE; }
"return"	{ update_position(); return KW_RETURN; }

			/* data types */
"void"		{ update_position(); return TYPE_VOID; }
 /*"bool"		{ update_position(); return TYPE_BOOL; }*/
"char"		{ update_position(); return TYPE_CHAR; }
"int"		{ update_position(); return TYPE_INT; }
"float"		{ update_position(); return TYPE_FLOAT; }

			/* Arithmetical operators */
"+"			{ update_position(); return OP_ADD; }
"-"			{ update_position(); return OP_SUB; }
"*"			{ update_position(); return OP_MUL; }
"/"			{ update_position(); return OP_DIV; }
"%"			{ update_position(); return OP_REM; }
"++"		{ update_position(); return OP_INC; }
"--"		{ update_position(); return OP_DEC; }

			/* Comparison operators */
"<"			{ update_position(); return OP_LT; }
"<="		{ update_position(); return OP_LE; }
"=="		{ update_position(); return OP_EQ; }
">="		{ update_position(); return OP_GE; }
">"			{ update_position(); return OP_GT; }
"!="		{ update_position(); return OP_NE; }

			/* Logical operators */
 /*"!"			{ update_position(); return OP_NOT; }*/
"&&"		{ update_position(); return OP_AND; }
"||"		{ update_position(); return OP_OR ; }

			/* Other symbols */
"{"			{ update_position(); return POI_LBRACE; }
"}"			{ update_position(); return POI_RBRACE; }
"["			{ update_position(); return POI_LBRACKET; }
"]"			{ update_position(); return POI_RBRACKET; }
"("			{ update_position(); return POI_LPAR; }
")"			{ update_position(); return POI_RPAR; }
";"			{ update_position(); return POI_SEMICOLON; }
","			{ update_position(); return POI_COMMA; }
"="			{ update_position(); return POI_EQ; }

					/* Numerical constants */
[\-\+]?0[xX]{H}+	{ update_position(); return CONSTANT; }
[\-\+]?{D}+			{ update_position(); return CONSTANT; }
[\-\+]?{D}+"."{D}* 	{ update_position(); return CONSTANT; }

					/* Characters and string literals */
'(\\.|[^\\'])+'		{ update_position(); return character_const(); }
\"(\\.|[^\\"])*\"	{ update_position(); return STRING_LITERAL; }

				/* Identifiers */
{L}({L}|{D})*	{ update_position(); return identifier(); }

				/* whitespace */
[ \t\v\n\f]		{ update_position(); }

				/* other symbols not part of the language */
.				{ update_position(); return ERROR_UNRECOGNIZED_TOKEN; }

%%
// Returns 1 when yylex reaches EOF
int yywrap() { return 1; }

// Updates the line and column counters
static void update_position(void) {
	for(int i = 0; i < yyleng; ++i) {
		if (yytext[i] == '\n') {
			++nline;
			ncolumn = 1;
		} else {
			++ncolumn;
		}
	}
}

// Handles identifiers
static int identifier(void) {
	if (yyleng > 32) {
		return ERROR_INVALID_IDENTIFIER;
	} else {
		return IDENTIFIER;
	}
}

// handles character constants
static int character_const(void) {
	if (yytext[1] != '\\' && yyleng >= 4) {
		return ERROR_INVALID_CHAR_CONST;
	} else {
		return CONSTANT;
	}
}
