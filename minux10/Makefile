NEOC ?= ../neo-c
HOST_CC ?= cc
ARM_CC ?= arm-none-eabi-gcc
ARM_OBJDUMP ?= arm-none-eabi-objdump

ARM_CFLAGS := -std=gnu11 -mcpu=cortex-m0plus -mthumb -ffreestanding -fno-builtin \
	-fno-stack-protector -fdata-sections -ffunction-sections -Os -Wall -Wextra -D__MICRO__
ARM_LDFLAGS := -nostdlib -nostartfiles -Wl,--gc-sections -Wl,-Map=utkernel.map -T link.ld

.PHONY: all run test clean disasm

all: emu/pico_emu utkernel.elf

emu/pico_emu: emu/pico_emu.nc
	$(NEOC) $< -o $@

utkernel.c: utkernel.nc
	$(NEOC) -bare -micro -S $<

utkernel.o: utkernel.c
	$(ARM_CC) $(ARM_CFLAGS) -c -o $@ $<

utkernel.elf: utkernel.o link.ld
	$(ARM_CC) $(ARM_CFLAGS) $(ARM_LDFLAGS) -o $@ utkernel.o

run: all
	emu/pico_emu utkernel.elf

test: all
	emu/pico_emu utkernel.elf > test.out
	grep -q "uT-Kernel on neo-c Pico emulator" test.out
	grep -q "task producer start" test.out
	grep -q "task worker got message" test.out
	grep -q "uT-Kernel demo PASS" test.out
	grep -q "EMU exit: 0" test.out
	@echo "PASS minux10"

disasm: utkernel.elf
	$(ARM_OBJDUMP) -d utkernel.elf

clean:
	rm -f emu/pico_emu pico_emu.c utkernel.c utkernel.o utkernel.elf utkernel.map test.out
