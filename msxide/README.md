# msxide

Early MSX/Z80 emulator workbench ported from the c- `msxide` project to neo-c.

This project currently provides:

- Z80 CPU core skeleton with broad base opcode coverage
- CB-prefixed bit/rotate/set/reset operations
- DD/FD-prefixed IX/IY addressing for common load/store, ALU, stack, jump, and indexed-CB operations
- ED-prefixed block copy support for `LDI`/`LDIR`/`LDD`/`LDDR`
- 64KB memory
- MSX-style ROM loader
- VDP port stubs
- curses display with a fullscreen MSX-BASIC-like blue text screen
- clean-room Z80 ROM BASIC-like command handling for `PRINT`, `CLS`,
  `LOCATE`, `SCREEN`, `WIDTH`, `COLOR`, `REM`, `GOTO`, `GOSUB`, `RETURN`,
  `ASM`, `CALL`, line-numbered program storage, `RUN`, `LIST`, `NEW`, `END`,
  and `STOP`
- `--self-test` for small Z80 programs covering load/store, branch, CB, IX/IY, indexed-CB, and LDIR

ROMs are not included. Put legally obtained dumps here:

```text
roms/msx.rom       combined BIOS/BASIC ROM, loaded at 0000h
roms/basic.rom     optional BASIC ROM, loaded at 8000h
```

Build:

```sh
make build
```

`make build` prepares a project-local `lib/` with neo-c standard library
sources, generates the clean-room `roms/msx.rom` if it is missing, then uses
`../cpm/cpm build` and `../neo-c`.

For a redistributable smoke-test ROM, build the clean-room mock BASIC ROM:

```sh
make mock-rom
target/debug/msxide --rom-test
```

The generated `roms/msx.rom` is a tiny clean-room Z80 ROM. It reads completed
input lines from I/O port `0x2e`, writes text to curses through port `0x2f`,
stores numbered lines in emulated RAM, and executes `RUN`/`LIST` on the Z80 CPU.
It is not Microsoft MSX-BASIC and does not contain any dumped or
reverse-engineered vendor ROM code.

Run tests:

```sh
make test
```

Equivalent individual commands:

```sh
make build
target/debug/msxide --self-test
make mock-rom
target/debug/msxide --rom-test
target/debug/msxide --basic-test
target/debug/msxide --cls-print-test
target/debug/msxide --program-test
target/debug/msxide --list-test
target/debug/msxide --command-test
target/debug/msxide --asm-test
target/debug/msxide
```

The main curses view is intentionally machine-like: the terminal is a blue text
screen showing ROM console output and typed input. The curses side provides the
line editor and sends completed lines to the Z80 input port; BASIC parsing,
program storage, `RUN`, and `LIST` happen inside the Z80 ROM. Debugger-style
register and memory panes are hidden from the normal view.

Keys:

- `PRINT "HELLO"`: print text
- `CLS`: clear the screen
- `LOCATE x,y`: move the screen cursor
- `SCREEN 0`: keep text mode; other screen modes print `TEXT SCREEN ONLY`
- `WIDTH n`: accepted as a text-screen compatibility command
- `COLOR fg,bg`: accepted as a text-screen compatibility command
- `10 PRINT "HELLO"`: store a numbered program line
- `RUN`: run stored numbered lines in line-number order
- `LIST`: show stored numbered lines
- `NEW`: clear stored numbered lines
- `REM ...`: comment
- `GOTO n`: continue at line `n`
- `GOSUB n` / `RETURN`: call and return from a subroutine
- `ASM byte,byte,...`: write decimal Z80 opcode bytes into the mock machine-code area
- `CALL`: call the machine-code area written by `ASM`
- Arrow keys: move the visible text cursor; right/down grow blank columns/lines
- `ESC`: quit

For example, this writes `LD A,65; OUT (47),A; RET`, then calls it:

```basic
ASM 62,65,211,47,201
CALL
```

The mock ROM currently supports two-digit line numbers, which is enough for
smoke tests such as `10`, `20`, and `30`. `GOSUB` currently has a one-entry
return stack.

Full MSX-BASIC boot still needs more edge-case Z80 instructions, the remaining
ED instructions, and more accurate MSX hardware emulation: slots, VDP, PSG,
PPI/keyboard, timers, and interrupt timing.
