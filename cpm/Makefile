CC = ../neo-c
INSTALL ?= install
DESTDIR ?= /usr/local
CFLAGS ?= -O2
CPPFLAGS ?= -DCPM_DEFAULT_STDLIB_DIR=\"$(abspath ..)\"
CPM_BIN := $(CURDIR)/cpm
NEOC_BIN := $(abspath ../neo-c)

.PHONY: all install clean test

all: cpm

cpm: cpm.nc
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ $<

install: cpm
	mkdir -p "$(DESTDIR)/bin"
	$(INSTALL) -m 755 ./cpm "$(DESTDIR)/bin/cpm"

test: cpm
	rm -rf /tmp/neo-cpm-test
	mkdir -p /tmp/neo-cpm-test
	cd /tmp/neo-cpm-test && "$(CPM_BIN)" new hello
	test -f /tmp/neo-cpm-test/hello/lib/neo-c.h
	test -f /tmp/neo-cpm-test/hello/lib/neo-c-str.nc
	cd /tmp/neo-cpm-test/hello && CPM_NEOC="$(NEOC_BIN)" "$(CPM_BIN)" build
	test -f /tmp/neo-cpm-test/hello/target/debug/neo-c-str.o
	cd /tmp/neo-cpm-test/hello && ./target/debug/hello > test.out
	grep -q '^Hello from neo-c cpm$$' /tmp/neo-cpm-test/hello/test.out

clean:
	rm -f cpm cpm.c cpm.nc.i *.o *.out
