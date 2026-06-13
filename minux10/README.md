# minux10

This directory contains a small Raspberry Pi Pico style emulator and a minimal
uT-Kernel subset. Both primary sources are written in neo-c:

- `emu/pico_emu.nc`: host-side Pico/Cortex-M0+ emulator
- `utkernel.nc`: Cortex-M0+ uT-Kernel demo kernel

The kernel build uses `../neo-c -micro32` to generate freestanding 32-bit C with
neo-c's microcontroller runtime. The emulator does not use `-micro`.

The build uses `../neo-c` to generate C, then builds:

- `emu/pico_emu` as a host executable
- `utkernel.elf` as an ARM Cortex-M0+ freestanding ELF

## Build and Run

```sh
make
make run
make test
```

`make test` first runs the emulator peripheral self-test, then boots the
neo-c uT-Kernel ELF.

Expected run output:

```text
uT-Kernel on neo-c Pico emulator
task producer start
task producer locked mutex
task producer sent dtq
task producer allocated mpl
task producer sent mbf
task producer sent pdq
cyclic fired
alarm fired
cyclic fired
cyclic fired
task producer done
task worker start
task worker locked mutex
task worker got message
task worker got dtq
task worker released mpl
task worker received mbf
task worker received pdq priority order
task monitor start
monitor flags=0x00000003 tick=0x00000003 tid=0x00000003
monitor alarms=0x00000005 cyclic=0x00000003
monitor mutex=0x0000001e pri_changed=0x00000001
monitor mpl_score=0x00000018 free=0x00000040 max=0x00000040
monitor mbf_score=0x000000d1 free=0x00000040 count=0x00000000
monitor pdq_score=0x00000320 count=0x00000000
monitor self state=0x00000002 pri=0x00000003
uT-Kernel demo PASS
EMU exit: 0
```

## Implemented Kernel API

The current kernel is a compact single-address-space subset intended to prove
that the neo-c built kernel runs on the neo-c built Pico emulator. It implements
task create/start/exit, task priority change, a priority scheduler, semaphore,
event flag, mailbox, mutex, FIFO data queue, priority data queue,
variable-length message buffer, fixed-size memory pool, task status reference,
variable-size memory pool with free-region coalescing, delay tick accounting,
alarm handler, cyclic handler, UART output, SysTick MMIO, and emulator exit
MMIO.

The emulator loads ELF32 ARM `PT_LOAD` segments, starts from the vector table at
`0x10000000`, emulates the Thumb instructions used by this kernel, and provides
Pico-style UART MMIO at `0x40034000` plus the SysTick control, reload, and
current-value registers used by the demo kernel.

## Emulator Peripheral Compatibility

The emulator uses the RP2040 peripheral base addresses and provides basic
register behavior for SIO GPIO, IO_BANK0, PIO FIFOs, DMA memory transfers, PWM
counters, ADC conversion results, SPI and I2C loopback, USB DPRAM and control
registers, timer alarms, watchdog expiry, clocks, resets, UART, and SysTick.
Unimplemented registers in the RP2040 APB, DMA, USB, and PIO address ranges are
backed by readable and writable register storage so initialization code can be
developed incrementally.

The Cortex-M0+ system-control model includes NVIC interrupt enable, disable,
pending, clear-pending, and priority registers, plus SCB `ICSR` and `VTOR`.
RP2040 timer alarm IRQs 0 through 3 can enter a handler through the vector
table, create the standard eight-word exception frame, and return with
`EXC_RETURN`.

This is not yet a cycle-accurate Pico replacement. Nested exception preemption,
complete SysTick and peripheral IRQ routing, PIO instruction execution, USB
packet protocol, external electrical devices, dual-core execution, and exact
peripheral timing still require further work.
Run the current peripheral compatibility checks directly with:

```sh
emu/pico_emu --self-test
```
