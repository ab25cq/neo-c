#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/webweb2
sysconfdir=${prefix}/etc/webweb2
includedir=${prefix}/include/webweb2
datarootdir=${prefix}/share/webweb2
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
INSTALL=install
CFLAGS= -Og -g 
CFLAGS_DEBUG= -gdwarf-4 -cg -net 
LIBS=-lssl
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.nc)
SINGLE_SRCS=$(filter-out %.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.nc=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.nc=.debug.o)
TARGET=webweb2
TARGET_DEBUG=webweb2-debug

#########################################
# main
#########################################
all: $(TARGET)
	(cd cgi-bin && make)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.nc
	$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.nc
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# header
#########################################

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./webweb2 "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/webweb2"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/webweb2/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c webweb2 *.log *.out webweb2-debug
	(cd dbdb && make clean)

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/webweb2
	rm -f "$(DESTDIR)/share/doc/webweb2/README.md"

run: webweb2
	(cd cgi-bin && make)
	rm -f *.log
	./webweb2 -http

compile: webweb2

debug: webweb2-debug
	rm -f *.log
	./webweb2-debug
