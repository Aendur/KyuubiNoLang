 //%option nounput
 //%option noinput
 //%option noyywrap
%option never-interactive
%option outfile="src/scanner.c"
%option header-file="src/scanner.h"
 //%option bison-bridge bison-locations

D [0-9]
L [a-zA-Z_]
H [a-fA-F0-9]

%x COMMENT_BLOCK
%x COMMENT_LINE

%{
#include "parser.h"
extern int yynerrs;
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
"if"		{ update_position(); return IF    ; }
"else"		{ update_position(); return ELSE  ; }
"do"		{ update_position(); return DO    ; }
"while"		{ update_position(); return WHILE ; }
"return"	{ update_position(); return RETURN; }

			/* data types */
"void"		{ update_position(); return VOID; }
"char"		{ update_position(); return CHAR; }
"int"		{ update_position(); return INT; }
"float"		{ update_position(); return FLOAT; }

			/* Arithmetical operators */
"+"			{ update_position(); return '+'; }
"-"			{ update_position(); return '-'; }
"*"			{ update_position(); return '*'; }
"/"			{ update_position(); return '/'; }
"%"			{ update_position(); return '%'; }
"++"		{ update_position(); return OP_INC; }
"--"		{ update_position(); return OP_DEC; }

			/* Comparison operators */
"<"			{ update_position(); return '<'; }
"<="		{ update_position(); return OP_LE; }
"=="		{ update_position(); return OP_EQ; }
">="		{ update_position(); return OP_GE; }
">"			{ update_position(); return '>'; }
"!="		{ update_position(); return OP_NE; }

			/* Logical operators */
"&&"		{ update_position(); return OP_AND; }
"||"		{ update_position(); return OP_OR ; }

			/* Other symbols */
"{"			{ update_position(); return '{'; }
"}"			{ update_position(); return '}'; }
"["			{ update_position(); return '['; }
"]"			{ update_position(); return ']'; }
"("			{ update_position(); return '('; }
")"			{ update_position(); return ')'; }
";"			{ update_position(); return ';'; }
","			{ update_position(); return ','; }
"="			{ update_position(); return '='; }

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
[ \n\r\t] 		{ update_position(); }

				/* other symbols not part of the language */
.				{ update_position(); return UNRECOGNIZED_TOKEN; }

%%
// // Returns 1 when yylex reaches EOF
// int yywrap() { return 1; }

#define TABSIZE 4

// Updates the line and column counters
static void update_position(void) {
	yylloc.first_column = yylloc.last_column;
	for(int i = 0; i < yyleng; ++i) {
		if (yytext[i] == '\n') {
			++yylloc.last_line;
			yylloc.first_column = 1;
			yylloc.last_column = 1;
		} else if (yytext[i] == '\t') {
			yylloc.last_column += TABSIZE;
		} else {
			++yylloc.last_column;
		}
	}
}

// Handles identifiers
static int identifier(void) {
	if (yyleng > 32) {
		//yyerror("Identifier exceeds 32 characters.");
		return INVALID_IDENTIFIER;
	} else {
		return IDENTIFIER;
	}
}

// handles character constants
static int character_const(void) {
	if (yytext[1] != '\\' && yyleng >= 4) {
		return INVALID_CHAR_CONST;
	} else {
		return CONSTANT;
	}
}
