#########################################
# environmnet variables
#########################################
DESTDIR=/usr/local
CFLAGS_OPT=
CC=clang
INSTALL=/usr/bin/install -c
CFLAGS=-DPREFIX="\"${DESTDIR}/\"" -I/usr/local/include $(CFLAGS_OPT) -std=c11 -g -Og
LIBS= -lutil -ldl -lm -lrt

#########################################
# main
#########################################
all: ncc

#########################################
# make c source
#########################################
self-host:
	./ncc -c 01main.c 
	./ncc -c 02transpile.c 
	./ncc -c 03output.c
	./ncc -c 04heap.c
	./ncc -c 05parse.c
	./ncc -c 06type.c
	./ncc -c 07function.c
	./ncc -c 08call.c
	./ncc -c 09pre_op.c
	./ncc -c 10str.c
	./ncc -c 11number.c
	./ncc -c 12var.c
	./ncc -c 13gvar.c
	./ncc -c 14if.c
	./ncc -c 15while.c
	./ncc -c 16for.c
	./ncc -c 17do_while.c
	./ncc -c 18switch.c
	./ncc -c 19struct.c
	./ncc -c 20union.c
	./ncc -c 21enum.c
	./ncc -c 22typedef.c 
	./ncc -c 23field.c
	./ncc -c 24method.c
	./ncc -c 25obj.c
	./ncc -c 26eq.c
	./ncc -c 27impl.c
	./ncc -c 28interface.c
	./ncc -c 29module.c
	./ncc -c 30op.c

#########################################
# compile c source
#########################################
ncc: 01main.c.c 02transpile.c.c 03output_code.c.c 04heap.c.c 05parse.c.c 06type.c.c 07function.c.c 08call.c.c 09pre_op.c.c 10str.c.c 11number.c.c 12var.c.c 13gvar.c.c 14if.c.c 15while.c.c 16for.c.c 17do_while.c.c 18switch.c.c 19struct.c.c 20union.c.c 21enum.c.c 22typedef.c.c 23field.c.c 24method.c.c 25obj.c.c 26eq.c.c 27impl.c.c 28interface.c.c 29module.c.c 30op.c.c ccpp.c
	$(CC) -o 01main.o -c 01main.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 02transpile.o -c 02transpile.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 03output_code.o -c 03output_code.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 04heap.o -c 04heap.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 05parse.o -c 05parse.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 06type.o -c 06type.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 07function.o -c 07function.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 08call.o -c 08call.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 09pre_op.o -c 09pre_op.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 10str.o -c 10str.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 11number.o -c 11number.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 12var.o -c 12var.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 13gvar.o -c 13gvar.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 14if.o -c 14if.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 15while.o -c 15while.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 16for.o -c 16for.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 17do_while.o -c 17do_while.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 18switch.o -c 18switch.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 19struct.o -c 19struct.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 20union.o -c 20union.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 21enum.o -c 21enum.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 22typedef.o -c 22typedef.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 23field.o -c 23field.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 24method.o -c 24method.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 25obj.o -c 25obj.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 26eq.o -c 26eq.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 27impl.o -c 27impl.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 28interface.o -c 28interface.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 29module.o -c 29module.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o 30op.o -c 30op.c.c $(CFLAGS) 2> /dev/null
	$(CC) -o ccpp.o -c ccpp.c $(CFLAGS)
	$(CC) -o ncc 01main.o 02transpile.o 03output_code.o 04heap.o 09pre_op.o 08call.o 07function.o 11number.o 06type.o 05parse.o 10str.o 12var.o 13gvar.o 14if.o 15while.o 17do_while.o 16for.o 18switch.o 19struct.o 20union.o 21enum.o 22typedef.o 23field.o 26eq.o 24method.o 25obj.o 27impl.o 28interface.o 29module.o 30op.o ccpp.o $(CFLAGS)

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
	rm -fR ncc *.log *.o *.i *.out a a.c b b.c c c.c *.valgrind aa aaa a.out

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
SOURCES := $(filter-out %.c.c,$(SOURCES))

neo-c.c: neo-c.nc
	neo-c neo-c.nc

neo-c.nc: $(SOURCES)
	@cat $^ > $@
