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
CFLAGS= -Og -g -I..
CFLAGS_DEBUG= -gdwarf-4 -cg -net -I..
LIBS=-lssl -lz
OS=linux
DESTDIR=/usr/local/
SRCS=$(wildcard *.nc)
SINGLE_SRCS=$(filter-out %.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.nc=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.nc=.debug.o)
TARGET=webweb2
TARGET_DEBUG=webweb2-debug
CGI_DIR=cgi-bin
DB_DIR=dbdb

.PHONY: all install clean distclean uninstall run run-http run-https compile debug help

#########################################
# main
#########################################
all: $(TARGET)
	$(MAKE) -C $(CGI_DIR)

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
	$(MAKE) -C $(CGI_DIR) clean
	$(MAKE) -C $(DB_DIR) clean

distclean: clean
	rm -f cert.pem key.pem cert.p12

#########################################
# uninstall
#########################################
uninstall:
	rm -f "$(DESTDIR)"/bin/webweb2
	rm -f "$(DESTDIR)/share/doc/webweb2/README.md"

run: run-http

run-http: webweb2
	$(MAKE) -C $(DB_DIR) run
	$(MAKE) -C $(CGI_DIR)
	rm -f *.log
	./webweb2 -http

run-https: webweb2
	$(MAKE) -C $(CGI_DIR)
	rm -f *.log
	./webweb2

compile: webweb2

debug: webweb2-debug
	rm -f *.log
	./webweb2-debug

help:
	@printf '%s\n' \
	'Targets:' \
	'  make           Build webweb2 and CGI programs' \
	'  make run-http  Build and run HTTP mode with dbdb' \
	'  make run-https Build and run HTTPS mode' \
	'  make clean     Remove build outputs from webweb, cgi-bin, and dbdb' \
	'  make distclean Remove build outputs plus generated certificates'
