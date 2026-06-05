# μT-Kernel on riscv-emu

This directory contains a small μT-Kernel-style RTOS for the local RISC-V emulator.
It is independent from MINUX9 and boots directly as a bare-metal RISC-V ELF.

Implemented kernel services:

- task creation/start/exit
- priority-based scheduling
- timer interrupt driven preemption
- separate task stacks and full RISC-V register context switching
- task delay and sleep/wakeup
- timeout-aware waits
- semaphore wait/signal
- event flag wait/set
- priority-inheritance mutex lock/unlock
- mailbox send/receive
- variable-length message buffer send/receive
- fixed-size memory pool get/release
- cyclic handler
- UART console output

Build and run:

```sh
make -C tron run
```

Regression test:

```sh
make -C tron test
```

Expected output includes:

```text
MINUX9 riscv-emu uT-Kernel boot
preempt: timer woke high-priority task
mutex-high: acquired after inheritance
timeout: semaphore wait timed out
worker: received message buffer
hog: was preempted
uT-Kernel demo PASS
ECALL exit: 0
```
