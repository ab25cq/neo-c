ifneq ($(shell command -v riscv64-unknown-elf-gcc 2>/dev/null),)
CCPREFIX?=riscv64-unknown-elf-
else ifneq ($(shell command -v riscv64-linux-gnu-gcc 2>/dev/null),)
CCPREFIX?=riscv64-linux-gnu-
else
CCPREFIX?=riscv64-unknown-elf-
endif
#CFLAGS=-march=rv64gc -mabi=lp64
#CHILD_CFLAGS=-I. -fno-omit-frame-pointer #-momit-leaf-frame-pointer #-mstack-alignment=16
RISCV_ARCH?=rv64gc
RISCV_ARCH2?=rv64g
ifneq ($(findstring linux-gnu,$(CCPREFIX)),)
RISCV_ABI?=lp64d
else
RISCV_ABI?=lp64
endif
CFLAGS_AS=-march=$(RISCV_ARCH) -mabi=$(RISCV_ABI)
CFLAGS=-march=$(RISCV_ARCH) -mabi=$(RISCV_ABI) -msmall-data-limit=0 -fno-pic -fno-pie -Wl,-no-pie
CFLAGS2=-march=$(RISCV_ARCH2) -mabi=$(RISCV_ABI) -msmall-data-limit=0 -fno-pic -fno-pie -Wl,-no-pie
CHILD_CFLAGS=-ffreestanding -fno-stack-protector -fno-builtin -fno-pic -fno-pie -nostdlib -mcmodel=medany -static -nostartfiles  -Wl,-e,_start -Wl,-no-pie -msmall-data-limit=0 -march=$(RISCV_ARCH) -mabi=$(RISCV_ABI) -Tuser.ld -Wno-incompatible-pointer-types minux.o
HOST_CC ?= cc
HOST_CFLAGS ?= -std=c11 -O3
RISCV_EMU ?= ./riscv-emu
RISCV_EMU_TARGET ?= riscv-emu
RISCV_EMU_OPTION ?= -i kernel.elf --mem 512 --mmu sv39 --disk fs.img
EMU_TEST_TIMEOUT ?= 12
EMU_TEST_EOF_OUT ?= .emu-test-eof.out
EMU_TEST_BASIC_OUT ?= .emu-test-basic.out
EMU_TEST_TEXT_OUT ?= .emu-test-text.out
EMU_TEST_PIPES_OUT ?= .emu-test-pipes.out
EMU_TEST_NEOC_RV_OUT ?= .emu-test-neoc-rv.out
EMU_TEST_NEOC_HELLO_OUT ?= .emu-test-neoc-hello.out
NEOC_NCC ?= $(if $(wildcard ../ncc),$(abspath ../ncc),ncc)
NEOC_RV_BUILD_DIR ?= build/neoc-rv/minux-bare
NEOC_RV_BIN ?= $(NEOC_RV_BUILD_DIR)/neo-c-rv
NEOC_RV_FS_BIN ?= neo-c
NEOC_RV_FS_HEADERS ?= neo-c.h neo-c-libc.h
NEOC_HELLO_SRC ?= neoc_hello.nc
NEOC_HELLO_SCRIPT ?= neoc_hello.sh
NEOC_PARENT_NC := $(sort $(wildcard ../src/[0-9][0-9]*.nc))
NEOC_RV_C := $(patsubst ../src/%.nc,$(NEOC_RV_BUILD_DIR)/%.c,$(NEOC_PARENT_NC))
NEOC_RV_O := $(patsubst %.c,%.o,$(NEOC_RV_C))
NEOC_RV_CFLAGS := -std=gnu11 -D__MINUX__ -D__BAREMETAL__ $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -I. -I..
QEMU ?= qemu-system-riscv64
QEMU_OPTION ?= -machine virt -bios none -nographic -m 1024M -kernel kernel.elf -drive file=fs.img,if=none,format=raw,id=hd0 -device virtio-blk-device,drive=hd0 -nic none

.PHONY: all clean run log debug debug-mac test test-eof test-basic test-text test-pipes test-neoc-rv test-neoc-hello fs-neoc-rv fs-neoc-hello

all: kernel.elf $(RISCV_EMU_TARGET)

crt0.o: crt0.S
	# build minimal userland crt0 that calls exit(main())
	$(CCPREFIX)gcc $(CFLAGS) -c -o crt0.o crt0.S

minux.o: minux.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o minux.o minux.c

minux9.o: minux9.c
	$(CCPREFIX)gcc $(CFLAGS2) -nostdlib -c -g -ffreestanding -mcmodel=medany -o minux9.o minux9.c

kernel.elf: minux.o minux9.o crt0.o cc minux_neoc_sys.o echo_neoc.c pwd_neoc.c uname_neoc.c sleep_neoc.c cat_neoc.c mkdir_neoc.c rmdir_neoc.c touch_neoc.c ls_neoc.c pipeline_neoc.c kernel_proc_list_neoc.c main_neoc.c fs_neoc.c syscall.c sh hostname.c as.c ld.c
	$(CCPREFIX)as -g $(CFLAGS_AS) -o entry.o entry.S
	$(CCPREFIX)as -g $(CFLAGS_AS) -o trap.o trap.S
	$(CCPREFIX)as -g $(CFLAGS_AS) -o userret.o userret.S
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o start.o start.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.o fs_neoc.c
	$(CCPREFIX)gcc $(CFLAGS) -S -nostdlib -c -g -ffreestanding -mcmodel=medany -o fs.S fs_neoc.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o trap_c.o trap.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o plic.o plic.c

	# build minimal userland crt0 that calls exit(main())
	$(CCPREFIX)gcc $(CFLAGS) -c -o crt0.o crt0.S

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o cat -g cat_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o sleep -g sleep_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o sleep crt0.o sleep_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o neo-c  crt0.o neo-c.c.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer 
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cpp  crt0.o cpp.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer 
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o uname -g uname_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o uname crt0.o uname_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hostname crt0.o hostname.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cat crt0.o cat_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc -S $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o b.s b.c

#	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o cc -g cc.c -mcmodel=medany $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cc crt0.o cc.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o hello -g hello.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hello crt0.o hello.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o echo -g echo_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o echo crt0.o echo_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

#	comelang -S -bare grep.c
#	$(CCPREFIX)gcc -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o grep grep.c.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o grep crt0.o grep.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o readelf crt0.o readelf.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o nm crt0.o nm.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o objdump crt0.o objdump.c $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hexdump crt0.o hexdump.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -O0 -static -o hello3.elf -g hello3.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hello3.elf crt0.o hello3.c $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -O0 -static -o hello4.elf -g hello4.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o hello4.elf crt0.o hello4.c $(CHILD_CFLAGS)


	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o ls -g ls_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o ls crt0.o ls_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o pipeline -g pipeline_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o pipeline crt0.o pipeline_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

	# mkdir user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o mkdir -g mkdir_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o mkdir crt0.o mkdir_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

	# rmdir user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o rmdir -g rmdir_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o rmdir crt0.o rmdir_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o pwd -g pwd_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o pwd crt0.o pwd_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

	# touch user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o touch -g touch_neoc.c minux_neoc_sys.o -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o touch crt0.o touch_neoc.c minux_neoc_sys.o $(CHILD_CFLAGS)

	# more user program
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o more -g more.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o more crt0.o more.c $(CHILD_CFLAGS)

	# vi user program (very minimal)
	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o vi -g vi.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o vi crt0.o vi.c $(CHILD_CFLAGS)

	# in-OS assembler and linker
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o as  crt0.o as.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer 
#	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o ld crt0.o ld.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o ld crt0.o ld.c $(CHILD_CFLAGS) -lgcc -fno-omit-frame-pointer

	# minimal in-OS C compiler: cc
#	$(CCPREFIX)gcc $(CFLAGS) -O0 -nostdlib -static -o cc -g cc.c -mcmodel=medany $(CHILD_CFLAGS)
#	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cc crt0.o cc.c $(CHILD_CFLAGS)

	gcc -o mkfs mkfs.c
	./mkfs fs.img

	dd if=/dev/zero of=fs.img bs=1k count=512
	dd if=hello of=fs.img bs=512 seek=0 conv=notrunc
	dd if=cat of=fs.img bs=512 seek=0 conv=notrunc
	dd if=echo of=fs.img bs=512 seek=0 conv=notrunc
	dd if=grep of=fs.img bs=512 seek=128 conv=notrunc
	gcc -o mkfs mkfs.c
	./mkfs fs.img

	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o main.o main_neoc.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o libc.o libc.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o syscall.o syscall.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o kernel_proc_list_neoc.o kernel_proc_list_neoc.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -O0 -g -ffreestanding -mcmodel=medany -std=gnu11 -o kernel_neoc_runtime.o kernel_neoc_runtime.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -g -O0 -T kernel.ld -Wl,-Map=map.txt -mcmodel=medany -o kernel.elf entry.o start.o userret.o trap.o fs.o plic.o trap_c.o main.o libc.o syscall.o kernel_proc_list_neoc.o kernel_neoc_runtime.o

	$(CCPREFIX)objcopy -O binary kernel.elf kernel.bin

$(RISCV_EMU_TARGET): riscv-emu-src/riscv-emu.c
	$(HOST_CC) $(HOST_CFLAGS) $< -o $@

$(NEOC_RV_BUILD_DIR):
	mkdir -p $@

$(NEOC_RV_BUILD_DIR)/%.c: ../src/%.nc ../neo-c.h ../neo-c-libc.h ../common.h | $(NEOC_RV_BUILD_DIR)
	cd $(NEOC_RV_BUILD_DIR) && $(NEOC_NCC) -I../../../.. -bare -c ../../../../src/$*.nc

$(NEOC_RV_BUILD_DIR)/%.o: $(NEOC_RV_BUILD_DIR)/%.c
	$(CCPREFIX)gcc $(NEOC_RV_CFLAGS) -c -o $@ $<

$(NEOC_RV_BUILD_DIR)/ccpp.c: ../src/ccpp.nc ../ccpp_body.h | $(NEOC_RV_BUILD_DIR)
	cd $(NEOC_RV_BUILD_DIR) && $(NEOC_NCC) -I../../../.. -c ../../../../src/ccpp.nc

$(NEOC_RV_BUILD_DIR)/ccpp.o: $(NEOC_RV_BUILD_DIR)/ccpp.c ../ccpp_body.h
	$(CCPREFIX)gcc $(NEOC_RV_CFLAGS) -DCCPP_BARE -I.. -c -o $@ $<

$(NEOC_RV_BIN): crt0.o $(NEOC_RV_O) $(NEOC_RV_BUILD_DIR)/ccpp.o user-minux9.ld
	$(CCPREFIX)gcc $(NEOC_RV_CFLAGS) -Wl,-e,_start -Wl,--allow-multiple-definition -Tuser-minux9.ld -o $@ crt0.o $(NEOC_RV_O) $(NEOC_RV_BUILD_DIR)/ccpp.o -lgcc

$(NEOC_RV_FS_BIN): $(NEOC_RV_BIN)
	cp $< $@

neo-c.h: ../neo-c.h
	cp $< $@

neo-c-libc.h: ../neo-c-libc.h
	cp $< $@

fs-neoc-rv: kernel.elf $(NEOC_RV_FS_BIN) $(NEOC_RV_FS_HEADERS)
	gcc -o mkfs mkfs.c
	./mkfs fs.img $(NEOC_RV_FS_BIN) $(NEOC_RV_FS_HEADERS)

fs-neoc-hello: kernel.elf $(NEOC_RV_FS_BIN) $(NEOC_RV_FS_HEADERS) $(NEOC_HELLO_SRC) $(NEOC_HELLO_SCRIPT)
	gcc -o mkfs mkfs.c
	./mkfs fs.img $(NEOC_RV_FS_BIN) $(NEOC_RV_FS_HEADERS) $(NEOC_HELLO_SRC) $(NEOC_HELLO_SCRIPT)

run: kernel.elf $(RISCV_EMU_TARGET)
	$(RISCV_EMU) $(RISCV_EMU_OPTION)

log: kernel.elf $(RISCV_EMU_TARGET)
	$(RISCV_EMU) $(RISCV_EMU_OPTION) --trace

test: test-eof test-basic test-text test-pipes

# Regression test procedure:
#   make test
#   make test-eof
#   make test-basic
#   make test-text
#   make test-pipes
#   make test-neoc-rv
#   make test-neoc-hello
#
# Each target boots MINUX9 on the local emulator, feeds commands to the
# guest shell, and checks the captured console output.
# EOF on stdin must make the shell exit and the emulator stop with status 0.
# timeout is only a guard for hangs.
# test-neoc-rv is heavier: it transpiles parent ../[0-9][0-9]*.nc with
# neo-c -bare, builds a RISC-V /neo-c binary, places it in fs.img, and
# checks that it starts and exits on MINUX9.
# test-neoc-hello uses /neo-c inside MINUX9 to transpile neoc_hello.nc,
# then builds it with guest cc/as/ld and runs the resulting RISC-V binary.
test-eof: kernel.elf $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_EOF_OUT)"; \
	rm -f "$$out"; \
	printf '' | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		echo 'EOF did not stop shell/emulator cleanly'; \
		exit "$$status"; \
	fi; \
	echo "PASS test-eof ($$out)"

test-basic: kernel.elf $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_BASIC_OUT)"; \
	rm -f "$$out"; \
	{ \
		printf '%s\n' 'echo aaa'; \
		printf '%s\n' 'pwd'; \
		printf '%s\n' 'hostname'; \
		printf '%s\n' 'uname'; \
		printf '%s\n' 'ls'; \
	} | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		exit "$$status"; \
	fi; \
	grep -Fx 'aaa' "$$out" >/dev/null || { cat "$$out"; echo 'missing: echo output'; exit 1; }; \
	grep -Fx '/' "$$out" >/dev/null || { cat "$$out"; echo 'missing: pwd output'; exit 1; }; \
	grep -Fx 'minux9' "$$out" >/dev/null || { cat "$$out"; echo 'missing: hostname output'; exit 1; }; \
	grep -Fx 'Minux' "$$out" >/dev/null || { cat "$$out"; echo 'missing: uname output'; exit 1; }; \
	grep -Fx 'passwd' "$$out" >/dev/null || { cat "$$out"; echo 'missing: ls passwd'; exit 1; }; \
	grep -Fx 'hostname' "$$out" >/dev/null || { cat "$$out"; echo 'missing: ls hostname'; exit 1; }; \
	echo "PASS test-basic ($$out)"

test-text: kernel.elf $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_TEXT_OUT)"; \
	rm -f "$$out"; \
	{ \
		printf '%s\n' 'grep -n root passwd'; \
		printf '%s\n' 'grep -vn root passwd'; \
		printf '%s\n' 'grep -v root passwd'; \
		printf '%s\n' 'cat -n passwd'; \
		printf '%s\n' 'echo aaa | cat -n'; \
	} | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		exit "$$status"; \
	fi; \
	grep -F '1:root:root:0:0:' "$$out" >/dev/null || { cat "$$out"; echo 'missing: grep -n root'; exit 1; }; \
	grep -F '2:user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: grep -vn root'; exit 1; }; \
	grep -Fx 'user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: grep -v root'; exit 1; }; \
	grep -F '     1  root:root:0:0:' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat -n passwd root'; exit 1; }; \
	grep -F '     2  user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat -n passwd user'; exit 1; }; \
	grep -F '     1  aaa' "$$out" >/dev/null || { cat "$$out"; echo 'missing: echo | cat -n'; exit 1; }; \
	echo "PASS test-text ($$out)"

test-pipes: kernel.elf $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_PIPES_OUT)"; \
	rm -f "$$out"; \
	for cmd in \
		'echo aaa | cat -n | grep -n aaa' \
		'cat passwd | grep root | grep -n root' \
		'cat passwd | grep user | cat -n' \
		'cat passwd | grep -v root | grep -n user' \
	; do \
		printf '%s\n' "$$cmd" | timeout $(EMU_TEST_TIMEOUT)s $(RISCV_EMU) $(RISCV_EMU_OPTION) >> "$$out" 2>&1; \
		status=$$?; \
		if [ "$$status" -ne 0 ]; then \
			cat "$$out"; \
			exit "$$status"; \
		fi; \
	done; \
	grep -F '1:     1  aaa' "$$out" >/dev/null || { cat "$$out"; echo 'missing: echo | cat -n | grep -n'; exit 1; }; \
	grep -F '1:root:root:0:0:' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat | grep root | grep -n'; exit 1; }; \
	grep -F '     1  user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat | grep | cat -n'; exit 1; }; \
	grep -F '1:user:user:1000:100:100,200' "$$out" >/dev/null || { cat "$$out"; echo 'missing: cat | grep -v | grep -n'; exit 1; }; \
	echo "PASS test-pipes ($$out)"

test-neoc-rv: fs-neoc-rv $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_NEOC_RV_OUT)"; \
	rm -f "$$out"; \
	{ \
		printf '%s\n' 'neo-c'; \
		printf '%s\n' 'echo done'; \
	} | timeout 90s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		exit "$$status"; \
	fi; \
	grep -Fx 'done' "$$out" >/dev/null || { cat "$$out"; echo 'missing: neo-c returned to shell'; exit 1; }; \
	echo "PASS test-neoc-rv ($$out)"

test-neoc-hello: fs-neoc-hello $(RISCV_EMU_TARGET)
	@out="$(EMU_TEST_NEOC_HELLO_OUT)"; \
	rm -f "$$out"; \
	{ \
		printf '%s\n' 'sh neoc_hello.sh'; \
	} | timeout 180s $(RISCV_EMU) $(RISCV_EMU_OPTION) > "$$out" 2>&1; \
	status=$$?; \
	if [ "$$status" -ne 0 ]; then \
		cat "$$out"; \
		exit "$$status"; \
	fi; \
	grep -Fx 'hello world' "$$out" >/dev/null || { cat "$$out"; echo 'missing: neoc_hello output'; exit 1; }; \
	echo "PASS test-neoc-hello ($$out)"

debug: kernel.elf
	$(QEMU) $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu

debug-mac: kernel.elf
	$(QEMU) $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb kernel.elf
	pkill -f qemu

clean:
	if [ -d riscv64emu ]; then $(MAKE) -C riscv64emu clean; fi
	if [ -d riscv-emu-src ]; then $(MAKE) -C riscv-emu-src clean; fi
	rm -rf $(RISCV_EMU_TARGET) $(EMU_TEST_EOF_OUT) $(EMU_TEST_BASIC_OUT) $(EMU_TEST_TEXT_OUT) $(EMU_TEST_PIPES_OUT) $(EMU_TEST_NEOC_RV_OUT) $(EMU_TEST_NEOC_HELLO_OUT) $(NEOC_RV_BUILD_DIR) $(NEOC_RV_FS_HEADERS) kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1 *.o qemu.log *.elf mkfs mkfs riscv-isa-sim/ riscv-pk fs.img fs_long.img fs_super.img *.bin cat grep echo login pwd ls mkdir rmdir sleep touch more vi toycc toyvm cc hello as ld qemu-run.log map.txt minux.o minux2.o readelf objdump hexdump nm neo-c cpp sh xsh test uname hostname ld2 pipeline fd_blast mem_blast echo_neoc.c pwd_neoc.c uname_neoc.c sleep_neoc.c cat_neoc.c mkdir_neoc.c rmdir_neoc.c touch_neoc.c ls_neoc.c pipeline_neoc.c kernel_proc_list_neoc.c main_neoc.c fs_neoc.c sh_neoc.c *.nc.i *.c.error

# Always (re)build the filesystem image so updated userland like pwd is included

cc: crt0.o minux.o
	$(CCPREFIX)gcc $(CFLAGS) -ffreestanding -fno-stack-protector -fno-builtin -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o cc \
		crt0.o cc.c $(CHILD_CFLAGS) -DCC_S_ONLY -lgcc -fno-omit-frame-pointer 
#	cc-codegen.c cc-parse.c cc-preprocess.c \
#		cc-tokenize.c cc-type.c cc-hashmap.c cc-string.c \
#		cc-unicode.c 

sh.elf: sh.c crt0.o minux.o
	$(CCPREFIX)gcc $(CFLAGS) -I. -nostdlib -S -O0 -static -o sh.S -g sh.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -I. -nostdlib -O0 -static -o sh.elf -I. -g sh.c -mcmodel=medany $(CHILD_CFLAGS)
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -mcmodel=medany -static -nostartfiles -Wl,-e,_start -o sh.elf crt0.o sh.c $(CHILD_CFLAGS)

sh: sh.elf
	cp sh.elf sh

sh.h: sh.elf
	xxd -i sh.elf > sh.h

echo_neoc.c: echo_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c echo_neoc.nc

pwd_neoc.c: pwd_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c pwd_neoc.nc

uname_neoc.c: uname_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c uname_neoc.nc

sleep_neoc.c: sleep_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c sleep_neoc.nc

minux_neoc_sys.o: minux_neoc_sys.c minux_neoc.h minux.h
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o minux_neoc_sys.o minux_neoc_sys.c

cat_neoc.c: cat_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c cat_neoc.nc

mkdir_neoc.c: mkdir_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c mkdir_neoc.nc

rmdir_neoc.c: rmdir_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c rmdir_neoc.nc

touch_neoc.c: touch_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c touch_neoc.nc

ls_neoc.c: ls_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c ls_neoc.nc

pipeline_neoc.c: pipeline_neoc.nc minux_neoc.h
	ncc -I/usr/local/include -I. -c pipeline_neoc.nc

kernel_proc_list_neoc.c: kernel_proc_list_neoc.nc kernel_proc_list_neoc.h
	ncc -I/usr/local/include -I. -c kernel_proc_list_neoc.nc

main_neoc.c: main.nc common.h sh.h
	cd /tmp && ncc -I/usr/local/include -I$(CURDIR) -c $(CURDIR)/main.nc
	mv /tmp/main.c $(CURDIR)/main_neoc.c

fs_neoc.c: fs.nc fs.c common.h
	cd /tmp && ncc -I/usr/local/include -I$(CURDIR) -c $(CURDIR)/fs.nc
	mv /tmp/fs.c $(CURDIR)/fs_neoc.c
