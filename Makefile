#########################################
# environmnet variables
#########################################
DESTDIR=/usr/local
CFLAGS_OPT=
CC=clang
INSTALL=/usr/bin/install -c
CFLAGS=-DPREFIX="\"${DESTDIR}/\"" -I/usr/local/include $(CFLAGS_OPT) -std=c11 -O2 #-g -Og
LIBS= -lutil -ldl -lm -lrt
UNAME_S=$(shell uname -s)
NCC_FLAGS=
ifeq ($(UNAME_S),Darwin)
ifneq ($(NO_PORTABLE_C),1)
NCC_FLAGS+=-portable-c
endif
endif

#########################################
# main
#########################################
all: ncc

#########################################
# make c source
#########################################
self-host: 01main.c 02transpile.c 03output_code.c 04heap.c 05parse.c 06type.c 07function.c 08call.c 09pre_op.c 10str.c 11number.c 12var.c 13gvar.c 14if.c 15while.c 16for.c 17do_while.c 18switch.c 19struct.c 20union.c 21enum.c 22typedef.c 23field.c 24method.c 25obj.c 26eq.c 27impl.c 28interface.c 29module.c 30op.c 

01main.c: 01main.nc
	./ncc $(NCC_FLAGS) -c 01main.nc 

02transpile.c: 02transpile.nc
	./ncc $(NCC_FLAGS) -c 02transpile.nc 

03output_code.c: 03output_code.nc
	./ncc $(NCC_FLAGS) -c 03output_code.nc

04heap.c: 04heap.nc
	./ncc $(NCC_FLAGS) -c 04heap.nc

05parse.c: 05parse.nc
	./ncc $(NCC_FLAGS) -c 05parse.nc

06type.c: 06type.nc
	./ncc $(NCC_FLAGS) -c 06type.nc

07function.c: 07function.nc
	./ncc $(NCC_FLAGS) -c 07function.nc

08call.c: 08call.nc
	./ncc $(NCC_FLAGS) -c 08call.nc

09pre_op.c: 09pre_op.nc
	./ncc $(NCC_FLAGS) -c 09pre_op.nc

10str.c: 10str.nc
	./ncc $(NCC_FLAGS) -c 10str.nc

11number.c: 11number.nc
	./ncc $(NCC_FLAGS) -c 11number.nc

12var.c: 12var.nc
	./ncc $(NCC_FLAGS) -c 12var.nc

13gvar.c: 13gvar.nc
	./ncc $(NCC_FLAGS) -c 13gvar.nc

14if.c: 14if.nc
	./ncc $(NCC_FLAGS) -c 14if.nc

15while.c: 15while.nc
	./ncc $(NCC_FLAGS) -c 15while.nc

16for.c: 16for.nc
	./ncc $(NCC_FLAGS) -c 16for.nc

17do_while.c: 17do_while.nc
	./ncc $(NCC_FLAGS) -c 17do_while.nc

18switch.c: 18switch.nc
	./ncc $(NCC_FLAGS) -c 18switch.nc

19struct.c: 19struct.nc
	./ncc $(NCC_FLAGS) -c 19struct.nc

20union.c: 20union.nc
	./ncc $(NCC_FLAGS) -c 20union.nc

21enum.c: 21enum.nc
	./ncc $(NCC_FLAGS) -c 21enum.nc

22typedef.c: 22typedef.nc
	./ncc $(NCC_FLAGS) -c 22typedef.nc 

23field.c: 23field.nc
	./ncc $(NCC_FLAGS) -c 23field.nc

24method.c: 24method.nc
	./ncc $(NCC_FLAGS) -c 24method.nc

25obj.c: 25obj.nc
	./ncc $(NCC_FLAGS) -c 25obj.nc

26eq.c: 26eq.nc
	./ncc $(NCC_FLAGS) -c 26eq.nc

27impl.c: 27impl.nc
	./ncc $(NCC_FLAGS) -c 27impl.nc

28interface.c: 28interface.nc
	./ncc $(NCC_FLAGS) -c 28interface.nc

29module.c: 29module.nc
	./ncc $(NCC_FLAGS) -c 29module.nc

30op.c: 30op.nc
	./ncc $(NCC_FLAGS) -c 30op.nc


#########################################
# compile c source
#########################################
ncc: 01main.o 02transpile.o 03output_code.o 04heap.o 05parse.o 06type.o 07function.o 08call.o 09pre_op.o 10str.o 11number.o 12var.o 13gvar.o 14if.o 15while.o 16for.o 17do_while.o 18switch.o 19struct.o 20union.o 21enum.o 22typedef.o 23field.o 24method.o 25obj.o 26eq.o 27impl.o 28interface.o 29module.o 30op.o ccpp.o  
	$(CC) -o ncc 01main.o 02transpile.o 03output_code.o 04heap.o 05parse.o 06type.o 07function.o 08call.o 09pre_op.o 10str.o 11number.o 12var.o 13gvar.o 14if.o 15while.o 16for.o 17do_while.o 18switch.o 19struct.o 20union.o 21enum.o 22typedef.o 23field.o 24method.o 25obj.o 26eq.o 27impl.o 28interface.o 29module.o 30op.o ccpp.o 

01main.o: 01main.c
	$(CC) -o 01main.o -c 01main.c $(CFLAGS) 2>&1 | grep error || true

02transpile.o: 02transpile.c
	$(CC) -o 02transpile.o -c 02transpile.c $(CFLAGS) 2>&1 | grep error || true

03output_code.o: 03output_code.c
	$(CC) -o 03output_code.o -c 03output_code.c $(CFLAGS) 2>&1 | grep error || true

04heap.o: 04heap.c
	$(CC) -o 04heap.o -c 04heap.c $(CFLAGS) 2>&1 | grep error || true

05parse.o: 05parse.c
	$(CC) -o 05parse.o -c 05parse.c $(CFLAGS) 2>&1 | grep error || true

06type.o: 06type.c
	$(CC) -o 06type.o -c 06type.c $(CFLAGS) 2>&1 | grep error || true

07function.o: 07function.c
	$(CC) -o 07function.o -c 07function.c $(CFLAGS) 2>&1 | grep error || true

08call.o: 08call.c
	$(CC) -o 08call.o -c 08call.c $(CFLAGS) 2>&1 | grep error || true

09pre_op.o: 09pre_op.c
	$(CC) -o 09pre_op.o -c 09pre_op.c $(CFLAGS) 2>&1 | grep error || true

10str.o: 10str.c
	$(CC) -o 10str.o -c 10str.c $(CFLAGS) 2>&1 | grep error || true

11number.o: 11number.c
	$(CC) -o 11number.o -c 11number.c $(CFLAGS) 2>&1 | grep error || true

12var.o: 12var.c
	$(CC) -o 12var.o -c 12var.c $(CFLAGS) 2>&1 | grep error || true

13gvar.o: 13gvar.c
	$(CC) -o 13gvar.o -c 13gvar.c $(CFLAGS) 2>&1 | grep error || true

14if.o: 14if.c
	$(CC) -o 14if.o -c 14if.c $(CFLAGS) 2>&1 | grep error || true

15while.o: 15while.c
	$(CC) -o 15while.o -c 15while.c $(CFLAGS) 2>&1 | grep error || true

16for.o: 16for.c
	$(CC) -o 16for.o -c 16for.c $(CFLAGS) 2>&1 | grep error || true

17do_while.o: 17do_while.c
	$(CC) -o 17do_while.o -c 17do_while.c $(CFLAGS) 2>&1 | grep error || true

18switch.o: 18switch.c
	$(CC) -o 18switch.o -c 18switch.c $(CFLAGS) 2>&1 | grep error || true

19struct.o: 19struct.c
	$(CC) -o 19struct.o -c 19struct.c $(CFLAGS) 2>&1 | grep error || true

20union.o: 20union.c
	$(CC) -o 20union.o -c 20union.c $(CFLAGS) 2>&1 | grep error || true

21enum.o: 21enum.c
	$(CC) -o 21enum.o -c 21enum.c $(CFLAGS) 2>&1 | grep error || true

22typedef.o: 22typedef.c
	$(CC) -o 22typedef.o -c 22typedef.c $(CFLAGS) 2>&1 | grep error || true

23field.o: 23field.c
	$(CC) -o 23field.o -c 23field.c $(CFLAGS) 2>&1 | grep error || true

24method.o: 24method.c
	$(CC) -o 24method.o -c 24method.c $(CFLAGS) 2>&1 | grep error || true

25obj.o: 25obj.c
	$(CC) -o 25obj.o -c 25obj.c $(CFLAGS) 2>&1 | grep error || true

26eq.o: 26eq.c
	$(CC) -o 26eq.o -c 26eq.c $(CFLAGS) 2>&1 | grep error || true

27impl.o: 27impl.c
	$(CC) -o 27impl.o -c 27impl.c $(CFLAGS) 2>&1 | grep error || true

28interface.o: 28interface.c
	$(CC) -o 28interface.o -c 28interface.c $(CFLAGS) 2>&1 | grep error || true

29module.o: 29module.c
	$(CC) -o 29module.o -c 29module.c $(CFLAGS) 2>&1 | grep error || true

30op.o: 30op.c
	$(CC) -o 30op.o -c 30op.c $(CFLAGS) 2>&1 | grep error || true

ccpp.o: ccpp.c
	$(CC) -o ccpp.o -c ccpp.c $(CFLAGS)

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./neo-c "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./ncc "$(DESTDIR)/bin"
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
	rm -fR ncc *.log *.o *.i *.out a a.c b b.c c c.c *.valgrind aa aaa a.out *.error
	rm -fR mf/mf.dSYM
	rm -fR shsh/shsh.dSYM
	rm -fR webweb/dbdb/dbdb.dSYM

distclean: clean
	rm -fR  config.h autom4te.cache 

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/neo-c
	rm -f "$(DESTDIR)"/bin/ncc
	rm -f "$(DESTDIR)"/include/neo-c.h
	rm -f "$(DESTDIR)"/include/neo-c-libc.h
	rm -f "$(DESTDIR)"/include/neo-c-net.h
	rm -f "$(DESTDIR)"/include/neo-c-pthread.h
	rm -f "$(DESTDIR)/share/doc/neo-c/README.md

test:
	(cd code && make test)

#########################################
# neo-c one file
#########################################
SOURCES := $(wildcard [012]*.c)
SOURCES := $(filter-out %.c,$(SOURCES))

neo-c.c: neo-c.nc
	neo-c neo-c.nc

neo-c.nc: $(SOURCES)
	@cat $^ > $@
