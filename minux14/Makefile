NEOC ?= ../neo-c
SDCC ?= sdcc-sdcc
SDOBJCOPY ?= sdcc-sdobjcopy

SDCC_FLAGS := -mz80 --std-c11 --opt-code-size --no-std-crt0 \
	--code-loc 0x0100 --data-loc 0x8000 '-D__builtin_va_list=void *'

.PHONY: all run ide test test-ide disasm clean

all: z80_emu hello.ihx basic_ide

z80_emu: emu/z80_emu.nc
	$(NEOC) $< -o $@

basic_ide: basic_ide.nc
	$(NEOC) $< -o $@ -lncursesw -ltinfo

hello.c: hello.nc
	$(NEOC) -micro8 -S $<

hello.ihx: hello.c
	$(SDCC) $(SDCC_FLAGS) $< -o $@

hello.bin: hello.ihx
	$(SDOBJCOPY) -I ihex -O binary $< $@

run: all
	./z80_emu hello.ihx

ide: basic_ide
	./basic_ide

test: all hello.bin test-ide
	grep -q '^#define __NEO_MICRO8__ 1$$' hello.c
	test "$$(wc -c < hello.bin)" -eq 58
	./z80_emu hello.ihx > test.out
	grep -q '^HELLO Z80$$' test.out
	@echo "PASS minux14"

test-ide: basic_ide
	./basic_ide --quiet < tests/ide_commands.txt > ide_test.out
	grep -q '^10 PRINT "COUNT":A=10:PRINT "A=";A$$' ide_test.out
	grep -q '^COUNT$$' ide_test.out
	grep -q '^A=10$$' ide_test.out
	grep -q '^1$$' ide_test.out
	grep -q '^2$$' ide_test.out
	grep -q '^3$$' ide_test.out
	grep -q '^DONE$$' ide_test.out
	grep -q '^COMPOUND:OK$$' ide_test.out
	! grep -q '^BAD$$' ide_test.out
	! grep -q '^ALSO BAD$$' ide_test.out
	! grep -q '^IGNORED$$' ide_test.out
	LC_ALL=C grep -Fq "$$(printf '\033[?25h\033[3;5H')" ide_test.out
	test -f test_program.bas
	@echo "PASS minux14 BASIC IDE"

disasm: hello.asm
	sed -n '/_putchar::/,/\\.area[[:space:]]*_CODE/p' hello.asm

clean:
	rm -f z80_emu z80_emu.c basic_ide basic_ide.c hello.c hello.nc.i hello.asm \
		hello.bin hello.ihx hello.lk hello.lst hello.map hello.noi hello.rel \
		hello.sym test.out ide_test.out test_program.bas
