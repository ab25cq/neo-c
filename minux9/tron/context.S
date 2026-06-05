    .equ CTX_PC,   0
    .equ CTX_X0,   8
    .equ CTX_X1,   16
    .equ CTX_X2,   24
    .equ CTX_X3,   32
    .equ CTX_X4,   40
    .equ CTX_X5,   48
    .equ CTX_X6,   56
    .equ CTX_X7,   64
    .equ CTX_X8,   72
    .equ CTX_X9,   80
    .equ CTX_X10,  88
    .equ CTX_X11,  96
    .equ CTX_X12,  104
    .equ CTX_X13,  112
    .equ CTX_X14,  120
    .equ CTX_X15,  128
    .equ CTX_X16,  136
    .equ CTX_X17,  144
    .equ CTX_X18,  152
    .equ CTX_X19,  160
    .equ CTX_X20,  168
    .equ CTX_X21,  176
    .equ CTX_X22,  184
    .equ CTX_X23,  192
    .equ CTX_X24,  200
    .equ CTX_X25,  208
    .equ CTX_X26,  216
    .equ CTX_X27,  224
    .equ CTX_X28,  232
    .equ CTX_X29,  240
    .equ CTX_X30,  248
    .equ CTX_X31,  256
    .equ CTX_SIZE, 272

    .macro SAVE_CONTEXT base original_sp
    sd zero, CTX_X0(\base)
    sd ra, CTX_X1(\base)
    sd \original_sp, CTX_X2(\base)
    sd gp, CTX_X3(\base)
    sd tp, CTX_X4(\base)
    sd t0, CTX_X5(\base)
    sd t1, CTX_X6(\base)
    sd t2, CTX_X7(\base)
    sd s0, CTX_X8(\base)
    sd s1, CTX_X9(\base)
    sd a0, CTX_X10(\base)
    sd a1, CTX_X11(\base)
    sd a2, CTX_X12(\base)
    sd a3, CTX_X13(\base)
    sd a4, CTX_X14(\base)
    sd a5, CTX_X15(\base)
    sd a6, CTX_X16(\base)
    sd a7, CTX_X17(\base)
    sd s2, CTX_X18(\base)
    sd s3, CTX_X19(\base)
    sd s4, CTX_X20(\base)
    sd s5, CTX_X21(\base)
    sd s6, CTX_X22(\base)
    sd s7, CTX_X23(\base)
    sd s8, CTX_X24(\base)
    sd s9, CTX_X25(\base)
    sd s10, CTX_X26(\base)
    sd s11, CTX_X27(\base)
    sd t3, CTX_X28(\base)
    sd t4, CTX_X29(\base)
    sd t5, CTX_X30(\base)
    .endm

    .text
    .globl tk_context_switch
tk_context_switch:
    mv t5, sp
    SAVE_CONTEXT a0, t5
    sd t6, CTX_X31(a0)
    la t6, 1f
    sd t6, CTX_PC(a0)
    mv a0, a1
    j tk_context_restore
1:
    ret

    .globl tk_context_restore
tk_context_restore:
    ld t6, CTX_PC(a0)
    csrw mepc, t6
    li t6, 0x1880
    csrs mstatus, t6

    ld ra, CTX_X1(a0)
    ld gp, CTX_X3(a0)
    ld tp, CTX_X4(a0)
    ld t0, CTX_X5(a0)
    ld t1, CTX_X6(a0)
    ld t2, CTX_X7(a0)
    ld s0, CTX_X8(a0)
    ld s1, CTX_X9(a0)
    ld a1, CTX_X11(a0)
    ld a2, CTX_X12(a0)
    ld a3, CTX_X13(a0)
    ld a4, CTX_X14(a0)
    ld a5, CTX_X15(a0)
    ld a6, CTX_X16(a0)
    ld a7, CTX_X17(a0)
    ld s2, CTX_X18(a0)
    ld s3, CTX_X19(a0)
    ld s4, CTX_X20(a0)
    ld s5, CTX_X21(a0)
    ld s6, CTX_X22(a0)
    ld s7, CTX_X23(a0)
    ld s8, CTX_X24(a0)
    ld s9, CTX_X25(a0)
    ld s10, CTX_X26(a0)
    ld s11, CTX_X27(a0)
    ld t3, CTX_X28(a0)
    ld t4, CTX_X29(a0)
    ld t5, CTX_X30(a0)
    ld sp, CTX_X2(a0)
    csrw mscratch, a0
    ld a0, CTX_X10(a0)
    csrr t6, mscratch
    ld t6, CTX_X31(t6)
    mret

    .globl tk_trap_entry
tk_trap_entry:
    addi sp, sp, -CTX_SIZE
    sd t6, CTX_X31(sp)
    csrr t6, mepc
    sd t6, CTX_PC(sp)
    addi t6, sp, CTX_SIZE
    SAVE_CONTEXT sp, t6

    mv a0, sp
    call tk_timer_trap

    addi sp, sp, CTX_SIZE
    j tk_context_restore
