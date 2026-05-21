#########################################
# istalled directories
#########################################
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/cinatora
sysconfdir=${prefix}/etc/cinatora
includedir=${prefix}/include/cinatora
datarootdir=${prefix}/share/cinatora
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
INSTALL=install
CFLAGS= -I. -O2
CFLAGS_DEBUG= -I. -gdwarf-4 -cg
LIBS=-lpcre
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.nc)
SINGLE_SRCS=$(filter-out %.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.nc=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.nc=.debug.o)
TARGET=cinatora
TARGET_DEBUG=cinatora-debug

#########################################
# main
#########################################
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

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
	$(INSTALL) -m 755 ./cinatora "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/cinatora"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/cinatora/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.nc.i *.c.error *.c cinatora *.log *.out cinatora-debug

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/cinatora
	rm -f "$(DESTDIR)/share/doc/cinatora/README.md"

run: cinatora
	rm -f *.log
	./cinatora

compile: cinatora

debug: cinatora-debug
	rm -f *.log
	./cinatora-debug
