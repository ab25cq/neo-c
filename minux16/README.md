# minux16

minux16 executes neo-c collections on an emulated ATmega640. This AVR has
exactly 8KB of SRAM and 64KB of flash, so it is a concrete execution test for
the `-micro16 -micro-ram8k` profile.

The firmware uses `vector<int>`, `list<int>`, and `map<int,int>` together.
`-micro-ram8k` defaults to a 6144-byte heap. AVR places ordinary constant
strings in SRAM, so this image overrides `NEO_MICRO_HEAP_SIZE` to 4096 bytes,
leaving practical room for AVR `.data` and the stack. UART writes to `UDR0`
are captured by the neo-c-written emulator.

## Requirements

Fedora:

```sh
sudo dnf install avr-gcc avr-binutils
```

## Build and test

```sh
cd minux16
make test
```

Expected output includes:

```text
AVR static SRAM: ... / 8192 bytes
PASS AVR RAM8K
PASS minux16
```

The build verifies that the linked `.data`, `.bss`, and `.noinit` sections fit
within 8192 bytes. It then runs the actual AVR ELF in `emu/avr_emu.nc`; this is
not a host-native simulation of the collection API.

neo-c uses `$` in generic symbol mangling. AVR GCC accepts those C identifiers,
but AVR binutils does not accept `$` in emitted assembler symbols. The Makefile
therefore replaces `$` with the collision-resistant `_neo_dollar_` sequence in
the generated C before invoking AVR GCC.
