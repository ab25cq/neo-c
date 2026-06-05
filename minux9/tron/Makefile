ifneq ($(shell command -v riscv64-unknown-elf-gcc 2>/dev/null),)
CCPREFIX ?= riscv64-unknown-elf-
else ifneq ($(shell command -v riscv64-linux-gnu-gcc 2>/dev/null),)
CCPREFIX ?= riscv64-linux-gnu-
else
CCPREFIX ?= riscv64-unknown-elf-
endif

HOST_CC ?= cc
RISCV_EMU ?= ../riscv-emu
RISCV_EMU_SRC ?= ../riscv-emu-src/riscv-emu.c

ARCH ?= rv64gc
ABI ?= lp64d
CFLAGS := -march=$(ARCH) -mabi=$(ABI) -mcmodel=medany -msmall-data-limit=0 \
	-ffreestanding -fno-stack-protector -fno-builtin -fno-pic -fno-pie \
	-nostdlib -static -O2 -Wall -Wextra -I.
ASFLAGS := -march=$(ARCH) -mabi=$(ABI)
LDFLAGS := -nostdlib -static -T link.ld -Wl,-e,_start -Wl,-Map=utkernel.map -Wl,--no-relax

OBJS := boot.o context.o tkernel.o main.o

.PHONY: all run test clean emu

all: utkernel.elf $(RISCV_EMU) disk.img

emu: $(RISCV_EMU)

$(RISCV_EMU): $(RISCV_EMU_SRC)
	$(HOST_CC) -std=c11 -O3 $< -o $@

utkernel.elf: $(OBJS) link.ld
	$(CCPREFIX)gcc $(CFLAGS) $(LDFLAGS) -o $@ $(OBJS) -lgcc

boot.o: boot.S
	$(CCPREFIX)gcc $(CFLAGS) -c -o $@ $<

context.o: context.S
	$(CCPREFIX)gcc $(CFLAGS) -c -o $@ $<

%.o: %.c tkernel.h
	$(CCPREFIX)gcc $(CFLAGS) -c -o $@ $<

disk.img:
	dd if=/dev/zero of=$@ bs=512 count=1

run: all
	$(RISCV_EMU) -i utkernel.elf --mem 16 --disk disk.img

test: all
	$(RISCV_EMU) -i utkernel.elf --mem 16 --disk disk.img > test.out
	grep -q "mutex-high: acquired after inheritance" test.out
	grep -q "timeout: semaphore wait timed out" test.out
	grep -q "worker: received message buffer" test.out
	grep -q "uT-Kernel demo PASS" test.out
	grep -q "ECALL exit: 0" test.out
	@echo "PASS tron/test"

clean:
	rm -f *.o *.elf *.map *.img test.out
