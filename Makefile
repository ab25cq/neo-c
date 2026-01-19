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
	./ncc -c 01main.nc 
	./ncc -c 02transpile.nc 
	./ncc -c 03output_code.nc
	./ncc -c 04heap.nc
	./ncc -c 05parse.nc
	./ncc -c 06type.nc
	./ncc -c 07function.nc
	./ncc -c 08call.nc
	./ncc -c 09pre_op.nc
	./ncc -c 10str.nc
	./ncc -c 11number.nc
	./ncc -c 12var.nc
	./ncc -c 13gvar.nc
	./ncc -c 14if.nc
	./ncc -c 15while.nc
	./ncc -c 16for.nc
	./ncc -c 17do_while.nc
	./ncc -c 18switch.nc
	./ncc -c 19struct.nc
	./ncc -c 20union.nc
	./ncc -c 21enum.nc
	./ncc -c 22typedef.nc 
	./ncc -c 23field.nc
	./ncc -c 24method.nc
	./ncc -c 25obj.nc
	./ncc -c 26eq.nc
	./ncc -c 27impl.nc
	./ncc -c 28interface.nc
	./ncc -c 29module.nc
	./ncc -c 30op.nc

#########################################
# compile c source
#########################################
ncc: 01main.c 02transpile.c 03output_code.c 04heap.c 05parse.c 06type.c 07function.c 08call.c 09pre_op.c 10str.c 11number.c 12var.c 13gvar.c 14if.c 15while.c 16for.c 17do_while.c 18switch.c 19struct.c 20union.c 21enum.c 22typedef.c 23field.c 24method.c 25obj.c 26eq.c 27impl.c 28interface.c 29module.c 30op.c ccpp.c
	$(CC) -o 01main.o -c 01main.c $(CFLAGS) 2> /dev/null
	$(CC) -o 02transpile.o -c 02transpile.c $(CFLAGS) 2> /dev/null
	$(CC) -o 03output_code.o -c 03output_code.c $(CFLAGS) 2> /dev/null
	$(CC) -o 04heap.o -c 04heap.c $(CFLAGS) 2> /dev/null
	$(CC) -o 05parse.o -c 05parse.c $(CFLAGS) 2> /dev/null
	$(CC) -o 06type.o -c 06type.c $(CFLAGS) 2> /dev/null
	$(CC) -o 07function.o -c 07function.c $(CFLAGS) 2> /dev/null
	$(CC) -o 08call.o -c 08call.c $(CFLAGS) 2> /dev/null
	$(CC) -o 09pre_op.o -c 09pre_op.c $(CFLAGS) 2> /dev/null
	$(CC) -o 10str.o -c 10str.c $(CFLAGS) 2> /dev/null
	$(CC) -o 11number.o -c 11number.c $(CFLAGS) 2> /dev/null
	$(CC) -o 12var.o -c 12var.c $(CFLAGS) 2> /dev/null
	$(CC) -o 13gvar.o -c 13gvar.c $(CFLAGS) 2> /dev/null
	$(CC) -o 14if.o -c 14if.c $(CFLAGS) 2> /dev/null
	$(CC) -o 15while.o -c 15while.c $(CFLAGS) 2> /dev/null
	$(CC) -o 16for.o -c 16for.c $(CFLAGS) 2> /dev/null
	$(CC) -o 17do_while.o -c 17do_while.c $(CFLAGS) 2> /dev/null
	$(CC) -o 18switch.o -c 18switch.c $(CFLAGS) 2> /dev/null
	$(CC) -o 19struct.o -c 19struct.c $(CFLAGS) 2> /dev/null
	$(CC) -o 20union.o -c 20union.c $(CFLAGS) 2> /dev/null
	$(CC) -o 21enum.o -c 21enum.c $(CFLAGS) 2> /dev/null
	$(CC) -o 22typedef.o -c 22typedef.c $(CFLAGS) 2> /dev/null
	$(CC) -o 23field.o -c 23field.c $(CFLAGS) 2> /dev/null
	$(CC) -o 24method.o -c 24method.c $(CFLAGS) 2> /dev/null
	$(CC) -o 25obj.o -c 25obj.c $(CFLAGS) 2> /dev/null
	$(CC) -o 26eq.o -c 26eq.c $(CFLAGS) 2> /dev/null
	$(CC) -o 27impl.o -c 27impl.c $(CFLAGS) 2> /dev/null
	$(CC) -o 28interface.o -c 28interface.c $(CFLAGS) 2> /dev/null
	$(CC) -o 29module.o -c 29module.c $(CFLAGS) 2> /dev/null
	$(CC) -o 30op.o -c 30op.c $(CFLAGS) 2> /dev/null
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
SOURCES := $(filter-out %.c,$(SOURCES))

neo-c.c: neo-c.nc
	neo-c neo-c.nc

neo-c.nc: $(SOURCES)
	@cat $^ > $@
