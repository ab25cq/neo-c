.section .text.boot
.globl _boot_entry

_boot_entry:
    li t0, 0x80000000  # Load the real start address
    jr t0              # Jump there
