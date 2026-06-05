# minux10

This directory contains a small Raspberry Pi Pico style emulator and a minimal
uT-Kernel subset. Both primary sources are written in neo-c:

- `emu/pico_emu.nc`: host-side Pico/Cortex-M0+ emulator
- `utkernel.nc`: Cortex-M0+ uT-Kernel demo kernel

The kernel build uses `../neo-c -bare` to generate C with neo-c's bare libc
definitions. The emulator does not use `-bare`.

The build uses `../neo-c` to generate C, then builds:

- `emu/pico_emu` as a host executable
- `utkernel.elf` as an ARM Cortex-M0+ freestanding ELF

## Build and Run

```sh
make
make run
make test
```

Expected run output:

```text
uT-Kernel on neo-c Pico emulator
task producer start
task producer done
task worker start
task worker got message
task monitor start
monitor flags=0x00000003 tick=0x00000003 tid=0x00000003
uT-Kernel demo PASS
EMU exit: 0
```

## Implemented Kernel API

The current kernel is a compact single-address-space subset intended to prove
that the neo-c built kernel runs on the neo-c built Pico emulator. It implements
task create/start/exit, a priority scheduler, semaphore, event flag, mailbox,
delay tick accounting, UART output, and emulator exit MMIO.

The emulator loads ELF32 ARM `PT_LOAD` segments, starts from the vector table at
`0x10000000`, emulates the Thumb instructions used by this kernel, and provides
Pico-style UART MMIO at `0x40034000`.
