CPM ?= cpm
DESTDIR ?= /usr/local

.PHONY: all build install clean uninstall run compile debug

all: build

build:
	$(CPM) build

install: build
	DESTDIR="$(DESTDIR)" $(CPM) install
	mkdir -p "$(DESTDIR)/share/doc/cinatora"
	@if [ -f README.md ]; then install -m 644 README.md "$(DESTDIR)/share/doc/cinatora/README.md"; fi

clean:
	$(CPM) clean
	rm -f *.log *.out

uninstall:
	rm -f "$(DESTDIR)/bin/cinatora"
	rm -f "$(DESTDIR)/share/doc/cinatora/README.md"

run: build
	rm -f *.log
	./target/debug/cinatora

compile: build

debug: build
	rm -f *.log
	./target/debug/cinatora
