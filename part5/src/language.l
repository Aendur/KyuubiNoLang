%option nounput
%option noinput
%option noyywrap
%option never-interactive
%option outfile="src/scanner.c"
%option header-file="src/scanner.h"

D [0-9]
L [a-zA-Z_]
H [a-fA-F0-9]

%x COMMENT_BLOCK
%x COMMENT_LINE

%{
#include "parser.h"
extern int yynerrs;
extern int nline;
extern int ncol0;
extern int ncol1;

static void update_position(void);
static int  identifier(void);
static int  character_const(void);
static void copy_yy_string(void);
static void error_token(const char * name);
static const int ERROR_MSG_BUFFER = 256;
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
"if"		{ update_position(); int t = IF    ; return t; }
"else"		{ update_position(); int t = ELSE  ; return t; }
"do"		{ update_position(); int t = DO    ; return t; }
"while"		{ update_position(); int t = WHILE ; return t; }
"return"	{ update_position(); int t = RETURN; return t; }

			/* data types */
"void"		{ update_position(); int t = VOID ; yylval.ival = t; return t; }
"char"		{ update_position(); int t = CHAR ; yylval.ival = t; return t; }
"int"		{ update_position(); int t = INT  ; yylval.ival = t; return t; }
"float"		{ update_position(); int t = FLOAT; yylval.ival = t; return t; }

			/* Arithmetical operators */
"+"			{ update_position(); int t = '+'   ; return t; }
"-"			{ update_position(); int t = '-'   ; return t; }
"*"			{ update_position(); int t = '*'   ; return t; }
"/"			{ update_position(); int t = '/'   ; return t; }
"%"			{ update_position(); int t = '%'   ; return t; }
"++"		{ update_position(); int t = OP_INC; return t; }
"--"		{ update_position(); int t = OP_DEC; return t; }

			/* Comparison operators */
"<"			{ update_position(); int t = '<'  ; return t; }
"<="		{ update_position(); int t = OP_LE; return t; }
"=="		{ update_position(); int t = OP_EQ; return t; }
">="		{ update_position(); int t = OP_GE; return t; }
">"			{ update_position(); int t = '>'  ; return t; }
"!="		{ update_position(); int t = OP_NE; return t; }

			/* Logical operators */
"!"			{ update_position(); int t = '!'   ; return t;}
"&&"		{ update_position(); int t = OP_AND; return t;}
"||"		{ update_position(); int t = OP_OR ; return t;}

			/* Other symbols */
"{"			{ update_position(); return '{';}
"}"			{ update_position(); return '}';}
"["			{ update_position(); return '[';}
"]"			{ update_position(); return ']';}
"("			{ update_position(); return '(';}
")"			{ update_position(); return ')';}
";"			{ update_position(); return ';';}
","			{ update_position(); return ',';}
"="			{ update_position(); return '=';}

					/* Numerical constants */
[\-\+]?0[xX]{H}+	{ update_position(); int t = CONSTANT_HEX;   copy_yy_string(); return t; }
[\-\+]?{D}+			{ update_position(); int t = CONSTANT_INT;   copy_yy_string(); return t; }
[\-\+]?{D}+"."{D}* 	{ update_position(); int t = CONSTANT_FLOAT; copy_yy_string(); return t; }

					/* Characters and string literals */
'(\\.|[^\\'])+'		{ update_position(); return character_const(); }
\"(\\.|[^\\"])*\"	{
						update_position();
						int t = STRING_LITERAL;
						copy_yy_string();
						return t;
					}

				/* Identifiers */
{L}({L}|{D})*	{ update_position(); return identifier(); }

				/* whitespace */
[ \n\r\t] 		{ update_position(); }

				/* other symbols not part of the language */
.				{
					update_position();
					error_token(yytext);
					return UNRECOGNIZED_TOKEN;
				}

%%
#define TABSIZE 4

// Updates the line and column counters
static void update_position(void) {
	ncol0 = ncol1;
	for(int i = 0; i < yyleng; ++i) {
		if (yytext[i] == '\n') {
			++nline;
			ncol0 = 1;
			ncol1 = 1;
		} else if (yytext[i] == '\t') {
			ncol1 += TABSIZE;
		} else {
			++ncol1;
		}
	}
}

// Handles identifiers
static int identifier(void) {
	if (yyleng > 32) {
		// ++yynerrs; // commented, just a warning
		yyerror("warning (lexical), identifier exceeds 32 characters.");
	}

	int t = IDENTIFIER; 
	copy_yy_string();
	//yylval.node = nl_push(node_list, node_init(t, yytext, NULL));
	return t;
}

void copy_yy_string(void) {
	yylval.sval = malloc(yyleng + 1);
	strcpy((char*) yylval.sval, yytext);
}

// handles character constants
static int character_const(void) {
	if (yytext[1] != '\\' && yyleng >= 4) {
		++yynerrs;
		yyerror("lexical error, invalid character constant.");
		yylval.sval = NULL;
		return INVALID_CHAR_CONST;
	} else {
		int t = CONSTANT_CHAR;
		copy_yy_string();
		return t;
	}
}

static void error_token(const char * name) {
	char msg[ERROR_MSG_BUFFER];
	snprintf(msg, ERROR_MSG_BUFFER, "lexical error, unrecognized token: '%s'", name);
	++yynerrs;
	yyerror(msg);
}
