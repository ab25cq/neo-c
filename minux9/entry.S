.align 6

.section .text
.globl entry
.globl stack_top

entry:
  # Initialize the BSS section
  la t0, _bss_start
  la t1, _bss_end
bss_clear:
  beq t0, t1, bss_done
  sd zero, 0(t0)
  addi t0, t0, 8
  j bss_clear
bss_done:

  la sp, stack_top
  call start

loop_here: j loop_here
