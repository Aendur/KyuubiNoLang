all:
	flex asm.l
	bison -Wall asm.y
	gcc src/asm.tab.c src/lex.yy.c -oassembler -lfl -std=c11 -m64 -O3 -Wall -Wextra -Wpedantic


node-test:
	gcc src/node.c -Wall -Wextra -Wpedantic -std=c11 -m64 -DUNITTEST_NODE

#gcc src/lex.yy.c src/token.c -lfl -std=c11 -m64 -O3 -Wall -Wextra -Wpedantic

