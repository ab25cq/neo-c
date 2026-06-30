CPM ?= cpm
DESTDIR ?= /usr/local
CGI_DIR ?= cgi-bin
DB_DIR ?= dbdb

.PHONY: all build install clean distclean uninstall run run-http run-https compile debug help

all: build
	$(MAKE) -C $(CGI_DIR)

build:
	$(CPM) build

install: build
	DESTDIR="$(DESTDIR)" $(CPM) install
	mkdir -p "$(DESTDIR)/share/doc/webweb2"
	install -m 644 README.md "$(DESTDIR)/share/doc/webweb2/README.md"

clean:
	$(CPM) clean
	$(MAKE) -C $(CGI_DIR) clean
	$(MAKE) -C $(DB_DIR) clean

distclean: clean
	rm -f cert.pem key.pem cert.p12

uninstall:
	rm -f "$(DESTDIR)/bin/webweb2"
	rm -f "$(DESTDIR)/share/doc/webweb2/README.md"

run: run-http

run-http: build
	$(MAKE) -C $(DB_DIR) run
	$(MAKE) -C $(CGI_DIR)
	rm -f *.log
	./target/debug/webweb2 -http

run-https: build
	$(MAKE) -C $(CGI_DIR)
	rm -f *.log
	./target/debug/webweb2

compile: build

debug: build
	rm -f *.log
	./target/debug/webweb2

help:
	@printf '%s\n' \
	'Targets:' \
	'  make           Build webweb2 and CGI programs' \
	'  make run-http  Build and run HTTP mode with dbdb' \
	'  make run-https Build and run HTTPS mode' \
	'  make clean     Remove build outputs from webweb, cgi-bin, and dbdb' \
	'  make distclean Remove build outputs plus generated certificates'
