CPM ?= cpm
DESTDIR ?= /usr/local

.PHONY: all build install clean run test

all: build

build:
	$(CPM) build

install: build
	DESTDIR="$(DESTDIR)" $(CPM) install

clean:
	$(CPM) clean

run:
	$(CPM) run

test: build
