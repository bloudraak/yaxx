PREFIX=yy
YACC = ${HOME}/software/bin/bison
LEX  = flex
YFLAGS  = -dv -S yaxx-0.12-bison-2.1.c
XFLAGS =
CFLAGS  = -g ${XFLAGS} -O
LFLAGS  =
BIN = .
CC = gcc

SRC = grammar.y lexer.l main.c
OBJ = grammar.tab.o lex.yy.o main.o 

all: cookies.xml

%.xml:%.js $(BIN)/js_parse_tree
	$(BIN)/js_parse_tree < $*.js
	mv yaxx.xml $*.xml

$(BIN)/js_parse_tree : $(OBJ)
	${CC} $(CFLAGS) $(OBJ) -o js_parse_tree

%.tab.c: %.y
	${YACC} ${YFLAGS} $< 

lex.yy.c: lexer.l
	${LEX} $< 

lex.yy.o: lex.yy.c
	${CC} -c ${CFLAGS} $< -o $@

lex.yy.o: grammar.tab.h
grammar.tab.h: grammar.tab.c

clean   :
	rm -f grammar.tab.h grammar.tab.c grammar.output lex.yy.c *.o

realclean:
	${MAKE} clean
	rm -f js_parse_tree* ${PREFIX}xx.xml ${PREFIX}xx.dtd
