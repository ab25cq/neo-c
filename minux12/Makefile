NEOC ?= ../neo-c
AVR_CC ?= avr-gcc
AVR_OBJDUMP ?= avr-objdump

AVR_CFLAGS := -mmcu=atmega328p -std=gnu11 -Os -ffreestanding -fno-builtin \
	-fno-stack-protector -ffunction-sections -fdata-sections
AVR_LDFLAGS := -nostdlib -Wl,--gc-sections -Wl,-e,reset_handler

.PHONY: all run test disasm clean

all: avr_emu hello.elf

avr_emu: emu/avr_emu.nc
	$(NEOC) $< -o $@

hello.c: hello.nc
	$(NEOC) -micro16 -S $<

hello.o: hello.c
	$(AVR_CC) $(AVR_CFLAGS) -c -o $@ $<

startup.o: startup.S
	$(AVR_CC) -mmcu=atmega328p -c -o $@ $<

hello.elf: startup.o hello.o
	$(AVR_CC) -mmcu=atmega328p $(AVR_LDFLAGS) -o $@ $^ -lgcc

disasm: hello.elf
	$(AVR_OBJDUMP) -d $<

run: all avr_emu
	./avr_emu hello.elf

test: all avr_emu
	grep -q '^#define __NEO_MICRO16__ 1$$' hello.c
	$(AVR_OBJDUMP) -f hello.elf | grep -q 'architecture: avr'
	./avr_emu hello.elf > test.out
	grep -q '^HELLO WORLD$$' test.out
	@echo "PASS minux12"

clean:
	rm -f avr_emu avr_emu.c hello.c hello.nc.i hello.o startup.o hello.elf test.out
