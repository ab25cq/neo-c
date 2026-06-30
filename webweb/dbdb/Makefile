CPM ?= cpm
DESTDIR ?= /usr/local
CLIENT_DIR ?= client

.PHONY: all build install clean uninstall run compile debug client

all: build

build:
	$(CPM) build

client:
	$(MAKE) -C $(CLIENT_DIR)

install: build
	DESTDIR="$(DESTDIR)" $(CPM) install
	mkdir -p "$(DESTDIR)/share/doc/dbdb"
	@if [ -f README.md ]; then install -m 644 README.md "$(DESTDIR)/share/doc/dbdb/README.md"; fi

clean:
	$(CPM) clean
	$(MAKE) -C $(CLIENT_DIR) clean
	rm -f *.log *.out

uninstall:
	rm -f "$(DESTDIR)/bin/dbdb"
	rm -f "$(DESTDIR)/share/doc/dbdb/README.md"

run: build
	rm -f *.log
	pkill dbdb || true
	nohup ./target/debug/dbdb > dbdb.log 2>&1 &
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

compile: build

debug: build
	rm -f *.log
	./target/debug/dbdb
