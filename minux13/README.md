# minux13

minux13 tests neo-c's `-micro16` output on a second 16-bit target: the Texas
Instruments MSP430. Unlike the 8-bit AVR used by minux12, MSP430 has a native
16-bit register and ALU architecture as well as 16-bit pointers and `int`.

The project contains:

- `hello.nc`: MSP430G2553 UART Hello World firmware generated with `-micro16`
- `link.ld`: freestanding 16-bit MSP430 memory layout
- `emu/msp430_emu.nc`: host-side MSP430 ELF emulator written in neo-c

## Requirements

Clang must include its experimental MSP430 backend, and LLD must support
MSP430 ELF files:

```sh
clang --print-targets | grep msp430
```

No MSP430 standard C library is linked.

## Build and Run

```sh
cd minux13
make
make run
```

Expected output:

```text
HELLO MSP430
```

Run the automated test with:

```sh
make test
```

The firmware build path is:

```sh
../neo-c -micro16 -S hello.nc
clang --target=msp430 -mmcu=msp430g2553 -Oz -ffreestanding \
    -fno-builtin -fno-stack-protector -c hello.c -o hello.o
ld.lld -T link.ld -e firmware_entry -o hello.elf hello.o
```

## Emulator Scope

The emulator loads little-endian ELF32 MSP430 `PT_LOAD` segments and models:

- 16 native 16-bit registers, including PC and SP
- one 64KB address space
- MSP430G2553 `UCA0TXBUF` UART output at `0x0067`
- the MSP430 instructions emitted by the current Hello World image

The current instruction subset is `MOV.B #immediate, &absolute`,
`MOV.B register, &absolute`, `CLR`, and `RET`. This is a focused execution test
for the `-micro16` ABI, not a complete MSP430G2553 emulator.

Instruction tracing is available with:

```sh
./msp430_emu --trace hello.elf
```
