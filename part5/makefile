default: flex bison rel

flex:
	flex language.l

bison:
	bison -Wall language.y

dbg:
	gcc -std=c18 -m64 -g -Wall -Wextra -DDEBUG \
	src/main.c        \
	src/node.c        \
	src/node-list.c   \
	src/table.c       \
	src/table-stack.c \
	src/arg-list.c    \
	src/parser.c      \
	src/scanner.c     \
	src/actions.c     \

rel:
	gcc -std=c18 -m64 -O3 \
	src/main.c        \
	src/node.c        \
	src/node-list.c   \
	src/table.c       \
	src/table-stack.c \
	src/arg-list.c    \
	src/parser.c      \
	src/scanner.c     \
	src/actions.c     \


test-node:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_NODE \
	src/node.c src/node-list.c 

test-node-list:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_NODE_LIST \
	src/node.c src/node-list.c 

test-hash:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_HASH \
	src/table.c

test-tstack:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_TSTACK \
	src/table.c src/table-stack.c

test-al:
	gcc -std=c18 -m64 -Wall -Wextra -Wpedantic -g -DUNIT_TEST_ALIST \
	src/arg-list.c


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

