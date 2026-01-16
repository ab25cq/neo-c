#########################################
# environmnet variables
#########################################
DESTDIR=/usr/local
CFLAGS_OPT=
CC=clang
INSTALL=/usr/bin/install -c
CFLAGS=-DPREFIX="\"${DESTDIR}/\""  -I/usr/local/include $(CFLAGS_OPT) -std=c11 -g -O2
LIBS= -lutil -ldl -lm -lrt

#########################################
# main
#########################################
all: neo-c-Sch

SOURCES := $(wildcard [012]*.c)
SOURCES := $(filter-out %.c.c,$(SOURCES))

neo-c.c.c: neo-c.c
	neo-c -S -D__MINUX__ neo-c.c

neo-c.c: $(SOURCES)
	@cat $^ > $@
    
#########################################
# grammar generation (Flex + Bison)
#########################################

neo-c: 01main.c.o 02transpile.c.o 03output_code.c.o 04heap.c.o 05parse.c.o 06type.c.o 07function.c.o 08call.c.o 09pre_op.c.o 10str.c.o 11number.c.o 12var.c.o 13gvar.c.o 14if.c.o 15while.c.o 16for.c.o 17do_while.c.o 18switch.c.o 19struct.c.o 20union.c.o 21enum.c.o 22typedef.c.o 23field.c.o 24method.c.o 25obj.c.o 26eq.c.o 27impl.c.o 28interface.c.o 29module.c.o 30op.c.o ccpp.o
	neo-c -o neo-c 01main.c.o 02transpile.c.o 03output_code.c.o 04heap.c.o 09pre_op.c.o 08call.c.o 07function.c.o 11number.c.o 06type.c.o 05parse.c.o 10str.c.o 12var.c.o 13gvar.c.o 14if.c.o 15while.c.o 17do_while.c.o 16for.c.o 18switch.c.o 19struct.c.o 20union.c.o 21enum.c.o 22typedef.c.o 23field.c.o 26eq.c.o 24method.c.o 25obj.c.o 27impl.c.o 28interface.c.o 29module.c.o 30op.c.o ccpp.o $(CFLAGS) 


01main.c.o: 01main.c
	neo-c -Sc -C -o 01main.c.o -c 01main.c $(CFLAGS) 

02transpile.c.o: 02transpile.c
	neo-c -Sc -C -o 02transpile.c.o -c 02transpile.c $(CFLAGS) 

03output_code.c.o: 03output_code.c
	neo-c -Sc -C -o 03output_code.c.o -c 03output_code.c $(CFLAGS) 

04heap.c.o: 04heap.c
	neo-c -Sc -C -o 04heap.c.o -c 04heap.c $(CFLAGS) 

09pre_op.c.o: 09pre_op.c
	neo-c -Sc -C  -o 09pre_op.c.o -c 09pre_op.c $(CFLAGS) 

08call.c.o: 08call.c
	neo-c -Sc -C -o 08call.c.o -c 08call.c $(CFLAGS) 

07function.c.o: 07function.c
	neo-c -Sc -C -o 07function.c.o -c 07function.c $(CFLAGS) 

11number.c.o: 11number.c
	neo-c -Sc -C -o 11number.c.o -c 11number.c $(CFLAGS) 

06type.c.o: 06type.c
	neo-c -Sc -C -o 06type.c.o -c 06type.c $(CFLAGS) 

05parse.c.o: 05parse.c
	neo-c -Sc -C -o 05parse.c.o -c 05parse.c $(CFLAGS) 

10str.c.o: 10str.c
	neo-c -Sc -C -o 10str.c.o -c 10str.c $(CFLAGS) 

12var.c.o: 12var.c
	neo-c -Sc -C -o 12var.c.o -c 12var.c $(CFLAGS) 

13gvar.c.o: 13gvar.c
	neo-c -Sc -C -o 13gvar.c.o -c 13gvar.c $(CFLAGS) 

14if.c.o: 14if.c
	neo-c -Sc -C -o 14if.c.o -c 14if.c $(CFLAGS) 

15while.c.o: 15while.c
	neo-c -Sc -C -o 15while.c.o -c 15while.c $(CFLAGS) 

17do_while.c.o: 17do_while.c
	neo-c -Sc -C -o 17do_while.c.o -c 17do_while.c $(CFLAGS) 

16for.c.o: 16for.c
	neo-c -Sc -C -o 16for.c.o -c 16for.c $(CFLAGS) 

18switch.c.o: 18switch.c
	neo-c -Sc -C -o 18switch.c.o -c 18switch.c $(CFLAGS) 

30op.c.o: 30op.c
	neo-c -Sc -C -o 30op.c.o -c 30op.c $(CFLAGS) 

19struct.c.o: 19struct.c
	neo-c -Sc -C -o 19struct.c.o -c 19struct.c $(CFLAGS) 

20union.c.o: 20union.c
	neo-c -Sc -C -o 20union.c.o -c 20union.c $(CFLAGS) 

21enum.c.o: 21enum.c
	neo-c -Sc -C -o 21enum.c.o -c 21enum.c $(CFLAGS) 

22typedef.c.o: 22typedef.c
	neo-c -Sc -C -o 22typedef.c.o -c 22typedef.c $(CFLAGS) 

23field.c.o: 23field.c
	neo-c -Sc -C -o 23field.c.o -c 23field.c $(CFLAGS) 

26eq.c.o: 26eq.c
	neo-c -Sc -C -o 26eq.c.o -c 26eq.c $(CFLAGS) 

24method.c.o: 24method.c
	neo-c -Sc -C -o 24method.c.o -c 24method.c $(CFLAGS) 

25obj.c.o: 25obj.c
	neo-c -Sc -C -o 25obj.c.o -c 25obj.c $(CFLAGS) 

27impl.c.o: 27impl.c
	neo-c -Sc -C -o 27impl.c.o -c 27impl.c $(CFLAGS) 

28interface.c.o: 28interface.c
	neo-c -Sc -C -o 28interface.c.o -c 28interface.c $(CFLAGS) 

29module.c.o: 29module.c
	neo-c -Sc -C -o 29module.c.o -c 29module.c $(CFLAGS) 

valgrind:  01main.valgrind  02transpile.valgrind  03output_code.valgrind  04heap.valgrind  09pre_op.valgrind  08call.valgrind  07function.valgrind  05number.valgrind  06type.valgrind  05parse.valgrind 10str.valgrind  12var.valgrind  13gvar.valgrind  14if.valgrind  15while.valgrind  17do_while.valgrind  16for.valgrind  18switch.valgrind  30op.valgrind  19struct.valgrind  20union.valgrind  21enum.valgrind  17typedef.valgrind  23field.valgrind  26eq.valgrind  24method.valgrind  25obj.valgrind  27impl.valgrind  28interface.valgrind  29module.valgrind

01main.valgrind: 01main.c
	valgrind neo-c -Sc -C -o 01main.c.o -c 01main.c $(CFLAGS) 2> 01main.valgrind

02transpile.valgrind: 02transpile.c
	valgrind neo-c -Sc -C -o 02transpile.c.o -c 02transpile.c $(CFLAGS) 2> 02transpile.valgrind

03output_code.valgrind: 03output_code.c
	valgrind neo-c -Sc -C -o 03output_code.c.o -c 03output_code.c $(CFLAGS) 2> 03output_code.valgrind

04heap.valgrind: 04heap.c
	valgrind neo-c -Sc -C -o 04heap.c.o -c 04heap.c $(CFLAGS) 2> 04heap.valgrind

09pre_op.valgrind: 09pre_op.c
	valgrind neo-c -Sc -C  -o 09pre_op.c.o -c 09pre_op.c $(CFLAGS) 2> 09pre_op.valgrind

08call.valgrind: 08call.c
	valgrind neo-c -Sc -C -o 08call.c.o -c 08call.c $(CFLAGS) 2> 08call.valgrind

07function.valgrind: 07function.c
	valgrind neo-c -Sc -C -o 07function.c.o -c 07function.c $(CFLAGS) 2> 07function.valgrind

05number.valgrind: 11number.c
	valgrind neo-c -Sc -C -o 11number.c.o -c 11number.c $(CFLAGS) 2> 05number.valgrind

06type.valgrind: 06type.c
	valgrind neo-c -Sc -C -o 06type.c.o -c 06type.c $(CFLAGS) 2> 06type.valgrind

05parse.valgrind: 05parse.c
	valgrind neo-c -Sc -C -o 05parse.c.o -c 05parse.c $(CFLAGS) 2> 05parse.valgrind

10str.valgrind: 10str.c
	valgrind neo-c -Sc -C -o 10str.c.o -c 10str.c $(CFLAGS) 2> 10str.valgrind

12var.valgrind: 12var.c
	valgrind neo-c -Sc -C -o 12var.c.o -c 12var.c $(CFLAGS) 2> 12var.valgrind

13gvar.valgrind: 13gvar.c
	valgrind neo-c -Sc -C -o 13gvar.c.o -c 13gvar.c $(CFLAGS) 2> 13gvar.valgrind

14if.valgrind: 14if.c
	valgrind neo-c -Sc -C -o 14if.c.o -c 14if.c $(CFLAGS) 2> 14if.valgrind

15while.valgrind: 15while.c
	valgrind neo-c -Sc -C -o 15while.c.o -c 15while.c $(CFLAGS) 2> 15while.valgrind

17do_while.valgrind: 17do_while.c
	valgrind neo-c -Sc -C -o 10do_while.c.o -c 17do_while.c $(CFLAGS) 2> 17do_while.valgrind

16for.valgrind: 16for.c
	valgrind neo-c -Sc -C -o 16for.c.o -c 16for.c $(CFLAGS) 2> 16for.valgrind

18switch.valgrind: 18switch.c
	valgrind neo-c -Sc -C -o 18switch.c.o -c 18switch.c $(CFLAGS) 2> 18switch.valgrind

30op.valgrind: 30op.c
	valgrind neo-c -Sc -C -o 30op.c.o -c 30op.c $(CFLAGS) 2> 30op.valgrind

19struct.valgrind: 19struct.c
	valgrind neo-c -Sc -C -o 19struct.c.o -c 19struct.c $(CFLAGS) 2> 19struct.valgrind

20union.valgrind: 20union.c
	valgrind neo-c -Sc -C -o 20union.c.o -c 20union.c $(CFLAGS) 2> 20union.valgrind

21enum.valgrind: 21enum.c
	valgrind neo-c -Sc -C -o 21enum.c.o -c 21enum.c $(CFLAGS) 2> 21enum.valgrind

17typedef.valgrind: 22typedef.c
	valgrind neo-c -Sc -C -o 22typedef.c.o -c 22typedef.c $(CFLAGS) 2> 17typedef.valgrind

23field.valgrind: 23field.c
	valgrind neo-c -Sc -C -o 23field.c.o -c 23field.c $(CFLAGS) 2> 23field.valgrind

26eq.valgrind: 26eq.c
	valgrind neo-c -Sc -C -o 26eq.c.o -c 26eq.c $(CFLAGS) 2> 26eq.valgrind

24method.valgrind: 24method.c
	valgrind neo-c -Sc -C -o 24method.c.o -c 24method.c $(CFLAGS) 2> 24method.valgrind

25obj.valgrind: 25obj.c
	valgrind neo-c -Sc -C -o 25obj.c.o -c 25obj.c $(CFLAGS) 2> 25obj.valgrind

27impl.valgrind: 27impl.c
	valgrind neo-c -Sc -C -o 27impl.c.o -c 27impl.c $(CFLAGS) 2> 27impl.valgrind

28interface.valgrind: 28interface.c
	valgrind neo-c -Sc -C -o 28interface.c.o -c 28interface.c $(CFLAGS) 2> 28interface.valgrind

29module.valgrind: 29module.c
	valgrind neo-c -Sc -C -o 29module.c.o -c 29module.c $(CFLAGS) 2> 29module.valgrind

neo-c-Sch: 01main.c.o.tmp 02transpile.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 09pre_op.c.o.tmp 08call.c.o.tmp 07function.c.o.tmp 11number.c.o.tmp 06type.c.o.tmp 05parse.c.o.tmp 10str.c.o.tmp 12var.c.o.tmp 13gvar.c.o.tmp 14if.c.o.tmp 15while.c.o.tmp 17do_while.c.o.tmp 16for.c.o.tmp 18switch.c.o.tmp 30op.c.o.tmp 19struct.c.o.tmp 20union.c.o.tmp 21enum.c.o.tmp 22typedef.c.o.tmp 23field.c.o.tmp 26eq.c.o.tmp 24method.c.o.tmp 25obj.c.o.tmp 27impl.c.o.tmp 28interface.c.o.tmp 29module.c.o.tmp  ccpp.o
	$(CC) -o neo-c-Sch  01main.c.o.tmp 02transpile.c.o.tmp 03output_code.c.o.tmp 04heap.c.o.tmp 08call.c.o.tmp 09pre_op.c.o.tmp 07function.c.o.tmp 11number.c.o.tmp 06type.c.o.tmp 05parse.c.o.tmp 10str.c.o.tmp 12var.c.o.tmp 13gvar.c.o.tmp 14if.c.o.tmp 15while.c.o.tmp 17do_while.c.o.tmp 16for.c.o.tmp 18switch.c.o.tmp 30op.c.o.tmp 19struct.c.o.tmp 20union.c.o.tmp 21enum.c.o.tmp 22typedef.c.o.tmp 23field.c.o.tmp 26eq.c.o.tmp 24method.c.o.tmp 25obj.c.o.tmp 27impl.c.o.tmp 28interface.c.o.tmp 29module.c.o.tmp ccpp.o $(CFLAGS) 

	cp -p neo-c-Sch neo-c

01main.c.o.tmp: 01main.c.c
	$(CC) -o 01main.c.o.tmp -c 01main.c.c $(CFLAGS) 2> /dev/null

02transpile.c.o.tmp: 02transpile.c.c
	$(CC) -o 02transpile.c.o.tmp -c 02transpile.c.c $(CFLAGS) 2> /dev/null

03output_code.c.o.tmp: 03output_code.c.c
	$(CC) -o 03output_code.c.o.tmp -c 03output_code.c.c $(CFLAGS) 2> /dev/null

04heap.c.o.tmp: 04heap.c.c
	$(CC) -o 04heap.c.o.tmp -c 04heap.c.c $(CFLAGS) 2> /dev/null

09pre_op.c.o.tmp: 09pre_op.c.c
	$(CC) -o 09pre_op.c.o.tmp -c 09pre_op.c.c $(CFLAGS) 2> /dev/null

08call.c.o.tmp: 08call.c.c
	$(CC) -o 08call.c.o.tmp -c 08call.c.c $(CFLAGS) 2> /dev/null

07function.c.o.tmp: 07function.c.c
	$(CC) -o 07function.c.o.tmp -c 07function.c.c $(CFLAGS) 2> /dev/null

11number.c.o.tmp: 11number.c.c
	$(CC) -o 11number.c.o.tmp -c 11number.c.c $(CFLAGS) 2> /dev/null

06type.c.o.tmp: 06type.c.c
	$(CC) -o 06type.c.o.tmp -c 06type.c.c $(CFLAGS) 2> /dev/null

05parse.c.o.tmp: 05parse.c.c
	$(CC) -o 05parse.c.o.tmp -c 05parse.c.c $(CFLAGS) 2> /dev/null

10str.c.o.tmp: 10str.c.c
	$(CC)  -o 10str.c.o.tmp -c 10str.c.c $(CFLAGS) 2> /dev/null

12var.c.o.tmp: 12var.c.c
	$(CC) -o 12var.c.o.tmp -c 12var.c.c $(CFLAGS) 2> /dev/null

13gvar.c.o.tmp: 13gvar.c.c
	$(CC) -o 13gvar.c.o.tmp -c 13gvar.c.c $(CFLAGS) 2> /dev/null

14if.c.o.tmp: 14if.c.c
	$(CC) -o 14if.c.o.tmp -c 14if.c.c $(CFLAGS) 2> /dev/null

15while.c.o.tmp: 15while.c.c
	$(CC) -o 15while.c.o.tmp -c 15while.c.c $(CFLAGS) 2> /dev/null

17do_while.c.o.tmp: 17do_while.c.c
	$(CC) -o 17do_while.c.o.tmp -c 17do_while.c.c $(CFLAGS) 2> /dev/null

16for.c.o.tmp: 16for.c.c
	$(CC) -o 16for.c.o.tmp -c 16for.c.c $(CFLAGS) 2> /dev/null

18switch.c.o.tmp: 18switch.c.c
	$(CC) -o 18switch.c.o.tmp -c 18switch.c.c $(CFLAGS) 2> /dev/null

30op.c.o.tmp: 30op.c.c
	$(CC) -o 30op.c.o.tmp -c 30op.c.c $(CFLAGS) 2> /dev/null

19struct.c.o.tmp: 19struct.c.c
	$(CC) -o 19struct.c.o.tmp -c 19struct.c.c $(CFLAGS) 2> /dev/null

20union.c.o.tmp: 20union.c.c
	$(CC) -o 20union.c.o.tmp -c 20union.c.c $(CFLAGS) 2> /dev/null

21enum.c.o.tmp: 21enum.c.c
	$(CC) -o 21enum.c.o.tmp -c 21enum.c.c $(CFLAGS) 2> /dev/null

22typedef.c.o.tmp: 22typedef.c.c
	$(CC) -o 22typedef.c.o.tmp -c 22typedef.c.c $(CFLAGS) 2> /dev/null

23field.c.o.tmp: 23field.c.c
	$(CC) -o 23field.c.o.tmp -c 23field.c.c $(CFLAGS) 2> /dev/null

26eq.c.o.tmp: 26eq.c.c
	$(CC) -o 26eq.c.o.tmp -c 26eq.c.c $(CFLAGS) 2> /dev/null

24method.c.o.tmp: 24method.c.c
	$(CC) -o 24method.c.o.tmp -c 24method.c.c $(CFLAGS) 2> /dev/null

25obj.c.o.tmp: 25obj.c.c
	$(CC) -o 25obj.c.o.tmp -c 25obj.c.c $(CFLAGS) 2> /dev/null

27impl.c.o.tmp: 27impl.c.c
	$(CC) -o 27impl.c.o.tmp -c 27impl.c.c $(CFLAGS) 2> /dev/null

28interface.c.o.tmp: 28interface.c.c
	$(CC) -o 28interface.c.o.tmp -c 28interface.c.c $(CFLAGS) 2> /dev/null

29module.c.o.tmp: 29module.c.c
	$(CC) -o 29module.c.o.tmp -c 29module.c.c $(CFLAGS) 2> /dev/null

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./neo-c "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./neo-c.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./neo-c-libc.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./neo-c-net.h "$(DESTDIR)/include"
	$(INSTALL) -m 644 ./neo-c-pthread.h "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/share/doc/neo-c"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/neo-c/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.log *.c.o neo-c *.o a *.tmp neo-c-val neo-c-Sch neo-c-inf *.i *.val *.out *.log a.c.c b.c.c b c c.c.c *.valgrind aa aaa src/neo-c2 code/a code/*.c.c code/*.c.o code/b code/neo-c code/neo-c2 code/neo-c3 code/neo-c4 code/neo-c5 code/neo-c6 code/neo-c7 code/neo-c8 code/neo-c9 code/neo-c10 code/neo-c11 code/neo-c12 code/codex code/neo-c13 code/neo-c14 code/runner code/test_array_ptr code/test_control code/test_functions code/test_ops code/test_string_cast code/test_struct_enum code/test_switch_ternary neo-c.c neo-c.c.c
	(cd code && make clean)

distclean: clean
	rm -fR  config.h autom4te.cache 

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/neo-c
	rm -f "$(DESTDIR)"/include/neo-c.h
	rm -f "$(DESTDIR)"/include/neo-c-Sctr.h
	rm -f "$(DESTDIR)"/include/neo-c-net.h
	rm -f "$(DESTDIR)"/include/neo-c-pthread.h
	rm -f "$(DESTDIR)/share/doc/neo-c/README.md

test:
	(cd code && make test)

ccpp.o: ccpp.c
	$(CC) -o ccpp.o -c ccpp.c $(CFLAGS)
