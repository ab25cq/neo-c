# minux12

minux12 is a small AVR execution test for neo-c's `-micro16` target.
Everything specific to this test is contained in this directory:

- `hello.nc`: neo-c firmware that writes `HELLO WORLD` to the AVR UART
- `startup.S`: freestanding ATmega328P reset and stack initialization
- `emu/avr_emu.nc`: host-side AVR ELF emulator written in neo-c

AVR has an 8-bit register and ALU architecture. The ATmega328P C ABI uses
16-bit pointers and `int`, so this project deliberately uses `-micro16`.
Here, 16-bit describes the neo-c/C data ABI rather than the AVR ALU width.

## Requirements

Fedora package names:

```sh
sudo dnf install avr-gcc avr-binutils
```

The emulator itself is built by the repository's `../neo-c` compiler.

## Build and Run

```sh
cd minux12
make
make run
```

Expected output:

```text
HELLO WORLD
```

Run the complete automated test with:

```sh
make test
```

The firmware build is freestanding and does not link the host or AVR standard
C library:

```sh
../neo-c -micro16 -S hello.nc
avr-gcc -mmcu=atmega328p -std=gnu11 -Os -ffreestanding \
    -fno-builtin -fno-stack-protector -c hello.c
avr-gcc -mmcu=atmega328p -nostdlib -Wl,--gc-sections \
    -Wl,-e,reset_handler -o hello.elf startup.o hello.o -lgcc
```

## Emulator Scope

The emulator loads little-endian ELF32 AVR `PT_LOAD` segments and models:

- 32 8-bit AVR registers
- 16-bit program counter and stack pointer
- ATmega328P-sized flash and data memory
- `UDR0` UART output at data address `0x00c6`
- the AVR instructions emitted by the current Hello World image

The implemented instructions are `LDI`, `EOR`, `OUT`, `ST Z`, `RJMP`, `CALL`,
`RET`, `BREAK`, and `NOP`. This is a focused `-micro16` execution test, not yet
a complete ATmega328P peripheral or instruction-set emulator.

Use instruction tracing when extending it:

```sh
./avr_emu --trace hello.elf
```
