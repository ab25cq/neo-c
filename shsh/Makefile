#########################################
# istalled directories
#########################################
prefix=/usr/local/
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/shsh
sysconfdir=${prefix}/etc/shsh
includedir=${prefix}/include/shsh
datarootdir=${prefix}/share/shsh
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

#########################################
# environmnet variables
#########################################
CC=neo-c
INSTALL=install
CFLAGS= -Og -g -I/opt/homebrew/opt/readline/include -L/opt/homebrew/opt/readline/lib -lreadline
CFLAGS_DEBUG= -gdwarf-4 -cg -lreadline 
LIBS=
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.nc)
SINGLE_SRCS=$(filter-out %.nc, $(SRCS))
OBJS=$(SINGLE_SRCS:.nc=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.nc=.debug.o)
TARGET=shsh
TARGET_DEBUG=shsh-debug

#########################################
# main
#########################################
all: $(TARGET)

shsh: main.nc
	$(CC) $(CFLAGS) -o shsh main.nc

$(TARGET_DEBUG): $(DEBUG_OBJS)
	$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.nc
	$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.nc
	$(CC) $(CFLAGS_DEBUG) -c $< -o $@

#########################################
# install
#########################################
install:
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./shsh "$(DESTDIR)/bin"
	mkdir -p "$(DESTDIR)/include"
	mkdir -p "$(DESTDIR)/lib"
	mkdir -p "$(DESTDIR)/share/doc/shsh"
	$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/shsh/README.md"

#########################################
# clean
#########################################
clean:
	rm -fR *.o *.c.i *.c.out *.c shsh *.log *.out common.h shsh-debug tmp-common*.txt tmp-common-header*

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/shsh
	rm -f "$(DESTDIR)/share/doc/shsh/README.md"

run: shsh
	rm -f *.log
	./shsh

compile: shsh

debug: shsh-debug
	rm -f *.log
	./shsh-debug
