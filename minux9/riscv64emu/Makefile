SHELL := /bin/bash

# Host compiler for the emulator
CC      ?= cc
CFLAGS  ?= -std=c11 -O2

PARENT_FS = ../fs.img
FS_IMG    = fs.img

# RISC-V cross toolchain for building the sample ELF
# Override as needed, e.g. `make RV_CC=clang run`
RV_CC   ?= riscv64-unknown-elf-gcc

# Detect clang usage to adjust flags
RV_CC_BASENAME := $(notdir $(RV_CC))
ifeq ($(findstring clang,$(RV_CC_BASENAME)),clang)
  RV_TARGET_FLAGS := --target=riscv64
  # Ensure the first PT_LOAD segment starts at 0x80000000
  RV_LDFLAGS      := -nostartfiles -nostdlib -static -Wl,-Ttext-segment=0x80000000
  RV_CFLAGS       := -march=rv64i_zicsr -mabi=lp64 -O2
else
  RV_TARGET_FLAGS :=
  # Ensure the first PT_LOAD segment starts at 0x80000000
  RV_LDFLAGS      := -nostartfiles -nostdlib -static -Wl,-Ttext-segment=0x80000000 -Wl,--no-relax
  RV_CFLAGS       := -march=rv64i_zicsr -mabi=lp64 -O2
endif

# Optional: limit steps when tracing (0 = unlimited)
STEPS ?= 0

.PHONY: all clean run run-smoke

all: rv64emu 

# Build the emulator (native)
rv64emu: rv64emu.c
	$(CC) $(CFLAGS) rv64emu.c -o $@

$(FS_IMG): $(PARENT_FS)
	cp $(PARENT_FS) $(FS_IMG)

# Run MINUX9 with MMU enabled
run: all $(FS_IMG)
	./rv64emu -i ../kernel.elf --mem 512 --mmu sv39 --disk $(FS_IMG)

clean:
	rm -f rv64emu x1_set.elf $(FS_IMG)
