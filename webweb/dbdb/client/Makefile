CPM ?= cpm
DESTDIR ?= /usr/local

.PHONY: all build install clean uninstall run compile debug

all: build

build:
	$(CPM) build

install: build
	DESTDIR="$(DESTDIR)" $(CPM) install
	mkdir -p "$(DESTDIR)/share/doc/dbdb-client"
	@if [ -f README.md ]; then install -m 644 README.md "$(DESTDIR)/share/doc/dbdb-client/README.md"; fi

clean:
	$(CPM) clean
	rm -f *.log *.out

uninstall:
	rm -f "$(DESTDIR)/bin/dbdb-client"
	rm -f "$(DESTDIR)/share/doc/dbdb-client/README.md"

run: build
	rm -f *.log
	./target/debug/dbdb-client

compile: build

debug: build
	rm -f *.log
	./target/debug/dbdb-client
