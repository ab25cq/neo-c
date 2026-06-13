NEOC ?= ../neo-c
CLANG ?= clang
LLD ?= ld.lld
LLVM_OBJDUMP ?= llvm-objdump
LLVM_READELF ?= llvm-readelf
LLVM_SIZE ?= llvm-size

MSP430_CFLAGS := --target=msp430 -mmcu=msp430g2553 -std=gnu11 -Oz \
	-ffreestanding -fno-builtin -fno-stack-protector \
	-ffunction-sections -fdata-sections

.PHONY: all run test disasm clean

all: msp430_emu hello.elf

msp430_emu: emu/msp430_emu.nc
	$(NEOC) $< -o $@

hello.c: hello.nc
	$(NEOC) -micro16 -S $<

hello.o: hello.c
	$(CLANG) $(MSP430_CFLAGS) -c -o $@ $<

hello.elf: hello.o link.ld
	$(LLD) -T link.ld -e firmware_entry -o $@ hello.o

run: all
	./msp430_emu hello.elf

test: all
	grep -q '^#define __NEO_MICRO16__ 1$$' hello.c
	$(LLVM_READELF) -h hello.elf | grep -q 'Texas Instruments msp430'
	./msp430_emu hello.elf > test.out
	grep -q '^HELLO MSP430$$' test.out
	@echo "PASS minux13"

disasm: hello.elf
	$(LLVM_OBJDUMP) -d $<

clean:
	rm -f msp430_emu msp430_emu.c hello.c hello.nc.i hello.o hello.elf test.out
