part2:
	flex --header-file=lex.yy.h part2.lex
	gcc main.c scanner.c lex.yy.c -lfl -lm -Wall -Wextra -Wpedantic

ex1:
	flex ex1.lex
	gcc lex.yy.c -lfl -lm -Wall -Wextra -Wpedantic

ex3:
	flex ex3.lex
	gcc lex.yy.c -lfl -lm -Wall -Wextra -Wpedantic

ex4:
	flex ex4.lex
	gcc lex.yy.c -lfl -lm -Wall -Wextra -Wpedantic

rmcomment:
	flex --header-file=lex.yy.h --tables-file ex_rmcomment.lex
	gcc lex.yy.c -lfl -lm -Wall -Wextra -Wpedantic

