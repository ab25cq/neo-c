#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/dbdb
sysconfdir=${prefix}/etc/dbdb
includedir=${prefix}/include/dbdb
datarootdir=${prefix}/share/dbdb
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
INSTALL=install
CFLAGS= -Og -g -I../..
CFLAGS_DEBUG= -gdwarf-4 -cg -net -str -I../..
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.nc)
SINGLE_SRCS=$(filter-out %.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.nc=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.nc=.debug.o)
TARGET=dbdb
TARGET_DEBUG=dbdb-debug

#########################################
# main
#########################################
all: $(TARGET)

$(TARGET): 
	neo-c $(CFLAGS)  -o dbdb main.nc -lssl

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.debug.o: %.c
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# header
#########################################

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./dbdb "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/dbdb"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/dbdb/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c.c dbdb *.log *.out dbdb-debug
	(cd client && make clean)

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/dbdb
	rm -f "$(DESTDIR)/share/doc/dbdb/README.md"

run: dbdb
	rm -f *.log
	pkill dbdb || true
	nohup ./dbdb > dbdb.log 2>&1 &
	@if command -v nc >/dev/null 2>&1; then \
		i=0; \
		while [ $$i -lt 50 ]; do \
			if nc -z 127.0.0.1 3366 >/dev/null 2>&1; then \
				exit 0; \
			fi; \
			i=$$((i + 1)); \
			sleep 0.1; \
		done; \
		echo "warning: dbdb startup timeout (port 3366 not ready)" >&2; \
	else \
		echo "warning: nc not found; skipping dbdb readiness check" >&2; \
	fi

compile: dbdb

debug: dbdb-debug
	rm -f *.log
	./dbdb-debug
