# minux15

minux15 tests neo-c-generated firmware on a Microchip PIC16F877A. The target
uses the classic PIC14 instruction set: an 8-bit data path, 14-bit instruction
words, banked RAM, and an 8-level hardware return stack.

PIC is not a flat 16-bit-pointer target. SDCC represents a generic pointer with
three bytes so it can identify the target address space on this Harvard
architecture. For that reason this project uses `-micro`, not `-micro8`.
`-micro8` deliberately rejects this ABI because it requires two-byte pointers.

The firmware itself is written in neo-c. A small target-specific C file maps
`pic_uart_write()` to the PIC16F877A `TXREG` address, and a small assembly file
provides reset startup. No host libc or PIC libc is linked.

## Requirements

Fedora:

```sh
sudo dnf install sdcc gputils
```

## Build and test

```sh
cd minux15
make test
```

Expected output:

```text
HELLO WORLD
PASS minux15
```

The build performs these steps:

1. `neo-c -micro -S hello.nc` generates freestanding C.
2. SDCC compiles it for `PIC16F877A`.
3. `gpasm` and `gplink` create the real PIC Intel HEX image.
4. The neo-c-written `pic16_emu` executes the image.
5. Writes to the emulated `TXREG` are checked as `HELLO WORLD`.

The emulator implements the instructions emitted by this focused Hello World
test and models program memory, banked file registers, `W`, `STATUS`, `PCLATH`,
and the eight-level return stack. It is not a complete PIC16F877A peripheral
simulator.
