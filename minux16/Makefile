NEOC ?= ../neo-c
AVR_CC ?= avr-gcc
AVR_OBJDUMP ?= avr-objdump
AVR_SIZE ?= avr-size

MCU := atmega640
AVR_CFLAGS := -mmcu=$(MCU) -std=gnu11 -Os -ffreestanding -fno-builtin \
	-fno-stack-protector -ffunction-sections -fdata-sections \
	-DNEO_MICRO_HEAP_SIZE=4096
AVR_LDFLAGS := -nostdlib -Wl,--gc-sections -Wl,-e,reset_handler \
	-Wl,-Map=collections.map

.PHONY: all run test disasm clean

all: avr_emu collections.elf

avr_emu: emu/avr_emu.nc
	$(NEOC) $< -o $@

collections.c: collections.nc
	$(NEOC) -I.. -micro16 -micro-ram8k -S $<
	# AVR binutils rejects dollar signs in assembler symbols. Keep mangling unique.
	perl -pi -e 's/\x24/_neo_dollar_/g' $@

collections.o: collections.c
	$(AVR_CC) $(AVR_CFLAGS) -c -o $@ $<

startup.o: startup.S
	$(AVR_CC) -mmcu=$(MCU) -c -o $@ $<

collections.elf: startup.o collections.o
	$(AVR_CC) -mmcu=$(MCU) $(AVR_LDFLAGS) -o $@ $^ -lgcc

disasm: collections.elf
	$(AVR_OBJDUMP) -d $<

run: all
	./avr_emu collections.elf

test: all
	grep -q '^#define __NEO_MICRO16__ 1$$' collections.c
	grep -q '^#define __NEO_MICRO_RAM_8K__ 1$$' collections.c
	grep -q '^#define NEO_MICRO_HEAP_SIZE 6144U$$' collections.c
	$(AVR_OBJDUMP) -f collections.elf | grep -q 'architecture: avr'
	@data_size=`$(AVR_SIZE) -A collections.elf | awk \
		'$$1 == ".data" || $$1 == ".bss" || $$1 == ".noinit" { total += $$2 } END { print total + 0 }'`; \
	test "$$data_size" -le 8192 || { \
		echo "AVR SRAM image exceeds 8192 bytes: $$data_size"; exit 1; \
	}; \
	echo "AVR static SRAM: $$data_size / 8192 bytes"
	./avr_emu collections.elf > test.out
	grep -q '^PASS AVR RAM8K$$' test.out
	@echo "PASS minux16"

clean:
	rm -f avr_emu avr_emu.c collections.c collections.nc.i collections.o \
		startup.o collections.elf collections.map test.out
