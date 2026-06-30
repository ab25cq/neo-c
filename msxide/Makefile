NEOC ?= ../neo-c
CC ?= cc
CFLAGS ?= -std=c99 -Wall -Wextra

.PHONY: all prepare-lib build test self-test rom-test basic-test cls-print-test program-test list-test command-test asm-test mock-rom ensure-rom clean

all: build

../cpm/cpm:
	$(MAKE) -C ../cpm

prepare-lib:
	mkdir -p lib
	cp ../neo-c.h ../neo-c-str.nc ../neo-c-str.h ../neo-c-libc.h ../neo-c-net.h ../neo-c-pthread.h lib/

build: ../cpm/cpm prepare-lib ensure-rom
	CPM_NEOC="$(NEOC)" ../cpm/cpm build

mock-rom:
	mkdir -p target roms
	$(CC) $(CFLAGS) tools/make_mock_basic_rom.c -o target/make_mock_basic_rom
	target/make_mock_basic_rom

ensure-rom:
	@if [ ! -f roms/msx.rom ]; then \
		$(MAKE) mock-rom; \
	fi

self-test: build
	target/debug/msxide --self-test

rom-test: build mock-rom
	target/debug/msxide --rom-test

basic-test: build
	target/debug/msxide --basic-test

cls-print-test: build
	target/debug/msxide --cls-print-test

program-test: build
	target/debug/msxide --program-test

list-test: build
	target/debug/msxide --list-test

command-test: build
	target/debug/msxide --command-test

asm-test: build
	target/debug/msxide --asm-test

test: self-test rom-test basic-test cls-print-test program-test list-test command-test asm-test

clean:
	rm -rf target
	rm -rf lib
	rm -f main.c neo-c-str.c src/main.c src/main.nc.i
