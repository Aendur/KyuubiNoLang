default: flex bison program

flex:
	flex src/language.l

bison:
	bison -Wall src/language.y

program:
	gcc -okyu -std=c18 -m64 -Isrc \
	src/main.c        \
	src/node.c        \
	src/node-list.c   \
	src/table.c       \
	src/table-stack.c \
	src/arg-list.c    \
	src/parser.c      \
	src/scanner.c     \
	src/actions.c     \
	src/typechecker/base.c \
	src/typechecker/unary.c \
	src/typechecker/binary.c \
	src/misc.c \
	src/lines.c \
	src/error.c \
	src/generator.c \

test-node:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_NODE \
	src/node.c src/node-list.c 

test-node-list:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_NODE_LIST \
	src/node.c src/node-list.c 

test-hash:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_HASH \
	src/table.c src/arg-list.c

test-tstack:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_TSTACK \
	src/table.c src/table-stack.c src/arg-list.c

test-al:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_ALIST \
	src/arg-list.c

test-lines:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_LINES \
	src/lines.c


help:
	@echo "make targets:"
	@echo "    flex"
	@echo "    bison"
	@echo "    dbg"
	@echo "    rel"
	@echo "    test-node"
	@echo "    test-node-list"
	@echo "    test-hash"
	@echo "    test-tstack"
	@echo "    test-al"
	@echo "    test-lines"

