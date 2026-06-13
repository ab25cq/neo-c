NEOC ?= ../neo-c
SDCC ?= sdcc-sdcc
GPASM ?= gpasm
GPLINK ?= gplink

PIC_DEVICE ?= 16f877a
SDCC_FLAGS := -mpic14 -p$(PIC_DEVICE) --std-c11 --opt-code-size \
	--no-warn-non-free -DNEO_MICRO_HEAP_SIZE=32 \
	'-D__builtin_va_list=void *'
PIC_LKR ?= /usr/share/gputils/lkr/16f877a_g.lkr

.PHONY: all run test disasm clean

all: pic16_emu hello.hex

pic16_emu: emu/pic16_emu.nc
	$(NEOC) $< -o $@

hello.c: hello.nc
	$(NEOC) -micro -S $<

hello.o: hello.c
	$(SDCC) $(SDCC_FLAGS) -c $< -o $@

pic_uart.o: pic_uart.c
	$(SDCC) $(SDCC_FLAGS) -c $< -o $@

startup.o: startup.asm
	$(GPASM) -p$(PIC_DEVICE) -c $< -o $@

hello.hex: hello.o pic_uart.o startup.o
	$(GPLINK) -s $(PIC_LKR) -m -o $@ $^ \
		/usr/share/sdcc/lib/pic14/libsdcc.lib

disasm: hello.o
	sed -n '1,240p' hello.asm

run: all
	./pic16_emu hello.hex

test: all
	grep -q '^#define __NEO_MICRO__ 1$$' hello.c
	test -s hello.hex
	./pic16_emu hello.hex > test.out
	grep -q '^HELLO WORLD$$' test.out
	@echo "PASS minux15"

clean:
	rm -f pic16_emu pic16_emu.c hello.c hello.nc.i hello.asm hello.cod \
		hello.hex hello.lst hello.map test.out \
		hello.o hello.rel hello.sym pic_uart.asm pic_uart.cod pic_uart.lst \
		pic_uart.o startup.cod startup.lst startup.o
