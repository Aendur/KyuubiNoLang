gen: flex bison

flex:
	flex language.l

bison:
	bison -Wall language.y

dbg: flex bison
	gcc -lfl -std=c11 -m64 -g -Wall -Wextra -Wpedantic \
	src/main.c     \
	src/parser.c   \
	src/scanner.c  \
	

rel:
	gcc -lfl -std=c11 -m64 -O3 -Wall -Wextra -Wpedantic \
	src/main.c     \
	src/parser.c   \
	src/scanner.c  \
	


