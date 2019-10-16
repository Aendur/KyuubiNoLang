 /* %option nounput */
 /* %option noinput */
 /* %option never-interactive */
%option outfile="src/lex.yy.c"
%option header-file="src/lex.yy.h"
 /* %option bison-bridge */

D [0-9]
L [a-zA-Z_]
H [a-fA-F0-9]

%{
#include "asm.tab.h"
int line = 0;
%}

%%
				/* single line comments */
\n 				{ ++line; return NEWLINE; }
";".*\n 		{ ++line; return NEWLINE; }
"add" 			{ return INSTRUCTION_A; }
"sub" 			{ return INSTRUCTION_A; }
"mul" 			{ return INSTRUCTION_A; }
"div" 			{ return INSTRUCTION_A; }
"mov" 			{ return INSTRUCTION_A; }
"jmp" 			{ return INSTRUCTION_J; }
"end" 			{ return INSTRUCTION_0; }
"r"[0-3] 		{ return REG; }
"[" 			{ return '['; }
"]" 			{ return ']'; }
"section" 		{ return SECTION; }
"data" 			{ return DATA; }
"text" 			{ return TEXT; }
"const" 		{ return DIR_CONST; }
"space" 		{ return DIR_SPACE; }
":" 			{ return ':'; }
"," 			{ return ','; }
"0x"{H}+ 		{ return IMM; }
[\+\-]?{D}+ 	{ return IMM; }
{L}({L}|{H})* 	{ return LABEL; }
[ \r\t] 		{ }
. 				{ }

%%
