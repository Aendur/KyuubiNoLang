default: flex bison rel

flex:
	flex language.l

bison:
	bison -Wall language.y

dbg:
	gcc -lfl -std=c11 -m64 -g -Wall -Wextra -Wpedantic \
	src/main.c     \
	src/node.c     \
	src/table.c    \
	src/parser.c   \
	src/scanner.c  \

rel:
	gcc -lfl -std=c11 -m64 -O3 -Wall -Wextra -Wpedantic \
	src/main.c     \
	src/node.c     \
	src/table.c    \
	src/parser.c   \
	src/scanner.c  \

test-node:
	gcc -std=c11 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_NODE \
	src/node.c

test-hash:
	gcc -std=c11 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_HASH \
	src/table.c

