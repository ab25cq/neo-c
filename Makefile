# Simple Makefile for the minimal C parser built with Bison/Flex

CC ?= clang
CFLAGS ?= -O2 -g -Wall -Wextra -DYYDEBUG

all: neo-c

parser.c parser.h: neo-c.y
	@echo "[Bison] neo-c.y -> parser.c, parser.h"
	bison -d -v --defines=parser.h -o parser.c neo-c.y

lexer.c: neo-c.l parser.h
	@echo "[Flex ] neo-c.l -> lexer.c"
	flex -o lexer.c neo-c.l

neo-c: parser.o lexer.o main.o ast.o typedefs.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f parser.c parser.h parser.output lexer.c neo-c *.o

.PHONY: all clean
