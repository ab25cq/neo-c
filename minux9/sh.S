	.file	"sh.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zmmul1p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.file 0 "/home/ab25cq/minux9" "sh.c"
	.align	1
	.type	s_strchr, @function
s_strchr:
.LFB0:
	.file 1 "sh.c"
	.loc 1 5 52
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sd	a0,-24(s0)
	mv	a5,a1
	sw	a5,-28(s0)
	.loc 1 6 11
	j	.L2
.L5:
	.loc 1 6 22 discriminator 4
	ld	a5,-24(s0)
	lbu	a4,0(a5)
	.loc 1 6 25 discriminator 4
	lw	a5,-28(s0)
	andi	a5,a5,0xff
	.loc 1 6 21 discriminator 4
	bne	a4,a5,.L3
	.loc 1 6 45 discriminator 1
	ld	a5,-24(s0)
	.loc 1 6 45 is_stmt 0
	j	.L4
.L3:
	.loc 1 6 49 is_stmt 1 discriminator 2
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
.L2:
	.loc 1 6 12 discriminator 3
	ld	a5,-24(s0)
	lbu	a5,0(a5)
	bne	a5,zero,.L5
	.loc 1 7 12
	li	a5,0
.L4:
	.loc 1 8 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	s_strchr, .-s_strchr
	.align	1
	.globl	xisalpha
	.type	xisalpha, @function
xisalpha:
.LFB1:
	.loc 1 15 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-33(s0)
	.loc 1 16 41
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,96
	bleu	a4,a5,.L7
	.loc 1 16 28 discriminator 1
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,122
	bleu	a4,a5,.L8
.L7:
	.loc 1 16 41 discriminator 4
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,64
	bleu	a4,a5,.L9
	.loc 1 16 54 discriminator 5
	lbu	a5,-33(s0)
	andi	a4,a5,0xff
	li	a5,90
	bgtu	a4,a5,.L9
.L8:
	.loc 1 16 41 discriminator 7
	li	a5,1
	.loc 1 16 41 is_stmt 0
	j	.L10
.L9:
	.loc 1 16 41 discriminator 8
	li	a5,0
.L10:
	.loc 1 16 9 is_stmt 1 discriminator 10
	sw	a5,-20(s0)
	.loc 1 17 12
	lw	a5,-20(s0)
	.loc 1 18 1
	mv	a0,a5
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	xisalpha, .-xisalpha
	.align	1
	.globl	xisblank
	.type	xisblank, @function
xisblank:
.LFB2:
	.loc 1 21 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 22 21
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,32
	beq	a4,a5,.L13
	.loc 1 22 21 is_stmt 0 discriminator 2
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,9
	bne	a4,a5,.L14
.L13:
	.loc 1 22 21 discriminator 3
	li	a5,1
	.loc 1 22 21
	j	.L15
.L14:
	.loc 1 22 21 discriminator 4
	li	a5,0
.L15:
	.loc 1 23 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	xisblank, .-xisblank
	.align	1
	.globl	xisdigit
	.type	xisdigit, @function
xisdigit:
.LFB3:
	.loc 1 26 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 27 22
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,47
	bleu	a4,a5,.L18
	.loc 1 27 22 is_stmt 0 discriminator 1
	lbu	a5,-17(s0)
	andi	a4,a5,0xff
	li	a5,57
	bgtu	a4,a5,.L18
	.loc 1 27 22 discriminator 3
	li	a5,1
	.loc 1 27 22
	j	.L19
.L18:
	.loc 1 27 22 discriminator 4
	li	a5,0
.L19:
	.loc 1 28 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	xisdigit, .-xisdigit
	.align	1
	.globl	xisalnum
	.type	xisalnum, @function
xisalnum:
.LFB4:
	.loc 1 31 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sb	a5,-17(s0)
	.loc 1 32 12
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisalpha
	mv	a5,a0
	.loc 1 32 24 discriminator 1
	bne	a5,zero,.L22
	.loc 1 32 27 discriminator 3
	lbu	a5,-17(s0)
	mv	a0,a5
	call	xisdigit
	mv	a5,a0
	.loc 1 32 24 discriminator 4
	beq	a5,zero,.L23
.L22:
	.loc 1 32 24 is_stmt 0 discriminator 5
	li	a5,1
	.loc 1 32 24
	j	.L24
.L23:
	.loc 1 32 24 discriminator 6
	li	a5,0
.L24:
	.loc 1 33 1 is_stmt 1
	mv	a0,a5
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	xisalnum, .-xisalnum
	.align	1
	.type	isdir, @function
isdir:
.LFB5:
	.loc 1 36 36
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
.LBB2:
	.loc 1 37 14
	ld	a5,-40(s0)
	mv	a0,a5
	li	a7,76
#APP
# 37 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE2:
	.loc 1 37 9
	sw	a5,-20(s0)
	.loc 1 38 8
	lw	a5,-20(s0)
	sext.w	a5,a5
	blt	a5,zero,.L27
.LBB3:
	.loc 1 38 20 discriminator 1
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,78
#APP
# 38 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE3:
	.loc 1 38 41 discriminator 1
	li	a5,1
	.loc 1 38 41 is_stmt 0
	j	.L28
.L27:
	.loc 1 39 12 is_stmt 1
	li	a5,0
.L28:
	.loc 1 40 1
	mv	a0,a5
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE5:
	.size	isdir, .-isdir
	.local	g_cmdline
	.comm	g_cmdline,64,8
	.data
	.align	2
	.type	g_script_fd, @object
	.size	g_script_fd, 4
g_script_fd:
	.word	-1
	.text
	.align	1
	.type	script_readline_fd, @function
script_readline_fd:
.LFB6:
	.loc 1 54 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-64(s0)
	mv	a4,a2
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 1 55 9
	sw	zero,-20(s0)
	.loc 1 57 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L30
	.loc 1 57 15 discriminator 1
	ld	a5,-64(s0)
	beq	a5,zero,.L30
	.loc 1 57 30 discriminator 2
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,1
	bgt	a4,a5,.L33
.L30:
	.loc 1 58 16
	li	a5,-1
	j	.L32
.L41:
.LBB4:
	.loc 1 62 14
	sb	zero,-37(s0)
.LBB5:
	.loc 1 63 21
	lw	a5,-52(s0)
	mv	a0,a5
	addi	a5,s0,-37
	mv	a1,a5
	li	a2,1
	li	a7,65
#APP
# 63 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-32(s0)
	ld	a5,-32(s0)
.LBE5:
	.loc 1 63 13
	sw	a5,-36(s0)
	.loc 1 65 11
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L34
	.loc 1 66 15
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L42
	.loc 1 67 24
	li	a5,-1
	j	.L32
.L34:
	.loc 1 71 11
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L38
	.loc 1 72 20
	li	a5,-1
	j	.L32
.L38:
	.loc 1 75 14
	lw	a5,-20(s0)
	addiw	a4,a5,1
	sw	a4,-20(s0)
	mv	a4,a5
	.loc 1 75 12
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 1 75 18
	lbu	a4,-37(s0)
	sb	a4,0(a5)
	.loc 1 76 15
	lbu	a5,-37(s0)
	.loc 1 76 11
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L43
.L33:
.LBE4:
	.loc 1 61 20
	lw	a5,-56(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 61 13
	lw	a4,-20(s0)
	sext.w	a4,a4
	blt	a4,a5,.L41
	j	.L40
.L42:
.LBB6:
	.loc 1 69 13
	nop
	j	.L40
.L43:
	.loc 1 77 13
	nop
.L40:
.LBE6:
	.loc 1 81 8
	lw	a5,-20(s0)
	ld	a4,-64(s0)
	add	a5,a4,a5
	.loc 1 81 12
	sb	zero,0(a5)
	.loc 1 82 12
	lw	a5,-20(s0)
.L32:
	.loc 1 83 1
	mv	a0,a5
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	script_readline_fd, .-script_readline_fd
	.align	1
	.type	normalize_line, @function
normalize_line:
.LFB7:
	.loc 1 86 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	.loc 1 90 11
	ld	a0,-40(s0)
	call	strlen
	mv	a5,a0
	sw	a5,-20(s0)
	.loc 1 91 10
	j	.L45
.L47:
	.loc 1 92 20
	lw	a5,-20(s0)
	addiw	a5,a5,-1
	sw	a5,-20(s0)
	.loc 1 92 13
	lw	a5,-20(s0)
	.loc 1 92 12
	ld	a4,-40(s0)
	add	a5,a4,a5
	.loc 1 92 20
	sb	zero,0(a5)
.L45:
	.loc 1 91 19
	lw	a5,-20(s0)
	sext.w	a5,a5
	ble	a5,zero,.L46
	.loc 1 91 30 discriminator 1
	lw	a5,-20(s0)
	addi	a5,a5,-1
	.loc 1 91 26 discriminator 1
	ld	a4,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 91 19 discriminator 1
	mv	a4,a5
	li	a5,10
	beq	a4,a5,.L47
	.loc 1 91 52 discriminator 2
	lw	a5,-20(s0)
	addi	a5,a5,-1
	.loc 1 91 48 discriminator 2
	ld	a4,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 91 42 discriminator 2
	mv	a4,a5
	li	a5,13
	beq	a4,a5,.L47
.L46:
	.loc 1 95 10
	ld	a5,-40(s0)
	sd	a5,-32(s0)
	.loc 1 96 10
	j	.L48
.L49:
	.loc 1 97 13
	ld	a5,-32(s0)
	addi	a5,a5,1
	sd	a5,-32(s0)
.L48:
	.loc 1 96 11
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 96 24
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L49
	.loc 1 96 27 discriminator 1
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 96 24 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L49
	.loc 1 99 8
	ld	a5,-32(s0)
	lbu	a5,0(a5)
	.loc 1 99 7
	mv	a4,a5
	li	a5,35
	bne	a4,a5,.L50
	.loc 1 100 16
	ld	a5,-40(s0)
	sb	zero,0(a5)
	.loc 1 105 1
	j	.L52
.L50:
	.loc 1 102 12
	ld	a4,-32(s0)
	ld	a5,-40(s0)
	beq	a4,a5,.L52
	.loc 1 103 28
	ld	a0,-32(s0)
	call	strlen
	mv	a5,a0
	.loc 1 103 41 discriminator 1
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 103 9 discriminator 1
	mv	a2,a5
	ld	a1,-32(s0)
	ld	a0,-40(s0)
	call	memmove
.L52:
	.loc 1 105 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE7:
	.size	normalize_line, .-normalize_line
	.section	.rodata
	.align	3
.LC0:
	.string	"MINUX_CMDLINE="
	.align	3
.LC1:
	.string	"REDIRECT WRITE FILE CAN'T BE OPENED"
	.text
	.align	1
	.type	exec_command_argv, @function
exec_command_argv:
.LFB8:
	.loc 1 116 1
	.cfi_startproc
	addi	sp,sp,-480
	.cfi_def_cfa_offset 480
	sd	ra,472(sp)
	sd	s0,464(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,480
	.cfi_def_cfa 8, 0
	sd	a0,-472(s0)
	mv	a5,a1
	sw	a5,-476(s0)
	.loc 1 120 9
	sw	zero,-20(s0)
	.loc 1 122 17
	lla	a5,.LC0
	sd	a5,-48(s0)
	.loc 1 124 10
	sw	zero,-24(s0)
	.loc 1 124 5
	j	.L54
.L55:
	.loc 1 125 19
	lw	a5,-24(s0)
	slli	a5,a5,5
	ld	a4,-472(s0)
	add	a4,a4,a5
	.loc 1 125 17
	lw	a3,-24(s0)
	addi	a5,s0,-304
	slli	a3,a3,3
	add	a5,a3,a5
	sd	a4,0(a5)
	.loc 1 124 35 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L54:
	.loc 1 124 23 discriminator 1
	ld	a5,-472(s0)
	lw	a5,1024(a5)
	.loc 1 124 15 discriminator 1
	lw	a4,-24(s0)
	sext.w	a4,a4
	blt	a4,a5,.L55
	.loc 1 127 13
	lw	a4,-24(s0)
	addi	a5,s0,-304
	slli	a4,a4,3
	add	a5,a4,a5
	sd	zero,0(a5)
.LBB7:
	.loc 1 129 13
	sw	zero,-28(s0)
	.loc 1 129 5
	j	.L56
.L57:
	.loc 1 130 30
	lw	a5,-28(s0)
	ld	a4,-48(s0)
	add	a4,a4,a5
	.loc 1 130 18
	lw	a5,-20(s0)
	addiw	a3,a5,1
	sw	a3,-20(s0)
	.loc 1 130 30
	lbu	a4,0(a4)
	.loc 1 130 22
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-368(a5)
	.loc 1 129 30 discriminator 3
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L56:
	.loc 1 129 24 discriminator 1
	lw	a5,-28(s0)
	ld	a4,-48(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 129 18 discriminator 1
	bne	a5,zero,.L57
.LBE7:
.LBB8:
	.loc 1 132 13
	sw	zero,-32(s0)
	.loc 1 132 5
	j	.L58
.L60:
	.loc 1 133 18
	lw	a5,-20(s0)
	addiw	a4,a5,1
	sw	a4,-20(s0)
	.loc 1 133 33
	lla	a3,g_cmdline
	lw	a4,-32(s0)
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 1 133 22
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-368(a5)
	.loc 1 132 63 discriminator 4
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
.L58:
	.loc 1 132 27 discriminator 1
	lla	a4,g_cmdline
	lw	a5,-32(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 132 31 discriminator 1
	beq	a5,zero,.L59
	.loc 1 132 31 is_stmt 0 discriminator 3
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,78
	ble	a4,a5,.L60
.L59:
.LBE8:
	.loc 1 135 16 is_stmt 1
	lw	a5,-20(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-368(a5)
	.loc 1 136 13
	addi	a5,s0,-384
	sd	a5,-400(s0)
	.loc 1 137 13
	sd	zero,-392(s0)
	.loc 1 139 30
	ld	a5,-472(s0)
	lbu	a5,1028(a5)
	.loc 1 139 7
	beq	a5,zero,.L61
.LBB9:
	.loc 1 141 19
	ld	a5,-472(s0)
	lw	a5,1060(a5)
	.loc 1 141 11
	beq	a5,zero,.L62
.LBB10:
	.loc 1 142 18
	ld	a5,-472(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a5,4096
	addi	a1,a5,-1535
	li	a2,420
	li	a7,66
#APP
# 142 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE10:
	.loc 1 142 16
	sw	a5,-36(s0)
	j	.L63
.L62:
.LBB11:
	.loc 1 145 18
	ld	a5,-472(s0)
	addi	a5,a5,1028
	mv	a0,a5
	li	a1,1537
	li	a2,420
	li	a7,66
#APP
# 145 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE11:
	.loc 1 145 16
	sw	a5,-36(s0)
.L63:
	.loc 1 148 11
	lw	a5,-36(s0)
	sext.w	a5,a5
	bge	a5,zero,.L64
	.loc 1 149 13
	lla	a0,.LC1
	call	puts
	.loc 1 150 13
	li	a0,1
	call	exit
.L64:
.LBB12:
	.loc 1 153 9
	lw	a5,-36(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
#APP
# 153 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE12:
.LBB13:
	.loc 1 154 9
	lw	a5,-36(s0)
	mv	a0,a5
	li	a7,67
#APP
# 154 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L61:
.LBE13:
.LBE9:
	.loc 1 157 7
	lw	a5,-476(s0)
	sext.w	a5,a5
	beq	a5,zero,.L65
.LBB14:
	.loc 1 158 9
	ld	a5,-304(s0)
	mv	a0,a5
	addi	a5,s0,-304
	mv	a1,a5
	addi	a5,s0,-400
	mv	a2,a5
	li	a7,199
#APP
# 158 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE14:
	j	.L66
.L65:
.LBB15:
	.loc 1 161 9
	ld	a5,-304(s0)
	mv	a0,a5
	addi	a5,s0,-304
	mv	a1,a5
	addi	a5,s0,-400
	mv	a2,a5
	li	a7,100
#APP
# 161 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L66:
.LBE15:
	.loc 1 163 12
	ld	a5,-304(s0)
	.loc 1 163 7
	beq	a5,zero,.L67
	.loc 1 163 23 discriminator 1
	ld	a5,-304(s0)
	.loc 1 163 26 discriminator 1
	lbu	a5,0(a5)
	.loc 1 163 16 discriminator 1
	beq	a5,zero,.L67
	.loc 1 163 47 discriminator 2
	ld	a5,-304(s0)
	.loc 1 163 34 discriminator 2
	li	a1,47
	mv	a0,a5
	call	s_strchr
	mv	a5,a0
	.loc 1 163 30 discriminator 3
	bne	a5,zero,.L67
.LBB16:
	.loc 1 165 13
	sw	zero,-40(s0)
	.loc 1 167 17
	li	a5,47
	sb	a5,-464(s0)
	.loc 1 168 14
	j	.L68
.L70:
	.loc 1 169 29
	ld	a4,-304(s0)
	.loc 1 169 32
	lw	a5,-40(s0)
	add	a4,a4,a5
	.loc 1 169 19
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 169 32
	lbu	a4,0(a4)
	.loc 1 169 23
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-448(a5)
	.loc 1 170 14
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sw	a5,-40(s0)
.L68:
	.loc 1 168 19
	ld	a4,-304(s0)
	.loc 1 168 22
	lw	a5,-40(s0)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 168 26
	beq	a5,zero,.L69
	.loc 1 168 26 is_stmt 0 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,61
	ble	a4,a5,.L70
.L69:
	.loc 1 172 15 is_stmt 1
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 172 19
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-448(a5)
	.loc 1 173 17
	addi	a5,s0,-464
	sd	a5,-304(s0)
	.loc 1 175 11
	lw	a5,-476(s0)
	sext.w	a5,a5
	beq	a5,zero,.L71
.LBB17:
	.loc 1 176 13
	ld	a5,-304(s0)
	mv	a0,a5
	addi	a5,s0,-304
	mv	a1,a5
	addi	a5,s0,-400
	mv	a2,a5
	li	a7,199
#APP
# 176 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE17:
	j	.L67
.L71:
.LBB18:
	.loc 1 179 13
	ld	a5,-304(s0)
	mv	a0,a5
	addi	a5,s0,-304
	mv	a1,a5
	addi	a5,s0,-400
	mv	a2,a5
	li	a7,100
#APP
# 179 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.L67:
.LBE18:
.LBE16:
	.loc 1 183 5
	li	a0,126
	call	exit
	.loc 1 184 1
	nop
	ld	ra,472(sp)
	.cfi_restore 1
	ld	s0,464(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 480
	addi	sp,sp,480
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	exec_command_argv, .-exec_command_argv
	.align	1
	.globl	run_command
	.type	run_command, @function
run_command:
.LFB9:
	.loc 1 187 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-80(s0)
	sw	a5,-68(s0)
	mv	a5,a2
	sw	a5,-72(s0)
	mv	a5,a3
	sw	a5,-84(s0)
	mv	a5,a4
	sw	a5,-88(s0)
	.loc 1 188 9
	sw	zero,-56(s0)
	sw	zero,-52(s0)
	.loc 1 190 41
	lw	a4,-68(s0)
	li	a5,1064
	mul	a5,a4,a5
	.loc 1 190 22
	ld	a4,-80(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
	.loc 1 192 25
	lw	a5,-72(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 192 7
	lw	a4,-68(s0)
	sext.w	a4,a4
	bne	a4,a5,.L74
	.loc 1 193 24
	lla	a5,g_script_fd
	lw	a5,0(a5)
	.loc 1 193 11
	blt	a5,zero,.L75
.LBB19:
	.loc 1 194 13
	lla	a5,g_script_fd
	lw	a5,0(a5)
	mv	a0,a5
	li	a7,67
#APP
# 194 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE19:
	.loc 1 195 25
	lla	a5,g_script_fd
	li	a4,-1
	sw	a4,0(a5)
.L75:
	.loc 1 197 11
	lw	a5,-88(s0)
	sext.w	a5,a5
	blt	a5,zero,.L76
.LBB20:
	.loc 1 198 13
	li	a0,0
	lw	a5,-88(s0)
	mv	a1,a5
	li	a7,103
#APP
# 198 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-48(s0)
.L76:
.LBE20:
	.loc 1 200 9
	lw	a5,-84(s0)
	mv	a1,a5
	ld	a0,-24(s0)
	call	exec_command_argv
	j	.L77
.L74:
.LBB21:
.LBB22:
	.loc 1 203 9
	addi	a5,s0,-56
	mv	a0,a5
	li	a7,73
#APP
# 203 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE22:
.LBB23:
	.loc 1 205 19
	li	a7,68
#APP
# 205 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
.LBE23:
	.loc 1 205 13
	sw	a5,-28(s0)
	.loc 1 207 11
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L78
.LBB24:
	.loc 1 208 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
#APP
# 208 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE24:
.LBB25:
	.loc 1 209 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a1,0
	li	a7,72
#APP
# 209 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE25:
.LBB26:
	.loc 1 210 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
#APP
# 210 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE26:
	.loc 1 211 13
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	lw	a4,-88(s0)
	lw	a3,-84(s0)
	lw	a2,-72(s0)
	ld	a1,-80(s0)
	mv	a0,a5
	call	run_command
	j	.L77
.L78:
	.loc 1 214 28
	lla	a5,g_script_fd
	lw	a5,0(a5)
	.loc 1 214 15
	blt	a5,zero,.L79
.LBB27:
	.loc 1 215 17
	lla	a5,g_script_fd
	lw	a5,0(a5)
	mv	a0,a5
	li	a7,67
#APP
# 215 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE27:
	.loc 1 216 29
	lla	a5,g_script_fd
	li	a4,-1
	sw	a4,0(a5)
.L79:
	.loc 1 218 15
	lw	a5,-88(s0)
	sext.w	a5,a5
	blt	a5,zero,.L80
.LBB28:
	.loc 1 219 17
	li	a0,0
	lw	a5,-88(s0)
	mv	a1,a5
	li	a7,103
#APP
# 219 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-40(s0)
.L80:
.LBE28:
.LBB29:
	.loc 1 221 13
	lw	a5,-56(s0)
	mv	a0,a5
	li	a7,67
#APP
# 221 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE29:
.LBB30:
	.loc 1 222 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a1,1
	li	a7,72
#APP
# 222 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE30:
.LBB31:
	.loc 1 223 13
	lw	a5,-52(s0)
	mv	a0,a5
	li	a7,67
#APP
# 223 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE31:
	.loc 1 225 13
	lw	a5,-84(s0)
	mv	a1,a5
	ld	a0,-24(s0)
	call	exec_command_argv
.L77:
.LBE21:
	.loc 1 229 12
	li	a5,1
	.loc 1 230 1
	mv	a0,a5
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE9:
	.size	run_command, .-run_command
	.section	.rodata
	.align	3
.LC2:
	.string	"ARG NUM ERROR"
	.align	3
.LC3:
	.string	"ERR MAX COMMAND"
	.align	3
.LC4:
	.string	"FILE NAME IS TOO LONG"
	.align	3
.LC5:
	.string	"ERR ARG NUM"
	.align	3
.LC6:
	.string	"cd"
	.align	3
.LC7:
	.string	"/"
	.align	3
.LC8:
	.string	"cd: failed\n"
	.align	3
.LC9:
	.string	"sh"
	.align	3
.LC10:
	.string	"/sh"
	.align	3
.LC11:
	.string	"-c"
	.align	3
.LC12:
	.string	"=> %d\r\n"
	.text
	.align	1
	.type	eval_line, @function
eval_line:
.LFB10:
	.loc 1 233 1
	.cfi_startproc
	addi	sp,sp,-784
	.cfi_def_cfa_offset 784
	sd	ra,776(sp)
	sd	s0,768(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,784
	.cfi_def_cfa 8, 0
	li	t0,-16384
	add	sp,sp,t0
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sd	a0,-760(a5)
	mv	a4,a1
	mv	a3,a2
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	a4,-764(a5)
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a4,a3
	sw	a4,-768(a5)
	.loc 1 241 9
	sw	zero,-44(s0)
	.loc 1 242 11
	j	.L83
.L85:
	.loc 1 243 28
	lw	a5,-44(s0)
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-760(a4)
	add	a5,a4,a5
	lbu	a4,0(a5)
	.loc 1 243 23
	lla	a3,g_cmdline
	lw	a5,-44(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 1 244 11
	lw	a5,-44(s0)
	addiw	a5,a5,1
	sw	a5,-44(s0)
.L83:
	.loc 1 242 15
	lw	a5,-44(s0)
	li	a4,-16384
	addi	a4,a4,-16
	add	a4,a4,s0
	ld	a4,-760(a4)
	add	a5,a4,a5
	lbu	a5,0(a5)
	.loc 1 242 20
	beq	a5,zero,.L84
	.loc 1 242 20 is_stmt 0 discriminator 1
	lw	a5,-44(s0)
	sext.w	a4,a5
	li	a5,62
	ble	a4,a5,.L85
.L84:
	.loc 1 246 19 is_stmt 1
	lla	a4,g_cmdline
	lw	a5,-44(s0)
	add	a5,a4,a5
	sb	zero,0(a5)
	.loc 1 248 11
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	ld	a5,-760(a5)
	lbu	a5,0(a5)
	.loc 1 248 7
	bne	a5,zero,.L86
	.loc 1 249 16
	li	a5,0
	j	.L137
.L86:
	.loc 1 252 18
	sw	zero,-28(s0)
	.loc 1 253 13
	sw	zero,-32(s0)
	.loc 1 254 7
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	ld	a5,-760(a5)
	sd	a5,-40(s0)
	.loc 1 255 7
	sd	zero,-24(s0)
	.loc 1 257 45
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,284(a5)
.L119:
	.loc 1 260 12
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 260 11
	mv	a4,a5
	li	a5,124
	bne	a4,a5,.L88
	.loc 1 261 15
	ld	a5,-24(s0)
	ble	a5,zero,.L89
	.loc 1 262 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-744(a5)
	.loc 1 263 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 264 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L89
	.loc 1 265 21
	lla	a0,.LC2
	call	puts
	.loc 1 266 21
	j	.L90
.L89:
	.loc 1 269 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 270 18
	j	.L91
.L92:
	.loc 1 271 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L91:
	.loc 1 270 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 270 29
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L92
	.loc 1 270 32 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 270 29 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L92
	.loc 1 273 44
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,280(a5)
	.loc 1 275 25
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 276 15
	sd	zero,-24(s0)
	.loc 1 277 21
	sw	zero,-32(s0)
	.loc 1 278 53
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sb	zero,284(a5)
	.loc 1 280 15
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,15
	ble	a4,a5,.L119
	.loc 1 281 17
	lla	a0,.LC3
	call	puts
	.loc 1 282 17
	j	.L90
.L88:
	.loc 1 285 17
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 285 16
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L94
	.loc 1 285 33 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 285 30 discriminator 1
	lbu	a5,0(a5)
	.loc 1 285 27 discriminator 1
	mv	a4,a5
	li	a5,62
	beq	a4,a5,.L94
.LBB32:
	.loc 1 286 15
	ld	a5,-24(s0)
	ble	a5,zero,.L95
	.loc 1 287 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-744(a5)
	.loc 1 288 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 289 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L96
	.loc 1 290 21
	lla	a0,.LC2
	call	puts
	.loc 1 291 21
	j	.L90
.L96:
	.loc 1 293 19
	sd	zero,-24(s0)
.L95:
	.loc 1 295 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 296 18
	j	.L97
.L98:
	.loc 1 297 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L97:
	.loc 1 296 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 296 29
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L98
	.loc 1 296 32 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 296 29 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L98
	.loc 1 300 17
	sw	zero,-48(s0)
	.loc 1 301 18
	j	.L99
.L100:
	.loc 1 302 63
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 302 55
	lw	a4,-48(s0)
	addiw	a3,a4,1
	sw	a3,-48(s0)
	.loc 1 302 61
	lbu	a3,0(a5)
	.loc 1 302 59
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,284(a5)
	.loc 1 304 19
	lw	a5,-48(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L99
	.loc 1 305 21
	lla	a0,.LC4
	call	puts
	.loc 1 306 21
	li	a0,2
	call	exit
.L99:
	.loc 1 301 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 301 71 discriminator 1
	bne	a5,zero,.L100
	.loc 1 301 35 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 301 32 discriminator 2
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L100
	.loc 1 301 48 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 301 45 discriminator 3
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L100
	.loc 1 301 61 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 301 58 discriminator 4
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L100
	.loc 1 301 74 discriminator 5
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 301 71 discriminator 5
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L100
	.loc 1 309 53
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-48(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,284(a5)
	.loc 1 310 52
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	sw	zero,316(a5)
	.loc 1 312 18
	j	.L101
.L102:
	.loc 1 313 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L101:
	.loc 1 312 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 312 29
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L102
	.loc 1 312 32 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 312 29 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L102
.LBE32:
	.loc 1 285 45
	j	.L93
.L94:
	.loc 1 316 17
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 316 16
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L103
	.loc 1 316 33 discriminator 1
	ld	a5,-40(s0)
	addi	a5,a5,1
	.loc 1 316 30 discriminator 1
	lbu	a5,0(a5)
	.loc 1 316 27 discriminator 1
	mv	a4,a5
	li	a5,62
	bne	a4,a5,.L103
.LBB33:
	.loc 1 317 15
	ld	a5,-24(s0)
	ble	a5,zero,.L104
	.loc 1 318 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-744(a5)
	.loc 1 319 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 320 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L105
	.loc 1 321 21
	lla	a0,.LC2
	call	puts
	.loc 1 322 21
	j	.L90
.L105:
	.loc 1 324 19
	sd	zero,-24(s0)
.L104:
	.loc 1 326 15
	ld	a5,-40(s0)
	addi	a5,a5,2
	sd	a5,-40(s0)
	.loc 1 327 18
	j	.L106
.L107:
	.loc 1 328 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L106:
	.loc 1 327 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 327 29
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L107
	.loc 1 327 32 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 327 29 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L107
	.loc 1 331 17
	sw	zero,-52(s0)
	.loc 1 332 18
	j	.L108
.L109:
	.loc 1 333 63
	ld	a5,-40(s0)
	addi	a4,a5,1
	sd	a4,-40(s0)
	.loc 1 333 55
	lw	a4,-52(s0)
	addiw	a3,a4,1
	sw	a3,-52(s0)
	.loc 1 333 61
	lbu	a3,0(a5)
	.loc 1 333 59
	li	a5,-16384
	addi	a5,a5,-16
	add	a2,a5,s0
	lw	a1,-28(s0)
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a5,a5,a4
	sb	a3,284(a5)
	.loc 1 335 19
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,32
	ble	a4,a5,.L108
	.loc 1 336 21
	lla	a0,.LC4
	call	puts
	.loc 1 337 21
	li	a0,2
	call	exit
.L108:
	.loc 1 332 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	mv	a0,a5
	call	xisalnum
	mv	a5,a0
	.loc 1 332 71 discriminator 1
	bne	a5,zero,.L109
	.loc 1 332 35 discriminator 2
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 332 32 discriminator 2
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L109
	.loc 1 332 48 discriminator 3
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 332 45 discriminator 3
	mv	a4,a5
	li	a5,95
	beq	a4,a5,.L109
	.loc 1 332 61 discriminator 4
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 332 58 discriminator 4
	mv	a4,a5
	li	a5,45
	beq	a4,a5,.L109
	.loc 1 332 74 discriminator 5
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 332 71 discriminator 5
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L109
	.loc 1 340 53
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a4,-52(s0)
	lw	a2,-28(s0)
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a5,a5,a4
	sb	zero,284(a5)
	.loc 1 341 52
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	li	a4,1
	sw	a4,316(a5)
	.loc 1 343 18
	j	.L110
.L111:
	.loc 1 344 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L110:
	.loc 1 343 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 343 29
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L111
	.loc 1 343 32 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 343 29 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L111
.LBE33:
	.loc 1 316 45
	j	.L93
.L103:
	.loc 1 347 17
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 347 16
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L114
	.loc 1 347 30 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 347 27 discriminator 1
	mv	a4,a5
	li	a5,9
	bne	a4,a5,.L113
	.loc 1 348 18
	j	.L114
.L115:
	.loc 1 349 18
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L114:
	.loc 1 348 19
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 348 29
	mv	a4,a5
	li	a5,32
	beq	a4,a5,.L115
	.loc 1 348 32 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 348 29 discriminator 1
	mv	a4,a5
	li	a5,9
	beq	a4,a5,.L115
	.loc 1 351 15
	ld	a5,-24(s0)
	ble	a5,zero,.L138
	.loc 1 352 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-744(a5)
	.loc 1 353 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 354 19
	sd	zero,-24(s0)
	.loc 1 355 19
	lw	a5,-32(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L138
	.loc 1 356 21
	lla	a0,.LC2
	call	puts
	.loc 1 357 21
	j	.L90
.L113:
	.loc 1 361 17
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 361 16
	bne	a5,zero,.L117
	.loc 1 362 16
	ld	a5,-24(s0)
	ble	a5,zero,.L118
	.loc 1 363 57
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a5,-32(s0)
	lw	a2,-28(s0)
	slli	a3,a5,5
	li	a5,1064
	mul	a5,a2,a5
	add	a5,a3,a5
	add	a4,a4,a5
	ld	a5,-24(s0)
	add	a5,a4,a5
	sb	zero,-744(a5)
	.loc 1 364 24
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sw	a5,-32(s0)
	.loc 1 365 19
	sd	zero,-24(s0)
.L118:
	.loc 1 368 44
	li	a5,-16384
	addi	a5,a5,-16
	add	a4,a5,s0
	lw	a3,-28(s0)
	li	a5,1064
	mul	a5,a3,a5
	add	a5,a4,a5
	lw	a4,-32(s0)
	sw	a4,280(a5)
	.loc 1 369 25
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
	.loc 1 370 13
	j	.L90
.L117:
	.loc 1 373 55
	ld	a5,-40(s0)
	lbu	a4,0(a5)
	.loc 1 373 53
	li	a5,-16384
	addi	a5,a5,-16
	add	a3,a5,s0
	lw	a5,-32(s0)
	lw	a1,-28(s0)
	slli	a2,a5,5
	li	a5,1064
	mul	a5,a1,a5
	add	a5,a2,a5
	add	a3,a3,a5
	ld	a5,-24(s0)
	add	a5,a3,a5
	sb	a4,-744(a5)
	.loc 1 374 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
	.loc 1 375 14
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	.loc 1 377 15
	ld	a4,-24(s0)
	li	a5,31
	ble	a4,a5,.L119
	.loc 1 378 17
	lla	a0,.LC5
	call	puts
	.loc 1 379 17
	j	.L90
.L138:
	.loc 1 351 15
	nop
.L93:
	.loc 1 260 11
	j	.L119
.L90:
	.loc 1 384 8
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L120
	.loc 1 384 41 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,280(a5)
	.loc 1 384 27 discriminator 1
	ble	a5,zero,.L120
	.loc 1 384 58 discriminator 2
	li	a5,-16384
	addi	a5,a5,-744
	addi	a5,a5,-16
	add	a5,a5,s0
	lla	a1,.LC6
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 384 55 discriminator 3
	bne	a5,zero,.L120
.LBB34:
	.loc 1 385 21
	lla	a5,.LC7
	sd	a5,-64(s0)
	.loc 1 386 24
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,280(a5)
	.loc 1 386 12
	li	a5,1
	ble	a4,a5,.L121
	.loc 1 386 60 discriminator 1
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-712(a5)
	.loc 1 386 38 discriminator 1
	beq	a5,zero,.L121
	.loc 1 387 20
	li	a5,-16384
	addi	a5,a5,-744
	addi	a5,a5,-16
	add	a5,a5,s0
	addi	a5,a5,32
	sd	a5,-64(s0)
.L121:
.LBB35:
	.loc 1 389 13
	ld	a5,-64(s0)
	mv	a0,a5
	li	a7,80
#APP
# 389 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE35:
	.loc 1 389 12
	bge	a5,zero,.L122
	.loc 1 390 13
	lla	a0,.LC8
	call	puts
.L122:
	.loc 1 392 16
	li	a5,0
	j	.L137
.L120:
.LBE34:
.LBB36:
	.loc 1 396 13
	li	a5,-1
	sw	a5,-68(s0)
	.loc 1 402 13
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L123
	.loc 1 399 27
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,280(a5)
	.loc 1 399 13
	li	a5,1
	ble	a4,a5,.L123
	.loc 1 400 17
	li	a5,-16384
	addi	a5,a5,-744
	addi	a5,a5,-16
	add	a5,a5,s0
	lla	a1,.LC9
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 400 13 discriminator 1
	beq	a5,zero,.L124
	.loc 1 401 20
	li	a5,-16384
	addi	a5,a5,-744
	addi	a5,a5,-16
	add	a5,a5,s0
	lla	a1,.LC10
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 401 17 discriminator 1
	bne	a5,zero,.L123
.L124:
	.loc 1 402 16
	li	a5,-16384
	addi	a5,a5,-744
	addi	a5,a5,-16
	add	a5,a5,s0
	addi	a5,a5,32
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 402 13 discriminator 2
	beq	a5,zero,.L123
	.loc 1 402 13 is_stmt 0 discriminator 3
	li	a5,1
	.loc 1 402 13
	j	.L125
.L123:
	.loc 1 402 13 discriminator 4
	li	a5,0
.L125:
	.loc 1 397 13 is_stmt 1
	sw	a5,-84(s0)
	.loc 1 403 11
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-768(a5)
	sext.w	a5,a5
	beq	a5,zero,.L126
.LBB37:
	.loc 1 404 26
	li	a7,105
#APP
# 404 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a5,-96(s0)
	ld	a5,-96(s0)
.LBE37:
	.loc 1 404 24
	sw	a5,-68(s0)
.LBB38:
	.loc 1 405 13
	li	a0,0
	lw	a5,-68(s0)
	mv	a1,a5
	li	a7,103
#APP
# 405 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-104(s0)
.L126:
.LBE38:
.LBB39:
	.loc 1 408 15
	li	a7,68
#APP
# 408 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
.LBE39:
	.loc 1 408 13
	sw	a5,-108(s0)
	.loc 1 410 11
	lw	a5,-108(s0)
	sext.w	a5,a5
	bne	a5,zero,.L127
	.loc 1 411 15
	lw	a5,-68(s0)
	sext.w	a5,a5
	blt	a5,zero,.L128
.LBB40:
	.loc 1 412 17
	li	a0,0
	lw	a5,-68(s0)
	mv	a1,a5
	li	a7,103
#APP
# 412 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	sd	a0,-120(s0)
.L128:
.LBE40:
	.loc 1 414 13
	lw	a4,-68(s0)
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a3,-764(a5)
	lw	a2,-28(s0)
	li	a5,-16384
	addi	a5,a5,-744
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a1,a5
	li	a0,0
	call	run_command
	j	.L129
.L127:
.LBB41:
	.loc 1 417 47
	lw	a5,-84(s0)
	sext.w	a5,a5
	bne	a5,zero,.L130
	.loc 1 417 17 discriminator 1
	lw	a5,-28(s0)
	sw	a5,-72(s0)
	j	.L131
.L130:
	.loc 1 417 17 is_stmt 0 discriminator 2
	li	a5,1
	sw	a5,-72(s0)
.L131:
.LBB42:
	.loc 1 418 21 is_stmt 1
	sw	zero,-76(s0)
	.loc 1 418 13
	j	.L132
.L136:
.LBB43:
	.loc 1 421 19
	lw	a5,-84(s0)
	sext.w	a5,a5
	beq	a5,zero,.L133
.LBB44:
	.loc 1 422 34
	li	a5,-16384
	addi	a5,a5,-748
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a0,a5
	li	a7,211
#APP
# 422 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE44:
	.loc 1 422 32
	sw	a5,-80(s0)
	j	.L134
.L133:
.LBB45:
	.loc 1 425 34
	li	a5,-16384
	addi	a5,a5,-748
	addi	a5,a5,-16
	add	a5,a5,s0
	mv	a0,a5
	li	a7,71
#APP
# 425 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE45:
	.loc 1 425 32
	sw	a5,-80(s0)
.L134:
	.loc 1 427 19
	lw	a5,-80(s0)
	sext.w	a5,a5
	blt	a5,zero,.L139
	.loc 1 430 17
	li	a5,-16384
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-748(a5)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
.LBE43:
	.loc 1 418 36 discriminator 2
	lw	a5,-76(s0)
	addiw	a5,a5,1
	sw	a5,-76(s0)
.L132:
	.loc 1 418 27 discriminator 1
	lw	a5,-76(s0)
	mv	a4,a5
	lw	a5,-72(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L136
	j	.L129
.L139:
.LBB46:
	.loc 1 428 21
	nop
.L129:
.LBE46:
.LBE42:
.LBE41:
.LBE36:
	.loc 1 435 12
	li	a5,0
.L137:
	.loc 1 436 1
	mv	a0,a5
	li	t0,16384
	add	sp,sp,t0
	.cfi_def_cfa 2, 784
	ld	ra,776(sp)
	.cfi_restore 1
	ld	s0,768(sp)
	.cfi_restore 8
	addi	sp,sp,784
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE10:
	.size	eval_line, .-eval_line
	.section	.rodata
	.align	3
.LC13:
	.string	" "
	.align	3
.LC14:
	.string	"sh: can't open %s\r\n"
	.align	3
.LC15:
	.string	"$ "
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
.LFB11:
	.loc 1 438 33
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-208(s0)
	sw	a5,-196(s0)
	.loc 1 441 9
	li	a5,-1
	sw	a5,-20(s0)
	.loc 1 445 12
	sb	zero,-120(s0)
	.loc 1 447 9
	sw	zero,-28(s0)
	.loc 1 448 9
	sw	zero,-32(s0)
	.loc 1 449 17
	sd	zero,-40(s0)
	.loc 1 450 10
	li	a5,1
	sw	a5,-24(s0)
	.loc 1 450 5
	j	.L141
.L145:
	.loc 1 451 23
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-208(s0)
	add	a5,a4,a5
	.loc 1 451 12
	ld	a5,0(a5)
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 451 11 discriminator 1
	bne	a5,zero,.L142
	.loc 1 452 22
	li	a5,1
	sw	a5,-28(s0)
	j	.L143
.L142:
	.loc 1 454 16
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L144
	.loc 1 455 30
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-208(s0)
	add	a5,a4,a5
	.loc 1 455 13
	ld	a4,0(a5)
	addi	a5,s0,-120
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncat
	.loc 1 456 13
	addi	a5,s0,-120
	li	a2,64
	lla	a1,.LC13
	mv	a0,a5
	call	strncat
	j	.L143
.L144:
	.loc 1 458 16
	ld	a5,-40(s0)
	bne	a5,zero,.L143
	.loc 1 459 31
	lw	a5,-24(s0)
	slli	a5,a5,3
	ld	a4,-208(s0)
	add	a5,a4,a5
	.loc 1 459 25
	ld	a5,0(a5)
	sd	a5,-40(s0)
.L143:
	.loc 1 450 23 discriminator 2
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L141:
	.loc 1 450 15 discriminator 1
	lw	a5,-24(s0)
	mv	a4,a5
	lw	a5,-196(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	blt	a4,a5,.L145
	.loc 1 463 7
	ld	a5,-40(s0)
	beq	a5,zero,.L156
.LBB47:
	.loc 1 464 21
	ld	a5,-40(s0)
	mv	a0,a5
	li	a1,0
	li	a2,0
	li	a7,66
#APP
# 464 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
	mv	a5,a0
	sext.w	a5,a5
.LBE47:
	.loc 1 464 19
	sw	a5,-20(s0)
	.loc 1 465 11
	lw	a5,-20(s0)
	sext.w	a5,a5
	bge	a5,zero,.L147
	.loc 1 466 13
	ld	a1,-40(s0)
	lla	a0,.LC14
	call	printf
	.loc 1 467 13
	li	a0,1
	call	exit
.L147:
	.loc 1 469 21
	lla	a5,g_script_fd
	lw	a4,-20(s0)
	sw	a4,0(a5)
.L156:
.LBB48:
	.loc 1 473 15
	sd	zero,-48(s0)
	.loc 1 474 13
	sw	zero,-52(s0)
	.loc 1 475 16
	sw	zero,-32(s0)
	.loc 1 477 11
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L148
	.loc 1 477 26 discriminator 1
	ld	a5,-40(s0)
	bne	a5,zero,.L148
	.loc 1 478 25
	li	a5,1
	sw	a5,-52(s0)
	.loc 1 479 23
	lla	a0,.LC15
	call	readline
	sd	a0,-48(s0)
	.loc 1 480 15
	ld	a5,-48(s0)
	bne	a5,zero,.L149
	.loc 1 481 17
	li	a0,0
	call	exit
.L149:
	.loc 1 484 23
	ld	a5,-48(s0)
	lbu	a5,0(a5)
	.loc 1 484 15
	mv	a4,a5
	li	a5,33
	bne	a4,a5,.L150
	.loc 1 485 24
	li	a5,1
	sw	a5,-32(s0)
	.loc 1 486 38
	ld	a5,-48(s0)
	addi	a4,a5,1
	.loc 1 486 17
	addi	a5,s0,-120
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 484 15
	j	.L152
.L150:
	.loc 1 489 17
	addi	a5,s0,-120
	li	a2,64
	ld	a1,-48(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 484 15
	j	.L152
.L148:
	.loc 1 492 16
	ld	a5,-40(s0)
	beq	a5,zero,.L152
	.loc 1 493 16
	addi	a4,s0,-184
	lw	a5,-20(s0)
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	script_readline_fd
	mv	a5,a0
	.loc 1 493 15 discriminator 1
	bge	a5,zero,.L153
.LBB49:
	.loc 1 494 17
	lw	a5,-20(s0)
	mv	a0,a5
	li	a7,67
#APP
# 494 "sh.c" 1
	ecall
# 0 "" 2
#NO_APP
.LBE49:
	.loc 1 495 29
	lla	a5,g_script_fd
	li	a4,-1
	sw	a4,0(a5)
	.loc 1 496 17
	li	a0,0
	call	exit
.L153:
	.loc 1 499 13
	addi	a4,s0,-184
	addi	a5,s0,-120
	li	a2,64
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 1 500 13
	addi	a5,s0,-120
	mv	a0,a5
	call	normalize_line
.L152:
	.loc 1 503 9
	lw	a3,-52(s0)
	lw	a4,-32(s0)
	addi	a5,s0,-120
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	eval_line
	.loc 1 505 11
	ld	a5,-48(s0)
	beq	a5,zero,.L154
	.loc 1 506 13
	ld	a0,-48(s0)
	call	free
.L154:
	.loc 1 509 11
	lw	a5,-28(s0)
	sext.w	a5,a5
	beq	a5,zero,.L156
	.loc 1 510 13
	li	a0,0
	call	exit
.LBE48:
	.loc 1 472 14
	j	.L156
	.cfi_endproc
.LFE11:
	.size	main, .-main
.Letext0:
	.file 2 "./stddef.h"
	.file 3 "minux.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x1056
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x18
	.4byte	.LASF71
	.byte	0x1d
	.byte	0x3
	.4byte	0x31647
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x9
	.byte	0x1
	.byte	0x6
	.4byte	.LASF2
	.uleb128 0x9
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x19
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x9
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x9
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x9
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x9
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x9
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x12
	.4byte	.LASF12
	.byte	0x2
	.byte	0xe5
	.byte	0x17
	.4byte	0x64
	.uleb128 0x9
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x9
	.byte	0x10
	.byte	0x4
	.4byte	.LASF10
	.uleb128 0x9
	.byte	0x1
	.byte	0x8
	.4byte	.LASF11
	.uleb128 0x1a
	.4byte	0x85
	.uleb128 0xe
	.4byte	0x96
	.uleb128 0xe
	.4byte	0x85
	.uleb128 0x12
	.4byte	.LASF13
	.byte	0x3
	.byte	0xab
	.byte	0xd
	.4byte	0x41
	.uleb128 0xe
	.4byte	0x8c
	.uleb128 0xc
	.4byte	0x85
	.4byte	0xbc
	.uleb128 0xb
	.4byte	0x64
	.byte	0x3f
	.byte	0
	.uleb128 0x4
	.4byte	.LASF14
	.byte	0x32
	.byte	0xd
	.4byte	0xac
	.uleb128 0x9
	.byte	0x3
	.8byte	g_cmdline
	.uleb128 0x4
	.4byte	.LASF15
	.byte	0x33
	.byte	0xc
	.4byte	0x41
	.uleb128 0x9
	.byte	0x3
	.8byte	g_script_fd
	.uleb128 0x1b
	.4byte	.LASF72
	.2byte	0x428
	.byte	0x1
	.byte	0x6b
	.byte	0x8
	.4byte	0x129
	.uleb128 0x1c
	.4byte	.LASF16
	.byte	0x1
	.byte	0x6d
	.byte	0xa
	.4byte	0x129
	.byte	0
	.uleb128 0xf
	.4byte	.LASF17
	.byte	0x6e
	.byte	0x9
	.4byte	0x41
	.2byte	0x400
	.uleb128 0xf
	.4byte	.LASF18
	.byte	0x6f
	.byte	0xa
	.4byte	0x13f
	.2byte	0x404
	.uleb128 0xf
	.4byte	.LASF19
	.byte	0x70
	.byte	0x9
	.4byte	0x41
	.2byte	0x424
	.byte	0
	.uleb128 0xc
	.4byte	0x85
	.4byte	0x13f
	.uleb128 0xb
	.4byte	0x64
	.byte	0x1f
	.uleb128 0xb
	.4byte	0x64
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	0x85
	.4byte	0x14f
	.uleb128 0xb
	.4byte	0x64
	.byte	0x1f
	.byte	0
	.uleb128 0x10
	.4byte	.LASF25
	.2byte	0x355
	.4byte	0x160
	.uleb128 0x6
	.4byte	0x160
	.byte	0
	.uleb128 0x1d
	.byte	0x8
	.uleb128 0xd
	.4byte	.LASF20
	.2byte	0x34a
	.byte	0x7
	.4byte	0x96
	.4byte	0x182
	.uleb128 0x6
	.4byte	0x96
	.uleb128 0x6
	.4byte	0xa7
	.uleb128 0x6
	.4byte	0x41
	.byte	0
	.uleb128 0xd
	.4byte	.LASF21
	.2byte	0x366
	.byte	0x7
	.4byte	0x96
	.4byte	0x198
	.uleb128 0x6
	.4byte	0xa7
	.byte	0
	.uleb128 0xd
	.4byte	.LASF22
	.2byte	0x33b
	.byte	0x7
	.4byte	0x96
	.4byte	0x1b8
	.uleb128 0x6
	.4byte	0x96
	.uleb128 0x6
	.4byte	0xa7
	.uleb128 0x6
	.4byte	0x6b
	.byte	0
	.uleb128 0xd
	.4byte	.LASF23
	.2byte	0x324
	.byte	0x5
	.4byte	0x41
	.4byte	0x1cf
	.uleb128 0x6
	.4byte	0xa7
	.uleb128 0x1e
	.byte	0
	.uleb128 0xd
	.4byte	.LASF24
	.2byte	0x351
	.byte	0x5
	.4byte	0x41
	.4byte	0x1ea
	.uleb128 0x6
	.4byte	0xa7
	.uleb128 0x6
	.4byte	0xa7
	.byte	0
	.uleb128 0x10
	.4byte	.LASF26
	.2byte	0x240
	.4byte	0x1fb
	.uleb128 0x6
	.4byte	0x41
	.byte	0
	.uleb128 0x10
	.4byte	.LASF27
	.2byte	0x33c
	.4byte	0x20c
	.uleb128 0x6
	.4byte	0xa7
	.byte	0
	.uleb128 0xd
	.4byte	.LASF28
	.2byte	0x34d
	.byte	0x7
	.4byte	0x160
	.4byte	0x22c
	.uleb128 0x6
	.4byte	0x160
	.uleb128 0x6
	.4byte	0x22c
	.uleb128 0x6
	.4byte	0x5d
	.byte	0
	.uleb128 0xe
	.4byte	0x231
	.uleb128 0x1f
	.uleb128 0xd
	.4byte	.LASF29
	.2byte	0x349
	.byte	0x5
	.4byte	0x41
	.4byte	0x248
	.uleb128 0x6
	.4byte	0xa7
	.byte	0
	.uleb128 0x20
	.4byte	.LASF48
	.byte	0x1
	.2byte	0x1b6
	.byte	0x5
	.4byte	0x41
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x39d
	.uleb128 0x13
	.4byte	.LASF30
	.byte	0xe
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -196
	.uleb128 0x13
	.4byte	.LASF16
	.byte	0x1b
	.4byte	0x91
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x3
	.string	"buf"
	.2byte	0x1b7
	.byte	0xa
	.4byte	0xac
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x5
	.4byte	.LASF31
	.2byte	0x1b8
	.byte	0xa
	.4byte	0xac
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x5
	.4byte	.LASF32
	.2byte	0x1b9
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.string	"i"
	.2byte	0x1bb
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x5
	.4byte	.LASF33
	.2byte	0x1bf
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x5
	.4byte	.LASF34
	.2byte	0x1c0
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x5
	.4byte	.LASF35
	.2byte	0x1c1
	.byte	0x11
	.4byte	0xa7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.4byte	0x33e
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x1d0
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.2byte	0x1d0
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a2"
	.2byte	0x1d0
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x1d0
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.uleb128 0x5
	.4byte	.LASF36
	.2byte	0x1d9
	.byte	0xf
	.4byte	0x96
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x5
	.4byte	.LASF37
	.2byte	0x1da
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x7
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x1ee
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x1ee
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x21
	.4byte	.LASF59
	.byte	0x1
	.byte	0xe8
	.byte	0xc
	.4byte	0x41
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6ea
	.uleb128 0x8
	.string	"buf"
	.byte	0xe8
	.byte	0x1c
	.4byte	0x96
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17160
	.uleb128 0xa
	.4byte	.LASF34
	.byte	0xe8
	.byte	0x25
	.4byte	0x41
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17164
	.uleb128 0xa
	.4byte	.LASF37
	.byte	0xe8
	.byte	0x31
	.4byte	0x41
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17168
	.uleb128 0x1
	.string	"n"
	.byte	0xea
	.byte	0xa
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.string	"pid"
	.byte	0xeb
	.byte	0xb
	.4byte	0x9b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x4
	.4byte	.LASF38
	.byte	0xec
	.byte	0x15
	.4byte	0x6ea
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17144
	.uleb128 0x4
	.4byte	.LASF39
	.byte	0xed
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.4byte	.LASF17
	.byte	0xee
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"p"
	.byte	0xef
	.byte	0xb
	.4byte	0x96
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"gi"
	.byte	0xf1
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0x472
	.uleb128 0x3
	.string	"i"
	.2byte	0x12c
	.byte	0x11
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x2
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.4byte	0x495
	.uleb128 0x3
	.string	"i"
	.2byte	0x14b
	.byte	0x11
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.byte	0
	.uleb128 0x2
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.4byte	0x4e8
	.uleb128 0x5
	.4byte	.LASF40
	.2byte	0x181
	.byte	0x15
	.4byte	0xa7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x7
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x185
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x185
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.uleb128 0x5
	.4byte	.LASF41
	.2byte	0x18c
	.byte	0xd
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x5
	.4byte	.LASF42
	.2byte	0x18d
	.byte	0xd
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.4byte	0x54d
	.uleb128 0x5
	.4byte	.LASF43
	.2byte	0x194
	.byte	0x1a
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x194
	.byte	0x1a
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x59d
	.uleb128 0x5
	.4byte	.LASF43
	.2byte	0x195
	.byte	0xd
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x195
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.2byte	0x195
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x195
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.4byte	0x5cf
	.uleb128 0x5
	.4byte	.LASF44
	.2byte	0x198
	.byte	0xf
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x5
	.4byte	.LASF43
	.2byte	0x198
	.byte	0xf
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0x61f
	.uleb128 0x5
	.4byte	.LASF43
	.2byte	0x19c
	.byte	0x11
	.4byte	0x48
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x19c
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a1"
	.2byte	0x19c
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x19c
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x5
	.4byte	.LASF45
	.2byte	0x1a1
	.byte	0x11
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x7
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.uleb128 0x3
	.string	"k"
	.2byte	0x1a2
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x14
	.4byte	.LLRL1
	.uleb128 0x5
	.4byte	.LASF46
	.2byte	0x1a3
	.byte	0x15
	.4byte	0x41
	.uleb128 0x4
	.byte	0x91
	.sleb128 -17148
	.uleb128 0x5
	.4byte	.LASF47
	.2byte	0x1a4
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x6b7
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x1a6
	.byte	0x22
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x1a6
	.byte	0x22
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.uleb128 0x3
	.string	"_a0"
	.2byte	0x1a9
	.byte	0x22
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x3
	.string	"_a7"
	.2byte	0x1a9
	.byte	0x22
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0xe6
	.4byte	0x6fa
	.uleb128 0xb
	.4byte	0x64
	.byte	0xf
	.byte	0
	.uleb128 0x15
	.4byte	.LASF49
	.byte	0xba
	.4byte	0x41
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa2c
	.uleb128 0x8
	.string	"n"
	.byte	0xba
	.byte	0x15
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0xa
	.4byte	.LASF38
	.byte	0xba
	.byte	0x29
	.4byte	0xa2c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0xa
	.4byte	.LASF39
	.byte	0xba
	.byte	0x37
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0xa
	.4byte	.LASF34
	.byte	0xba
	.byte	0x49
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0xa
	.4byte	.LASF41
	.byte	0xba
	.byte	0x55
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.4byte	.LASF50
	.byte	0xbc
	.byte	0x9
	.4byte	0xa31
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.4byte	.LASF51
	.byte	0xbe
	.byte	0x16
	.4byte	0xa2c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.4byte	0x7af
	.uleb128 0x1
	.string	"_a0"
	.byte	0xc2
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xc2
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x7fa
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0xc6
	.byte	0xd
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.string	"_a0"
	.byte	0xc6
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xc6
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0xc6
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.uleb128 0x1
	.string	"pid"
	.byte	0xcd
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x849
	.uleb128 0x1
	.string	"_a0"
	.byte	0xcb
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xcb
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.4byte	0x879
	.uleb128 0x4
	.4byte	.LASF44
	.byte	0xcd
	.byte	0x13
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0xcd
	.byte	0x13
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.byte	0
	.uleb128 0x2
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x8a9
	.uleb128 0x1
	.string	"_a0"
	.byte	0xd0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xd0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.4byte	0x8e6
	.uleb128 0x1
	.string	"_a0"
	.byte	0xd1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xd1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0xd1
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x916
	.uleb128 0x1
	.string	"_a0"
	.byte	0xd2
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xd2
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.4byte	0x946
	.uleb128 0x1
	.string	"_a0"
	.byte	0xd7
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xd7
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x991
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0xdb
	.byte	0x11
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"_a0"
	.byte	0xdb
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xdb
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0xdb
	.byte	0x11
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.4byte	0x9c1
	.uleb128 0x1
	.string	"_a0"
	.byte	0xdd
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xdd
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x9fe
	.uleb128 0x1
	.string	"_a0"
	.byte	0xde
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xde
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0xde
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x1
	.string	"_a0"
	.byte	0xdf
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0xdf
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0xe6
	.uleb128 0xc
	.4byte	0x41
	.4byte	0xa41
	.uleb128 0xb
	.4byte	0x64
	.byte	0x1
	.byte	0
	.uleb128 0x16
	.4byte	.LASF56
	.byte	0x73
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd85
	.uleb128 0xa
	.4byte	.LASF51
	.byte	0x73
	.byte	0x30
	.4byte	0xa2c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xa
	.4byte	.LASF34
	.byte	0x73
	.byte	0x3d
	.4byte	0x41
	.uleb128 0x3
	.byte	0x91
	.sleb128 -476
	.uleb128 0x4
	.4byte	.LASF16
	.byte	0x75
	.byte	0xb
	.4byte	0xd85
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x4
	.4byte	.LASF52
	.byte	0x76
	.byte	0xa
	.4byte	0xd95
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x4
	.4byte	.LASF53
	.byte	0x77
	.byte	0xb
	.4byte	0xda5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x1
	.string	"ei"
	.byte	0x78
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.string	"j"
	.byte	0x79
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.4byte	.LASF54
	.byte	0x7a
	.byte	0x11
	.4byte	0xa7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.4byte	0xaf1
	.uleb128 0x1
	.string	"k"
	.byte	0x81
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x2
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0xb13
	.uleb128 0x1
	.string	"k"
	.byte	0x84
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.4byte	0xc33
	.uleb128 0x1
	.string	"fd"
	.byte	0x8c
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0xb7f
	.uleb128 0x1
	.string	"_a0"
	.byte	0x8e
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x8e
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x8e
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x8e
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.4byte	0xbc9
	.uleb128 0x1
	.string	"_a0"
	.byte	0x91
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x91
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x91
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x91
	.byte	0x12
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0xc06
	.uleb128 0x1
	.string	"_a0"
	.byte	0x99
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x99
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a7"
	.byte	0x99
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x1
	.string	"_a0"
	.byte	0x9a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x9a
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x2
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.4byte	0xc7d
	.uleb128 0x1
	.string	"_a0"
	.byte	0x9e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x9e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x9e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x9e
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x2
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.4byte	0xcc7
	.uleb128 0x1
	.string	"_a0"
	.byte	0xa1
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xa1
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xa1
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xa1
	.byte	0x9
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x4
	.4byte	.LASF55
	.byte	0xa4
	.byte	0xe
	.4byte	0xac
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x1
	.string	"i"
	.byte	0xa5
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.4byte	0xd3d
	.uleb128 0x1
	.string	"_a0"
	.byte	0xb0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xb0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xb0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xb0
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.uleb128 0x1
	.string	"_a0"
	.byte	0xb3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0xb3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0xb3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0xb3
	.byte	0xd
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x96
	.4byte	0xd95
	.uleb128 0xb
	.4byte	0x64
	.byte	0x1f
	.byte	0
	.uleb128 0xc
	.4byte	0x85
	.4byte	0xda5
	.uleb128 0xb
	.4byte	0x64
	.byte	0x4f
	.byte	0
	.uleb128 0xc
	.4byte	0x96
	.4byte	0xdb5
	.uleb128 0xb
	.4byte	0x64
	.byte	0x1
	.byte	0
	.uleb128 0x16
	.4byte	.LASF57
	.byte	0x55
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdfc
	.uleb128 0x8
	.string	"buf"
	.byte	0x55
	.byte	0x22
	.4byte	0x96
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"len"
	.byte	0x57
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.4byte	.LASF58
	.byte	0x58
	.byte	0xb
	.4byte	0x96
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x17
	.4byte	.LASF60
	.byte	0x35
	.4byte	0x41
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xec7
	.uleb128 0x8
	.string	"fd"
	.byte	0x35
	.byte	0x23
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.string	"out"
	.byte	0x35
	.byte	0x2d
	.4byte	0x96
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xa
	.4byte	.LASF61
	.byte	0x35
	.byte	0x36
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.string	"i"
	.byte	0x37
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x14
	.4byte	.LLRL0
	.uleb128 0x1
	.string	"ch"
	.byte	0x3e
	.byte	0xe
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -37
	.uleb128 0x4
	.4byte	.LASF62
	.byte	0x3f
	.byte	0xd
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x7
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x3f
	.byte	0x15
	.4byte	0x48
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"_a0"
	.byte	0x3f
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a1"
	.byte	0x3f
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5b
	.uleb128 0x1
	.string	"_a2"
	.byte	0x3f
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5c
	.uleb128 0x1
	.string	"_a7"
	.byte	0x3f
	.byte	0x15
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x17
	.4byte	.LASF63
	.byte	0x24
	.4byte	0x41
	.8byte	.LFB5
	.8byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf5f
	.uleb128 0xa
	.4byte	.LASF64
	.byte	0x24
	.byte	0x1e
	.4byte	0xa7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"fd"
	.byte	0x25
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.4byte	0xf32
	.uleb128 0x1
	.string	"_a0"
	.byte	0x25
	.byte	0xe
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x25
	.byte	0xe
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.uleb128 0x7
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x1
	.string	"_a0"
	.byte	0x26
	.byte	0x14
	.4byte	0x48
	.uleb128 0x1
	.byte	0x5a
	.uleb128 0x1
	.string	"_a7"
	.byte	0x26
	.byte	0x14
	.4byte	0x48
	.uleb128 0x1
	.byte	0x61
	.byte	0
	.byte	0
	.uleb128 0x15
	.4byte	.LASF65
	.byte	0x1e
	.4byte	0x41
	.8byte	.LFB4
	.8byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf8c
	.uleb128 0x8
	.string	"c"
	.byte	0x1e
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x11
	.4byte	.LASF66
	.byte	0x19
	.4byte	0x41
	.8byte	.LFB3
	.8byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfb9
	.uleb128 0x8
	.string	"c"
	.byte	0x19
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x11
	.4byte	.LASF67
	.byte	0x14
	.4byte	0x41
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfe6
	.uleb128 0x8
	.string	"c"
	.byte	0x14
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.uleb128 0x11
	.4byte	.LASF68
	.byte	0xe
	.4byte	0x41
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1021
	.uleb128 0x8
	.string	"c"
	.byte	0xe
	.byte	0x13
	.4byte	0x85
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x4
	.4byte	.LASF69
	.byte	0x10
	.byte	0x9
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x22
	.4byte	.LASF70
	.byte	0x1
	.byte	0x5
	.byte	0x14
	.4byte	0xa7
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x8
	.string	"s"
	.byte	0x5
	.byte	0x29
	.4byte	0xa7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x8
	.string	"ch"
	.byte	0x5
	.byte	0x30
	.4byte	0x41
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x21
	.sleb128 438
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 13
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 12
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x90
	.uleb128 0xb
	.uleb128 0x91
	.uleb128 0x6
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x8
	.byte	0
	.2byte	0
	.2byte	0
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.8byte	0
	.8byte	0
	.section	.debug_rnglists,"",@progbits
.Ldebug_ranges0:
	.4byte	.Ldebug_ranges3-.Ldebug_ranges2
.Ldebug_ranges2:
	.2byte	0x5
	.byte	0x8
	.byte	0
	.4byte	0
.LLRL0:
	.byte	0x4
	.uleb128 .LBB4-.Ltext0
	.uleb128 .LBE4-.Ltext0
	.byte	0x4
	.uleb128 .LBB6-.Ltext0
	.uleb128 .LBE6-.Ltext0
	.byte	0
.LLRL1:
	.byte	0x4
	.uleb128 .LBB43-.Ltext0
	.uleb128 .LBE43-.Ltext0
	.byte	0x4
	.uleb128 .LBB46-.Ltext0
	.uleb128 .LBE46-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF18:
	.string	"redirect_file"
.LASF24:
	.string	"strcmp"
.LASF12:
	.string	"size_t"
.LASF34:
	.string	"debug_"
.LASF62:
	.string	"nread"
.LASF60:
	.string	"script_readline_fd"
.LASF57:
	.string	"normalize_line"
.LASF20:
	.string	"strncpy"
.LASF64:
	.string	"path"
.LASF23:
	.string	"printf"
.LASF22:
	.string	"strncat"
.LASF19:
	.string	"redirect_append"
.LASF52:
	.string	"envbuf"
.LASF25:
	.string	"free"
.LASF9:
	.string	"long long int"
.LASF2:
	.string	"signed char"
.LASF14:
	.string	"g_cmdline"
.LASF21:
	.string	"readline"
.LASF4:
	.string	"long int"
.LASF49:
	.string	"run_command"
.LASF59:
	.string	"eval_line"
.LASF53:
	.string	"envp"
.LASF47:
	.string	"waited_pid"
.LASF48:
	.string	"main"
.LASF7:
	.string	"unsigned int"
.LASF29:
	.string	"strlen"
.LASF51:
	.string	"command"
.LASF8:
	.string	"long unsigned int"
.LASF45:
	.string	"waits"
.LASF32:
	.string	"script_fd"
.LASF61:
	.string	"size"
.LASF6:
	.string	"short unsigned int"
.LASF40:
	.string	"target"
.LASF42:
	.string	"wait_direct_shell"
.LASF68:
	.string	"xisalpha"
.LASF54:
	.string	"prefix"
.LASF66:
	.string	"xisdigit"
.LASF27:
	.string	"puts"
.LASF39:
	.string	"num_commands"
.LASF10:
	.string	"long double"
.LASF15:
	.string	"g_script_fd"
.LASF50:
	.string	"pipes"
.LASF65:
	.string	"xisalnum"
.LASF38:
	.string	"commands"
.LASF67:
	.string	"xisblank"
.LASF35:
	.string	"script_path"
.LASF41:
	.string	"shell_pgrp"
.LASF5:
	.string	"unsigned char"
.LASF72:
	.string	"sCommand"
.LASF3:
	.string	"short int"
.LASF33:
	.string	"run_once"
.LASF55:
	.string	"abuf"
.LASF26:
	.string	"exit"
.LASF17:
	.string	"num_arg"
.LASF58:
	.string	"head"
.LASF44:
	.string	"_num"
.LASF63:
	.string	"isdir"
.LASF11:
	.string	"char"
.LASF71:
	.ascii	"GNU C23 15.2.1 20250808"
	.string	" (Red Hat Cross 15.2.1-1) -mcmodel=medany -mcmodel=medany -mno-small-data-limit=0 -mabi=lp64 -misa-spec=20191213 -mtls-dialect=trad -march=rv64imafdc_zicsr_zifencei_zmmul_zaamo_zalrsc_zca_zcd -g -O0 -ffreestanding -fno-stack-protector -fno-builtin -fno-pie"
.LASF36:
	.string	"cmdline"
.LASF37:
	.string	"control_tty"
.LASF70:
	.string	"s_strchr"
.LASF46:
	.string	"status"
.LASF28:
	.string	"memmove"
.LASF56:
	.string	"exec_command_argv"
.LASF43:
	.string	"_ret"
.LASF30:
	.string	"argc"
.LASF13:
	.string	"pid_t"
.LASF16:
	.string	"argv"
.LASF31:
	.string	"linebuf"
.LASF69:
	.string	"result"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"sh.c"
.LASF1:
	.string	"/home/ab25cq/minux9"
	.ident	"GCC: (GNU) 15.2.1 20250808 (Red Hat Cross 15.2.1-1)"
	.section	.note.GNU-stack,"",@progbits
