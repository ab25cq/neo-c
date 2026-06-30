NEOC ?= ../neo-c

.PHONY: all build run size clean

all: build

../cpm/cpm:
	$(MAKE) -C ../cpm

build: ../cpm/cpm
	CPM_NEOC="$(NEOC)" ../cpm/cpm build

run: build
	./target/debug/small

size: build
	wc -c target/debug/small

clean:
	rm -rf target
	rm -f main.c src/main.c src/main.nc.i
