# minux14

minux14 tests neo-c's `-micro8` output on a Zilog Z80 target. Z80 is an 8-bit
CPU with 16-bit addressing. SDCC's Z80 ABI uses 16-bit pointers and `int`,
which matches the data model selected by `-micro8`.

The project contains:

- `hello.nc`: Z80 memory-mapped UART Hello World firmware
- `emu/z80_emu.nc`: host-side Z80 Intel HEX emulator written in neo-c
- `basic_ide.nc`: interactive MSX-BASIC-style editor and interpreter
- `examples/demo.bas`: example BASIC program
- `Makefile`: neo-c, SDCC, and emulator build pipeline

## Requirements

Fedora package:

```sh
sudo dnf install sdcc
```

Fedora installs the compiler and object conversion tools as `sdcc-sdcc` and
`sdcc-sdobjcopy`.

## Build and Run

```sh
cd minux14
make
make run
```

Expected output:

```text
HELLO Z80
```

Run the automated test with:

```sh
make test
```

## MSX-BASIC-style IDE

Build and start the interactive BASIC environment:

```sh
make ide
```

When stdin and stdout are terminals, the IDE uses ncurses to provide a
full-screen 40-column by 24-row MSX-style display. It uses a blue background,
white text, an `Ok` prompt inside the emulated screen, cursor-addressed output,
and an interactive command editor. On a 24-row terminal, input is edited
directly inside the emulated screen. Larger terminals also show a function-key
bar and a separate input bar.

Fedora ncurses development files are required:

```sh
sudo dnf install ncurses-devel
```

The screen starts in the familiar line-number editing style:

```text
NEO-C Z80 BASIC
MSX-BASIC style IDE
28815 Bytes free
Ok
10 PRINT "HELLO WORLD"
20 FOR I=1 TO 3
30 PRINT I
40 NEXT I
50 END
Ok
RUN
HELLO WORLD
1
2
3
Ok
```

Interactive keys:

| Key | Action |
|---|---|
| Left / Right | Move within the current command |
| Home / End | Move to the beginning or end |
| Backspace / Delete | Remove a character |
| Up / Down | Recall command history |
| Esc | Clear the current command |
| F1 | Enter `HELP` |
| F5 | Enter `RUN` |
| F10 | Exit the IDE |

Entering a numbered line stores or replaces it. Entering only the line number
deletes it.

IDE commands:

| Command | Action |
|---|---|
| `LIST` or `LIST 100-200` | Display the whole program or a line range |
| `RUN` | Clear variables and run the current program |
| `NEW` | Clear the program |
| `SAVE "file.bas"` | Save editable BASIC source |
| `LOAD "file.bas"` | Load BASIC source |
| `DELETE 100` | Delete one line |
| `CLS` | Clear the terminal screen |
| `HELP` | Display the command and statement summary |
| `QUIT` or `SYSTEM` | Leave the IDE |

Implemented BASIC statements and expressions:

- `PRINT` and the `?` abbreviation, including strings, `;`, and `,`
- `LET A=expression`, or assignment without `LET`
- `INPUT A`
- `IF expression THEN line`
- `GOTO`, `GOSUB`, and `RETURN`
- `FOR A=first TO last STEP amount` and `NEXT A`
- `REM`, apostrophe comments, `CLS`, `END`, and `STOP`
- `LOCATE x,y[,cursor]` with zero-based MSX-style screen coordinates
- multiple statements on one line separated by `:`
- integer variables `A` through `Z`
- parentheses, unary signs, `+`, `-`, `*`, `/`, `%`
- `=`, `<>`, `<`, `>`, `<=`, and `>=`

`LOCATE 10,5` moves the terminal cursor to column 10, row 5. The optional
third argument controls cursor visibility: `LOCATE 10,5,0` hides it and
`LOCATE 10,5,1` shows it.

Use a colon to write multiple statements on one numbered or direct-mode line:

```basic
10 A=1:PRINT "VALUE=";A:A=A+1
20 IF A=2 THEN PRINT "OK":GOTO 100
```

Colons inside quoted strings are printed normally. `REM` and apostrophe
comments consume the remainder of their physical line. When an `IF` condition
is false, the remaining statements on that physical line are skipped.

Run a saved program without opening the editor:

```sh
./basic_ide --run examples/demo.bas
```

The IDE itself is written in neo-c and runs on the host. ncurses supplies the
terminal display, while BASIC output is rendered through an internal 40x24
character screen. It provides the MSX-BASIC editing workflow alongside the Z80
firmware and emulator. The BASIC interpreter is intentionally compact; it is
not a byte-for-byte implementation of Microsoft MSX-BASIC or an MSX hardware
emulator.

The firmware build path is:

```sh
../neo-c -micro8 -S hello.nc
sdcc-sdcc -mz80 --std-c11 --opt-code-size --no-std-crt0 \
    --code-loc 0x0100 --data-loc 0x8000 \
    '-D__builtin_va_list=void *' hello.c -o hello.ihx
```

The `__builtin_va_list` compatibility definition is needed because neo-c emits
that typedef even when this minimal firmware does not use variadic functions.
No Z80 standard C library or startup runtime is linked.

## Emulator Scope

The emulator loads SDCC Intel HEX output and models:

- Z80 8-bit accumulator
- 16-bit `DE`, program counter, and stack pointer
- one 64KB address space
- memory-mapped UART output at `0xff00`
- the instructions emitted by the current Hello World image

The current instruction subset is `LD A,n`, `LD (nn),A`, `CALL`, `LD DE,nn`,
and `RET`. This is a focused `-micro8` execution test, not a complete Z80
machine or peripheral emulator.

Instruction tracing is available with:

```sh
./z80_emu --trace hello.ihx
```
