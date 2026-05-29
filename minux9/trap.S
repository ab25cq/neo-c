    .extern kernel_satp      # Import C global
    .extern user_satp        # Import C global
    .extern kernel_sp        # Import C global variable
    .extern user_sp          # Import C global variable
    .extern gCPU             # Import C global variable
    .section ".trampoline", "ax"
    .globl trapvec
    #.section .text
    .align 2
trapvec:
/*
    la t0, gCPU
    ld t0, 0(t0)        # t0 = &gCPU
    ld t0, 0(t0)        # t0 = gCPU->proc (current process)
*/
    la t0, TRAPFRAME;

    sd ra, 0(t0)
    sd sp, 8(t0)
    sd gp, 16(t0)
    sd tp, 24(t0)
/* sd t0, 32(t0) */
    sd t1, 40(t0)
    sd t2, 48(t0)
    sd t3, 56(t0)
    sd t4, 64(t0)
    sd t5, 72(t0)
    sd t6, 80(t0)
    sd a0, 88(t0)
    sd a1, 96(t0)
    sd a2, 104(t0)
    sd a3, 112(t0)
    sd a4, 120(t0)
    sd a5, 128(t0)
    sd a6, 136(t0)
    sd a7, 144(t0)
    sd s0, 152(t0)
    sd s1, 160(t0)
    sd s2, 168(t0)
    sd s3, 176(t0)
    sd s4, 184(t0)
    sd s5, 192(t0)
    sd s6, 200(t0)
    sd s7, 208(t0)
    sd s8, 216(t0)
    sd s9, 224(t0)
    sd s10, 232(t0)
    sd s11, 240(t0)

    csrr t1, sepc
    sd t1, 248(t0)
    
    csrr   t1, satp
    la     t0, user_satp
    sd     t1, 0(t0)
    
    la     t0, user_sp
    mv     t1, sp
    sd     t1, 0(t0)

    # --- First, load the kernel page table into SATP ---
    la   t0, kernel_satp     # t0 = &kernel_satp
    ld   t0, 0(t0)           # t0 = kernel_satp
    csrw satp, t0
    sfence.vma zero, zero
    
    la     t0, kernel_sp
    ld     sp, 0(t0)
                
    # From here we run with the kernel page table,
    # so puts() inside syscall_handler can dereference
    # user-space pointers via correct kernel virtual→physical translation
    # trapvec_S entrypoint
    csrr   t0, scause          # Read the S-mode cause register
    srli   t1, t0, 63          # t1 = interrupt flag (scause[63])
    beqz   t1, not_interrupt   # If flag is 0, go to synchronous exception

    li     t2, 0xfff
    and    t0, t0, t2          # t0 = scause[11:0] (interrupt number)

    li     t2, 5               # Supervisor timer interrupt = 5
    beq    t0, t2, handle_timer

    li     t2, 9               # Supervisor external interrupt = 9
    beq    t0, t2, handle_external

    # Other interrupts
    j      trap_return

    .section ".trampoline", "ax"
not_interrupt:
    # ecall from U-mode?
    li     t2, 8               # ecall from U = 8
    and    t0, t0, t2          # (scause & 0xfff) == 8 ?
    beq    t0, t2, handle_ecall

    # Any other synchronous exception
    j      trap_return

    .section ".trampoline", "ax"
handle_timer:
    call   timer_handler
    
#    csrr   t0, time
#    addi   t0, t0, 1000
#    csrw   0x14d, t0      # stimecmp CSR
    j      trap_return

    .section ".trampoline", "ax"
handle_external:
    call   external_handler
    j      trap_return
    
    
.equ PLIC_BASE,       0x0C000000
.equ PLIC_CLAIM,      PLIC_BASE + 0x201004   # hart0, claim/complete register
.equ PLIC_COMPLETE,   PLIC_BASE + 0x201004
.equ UART_PLIC_IRQ,   10                     # UART IRQ number for your environment
    .section ".trampoline", "ax"
external_handler:
    # 1) Pull the current IRQ from the PLIC
    la   t0, PLIC_CLAIM
    ld   t1, 0(t0)           # t1 = IRQ number

    # 2) Dispatch a handler based on the IRQ
    li   t2, UART_PLIC_IRQ
    beq  t1, t2, .Lhandle_uart
    # Ignore other IRQs if unsupported
    j    .Lcomplete

    .section ".trampoline", "ax"
.Lhandle_uart:
    call uart_rx_handler
    j    .Lcomplete

    .section ".trampoline", "ax"
.Lcomplete:
    # 3) Write complete back to the PLIC
    la   t0, PLIC_COMPLETE
    sd   t1, 0(t0)

    ret

    .section ".trampoline", "ax"
handle_ecall:
    call   syscall_handler

    # save the just-restored sp into user_sp for trap_return
#    la    t1, TRAPFRAME
#    ld    t2,  8(t1)        # t2 = trapframe.sp
#    la    t3, user_sp
#    sd    t2,  0(t3)    
    
    la t0, TRAPFRAME
    
/*
    la t0, gCPU
    ld t0, 0(t0)        # t0 = &gCPU
*/

    ld ra, 0(t0)
    ld sp, 8(t0)
    ld gp, 16(t0)
    ld tp, 24(t0)
/* sd t0, 32(t0) */
    ld t1, 40(t0)
    ld t2, 48(t0)
    ld t3, 56(t0)
    ld t4, 64(t0)
    ld t5, 72(t0)
    ld t6, 80(t0)
    ld a0, 88(t0) 
    ld a1, 96(t0)
    ld a2, 104(t0)
    ld a3, 112(t0)
    ld a4, 120(t0)
    ld a5, 128(t0)
    ld a6, 136(t0)
    ld a7, 144(t0)
    ld s0, 152(t0)
    ld s1, 160(t0)
    ld s2, 168(t0)
    ld s3, 176(t0)
    ld s4, 184(t0)
    ld s5, 192(t0)
    ld s6, 200(t0)
    ld s7, 208(t0)
    ld s8, 216(t0)
    ld s9, 224(t0)
    ld s10, 232(t0)
    ld s11, 240(t0)
    ld t0, 248(t0)

    csrw   sepc, t0
    csrr   t0, sepc
    addi   t0, t0, 4
    csrw   sepc, t0

    j      trap_return

   .equ STIE_BIT,   (1<<5)
   .equ SPIE_UPIE,  ((1<<4)|(1<<5))
   .equ SPP_BIT,    (1<<8)
    .section ".trampoline", "ax"
trap_return:
    # --- Reload the user SATP if needed ---
    la    t0, user_satp
    ld    t0, 0(t0)
    csrw  satp, t0
    sfence.vma zero, zero
    
    la t0, user_sp
    ld sp, 0(t0)

    # 1) Allow supervisor timer interrupts (STIE=bit5)
    li    t0, STIE_BIT
    csrs  sie, t0

    # 2) sstatus settings for sret:
    #    - Set UPIE=1, SPIE=1
    #    - Clear SPP=0 (return to U-mode)
    li    t0, SPIE_UPIE
    csrs  sstatus, t0
    li    t0, SPP_BIT
    csrc  sstatus, t0
    
/*
    # 1) Enable Supervisor timer interrupt (Sie's STIE=bit5)
    li   t0, (1<<5)
    csrs sie, t0

    # 2) Keep interrupts enabled for sret return (UPIE=1, SPIE=1)
    li   t0, ((1<<4)|(1<<5))
    csrs sstatus, t0

    # 3) Set SPP=0 to return to user mode
    li   t0, (1<<8)
    csrc sstatus, t0
*/

    # 4) Return to user mode
    sret

    # 3) Return
    sret
    
    .extern user_satp      # Import C global
.global swtch
swtch:
    ld ra, 0(a0)
    ld sp, 8(a0)
    ld gp, 16(a0)
    ld tp, 24(a0)
    sd t0, 32(a0)
    ld t1, 40(a0)
    ld t2, 48(a0)
    ld t3, 56(a0)
    ld t4, 64(a0)
    ld t5, 72(a0)
    ld t6, 80(a0)
/* ld a0, 88(a0) */
    ld a1, 96(a0)
    ld a2, 104(a0)
    ld a3, 112(a0)
    ld a4, 120(a0)
    ld a5, 128(a0)
    ld a6, 136(a0)
    ld a7, 144(a0)
    ld s0, 152(a0)
    ld s1, 160(a0)
    ld s2, 168(a0)
    ld s3, 176(a0)
    ld s4, 184(a0)
    ld s5, 192(a0)
    ld s6, 200(a0)
    ld s7, 208(a0)
    ld s8, 216(a0)
    ld s9, 224(a0)
    ld s10, 232(a0)
    ld s11, 240(a0)
    ld a0, 248(a0)
    csrw sepc, a0
    
    csrr a0, sscratch
    
    # 1) Set SATP to the user page table
    ld t0, user_satp
    csrw    satp, t0
    sfence.vma zero, zero
    
    # 2) Switch the stack to the user stack
    la t0, user_sp
    ld sp, 0(t0)

    # 3) Set sstatus.SPP=0, SPIE=1
    csrr    t0, sstatus
    li      t1,     (1<<5)       # SPIE = bit5
    or      t0, t0, t1
    li      t1,     ~(1<<8)      # clear SPP = bit8
    and     t0, t0, t1
    csrw    sstatus, t0

    # 4) Load the entry into sepc
#    csrw    sepc, a0

    # 5) Set the supervisor timer interrupt (STIE=1, SIE=1)
    li      t0, (1<<5)           # bit5 = STIE
    csrs    sie, t0
    csrr    t0, sstatus
    li      t1, (1<<1)           # bit1 = SIE
    or      t0, t0, t1
    csrw    sstatus, t0

    # 6) CLINT write for timer interrupt (MTIMECMP = MTIME + interval)
#    li      t0, CLINT_MTIME
#    ld      t1, 0(t0)            # t1 = *CLINT_MTIME
#    add     t1, t1, a3           # t1 += interval
#    li      t0, CLINT_MTIMECMP
#    sd      t1, 0(t0)

    # 7) Finally return to user mode
    sret

    .equ CLINT_MTIME,    0x0200BFF8
    .equ CLINT_MTIMECMP, 0x02004000
    .equ STIE_BIT,   (1<<5)
    .equ SPIE_UPIE,  ((1<<4)|(1<<5))
    .equ SPP_BIT,    (1<<8)
    .section ".trampoline", "ax"
.globl enter_user
enter_user:
     # a0=entry, a1=usersp, a2=usersatp, a3=interval, a4=gp

    # Switch SATP to the user page table
    csrw  satp, a2
    sfence.vma zero, zero

    # Switch stacks
    mv    sp, a1
    
    mv    gp, a4

    # Set the user entry point
    csrw  sepc, a0

        
    # Set initial argc/argv/envp for the very first user entry.
    mv    a0, zero
    mv    a1, zero
    mv    a2, zero

    # Enable supervisor timer interrupt
    li    t0, STIE_BIT
    csrs  sie, t0

    # sstatus settings for sret (UPIE, SPIE, clear SPP)
    li    t0, SPIE_UPIE
    csrs  sstatus, t0
    li    t0, SPP_BIT
    csrc  sstatus, t0

    # Enter U-mode for real
    sret
    
    .extern user_satp      # Import C global
.global swtch_debug
swtch_debug:
    ld ra, 0(a0)
    ld sp, 8(a0)
    ld gp, 16(a0)
    ld tp, 24(a0)
    sd t0, 32(a0)
    ld t1, 40(a0)
    ld t2, 48(a0)
    ld t3, 56(a0)
    ld t4, 64(a0)
    ld t5, 72(a0)
    ld t6, 80(a0)
/* ld a0, 88(a0) */
    ld a1, 96(a0)
    ld a2, 104(a0)
    ld a3, 112(a0)
    ld a4, 120(a0)
    ld a5, 128(a0)
    ld a6, 136(a0)
    ld a7, 144(a0)
    ld s0, 152(a0)
    ld s1, 160(a0)
    ld s2, 168(a0)
    ld s3, 176(a0)
    ld s4, 184(a0)
    ld s5, 192(a0)
    ld s6, 200(a0)
    ld s7, 208(a0)
    ld s8, 216(a0)
    ld s9, 224(a0)
    ld s10, 232(a0)
    ld s11, 240(a0)
    ld a0, 248(a0)
    csrw sepc, a0
    
    csrr a0, sscratch
    
    # 1) Set SATP to the user page table
    ld t0, user_satp
    csrw    satp, t0
    sfence.vma zero, zero
    
    # 2) Switch the stack to the user stack
    la t0, user_sp
    ld sp, 0(t0)

    # 3) Set sstatus.SPP=0, SPIE=1
    csrr    t0, sstatus
    li      t1,     (1<<5)       # SPIE = bit5
    or      t0, t0, t1
    li      t1,     ~(1<<8)      # clear SPP = bit8
    and     t0, t0, t1
    csrw    sstatus, t0

    # 4) Load the entry into sepc
#    csrw    sepc, a0

    # 5) Set the supervisor timer interrupt (STIE=1, SIE=1)
    li      t0, (1<<5)           # bit5 = STIE
    csrs    sie, t0
    csrr    t0, sstatus
    li      t1, (1<<1)           # bit1 = SIE
    or      t0, t0, t1
    csrw    sstatus, t0

    # 6) CLINT write for timer interrupt (MTIMECMP = MTIME + interval)
#    li      t0, CLINT_MTIME
#    ld      t1, 0(t0)            # t1 = *CLINT_MTIME
#    add     t1, t1, a3           # t1 += interval
#    li      t0, CLINT_MTIMECMP
#    sd      t1, 0(t0)

    # 7) Finally return to user mode
    sret


    .align 2
    .globl mtvec
.equ CLINT_MTIME,    0x0200BFF8
.equ CLINT_MTIMECMP, 0x02004000
.equ INTERVAL,  0xFFFFFFFFFFFFFF
mtvec:
    # --- If needed, spill scratch registers to the stack ---

    # 1) Read the current time
    csrr    t0, time           # t0 = CSR time

    # 2) Compute the next timer fire time
    li      t1, INTERVAL       # t1 = e.g., 100000
    add     t0, t0, t1         # t0 ← t0 + INTERVAL

    # 3) Write back to CLINT_MTIMECMP → clears the MTIP bit
    la      t2, CLINT_MTIMECMP # t2 = address 0x02004000
    sd      t0, 0(t2)          # *mtimecmp = next_time

    # 4) Restore scratch registers if needed ---

    mret                        # Return from trap
    
    .globl asm_memmove
asm_memmove:
    # Save the original dst into t0
    mv   t0, a0
    # If length is zero or dst == src, do nothing
    beqz a2, .exit
    beq  a0, a1, .exit

    # Overlap check: if dst > src and regions overlap, copy backward
    blt  a0, a1, .forward

    # ── backward copy ──
    # Move pointers to the end positions
    add  a0, a0, a2    # dst_end = dst + len
    add  a1, a1, a2    # src_end = src + len

.backward_loop:
    addi a0, a0, -1    # dst_end--
    addi a1, a1, -1    # src_end--
    lbu  t1, 0(a1)     # t1 = *src_end
    sb   t1, 0(a0)     # *dst_end = t1
    addi a2, a2, -1    # len--
    bnez a2, .backward_loop
    j    .exit

.forward:
    # ── forward copy ──
.forward_loop:
    lbu  t1, 0(a1)     # t1 = *src
    sb   t1, 0(a0)     # *dst = t1
    addi a1, a1, 1     # src++
    addi a0, a0, 1     # dst++
    addi a2, a2, -1    # len--
    bnez a2, .forward_loop

.exit:
    # Return the original dst
    mv   a0, t0
    ret
    
    .align 2
    .global yield
    .equ STACK_PAGES, 64
    .equ STACK_MAX, 4096 * STACK_PAGES
    .extern stack_top
    .extern yield_stack
yield:
    la t0, TRAPFRAME2;

    sd ra, 0(t0)
    sd sp, 8(t0)
    sd gp, 16(t0)
    sd tp, 24(t0)
/* sd t0, 32(t0) */
    sd t1, 40(t0)
    sd t2, 48(t0)
    sd t3, 56(t0)
    sd t4, 64(t0)
    sd t5, 72(t0)
    sd t6, 80(t0)
    sd a0, 88(t0)
    sd a1, 96(t0)
    sd a2, 104(t0)
    sd a3, 112(t0)
    sd a4, 120(t0)
    sd a5, 128(t0)
    sd a6, 136(t0)
    sd a7, 144(t0)
    sd s0, 152(t0)
    sd s1, 160(t0)
    sd s2, 168(t0)
    sd s3, 176(t0)
    sd s4, 184(t0)
    sd s5, 192(t0)
    sd s6, 200(t0)
    sd s7, 208(t0)
    sd s8, 216(t0)
    sd s9, 224(t0)
    sd s10, 232(t0)
    sd s11, 240(t0)

    csrr t1, sepc
    sd t1, 248(t0)
    
    la   a0, yield_stack   # a0 ← dst (previous stack area)
    li   t0, STACK_MAX        # t0 ← 
    la   a1, stack_top     # a1 ← &stack_top
    sub  a1, a1, t0        # a1 ← a1 - t0  （= stack_top - 
    li   a2, STACK_MAX           # a2 ← length
    jal  asm_memmove           # call memmove(dst, src, len)
    
    call kernel_yield
    
    .align 2
    .equ STACK_PAGES, 64
    .equ STACK_MAX, 4096 * STACK_PAGES
    .global yield_return
    .extern stack_top
    .extern yield_stack
yield_return:
    li   t0, STACK_MAX        # t0 ← 
    la   a0, stack_top     # a1 ← &stack_top
    sub  a0, a0, t0        # a1 ← a1 - t0  （= stack_top - 

    la   a1, yield_stack      # a1 ← src
    li   a2, STACK_MAX           # a2 ← length
    jal  asm_memmove           # call memmove(dst, src, len)
    
    la t0, TRAPFRAME2;
    
    ld ra, 0(t0)
    ld sp, 8(t0)
    ld gp, 16(t0)
    ld tp, 24(t0)
/* sd t0, 32(t0) */
    ld t1, 40(t0)
    ld t2, 48(t0)
    ld t3, 56(t0)
    ld t4, 64(t0)
    ld t5, 72(t0)
    ld t6, 80(t0)
    ld a0, 88(t0)
    ld a1, 96(t0)
    ld a2, 104(t0)
    ld a3, 112(t0)
    ld a4, 120(t0)
    ld a5, 128(t0)
    ld a6, 136(t0)
    ld a7, 144(t0)
    ld s0, 152(t0)
    ld s1, 160(t0)
    ld s2, 168(t0)
    ld s3, 176(t0)
    ld s4, 184(t0)
    ld s5, 192(t0)
    ld s6, 200(t0)
    ld s7, 208(t0)
    ld s8, 216(t0)
    ld s9, 224(t0)
    ld s10, 232(t0)
    ld s11, 240(t0)
    ld t0, 248(t0)
    csrw sepc, t0

    ret
