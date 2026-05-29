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

.PHONY: all clean run log debug debug-mac

all: kernel.elf 

crt0.o: crt0.S
	# build minimal userland crt0 that calls exit(main())
	$(CCPREFIX)gcc $(CFLAGS) -c -o crt0.o crt0.S

minux.o: minux.c
	$(CCPREFIX)gcc $(CFLAGS) -nostdlib -c -g -ffreestanding -mcmodel=medany -o minux.o minux.c

minux9.o: minux9.c
	$(CCPREFIX)gcc $(CFLAGS2) -nostdlib -c -g -ffreestanding -mcmodel=medany -o minux9.o minux9.c

kernel.elf: minux.o minux9.o crt0.o cc minux_neoc_sys.o echo_neoc.c pwd_neoc.c uname_neoc.c sleep_neoc.c cat_neoc.c mkdir_neoc.c rmdir_neoc.c touch_neoc.c ls_neoc.c pipeline_neoc.c kernel_proc_list_neoc.c main_neoc.c fs_neoc.c sh
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

#QEMU_OPTION=-machine virt -bios none -nographic -m 512M -kernel kernel.elf -nic none
QEMU?=qemu-system-riscv64
QEMU_OPTION=-machine virt -bios none -nographic -m 1024M -kernel kernel.elf -drive file=fs.img,if=none,format=raw,id=hd0 -device virtio-blk-device,drive=hd0 -nic none

run: kernel.elf 
	$(QEMU) $(QEMU_OPTION)

log: kernel.elf
	$(QEMU) $(QEMU_OPTION) -d in_asm,exec,cpu,int -D qemu.log

debug: kernel.elf
	$(QEMU) $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb-multiarch kernel.elf
	pkill -f qemu

debug-mac: kernel.elf
	$(QEMU) $(QEMU_OPTION) -S -gdb tcp::3777 &
	gdb kernel.elf
	pkill -f qemu

clean:
	$(MAKE) -C riscv64emu clean
	rm -rf kernel.bin kernel.elf core riscv-gnu-toolchain main.o start.o timervec.o trampoline.o trampolin2.s aaa aa aaaa xpack-riscv-none-elf-gcc-13.2.0-1 *.o qemu.log *.elf mkfs mkfs riscv-isa-sim/ riscv-pk fs.img fs_long.img fs_super.img *.bin cat grep echo login pwd ls mkdir rmdir sleep touch more vi toycc toyvm cc hello as ld qemu-run.log map.txt minux.o minux2.o readelf objdump hexdump nm neo-c cpp sh xsh test uname ld2 pipeline fd_blast mem_blast echo_neoc.c pwd_neoc.c uname_neoc.c sleep_neoc.c cat_neoc.c mkdir_neoc.c rmdir_neoc.c touch_neoc.c ls_neoc.c pipeline_neoc.c kernel_proc_list_neoc.c main_neoc.c fs_neoc.c sh_neoc.c *.nc.i *.c.error

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
