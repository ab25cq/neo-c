# riscv-emu

RV64 emulator for MINUX9.

It implements the pieces the OS currently needs:

- RV64I/M/A/F/D/C instruction decoding paths used by the kernel and userland
- M/S/U privilege modes and the CSR subset used by MINUX9
- Sv39 address translation
- UART at `0x10000000`
- CLINT/Sstc timer support
- PLIC and legacy MMIO virtio-blk at `0x10001000`
- ELF64 `PT_LOAD` kernel loading

Build the OS from the repository root first:

```sh
make -j4
```

Then boot it through this emulator from the repository root:

```sh
make run
```

`make run` builds `./riscv-emu` from `riscv-emu-src/riscv-emu.c` and boots `kernel.elf` with `fs.img`.
The shell currently has no prompt; type a command such as `ls` and press Enter after the "user mode entered" message.

The timer is deterministic by default: one emulated `time` tick advances every 50 retired instructions. Override it with:

```sh
./riscv-emu -i kernel.elf --mem 512 --mmu sv39 --disk fs.img --timer-div 2048
```
