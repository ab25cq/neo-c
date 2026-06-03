	.file	"fs_neoc.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zmmul1p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.file 0 "/root/neo-c/minux9" "fs_neoc.c"
	.local	vbase
	.comm	vbase,8,8
	.local	Q
	.comm	Q,4,4
	.local	desc
	.comm	desc,8,8
	.local	avail
	.comm	avail,8,8
	.local	used
	.comm	used,8,8
	.local	vq_area
	.comm	vq_area,8,8
	.local	aidx
	.comm	aidx,2,2
	.local	status_byte
	.comm	status_byte,1,4
	.local	dma_buf
	.comm	dma_buf,512,512
	.local	req
	.comm	req,16,8
	.local	bcache
	.comm	bcache,16896,8
	.local	bcache_time
	.comm	bcache_time,4,4
	.local	bcache_hits
	.comm	bcache_hits,4,4
	.local	bcache_misses
	.comm	bcache_misses,4,4
	.local	sb
	.comm	sb,28,8
	.local	block_buf
	.comm	block_buf,512,8
	.align	1
	.type	mw32, @function
mw32:
.LFB6:
	.file 1 "fs_neoc.c"
	.loc 1 865 1
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
	mv	a4,a2
	sw	a5,-28(s0)
	mv	a5,a4
	sw	a5,-32(s0)
	.loc 1 866 33
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 866 6
	mv	a4,a5
	.loc 1 866 36
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 1 867 1
	nop
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE6:
	.size	mw32, .-mw32
	.align	1
	.type	mr32, @function
mr32:
.LFB7:
	.loc 1 869 1
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
	.loc 1 870 44
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 1 870 16
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 1 871 1
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
.LFE7:
	.size	mr32, .-mr32
	.align	1
	.type	set_flags, @function
set_flags:
.LFB8:
	.loc 1 873 1
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
	mv	a3,a1
	mv	a4,a2
	sh	a5,-18(s0)
	mv	a5,a3
	sh	a5,-20(s0)
	mv	a5,a4
	sh	a5,-22(s0)
	.loc 1 874 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 874 18
	lhu	a4,-18(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-18(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 875 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 875 18
	lhu	a4,-20(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-20(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 876 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 876 18
	lhu	a4,-22(s0)
	andi	a4,a4,255
	lbu	a3,12(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,12(a5)
	lhu	a4,-22(s0)
	srliw	a4,a4,8
	slli	a4,a4,48
	srli	a4,a4,48
	lbu	a3,13(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,13(a5)
	.loc 1 877 1
	nop
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	set_flags, .-set_flags
	.section	.rodata
	.align	3
.LC0:
	.string	"division by zero"
	.align	3
.LC1:
	.string	"stackframe"
	.text
	.align	1
	.type	fs_now, @function
fs_now:
.LFB9:
	.loc 1 879 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 881 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 882 6
#APP
# 882 "fs_neoc.c" 1
	csrr a5, time
# 0 "" 2
#NO_APP
	sd	a5,-32(s0)
.LBB2:
	.loc 1 886 71
	li	a5,999424
	addi	a5,a5,576
	sd	a5,-24(s0)
	.loc 1 886 105
	ld	a5,-24(s0)
	bne	a5,zero,.L6
.LBB3:
	.loc 1 886 206 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 886 234 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L7
	.loc 1 886 247 discriminator 4
	call	stackframe
	j	.L8
.L7:
	.loc 1 886 268 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 886 288 discriminator 8
	lla	a0,__func__.14
	call	puts
.L8:
	.loc 1 886 306 discriminator 10
	li	a0,2
	call	exit
.L6:
.LBE3:
	.loc 1 886 321 discriminator 12
	ld	a4,-32(s0)
	ld	a5,-24(s0)
	divu	a5,a4,a5
.LBE2:
	.loc 1 886 30 discriminator 12
	sext.w	a4,a5
	.loc 1 886 29 discriminator 12
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 887 1
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
.LFE9:
	.size	fs_now, .-fs_now
	.align	1
	.type	BBLOCK, @function
BBLOCK:
.LFB10:
	.loc 1 889 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	sd	s1,40(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-52(s0)
	.loc 1 890 18
	lla	a5,sb
	lw	s1,24(a5)
.LBB4:
	.loc 1 890 63
	li	a5,4096
	sw	a5,-36(s0)
	.loc 1 890 95
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L11
.LBB5:
	.loc 1 890 196 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 890 224 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L12
	.loc 1 890 237 discriminator 4
	call	stackframe
	j	.L13
.L12:
	.loc 1 890 258 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 890 278 discriminator 8
	lla	a0,__func__.28
	call	puts
.L13:
	.loc 1 890 296 discriminator 10
	li	a0,2
	call	exit
.L11:
.LBE5:
	.loc 1 890 311 discriminator 12
	lw	a5,-36(s0)
	lw	a4,-52(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE4:
	.loc 1 890 38 discriminator 12
	addw	a5,a5,s1
	sext.w	a5,a5
	.loc 1 891 1
	mv	a0,a5
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	ld	s1,40(sp)
	.cfi_restore 9
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE10:
	.size	BBLOCK, .-BBLOCK
	.section	.rodata
	.align	3
.LC2:
	.string	"virtio-blk not found\n"
	.align	3
.LC3:
	.string	"not legacy mmio\n"
	.align	3
.LC4:
	.string	"FEATURES_OK rejected\n"
	.align	3
.LC5:
	.string	"unsupported queue size\n"
	.align	3
.LC6:
	.string	"virtqueue too large\n"
	.align	3
.LC7:
	.string	"kalloc failed\n"
	.text
	.align	1
	.globl	virtio_blk_init
	.type	virtio_blk_init, @function
virtio_blk_init:
.LFB11:
	.loc 1 895 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	.loc 1 907 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 908 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 909 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 910 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 911 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 912 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 913 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 914 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 915 5
	addi	a5,s0,-72
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 916 5
	addi	a5,s0,-80
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 917 5
	addi	a5,s0,-88
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 918 10
	sw	zero,-20(s0)
	.loc 1 918 5
	j	.L16
.L20:
	.loc 1 919 26
	lw	a5,-20(s0)
	mv	a4,a5
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	slli	a5,a5,12
	.loc 1 919 13
	sd	a5,-32(s0)
	.loc 1 920 12
	ld	a5,-32(s0)
	li	a1,0
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 920 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L38
	.loc 1 923 12
	ld	a5,-32(s0)
	li	a1,8
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 923 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L18
	.loc 1 924 18
	ld	a4,-32(s0)
	lla	a5,vbase
	sd	a4,0(a5)
	.loc 1 925 13
	j	.L19
.L38:
	.loc 1 921 13
	nop
.L18:
	.loc 1 918 22 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L16:
	.loc 1 918 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,7
	ble	a4,a5,.L20
.L19:
	.loc 1 928 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 1 928 7
	bne	a5,zero,.L21
	.loc 1 929 9
	lla	a0,.LC2
	call	puts
.L22:
	.loc 1 930 14
	nop
	j	.L22
.L21:
	.loc 1 934 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 1 934 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L23
	.loc 1 935 9
	lla	a0,.LC3
	call	puts
.L24:
	.loc 1 936 14
	nop
	j	.L24
.L23:
	.loc 1 940 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 941 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 942 13
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 942 12 discriminator 1
	sw	a5,-36(s0)
	.loc 1 944 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 1 945 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 945 25 discriminator 1
	ori	a5,a5,8
	sext.w	a5,a5
	.loc 1 945 7 discriminator 1
	sw	a5,-40(s0)
	.loc 1 946 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 947 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 947 27 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 1 947 7 discriminator 1
	bne	a5,zero,.L25
	.loc 1 948 9
	lla	a0,.LC4
	call	puts
.L26:
	.loc 1 949 14
	nop
	j	.L26
.L25:
	.loc 1 953 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 1 954 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 1 955 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 1 955 9 discriminator 1
	sw	a5,-44(s0)
	.loc 1 956 29
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L27
	li	a5,128
.L27:
	sext.w	a5,a5
	.loc 1 956 9
	sw	a5,-48(s0)
	.loc 1 957 6
	lw	a4,-48(s0)
	lla	a5,Q
	sw	a4,0(a5)
	.loc 1 958 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 1 958 7
	beq	a5,zero,.L28
	.loc 1 958 13 discriminator 1
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 958 10 discriminator 1
	li	a5,1024
	bleu	a4,a5,.L29
.L28:
	.loc 1 959 9
	lla	a0,.LC5
	call	puts
.L30:
	.loc 1 960 14
	nop
	j	.L30
.L29:
	.loc 1 964 18
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,4
	.loc 1 964 12
	sd	a5,-56(s0)
	.loc 1 965 18
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	slli	a5,a5,1
	.loc 1 965 13
	sd	a5,-64(s0)
	.loc 1 966 22
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 966 17
	addi	a5,a5,4
	.loc 1 966 12
	sd	a5,-72(s0)
	.loc 1 967 21
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a4,a4,a5
	.loc 1 967 30
	ld	a5,-72(s0)
	add	a5,a4,a5
	.loc 1 967 13
	sd	a5,-80(s0)
	.loc 1 968 10
	j	.L31
.L33:
	.loc 1 969 10
	lla	a5,Q
	lw	a5,0(a5)
	srliw	a5,a5,1
	sext.w	a4,a5
	lla	a5,Q
	sw	a4,0(a5)
	.loc 1 970 22
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,4
	.loc 1 970 16
	sd	a5,-56(s0)
	.loc 1 971 22
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	slli	a5,a5,1
	.loc 1 971 17
	sd	a5,-64(s0)
	.loc 1 972 26
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 1 972 21
	addi	a5,a5,4
	.loc 1 972 16
	sd	a5,-72(s0)
	.loc 1 973 25
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a4,a4,a5
	.loc 1 973 34
	ld	a5,-72(s0)
	add	a5,a4,a5
	.loc 1 973 17
	sd	a5,-80(s0)
.L31:
	.loc 1 968 19
	ld	a4,-80(s0)
	.loc 1 968 24
	li	a5,4096
	bleu	a4,a5,.L32
	.loc 1 968 27 discriminator 1
	lla	a5,Q
	lw	a4,0(a5)
	.loc 1 968 24 discriminator 1
	li	a5,1
	bgtu	a4,a5,.L33
.L32:
	.loc 1 975 16
	ld	a4,-80(s0)
	.loc 1 975 7
	li	a5,4096
	bleu	a4,a5,.L34
	.loc 1 976 9
	lla	a0,.LC6
	call	puts
.L35:
	.loc 1 977 14
	nop
	j	.L35
.L34:
	.loc 1 981 5
	lla	a5,vbase
	ld	a4,0(a5)
	lla	a5,Q
	lw	a5,0(a5)
	mv	a2,a5
	li	a1,56
	mv	a0,a4
	call	mw32
	.loc 1 982 13
	call	kalloc
	mv	a4,a0
	.loc 1 982 12 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 1 983 8
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 983 7
	bne	a5,zero,.L36
	.loc 1 984 9
	lla	a0,.LC7
	call	puts
.L37:
	.loc 1 985 14
	nop
	j	.L37
.L36:
	.loc 1 989 5
	lla	a5,vq_area
	ld	a5,0(a5)
	li	a2,4096
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 990 9
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 1 991 41
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 1 991 10
	lla	a5,avail
	sd	a4,0(a5)
	.loc 1 992 47
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 1 992 9
	lla	a5,used
	sd	a4,0(a5)
	.loc 1 993 13
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 1 993 12
	sd	a5,-88(s0)
	.loc 1 994 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 1 995 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 1 995 45
	ld	a5,-88(s0)
	srli	a5,a5,12
	.loc 1 995 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 1 996 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 1 997 1
	nop
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE11:
	.size	virtio_blk_init, .-virtio_blk_init
	.section	.rodata
	.align	3
.LC8:
	.string	"modulo by zero"
	.text
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB12:
	.loc 1 1000 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	sd	s1,40(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	sd	a1,-64(s0)
	.loc 1 1001 13
	lla	a5,req
	sw	zero,0(a5)
	.loc 1 1002 15
	lla	a5,req
	ld	a4,-56(s0)
	sd	a4,8(a5)
	.loc 1 1003 17
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 1004 16
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 1005 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 1005 18
	lla	a4,req
	.loc 1 1005 17
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 1006 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 1006 16
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,16
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 1007 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 1007 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 1008 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 1008 18
	lla	a4,dma_buf
	.loc 1 1008 17
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 1009 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 1009 16
	lbu	a4,8(a5)
	andi	a4,a4,0
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 1010 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 1010 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 1011 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 1011 18
	lla	a4,status_byte
	.loc 1 1011 17
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 1012 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 1012 16
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 1013 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 1 1014 10
	lla	a5,avail
	ld	s1,0(a5)
.LBB6:
	.loc 1 1014 34
	lla	a5,Q
	lw	a5,0(a5)
	sw	a5,-36(s0)
	.loc 1 1014 60
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L40
.LBB7:
	.loc 1 1014 161 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1014 187 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L41
	.loc 1 1014 200 discriminator 4
	call	stackframe
	j	.L42
.L41:
	.loc 1 1014 221 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1014 241 discriminator 8
	lla	a0,__func__.37
	call	puts
.L42:
	.loc 1 1014 259 discriminator 10
	li	a0,2
	call	exit
.L40:
.LBE7:
	.loc 1 1014 277 discriminator 12
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a5,a5
	mv	a4,a5
	lw	a5,-36(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE6:
	.loc 1 1014 300 discriminator 12
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,s1,a5
	sh	zero,4(a5)
	.loc 1 1015 5
	fence	rw,rw
	.loc 1 1016 16
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 1016 15
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 1016 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 1016 15
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 1017 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 1018 10
	j	.L43
.L44:
	.loc 1 1019 9
	fence	rw,rw
.L43:
	.loc 1 1018 22
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L44
	.loc 1 1021 5
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-64(s0)
	call	memcpy
	.loc 1 1022 1
	nop
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	ld	s1,40(sp)
	.cfi_restore 9
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE12:
	.size	virtio_blk_read, .-virtio_blk_read
	.section	.rodata
	.align	3
.LC9:
	.string	"array index out of bounds"
	.text
	.align	1
	.globl	bcache_init
	.type	bcache_init, @function
bcache_init:
.LFB13:
	.loc 1 1025 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	.loc 1 1027 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1028 10
	sw	zero,-52(s0)
	.loc 1 1028 5
	j	.L46
.L63:
.LBB8:
	.loc 1 1029 47
	lw	a5,-52(s0)
	.loc 1 1029 24
	sd	a5,-24(s0)
	.loc 1 1029 65
	ld	a5,-24(s0)
	blt	a5,zero,.L47
	.loc 1 1029 91 discriminator 2
	ld	a4,-24(s0)
	li	a5,31
	ble	a4,a5,.L48
.L47:
.LBB9:
	.loc 1 1029 212 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1029 249 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L49
	.loc 1 1029 262 discriminator 6
	call	stackframe
	j	.L50
.L49:
	.loc 1 1029 283 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1029 303 discriminator 10
	lla	a0,__func__.36
	call	puts
.L50:
	.loc 1 1029 321 discriminator 12
	li	a0,2
	call	exit
.L48:
.LBE9:
	.loc 1 1029 332 discriminator 14
	ld	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE8:
	.loc 1 1029 372 discriminator 14
	sw	zero,0(a5)
.LBB10:
	.loc 1 1030 47
	lw	a5,-52(s0)
	.loc 1 1030 24
	sd	a5,-32(s0)
	.loc 1 1030 65
	ld	a5,-32(s0)
	blt	a5,zero,.L51
	.loc 1 1030 91 discriminator 2
	ld	a4,-32(s0)
	li	a5,31
	ble	a4,a5,.L52
.L51:
.LBB11:
	.loc 1 1030 212 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1030 249 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L53
	.loc 1 1030 262 discriminator 6
	call	stackframe
	j	.L54
.L53:
	.loc 1 1030 283 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1030 303 discriminator 10
	lla	a0,__func__.36
	call	puts
.L54:
	.loc 1 1030 321 discriminator 12
	li	a0,2
	call	exit
.L52:
.LBE11:
	.loc 1 1030 332 discriminator 14
	ld	a4,-32(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE10:
	.loc 1 1030 373 discriminator 14
	sw	zero,516(a5)
.LBB12:
	.loc 1 1031 47
	lw	a5,-52(s0)
	.loc 1 1031 24
	sd	a5,-40(s0)
	.loc 1 1031 65
	ld	a5,-40(s0)
	blt	a5,zero,.L55
	.loc 1 1031 91 discriminator 2
	ld	a4,-40(s0)
	li	a5,31
	ble	a4,a5,.L56
.L55:
.LBB13:
	.loc 1 1031 212 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1031 249 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L57
	.loc 1 1031 262 discriminator 6
	call	stackframe
	j	.L58
.L57:
	.loc 1 1031 283 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1031 303 discriminator 10
	lla	a0,__func__.36
	call	puts
.L58:
	.loc 1 1031 321 discriminator 12
	li	a0,2
	call	exit
.L56:
.LBE13:
	.loc 1 1031 332 discriminator 14
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE12:
	.loc 1 1031 372 discriminator 14
	sw	zero,520(a5)
.LBB14:
	.loc 1 1032 47
	lw	a5,-52(s0)
	.loc 1 1032 24
	sd	a5,-48(s0)
	.loc 1 1032 65
	ld	a5,-48(s0)
	blt	a5,zero,.L59
	.loc 1 1032 91 discriminator 2
	ld	a4,-48(s0)
	li	a5,31
	ble	a4,a5,.L60
.L59:
.LBB15:
	.loc 1 1032 212 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1032 249 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L61
	.loc 1 1032 262 discriminator 6
	call	stackframe
	j	.L62
.L61:
	.loc 1 1032 283 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1032 303 discriminator 10
	lla	a0,__func__.36
	call	puts
.L62:
	.loc 1 1032 321 discriminator 12
	li	a0,2
	call	exit
.L60:
.LBE15:
	.loc 1 1032 332 discriminator 14
	ld	a4,-48(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE14:
	.loc 1 1032 375 discriminator 14
	sw	zero,524(a5)
	.loc 1 1028 23 discriminator 2
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
.L46:
	.loc 1 1028 18 discriminator 1
	lw	a4,-52(s0)
	li	a5,31
	ble	a4,a5,.L63
	.loc 1 1034 16
	lla	a5,bcache_hits
	sw	zero,0(a5)
	.loc 1 1035 18
	lla	a5,bcache_misses
	sw	zero,0(a5)
	.loc 1 1036 1
	nop
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE13:
	.size	bcache_init, .-bcache_init
	.section	.rodata
	.align	3
.LC10:
	.string	"Block cache stats: hits=%u misses=%u hit_rate=%u%%\n"
	.text
	.align	1
	.globl	bcache_stats
	.type	bcache_stats, @function
bcache_stats:
.LFB14:
	.loc 1 1039 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	sd	s1,24(sp)
	sd	s2,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	.cfi_offset 18, -32
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 1040 5
	lla	a5,bcache_hits
	lw	s1,0(a5)
	lla	a5,bcache_misses
	lw	s2,0(a5)
	.loc 1 1040 107
	lla	a5,bcache_hits
	lw	a4,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1040 5
	beq	a5,zero,.L65
.LBB16:
	.loc 1 1040 203 discriminator 1
	lla	a5,bcache_hits
	lw	a4,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	.loc 1 1040 171 discriminator 1
	addw	a5,a4,a5
	sw	a5,-36(s0)
	.loc 1 1040 223 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L66
.LBB17:
	.loc 1 1040 324 discriminator 3
	lla	a0,.LC0
	call	puts
	.loc 1 1040 352 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L67
	.loc 1 1040 365 discriminator 6
	call	stackframe
	j	.L68
.L67:
	.loc 1 1040 386 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1040 406 discriminator 10
	lla	a0,__func__.35
	call	puts
.L68:
	.loc 1 1040 424 discriminator 12
	li	a0,2
	call	exit
.L66:
.LBE17:
	.loc 1 1040 447 discriminator 14
	lla	a5,bcache_hits
	lw	a4,0(a5)
	li	a5,100
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1040 453 discriminator 14
	lw	a4,-36(s0)
	divuw	a5,a5,a4
	sext.w	a5,a5
.LBE16:
	j	.L69
.L65:
	.loc 1 1040 5 discriminator 2
	li	a5,0
.L69:
	.loc 1 1040 5 is_stmt 0 discriminator 16
	mv	a3,a5
	mv	a2,s2
	mv	a1,s1
	lla	a0,.LC10
	call	printf
	.loc 1 1041 1 is_stmt 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	ld	s1,24(sp)
	.cfi_restore 9
	ld	s2,16(sp)
	.cfi_restore 18
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE14:
	.size	bcache_stats, .-bcache_stats
	.align	1
	.type	bcache_evict, @function
bcache_evict:
.LFB15:
	.loc 1 1044 1
	.cfi_startproc
	addi	sp,sp,-128
	.cfi_def_cfa_offset 128
	sd	ra,120(sp)
	sd	s0,112(sp)
	sd	s1,104(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,128
	.cfi_def_cfa 8, 0
	.loc 1 1048 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1049 5
	addi	a5,s0,-112
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1050 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1051 11
	li	a5,-1
	sw	a5,-108(s0)
	.loc 1 1052 11
	li	a5,-1
	sw	a5,-112(s0)
	.loc 1 1053 10
	sw	zero,-116(s0)
	.loc 1 1053 5
	j	.L71
.L85:
.LBB18:
	.loc 1 1054 50
	lw	a5,-116(s0)
	.loc 1 1054 27
	sd	a5,-88(s0)
	.loc 1 1054 68
	ld	a5,-88(s0)
	blt	a5,zero,.L72
	.loc 1 1054 94 discriminator 2
	ld	a4,-88(s0)
	li	a5,31
	ble	a4,a5,.L73
.L72:
.LBB19:
	.loc 1 1054 215 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1054 252 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L74
	.loc 1 1054 265 discriminator 6
	call	stackframe
	j	.L75
.L74:
	.loc 1 1054 286 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1054 306 discriminator 10
	lla	a0,__func__.34
	call	puts
.L75:
	.loc 1 1054 324 discriminator 12
	li	a0,2
	call	exit
.L73:
.LBE19:
	.loc 1 1054 335 discriminator 14
	ld	a4,-88(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE18:
	.loc 1 1054 369 discriminator 14
	lw	a5,516(a5)
	.loc 1 1054 11 discriminator 14
	bne	a5,zero,.L76
.LBB20:
	.loc 1 1054 429 discriminator 15
	lw	a5,-116(s0)
	.loc 1 1054 406 discriminator 15
	sd	a5,-96(s0)
	.loc 1 1054 447 discriminator 15
	ld	a5,-96(s0)
	blt	a5,zero,.L77
	.loc 1 1054 473 discriminator 17
	ld	a4,-96(s0)
	li	a5,31
	ble	a4,a5,.L78
.L77:
.LBB21:
	.loc 1 1054 594 discriminator 18
	lla	a0,.LC9
	call	puts
	.loc 1 1054 631 discriminator 20
	lla	a5,stackframe
	beq	a5,zero,.L79
	.loc 1 1054 644 discriminator 21
	call	stackframe
	j	.L80
.L79:
	.loc 1 1054 665 discriminator 22
	lla	a0,.LC1
	call	puts
	.loc 1 1054 685 discriminator 25
	lla	a0,__func__.34
	call	puts
.L80:
	.loc 1 1054 703 discriminator 27
	li	a0,2
	call	exit
.L78:
.LBE21:
	.loc 1 1054 714 discriminator 29
	ld	a4,-96(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE20:
	.loc 1 1054 748 discriminator 29
	lw	a4,524(a5)
	.loc 1 1054 767 discriminator 29
	lw	a5,-112(s0)
	.loc 1 1054 389 discriminator 29
	bgeu	a4,a5,.L76
.LBB22:
	.loc 1 1055 58
	lw	a5,-116(s0)
	.loc 1 1055 35
	sd	a5,-104(s0)
	.loc 1 1055 76
	ld	a5,-104(s0)
	blt	a5,zero,.L81
	.loc 1 1055 102 discriminator 2
	ld	a4,-104(s0)
	li	a5,31
	ble	a4,a5,.L82
.L81:
.LBB23:
	.loc 1 1055 223 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1055 260 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L83
	.loc 1 1055 273 discriminator 6
	call	stackframe
	j	.L84
.L83:
	.loc 1 1055 294 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1055 314 discriminator 10
	lla	a0,__func__.34
	call	puts
.L84:
	.loc 1 1055 332 discriminator 12
	li	a0,2
	call	exit
.L82:
.LBE23:
	.loc 1 1055 343 discriminator 14
	ld	a4,-104(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE22:
	.loc 1 1055 377 discriminator 14
	lw	a5,524(a5)
	.loc 1 1055 19 discriminator 14
	sw	a5,-112(s0)
	.loc 1 1056 19
	lw	a5,-116(s0)
	sw	a5,-108(s0)
.L76:
	.loc 1 1053 23 discriminator 2
	lw	a5,-116(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-116(s0)
.L71:
	.loc 1 1053 18 discriminator 1
	lw	a4,-116(s0)
	li	a5,31
	ble	a4,a5,.L85
	.loc 1 1059 14
	lw	a5,-108(s0)
	.loc 1 1059 7
	blt	a5,zero,.L86
.LBB24:
	.loc 1 1060 50
	lw	a5,-108(s0)
	.loc 1 1060 27
	sd	a5,-40(s0)
	.loc 1 1060 73
	ld	a5,-40(s0)
	blt	a5,zero,.L87
	.loc 1 1060 99 discriminator 2
	ld	a4,-40(s0)
	li	a5,31
	ble	a4,a5,.L88
.L87:
.LBB25:
	.loc 1 1060 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1060 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L89
	.loc 1 1060 270 discriminator 6
	call	stackframe
	j	.L90
.L89:
	.loc 1 1060 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1060 311 discriminator 10
	lla	a0,__func__.34
	call	puts
.L90:
	.loc 1 1060 329 discriminator 12
	li	a0,2
	call	exit
.L88:
.LBE25:
	.loc 1 1060 340 discriminator 14
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE24:
	.loc 1 1060 374 discriminator 14
	lw	a5,520(a5)
	.loc 1 1060 11 discriminator 14
	beq	a5,zero,.L91
.LBB26:
	.loc 1 1060 430 discriminator 15
	lw	a5,-108(s0)
	.loc 1 1060 407 discriminator 15
	sd	a5,-48(s0)
	.loc 1 1060 453 discriminator 15
	ld	a5,-48(s0)
	blt	a5,zero,.L92
	.loc 1 1060 479 discriminator 17
	ld	a4,-48(s0)
	li	a5,31
	ble	a4,a5,.L93
.L92:
.LBB27:
	.loc 1 1060 600 discriminator 18
	lla	a0,.LC9
	call	puts
	.loc 1 1060 637 discriminator 20
	lla	a5,stackframe
	beq	a5,zero,.L94
	.loc 1 1060 650 discriminator 21
	call	stackframe
	j	.L95
.L94:
	.loc 1 1060 671 discriminator 22
	lla	a0,.LC1
	call	puts
	.loc 1 1060 691 discriminator 25
	lla	a0,__func__.34
	call	puts
.L95:
	.loc 1 1060 709 discriminator 27
	li	a0,2
	call	exit
.L93:
.LBE27:
	.loc 1 1060 720 discriminator 29
	ld	a4,-48(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE26:
	.loc 1 1060 754 discriminator 29
	lw	a5,0(a5)
	.loc 1 1060 390 discriminator 29
	beq	a5,zero,.L91
.LBB28:
	.loc 1 1061 69
	lw	a5,-108(s0)
	.loc 1 1061 45
	sd	a5,-56(s0)
	.loc 1 1061 92
	ld	a5,-56(s0)
	blt	a5,zero,.L96
	.loc 1 1061 119 discriminator 2
	ld	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L97
.L96:
.LBB29:
	.loc 1 1061 241 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1061 278 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L98
	.loc 1 1061 291 discriminator 6
	call	stackframe
	j	.L99
.L98:
	.loc 1 1061 312 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1061 332 discriminator 10
	lla	a0,__func__.34
	call	puts
.L99:
	.loc 1 1061 350 discriminator 12
	li	a0,2
	call	exit
.L97:
.LBE29:
	.loc 1 1061 361 discriminator 14
	ld	a4,-56(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE28:
	.loc 1 1061 396 discriminator 14
	lw	a5,0(a5)
	.loc 1 1061 13 discriminator 14
	slli	s1,a5,32
	srli	s1,s1,32
.LBB30:
	.loc 1 1061 452 discriminator 14
	lw	a5,-108(s0)
	.loc 1 1061 428 discriminator 14
	sd	a5,-64(s0)
	.loc 1 1061 475 discriminator 14
	ld	a5,-64(s0)
	blt	a5,zero,.L100
	.loc 1 1061 502 discriminator 16
	ld	a4,-64(s0)
	li	a5,31
	ble	a4,a5,.L101
.L100:
.LBB31:
	.loc 1 1061 624 discriminator 17
	lla	a0,.LC9
	call	puts
	.loc 1 1061 661 discriminator 19
	lla	a5,stackframe
	beq	a5,zero,.L102
	.loc 1 1061 674 discriminator 20
	call	stackframe
	j	.L103
.L102:
	.loc 1 1061 695 discriminator 21
	lla	a0,.LC1
	call	puts
	.loc 1 1061 715 discriminator 24
	lla	a0,__func__.34
	call	puts
.L103:
	.loc 1 1061 733 discriminator 26
	li	a0,2
	call	exit
.L101:
.LBE31:
	.loc 1 1061 744 discriminator 28
	ld	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE30:
	.loc 1 1061 779 discriminator 28
	addi	a5,a5,4
	.loc 1 1061 13 discriminator 28
	mv	a1,a5
	mv	a0,s1
	call	virtio_blk_write
.L91:
.LBB32:
	.loc 1 1063 48
	lw	a5,-108(s0)
	.loc 1 1063 24
	sd	a5,-72(s0)
	.loc 1 1063 71
	ld	a5,-72(s0)
	blt	a5,zero,.L104
	.loc 1 1063 98 discriminator 2
	ld	a4,-72(s0)
	li	a5,31
	ble	a4,a5,.L105
.L104:
.LBB33:
	.loc 1 1063 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1063 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L106
	.loc 1 1063 270 discriminator 6
	call	stackframe
	j	.L107
.L106:
	.loc 1 1063 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1063 311 discriminator 10
	lla	a0,__func__.34
	call	puts
.L107:
	.loc 1 1063 329 discriminator 12
	li	a0,2
	call	exit
.L105:
.LBE33:
	.loc 1 1063 340 discriminator 14
	ld	a4,-72(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE32:
	.loc 1 1063 381 discriminator 14
	sw	zero,0(a5)
.LBB34:
	.loc 1 1064 48
	lw	a5,-108(s0)
	.loc 1 1064 24
	sd	a5,-80(s0)
	.loc 1 1064 71
	ld	a5,-80(s0)
	blt	a5,zero,.L108
	.loc 1 1064 98 discriminator 2
	ld	a4,-80(s0)
	li	a5,31
	ble	a4,a5,.L109
.L108:
.LBB35:
	.loc 1 1064 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1064 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L110
	.loc 1 1064 270 discriminator 6
	call	stackframe
	j	.L111
.L110:
	.loc 1 1064 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1064 311 discriminator 10
	lla	a0,__func__.34
	call	puts
.L111:
	.loc 1 1064 329 discriminator 12
	li	a0,2
	call	exit
.L109:
.LBE35:
	.loc 1 1064 340 discriminator 14
	ld	a4,-80(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE34:
	.loc 1 1064 381 discriminator 14
	sw	zero,520(a5)
.L86:
	.loc 1 1066 16
	lw	a5,-108(s0)
	.loc 1 1067 1
	mv	a0,a5
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 128
	ld	s1,104(sp)
	.cfi_restore 9
	addi	sp,sp,128
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE15:
	.size	bcache_evict, .-bcache_evict
	.align	1
	.type	bcache_get, @function
bcache_get:
.LFB16:
	.loc 1 1070 1
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sd	ra,152(sp)
	sd	s0,144(sp)
	sd	s1,136(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-148(s0)
	.loc 1 1074 5
	addi	a5,s0,-132
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1075 5
	addi	a5,s0,-136
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1076 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1077 16
	lla	a5,bcache_time
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_time
	sw	a4,0(a5)
	.loc 1 1078 10
	sw	zero,-132(s0)
	.loc 1 1078 5
	j	.L114
.L129:
.LBB36:
	.loc 1 1079 51
	lw	a5,-132(s0)
	.loc 1 1079 27
	sd	a5,-112(s0)
	.loc 1 1079 69
	ld	a5,-112(s0)
	blt	a5,zero,.L115
	.loc 1 1079 96 discriminator 2
	ld	a4,-112(s0)
	li	a5,31
	ble	a4,a5,.L116
.L115:
.LBB37:
	.loc 1 1079 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1079 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L117
	.loc 1 1079 268 discriminator 6
	call	stackframe
	j	.L118
.L117:
	.loc 1 1079 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1079 309 discriminator 10
	lla	a0,__func__.33
	call	puts
.L118:
	.loc 1 1079 327 discriminator 12
	li	a0,2
	call	exit
.L116:
.LBE37:
	.loc 1 1079 338 discriminator 14
	ld	a4,-112(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE36:
	.loc 1 1079 373 discriminator 14
	lw	a5,0(a5)
	.loc 1 1079 11 discriminator 14
	lw	a4,-148(s0)
	sext.w	a4,a4
	bne	a4,a5,.L119
.LBB38:
	.loc 1 1080 52
	lw	a5,-132(s0)
	.loc 1 1080 28
	sd	a5,-120(s0)
	.loc 1 1080 70
	ld	a5,-120(s0)
	blt	a5,zero,.L120
	.loc 1 1080 97 discriminator 2
	ld	a4,-120(s0)
	li	a5,31
	ble	a4,a5,.L121
.L120:
.LBB39:
	.loc 1 1080 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1080 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L122
	.loc 1 1080 269 discriminator 6
	call	stackframe
	j	.L123
.L122:
	.loc 1 1080 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1080 310 discriminator 10
	lla	a0,__func__.33
	call	puts
.L123:
	.loc 1 1080 328 discriminator 12
	li	a0,2
	call	exit
.L121:
.LBE39:
	.loc 1 1080 339 discriminator 14
	ld	a4,-120(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE38:
	.loc 1 1080 374 discriminator 14
	lw	a4,516(a5)
	.loc 1 1080 391 discriminator 14
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,516(a5)
.LBB40:
	.loc 1 1081 52
	lw	a5,-132(s0)
	.loc 1 1081 28
	sd	a5,-128(s0)
	.loc 1 1081 70
	ld	a5,-128(s0)
	blt	a5,zero,.L124
	.loc 1 1081 97 discriminator 2
	ld	a4,-128(s0)
	li	a5,31
	ble	a4,a5,.L125
.L124:
.LBB41:
	.loc 1 1081 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1081 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L126
	.loc 1 1081 269 discriminator 6
	call	stackframe
	j	.L127
.L126:
	.loc 1 1081 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1081 310 discriminator 10
	lla	a0,__func__.33
	call	puts
.L127:
	.loc 1 1081 328 discriminator 12
	li	a0,2
	call	exit
.L125:
.LBE41:
	.loc 1 1081 339 discriminator 14
	ld	a4,-128(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE40:
	.loc 1 1081 383 discriminator 14
	lla	a4,bcache_time
	lw	a4,0(a4)
	sw	a4,524(a5)
	.loc 1 1082 24
	lla	a5,bcache_hits
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_hits
	sw	a4,0(a5)
	.loc 1 1083 39
	lw	a4,-132(s0)
	.loc 1 1083 32
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	j	.L172
.L119:
	.loc 1 1078 23 discriminator 2
	lw	a5,-132(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-132(s0)
.L114:
	.loc 1 1078 18 discriminator 1
	lw	a4,-132(s0)
	li	a5,31
	ble	a4,a5,.L129
	.loc 1 1086 18
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_misses
	sw	a4,0(a5)
	.loc 1 1087 9
	li	a5,-1
	sw	a5,-136(s0)
	.loc 1 1088 12
	sw	zero,-140(s0)
	.loc 1 1088 5
	j	.L130
.L137:
.LBB42:
	.loc 1 1089 51
	lw	a5,-140(s0)
	.loc 1 1089 27
	sd	a5,-40(s0)
	.loc 1 1089 71
	ld	a5,-40(s0)
	blt	a5,zero,.L131
	.loc 1 1089 98 discriminator 2
	ld	a4,-40(s0)
	li	a5,31
	ble	a4,a5,.L132
.L131:
.LBB43:
	.loc 1 1089 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1089 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L133
	.loc 1 1089 270 discriminator 6
	call	stackframe
	j	.L134
.L133:
	.loc 1 1089 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1089 311 discriminator 10
	lla	a0,__func__.33
	call	puts
.L134:
	.loc 1 1089 329 discriminator 12
	li	a0,2
	call	exit
.L132:
.LBE43:
	.loc 1 1089 340 discriminator 14
	ld	a4,-40(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE42:
	.loc 1 1089 375 discriminator 14
	lw	a5,0(a5)
	.loc 1 1089 11 discriminator 14
	bne	a5,zero,.L135
	.loc 1 1090 17
	lw	a5,-140(s0)
	sw	a5,-136(s0)
	.loc 1 1091 13
	j	.L136
.L135:
	.loc 1 1088 29 discriminator 2
	lw	a5,-140(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-140(s0)
.L130:
	.loc 1 1088 22 discriminator 1
	lw	a4,-140(s0)
	li	a5,31
	ble	a4,a5,.L137
.L136:
	.loc 1 1094 12
	lw	a5,-136(s0)
	.loc 1 1094 7
	bge	a5,zero,.L138
	.loc 1 1095 14
	call	bcache_evict
	mv	a5,a0
	.loc 1 1095 13 discriminator 1
	sw	a5,-136(s0)
.L138:
	.loc 1 1097 12
	lw	a5,-136(s0)
	.loc 1 1097 7
	bge	a5,zero,.L139
	.loc 1 1098 13
	sw	zero,-136(s0)
.LBB44:
	.loc 1 1099 51
	lw	a5,-136(s0)
	.loc 1 1099 27
	sd	a5,-48(s0)
	.loc 1 1099 72
	ld	a5,-48(s0)
	blt	a5,zero,.L140
	.loc 1 1099 99 discriminator 2
	ld	a4,-48(s0)
	li	a5,31
	ble	a4,a5,.L141
.L140:
.LBB45:
	.loc 1 1099 221 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1099 258 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L142
	.loc 1 1099 271 discriminator 6
	call	stackframe
	j	.L143
.L142:
	.loc 1 1099 292 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1099 312 discriminator 10
	lla	a0,__func__.33
	call	puts
.L143:
	.loc 1 1099 330 discriminator 12
	li	a0,2
	call	exit
.L141:
.LBE45:
	.loc 1 1099 341 discriminator 14
	ld	a4,-48(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE44:
	.loc 1 1099 376 discriminator 14
	lw	a5,520(a5)
	.loc 1 1099 11 discriminator 14
	beq	a5,zero,.L139
.LBB46:
	.loc 1 1100 69
	lw	a5,-136(s0)
	.loc 1 1100 45
	sd	a5,-56(s0)
	.loc 1 1100 90
	ld	a5,-56(s0)
	blt	a5,zero,.L144
	.loc 1 1100 117 discriminator 2
	ld	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L145
.L144:
.LBB47:
	.loc 1 1100 239 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1100 276 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L146
	.loc 1 1100 289 discriminator 6
	call	stackframe
	j	.L147
.L146:
	.loc 1 1100 310 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1100 330 discriminator 10
	lla	a0,__func__.33
	call	puts
.L147:
	.loc 1 1100 348 discriminator 12
	li	a0,2
	call	exit
.L145:
.LBE47:
	.loc 1 1100 359 discriminator 14
	ld	a4,-56(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE46:
	.loc 1 1100 394 discriminator 14
	lw	a5,0(a5)
	.loc 1 1100 13 discriminator 14
	slli	s1,a5,32
	srli	s1,s1,32
.LBB48:
	.loc 1 1100 450 discriminator 14
	lw	a5,-136(s0)
	.loc 1 1100 426 discriminator 14
	sd	a5,-64(s0)
	.loc 1 1100 471 discriminator 14
	ld	a5,-64(s0)
	blt	a5,zero,.L148
	.loc 1 1100 498 discriminator 16
	ld	a4,-64(s0)
	li	a5,31
	ble	a4,a5,.L149
.L148:
.LBB49:
	.loc 1 1100 620 discriminator 17
	lla	a0,.LC9
	call	puts
	.loc 1 1100 657 discriminator 19
	lla	a5,stackframe
	beq	a5,zero,.L150
	.loc 1 1100 670 discriminator 20
	call	stackframe
	j	.L151
.L150:
	.loc 1 1100 691 discriminator 21
	lla	a0,.LC1
	call	puts
	.loc 1 1100 711 discriminator 24
	lla	a0,__func__.33
	call	puts
.L151:
	.loc 1 1100 729 discriminator 26
	li	a0,2
	call	exit
.L149:
.LBE49:
	.loc 1 1100 740 discriminator 28
	ld	a4,-64(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE48:
	.loc 1 1100 775 discriminator 28
	addi	a5,a5,4
	.loc 1 1100 13 discriminator 28
	mv	a1,a5
	mv	a0,s1
	call	virtio_blk_write
.L139:
.LBB50:
	.loc 1 1103 44
	lw	a5,-136(s0)
	.loc 1 1103 20
	sd	a5,-72(s0)
	.loc 1 1103 65
	ld	a5,-72(s0)
	blt	a5,zero,.L152
	.loc 1 1103 92 discriminator 2
	ld	a4,-72(s0)
	li	a5,31
	ble	a4,a5,.L153
.L152:
.LBB51:
	.loc 1 1103 214 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1103 251 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L154
	.loc 1 1103 264 discriminator 6
	call	stackframe
	j	.L155
.L154:
	.loc 1 1103 285 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1103 305 discriminator 10
	lla	a0,__func__.33
	call	puts
.L155:
	.loc 1 1103 323 discriminator 12
	li	a0,2
	call	exit
.L153:
.LBE51:
	.loc 1 1103 334 discriminator 14
	ld	a4,-72(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE50:
	.loc 1 1103 375 discriminator 14
	lw	a4,-148(s0)
	sw	a4,0(a5)
.LBB52:
	.loc 1 1104 44
	lw	a5,-136(s0)
	.loc 1 1104 20
	sd	a5,-80(s0)
	.loc 1 1104 65
	ld	a5,-80(s0)
	blt	a5,zero,.L156
	.loc 1 1104 92 discriminator 2
	ld	a4,-80(s0)
	li	a5,31
	ble	a4,a5,.L157
.L156:
.LBB53:
	.loc 1 1104 214 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1104 251 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L158
	.loc 1 1104 264 discriminator 6
	call	stackframe
	j	.L159
.L158:
	.loc 1 1104 285 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1104 305 discriminator 10
	lla	a0,__func__.33
	call	puts
.L159:
	.loc 1 1104 323 discriminator 12
	li	a0,2
	call	exit
.L157:
.LBE53:
	.loc 1 1104 334 discriminator 14
	ld	a4,-80(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE52:
	.loc 1 1104 375 discriminator 14
	sw	zero,520(a5)
.LBB54:
	.loc 1 1105 44
	lw	a5,-136(s0)
	.loc 1 1105 20
	sd	a5,-88(s0)
	.loc 1 1105 65
	ld	a5,-88(s0)
	blt	a5,zero,.L160
	.loc 1 1105 92 discriminator 2
	ld	a4,-88(s0)
	li	a5,31
	ble	a4,a5,.L161
.L160:
.LBB55:
	.loc 1 1105 214 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1105 251 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L162
	.loc 1 1105 264 discriminator 6
	call	stackframe
	j	.L163
.L162:
	.loc 1 1105 285 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1105 305 discriminator 10
	lla	a0,__func__.33
	call	puts
.L163:
	.loc 1 1105 323 discriminator 12
	li	a0,2
	call	exit
.L161:
.LBE55:
	.loc 1 1105 334 discriminator 14
	ld	a4,-88(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE54:
	.loc 1 1105 376 discriminator 14
	li	a4,1
	sw	a4,516(a5)
.LBB56:
	.loc 1 1106 44
	lw	a5,-136(s0)
	.loc 1 1106 20
	sd	a5,-96(s0)
	.loc 1 1106 65
	ld	a5,-96(s0)
	blt	a5,zero,.L164
	.loc 1 1106 92 discriminator 2
	ld	a4,-96(s0)
	li	a5,31
	ble	a4,a5,.L165
.L164:
.LBB57:
	.loc 1 1106 214 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1106 251 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L166
	.loc 1 1106 264 discriminator 6
	call	stackframe
	j	.L167
.L166:
	.loc 1 1106 285 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1106 305 discriminator 10
	lla	a0,__func__.33
	call	puts
.L167:
	.loc 1 1106 323 discriminator 12
	li	a0,2
	call	exit
.L165:
.LBE57:
	.loc 1 1106 334 discriminator 14
	ld	a4,-96(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE56:
	.loc 1 1106 378 discriminator 14
	lla	a4,bcache_time
	lw	a4,0(a4)
	sw	a4,524(a5)
	.loc 1 1107 5
	lwu	s1,-148(s0)
.LBB58:
	.loc 1 1107 66
	lw	a5,-136(s0)
	.loc 1 1107 42
	sd	a5,-104(s0)
	.loc 1 1107 87
	ld	a5,-104(s0)
	blt	a5,zero,.L168
	.loc 1 1107 114 discriminator 2
	ld	a4,-104(s0)
	li	a5,31
	ble	a4,a5,.L169
.L168:
.LBB59:
	.loc 1 1107 236 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1107 273 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L170
	.loc 1 1107 286 discriminator 6
	call	stackframe
	j	.L171
.L170:
	.loc 1 1107 307 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1107 327 discriminator 10
	lla	a0,__func__.33
	call	puts
.L171:
	.loc 1 1107 345 discriminator 12
	li	a0,2
	call	exit
.L169:
.LBE59:
	.loc 1 1107 356 discriminator 14
	ld	a4,-104(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.LBE58:
	.loc 1 1107 391 discriminator 14
	addi	a5,a5,4
	.loc 1 1107 5 discriminator 14
	mv	a1,a5
	mv	a0,s1
	call	virtio_blk_read
	.loc 1 1108 23
	lw	a4,-136(s0)
	.loc 1 1108 16
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.L172:
	.loc 1 1109 1
	mv	a0,a5
	ld	ra,152(sp)
	.cfi_restore 1
	ld	s0,144(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 160
	ld	s1,136(sp)
	.cfi_restore 9
	addi	sp,sp,160
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE16:
	.size	bcache_get, .-bcache_get
	.align	1
	.type	bcache_release, @function
bcache_release:
.LFB17:
	.loc 1 1112 1
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
	.loc 1 1113 10
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 1113 7
	beq	a5,zero,.L175
	.loc 1 1114 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 1 1114 19
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-24(s0)
	sw	a4,516(a5)
.L175:
	.loc 1 1116 1
	nop
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE17:
	.size	bcache_release, .-bcache_release
	.align	1
	.globl	read_block
	.type	read_block, @function
read_block:
.LFB18:
	.loc 1 1119 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 1121 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1122 8
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	mv	a5,a0
	.loc 1 1122 7 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1123 18
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 1123 5
	li	a2,512
	mv	a1,a5
	ld	a0,-48(s0)
	call	memcpy
	.loc 1 1124 5
	ld	a5,-24(s0)
	mv	a0,a5
	call	bcache_release
	.loc 1 1125 1
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
.LFE18:
	.size	read_block, .-read_block
	.align	1
	.type	virtio_blk_write, @function
virtio_blk_write:
.LFB19:
	.loc 1 1128 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	sd	s1,40(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	sd	a1,-64(s0)
	.loc 1 1129 13
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 1 1130 15
	lla	a5,req
	ld	a4,-56(s0)
	sd	a4,8(a5)
	.loc 1 1131 17
	lla	a5,req
	sw	zero,4(a5)
	.loc 1 1132 16
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 1 1133 5
	li	a2,512
	ld	a1,-64(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 1 1134 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 1134 18
	lla	a4,req
	.loc 1 1134 17
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 1135 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 1135 16
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,16
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 1136 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 1 1136 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 1137 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 1137 18
	lla	a4,dma_buf
	.loc 1 1137 17
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 1138 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 1138 16
	lbu	a4,8(a5)
	andi	a4,a4,0
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 1139 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 1 1139 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 1 1140 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 1140 18
	lla	a4,status_byte
	.loc 1 1140 17
	andi	a3,a4,255
	lbu	a2,0(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,0(a5)
	srli	a3,a4,8
	andi	a3,a3,255
	lbu	a2,1(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,1(a5)
	srli	a3,a4,16
	andi	a3,a3,255
	lbu	a2,2(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,2(a5)
	srli	a3,a4,24
	andi	a3,a3,255
	lbu	a2,3(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,3(a5)
	srli	a3,a4,32
	andi	a3,a3,255
	lbu	a2,4(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,4(a5)
	srli	a3,a4,40
	andi	a3,a3,255
	lbu	a2,5(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,5(a5)
	srli	a3,a4,48
	andi	a3,a3,255
	lbu	a2,6(a5)
	andi	a2,a2,0
	or	a3,a2,a3
	sb	a3,6(a5)
	srli	a4,a4,56
	lbu	a3,7(a5)
	andi	a3,a3,0
	or	a4,a3,a4
	sb	a4,7(a5)
	.loc 1 1141 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 1 1141 16
	lbu	a4,8(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,8(a5)
	lbu	a4,9(a5)
	andi	a4,a4,0
	sb	a4,9(a5)
	lbu	a4,10(a5)
	andi	a4,a4,0
	sb	a4,10(a5)
	lbu	a4,11(a5)
	andi	a4,a4,0
	sb	a4,11(a5)
	.loc 1 1142 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 1 1143 10
	lla	a5,avail
	ld	s1,0(a5)
.LBB60:
	.loc 1 1143 34
	lla	a5,Q
	lw	a5,0(a5)
	sw	a5,-36(s0)
	.loc 1 1143 60
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L178
.LBB61:
	.loc 1 1143 161 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1143 187 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L179
	.loc 1 1143 200 discriminator 4
	call	stackframe
	j	.L180
.L179:
	.loc 1 1143 221 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1143 241 discriminator 8
	lla	a0,__func__.32
	call	puts
.L180:
	.loc 1 1143 259 discriminator 10
	li	a0,2
	call	exit
.L178:
.LBE61:
	.loc 1 1143 277 discriminator 12
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a5,a5
	mv	a4,a5
	lw	a5,-36(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE60:
	.loc 1 1143 300 discriminator 12
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,s1,a5
	sh	zero,4(a5)
	.loc 1 1144 5
	fence	rw,rw
	.loc 1 1145 16
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 1 1145 15
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 1 1145 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 1 1145 15
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 1 1146 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 1 1147 10
	j	.L181
.L182:
	.loc 1 1148 9
	fence	rw,rw
.L181:
	.loc 1 1147 22
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L182
	.loc 1 1150 1
	nop
	nop
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	ld	s1,40(sp)
	.cfi_restore 9
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE19:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB20:
	.loc 1 1153 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 1155 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1156 8
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	mv	a5,a0
	.loc 1 1156 7 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1157 14
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 1 1157 5
	li	a2,512
	ld	a1,-48(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 1158 7
	ld	a5,-24(s0)
	.loc 1 1158 14
	li	a4,1
	sw	a4,520(a5)
	.loc 1 1159 5
	ld	a5,-24(s0)
	mv	a0,a5
	call	bcache_release
	.loc 1 1160 1
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
.LFE20:
	.size	write_block, .-write_block
	.align	1
	.type	check_perm, @function
check_perm:
.LFB21:
	.loc 1 1163 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	mv	a5,a1
	sw	a5,-60(s0)
	.loc 1 1168 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1169 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1170 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1171 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1172 7
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 1172 6 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1173 12
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 1 1173 18
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 1173 9
	sw	a5,-28(s0)
	.loc 1 1174 10
	li	a5,6
	sw	a5,-32(s0)
	.loc 1 1175 9
	ld	a5,-24(s0)
	lhu	a4,1018(a5)
	.loc 1 1175 18
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 1 1175 7
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L185
	.loc 1 1176 14
	li	a5,6
	sw	a5,-32(s0)
	j	.L186
.L185:
	.loc 1 1178 14
	ld	a5,-24(s0)
	lhu	a4,1020(a5)
	.loc 1 1178 23
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 1 1178 12
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L187
	.loc 1 1179 14
	li	a5,3
	sw	a5,-32(s0)
	j	.L186
.L187:
	.loc 1 1182 17
	ld	a4,-24(s0)
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	mv	a1,a5
	mv	a0,a4
	call	neoc_proc_has_supp_gid
	mv	a5,a0
	.loc 1 1182 55 discriminator 1
	beq	a5,zero,.L188
	.loc 1 1182 55 is_stmt 0 discriminator 2
	li	a5,3
	j	.L189
.L188:
	.loc 1 1182 55 discriminator 3
	li	a5,0
.L189:
	.loc 1 1182 14 is_stmt 1 discriminator 5
	sw	a5,-32(s0)
.L186:
	.loc 1 1184 16
	lw	a5,-28(s0)
	lw	a4,-32(s0)
	srlw	a5,a5,a4
	sext.w	a5,a5
	.loc 1 1184 24
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 1 1184 10
	sw	a5,-36(s0)
	.loc 1 1185 13
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 1185 7
	beq	a5,zero,.L190
	.loc 1 1185 25 discriminator 1
	lw	a5,-36(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 1 1185 16 discriminator 1
	bne	a5,zero,.L190
	.loc 1 1186 24
	li	a5,0
	j	.L194
.L190:
	.loc 1 1188 13
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1188 7
	beq	a5,zero,.L192
	.loc 1 1188 25 discriminator 1
	lw	a5,-36(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 1188 16 discriminator 1
	bne	a5,zero,.L192
	.loc 1 1189 24
	li	a5,0
	j	.L194
.L192:
	.loc 1 1191 13
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1191 7
	beq	a5,zero,.L193
	.loc 1 1191 25 discriminator 1
	lw	a5,-36(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1191 16 discriminator 1
	bne	a5,zero,.L193
	.loc 1 1192 24
	li	a5,0
	j	.L194
.L193:
	.loc 1 1194 16
	li	a5,1
.L194:
	.loc 1 1195 1
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
.LFE21:
	.size	check_perm, .-check_perm
	.align	1
	.globl	read_superblock
	.type	read_superblock, @function
read_superblock:
.LFB22:
	.loc 1 1198 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 1199 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 1 1200 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 1 1201 1
	nop
	ld	ra,8(sp)
	.cfi_restore 1
	ld	s0,0(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE22:
	.size	read_superblock, .-read_superblock
	.align	1
	.globl	read_inode
	.type	read_inode, @function
read_inode:
.LFB23:
	.loc 1 1204 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	sd	s1,56(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-80(s0)
	sw	a5,-68(s0)
	.loc 1 1209 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1210 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1211 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1212 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1213 7
	lw	a5,-68(s0)
	sext.w	a5,a5
	beq	a5,zero,.L197
	.loc 1 1213 23 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1213 14 discriminator 1
	lw	a4,-68(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L198
.L197:
	.loc 1 1214 9
	li	a2,88
	li	a1,0
	ld	a0,-80(s0)
	call	memset
	j	.L196
.L198:
	.loc 1 1217 19
	li	a5,5
	sw	a5,-44(s0)
	.loc 1 1218 13
	lla	a5,sb
	lw	s1,20(a5)
.LBB62:
	.loc 1 1218 66
	lw	a5,-44(s0)
	sw	a5,-36(s0)
	.loc 1 1218 105
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L200
.LBB63:
	.loc 1 1218 206 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 1218 234 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L201
	.loc 1 1218 247 discriminator 4
	call	stackframe
	j	.L202
.L201:
	.loc 1 1218 268 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1218 288 discriminator 8
	lla	a0,__func__.31
	call	puts
.L202:
	.loc 1 1218 306 discriminator 10
	li	a0,2
	call	exit
.L200:
.LBE63:
	.loc 1 1218 323 discriminator 12
	lw	a5,-68(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1218 328 discriminator 12
	lw	a4,-36(s0)
	divuw	a5,a5,a4
	sext.w	a5,a5
.LBE62:
	.loc 1 1218 34 discriminator 12
	addw	a5,a5,s1
	sext.w	a5,a5
	.loc 1 1218 10 discriminator 12
	sw	a5,-48(s0)
.LBB64:
	.loc 1 1219 43
	lw	a5,-44(s0)
	sw	a5,-40(s0)
	.loc 1 1219 82
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L203
.LBB65:
	.loc 1 1219 183 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1219 209 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L204
	.loc 1 1219 222 discriminator 4
	call	stackframe
	j	.L205
.L204:
	.loc 1 1219 243 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1219 263 discriminator 8
	lla	a0,__func__.31
	call	puts
.L205:
	.loc 1 1219 281 discriminator 10
	li	a0,2
	call	exit
.L203:
.LBE65:
	.loc 1 1219 298 discriminator 12
	lw	a5,-68(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1219 303 discriminator 12
	mv	a4,a5
	lw	a5,-40(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
.LBE64:
	.loc 1 1219 326 discriminator 12
	li	a5,88
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1219 11 discriminator 12
	sw	a5,-52(s0)
	.loc 1 1220 5
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1221 9
	lw	a5,-52(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	lla	a5,block_buf
	add	a5,a4,a5
	.loc 1 1221 8
	sd	a5,-64(s0)
	.loc 1 1222 11
	ld	a5,-64(s0)
	.loc 1 1222 10
	ld	a4,-80(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L196:
	.loc 1 1223 1
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	ld	s1,56(sp)
	.cfi_restore 9
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE23:
	.size	read_inode, .-read_inode
	.align	1
	.type	write_inode, @function
write_inode:
.LFB24:
	.loc 1 1226 1
	.cfi_startproc
	addi	sp,sp,-592
	.cfi_def_cfa_offset 592
	sd	ra,584(sp)
	sd	s0,576(sp)
	sd	s1,568(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,592
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-592(s0)
	sw	a5,-580(s0)
	.loc 1 1231 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1232 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1233 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1234 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1235 7
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L216
	.loc 1 1235 23 discriminator 1
	lla	a5,sb
	lw	a5,8(a5)
	.loc 1 1235 14 discriminator 1
	lw	a4,-580(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L216
	.loc 1 1238 19
	li	a5,5
	sw	a5,-44(s0)
	.loc 1 1239 13
	lla	a5,sb
	lw	s1,20(a5)
.LBB66:
	.loc 1 1239 66
	lw	a5,-44(s0)
	sw	a5,-36(s0)
	.loc 1 1239 105
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L210
.LBB67:
	.loc 1 1239 206 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 1239 234 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L211
	.loc 1 1239 247 discriminator 4
	call	stackframe
	j	.L212
.L211:
	.loc 1 1239 268 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1239 288 discriminator 8
	lla	a0,__func__.30
	call	puts
.L212:
	.loc 1 1239 306 discriminator 10
	li	a0,2
	call	exit
.L210:
.LBE67:
	.loc 1 1239 323 discriminator 12
	lw	a5,-580(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1239 328 discriminator 12
	lw	a4,-36(s0)
	divuw	a5,a5,a4
	sext.w	a5,a5
.LBE66:
	.loc 1 1239 34 discriminator 12
	addw	a5,a5,s1
	sext.w	a5,a5
	.loc 1 1239 10 discriminator 12
	sw	a5,-48(s0)
.LBB68:
	.loc 1 1240 43
	lw	a5,-44(s0)
	sw	a5,-40(s0)
	.loc 1 1240 82
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L213
.LBB69:
	.loc 1 1240 183 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1240 209 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L214
	.loc 1 1240 222 discriminator 4
	call	stackframe
	j	.L215
.L214:
	.loc 1 1240 243 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1240 263 discriminator 8
	lla	a0,__func__.30
	call	puts
.L215:
	.loc 1 1240 281 discriminator 10
	li	a0,2
	call	exit
.L213:
.LBE69:
	.loc 1 1240 298 discriminator 12
	lw	a5,-580(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1240 303 discriminator 12
	mv	a4,a5
	lw	a5,-40(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
.LBE68:
	.loc 1 1240 326 discriminator 12
	li	a5,88
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1240 11 discriminator 12
	sw	a5,-52(s0)
	.loc 1 1242 5
	addi	a5,s0,-576
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1243 5
	lw	a5,-48(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1244 9
	lw	a5,-52(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a4,s0,-576
	add	a5,a4,a5
	.loc 1 1244 8
	sd	a5,-64(s0)
	.loc 1 1245 5
	ld	a4,-64(s0)
	.loc 1 1245 9
	ld	a5,-592(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 1 1246 5
	lw	a5,-48(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L206
.L216:
	.loc 1 1236 17 discriminator 1
	nop
.L206:
	.loc 1 1247 1
	ld	ra,584(sp)
	.cfi_restore 1
	ld	s0,576(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 592
	ld	s1,568(sp)
	.cfi_restore 9
	addi	sp,sp,592
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE24:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB25:
	.loc 1 1250 1
	.cfi_startproc
	addi	sp,sp,-592
	.cfi_def_cfa_offset 592
	sd	ra,584(sp)
	sd	s0,576(sp)
	sd	s1,568(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,592
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-580(s0)
	.loc 1 1253 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1254 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1255 13
	lw	a5,-580(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	.loc 1 1255 12 discriminator 1
	sw	a5,-56(s0)
	.loc 1 1257 5
	addi	a5,s0,-576
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1258 5
	lw	a5,-56(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	read_block
.LBB70:
	.loc 1 1259 31
	li	a5,4096
	sw	a5,-36(s0)
	.loc 1 1259 64
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L218
.LBB71:
	.loc 1 1259 166 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1259 192 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L219
	.loc 1 1259 205 discriminator 4
	call	stackframe
	j	.L220
.L219:
	.loc 1 1259 226 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1259 246 discriminator 8
	lla	a0,__func__.29
	call	puts
.L220:
	.loc 1 1259 264 discriminator 10
	li	a0,2
	call	exit
.L218:
.LBE71:
	.loc 1 1259 279 discriminator 12
	lw	a5,-36(s0)
	lw	a4,-580(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE70:
	.loc 1 1259 7 discriminator 12
	sw	a5,-60(s0)
.LBB72:
.LBB73:
	.loc 1 1260 85
	li	a5,8
	sw	a5,-40(s0)
	.loc 1 1260 112
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L221
.LBB74:
	.loc 1 1260 214 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 1260 242 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L222
	.loc 1 1260 255 discriminator 4
	call	stackframe
	j	.L223
.L222:
	.loc 1 1260 276 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1260 296 discriminator 8
	lla	a0,__func__.29
	call	puts
.L223:
	.loc 1 1260 314 discriminator 10
	li	a0,2
	call	exit
.L221:
.LBE74:
	.loc 1 1260 330 discriminator 12
	lw	a4,-60(s0)
	lw	a5,-40(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE73:
	.loc 1 1260 32 discriminator 12
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-48(s0)
	.loc 1 1260 358 discriminator 12
	ld	a5,-48(s0)
	blt	a5,zero,.L224
	.loc 1 1260 385 discriminator 14
	ld	a4,-48(s0)
	li	a5,511
	ble	a4,a5,.L225
.L224:
.LBB75:
	.loc 1 1260 508 discriminator 15
	lla	a0,.LC9
	call	puts
	.loc 1 1260 545 discriminator 17
	lla	a5,stackframe
	beq	a5,zero,.L226
	.loc 1 1260 558 discriminator 18
	call	stackframe
	j	.L227
.L226:
	.loc 1 1260 579 discriminator 19
	lla	a0,.LC1
	call	puts
	.loc 1 1260 599 discriminator 22
	lla	a0,__func__.29
	call	puts
.L227:
	.loc 1 1260 617 discriminator 24
	li	a0,2
	call	exit
.L225:
.LBE75:
	.loc 1 1260 628 discriminator 26
	addi	a4,s0,-576
	ld	a5,-48(s0)
	add	a5,a4,a5
.LBE72:
	.loc 1 1260 18 discriminator 26
	lbu	a5,0(a5)
	sext.w	s1,a5
.LBB76:
	.loc 1 1260 680 discriminator 26
	li	a5,8
	sw	a5,-52(s0)
	.loc 1 1260 707 discriminator 26
	lw	a5,-52(s0)
	sext.w	a5,a5
	bne	a5,zero,.L228
.LBB77:
	.loc 1 1260 809 discriminator 27
	lla	a0,.LC8
	call	puts
	.loc 1 1260 835 discriminator 29
	lla	a5,stackframe
	beq	a5,zero,.L229
	.loc 1 1260 848 discriminator 30
	call	stackframe
	j	.L230
.L229:
	.loc 1 1260 869 discriminator 31
	lla	a0,.LC1
	call	puts
	.loc 1 1260 889 discriminator 34
	lla	a0,__func__.29
	call	puts
.L230:
	.loc 1 1260 907 discriminator 36
	li	a0,2
	call	exit
.L228:
.LBE77:
	.loc 1 1260 923 discriminator 38
	lw	a4,-60(s0)
	lw	a5,-52(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE76:
	.loc 1 1260 660 discriminator 38
	sraw	a5,s1,a5
	sext.w	a5,a5
	.loc 1 1260 948 discriminator 38
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 1261 1
	mv	a0,a5
	ld	ra,584(sp)
	.cfi_restore 1
	ld	s0,576(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 592
	ld	s1,568(sp)
	.cfi_restore 9
	addi	sp,sp,592
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE25:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB26:
	.loc 1 1264 1
	.cfi_startproc
	addi	sp,sp,-592
	.cfi_def_cfa_offset 592
	sd	ra,584(sp)
	sd	s0,576(sp)
	sd	s1,568(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,592
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-580(s0)
	.loc 1 1267 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1268 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1269 13
	lw	a5,-580(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	.loc 1 1269 12 discriminator 1
	sw	a5,-60(s0)
	.loc 1 1271 5
	addi	a5,s0,-576
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1272 5
	lw	a5,-60(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	read_block
.LBB78:
	.loc 1 1273 31
	li	a5,4096
	sw	a5,-36(s0)
	.loc 1 1273 64
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L233
.LBB79:
	.loc 1 1273 166 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1273 192 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L234
	.loc 1 1273 205 discriminator 4
	call	stackframe
	j	.L235
.L234:
	.loc 1 1273 226 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1273 246 discriminator 8
	lla	a0,__func__.27
	call	puts
.L235:
	.loc 1 1273 264 discriminator 10
	li	a0,2
	call	exit
.L233:
.LBE79:
	.loc 1 1273 279 discriminator 12
	lw	a5,-36(s0)
	lw	a4,-580(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE78:
	.loc 1 1273 7 discriminator 12
	sw	a5,-64(s0)
.LBB80:
	.loc 1 1274 672
	li	a5,8
	sw	a5,-40(s0)
	.loc 1 1274 699
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L236
.LBB81:
	.loc 1 1274 801 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1274 827 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L237
	.loc 1 1274 840 discriminator 4
	call	stackframe
	j	.L238
.L237:
	.loc 1 1274 861 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1274 881 discriminator 8
	lla	a0,__func__.27
	call	puts
.L238:
	.loc 1 1274 899 discriminator 10
	li	a0,2
	call	exit
.L236:
.LBE81:
	.loc 1 1274 915 discriminator 12
	lw	a4,-64(s0)
	lw	a5,-40(s0)
	remuw	a5,a4,a5
	sext.w	s1,a5
.LBE80:
.LBB82:
.LBB83:
	.loc 1 1274 73 discriminator 12
	li	a5,8
	sw	a5,-44(s0)
	.loc 1 1274 100 discriminator 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L239
.LBB84:
	.loc 1 1274 202 discriminator 13
	lla	a0,.LC0
	call	puts
	.loc 1 1274 230 discriminator 15
	lla	a5,stackframe
	beq	a5,zero,.L240
	.loc 1 1274 243 discriminator 16
	call	stackframe
	j	.L241
.L240:
	.loc 1 1274 264 discriminator 17
	lla	a0,.LC1
	call	puts
	.loc 1 1274 284 discriminator 20
	lla	a0,__func__.27
	call	puts
.L241:
	.loc 1 1274 302 discriminator 22
	li	a0,2
	call	exit
.L239:
.LBE84:
	.loc 1 1274 318 discriminator 24
	lw	a4,-64(s0)
	lw	a5,-44(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE83:
	.loc 1 1274 20 discriminator 24
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-56(s0)
	.loc 1 1274 346 discriminator 24
	ld	a5,-56(s0)
	blt	a5,zero,.L242
	.loc 1 1274 373 discriminator 26
	ld	a4,-56(s0)
	li	a5,511
	ble	a4,a5,.L243
.L242:
.LBB85:
	.loc 1 1274 496 discriminator 27
	lla	a0,.LC9
	call	puts
	.loc 1 1274 533 discriminator 29
	lla	a5,stackframe
	beq	a5,zero,.L244
	.loc 1 1274 546 discriminator 30
	call	stackframe
	j	.L245
.L244:
	.loc 1 1274 567 discriminator 31
	lla	a0,.LC1
	call	puts
	.loc 1 1274 587 discriminator 34
	lla	a0,__func__.27
	call	puts
.L245:
	.loc 1 1274 605 discriminator 36
	li	a0,2
	call	exit
.L243:
.LBE85:
	.loc 1 1274 616 discriminator 38
	addi	a4,s0,-576
	ld	a5,-56(s0)
	add	a5,a4,a5
.LBE82:
	.loc 1 1274 6 discriminator 38
	lbu	a4,0(a5)
	slliw	a3,a4,24
	sraiw	a3,a3,24
	.loc 1 1274 652 discriminator 38
	li	a4,1
	sllw	a4,a4,s1
	sext.w	a4,a4
	.loc 1 1274 648 discriminator 38
	slliw	a4,a4,24
	sraiw	a4,a4,24
	or	a4,a3,a4
	slliw	a4,a4,24
	sraiw	a4,a4,24
	andi	a4,a4,0xff
	sb	a4,0(a5)
	.loc 1 1275 5
	lw	a5,-60(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1276 1
	nop
	ld	ra,584(sp)
	.cfi_restore 1
	ld	s0,576(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 592
	ld	s1,568(sp)
	.cfi_restore 9
	addi	sp,sp,592
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE26:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB27:
	.loc 1 1279 1
	.cfi_startproc
	addi	sp,sp,-592
	.cfi_def_cfa_offset 592
	sd	ra,584(sp)
	sd	s0,576(sp)
	sd	s1,568(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,592
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-580(s0)
	.loc 1 1282 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1283 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1284 7
	lw	a5,-580(s0)
	sext.w	a5,a5
	beq	a5,zero,.L262
	.loc 1 1287 13
	lw	a5,-580(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	.loc 1 1287 12 discriminator 1
	sw	a5,-60(s0)
	.loc 1 1289 5
	addi	a5,s0,-576
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1290 5
	lw	a5,-60(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	read_block
.LBB86:
	.loc 1 1291 31
	li	a5,4096
	sw	a5,-36(s0)
	.loc 1 1291 64
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L249
.LBB87:
	.loc 1 1291 166 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1291 192 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L250
	.loc 1 1291 205 discriminator 4
	call	stackframe
	j	.L251
.L250:
	.loc 1 1291 226 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1291 246 discriminator 8
	lla	a0,__func__.26
	call	puts
.L251:
	.loc 1 1291 264 discriminator 10
	li	a0,2
	call	exit
.L249:
.LBE87:
	.loc 1 1291 279 discriminator 12
	lw	a5,-36(s0)
	lw	a4,-580(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE86:
	.loc 1 1291 7 discriminator 12
	sw	a5,-64(s0)
.LBB88:
	.loc 1 1292 673
	li	a5,8
	sw	a5,-40(s0)
	.loc 1 1292 700
	lw	a5,-40(s0)
	sext.w	a5,a5
	bne	a5,zero,.L252
.LBB89:
	.loc 1 1292 802 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1292 828 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L253
	.loc 1 1292 841 discriminator 4
	call	stackframe
	j	.L254
.L253:
	.loc 1 1292 862 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1292 882 discriminator 8
	lla	a0,__func__.26
	call	puts
.L254:
	.loc 1 1292 900 discriminator 10
	li	a0,2
	call	exit
.L252:
.LBE89:
	.loc 1 1292 916 discriminator 12
	lw	a4,-64(s0)
	lw	a5,-40(s0)
	remuw	a5,a4,a5
	sext.w	s1,a5
.LBE88:
.LBB90:
.LBB91:
	.loc 1 1292 73 discriminator 12
	li	a5,8
	sw	a5,-44(s0)
	.loc 1 1292 100 discriminator 12
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L255
.LBB92:
	.loc 1 1292 202 discriminator 13
	lla	a0,.LC0
	call	puts
	.loc 1 1292 230 discriminator 15
	lla	a5,stackframe
	beq	a5,zero,.L256
	.loc 1 1292 243 discriminator 16
	call	stackframe
	j	.L257
.L256:
	.loc 1 1292 264 discriminator 17
	lla	a0,.LC1
	call	puts
	.loc 1 1292 284 discriminator 20
	lla	a0,__func__.26
	call	puts
.L257:
	.loc 1 1292 302 discriminator 22
	li	a0,2
	call	exit
.L255:
.LBE92:
	.loc 1 1292 318 discriminator 24
	lw	a4,-64(s0)
	lw	a5,-44(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE91:
	.loc 1 1292 20 discriminator 24
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-56(s0)
	.loc 1 1292 346 discriminator 24
	ld	a5,-56(s0)
	blt	a5,zero,.L258
	.loc 1 1292 373 discriminator 26
	ld	a4,-56(s0)
	li	a5,511
	ble	a4,a5,.L259
.L258:
.LBB93:
	.loc 1 1292 496 discriminator 27
	lla	a0,.LC9
	call	puts
	.loc 1 1292 533 discriminator 29
	lla	a5,stackframe
	beq	a5,zero,.L260
	.loc 1 1292 546 discriminator 30
	call	stackframe
	j	.L261
.L260:
	.loc 1 1292 567 discriminator 31
	lla	a0,.LC1
	call	puts
	.loc 1 1292 587 discriminator 34
	lla	a0,__func__.26
	call	puts
.L261:
	.loc 1 1292 605 discriminator 36
	li	a0,2
	call	exit
.L259:
.LBE93:
	.loc 1 1292 616 discriminator 38
	addi	a4,s0,-576
	ld	a5,-56(s0)
	add	a5,a4,a5
.LBE90:
	.loc 1 1292 6 discriminator 38
	lbu	a4,0(a5)
	slliw	a3,a4,24
	sraiw	a3,a3,24
	.loc 1 1292 653 discriminator 38
	li	a4,1
	sllw	a4,a4,s1
	sext.w	a4,a4
	.loc 1 1292 648 discriminator 38
	slliw	a4,a4,24
	sraiw	a4,a4,24
	not	a4,a4
	slliw	a4,a4,24
	sraiw	a4,a4,24
	and	a4,a3,a4
	slliw	a4,a4,24
	sraiw	a4,a4,24
	andi	a4,a4,0xff
	sb	a4,0(a5)
	.loc 1 1293 5
	lw	a5,-60(s0)
	addi	a4,s0,-576
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L246
.L262:
	.loc 1 1285 17 discriminator 1
	nop
.L246:
	.loc 1 1294 1
	ld	ra,584(sp)
	.cfi_restore 1
	ld	s0,576(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 592
	ld	s1,568(sp)
	.cfi_restore 9
	addi	sp,sp,592
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB28:
	.loc 1 1297 1
	.cfi_startproc
	addi	sp,sp,-672
	.cfi_def_cfa_offset 672
	sd	ra,664(sp)
	sd	s0,656(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,672
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-672(s0)
	sw	a5,-660(s0)
	.loc 1 1308 5
	addi	a5,s0,-92
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1309 5
	addi	a5,s0,-96
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1310 5
	addi	a5,s0,-104
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1311 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1312 5
	addi	a5,s0,-112
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1313 5
	addi	a5,s0,-120
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1314 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1315 5
	addi	a5,s0,-128
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1316 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1317 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1318 10
	sw	zero,-92(s0)
	.loc 1 1318 5
	j	.L264
.L278:
.LBB94:
	.loc 1 1319 51
	lw	a5,-92(s0)
	.loc 1 1319 27
	sd	a5,-72(s0)
	.loc 1 1319 69
	ld	a5,-72(s0)
	blt	a5,zero,.L265
	.loc 1 1319 96 discriminator 2
	ld	a4,-72(s0)
	li	a5,13
	ble	a4,a5,.L266
.L265:
.LBB95:
	.loc 1 1319 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1319 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L267
	.loc 1 1319 270 discriminator 6
	call	stackframe
	j	.L268
.L267:
	.loc 1 1319 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1319 311 discriminator 10
	lla	a0,__func__.25
	call	puts
.L268:
	.loc 1 1319 329 discriminator 12
	li	a0,2
	call	exit
.L266:
.LBE95:
	.loc 1 1319 340 discriminator 14
	ld	a5,-72(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-672(s0)
	add	a5,a4,a5
.LBE94:
	.loc 1 1319 13 discriminator 14
	lw	a5,0(a5)
	.loc 1 1319 11 discriminator 14
	beq	a5,zero,.L269
.LBB96:
	.loc 1 1320 65
	lw	a5,-92(s0)
	.loc 1 1320 41
	sd	a5,-80(s0)
	.loc 1 1320 83
	ld	a5,-80(s0)
	blt	a5,zero,.L270
	.loc 1 1320 110 discriminator 2
	ld	a4,-80(s0)
	li	a5,13
	ble	a4,a5,.L271
.L270:
.LBB97:
	.loc 1 1320 234 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1320 271 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L272
	.loc 1 1320 284 discriminator 6
	call	stackframe
	j	.L273
.L272:
	.loc 1 1320 305 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1320 325 discriminator 10
	lla	a0,__func__.25
	call	puts
.L273:
	.loc 1 1320 343 discriminator 12
	li	a0,2
	call	exit
.L271:
.LBE97:
	.loc 1 1320 354 discriminator 14
	ld	a5,-80(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-672(s0)
	add	a5,a4,a5
.LBE96:
	.loc 1 1320 13 discriminator 14
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.LBB98:
	.loc 1 1321 50
	lw	a5,-92(s0)
	.loc 1 1321 26
	sd	a5,-88(s0)
	.loc 1 1321 68
	ld	a5,-88(s0)
	blt	a5,zero,.L274
	.loc 1 1321 95 discriminator 2
	ld	a4,-88(s0)
	li	a5,13
	ble	a4,a5,.L275
.L274:
.LBB99:
	.loc 1 1321 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1321 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L276
	.loc 1 1321 269 discriminator 6
	call	stackframe
	j	.L277
.L276:
	.loc 1 1321 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1321 310 discriminator 10
	lla	a0,__func__.25
	call	puts
.L277:
	.loc 1 1321 328 discriminator 12
	li	a0,2
	call	exit
.L275:
.LBE99:
	.loc 1 1321 372 discriminator 14
	ld	a4,-672(s0)
	ld	a5,-88(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L269:
.LBE98:
	.loc 1 1318 23 discriminator 2
	lw	a5,-92(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-92(s0)
.L264:
	.loc 1 1318 18 discriminator 1
	lw	a4,-92(s0)
	li	a5,11
	ble	a4,a5,.L278
.LBB100:
	.loc 1 1324 23
	li	a5,12
	sd	a5,-24(s0)
	.loc 1 1324 66
	ld	a5,-24(s0)
	blt	a5,zero,.L279
	.loc 1 1324 93 discriminator 2
	ld	a4,-24(s0)
	li	a5,13
	ble	a4,a5,.L280
.L279:
.LBB101:
	.loc 1 1324 217 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1324 254 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L281
	.loc 1 1324 267 discriminator 6
	call	stackframe
	j	.L282
.L281:
	.loc 1 1324 288 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1324 308 discriminator 10
	lla	a0,__func__.25
	call	puts
.L282:
	.loc 1 1324 326 discriminator 12
	li	a0,2
	call	exit
.L280:
.LBE101:
	.loc 1 1324 337 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-672(s0)
	add	a5,a4,a5
.LBE100:
	.loc 1 1324 9 discriminator 14
	lw	a5,0(a5)
	.loc 1 1324 7 discriminator 14
	beq	a5,zero,.L283
.LBB102:
	.loc 1 1325 29
	li	a5,12
	sd	a5,-32(s0)
	.loc 1 1325 72
	ld	a5,-32(s0)
	blt	a5,zero,.L284
	.loc 1 1325 99 discriminator 2
	ld	a4,-32(s0)
	li	a5,13
	ble	a4,a5,.L285
.L284:
.LBB103:
	.loc 1 1325 223 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1325 260 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L286
	.loc 1 1325 273 discriminator 6
	call	stackframe
	j	.L287
.L286:
	.loc 1 1325 294 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1325 314 discriminator 10
	lla	a0,__func__.25
	call	puts
.L287:
	.loc 1 1325 332 discriminator 12
	li	a0,2
	call	exit
.L285:
.LBE103:
	.loc 1 1325 343 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-672(s0)
	add	a5,a4,a5
.LBE102:
	.loc 1 1325 15 discriminator 14
	lw	a5,0(a5)
	.loc 1 1325 13 discriminator 14
	sw	a5,-96(s0)
	.loc 1 1326 9
	lw	a5,-96(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1327 13
	lla	a5,block_buf
	sd	a5,-104(s0)
	.loc 1 1328 16
	sw	zero,-108(s0)
	.loc 1 1328 9
	j	.L288
.L290:
	.loc 1 1329 20
	ld	a4,-104(s0)
	lw	a5,-108(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1329 15
	beq	a5,zero,.L289
	.loc 1 1330 34
	ld	a4,-104(s0)
	lw	a5,-108(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 1 1330 17
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L289:
	.loc 1 1328 64 discriminator 2
	lw	a5,-108(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-108(s0)
.L288:
	.loc 1 1328 30 discriminator 1
	lw	a5,-108(s0)
	mv	a4,a5
	li	a5,127
	bleu	a4,a5,.L290
	.loc 1 1333 9
	lw	a5,-96(s0)
	mv	a0,a5
	call	bitmap_clear
.LBB104:
	.loc 1 1334 22
	li	a5,12
	sd	a5,-40(s0)
	.loc 1 1334 65
	ld	a5,-40(s0)
	blt	a5,zero,.L291
	.loc 1 1334 92 discriminator 2
	ld	a4,-40(s0)
	li	a5,13
	ble	a4,a5,.L292
.L291:
.LBB105:
	.loc 1 1334 216 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1334 253 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L293
	.loc 1 1334 266 discriminator 6
	call	stackframe
	j	.L294
.L293:
	.loc 1 1334 287 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1334 307 discriminator 10
	lla	a0,__func__.25
	call	puts
.L294:
	.loc 1 1334 325 discriminator 12
	li	a0,2
	call	exit
.L292:
.LBE105:
	.loc 1 1334 369 discriminator 14
	ld	a4,-672(s0)
	ld	a5,-40(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L283:
.LBE104:
.LBB106:
	.loc 1 1336 23
	li	a5,13
	sd	a5,-48(s0)
	.loc 1 1336 68
	ld	a5,-48(s0)
	blt	a5,zero,.L295
	.loc 1 1336 95 discriminator 2
	ld	a4,-48(s0)
	li	a5,13
	ble	a4,a5,.L296
.L295:
.LBB107:
	.loc 1 1336 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1336 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L297
	.loc 1 1336 269 discriminator 6
	call	stackframe
	j	.L298
.L297:
	.loc 1 1336 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1336 310 discriminator 10
	lla	a0,__func__.25
	call	puts
.L298:
	.loc 1 1336 328 discriminator 12
	li	a0,2
	call	exit
.L296:
.LBE107:
	.loc 1 1336 339 discriminator 14
	ld	a5,-48(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-672(s0)
	add	a5,a4,a5
.LBE106:
	.loc 1 1336 9 discriminator 14
	lw	a5,0(a5)
	.loc 1 1336 7 discriminator 14
	beq	a5,zero,.L299
.LBB108:
	.loc 1 1337 29
	li	a5,13
	sd	a5,-56(s0)
	.loc 1 1337 74
	ld	a5,-56(s0)
	blt	a5,zero,.L300
	.loc 1 1337 101 discriminator 2
	ld	a4,-56(s0)
	li	a5,13
	ble	a4,a5,.L301
.L300:
.LBB109:
	.loc 1 1337 225 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1337 262 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L302
	.loc 1 1337 275 discriminator 6
	call	stackframe
	j	.L303
.L302:
	.loc 1 1337 296 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1337 316 discriminator 10
	lla	a0,__func__.25
	call	puts
.L303:
	.loc 1 1337 334 discriminator 12
	li	a0,2
	call	exit
.L301:
.LBE109:
	.loc 1 1337 345 discriminator 14
	ld	a5,-56(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-672(s0)
	add	a5,a4,a5
.LBE108:
	.loc 1 1337 15 discriminator 14
	lw	a5,0(a5)
	.loc 1 1337 13 discriminator 14
	sw	a5,-112(s0)
	.loc 1 1338 9
	lw	a5,-112(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1339 14
	lla	a5,block_buf
	sd	a5,-120(s0)
	.loc 1 1340 16
	sw	zero,-124(s0)
	.loc 1 1340 9
	j	.L304
.L310:
.LBB110:
	.loc 1 1341 22
	ld	a4,-120(s0)
	lw	a5,-124(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1341 15
	beq	a5,zero,.L315
	.loc 1 1344 23
	ld	a4,-120(s0)
	lw	a5,-124(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1344 17
	sw	a5,-128(s0)
	.loc 1 1346 13
	addi	a5,s0,-656
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1347 13
	lw	a5,-128(s0)
	addi	a4,s0,-656
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1348 19
	addi	a5,s0,-656
	sd	a5,-136(s0)
	.loc 1 1349 18
	sw	zero,-140(s0)
	.loc 1 1349 13
	j	.L307
.L309:
	.loc 1 1350 26
	ld	a4,-136(s0)
	lw	a5,-140(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1350 19
	beq	a5,zero,.L308
	.loc 1 1351 40
	ld	a4,-136(s0)
	lw	a5,-140(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 1 1351 21
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L308:
	.loc 1 1349 66 discriminator 2
	lw	a5,-140(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-140(s0)
.L307:
	.loc 1 1349 34 discriminator 1
	lw	a5,-140(s0)
	mv	a4,a5
	li	a5,127
	bleu	a4,a5,.L309
	.loc 1 1354 13
	lw	a5,-128(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L306
.L315:
	.loc 1 1342 17
	nop
.L306:
.LBE110:
	.loc 1 1340 64 discriminator 2
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-124(s0)
.L304:
	.loc 1 1340 30 discriminator 1
	lw	a5,-124(s0)
	mv	a4,a5
	li	a5,127
	bleu	a4,a5,.L310
	.loc 1 1356 9
	lw	a5,-112(s0)
	mv	a0,a5
	call	bitmap_clear
.LBB111:
	.loc 1 1357 22
	li	a5,13
	sd	a5,-64(s0)
	.loc 1 1357 67
	ld	a5,-64(s0)
	blt	a5,zero,.L311
	.loc 1 1357 94 discriminator 2
	ld	a4,-64(s0)
	li	a5,13
	ble	a4,a5,.L312
.L311:
.LBB112:
	.loc 1 1357 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1357 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L313
	.loc 1 1357 268 discriminator 6
	call	stackframe
	j	.L314
.L313:
	.loc 1 1357 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1357 309 discriminator 10
	lla	a0,__func__.25
	call	puts
.L314:
	.loc 1 1357 327 discriminator 12
	li	a0,2
	call	exit
.L312:
.LBE112:
	.loc 1 1357 371 discriminator 14
	ld	a4,-672(s0)
	ld	a5,-64(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L299:
.LBE111:
	.loc 1 1359 13
	ld	a5,-672(s0)
	sw	zero,8(a5)
	.loc 1 1360 5
	lw	a5,-660(s0)
	ld	a1,-672(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1361 1
	nop
	ld	ra,664(sp)
	.cfi_restore 1
	ld	s0,656(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 672
	addi	sp,sp,672
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE28:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB29:
	.loc 1 1364 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 1 1368 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1369 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1370 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
.LBB113:
	.loc 1 1371 39
	li	a5,4096
	sw	a5,-20(s0)
	.loc 1 1371 72
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L317
.LBB114:
	.loc 1 1371 174 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 1371 202 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L318
	.loc 1 1371 215 discriminator 4
	call	stackframe
	j	.L319
.L318:
	.loc 1 1371 236 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1371 256 discriminator 8
	lla	a0,__func__.24
	call	puts
.L319:
	.loc 1 1371 274 discriminator 10
	li	a0,2
	call	exit
.L317:
.LBE114:
	.loc 1 1371 289 discriminator 12
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 1371 312 discriminator 12
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 1371 317 discriminator 12
	lw	a5,-20(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE113:
	.loc 1 1371 15 discriminator 12
	sw	a5,-24(s0)
	.loc 1 1372 17
	lla	a5,sb
	lw	a4,24(a5)
	.loc 1 1372 37
	lw	a5,-24(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1372 14
	sw	a5,-28(s0)
	.loc 1 1373 10
	lw	a5,-28(s0)
	sw	a5,-32(s0)
	.loc 1 1373 5
	j	.L320
.L323:
	.loc 1 1374 13
	lw	a5,-32(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 1 1374 11 discriminator 1
	bne	a5,zero,.L321
.LBB115:
	.loc 1 1375 13
	lw	a5,-32(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 1 1377 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1378 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1379 13
	lw	a5,-32(s0)
	addi	a4,s0,-544
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1380 32
	lw	a5,-32(s0)
	j	.L324
.L321:
.LBE115:
	.loc 1 1373 46 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-32(s0)
.L320:
	.loc 1 1373 29 discriminator 1
	lla	a5,sb
	lw	a4,0(a5)
	.loc 1 1373 26 discriminator 1
	lw	a5,-32(s0)
	bgtu	a4,a5,.L323
	.loc 1 1383 16
	li	a5,0
.L324:
	.loc 1 1384 1
	mv	a0,a5
	ld	ra,536(sp)
	.cfi_restore 1
	ld	s0,528(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 544
	addi	sp,sp,544
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE29:
	.size	alloc_data_block, .-alloc_data_block
	.align	1
	.type	inode_blockno, @function
inode_blockno:
.LFB30:
	.loc 1 1387 1
	.cfi_startproc
	addi	sp,sp,-112
	.cfi_def_cfa_offset 112
	sd	ra,104(sp)
	sd	s0,96(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,112
	.cfi_def_cfa 8, 0
	sd	a0,-104(s0)
	mv	a5,a1
	sw	a5,-108(s0)
	.loc 1 1396 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1397 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1398 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1399 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1400 5
	addi	a5,s0,-68
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1401 5
	addi	a5,s0,-80
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1402 5
	addi	a5,s0,-84
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1403 5
	addi	a5,s0,-96
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1404 7
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L326
.LBB116:
	.loc 1 1405 39
	lwu	a5,-108(s0)
	sd	a5,-40(s0)
	.loc 1 1405 83
	ld	a5,-40(s0)
	blt	a5,zero,.L327
	.loc 1 1405 110 discriminator 2
	ld	a4,-40(s0)
	li	a5,13
	ble	a4,a5,.L328
.L327:
.LBB117:
	.loc 1 1405 234 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1405 271 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L329
	.loc 1 1405 284 discriminator 6
	call	stackframe
	j	.L330
.L329:
	.loc 1 1405 305 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1405 325 discriminator 10
	lla	a0,__func__.23
	call	puts
.L330:
	.loc 1 1405 343 discriminator 12
	li	a0,2
	call	exit
.L328:
.LBE117:
	.loc 1 1405 354 discriminator 14
	ld	a5,-40(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-104(s0)
	add	a5,a4,a5
.LBE116:
	.loc 1 1405 25 discriminator 14
	lw	a5,0(a5)
	.loc 1 1405 25 is_stmt 0
	j	.L344
.L326:
	.loc 1 1407 12 is_stmt 1
	lw	a5,-108(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L332
.LBB118:
	.loc 1 1408 37
	li	a5,12
	sd	a5,-32(s0)
	.loc 1 1408 80
	ld	a5,-32(s0)
	blt	a5,zero,.L333
	.loc 1 1408 107 discriminator 2
	ld	a4,-32(s0)
	li	a5,13
	ble	a4,a5,.L334
.L333:
.LBB119:
	.loc 1 1408 231 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1408 268 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L335
	.loc 1 1408 281 discriminator 6
	call	stackframe
	j	.L336
.L335:
	.loc 1 1408 302 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1408 322 discriminator 10
	lla	a0,__func__.23
	call	puts
.L336:
	.loc 1 1408 340 discriminator 12
	li	a0,2
	call	exit
.L334:
.LBE119:
	.loc 1 1408 351 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-104(s0)
	add	a5,a4,a5
.LBE118:
	.loc 1 1408 23 discriminator 14
	lw	a5,0(a5)
	.loc 1 1408 21 discriminator 14
	sw	a5,-44(s0)
	.loc 1 1409 24
	lw	a5,-44(s0)
	.loc 1 1409 11
	bne	a5,zero,.L337
	.loc 1 1410 32
	li	a5,0
	j	.L344
.L337:
	.loc 1 1412 9
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1413 16
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 1 1414 31
	ld	a4,-56(s0)
	.loc 1 1414 35
	lw	a5,-108(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 1414 31
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L344
.L332:
	.loc 1 1417 12
	lw	a5,-108(s0)
	addiw	a5,a5,-140
	sw	a5,-108(s0)
	.loc 1 1418 19
	lw	a5,-108(s0)
	srliw	a5,a5,7
	sext.w	a5,a5
	sw	a5,-60(s0)
	.loc 1 1419 24
	lw	a5,-108(s0)
	andi	a5,a5,127
	sext.w	a5,a5
	.loc 1 1419 19
	sw	a5,-64(s0)
.LBB120:
	.loc 1 1420 38
	li	a5,13
	sd	a5,-24(s0)
	.loc 1 1420 83
	ld	a5,-24(s0)
	blt	a5,zero,.L338
	.loc 1 1420 110 discriminator 2
	ld	a4,-24(s0)
	li	a5,13
	ble	a4,a5,.L339
.L338:
.LBB121:
	.loc 1 1420 234 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1420 271 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L340
	.loc 1 1420 284 discriminator 6
	call	stackframe
	j	.L341
.L340:
	.loc 1 1420 305 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1420 325 discriminator 10
	lla	a0,__func__.23
	call	puts
.L341:
	.loc 1 1420 343 discriminator 12
	li	a0,2
	call	exit
.L339:
.LBE121:
	.loc 1 1420 354 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-104(s0)
	add	a5,a4,a5
.LBE120:
	.loc 1 1420 24 discriminator 14
	lw	a5,0(a5)
	.loc 1 1420 22 discriminator 14
	sw	a5,-68(s0)
	.loc 1 1421 25
	lw	a5,-68(s0)
	.loc 1 1421 11
	bne	a5,zero,.L342
	.loc 1 1422 32
	li	a5,0
	j	.L344
.L342:
	.loc 1 1424 9
	lw	a5,-68(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1425 22
	lla	a5,block_buf
	sd	a5,-80(s0)
	.loc 1 1426 32
	ld	a4,-80(s0)
	lw	a5,-60(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1426 18
	sw	a5,-84(s0)
	.loc 1 1427 21
	lw	a5,-84(s0)
	.loc 1 1427 11
	bne	a5,zero,.L343
	.loc 1 1428 32
	li	a5,0
	j	.L344
.L343:
	.loc 1 1430 9
	lw	a5,-84(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1431 23
	lla	a5,block_buf
	sd	a5,-96(s0)
	.loc 1 1432 38
	ld	a4,-96(s0)
	lw	a5,-64(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
.L344:
	.loc 1 1434 1
	mv	a0,a5
	ld	ra,104(sp)
	.cfi_restore 1
	ld	s0,96(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 112
	addi	sp,sp,112
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE30:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB31:
	.loc 1 1437 1
	.cfi_startproc
	addi	sp,sp,-1712
	.cfi_def_cfa_offset 1712
	sd	ra,1704(sp)
	sd	s0,1696(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1712
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-1712(s0)
	mv	a4,a2
	sw	a5,-1700(s0)
	mv	a5,a4
	sw	a5,-1704(s0)
	.loc 1 1454 5
	addi	a5,s0,-76
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1455 5
	addi	a5,s0,-80
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1456 5
	addi	a5,s0,-84
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1457 5
	addi	a5,s0,-96
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1458 5
	addi	a5,s0,-100
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1459 5
	addi	a5,s0,-104
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1460 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1461 5
	addi	a5,s0,-112
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1462 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1463 5
	addi	a5,s0,-120
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1464 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1465 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1466 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1467 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1468 5
	addi	a5,s0,-152
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1469 5
	addi	a5,s0,-156
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1470 7
	lw	a5,-1704(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L346
.LBB122:
	.loc 1 1471 27
	lwu	a5,-1704(s0)
	sd	a5,-56(s0)
	.loc 1 1471 71
	ld	a5,-56(s0)
	blt	a5,zero,.L347
	.loc 1 1471 98 discriminator 2
	ld	a4,-56(s0)
	li	a5,13
	ble	a4,a5,.L348
.L347:
.LBB123:
	.loc 1 1471 222 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1471 259 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L349
	.loc 1 1471 272 discriminator 6
	call	stackframe
	j	.L350
.L349:
	.loc 1 1471 293 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1471 313 discriminator 10
	lla	a0,__func__.22
	call	puts
.L350:
	.loc 1 1471 331 discriminator 12
	li	a0,2
	call	exit
.L348:
.LBE123:
	.loc 1 1471 342 discriminator 14
	ld	a5,-56(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-1712(s0)
	add	a5,a4,a5
.LBE122:
	.loc 1 1471 13 discriminator 14
	lw	a5,0(a5)
	.loc 1 1471 11 discriminator 14
	bne	a5,zero,.L351
	.loc 1 1472 15
	call	alloc_data_block
	mv	a5,a0
	.loc 1 1472 14 discriminator 1
	sw	a5,-76(s0)
	.loc 1 1473 16
	lw	a5,-76(s0)
	.loc 1 1473 15
	bne	a5,zero,.L352
	.loc 1 1474 40
	li	a5,0
	j	.L390
.L352:
.LBB124:
	.loc 1 1476 26
	lwu	a5,-1704(s0)
	sd	a5,-64(s0)
	.loc 1 1476 70
	ld	a5,-64(s0)
	blt	a5,zero,.L354
	.loc 1 1476 97 discriminator 2
	ld	a4,-64(s0)
	li	a5,13
	ble	a4,a5,.L355
.L354:
.LBB125:
	.loc 1 1476 221 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1476 258 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L356
	.loc 1 1476 271 discriminator 6
	call	stackframe
	j	.L357
.L356:
	.loc 1 1476 292 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1476 312 discriminator 10
	lla	a0,__func__.22
	call	puts
.L357:
	.loc 1 1476 330 discriminator 12
	li	a0,2
	call	exit
.L355:
.LBE125:
	.loc 1 1476 374 discriminator 14
	lw	a4,-76(s0)
	ld	a3,-1712(s0)
	ld	a5,-64(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a3,a5
	sw	a4,0(a5)
.LBE124:
	.loc 1 1477 13
	lw	a5,-1700(s0)
	ld	a1,-1712(s0)
	mv	a0,a5
	call	write_inode
.L351:
.LBB126:
	.loc 1 1479 39
	lwu	a5,-1704(s0)
	sd	a5,-72(s0)
	.loc 1 1479 83
	ld	a5,-72(s0)
	blt	a5,zero,.L358
	.loc 1 1479 110 discriminator 2
	ld	a4,-72(s0)
	li	a5,13
	ble	a4,a5,.L359
.L358:
.LBB127:
	.loc 1 1479 234 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1479 271 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L360
	.loc 1 1479 284 discriminator 6
	call	stackframe
	j	.L361
.L360:
	.loc 1 1479 305 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1479 325 discriminator 10
	lla	a0,__func__.22
	call	puts
.L361:
	.loc 1 1479 343 discriminator 12
	li	a0,2
	call	exit
.L359:
.LBE127:
	.loc 1 1479 354 discriminator 14
	ld	a5,-72(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-1712(s0)
	add	a5,a4,a5
.LBE126:
	.loc 1 1479 25 discriminator 14
	lw	a5,0(a5)
	.loc 1 1479 25 is_stmt 0
	j	.L390
.L346:
	.loc 1 1481 7 is_stmt 1
	lw	a5,-1704(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L362
.LBB128:
.LBB129:
	.loc 1 1482 37
	li	a5,12
	sd	a5,-40(s0)
	.loc 1 1482 80
	ld	a5,-40(s0)
	blt	a5,zero,.L363
	.loc 1 1482 107 discriminator 2
	ld	a4,-40(s0)
	li	a5,13
	ble	a4,a5,.L364
.L363:
.LBB130:
	.loc 1 1482 231 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1482 268 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L365
	.loc 1 1482 281 discriminator 6
	call	stackframe
	j	.L366
.L365:
	.loc 1 1482 302 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1482 322 discriminator 10
	lla	a0,__func__.22
	call	puts
.L366:
	.loc 1 1482 340 discriminator 12
	li	a0,2
	call	exit
.L364:
.LBE130:
	.loc 1 1482 351 discriminator 14
	ld	a5,-40(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-1712(s0)
	add	a5,a4,a5
.LBE129:
	.loc 1 1482 23 discriminator 14
	lw	a5,0(a5)
	.loc 1 1482 21 discriminator 14
	sw	a5,-80(s0)
	.loc 1 1483 24
	lw	a5,-80(s0)
	.loc 1 1483 11
	bne	a5,zero,.L367
	.loc 1 1484 16
	call	alloc_data_block
	mv	a5,a0
	.loc 1 1484 15 discriminator 1
	sw	a5,-84(s0)
	.loc 1 1485 16
	lw	a5,-84(s0)
	.loc 1 1485 15
	bne	a5,zero,.L368
	.loc 1 1486 40
	li	a5,0
	j	.L390
.L368:
.LBB131:
	.loc 1 1488 26
	li	a5,12
	sd	a5,-48(s0)
	.loc 1 1488 69
	ld	a5,-48(s0)
	blt	a5,zero,.L370
	.loc 1 1488 96 discriminator 2
	ld	a4,-48(s0)
	li	a5,13
	ble	a4,a5,.L371
.L370:
.LBB132:
	.loc 1 1488 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1488 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L372
	.loc 1 1488 270 discriminator 6
	call	stackframe
	j	.L373
.L372:
	.loc 1 1488 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1488 311 discriminator 10
	lla	a0,__func__.22
	call	puts
.L373:
	.loc 1 1488 329 discriminator 12
	li	a0,2
	call	exit
.L371:
.LBE132:
	.loc 1 1488 373 discriminator 14
	lw	a4,-84(s0)
	ld	a3,-1712(s0)
	ld	a5,-48(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a3,a5
	sw	a4,0(a5)
.LBE131:
	.loc 1 1489 13
	lw	a5,-1700(s0)
	ld	a1,-1712(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1490 25
	lw	a5,-84(s0)
	sw	a5,-80(s0)
.L367:
	.loc 1 1493 9
	addi	a5,s0,-1696
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1494 9
	lw	a5,-80(s0)
	addi	a4,s0,-1696
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1495 16
	addi	a5,s0,-1696
	sd	a5,-96(s0)
	.loc 1 1496 14
	lw	a5,-1704(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	.loc 1 1496 10
	sw	a5,-100(s0)
	.loc 1 1497 19
	ld	a4,-96(s0)
	lw	a5,-100(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1497 11
	bne	a5,zero,.L374
	.loc 1 1498 16
	call	alloc_data_block
	mv	a5,a0
	.loc 1 1498 15 discriminator 1
	sw	a5,-104(s0)
	.loc 1 1499 16
	lw	a5,-104(s0)
	.loc 1 1499 15
	bne	a5,zero,.L375
	.loc 1 1500 40
	li	a5,0
	j	.L390
.L375:
	.loc 1 1502 20
	ld	a4,-96(s0)
	lw	a5,-100(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 1 1502 23
	lw	a4,-104(s0)
	sw	a4,0(a5)
	.loc 1 1503 13
	lw	a5,-80(s0)
	addi	a4,s0,-1696
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L374:
	.loc 1 1505 31
	ld	a4,-96(s0)
	lw	a5,-100(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L390
.L362:
.LBE128:
	.loc 1 1507 11
	lw	a5,-1704(s0)
	addiw	a5,a5,-140
	sext.w	a5,a5
	.loc 1 1507 7
	sw	a5,-108(s0)
	.loc 1 1508 9
	lw	a5,-108(s0)
	srliw	a5,a5,7
	sext.w	a5,a5
	sw	a5,-112(s0)
	.loc 1 1509 13
	lw	a5,-108(s0)
	andi	a5,a5,127
	sext.w	a5,a5
	.loc 1 1509 9
	sw	a5,-116(s0)
.LBB133:
	.loc 1 1510 34
	li	a5,13
	sd	a5,-24(s0)
	.loc 1 1510 79
	ld	a5,-24(s0)
	blt	a5,zero,.L376
	.loc 1 1510 106 discriminator 2
	ld	a4,-24(s0)
	li	a5,13
	ble	a4,a5,.L377
.L376:
.LBB134:
	.loc 1 1510 230 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1510 267 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L378
	.loc 1 1510 280 discriminator 6
	call	stackframe
	j	.L379
.L378:
	.loc 1 1510 301 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1510 321 discriminator 10
	lla	a0,__func__.22
	call	puts
.L379:
	.loc 1 1510 339 discriminator 12
	li	a0,2
	call	exit
.L377:
.LBE134:
	.loc 1 1510 350 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	ld	a4,-1712(s0)
	add	a5,a4,a5
.LBE133:
	.loc 1 1510 20 discriminator 14
	lw	a5,0(a5)
	.loc 1 1510 18 discriminator 14
	sw	a5,-120(s0)
	.loc 1 1511 21
	lw	a5,-120(s0)
	.loc 1 1511 7
	bne	a5,zero,.L380
	.loc 1 1512 14
	call	alloc_data_block
	mv	a5,a0
	.loc 1 1512 13 discriminator 1
	sw	a5,-124(s0)
	.loc 1 1513 12
	lw	a5,-124(s0)
	.loc 1 1513 11
	bne	a5,zero,.L381
	.loc 1 1514 32
	li	a5,0
	j	.L390
.L381:
.LBB135:
	.loc 1 1516 22
	li	a5,13
	sd	a5,-32(s0)
	.loc 1 1516 67
	ld	a5,-32(s0)
	blt	a5,zero,.L382
	.loc 1 1516 94 discriminator 2
	ld	a4,-32(s0)
	li	a5,13
	ble	a4,a5,.L383
.L382:
.LBB136:
	.loc 1 1516 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1516 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L384
	.loc 1 1516 268 discriminator 6
	call	stackframe
	j	.L385
.L384:
	.loc 1 1516 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1516 309 discriminator 10
	lla	a0,__func__.22
	call	puts
.L385:
	.loc 1 1516 327 discriminator 12
	li	a0,2
	call	exit
.L383:
.LBE136:
	.loc 1 1516 371 discriminator 14
	lw	a4,-124(s0)
	ld	a3,-1712(s0)
	ld	a5,-32(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a3,a5
	sw	a4,0(a5)
.LBE135:
	.loc 1 1517 9
	lw	a5,-1700(s0)
	ld	a1,-1712(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 1518 22
	lw	a5,-124(s0)
	sw	a5,-120(s0)
.L380:
	.loc 1 1521 5
	addi	a5,s0,-672
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1522 5
	lw	a5,-120(s0)
	addi	a4,s0,-672
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1523 18
	addi	a5,s0,-672
	sd	a5,-136(s0)
	.loc 1 1524 28
	ld	a4,-136(s0)
	lw	a5,-112(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1524 14
	sw	a5,-140(s0)
	.loc 1 1525 17
	lw	a5,-140(s0)
	.loc 1 1525 7
	bne	a5,zero,.L386
	.loc 1 1526 14
	call	alloc_data_block
	mv	a5,a0
	.loc 1 1526 13 discriminator 1
	sw	a5,-144(s0)
	.loc 1 1527 12
	lw	a5,-144(s0)
	.loc 1 1527 11
	bne	a5,zero,.L387
	.loc 1 1528 32
	li	a5,0
	j	.L390
.L387:
	.loc 1 1530 22
	ld	a4,-136(s0)
	lw	a5,-112(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 1 1530 28
	lw	a4,-144(s0)
	sw	a4,0(a5)
	.loc 1 1531 9
	lw	a5,-120(s0)
	addi	a4,s0,-672
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 1532 18
	lw	a5,-144(s0)
	sw	a5,-140(s0)
.L386:
	.loc 1 1535 5
	addi	a5,s0,-1184
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1536 5
	lw	a5,-140(s0)
	addi	a4,s0,-1184
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 1537 19
	addi	a5,s0,-1184
	sd	a5,-152(s0)
	.loc 1 1538 22
	ld	a4,-152(s0)
	lw	a5,-116(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 1538 7
	bne	a5,zero,.L388
	.loc 1 1539 14
	call	alloc_data_block
	mv	a5,a0
	.loc 1 1539 13 discriminator 1
	sw	a5,-156(s0)
	.loc 1 1540 12
	lw	a5,-156(s0)
	.loc 1 1540 11
	bne	a5,zero,.L389
	.loc 1 1541 32
	li	a5,0
	j	.L390
.L389:
	.loc 1 1543 23
	ld	a4,-152(s0)
	lw	a5,-116(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 1 1543 29
	lw	a4,-156(s0)
	sw	a4,0(a5)
	.loc 1 1544 9
	lw	a5,-140(s0)
	addi	a4,s0,-1184
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L388:
	.loc 1 1546 30
	ld	a4,-152(s0)
	lw	a5,-116(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
.L390:
	.loc 1 1547 1
	mv	a0,a5
	ld	ra,1704(sp)
	.cfi_restore 1
	ld	s0,1696(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1712
	addi	sp,sp,1712
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE31:
	.size	inode_bmap_alloc, .-inode_bmap_alloc
	.align	1
	.globl	read_data
	.type	read_data, @function
read_data:
.LFB32:
	.loc 1 1550 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	mv	a5,a1
	sd	a2,-88(s0)
	mv	a4,a3
	sw	a5,-76(s0)
	mv	a5,a4
	sw	a5,-80(s0)
	.loc 1 1558 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1559 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1560 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1561 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1562 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1563 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1564 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1565 9
	lw	a5,-80(s0)
	sw	a5,-28(s0)
	.loc 1 1566 8
	lw	a5,-76(s0)
	sw	a5,-32(s0)
	.loc 1 1567 8
	ld	a5,-88(s0)
	sd	a5,-40(s0)
	.loc 1 1568 10
	j	.L392
.L402:
.LBB137:
	.loc 1 1569 36
	li	a5,512
	sw	a5,-20(s0)
	.loc 1 1569 65
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L393
.LBB138:
	.loc 1 1569 167 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 1569 195 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L394
	.loc 1 1569 208 discriminator 4
	call	stackframe
	j	.L395
.L394:
	.loc 1 1569 229 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1569 249 discriminator 8
	lla	a0,__func__.21
	call	puts
.L395:
	.loc 1 1569 267 discriminator 10
	li	a0,2
	call	exit
.L393:
.LBE138:
	.loc 1 1569 284 discriminator 12
	lw	a4,-32(s0)
	lw	a5,-20(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE137:
	.loc 1 1569 16 discriminator 12
	sw	a5,-44(s0)
.LBB139:
	.loc 1 1570 36
	li	a5,512
	sw	a5,-24(s0)
	.loc 1 1570 65
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L396
.LBB140:
	.loc 1 1570 167 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 1570 193 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L397
	.loc 1 1570 206 discriminator 4
	call	stackframe
	j	.L398
.L397:
	.loc 1 1570 227 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 1570 247 discriminator 8
	lla	a0,__func__.21
	call	puts
.L398:
	.loc 1 1570 265 discriminator 10
	li	a0,2
	call	exit
.L396:
.LBE140:
	.loc 1 1570 282 discriminator 12
	lw	a4,-32(s0)
	lw	a5,-24(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE139:
	.loc 1 1570 16 discriminator 12
	sw	a5,-48(s0)
	.loc 1 1571 20
	lw	a5,-48(s0)
	li	a4,512
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1571 16
	sw	a5,-52(s0)
	.loc 1 1572 19
	lw	a4,-52(s0)
	lw	a5,-28(s0)
	.loc 1 1572 11
	bleu	a4,a5,.L399
	.loc 1 1573 20
	lw	a5,-28(s0)
	sw	a5,-52(s0)
.L399:
	.loc 1 1575 18
	lw	a5,-44(s0)
	mv	a1,a5
	ld	a0,-72(s0)
	call	inode_blockno
	mv	a5,a0
	.loc 1 1575 17 discriminator 1
	sw	a5,-56(s0)
	.loc 1 1576 20
	lw	a5,-56(s0)
	.loc 1 1576 11
	bne	a5,zero,.L400
	.loc 1 1577 13
	ld	a5,-40(s0)
	lw	a4,-52(s0)
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	memset
	j	.L401
.L400:
	.loc 1 1580 13
	lw	a5,-56(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 1581 13
	ld	a3,-40(s0)
	lw	a5,-48(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-52(s0)
	mv	a2,a4
	mv	a1,a5
	mv	a0,a3
	call	memcpy
.L401:
	.loc 1 1583 13
	lw	a4,-28(s0)
	lw	a5,-52(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-28(s0)
	.loc 1 1584 12
	lw	a4,-32(s0)
	lw	a5,-52(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-32(s0)
	.loc 1 1585 12
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	add	a5,a4,a5
	sd	a5,-40(s0)
.L392:
	.loc 1 1568 15
	lw	a5,-28(s0)
	bne	a5,zero,.L402
	.loc 1 1587 1
	nop
	nop
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE32:
	.size	read_data, .-read_data
	.align	1
	.globl	dir_lookup
	.type	dir_lookup, @function
dir_lookup:
.LFB33:
	.loc 1 1590 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	sd	a1,-80(s0)
	.loc 1 1595 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1596 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1597 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1598 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1599 8
	sw	zero,-28(s0)
	.loc 1 1601 5
	addi	a5,s0,-64
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1602 10
	j	.L404
.L414:
	.loc 1 1603 9
	lw	a5,-28(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 1 1604 11
	lla	a5,block_buf
	sd	a5,-40(s0)
	.loc 1 1605 16
	li	a5,32
	sw	a5,-44(s0)
	.loc 1 1606 14
	sw	zero,-48(s0)
	.loc 1 1606 9
	j	.L405
.L413:
	.loc 1 1607 18
	ld	a4,-40(s0)
	lw	a5,-48(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 1607 21
	lhu	a5,0(a5)
	.loc 1 1607 15
	beq	a5,zero,.L416
	.loc 1 1610 30
	ld	a4,-40(s0)
	lw	a5,-48(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 1610 33
	addi	a4,a5,2
	.loc 1 1610 13
	addi	a5,s0,-64
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
.LBB141:
	.loc 1 1611 26
	li	a5,14
	sd	a5,-24(s0)
	.loc 1 1611 69
	ld	a5,-24(s0)
	blt	a5,zero,.L408
	.loc 1 1611 96 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L409
.L408:
.LBB142:
	.loc 1 1611 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1611 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L410
	.loc 1 1611 270 discriminator 6
	call	stackframe
	j	.L411
.L410:
	.loc 1 1611 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1611 311 discriminator 10
	lla	a0,__func__.20
	call	puts
.L411:
	.loc 1 1611 329 discriminator 12
	li	a0,2
	call	exit
.L409:
.LBE142:
	.loc 1 1611 371 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-48(a5)
.LBE141:
	.loc 1 1612 16
	addi	a5,s0,-64
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 1612 15 discriminator 1
	bne	a5,zero,.L407
	.loc 1 1613 42
	ld	a4,-40(s0)
	lw	a5,-48(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 1613 45
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L415
.L416:
	.loc 1 1608 17
	nop
.L407:
	.loc 1 1606 36 discriminator 2
	lw	a5,-48(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-48(s0)
.L405:
	.loc 1 1606 26 discriminator 1
	lw	a4,-48(s0)
	lw	a5,-44(s0)
	blt	a4,a5,.L413
	.loc 1 1616 12
	lw	a5,-28(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-28(s0)
.L404:
	.loc 1 1602 21
	ld	a5,-72(s0)
	lw	a4,8(a5)
	.loc 1 1602 14
	lw	a5,-28(s0)
	bgtu	a4,a5,.L414
	.loc 1 1618 16
	li	a5,0
.L415:
	.loc 1 1619 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE33:
	.size	dir_lookup, .-dir_lookup
	.align	1
	.globl	path_lookup
	.type	path_lookup, @function
path_lookup:
.LFB34:
	.loc 1 1622 1
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
	.loc 1 1623 16
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
	.loc 1 1624 1
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
.LFE34:
	.size	path_lookup, .-path_lookup
	.section	.rodata
	.align	3
.LC11:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB35:
	.loc 1 1627 1
	.cfi_startproc
	addi	sp,sp,-1536
	.cfi_def_cfa_offset 1536
	sd	ra,1528(sp)
	sd	s0,1520(sp)
	sd	s1,1512(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1536
	.cfi_def_cfa 8, 0
	sd	a0,-1528(s0)
	mv	a5,a1
	sw	a5,-1532(s0)
	.loc 1 1636 5
	addi	a5,s0,-232
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1637 5
	addi	a5,s0,-240
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1638 5
	addi	a5,s0,-248
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1639 5
	addi	a5,s0,-252
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1640 5
	addi	a5,s0,-256
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1641 5
	addi	a5,s0,-344
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1642 5
	addi	a5,s0,-348
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1643 5
	addi	a5,s0,-360
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1644 7
	lw	a5,-1532(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L420
	.loc 1 1645 24
	li	a5,0
	j	.L499
.L420:
	.loc 1 1647 7
	ld	a5,-1528(s0)
	beq	a5,zero,.L422
	.loc 1 1647 19 discriminator 1
	ld	a5,-1528(s0)
	lbu	a5,0(a5)
	.loc 1 1647 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L423
.L422:
	.loc 1 1648 24
	li	a5,0
	j	.L499
.L423:
	.loc 1 1650 8
	lla	a1,.LC11
	ld	a0,-1528(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 1650 7 discriminator 1
	bne	a5,zero,.L424
	.loc 1 1651 24
	li	a5,1
	j	.L499
.L424:
	.loc 1 1653 5
	addi	a5,s0,-232
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 1654 11
	lhu	a5,-232(s0)
	.loc 1 1654 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L425
	.loc 1 1655 24
	li	a5,0
	j	.L499
.L425:
	.loc 1 1658 5
	addi	a5,s0,-616
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1659 5
	addi	a5,s0,-616
	li	a2,255
	ld	a1,-1528(s0)
	mv	a0,a5
	call	strncpy
.LBB143:
	.loc 1 1660 18
	li	a5,255
	sd	a5,-40(s0)
	.loc 1 1660 72
	ld	a5,-40(s0)
	blt	a5,zero,.L426
	.loc 1 1660 99 discriminator 2
	ld	a4,-40(s0)
	li	a5,255
	ble	a4,a5,.L427
.L426:
.LBB144:
	.loc 1 1660 222 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1660 259 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L428
	.loc 1 1660 272 discriminator 6
	call	stackframe
	j	.L429
.L428:
	.loc 1 1660 293 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1660 313 discriminator 10
	lla	a0,__func__.19
	call	puts
.L429:
	.loc 1 1660 331 discriminator 12
	li	a0,2
	call	exit
.L427:
.LBE144:
	.loc 1 1660 369 discriminator 14
	ld	a5,-40(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-584(a5)
.LBE143:
	.loc 1 1661 9
	addi	a5,s0,-616
	sd	a5,-240(s0)
	.loc 1 1662 8
	li	a5,1
	sw	a5,-252(s0)
	.loc 1 1664 5
	addi	a5,s0,-872
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
.LBB145:
	.loc 1 1665 18
	sd	zero,-48(s0)
	.loc 1 1665 60
	ld	a5,-48(s0)
	blt	a5,zero,.L430
	.loc 1 1665 87 discriminator 2
	ld	a4,-48(s0)
	li	a5,255
	ble	a4,a5,.L431
.L430:
.LBB146:
	.loc 1 1665 210 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1665 247 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L432
	.loc 1 1665 260 discriminator 6
	call	stackframe
	j	.L433
.L432:
	.loc 1 1665 281 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1665 301 discriminator 10
	lla	a0,__func__.19
	call	puts
.L433:
	.loc 1 1665 319 discriminator 12
	li	a0,2
	call	exit
.L431:
.LBE146:
	.loc 1 1665 360 discriminator 14
	ld	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-840(a5)
.LBE145:
.LBB147:
	.loc 1 1666 18
	li	a5,1
	sd	a5,-56(s0)
	.loc 1 1666 60
	ld	a5,-56(s0)
	blt	a5,zero,.L434
	.loc 1 1666 87 discriminator 2
	ld	a4,-56(s0)
	li	a5,255
	ble	a4,a5,.L435
.L434:
.LBB148:
	.loc 1 1666 210 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1666 247 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L436
	.loc 1 1666 260 discriminator 6
	call	stackframe
	j	.L437
.L436:
	.loc 1 1666 281 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1666 301 discriminator 10
	lla	a0,__func__.19
	call	puts
.L437:
	.loc 1 1666 319 discriminator 12
	li	a0,2
	call	exit
.L435:
.LBE148:
	.loc 1 1666 360 discriminator 14
	ld	a5,-56(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-840(a5)
.LBE147:
	.loc 1 1667 10
	j	.L438
.L498:
	.loc 1 1668 13
	sd	zero,-240(s0)
	.loc 1 1669 15
	lhu	a5,-232(s0)
	.loc 1 1669 11
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L439
	.loc 1 1670 32
	li	a5,0
	j	.L499
.L439:
	.loc 1 1672 13
	addi	a5,s0,-232
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1672 11 discriminator 1
	bne	a5,zero,.L440
	.loc 1 1673 32
	li	a5,0
	j	.L499
.L440:
	.loc 1 1675 14
	ld	a4,-248(s0)
	addi	a5,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 1 1675 13 discriminator 1
	sw	a5,-256(s0)
	.loc 1 1676 16
	lw	a5,-256(s0)
	.loc 1 1676 11
	bne	a5,zero,.L441
	.loc 1 1677 32
	li	a5,0
	j	.L499
.L441:
	.loc 1 1679 9
	lw	a5,-256(s0)
	addi	a4,s0,-344
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1680 15
	lhu	a5,-344(s0)
	.loc 1 1680 11
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L442
.LBB149:
	.loc 1 1682 13
	addi	a5,s0,-1512
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1683 18
	lw	a5,-336(s0)
	.loc 1 1683 14
	sw	a5,-348(s0)
	.loc 1 1684 17
	lw	a4,-348(s0)
	.loc 1 1684 15
	li	a5,127
	ble	a4,a5,.L443
	.loc 1 1685 18
	li	a5,127
	sw	a5,-348(s0)
.L443:
	.loc 1 1687 13
	lw	a5,-348(s0)
	mv	a3,a5
	addi	a4,s0,-1512
	addi	a5,s0,-344
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
.LBB150:
	.loc 1 1688 50
	lw	a5,-348(s0)
	.loc 1 1688 26
	sd	a5,-80(s0)
	.loc 1 1688 68
	ld	a5,-80(s0)
	blt	a5,zero,.L444
	.loc 1 1688 95 discriminator 2
	ld	a4,-80(s0)
	li	a5,127
	ble	a4,a5,.L445
.L444:
.LBB151:
	.loc 1 1688 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1688 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L446
	.loc 1 1688 268 discriminator 6
	call	stackframe
	j	.L447
.L446:
	.loc 1 1688 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1688 309 discriminator 10
	lla	a0,__func__.19
	call	puts
.L447:
	.loc 1 1688 327 discriminator 12
	li	a0,2
	call	exit
.L445:
.LBE151:
	.loc 1 1688 366 discriminator 14
	ld	a5,-80(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1480(a5)
.LBE150:
	.loc 1 1690 13
	addi	a5,s0,-1384
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
.LBB152:
	.loc 1 1691 26
	sd	zero,-88(s0)
	.loc 1 1691 68
	ld	a5,-88(s0)
	blt	a5,zero,.L448
	.loc 1 1691 95 discriminator 2
	ld	a4,-88(s0)
	li	a5,255
	ble	a4,a5,.L449
.L448:
.LBB153:
	.loc 1 1691 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1691 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L450
	.loc 1 1691 268 discriminator 6
	call	stackframe
	j	.L451
.L450:
	.loc 1 1691 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1691 309 discriminator 10
	lla	a0,__func__.19
	call	puts
.L451:
	.loc 1 1691 327 discriminator 12
	li	a0,2
	call	exit
.L449:
.LBE153:
	.loc 1 1691 368 discriminator 14
	ld	a5,-88(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1352(a5)
.LBE152:
	.loc 1 1692 15
	lla	a1,.LC11
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 1 1692 14 discriminator 1
	sd	a5,-360(s0)
	.loc 1 1693 18
	j	.L452
.L458:
.LBB154:
	.loc 1 1694 35
	sd	zero,-144(s0)
	.loc 1 1694 77
	ld	a5,-144(s0)
	blt	a5,zero,.L453
	.loc 1 1694 104 discriminator 2
	ld	a4,-144(s0)
	li	a5,255
	ble	a4,a5,.L454
.L453:
.LBB155:
	.loc 1 1694 227 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1694 264 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L455
	.loc 1 1694 277 discriminator 6
	call	stackframe
	j	.L456
.L455:
	.loc 1 1694 298 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1694 318 discriminator 10
	lla	a0,__func__.19
	call	puts
.L456:
	.loc 1 1694 336 discriminator 12
	li	a0,2
	call	exit
.L454:
.LBE155:
	.loc 1 1694 347 discriminator 14
	addi	a4,s0,-1384
	ld	a5,-144(s0)
	add	a5,a4,a5
.LBE154:
	.loc 1 1694 21 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1694 19 discriminator 14
	beq	a5,zero,.L457
	.loc 1 1695 55
	addi	a5,s0,-1384
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1695 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1695 21 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1384
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
.L457:
	.loc 1 1697 17
	ld	s1,-360(s0)
	.loc 1 1697 49
	addi	a5,s0,-1384
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1697 49 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1697 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1384
	mv	a2,a4
	mv	a1,s1
	mv	a0,a5
	call	strncat
	.loc 1 1698 19
	lla	a1,.LC11
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 1 1698 18 discriminator 1
	sd	a5,-360(s0)
.L452:
	.loc 1 1693 19
	ld	a5,-360(s0)
	bne	a5,zero,.L458
	.loc 1 1701 13
	addi	a5,s0,-1128
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
.LBB156:
	.loc 1 1702 31
	sd	zero,-96(s0)
	.loc 1 1702 73
	ld	a5,-96(s0)
	blt	a5,zero,.L459
	.loc 1 1702 100 discriminator 2
	ld	a4,-96(s0)
	li	a5,127
	ble	a4,a5,.L460
.L459:
.LBB157:
	.loc 1 1702 223 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1702 260 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L461
	.loc 1 1702 273 discriminator 6
	call	stackframe
	j	.L462
.L461:
	.loc 1 1702 294 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1702 314 discriminator 10
	lla	a0,__func__.19
	call	puts
.L462:
	.loc 1 1702 332 discriminator 12
	li	a0,2
	call	exit
.L460:
.LBE157:
	.loc 1 1702 343 discriminator 14
	addi	a4,s0,-1512
	ld	a5,-96(s0)
	add	a5,a4,a5
.LBE156:
	.loc 1 1702 17 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1702 15 discriminator 14
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L463
	.loc 1 1703 17
	addi	a4,s0,-1512
	addi	a5,s0,-1128
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
.LBB158:
	.loc 1 1704 30
	li	a5,255
	sd	a5,-128(s0)
	.loc 1 1704 87
	ld	a5,-128(s0)
	blt	a5,zero,.L464
	.loc 1 1704 114 discriminator 2
	ld	a4,-128(s0)
	li	a5,255
	ble	a4,a5,.L465
.L464:
.LBB159:
	.loc 1 1704 237 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1704 274 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L466
	.loc 1 1704 287 discriminator 6
	call	stackframe
	j	.L467
.L466:
	.loc 1 1704 308 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1704 328 discriminator 10
	lla	a0,__func__.19
	call	puts
.L467:
	.loc 1 1704 346 discriminator 12
	li	a0,2
	call	exit
.L465:
.LBE159:
	.loc 1 1704 387 discriminator 14
	ld	a5,-128(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1096(a5)
.LBE158:
	j	.L468
.L463:
	.loc 1 1707 17
	addi	a4,s0,-872
	addi	a5,s0,-1128
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
.LBB160:
	.loc 1 1708 30
	li	a5,255
	sd	a5,-104(s0)
	.loc 1 1708 87
	ld	a5,-104(s0)
	blt	a5,zero,.L469
	.loc 1 1708 114 discriminator 2
	ld	a4,-104(s0)
	li	a5,255
	ble	a4,a5,.L470
.L469:
.LBB161:
	.loc 1 1708 237 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1708 274 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L471
	.loc 1 1708 287 discriminator 6
	call	stackframe
	j	.L472
.L471:
	.loc 1 1708 308 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1708 328 discriminator 10
	lla	a0,__func__.19
	call	puts
.L472:
	.loc 1 1708 346 discriminator 12
	li	a0,2
	call	exit
.L470:
.LBE161:
	.loc 1 1708 387 discriminator 14
	ld	a5,-104(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1096(a5)
.LBE160:
.LBB162:
	.loc 1 1709 37
	sd	zero,-112(s0)
	.loc 1 1709 79
	ld	a5,-112(s0)
	blt	a5,zero,.L473
	.loc 1 1709 106 discriminator 2
	ld	a4,-112(s0)
	li	a5,255
	ble	a4,a5,.L474
.L473:
.LBB163:
	.loc 1 1709 229 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1709 266 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L475
	.loc 1 1709 279 discriminator 6
	call	stackframe
	j	.L476
.L475:
	.loc 1 1709 300 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1709 320 discriminator 10
	lla	a0,__func__.19
	call	puts
.L476:
	.loc 1 1709 338 discriminator 12
	li	a0,2
	call	exit
.L474:
.LBE163:
	.loc 1 1709 349 discriminator 14
	addi	a4,s0,-1128
	ld	a5,-112(s0)
	add	a5,a4,a5
.LBE162:
	.loc 1 1709 23 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1709 19 discriminator 14
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L477
.LBB164:
	.loc 1 1709 405 discriminator 15
	li	a5,1
	sd	a5,-120(s0)
	.loc 1 1709 447 discriminator 15
	ld	a5,-120(s0)
	blt	a5,zero,.L478
	.loc 1 1709 474 discriminator 17
	ld	a4,-120(s0)
	li	a5,255
	ble	a4,a5,.L479
.L478:
.LBB165:
	.loc 1 1709 597 discriminator 18
	lla	a0,.LC9
	call	puts
	.loc 1 1709 634 discriminator 20
	lla	a5,stackframe
	beq	a5,zero,.L480
	.loc 1 1709 647 discriminator 21
	call	stackframe
	j	.L481
.L480:
	.loc 1 1709 668 discriminator 22
	lla	a0,.LC1
	call	puts
	.loc 1 1709 688 discriminator 25
	lla	a0,__func__.19
	call	puts
.L481:
	.loc 1 1709 706 discriminator 27
	li	a0,2
	call	exit
.L479:
.LBE165:
	.loc 1 1709 717 discriminator 29
	addi	a4,s0,-1128
	ld	a5,-120(s0)
	add	a5,a4,a5
.LBE164:
	.loc 1 1709 391 discriminator 29
	lbu	a5,0(a5)
	.loc 1 1709 20 discriminator 29
	beq	a5,zero,.L482
.L477:
	.loc 1 1710 55
	addi	a5,s0,-1128
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1710 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1710 21 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1128
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
.L482:
	.loc 1 1712 52
	addi	a5,s0,-1128
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1712 52 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1712 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1512
	addi	a5,s0,-1128
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L468:
.LBB166:
	.loc 1 1714 31
	sd	zero,-136(s0)
	.loc 1 1714 73
	ld	a5,-136(s0)
	blt	a5,zero,.L483
	.loc 1 1714 100 discriminator 2
	ld	a4,-136(s0)
	li	a5,255
	ble	a4,a5,.L484
.L483:
.LBB167:
	.loc 1 1714 223 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1714 260 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L485
	.loc 1 1714 273 discriminator 6
	call	stackframe
	j	.L486
.L485:
	.loc 1 1714 294 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1714 314 discriminator 10
	lla	a0,__func__.19
	call	puts
.L486:
	.loc 1 1714 332 discriminator 12
	li	a0,2
	call	exit
.L484:
.LBE167:
	.loc 1 1714 343 discriminator 14
	addi	a4,s0,-1384
	ld	a5,-136(s0)
	add	a5,a4,a5
.LBE166:
	.loc 1 1714 17 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1714 15 discriminator 14
	beq	a5,zero,.L487
	.loc 1 1715 51
	addi	a5,s0,-1128
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1715 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1715 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1128
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
	.loc 1 1716 54
	addi	a5,s0,-1128
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1716 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1716 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1384
	addi	a5,s0,-1128
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L487:
	.loc 1 1718 32
	lw	a5,-1532(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	addi	a5,s0,-1128
	mv	a1,a4
	mv	a0,a5
	call	path_lookup_lim
	mv	a5,a0
	j	.L499
.L442:
.LBE149:
	.loc 1 1720 12
	lw	a5,-256(s0)
	sw	a5,-252(s0)
	.loc 1 1721 12
	ld	t3,-344(s0)
	ld	t1,-336(s0)
	ld	a7,-328(s0)
	ld	a6,-320(s0)
	ld	a0,-312(s0)
	ld	a1,-304(s0)
	ld	a2,-296(s0)
	ld	a3,-288(s0)
	ld	a4,-280(s0)
	ld	a5,-272(s0)
	sd	t3,-232(s0)
	sd	t1,-224(s0)
	sd	a7,-216(s0)
	sd	a6,-208(s0)
	sd	a0,-200(s0)
	sd	a1,-192(s0)
	sd	a2,-184(s0)
	sd	a3,-176(s0)
	sd	a4,-168(s0)
	sd	a5,-160(s0)
	ld	a5,-264(s0)
	sd	a5,-152(s0)
.LBB168:
	.loc 1 1722 29
	sd	zero,-64(s0)
	.loc 1 1722 71
	ld	a5,-64(s0)
	blt	a5,zero,.L488
	.loc 1 1722 98 discriminator 2
	ld	a4,-64(s0)
	li	a5,255
	ble	a4,a5,.L489
.L488:
.LBB169:
	.loc 1 1722 221 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1722 258 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L490
	.loc 1 1722 271 discriminator 6
	call	stackframe
	j	.L491
.L490:
	.loc 1 1722 292 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1722 312 discriminator 10
	lla	a0,__func__.19
	call	puts
.L491:
	.loc 1 1722 330 discriminator 12
	li	a0,2
	call	exit
.L489:
.LBE169:
	.loc 1 1722 341 discriminator 14
	addi	a4,s0,-872
	ld	a5,-64(s0)
	add	a5,a4,a5
.LBE168:
	.loc 1 1722 15 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1722 11 discriminator 14
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L492
.LBB170:
	.loc 1 1722 397 discriminator 15
	li	a5,1
	sd	a5,-72(s0)
	.loc 1 1722 439 discriminator 15
	ld	a5,-72(s0)
	blt	a5,zero,.L493
	.loc 1 1722 466 discriminator 17
	ld	a4,-72(s0)
	li	a5,255
	ble	a4,a5,.L494
.L493:
.LBB171:
	.loc 1 1722 589 discriminator 18
	lla	a0,.LC9
	call	puts
	.loc 1 1722 626 discriminator 20
	lla	a5,stackframe
	beq	a5,zero,.L495
	.loc 1 1722 639 discriminator 21
	call	stackframe
	j	.L496
.L495:
	.loc 1 1722 660 discriminator 22
	lla	a0,.LC1
	call	puts
	.loc 1 1722 680 discriminator 25
	lla	a0,__func__.19
	call	puts
.L496:
	.loc 1 1722 698 discriminator 27
	li	a0,2
	call	exit
.L494:
.LBE171:
	.loc 1 1722 709 discriminator 29
	addi	a4,s0,-872
	ld	a5,-72(s0)
	add	a5,a4,a5
.LBE170:
	.loc 1 1722 383 discriminator 29
	lbu	a5,0(a5)
	.loc 1 1722 12 discriminator 29
	beq	a5,zero,.L497
.L492:
	.loc 1 1723 47
	addi	a5,s0,-872
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1723 47 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1723 13 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-872
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
.L497:
	.loc 1 1725 9
	ld	s1,-248(s0)
	.loc 1 1725 43
	addi	a5,s0,-872
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1725 43 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1725 9 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-872
	mv	a2,a4
	mv	a1,s1
	mv	a0,a5
	call	strncat
.L438:
	.loc 1 1667 16
	ld	a5,-240(s0)
	lla	a1,.LC11
	mv	a0,a5
	call	strtok
	mv	a5,a0
	.loc 1 1667 15 discriminator 1
	sd	a5,-248(s0)
	ld	a5,-248(s0)
	.loc 1 1667 33 discriminator 1
	bne	a5,zero,.L498
	.loc 1 1727 16
	lw	a5,-252(s0)
.L499:
	.loc 1 1728 1
	mv	a0,a5
	ld	ra,1528(sp)
	.cfi_restore 1
	ld	s0,1520(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1536
	ld	s1,1512(sp)
	.cfi_restore 9
	addi	sp,sp,1536
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE35:
	.size	path_lookup_lim, .-path_lookup_lim
	.align	1
	.globl	fs_realpath
	.type	fs_realpath, @function
fs_realpath:
.LFB36:
	.loc 1 1731 1
	.cfi_startproc
	addi	sp,sp,-1792
	.cfi_def_cfa_offset 1792
	sd	ra,1784(sp)
	sd	s0,1776(sp)
	sd	s1,1768(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1792
	.cfi_def_cfa 8, 0
	sd	a0,-1768(s0)
	sd	a1,-1776(s0)
	mv	a5,a2
	sw	a5,-1780(s0)
	.loc 1 1744 5
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1745 5
	addi	a5,s0,-208
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1746 5
	addi	a5,s0,-216
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1747 5
	addi	a5,s0,-220
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1748 5
	addi	a5,s0,-224
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1749 5
	addi	a5,s0,-228
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1750 5
	addi	a5,s0,-232
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1751 5
	addi	a5,s0,-320
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1752 5
	addi	a5,s0,-324
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1753 5
	addi	a5,s0,-336
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1754 5
	addi	a5,s0,-340
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1755 5
	addi	a5,s0,-344
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1756 7
	ld	a5,-1776(s0)
	beq	a5,zero,.L501
	.loc 1 1756 12 discriminator 1
	lw	a5,-1780(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L502
.L501:
	.loc 1 1757 24
	li	a5,-1
	j	.L569
.L502:
	.loc 1 1760 5
	addi	a5,s0,-600
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1761 5
	addi	a5,s0,-600
	ld	a2,-1768(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
.LBB172:
	.loc 1 1762 23
	sd	zero,-40(s0)
	.loc 1 1762 65
	ld	a5,-40(s0)
	blt	a5,zero,.L504
	.loc 1 1762 92 discriminator 2
	ld	a4,-40(s0)
	li	a5,255
	ble	a4,a5,.L505
.L504:
.LBB173:
	.loc 1 1762 215 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1762 252 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L506
	.loc 1 1762 265 discriminator 6
	call	stackframe
	j	.L507
.L506:
	.loc 1 1762 286 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1762 306 discriminator 10
	lla	a0,__func__.18
	call	puts
.L507:
	.loc 1 1762 324 discriminator 12
	li	a0,2
	call	exit
.L505:
.LBE173:
	.loc 1 1762 335 discriminator 14
	addi	a4,s0,-600
	ld	a5,-40(s0)
	add	a5,a4,a5
.LBE172:
	.loc 1 1762 9 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1762 7 discriminator 14
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L508
	.loc 1 1763 24
	li	a5,-1
	j	.L569
.L508:
	.loc 1 1765 8
	addi	a5,s0,-600
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 1765 7 discriminator 1
	bne	a5,zero,.L509
	.loc 1 1766 11
	lw	a5,-1780(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L510
	.loc 1 1767 19
	ld	a5,-1776(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1768 16
	ld	a5,-1776(s0)
	addi	a5,a5,1
	.loc 1 1768 19
	sb	zero,0(a5)
	.loc 1 1769 32
	li	a5,0
	j	.L569
.L510:
	.loc 1 1771 24
	li	a5,-1
	j	.L569
.L509:
	.loc 1 1773 5
	addi	a5,s0,-200
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 1 1775 5
	addi	a5,s0,-856
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1776 5
	addi	a4,s0,-600
	addi	a5,s0,-856
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
.LBB174:
	.loc 1 1777 18
	li	a5,255
	sd	a5,-48(s0)
	.loc 1 1777 72
	ld	a5,-48(s0)
	blt	a5,zero,.L511
	.loc 1 1777 99 discriminator 2
	ld	a4,-48(s0)
	li	a5,255
	ble	a4,a5,.L512
.L511:
.LBB175:
	.loc 1 1777 222 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1777 259 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L513
	.loc 1 1777 272 discriminator 6
	call	stackframe
	j	.L514
.L513:
	.loc 1 1777 293 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1777 313 discriminator 10
	lla	a0,__func__.18
	call	puts
.L514:
	.loc 1 1777 331 discriminator 12
	li	a0,2
	call	exit
.L512:
.LBE175:
	.loc 1 1777 369 discriminator 14
	ld	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-824(a5)
.LBE174:
	.loc 1 1778 9
	addi	a5,s0,-856
	sd	a5,-208(s0)
	.loc 1 1779 8
	sd	zero,-216(s0)
	.loc 1 1780 10
	li	a5,8
	sw	a5,-220(s0)
	.loc 1 1781 10
	li	a5,1
	sw	a5,-224(s0)
	.loc 1 1782 6
	sw	zero,-228(s0)
	.loc 1 1783 10
	lw	a5,-228(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-228(s0)
	mv	a4,a5
	.loc 1 1783 8
	ld	a5,-1776(s0)
	add	a5,a5,a4
	.loc 1 1783 13
	li	a4,47
	sb	a4,0(a5)
	.loc 1 1784 8
	ld	a5,-1776(s0)
	addi	a5,a5,1
	.loc 1 1784 11
	sb	zero,0(a5)
	.loc 1 1785 10
	j	.L515
.L568:
	.loc 1 1786 13
	sd	zero,-208(s0)
	.loc 1 1787 15
	lhu	a5,-200(s0)
	.loc 1 1787 11
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L516
	.loc 1 1788 32
	li	a5,-1
	j	.L569
.L516:
	.loc 1 1790 13
	addi	a5,s0,-200
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 1790 11 discriminator 1
	bne	a5,zero,.L517
	.loc 1 1791 32
	li	a5,-1
	j	.L569
.L517:
	.loc 1 1793 14
	ld	a4,-216(s0)
	addi	a5,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 1 1793 13 discriminator 1
	sw	a5,-232(s0)
	.loc 1 1794 12
	lw	a5,-232(s0)
	.loc 1 1794 11
	bne	a5,zero,.L518
	.loc 1 1795 32
	li	a5,-1
	j	.L569
.L518:
	.loc 1 1797 9
	lw	a5,-232(s0)
	addi	a4,s0,-320
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1798 15
	lhu	a5,-320(s0)
	.loc 1 1798 11
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L519
.LBB176:
	.loc 1 1799 16
	lw	a5,-220(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1799 15
	sw	a5,-220(s0)
	.loc 1 1799 16
	lw	a5,-220(s0)
	.loc 1 1799 15
	bgt	a5,zero,.L520
	.loc 1 1800 40
	li	a5,-1
	j	.L569
.L520:
	.loc 1 1803 13
	addi	a5,s0,-1752
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1804 20
	lw	a5,-312(s0)
	.loc 1 1804 16
	sw	a5,-324(s0)
	.loc 1 1805 19
	lw	a4,-324(s0)
	.loc 1 1805 15
	li	a5,127
	ble	a4,a5,.L522
	.loc 1 1806 20
	li	a5,127
	sw	a5,-324(s0)
.L522:
	.loc 1 1808 13
	lw	a5,-324(s0)
	mv	a3,a5
	addi	a4,s0,-1752
	addi	a5,s0,-320
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
.LBB177:
	.loc 1 1809 50
	lw	a5,-324(s0)
	.loc 1 1809 26
	sd	a5,-56(s0)
	.loc 1 1809 70
	ld	a5,-56(s0)
	blt	a5,zero,.L523
	.loc 1 1809 97 discriminator 2
	ld	a4,-56(s0)
	li	a5,127
	ble	a4,a5,.L524
.L523:
.LBB178:
	.loc 1 1809 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1809 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L525
	.loc 1 1809 270 discriminator 6
	call	stackframe
	j	.L526
.L525:
	.loc 1 1809 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1809 311 discriminator 10
	lla	a0,__func__.18
	call	puts
.L526:
	.loc 1 1809 329 discriminator 12
	li	a0,2
	call	exit
.L524:
.LBE178:
	.loc 1 1809 368 discriminator 14
	ld	a5,-56(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1720(a5)
.LBE177:
	.loc 1 1811 13
	addi	a5,s0,-1624
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
.LBB179:
	.loc 1 1812 26
	sd	zero,-64(s0)
	.loc 1 1812 68
	ld	a5,-64(s0)
	blt	a5,zero,.L527
	.loc 1 1812 95 discriminator 2
	ld	a4,-64(s0)
	li	a5,255
	ble	a4,a5,.L528
.L527:
.LBB180:
	.loc 1 1812 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1812 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L529
	.loc 1 1812 268 discriminator 6
	call	stackframe
	j	.L530
.L529:
	.loc 1 1812 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1812 309 discriminator 10
	lla	a0,__func__.18
	call	puts
.L530:
	.loc 1 1812 327 discriminator 12
	li	a0,2
	call	exit
.L528:
.LBE180:
	.loc 1 1812 368 discriminator 14
	ld	a5,-64(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1592(a5)
.LBE179:
	.loc 1 1813 15
	lla	a1,.LC11
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 1 1813 14 discriminator 1
	sd	a5,-336(s0)
	.loc 1 1814 18
	j	.L531
.L537:
.LBB181:
	.loc 1 1815 35
	sd	zero,-112(s0)
	.loc 1 1815 77
	ld	a5,-112(s0)
	blt	a5,zero,.L532
	.loc 1 1815 104 discriminator 2
	ld	a4,-112(s0)
	li	a5,255
	ble	a4,a5,.L533
.L532:
.LBB182:
	.loc 1 1815 227 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1815 264 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L534
	.loc 1 1815 277 discriminator 6
	call	stackframe
	j	.L535
.L534:
	.loc 1 1815 298 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1815 318 discriminator 10
	lla	a0,__func__.18
	call	puts
.L535:
	.loc 1 1815 336 discriminator 12
	li	a0,2
	call	exit
.L533:
.LBE182:
	.loc 1 1815 347 discriminator 14
	addi	a4,s0,-1624
	ld	a5,-112(s0)
	add	a5,a4,a5
.LBE181:
	.loc 1 1815 21 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1815 19 discriminator 14
	beq	a5,zero,.L536
	.loc 1 1816 55
	addi	a5,s0,-1624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1816 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1816 21 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1624
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
.L536:
	.loc 1 1818 17
	ld	s1,-336(s0)
	.loc 1 1818 49
	addi	a5,s0,-1624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1818 49 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1818 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1624
	mv	a2,a4
	mv	a1,s1
	mv	a0,a5
	call	strncat
	.loc 1 1819 19
	lla	a1,.LC11
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 1 1819 18 discriminator 1
	sd	a5,-336(s0)
.L531:
	.loc 1 1814 19
	ld	a5,-336(s0)
	bne	a5,zero,.L537
	.loc 1 1822 13
	addi	a5,s0,-1368
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
.LBB183:
	.loc 1 1823 31
	sd	zero,-72(s0)
	.loc 1 1823 73
	ld	a5,-72(s0)
	blt	a5,zero,.L538
	.loc 1 1823 100 discriminator 2
	ld	a4,-72(s0)
	li	a5,127
	ble	a4,a5,.L539
.L538:
.LBB184:
	.loc 1 1823 223 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1823 260 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L540
	.loc 1 1823 273 discriminator 6
	call	stackframe
	j	.L541
.L540:
	.loc 1 1823 294 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1823 314 discriminator 10
	lla	a0,__func__.18
	call	puts
.L541:
	.loc 1 1823 332 discriminator 12
	li	a0,2
	call	exit
.L539:
.LBE184:
	.loc 1 1823 343 discriminator 14
	addi	a4,s0,-1752
	ld	a5,-72(s0)
	add	a5,a4,a5
.LBE183:
	.loc 1 1823 17 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1823 15 discriminator 14
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L542
	.loc 1 1824 17
	addi	a4,s0,-1752
	addi	a5,s0,-1368
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L543
.L542:
.LBB185:
	.loc 1 1827 30
	sd	zero,-80(s0)
	.loc 1 1827 72
	ld	a5,-80(s0)
	blt	a5,zero,.L544
	.loc 1 1827 99 discriminator 2
	ld	a4,-80(s0)
	li	a5,511
	ble	a4,a5,.L545
.L544:
.LBB186:
	.loc 1 1827 222 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1827 259 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L546
	.loc 1 1827 272 discriminator 6
	call	stackframe
	j	.L547
.L546:
	.loc 1 1827 293 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1827 313 discriminator 10
	lla	a0,__func__.18
	call	puts
.L547:
	.loc 1 1827 331 discriminator 12
	li	a0,2
	call	exit
.L545:
.LBE186:
	.loc 1 1827 372 discriminator 14
	ld	a5,-80(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1336(a5)
.LBE185:
	.loc 1 1828 17
	addi	a5,s0,-1368
	li	a2,511
	ld	a1,-1776(s0)
	mv	a0,a5
	call	strncat
.LBB187:
	.loc 1 1829 71
	addi	a5,s0,-1368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1829 85 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1829 35 discriminator 1
	sd	a5,-88(s0)
	.loc 1 1829 92 discriminator 1
	ld	a5,-88(s0)
	blt	a5,zero,.L548
	.loc 1 1829 119 discriminator 3
	ld	a4,-88(s0)
	li	a5,511
	ble	a4,a5,.L549
.L548:
.LBB188:
	.loc 1 1829 242 discriminator 4
	lla	a0,.LC9
	call	puts
	.loc 1 1829 279 discriminator 6
	lla	a5,stackframe
	beq	a5,zero,.L550
	.loc 1 1829 292 discriminator 7
	call	stackframe
	j	.L551
.L550:
	.loc 1 1829 313 discriminator 8
	lla	a0,.LC1
	call	puts
	.loc 1 1829 333 discriminator 11
	lla	a0,__func__.18
	call	puts
.L551:
	.loc 1 1829 351 discriminator 13
	li	a0,2
	call	exit
.L549:
.LBE188:
	.loc 1 1829 362 discriminator 15
	addi	a4,s0,-1368
	ld	a5,-88(s0)
	add	a5,a4,a5
.LBE187:
	.loc 1 1829 21 discriminator 15
	lbu	a5,0(a5)
	.loc 1 1829 19 discriminator 15
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L552
	.loc 1 1830 55
	addi	a5,s0,-1368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1830 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1830 21 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1368
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
.L552:
	.loc 1 1832 52
	addi	a5,s0,-1368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1832 52 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1832 17 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1752
	addi	a5,s0,-1368
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L543:
.LBB189:
	.loc 1 1834 31
	sd	zero,-96(s0)
	.loc 1 1834 73
	ld	a5,-96(s0)
	blt	a5,zero,.L553
	.loc 1 1834 100 discriminator 2
	ld	a4,-96(s0)
	li	a5,255
	ble	a4,a5,.L554
.L553:
.LBB190:
	.loc 1 1834 223 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1834 260 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L555
	.loc 1 1834 273 discriminator 6
	call	stackframe
	j	.L556
.L555:
	.loc 1 1834 294 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1834 314 discriminator 10
	lla	a0,__func__.18
	call	puts
.L556:
	.loc 1 1834 332 discriminator 12
	li	a0,2
	call	exit
.L554:
.LBE190:
	.loc 1 1834 343 discriminator 14
	addi	a4,s0,-1624
	ld	a5,-96(s0)
	add	a5,a4,a5
.LBE189:
	.loc 1 1834 17 discriminator 14
	lbu	a5,0(a5)
	.loc 1 1834 15 discriminator 14
	beq	a5,zero,.L557
.LBB191:
	.loc 1 1835 71
	addi	a5,s0,-1368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1835 85 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 1 1835 35 discriminator 1
	sd	a5,-104(s0)
	.loc 1 1835 92 discriminator 1
	ld	a5,-104(s0)
	blt	a5,zero,.L558
	.loc 1 1835 119 discriminator 3
	ld	a4,-104(s0)
	li	a5,511
	ble	a4,a5,.L559
.L558:
.LBB192:
	.loc 1 1835 242 discriminator 4
	lla	a0,.LC9
	call	puts
	.loc 1 1835 279 discriminator 6
	lla	a5,stackframe
	beq	a5,zero,.L560
	.loc 1 1835 292 discriminator 7
	call	stackframe
	j	.L561
.L560:
	.loc 1 1835 313 discriminator 8
	lla	a0,.LC1
	call	puts
	.loc 1 1835 333 discriminator 11
	lla	a0,__func__.18
	call	puts
.L561:
	.loc 1 1835 351 discriminator 13
	li	a0,2
	call	exit
.L559:
.LBE192:
	.loc 1 1835 362 discriminator 15
	addi	a4,s0,-1368
	ld	a5,-104(s0)
	add	a5,a4,a5
.LBE191:
	.loc 1 1835 21 discriminator 15
	lbu	a5,0(a5)
	.loc 1 1835 19 discriminator 15
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L562
	.loc 1 1836 55
	addi	a5,s0,-1368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1836 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1836 21 is_stmt 1 discriminator 1
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1368
	mv	a2,a4
	lla	a1,.LC11
	mv	a0,a5
	call	strncat
.L562:
	.loc 1 1838 54
	addi	a5,s0,-1368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1838 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 1838 17 is_stmt 1 discriminator 1
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1624
	addi	a5,s0,-1368
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L557:
	.loc 1 1840 32
	lw	a4,-1780(s0)
	addi	a5,s0,-1368
	mv	a2,a4
	ld	a1,-1776(s0)
	mv	a0,a5
	call	fs_realpath
	mv	a5,a0
	j	.L569
.L519:
.LBE176:
	.loc 1 1842 11
	ld	a5,-216(s0)
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 1842 10 discriminator 1
	sw	a5,-340(s0)
	.loc 1 1843 13
	lw	a4,-228(s0)
	lw	a5,-340(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 1843 15
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 1843 11
	lw	a4,-1780(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L563
	.loc 1 1844 32
	li	a5,-1
	j	.L569
.L563:
	.loc 1 1846 15
	lw	a4,-228(s0)
	.loc 1 1846 11
	li	a5,1
	bne	a4,a5,.L564
	.loc 1 1846 23 discriminator 1
	ld	a5,-1776(s0)
	lbu	a5,0(a5)
	.loc 1 1846 12 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L565
.L564:
	.loc 1 1847 18
	lw	a5,-228(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-228(s0)
	mv	a4,a5
	.loc 1 1847 16
	ld	a5,-1776(s0)
	add	a5,a5,a4
	.loc 1 1847 21
	li	a4,47
	sb	a4,0(a5)
.L565:
	.loc 1 1849 14
	sw	zero,-344(s0)
	.loc 1 1849 9
	j	.L566
.L567:
	.loc 1 1850 25
	ld	a5,-216(s0)
	lw	a4,-344(s0)
	add	a4,a5,a4
	.loc 1 1850 18
	lw	a5,-228(s0)
	addiw	a3,a5,1
	sext.w	a3,a3
	sw	a3,-228(s0)
	mv	a3,a5
	.loc 1 1850 16
	ld	a5,-1776(s0)
	add	a5,a5,a3
	.loc 1 1850 25
	lbu	a4,0(a4)
	.loc 1 1850 21
	sb	a4,0(a5)
	.loc 1 1849 30 discriminator 3
	lw	a5,-344(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-344(s0)
.L566:
	.loc 1 1849 26 discriminator 1
	lw	a4,-344(s0)
	lw	a5,-340(s0)
	blt	a4,a5,.L567
	.loc 1 1852 12
	lw	a5,-228(s0)
	mv	a4,a5
	ld	a5,-1776(s0)
	add	a5,a5,a4
	.loc 1 1852 15
	sb	zero,0(a5)
	.loc 1 1853 12
	ld	t3,-320(s0)
	ld	t1,-312(s0)
	ld	a7,-304(s0)
	ld	a6,-296(s0)
	ld	a0,-288(s0)
	ld	a1,-280(s0)
	ld	a2,-272(s0)
	ld	a3,-264(s0)
	ld	a4,-256(s0)
	ld	a5,-248(s0)
	sd	t3,-200(s0)
	sd	t1,-192(s0)
	sd	a7,-184(s0)
	sd	a6,-176(s0)
	sd	a0,-168(s0)
	sd	a1,-160(s0)
	sd	a2,-152(s0)
	sd	a3,-144(s0)
	sd	a4,-136(s0)
	sd	a5,-128(s0)
	ld	a5,-240(s0)
	sd	a5,-120(s0)
.L515:
	.loc 1 1785 16
	ld	a5,-208(s0)
	lla	a1,.LC11
	mv	a0,a5
	call	strtok
	mv	a5,a0
	.loc 1 1785 15 discriminator 1
	sd	a5,-216(s0)
	ld	a5,-216(s0)
	.loc 1 1785 33 discriminator 1
	bne	a5,zero,.L568
	.loc 1 1855 16
	li	a5,0
.L569:
	.loc 1 1856 1
	mv	a0,a5
	ld	ra,1784(sp)
	.cfi_restore 1
	ld	s0,1776(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1792
	ld	s1,1768(sp)
	.cfi_restore 9
	addi	sp,sp,1792
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE36:
	.size	fs_realpath, .-fs_realpath
	.section	.rodata
	.align	3
.LC12:
	.string	"== i-node %u ==\n"
	.align	3
.LC13:
	.string	"  type  = %u\n"
	.align	3
.LC14:
	.string	"  size  = %u\n"
	.align	3
.LC15:
	.string	"  addrs ="
	.align	3
.LC16:
	.string	" %u"
	.align	3
.LC17:
	.string	" [indirect %u]"
	.align	3
.LC18:
	.string	" [double-indirect %u]"
	.align	3
.LC19:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB37:
	.loc 1 1859 1
	.cfi_startproc
	addi	sp,sp,-176
	.cfi_def_cfa_offset 176
	sd	ra,168(sp)
	sd	s0,160(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,176
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-164(s0)
	.loc 1 1862 5
	addi	a5,s0,-152
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1863 5
	addi	a5,s0,-156
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1864 5
	addi	a4,s0,-152
	lw	a5,-164(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 1865 5
	lw	a5,-164(s0)
	mv	a1,a5
	lla	a0,.LC12
	call	printf
	.loc 1 1866 31
	lhu	a5,-152(s0)
	.loc 1 1866 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC13
	call	printf
	.loc 1 1867 5
	lw	a5,-144(s0)
	mv	a1,a5
	lla	a0,.LC14
	call	printf
	.loc 1 1868 5
	lla	a0,.LC15
	call	printf
	.loc 1 1869 10
	sw	zero,-156(s0)
	.loc 1 1869 5
	j	.L571
.L581:
.LBB193:
	.loc 1 1870 51
	lw	a5,-156(s0)
	.loc 1 1870 27
	sd	a5,-56(s0)
	.loc 1 1870 69
	ld	a5,-56(s0)
	blt	a5,zero,.L572
	.loc 1 1870 96 discriminator 2
	ld	a4,-56(s0)
	li	a5,13
	ble	a4,a5,.L573
.L572:
.LBB194:
	.loc 1 1870 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1870 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L574
	.loc 1 1870 270 discriminator 6
	call	stackframe
	j	.L575
.L574:
	.loc 1 1870 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1870 311 discriminator 10
	lla	a0,__func__.17
	call	puts
.L575:
	.loc 1 1870 329 discriminator 12
	li	a0,2
	call	exit
.L573:
.LBE194:
	.loc 1 1870 340 discriminator 14
	addi	a4,s0,-152
	ld	a5,-56(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
.LBE193:
	.loc 1 1870 13 discriminator 14
	lw	a5,0(a5)
	.loc 1 1870 11 discriminator 14
	beq	a5,zero,.L576
.LBB195:
	.loc 1 1871 65
	lw	a5,-156(s0)
	.loc 1 1871 41
	sd	a5,-64(s0)
	.loc 1 1871 83
	ld	a5,-64(s0)
	blt	a5,zero,.L577
	.loc 1 1871 110 discriminator 2
	ld	a4,-64(s0)
	li	a5,13
	ble	a4,a5,.L578
.L577:
.LBB196:
	.loc 1 1871 234 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1871 271 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L579
	.loc 1 1871 284 discriminator 6
	call	stackframe
	j	.L580
.L579:
	.loc 1 1871 305 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1871 325 discriminator 10
	lla	a0,__func__.17
	call	puts
.L580:
	.loc 1 1871 343 discriminator 12
	li	a0,2
	call	exit
.L578:
.LBE196:
	.loc 1 1871 354 discriminator 14
	addi	a4,s0,-152
	ld	a5,-64(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
.LBE195:
	.loc 1 1871 13 discriminator 14
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC16
	call	printf
.L576:
	.loc 1 1869 23 discriminator 2
	lw	a5,-156(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-156(s0)
.L571:
	.loc 1 1869 18 discriminator 1
	lw	a4,-156(s0)
	li	a5,11
	ble	a4,a5,.L581
.LBB197:
	.loc 1 1874 23
	li	a5,12
	sd	a5,-24(s0)
	.loc 1 1874 66
	ld	a5,-24(s0)
	blt	a5,zero,.L582
	.loc 1 1874 93 discriminator 2
	ld	a4,-24(s0)
	li	a5,13
	ble	a4,a5,.L583
.L582:
.LBB198:
	.loc 1 1874 217 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1874 254 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L584
	.loc 1 1874 267 discriminator 6
	call	stackframe
	j	.L585
.L584:
	.loc 1 1874 288 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1874 308 discriminator 10
	lla	a0,__func__.17
	call	puts
.L585:
	.loc 1 1874 326 discriminator 12
	li	a0,2
	call	exit
.L583:
.LBE198:
	.loc 1 1874 337 discriminator 14
	addi	a4,s0,-152
	ld	a5,-24(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
.LBE197:
	.loc 1 1874 9 discriminator 14
	lw	a5,0(a5)
	.loc 1 1874 7 discriminator 14
	beq	a5,zero,.L586
.LBB199:
	.loc 1 1875 48
	li	a5,12
	sd	a5,-32(s0)
	.loc 1 1875 91
	ld	a5,-32(s0)
	blt	a5,zero,.L587
	.loc 1 1875 118 discriminator 2
	ld	a4,-32(s0)
	li	a5,13
	ble	a4,a5,.L588
.L587:
.LBB200:
	.loc 1 1875 242 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1875 279 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L589
	.loc 1 1875 292 discriminator 6
	call	stackframe
	j	.L590
.L589:
	.loc 1 1875 313 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1875 333 discriminator 10
	lla	a0,__func__.17
	call	puts
.L590:
	.loc 1 1875 351 discriminator 12
	li	a0,2
	call	exit
.L588:
.LBE200:
	.loc 1 1875 362 discriminator 14
	addi	a4,s0,-152
	ld	a5,-32(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
.LBE199:
	.loc 1 1875 9 discriminator 14
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC17
	call	printf
.L586:
.LBB201:
	.loc 1 1877 23
	li	a5,13
	sd	a5,-40(s0)
	.loc 1 1877 68
	ld	a5,-40(s0)
	blt	a5,zero,.L591
	.loc 1 1877 95 discriminator 2
	ld	a4,-40(s0)
	li	a5,13
	ble	a4,a5,.L592
.L591:
.LBB202:
	.loc 1 1877 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1877 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L593
	.loc 1 1877 269 discriminator 6
	call	stackframe
	j	.L594
.L593:
	.loc 1 1877 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1877 310 discriminator 10
	lla	a0,__func__.17
	call	puts
.L594:
	.loc 1 1877 328 discriminator 12
	li	a0,2
	call	exit
.L592:
.LBE202:
	.loc 1 1877 339 discriminator 14
	addi	a4,s0,-152
	ld	a5,-40(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
.LBE201:
	.loc 1 1877 9 discriminator 14
	lw	a5,0(a5)
	.loc 1 1877 7 discriminator 14
	beq	a5,zero,.L595
.LBB203:
	.loc 1 1878 55
	li	a5,13
	sd	a5,-48(s0)
	.loc 1 1878 100
	ld	a5,-48(s0)
	blt	a5,zero,.L596
	.loc 1 1878 127 discriminator 2
	ld	a4,-48(s0)
	li	a5,13
	ble	a4,a5,.L597
.L596:
.LBB204:
	.loc 1 1878 251 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 1878 288 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L598
	.loc 1 1878 301 discriminator 6
	call	stackframe
	j	.L599
.L598:
	.loc 1 1878 322 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 1878 342 discriminator 10
	lla	a0,__func__.17
	call	puts
.L599:
	.loc 1 1878 360 discriminator 12
	li	a0,2
	call	exit
.L597:
.LBE204:
	.loc 1 1878 371 discriminator 14
	addi	a4,s0,-152
	ld	a5,-48(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
.LBE203:
	.loc 1 1878 9 discriminator 14
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC18
	call	printf
.L595:
	.loc 1 1880 5
	lla	a0,.LC19
	call	printf
	.loc 1 1881 1
	nop
	ld	ra,168(sp)
	.cfi_restore 1
	ld	s0,160(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 176
	addi	sp,sp,176
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE37:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB38:
	.loc 1 1884 1
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
	.loc 1 1886 16
	li	a5,64
	.loc 1 1887 1
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
.LFE38:
	.size	owner_cap, .-owner_cap
	.align	1
	.type	owner_add, @function
owner_add:
.LFB39:
	.loc 1 1890 1
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
	sd	a1,-32(s0)
	.loc 1 1891 7
	ld	a5,-24(s0)
	beq	a5,zero,.L606
	.loc 1 1891 10 discriminator 1
	ld	a5,-32(s0)
	beq	a5,zero,.L606
	.loc 1 1894 5
	ld	a1,-32(s0)
	ld	a0,-24(s0)
	call	neoc_file_owner_add
	j	.L602
.L606:
	.loc 1 1892 17
	nop
.L602:
	.loc 1 1895 1
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE39:
	.size	owner_add, .-owner_add
	.align	1
	.type	owner_remove, @function
owner_remove:
.LFB40:
	.loc 1 1898 1
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
	sd	a1,-32(s0)
	.loc 1 1899 7
	ld	a5,-24(s0)
	beq	a5,zero,.L611
	.loc 1 1899 10 discriminator 1
	ld	a5,-32(s0)
	beq	a5,zero,.L611
	.loc 1 1902 5
	ld	a1,-32(s0)
	ld	a0,-24(s0)
	call	neoc_file_owner_remove
	j	.L607
.L611:
	.loc 1 1900 17
	nop
.L607:
	.loc 1 1903 1
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE40:
	.size	owner_remove, .-owner_remove
	.align	1
	.globl	file_system_init
	.type	file_system_init, @function
file_system_init:
.LFB41:
	.loc 1 1906 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 1907 5
	call	neoc_fs_pool_init
	.loc 1 1908 1
	nop
	ld	ra,8(sp)
	.cfi_restore 1
	ld	s0,0(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE41:
	.size	file_system_init, .-file_system_init
	.align	1
	.globl	alloc_pipe
	.type	alloc_pipe, @function
alloc_pipe:
.LFB42:
	.loc 1 1911 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 1914 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1915 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1916 7
	call	neoc_fs_pop_free_pipe
	mv	a5,a0
	.loc 1 1916 6 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1917 26
	ld	a5,-24(s0)
	.loc 1 1917 48
	beq	a5,zero,.L614
	.loc 1 1917 29 discriminator 1
	ld	a5,-24(s0)
	.loc 1 1917 48 discriminator 1
	ld	a5,544(a5)
	j	.L615
.L614:
	.loc 1 1917 48 is_stmt 0 discriminator 2
	li	a5,0
.L615:
	.loc 1 1917 21 is_stmt 1 discriminator 4
	sd	a5,-32(s0)
	.loc 1 1918 9
	ld	a5,-24(s0)
	.loc 1 1918 7
	bne	a5,zero,.L616
	.loc 1 1919 27
	call	kalloc
	mv	a5,a0
	.loc 1 1919 10 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1920 13
	ld	a5,-24(s0)
	.loc 1 1920 11
	bne	a5,zero,.L617
	.loc 1 1921 32
	li	a5,0
	j	.L619
.L617:
	.loc 1 1923 25
	sd	zero,-32(s0)
.L616:
	.loc 1 1925 5
	ld	a5,-24(s0)
	li	a2,552
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1926 6
	ld	a5,-24(s0)
	.loc 1 1926 24
	ld	a4,-32(s0)
	sd	a4,544(a5)
	.loc 1 1927 16
	ld	a5,-24(s0)
.L619:
	.loc 1 1928 1
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
.LFE42:
	.size	alloc_pipe, .-alloc_pipe
	.align	1
	.globl	free_pipe
	.type	free_pipe, @function
free_pipe:
.LFB43:
	.loc 1 1931 1
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
	.loc 1 1932 7
	ld	a5,-24(s0)
	beq	a5,zero,.L623
	.loc 1 1935 5
	ld	a0,-24(s0)
	call	neoc_pipe_linked_file_clear
	.loc 1 1936 5
	ld	a0,-24(s0)
	call	neoc_fs_push_free_pipe
	j	.L620
.L623:
	.loc 1 1933 17
	nop
.L620:
	.loc 1 1937 1
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE43:
	.size	free_pipe, .-free_pipe
	.align	1
	.globl	alloc_file
	.type	alloc_file, @function
alloc_file:
.LFB44:
	.loc 1 1940 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 1 1943 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1944 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1945 7
	call	neoc_fs_pop_free_file
	mv	a5,a0
	.loc 1 1945 6 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1946 28
	ld	a5,-24(s0)
	.loc 1 1946 52
	beq	a5,zero,.L625
	.loc 1 1946 31 discriminator 1
	ld	a5,-24(s0)
	.loc 1 1946 52 discriminator 1
	ld	a5,136(a5)
	j	.L626
.L625:
	.loc 1 1946 52 is_stmt 0 discriminator 2
	li	a5,0
.L626:
	.loc 1 1946 23 is_stmt 1 discriminator 4
	sd	a5,-32(s0)
	.loc 1 1947 9
	ld	a5,-24(s0)
	.loc 1 1947 7
	bne	a5,zero,.L627
	.loc 1 1948 26
	call	kalloc
	mv	a5,a0
	.loc 1 1948 10 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1949 13
	ld	a5,-24(s0)
	.loc 1 1949 11
	bne	a5,zero,.L628
	.loc 1 1950 32
	li	a5,0
	j	.L630
.L628:
	.loc 1 1952 27
	sd	zero,-32(s0)
.L627:
	.loc 1 1954 5
	ld	a5,-24(s0)
	li	a2,144
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1955 6
	ld	a5,-24(s0)
	.loc 1 1955 26
	ld	a4,-32(s0)
	sd	a4,136(a5)
	.loc 1 1956 16
	ld	a5,-24(s0)
.L630:
	.loc 1 1957 1
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
.LFE44:
	.size	alloc_file, .-alloc_file
	.align	1
	.globl	free_file
	.type	free_file, @function
free_file:
.LFB45:
	.loc 1 1960 1
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
	.loc 1 1961 7
	ld	a5,-24(s0)
	beq	a5,zero,.L634
	.loc 1 1964 5
	ld	a0,-24(s0)
	call	neoc_file_owner_clear
	.loc 1 1965 5
	ld	a0,-24(s0)
	call	neoc_fs_push_free_file
	j	.L631
.L634:
	.loc 1 1962 17
	nop
.L631:
	.loc 1 1966 1
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE45:
	.size	free_file, .-free_file
	.align	1
	.globl	pipealloc
	.type	pipealloc, @function
pipealloc:
.LFB46:
	.loc 1 1969 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 1973 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1974 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1975 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1976 7
	call	alloc_pipe
	mv	a5,a0
	.loc 1 1976 6 discriminator 1
	sd	a5,-24(s0)
	.loc 1 1977 9
	ld	a5,-24(s0)
	.loc 1 1977 7
	bne	a5,zero,.L636
	.loc 1 1978 24
	li	a5,0
	j	.L638
.L636:
	.loc 1 1980 6
	ld	a5,-24(s0)
	.loc 1 1980 13
	sw	zero,512(a5)
	.loc 1 1981 6
	ld	a5,-24(s0)
	.loc 1 1981 14
	sw	zero,516(a5)
	.loc 1 1982 6
	ld	a5,-24(s0)
	.loc 1 1982 17
	li	a4,1
	sw	a4,520(a5)
	.loc 1 1983 6
	ld	a5,-24(s0)
	.loc 1 1983 18
	li	a4,1
	sw	a4,524(a5)
	.loc 1 1984 6
	ld	a5,-24(s0)
	.loc 1 1984 12
	sw	zero,536(a5)
	.loc 1 1985 6
	ld	a5,-24(s0)
	.loc 1 1985 23
	sw	zero,540(a5)
	.loc 1 1986 5
	ld	a5,-24(s0)
	mv	a0,a5
	call	neoc_pipe_linked_file_clear
	.loc 1 1987 12
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 1 1988 7
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 1 1989 16
	ld	a5,-24(s0)
.L638:
	.loc 1 1990 1
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
.LFE46:
	.size	pipealloc, .-pipealloc
	.align	1
	.globl	new_file_table
	.type	new_file_table, @function
new_file_table:
.LFB47:
	.loc 1 1993 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	sd	s1,24(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 1 1995 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 1996 12
	call	alloc_file
	mv	a5,a0
	.loc 1 1996 11 discriminator 1
	sd	a5,-40(s0)
	.loc 1 1997 8
	ld	a5,-40(s0)
	.loc 1 1997 7
	bne	a5,zero,.L640
	.loc 1 1998 24
	li	a5,0
	j	.L642
.L640:
	.loc 1 2000 5
	ld	a5,-40(s0)
	mv	a0,a5
	call	neoc_file_owner_clear
	.loc 1 2001 5
	ld	s1,-40(s0)
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2001 5 is_stmt 0 discriminator 1
	mv	a1,a5
	mv	a0,s1
	call	owner_add
	.loc 1 2002 16 is_stmt 1
	ld	a5,-40(s0)
.L642:
	.loc 1 2003 1
	mv	a0,a5
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	ld	s1,24(sp)
	.cfi_restore 9
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE47:
	.size	new_file_table, .-new_file_table
	.align	1
	.globl	fs_init
	.type	fs_init, @function
fs_init:
.LFB48:
	.loc 1 2006 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	sd	s1,24(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	.loc 1 2007 5
	li	a2,256
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 1 2008 19
	call	new_file_table
	mv	a4,a0
	.loc 1 2008 18 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 1 2009 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 2009 24
	sw	zero,0(a5)
	.loc 1 2010 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 1 2010 24
	li	a4,1
	sw	a4,100(a5)
	.loc 1 2011 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 1 2011 19
	call	new_file_table
	mv	a5,a0
	.loc 1 2011 18 discriminator 1
	sd	a5,0(s1)
	.loc 1 2012 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 2012 24
	li	a4,1
	sw	a4,0(a5)
	.loc 1 2013 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 1 2013 24
	li	a4,1
	sw	a4,100(a5)
	.loc 1 2014 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 1 2014 19
	call	new_file_table
	mv	a5,a0
	.loc 1 2014 18 discriminator 1
	sd	a5,0(s1)
	.loc 1 2015 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 2015 24
	li	a4,2
	sw	a4,0(a5)
	.loc 1 2016 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 1 2016 24
	li	a4,1
	sw	a4,100(a5)
	.loc 1 2017 1
	nop
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	ld	s1,24(sp)
	.cfi_restore 9
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE48:
	.size	fs_init, .-fs_init
	.align	1
	.globl	is_pipe
	.type	is_pipe, @function
is_pipe:
.LFB49:
	.loc 1 2020 1
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
	sw	a5,-36(s0)
	.loc 1 2022 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2023 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2023 15 discriminator 1
	sd	a5,-24(s0)
	.loc 1 2024 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L645
	.loc 1 2024 12 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L646
.L645:
	.loc 1 2025 24
	li	a5,0
	j	.L651
.L646:
	.loc 1 2027 19
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2027 7
	bne	a5,zero,.L648
	.loc 1 2028 24
	li	a5,0
	j	.L651
.L648:
	.loc 1 2030 19
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2030 23
	lw	a5,100(a5)
	.loc 1 2030 7
	bne	a5,zero,.L649
	.loc 1 2031 24
	li	a5,0
	j	.L651
.L649:
	.loc 1 2033 18
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2033 22
	lw	a4,0(a5)
	.loc 1 2033 7
	li	a5,4
	bne	a4,a5,.L650
	.loc 1 2033 45 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2033 49 discriminator 1
	ld	a5,104(a5)
	.loc 1 2033 33 discriminator 1
	beq	a5,zero,.L650
	.loc 1 2034 24
	li	a5,1
	j	.L651
.L650:
	.loc 1 2036 16
	li	a5,0
.L651:
	.loc 1 2037 1
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
.LFE49:
	.size	is_pipe, .-is_pipe
	.align	1
	.globl	is_stdin
	.type	is_stdin, @function
is_stdin:
.LFB50:
	.loc 1 2040 1
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
	sw	a5,-36(s0)
	.loc 1 2042 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2043 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2043 15 discriminator 1
	sd	a5,-24(s0)
	.loc 1 2044 18
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2044 7
	beq	a5,zero,.L653
	.loc 1 2044 34 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2044 38 discriminator 1
	lw	a5,100(a5)
	.loc 1 2044 22 discriminator 1
	beq	a5,zero,.L653
	.loc 1 2045 22
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2045 26
	lw	a5,0(a5)
	.loc 1 2045 11
	bne	a5,zero,.L653
	.loc 1 2046 32
	li	a5,1
	j	.L655
.L653:
	.loc 1 2049 16
	li	a5,0
.L655:
	.loc 1 2050 1
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
.LFE50:
	.size	is_stdin, .-is_stdin
	.align	1
	.globl	is_stdout
	.type	is_stdout, @function
is_stdout:
.LFB51:
	.loc 1 2053 1
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
	sw	a5,-36(s0)
	.loc 1 2055 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2056 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2056 15 discriminator 1
	sd	a5,-24(s0)
	.loc 1 2057 18
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2057 7
	beq	a5,zero,.L657
	.loc 1 2057 34 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2057 38 discriminator 1
	lw	a5,100(a5)
	.loc 1 2057 22 discriminator 1
	beq	a5,zero,.L657
	.loc 1 2058 22
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2058 26
	lw	a4,0(a5)
	.loc 1 2058 11
	li	a5,1
	bne	a4,a5,.L657
	.loc 1 2059 32
	li	a5,1
	j	.L659
.L657:
	.loc 1 2062 16
	li	a5,0
.L659:
	.loc 1 2063 1
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
.LFE51:
	.size	is_stdout, .-is_stdout
	.align	1
	.globl	is_tty
	.type	is_tty, @function
is_tty:
.LFB52:
	.loc 1 2066 1
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
	sw	a5,-36(s0)
	.loc 1 2069 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2070 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2071 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2071 15 discriminator 1
	sd	a5,-24(s0)
	.loc 1 2072 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L661
	.loc 1 2072 12 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L662
.L661:
	.loc 1 2073 24
	li	a5,0
	j	.L668
.L662:
	.loc 1 2075 19
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2075 7
	bne	a5,zero,.L664
	.loc 1 2076 24
	li	a5,0
	j	.L668
.L664:
	.loc 1 2078 17
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2078 21
	lw	a5,0(a5)
	.loc 1 2078 6
	sw	a5,-28(s0)
	.loc 1 2079 18
	lw	a5,-28(s0)
	.loc 1 2079 39
	beq	a5,zero,.L665
	.loc 1 2079 26 discriminator 2
	lw	a4,-28(s0)
	.loc 1 2079 23 discriminator 2
	li	a5,1
	beq	a4,a5,.L665
	.loc 1 2079 34 discriminator 4
	lw	a4,-28(s0)
	.loc 1 2079 31 discriminator 4
	li	a5,2
	beq	a4,a5,.L665
	.loc 1 2079 42 discriminator 6
	lw	a4,-28(s0)
	.loc 1 2079 39 discriminator 6
	li	a5,5
	bne	a4,a5,.L666
.L665:
	.loc 1 2079 39 is_stmt 0 discriminator 7
	li	a5,1
	.loc 1 2079 39
	j	.L668
.L666:
	.loc 1 2079 39 discriminator 8
	li	a5,0
.L668:
	.loc 1 2080 1 is_stmt 1
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
.LFE52:
	.size	is_tty, .-is_tty
	.align	1
	.globl	pipe_open
	.type	pipe_open, @function
pipe_open:
.LFB53:
	.loc 1 2083 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	sd	s1,56(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	sd	a1,-80(s0)
	.loc 1 2088 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2089 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2090 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2091 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2092 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2092 15 discriminator 1
	sd	a5,-40(s0)
	.loc 1 2093 9
	call	pipealloc
	mv	a5,a0
	.loc 1 2093 8 discriminator 1
	sd	a5,-48(s0)
	.loc 1 2094 10
	li	a5,3
	sw	a5,-52(s0)
	.loc 1 2094 5
	j	.L670
.L673:
	.loc 1 2095 22
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2095 11
	bne	a5,zero,.L671
	.loc 1 2096 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 1 2096 27
	call	new_file_table
	mv	a5,a0
	.loc 1 2096 26 discriminator 1
	sd	a5,0(s1)
	.loc 1 2097 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2097 32
	li	a4,4
	sw	a4,0(a5)
	.loc 1 2098 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2098 32
	li	a4,1
	sw	a4,100(a5)
	.loc 1 2099 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2099 32
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 2100 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2100 31
	sw	zero,96(a5)
	.loc 1 2101 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2101 32
	ld	a4,-48(s0)
	sd	a4,104(a5)
	.loc 1 2102 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2102 37
	li	a4,1
	sw	a4,116(a5)
	.loc 1 2103 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2103 38
	sw	zero,120(a5)
	.loc 1 2104 17
	lw	a4,-52(s0)
	ld	a5,-72(s0)
	sw	a4,0(a5)
	.loc 1 2105 16
	ld	a5,-48(s0)
	lw	a4,536(a5)
	.loc 1 2105 22
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,536(a5)
	.loc 1 2106 13
	ld	a3,-48(s0)
	.loc 1 2106 53
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	.loc 1 2106 13
	ld	a5,0(a5)
	mv	a1,a5
	mv	a0,a3
	call	neoc_pipe_linked_file_add
	.loc 1 2107 16
	ld	a5,-48(s0)
	lw	a4,528(a5)
	.loc 1 2107 25
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,528(a5)
	.loc 1 2108 13
	j	.L672
.L671:
	.loc 1 2094 23 discriminator 2
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
.L670:
	.loc 1 2094 18 discriminator 1
	lw	a4,-52(s0)
	li	a5,31
	ble	a4,a5,.L673
.L672:
	.loc 1 2111 12
	li	a5,3
	sw	a5,-56(s0)
	.loc 1 2111 5
	j	.L674
.L677:
	.loc 1 2112 22
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2112 11
	bne	a5,zero,.L675
	.loc 1 2113 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 1 2113 29
	call	new_file_table
	mv	a5,a0
	.loc 1 2113 28 discriminator 1
	sd	a5,0(s1)
	.loc 1 2114 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2114 34
	li	a4,4
	sw	a4,0(a5)
	.loc 1 2115 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2115 34
	li	a4,1
	sw	a4,100(a5)
	.loc 1 2116 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2116 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 2117 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2117 33
	sw	zero,96(a5)
	.loc 1 2118 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2118 34
	ld	a4,-48(s0)
	sd	a4,104(a5)
	.loc 1 2119 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2119 40
	li	a4,1
	sw	a4,120(a5)
	.loc 1 2120 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2120 39
	sw	zero,116(a5)
	.loc 1 2121 17
	lw	a4,-56(s0)
	ld	a5,-80(s0)
	sw	a4,0(a5)
	.loc 1 2122 16
	ld	a5,-48(s0)
	lw	a4,536(a5)
	.loc 1 2122 22
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,536(a5)
	.loc 1 2123 13
	ld	a3,-48(s0)
	.loc 1 2123 53
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	.loc 1 2123 13
	ld	a5,0(a5)
	mv	a1,a5
	mv	a0,a3
	call	neoc_pipe_linked_file_add
	.loc 1 2124 16
	ld	a5,-48(s0)
	lw	a4,532(a5)
	.loc 1 2124 25
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,532(a5)
	.loc 1 2125 13
	j	.L676
.L675:
	.loc 1 2111 29 discriminator 2
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-56(s0)
.L674:
	.loc 1 2111 22 discriminator 1
	lw	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L677
	.loc 1 2128 1
	nop
.L676:
	nop
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	ld	s1,56(sp)
	.cfi_restore 9
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE53:
	.size	pipe_open, .-pipe_open
	.section	.rodata
	.align	3
.LC20:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB54:
	.loc 1 2131 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-80(s0)
	mv	a4,a2
	sw	a5,-68(s0)
	mv	a5,a4
	sw	a5,-72(s0)
	.loc 1 2136 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2137 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2138 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2139 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2140 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2140 15 discriminator 1
	sd	a5,-40(s0)
	.loc 1 2141 18
	ld	a4,-40(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2141 7
	bne	a5,zero,.L679
	.loc 1 2142 9
	lla	a0,.LC20
	call	panic
.L679:
	.loc 1 2144 7
	lw	a5,-68(s0)
	sext.w	a5,a5
	blt	a5,zero,.L680
	.loc 1 2144 12 discriminator 1
	lw	a5,-68(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L681
.L680:
	.loc 1 2145 9
	lla	a0,.LC20
	call	panic
.L681:
	.loc 1 2147 17
	ld	a4,-40(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2147 21
	ld	a5,104(a5)
	.loc 1 2147 6
	sd	a5,-48(s0)
	.loc 1 2148 9
	ld	a5,-48(s0)
	.loc 1 2148 7
	bne	a5,zero,.L683
	.loc 1 2149 9
	lla	a0,.LC20
	call	panic
	.loc 1 2151 10
	j	.L683
.L685:
	.loc 1 2152 9
	call	yield
.L683:
	.loc 1 2151 12
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2151 22
	ld	a5,-48(s0)
	lw	a5,516(a5)
	.loc 1 2151 30
	bne	a4,a5,.L684
	.loc 1 2151 33 discriminator 1
	ld	a5,-48(s0)
	lw	a5,524(a5)
	.loc 1 2151 30 discriminator 1
	bne	a5,zero,.L685
.L684:
	.loc 1 2154 9
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2154 19
	ld	a5,-48(s0)
	lw	a5,516(a5)
	.loc 1 2154 7
	bne	a4,a5,.L686
	.loc 1 2154 31 discriminator 1
	ld	a5,-48(s0)
	lw	a5,524(a5)
	.loc 1 2154 27 discriminator 1
	bne	a5,zero,.L686
	.loc 1 2155 24
	li	a5,0
	j	.L702
.L686:
	.loc 1 2157 6
	sw	zero,-52(s0)
	.loc 1 2158 10
	sw	zero,-56(s0)
	.loc 1 2158 5
	j	.L688
.L691:
	.loc 1 2160 13
	call	yield
.L689:
	.loc 1 2159 16
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2159 26
	ld	a5,-48(s0)
	lw	a5,516(a5)
	.loc 1 2159 34
	bne	a4,a5,.L690
	.loc 1 2159 37 discriminator 1
	ld	a5,-48(s0)
	lw	a5,524(a5)
	.loc 1 2159 34 discriminator 1
	bne	a5,zero,.L691
.L690:
	.loc 1 2162 13
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2162 23
	ld	a5,-48(s0)
	lw	a5,516(a5)
	.loc 1 2162 11
	bne	a4,a5,.L692
	.loc 1 2162 35 discriminator 1
	ld	a5,-48(s0)
	lw	a5,524(a5)
	.loc 1 2162 31 discriminator 1
	beq	a5,zero,.L703
.L692:
.LBB205:
.LBB206:
	.loc 1 2165 87
	li	a5,512
	sw	a5,-20(s0)
	.loc 1 2165 116
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L694
.LBB207:
	.loc 1 2165 218 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 2165 244 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L695
	.loc 1 2165 257 discriminator 4
	call	stackframe
	j	.L696
.L695:
	.loc 1 2165 278 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2165 298 discriminator 8
	lla	a0,__func__.16
	call	puts
.L696:
	.loc 1 2165 316 discriminator 10
	li	a0,2
	call	exit
.L694:
.LBE207:
	.loc 1 2165 329 discriminator 12
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2165 338 discriminator 12
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE206:
	.loc 1 2165 32 discriminator 12
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-32(s0)
	.loc 1 2165 366 discriminator 12
	ld	a5,-32(s0)
	blt	a5,zero,.L697
	.loc 1 2165 393 discriminator 14
	ld	a4,-32(s0)
	li	a5,511
	ble	a4,a5,.L698
.L697:
.LBB208:
	.loc 1 2165 516 discriminator 15
	lla	a0,.LC9
	call	puts
	.loc 1 2165 553 discriminator 17
	lla	a5,stackframe
	beq	a5,zero,.L699
	.loc 1 2165 566 discriminator 18
	call	stackframe
	j	.L700
.L699:
	.loc 1 2165 587 discriminator 19
	lla	a0,.LC1
	call	puts
	.loc 1 2165 607 discriminator 22
	lla	a0,__func__.16
	call	puts
.L700:
	.loc 1 2165 625 discriminator 24
	li	a0,2
	call	exit
.L698:
.LBE208:
	.loc 1 2165 638 discriminator 26
	ld	a4,-48(s0)
	.loc 1 2165 636 discriminator 26
	ld	a5,-32(s0)
	add	a4,a4,a5
.LBE205:
	.loc 1 2165 13 discriminator 26
	lw	a5,-56(s0)
	sext.w	a5,a5
	mv	a3,a5
	ld	a5,-80(s0)
	add	a5,a5,a3
	.loc 1 2165 18 discriminator 26
	lbu	a4,0(a4)
	.loc 1 2165 16 discriminator 26
	sb	a4,0(a5)
	.loc 1 2166 10
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2166 17
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,512(a5)
	.loc 1 2167 10
	lw	a5,-52(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
	.loc 1 2158 42 discriminator 2
	lw	a5,-56(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-56(s0)
.L688:
	.loc 1 2158 18 discriminator 1
	lw	a5,-56(s0)
	sext.w	a5,a5
	.loc 1 2158 20 discriminator 1
	lw	a4,-72(s0)
	sext.w	a4,a4
	ble	a4,a5,.L693
	.loc 1 2158 23 discriminator 3
	ld	a5,-48(s0)
	lw	a4,512(a5)
	.loc 1 2158 32 discriminator 3
	ld	a5,-48(s0)
	lw	a5,516(a5)
	.loc 1 2158 20 discriminator 3
	bltu	a4,a5,.L689
	j	.L693
.L703:
	.loc 1 2163 13
	nop
.L693:
	.loc 1 2169 16
	lw	a5,-52(s0)
	sext.w	a5,a5
.L702:
	.loc 1 2170 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE54:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC21:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB55:
	.loc 1 2173 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-80(s0)
	mv	a4,a2
	sw	a5,-68(s0)
	mv	a5,a4
	sw	a5,-72(s0)
	.loc 1 2177 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2178 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2179 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2180 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 2180 15 discriminator 1
	sd	a5,-40(s0)
	.loc 1 2181 18
	ld	a4,-40(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2181 7
	bne	a5,zero,.L705
	.loc 1 2182 9
	lla	a0,.LC21
	call	panic
.L705:
	.loc 1 2184 7
	lw	a5,-68(s0)
	sext.w	a5,a5
	blt	a5,zero,.L706
	.loc 1 2184 12 discriminator 1
	lw	a5,-68(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L707
.L706:
	.loc 1 2185 9
	lla	a0,.LC21
	call	panic
.L707:
	.loc 1 2187 17
	ld	a4,-40(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 2187 21
	ld	a5,104(a5)
	.loc 1 2187 6
	sd	a5,-48(s0)
	.loc 1 2188 9
	ld	a5,-48(s0)
	.loc 1 2188 7
	bne	a5,zero,.L708
	.loc 1 2189 9
	lla	a0,.LC21
	call	panic
.L708:
	.loc 1 2191 10
	sw	zero,-52(s0)
	.loc 1 2191 5
	j	.L709
.L712:
	.loc 1 2193 13
	call	yield
.L710:
	.loc 1 2192 16
	ld	a5,-48(s0)
	lw	a4,516(a5)
	.loc 1 2192 26
	ld	a5,-48(s0)
	lw	a5,512(a5)
	.loc 1 2192 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 1 2192 38
	li	a5,512
	bne	a4,a5,.L711
	.loc 1 2192 41 discriminator 1
	ld	a5,-48(s0)
	lw	a5,520(a5)
	.loc 1 2192 38 discriminator 1
	bne	a5,zero,.L712
.L711:
	.loc 1 2195 14
	ld	a5,-48(s0)
	lw	a5,520(a5)
	.loc 1 2195 11
	bne	a5,zero,.L713
	.loc 1 2196 36
	lw	a5,-52(s0)
	sext.w	a5,a5
	.loc 1 2196 44
	ble	a5,zero,.L714
	.loc 1 2196 44 is_stmt 0 discriminator 1
	lw	a5,-52(s0)
	sext.w	a5,a5
	.loc 1 2196 44
	j	.L725
.L714:
	.loc 1 2196 44 discriminator 2
	li	a5,-1
	.loc 1 2196 44
	j	.L725
.L713:
.LBB209:
.LBB210:
	.loc 1 2198 77 is_stmt 1
	li	a5,512
	sw	a5,-20(s0)
	.loc 1 2198 106
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L717
.LBB211:
	.loc 1 2198 208 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 2198 234 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L718
	.loc 1 2198 247 discriminator 4
	call	stackframe
	j	.L719
.L718:
	.loc 1 2198 268 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2198 288 discriminator 8
	lla	a0,__func__.15
	call	puts
.L719:
	.loc 1 2198 306 discriminator 10
	li	a0,2
	call	exit
.L717:
.LBE211:
	.loc 1 2198 319 discriminator 12
	ld	a5,-48(s0)
	lw	a4,516(a5)
	.loc 1 2198 329 discriminator 12
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE210:
	.loc 1 2198 22 discriminator 12
	slli	a5,a5,32
	srli	a5,a5,32
	sd	a5,-32(s0)
	.loc 1 2198 357 discriminator 12
	ld	a5,-32(s0)
	blt	a5,zero,.L720
	.loc 1 2198 384 discriminator 14
	ld	a4,-32(s0)
	li	a5,511
	ble	a4,a5,.L721
.L720:
.LBB212:
	.loc 1 2198 507 discriminator 15
	lla	a0,.LC9
	call	puts
	.loc 1 2198 544 discriminator 17
	lla	a5,stackframe
	beq	a5,zero,.L722
	.loc 1 2198 557 discriminator 18
	call	stackframe
	j	.L723
.L722:
	.loc 1 2198 578 discriminator 19
	lla	a0,.LC1
	call	puts
	.loc 1 2198 598 discriminator 22
	lla	a0,__func__.15
	call	puts
.L723:
	.loc 1 2198 616 discriminator 24
	li	a0,2
	call	exit
.L721:
.LBE212:
	.loc 1 2198 664 discriminator 26
	lw	a5,-52(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-80(s0)
	add	a5,a5,a4
	.loc 1 2198 628 discriminator 26
	ld	a3,-48(s0)
	.loc 1 2198 664 discriminator 26
	lbu	a4,0(a5)
	.loc 1 2198 658 discriminator 26
	ld	a5,-32(s0)
	add	a5,a3,a5
	sb	a4,0(a5)
.LBE209:
	.loc 1 2199 10
	ld	a5,-48(s0)
	lw	a4,516(a5)
	.loc 1 2199 18
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,516(a5)
	.loc 1 2191 22 discriminator 2
	lw	a5,-52(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
.L709:
	.loc 1 2191 18 discriminator 1
	lw	a5,-52(s0)
	sext.w	a5,a5
	lw	a4,-72(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L710
	.loc 1 2201 16
	lw	a5,-72(s0)
.L725:
	.loc 1 2202 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE55:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB56:
	.loc 1 2205 1
	.cfi_startproc
	addi	sp,sp,-288
	.cfi_def_cfa_offset 288
	sd	ra,280(sp)
	sd	s0,272(sp)
	sd	s1,264(sp)
	sd	s2,256(sp)
	sd	s3,248(sp)
	sd	s4,240(sp)
	sd	s5,232(sp)
	sd	s6,224(sp)
	sd	s7,216(sp)
	sd	s8,208(sp)
	sd	s9,200(sp)
	sd	s10,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	.cfi_offset 18, -32
	.cfi_offset 19, -40
	.cfi_offset 20, -48
	.cfi_offset 21, -56
	.cfi_offset 22, -64
	.cfi_offset 23, -72
	.cfi_offset 24, -80
	.cfi_offset 25, -88
	.cfi_offset 26, -96
	addi	s0,sp,288
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	sd	a1,-272(s0)
	sd	a2,-280(s0)
	.loc 1 2205 1
	mv	a5,sp
	mv	s10,a5
	.loc 1 2215 5
	addi	a5,s0,-120
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2216 5
	addi	a5,s0,-128
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2217 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2218 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2219 5
	addi	a5,s0,-232
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2220 5
	addi	a5,s0,-240
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2221 5
	addi	a5,s0,-244
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2222 5
	addi	a5,s0,-248
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2223 5
	addi	a5,s0,-252
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2224 7
	ld	a5,-264(s0)
	beq	a5,zero,.L727
	.loc 1 2224 19 discriminator 1
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 1 2224 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L728
.L727:
	.loc 1 2225 24
	li	a5,0
	j	.L729
.L728:
	.loc 1 2227 8
	lla	a1,.LC11
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 1 2227 7 discriminator 1
	bne	a5,zero,.L730
	.loc 1 2228 24
	li	a5,0
	j	.L729
.L730:
	.loc 1 2230 15
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 1 2230 27 discriminator 1
	addiw	a5,a5,1
	sext.w	s1,a5
	mv	a5,s1
	.loc 1 2230 10 discriminator 1
	addi	a5,a5,-1
	sd	a5,-104(s0)
	mv	a5,s1
	mv	s8,a5
	li	s9,0
	srli	a5,s8,61
	slli	s5,s9,3
	add	s5,a5,s5
	slli	s4,s8,3
	mv	a5,s1
	mv	s6,a5
	li	s7,0
	srli	a5,s6,61
	slli	s3,s7,3
	add	s3,a5,s3
	slli	s2,s6,3
	mv	a5,s1
	addi	a5,a5,15
	srli	a5,a5,4
	slli	a5,a5,4
	sub	sp,sp,a5
	mv	a5,sp
	sd	a5,-112(s0)
	.loc 1 2231 5
	mv	a5,s1
	mv	a2,a5
	li	a1,0
	ld	a0,-112(s0)
	call	memset
	.loc 1 2232 5
	mv	a2,s1
	ld	a1,-264(s0)
	ld	a0,-112(s0)
	call	strncpy
	.loc 1 2233 9
	ld	a5,-112(s0)
	sd	a5,-120(s0)
	.loc 1 2234 9
	sd	zero,-128(s0)
	.loc 1 2235 9
	ld	a5,-120(s0)
	lla	a1,.LC11
	mv	a0,a5
	call	strtok
	mv	a5,a0
	.loc 1 2235 8 discriminator 1
	sd	a5,-136(s0)
	.loc 1 2236 8
	li	a5,1
	sw	a5,-140(s0)
	.loc 1 2237 5
	lw	a5,-140(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2238 10
	j	.L731
.L736:
	.loc 1 2239 17
	lla	a1,.LC11
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 1 2239 16 discriminator 1
	sd	a5,-240(s0)
	.loc 1 2240 12
	ld	a5,-240(s0)
	.loc 1 2240 11
	bne	a5,zero,.L732
	.loc 1 2241 17
	ld	a5,-136(s0)
	sd	a5,-128(s0)
	.loc 1 2242 13
	j	.L733
.L732:
	.loc 1 2244 14
	lhu	a5,-232(s0)
	.loc 1 2244 11
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L734
	.loc 1 2245 32
	li	a5,0
	j	.L729
.L734:
	.loc 1 2247 19
	ld	a4,-136(s0)
	addi	a5,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 1 2247 18 discriminator 1
	sw	a5,-244(s0)
	.loc 1 2248 21
	lw	a5,-244(s0)
	.loc 1 2248 11
	bne	a5,zero,.L735
	.loc 1 2249 32
	li	a5,0
	j	.L729
.L735:
	.loc 1 2251 9
	lw	a5,-244(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2252 12
	lw	a5,-244(s0)
	sw	a5,-140(s0)
	.loc 1 2253 12
	ld	a5,-240(s0)
	sd	a5,-136(s0)
.L731:
	.loc 1 2238 11
	ld	a5,-136(s0)
	bne	a5,zero,.L736
.L733:
	.loc 1 2255 8
	ld	a5,-128(s0)
	.loc 1 2255 7
	bne	a5,zero,.L737
	.loc 1 2256 24
	li	a5,0
	j	.L729
.L737:
	.loc 1 2258 17
	lw	a4,-140(s0)
	ld	a5,-272(s0)
	sw	a4,0(a5)
	.loc 1 2259 7
	ld	a5,-128(s0)
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 2259 6 discriminator 1
	sw	a5,-248(s0)
	.loc 1 2260 9
	lw	a4,-248(s0)
	.loc 1 2260 7
	li	a5,14
	ble	a4,a5,.L738
	.loc 1 2261 10
	li	a5,14
	sw	a5,-248(s0)
.L738:
	.loc 1 2263 10
	sw	zero,-252(s0)
	.loc 1 2263 5
	j	.L739
.L740:
	.loc 1 2264 17
	lw	a5,-252(s0)
	mv	a4,a5
	ld	a5,-280(s0)
	add	a5,a5,a4
	.loc 1 2264 20
	sb	zero,0(a5)
	.loc 1 2263 23 discriminator 3
	lw	a5,-252(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-252(s0)
.L739:
	.loc 1 2263 18 discriminator 1
	lw	a4,-252(s0)
	li	a5,13
	ble	a4,a5,.L740
	.loc 1 2266 5
	ld	a5,-128(s0)
	lw	a4,-248(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-280(s0)
	call	strncpy
	.loc 1 2267 16
	li	a5,1
.L729:
	mv	sp,s10
	.loc 1 2268 1
	mv	a0,a5
	addi	sp,s0,-288
	.cfi_def_cfa 2, 288
	ld	ra,280(sp)
	.cfi_restore 1
	ld	s0,272(sp)
	.cfi_restore 8
	ld	s1,264(sp)
	.cfi_restore 9
	ld	s2,256(sp)
	.cfi_restore 18
	ld	s3,248(sp)
	.cfi_restore 19
	ld	s4,240(sp)
	.cfi_restore 20
	ld	s5,232(sp)
	.cfi_restore 21
	ld	s6,224(sp)
	.cfi_restore 22
	ld	s7,216(sp)
	.cfi_restore 23
	ld	s8,208(sp)
	.cfi_restore 24
	ld	s9,200(sp)
	.cfi_restore 25
	ld	s10,192(sp)
	.cfi_restore 26
	addi	sp,sp,288
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE56:
	.size	path_parent_lookup_abs, .-path_parent_lookup_abs
	.align	1
	.type	alloc_inode_T_FILE, @function
alloc_inode_T_FILE:
.LFB57:
	.loc 1 2271 1
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
	.loc 1 2275 5
	addi	a5,s0,-104
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2276 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2277 5
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2278 13
	li	a5,1
	sw	a5,-108(s0)
	.loc 1 2278 5
	j	.L743
.L746:
	.loc 1 2279 9
	lw	a5,-108(s0)
	addi	a4,s0,-104
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2280 14
	lhu	a5,-104(s0)
	.loc 1 2280 11
	bne	a5,zero,.L744
	.loc 1 2281 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2282 22
	li	a5,2
	sh	a5,-200(s0)
	.loc 1 2283 23
	li	a5,1
	sh	a5,-194(s0)
	.loc 1 2284 22
	sw	zero,-192(s0)
	.loc 1 2285 22
	li	a5,420
	sw	a5,-188(s0)
	.loc 1 2286 21
	sh	zero,-184(s0)
	.loc 1 2287 21
	sh	zero,-182(s0)
	.loc 1 2288 46
	call	fs_now
	mv	a5,a0
	.loc 1 2288 45 discriminator 1
	sw	a5,-172(s0)
	.loc 1 2288 39 discriminator 1
	lw	a5,-172(s0)
	.loc 1 2288 34 discriminator 1
	sw	a5,-176(s0)
	.loc 1 2288 28 discriminator 1
	lw	a5,-176(s0)
	.loc 1 2288 23 discriminator 1
	sw	a5,-180(s0)
	.loc 1 2289 13
	lw	a5,-108(s0)
	addi	a4,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2290 32
	lw	a5,-108(s0)
	j	.L747
.L744:
	.loc 1 2278 51 discriminator 2
	lw	a5,-108(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-108(s0)
.L743:
	.loc 1 2278 28 discriminator 1
	lla	a5,sb
	lw	a4,8(a5)
	.loc 1 2278 24 discriminator 1
	lw	a5,-108(s0)
	bgeu	a4,a5,.L746
	.loc 1 2293 16
	li	a5,0
.L747:
	.loc 1 2294 1
	mv	a0,a5
	ld	ra,200(sp)
	.cfi_restore 1
	ld	s0,192(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 208
	addi	sp,sp,208
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE57:
	.size	alloc_inode_T_FILE, .-alloc_inode_T_FILE
	.align	1
	.type	add_dirent, @function
add_dirent:
.LFB58:
	.loc 1 2297 1
	.cfi_startproc
	addi	sp,sp,-752
	.cfi_def_cfa_offset 752
	sd	ra,744(sp)
	sd	s0,736(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,752
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-752(s0)
	mv	a4,a2
	sw	a5,-740(s0)
	mv	a5,a4
	sw	a5,-744(s0)
	.loc 1 2316 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2317 5
	addi	a5,s0,-136
	li	a2,16
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2318 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2319 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2320 5
	addi	a5,s0,-152
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2321 5
	addi	a5,s0,-156
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2322 5
	addi	a5,s0,-160
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2323 5
	addi	a5,s0,-164
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2324 5
	addi	a5,s0,-168
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2325 5
	addi	a5,s0,-172
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2326 5
	addi	a5,s0,-176
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2327 5
	addi	a5,s0,-180
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2328 5
	addi	a5,s0,-184
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2329 5
	addi	a5,s0,-188
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2330 5
	addi	a5,s0,-192
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2331 5
	addi	a5,s0,-196
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2332 5
	addi	a5,s0,-208
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2333 5
	addi	a5,s0,-212
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2334 7
	ld	a5,-752(s0)
	beq	a5,zero,.L749
	.loc 1 2334 19 discriminator 1
	ld	a5,-752(s0)
	lbu	a5,0(a5)
	.loc 1 2334 13 discriminator 1
	bne	a5,zero,.L750
.L749:
	.loc 1 2335 24
	li	a5,-1
	j	.L775
.L750:
	.loc 1 2337 5
	addi	a4,s0,-120
	lw	a5,-740(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2338 11
	lhu	a5,-120(s0)
	.loc 1 2338 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L752
	.loc 1 2339 24
	li	a5,-1
	j	.L775
.L752:
	.loc 1 2341 13
	lw	a5,-744(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 1 2341 12
	sh	a5,-136(s0)
	.loc 1 2342 10
	sw	zero,-140(s0)
	.loc 1 2342 5
	j	.L753
.L758:
.LBB213:
	.loc 1 2343 46
	lw	a5,-140(s0)
	.loc 1 2343 22
	sd	a5,-32(s0)
	.loc 1 2343 64
	ld	a5,-32(s0)
	blt	a5,zero,.L754
	.loc 1 2343 91 discriminator 2
	ld	a4,-32(s0)
	li	a5,13
	ble	a4,a5,.L755
.L754:
.LBB214:
	.loc 1 2343 213 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2343 250 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L756
	.loc 1 2343 263 discriminator 6
	call	stackframe
	j	.L757
.L756:
	.loc 1 2343 284 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2343 304 discriminator 10
	lla	a0,__func__.13
	call	puts
.L757:
	.loc 1 2343 322 discriminator 12
	li	a0,2
	call	exit
.L755:
.LBE214:
	.loc 1 2343 374 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-118(a5)
.LBE213:
	.loc 1 2342 23 discriminator 2
	lw	a5,-140(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-140(s0)
.L753:
	.loc 1 2342 18 discriminator 1
	lw	a4,-140(s0)
	li	a5,13
	ble	a4,a5,.L758
	.loc 1 2345 5
	addi	a5,s0,-136
	addi	a5,a5,2
	li	a2,14
	ld	a1,-752(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 2346 8
	sw	zero,-144(s0)
	.loc 1 2347 10
	j	.L759
.L772:
	.loc 1 2348 9
	lw	a4,-144(s0)
	addi	a5,s0,-120
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 2349 13
	lla	a5,block_buf
	sd	a5,-152(s0)
	.loc 1 2350 16
	li	a5,32
	sw	a5,-156(s0)
	.loc 1 2351 16
	sw	zero,-160(s0)
	.loc 1 2351 9
	j	.L760
.L771:
	.loc 1 2352 20
	ld	a4,-152(s0)
	lw	a5,-160(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2352 25
	lhu	a5,0(a5)
	.loc 1 2352 15
	bne	a5,zero,.L761
	.loc 1 2353 21
	ld	a4,-152(s0)
	lw	a5,-160(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2353 26
	lhu	a4,-136(s0)
	mv	a7,a4
	lhu	a4,-134(s0)
	mv	a6,a4
	lhu	a4,-132(s0)
	mv	a0,a4
	lhu	a4,-130(s0)
	mv	a1,a4
	lhu	a4,-128(s0)
	mv	a2,a4
	lhu	a4,-126(s0)
	mv	a3,a4
	lhu	a4,-124(s0)
	sh	a7,0(a5)
	sh	a6,2(a5)
	sh	a0,4(a5)
	sh	a1,6(a5)
	sh	a2,8(a5)
	sh	a3,10(a5)
	sh	a4,12(a5)
	lhu	a4,-122(s0)
	sh	a4,14(a5)
.LBB215:
	.loc 1 2354 45
	li	a5,512
	sw	a5,-20(s0)
	.loc 1 2354 74
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L762
.LBB216:
	.loc 1 2354 176 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 2354 204 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L763
	.loc 1 2354 217 discriminator 4
	call	stackframe
	j	.L764
.L763:
	.loc 1 2354 238 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2354 258 discriminator 8
	lla	a0,__func__.13
	call	puts
.L764:
	.loc 1 2354 276 discriminator 10
	li	a0,2
	call	exit
.L762:
.LBE216:
	.loc 1 2354 293 discriminator 12
	lw	a4,-144(s0)
	lw	a5,-20(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE215:
	.loc 1 2354 24 discriminator 12
	sw	a5,-164(s0)
	.loc 1 2355 26
	lw	a3,-164(s0)
	addi	a4,s0,-120
	lw	a5,-740(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 2355 25 discriminator 1
	sw	a5,-168(s0)
	.loc 1 2356 20
	lw	a5,-168(s0)
	.loc 1 2356 19
	bne	a5,zero,.L765
	.loc 1 2357 48
	li	a5,-1
	j	.L775
.L765:
	.loc 1 2359 17
	lw	a5,-168(s0)
	ld	a4,-152(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 2360 32
	lw	a5,-112(s0)
	.loc 1 2360 48
	srliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 2360 28
	sw	a5,-172(s0)
	.loc 1 2361 30
	lw	a5,-144(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 2361 71
	lw	a4,-160(s0)
	.loc 1 2361 70
	addw	a5,a5,a4
	sext.w	a5,a5
	.loc 1 2361 24
	sw	a5,-176(s0)
	.loc 1 2362 27
	lw	a4,-176(s0)
	lw	a5,-172(s0)
	.loc 1 2362 19
	bltu	a4,a5,.L766
.LBB217:
	.loc 1 2363 52
	li	a5,512
	sw	a5,-24(s0)
	.loc 1 2363 81
	lw	a5,-24(s0)
	sext.w	a5,a5
	bne	a5,zero,.L767
.LBB218:
	.loc 1 2363 183 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 2363 211 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L768
	.loc 1 2363 224 discriminator 4
	call	stackframe
	j	.L769
.L768:
	.loc 1 2363 245 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2363 265 discriminator 8
	lla	a0,__func__.13
	call	puts
.L769:
	.loc 1 2363 283 discriminator 10
	li	a0,2
	call	exit
.L767:
.LBE218:
	.loc 1 2363 300 discriminator 12
	lw	a4,-144(s0)
	lw	a5,-24(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE217:
	.loc 1 2363 324 discriminator 12
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 2363 327 discriminator 12
	slliw	a5,a5,9
	sext.w	a5,a5
	.loc 1 2363 30 discriminator 12
	sw	a5,-180(s0)
	.loc 1 2364 27
	lw	a4,-112(s0)
	.loc 1 2364 42
	lw	a5,-180(s0)
	.loc 1 2364 23
	bgeu	a4,a5,.L770
	.loc 1 2365 33
	lw	a5,-180(s0)
	sw	a5,-112(s0)
.L770:
	.loc 1 2367 31
	call	fs_now
	mv	a5,a0
	.loc 1 2367 30 discriminator 1
	sw	a5,-96(s0)
	.loc 1 2368 21
	addi	a4,s0,-120
	lw	a5,-740(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L766:
	.loc 1 2370 40
	li	a5,0
	j	.L775
.L761:
	.loc 1 2351 42 discriminator 2
	lw	a5,-160(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-160(s0)
.L760:
	.loc 1 2351 30 discriminator 1
	lw	a4,-160(s0)
	lw	a5,-156(s0)
	blt	a4,a5,.L771
	.loc 1 2373 12
	lw	a5,-144(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-144(s0)
.L759:
	.loc 1 2347 18
	lw	a4,-112(s0)
	.loc 1 2347 14
	lw	a5,-144(s0)
	bgtu	a4,a5,.L772
	.loc 1 2375 12
	lw	a5,-112(s0)
	.loc 1 2375 8
	srliw	a5,a5,4
	sext.w	a5,a5
	sw	a5,-184(s0)
	.loc 1 2376 19
	lw	a5,-184(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,4
	.loc 1 2376 44
	srli	a5,a5,9
	.loc 1 2376 14
	sext.w	a5,a5
	sw	a5,-188(s0)
	.loc 1 2377 17
	lw	a5,-184(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 1 2377 42
	andi	a5,a5,496
	sext.w	a5,a5
	.loc 1 2377 12
	sw	a5,-192(s0)
	.loc 1 2378 16
	lw	a3,-188(s0)
	addi	a4,s0,-120
	lw	a5,-740(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 2378 15 discriminator 1
	sw	a5,-196(s0)
	.loc 1 2379 8
	lw	a5,-196(s0)
	.loc 1 2379 7
	bne	a5,zero,.L773
	.loc 1 2380 24
	li	a5,-1
	j	.L775
.L773:
	.loc 1 2383 5
	addi	a5,s0,-728
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2384 5
	lw	a5,-196(s0)
	addi	a4,s0,-728
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 2385 12
	addi	a5,s0,-728
	sd	a5,-208(s0)
	.loc 1 2386 12
	ld	a4,-208(s0)
	.loc 1 2386 22
	lw	a5,-192(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 2386 12
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2386 48
	lhu	a4,-136(s0)
	mv	a7,a4
	lhu	a4,-134(s0)
	mv	a6,a4
	lhu	a4,-132(s0)
	mv	a0,a4
	lhu	a4,-130(s0)
	mv	a1,a4
	lhu	a4,-128(s0)
	mv	a2,a4
	lhu	a4,-126(s0)
	mv	a3,a4
	lhu	a4,-124(s0)
	sh	a7,0(a5)
	sh	a6,2(a5)
	sh	a0,4(a5)
	sh	a1,6(a5)
	sh	a2,8(a5)
	sh	a3,10(a5)
	sh	a4,12(a5)
	lhu	a4,-122(s0)
	sh	a4,14(a5)
	.loc 1 2387 5
	lw	a5,-196(s0)
	addi	a4,s0,-728
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 2388 28
	lw	a5,-188(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 2388 31
	slliw	a5,a5,9
	sext.w	a5,a5
	.loc 1 2388 17
	sw	a5,-212(s0)
	.loc 1 2389 11
	lw	a4,-112(s0)
	.loc 1 2389 26
	lw	a5,-212(s0)
	.loc 1 2389 7
	bgeu	a4,a5,.L774
	.loc 1 2390 17
	lw	a5,-212(s0)
	sw	a5,-112(s0)
.L774:
	.loc 1 2392 15
	call	fs_now
	mv	a5,a0
	.loc 1 2392 14 discriminator 1
	sw	a5,-96(s0)
	.loc 1 2393 5
	addi	a4,s0,-120
	lw	a5,-740(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2394 16
	li	a5,0
.L775:
	.loc 1 2395 1
	mv	a0,a5
	ld	ra,744(sp)
	.cfi_restore 1
	ld	s0,736(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 752
	addi	sp,sp,752
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE58:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB59:
	.loc 1 2398 1
	.cfi_startproc
	addi	sp,sp,-192
	.cfi_def_cfa_offset 192
	sd	ra,184(sp)
	sd	s0,176(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,192
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-192(s0)
	sw	a5,-180(s0)
	.loc 1 2404 5
	addi	a5,s0,-128
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2405 5
	addi	a5,s0,-132
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2406 5
	addi	a5,s0,-144
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2407 5
	addi	a5,s0,-148
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2408 5
	addi	a5,s0,-152
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2409 5
	addi	a4,s0,-128
	lw	a5,-180(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2410 11
	lhu	a5,-128(s0)
	.loc 1 2410 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L777
	.loc 1 2411 24
	li	a5,-1
	j	.L795
.L777:
	.loc 1 2413 8
	sw	zero,-132(s0)
	.loc 1 2415 5
	addi	a5,s0,-168
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2416 10
	j	.L779
.L794:
.LBB219:
	.loc 1 2417 73
	li	a5,512
	sw	a5,-20(s0)
	.loc 1 2417 102
	lw	a5,-20(s0)
	sext.w	a5,a5
	bne	a5,zero,.L780
.LBB220:
	.loc 1 2417 204 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 2417 232 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L781
	.loc 1 2417 245 discriminator 4
	call	stackframe
	j	.L782
.L781:
	.loc 1 2417 266 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2417 286 discriminator 8
	lla	a0,__func__.12
	call	puts
.L782:
	.loc 1 2417 304 discriminator 10
	li	a0,2
	call	exit
.L780:
.LBE220:
	.loc 1 2417 321 discriminator 12
	lw	a4,-132(s0)
	lw	a5,-20(s0)
	divuw	a5,a4,a5
	sext.w	a3,a5
.LBE219:
	.loc 1 2417 9 discriminator 12
	addi	a4,s0,-128
	lw	a5,-180(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 2417 9 is_stmt 0 discriminator 13
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 2418 11 is_stmt 1
	lla	a5,block_buf
	sd	a5,-144(s0)
	.loc 1 2419 16
	li	a5,32
	sw	a5,-148(s0)
	.loc 1 2420 14
	sw	zero,-152(s0)
	.loc 1 2420 9
	j	.L783
.L793:
	.loc 1 2421 18
	ld	a4,-144(s0)
	lw	a5,-152(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2421 21
	lhu	a5,0(a5)
	.loc 1 2421 15
	beq	a5,zero,.L796
	.loc 1 2424 30
	ld	a4,-144(s0)
	lw	a5,-152(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2424 33
	addi	a4,a5,2
	.loc 1 2424 13
	addi	a5,s0,-168
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
.LBB221:
	.loc 1 2425 26
	li	a5,14
	sd	a5,-32(s0)
	.loc 1 2425 69
	ld	a5,-32(s0)
	blt	a5,zero,.L786
	.loc 1 2425 96 discriminator 2
	ld	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L787
.L786:
.LBB222:
	.loc 1 2425 220 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2425 257 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L788
	.loc 1 2425 270 discriminator 6
	call	stackframe
	j	.L789
.L788:
	.loc 1 2425 291 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2425 311 discriminator 10
	lla	a0,__func__.12
	call	puts
.L789:
	.loc 1 2425 329 discriminator 12
	li	a0,2
	call	exit
.L787:
.LBE222:
	.loc 1 2425 371 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-152(a5)
.LBE221:
	.loc 1 2426 16
	addi	a5,s0,-168
	li	a2,14
	ld	a1,-192(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 1 2426 15 discriminator 1
	bne	a5,zero,.L785
	.loc 1 2427 19
	ld	a4,-144(s0)
	lw	a5,-152(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2427 27
	sh	zero,0(a5)
.LBB223:
	.loc 1 2428 82
	li	a5,512
	sw	a5,-36(s0)
	.loc 1 2428 111
	lw	a5,-36(s0)
	sext.w	a5,a5
	bne	a5,zero,.L790
.LBB224:
	.loc 1 2428 213 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 2428 241 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L791
	.loc 1 2428 254 discriminator 4
	call	stackframe
	j	.L792
.L791:
	.loc 1 2428 275 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2428 295 discriminator 8
	lla	a0,__func__.12
	call	puts
.L792:
	.loc 1 2428 313 discriminator 10
	li	a0,2
	call	exit
.L790:
.LBE224:
	.loc 1 2428 330 discriminator 12
	lw	a4,-132(s0)
	lw	a5,-36(s0)
	divuw	a5,a4,a5
	sext.w	a3,a5
.LBE223:
	.loc 1 2428 17 discriminator 12
	addi	a4,s0,-128
	lw	a5,-180(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 2428 17 is_stmt 0 discriminator 13
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 2429 27 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 1 2429 26 discriminator 1
	sw	a5,-104(s0)
	.loc 1 2430 17
	addi	a4,s0,-128
	lw	a5,-180(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2431 40
	li	a5,0
	j	.L795
.L796:
	.loc 1 2422 17
	nop
.L785:
	.loc 1 2420 36 discriminator 2
	lw	a5,-152(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-152(s0)
.L783:
	.loc 1 2420 26 discriminator 1
	lw	a4,-152(s0)
	lw	a5,-148(s0)
	blt	a4,a5,.L793
	.loc 1 2434 12
	lw	a5,-132(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-132(s0)
.L779:
	.loc 1 2416 18
	lw	a4,-120(s0)
	.loc 1 2416 14
	lw	a5,-132(s0)
	bgtu	a4,a5,.L794
	.loc 1 2436 16
	li	a5,-1
.L795:
	.loc 1 2437 1
	mv	a0,a5
	ld	ra,184(sp)
	.cfi_restore 1
	ld	s0,176(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 192
	addi	sp,sp,192
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE59:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB60:
	.loc 1 2440 1
	.cfi_startproc
	addi	sp,sp,-1280
	.cfi_def_cfa_offset 1280
	sd	ra,1272(sp)
	sd	s0,1264(sp)
	sd	s1,1256(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1280
	.cfi_def_cfa 8, 0
	sd	a0,-1256(s0)
	sd	a1,-1264(s0)
	sd	a2,-1272(s0)
	.loc 1 2453 5
	addi	a5,s0,-192
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2454 5
	addi	a5,s0,-196
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2455 5
	addi	a5,s0,-208
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2456 5
	addi	a5,s0,-212
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2457 5
	addi	a5,s0,-216
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2458 5
	addi	a5,s0,-220
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2459 5
	addi	a5,s0,-224
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2460 5
	addi	a5,s0,-228
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2461 5
	addi	a5,s0,-232
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2462 5
	addi	a5,s0,-236
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2463 5
	addi	a5,s0,-240
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2464 5
	addi	a5,s0,-244
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2465 7
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2465 6 discriminator 1
	sd	a5,-192(s0)
	.loc 1 2467 5
	addi	a5,s0,-504
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2468 7
	ld	a5,-1272(s0)
	beq	a5,zero,.L798
	.loc 1 2468 18 discriminator 1
	ld	a5,-1272(s0)
	lbu	a5,0(a5)
	.loc 1 2468 12 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L798
	.loc 1 2469 9
	addi	a5,s0,-504
	li	a2,255
	ld	a1,-1272(s0)
	mv	a0,a5
	call	strncpy
.LBB225:
	.loc 1 2470 22
	li	a5,255
	sd	a5,-48(s0)
	.loc 1 2470 79
	ld	a5,-48(s0)
	blt	a5,zero,.L799
	.loc 1 2470 106 discriminator 2
	ld	a4,-48(s0)
	li	a5,255
	ble	a4,a5,.L800
.L799:
.LBB226:
	.loc 1 2470 229 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2470 266 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L801
	.loc 1 2470 279 discriminator 6
	call	stackframe
	j	.L802
.L801:
	.loc 1 2470 300 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2470 320 discriminator 10
	lla	a0,__func__.11
	call	puts
.L802:
	.loc 1 2470 338 discriminator 12
	li	a0,2
	call	exit
.L800:
.LBE226:
	.loc 1 2470 379 discriminator 14
	ld	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-472(a5)
.LBE225:
	.loc 1 2470 10
	j	.L803
.L798:
	.loc 1 2473 25
	ld	a5,-192(s0)
	addi	a4,a5,888
	.loc 1 2473 9
	addi	a5,s0,-504
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
.LBB227:
	.loc 1 2474 22
	li	a5,255
	sd	a5,-56(s0)
	.loc 1 2474 79
	ld	a5,-56(s0)
	blt	a5,zero,.L804
	.loc 1 2474 106 discriminator 2
	ld	a4,-56(s0)
	li	a5,255
	ble	a4,a5,.L805
.L804:
.LBB228:
	.loc 1 2474 229 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2474 266 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L806
	.loc 1 2474 279 discriminator 6
	call	stackframe
	j	.L807
.L806:
	.loc 1 2474 300 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2474 320 discriminator 10
	lla	a0,__func__.11
	call	puts
.L807:
	.loc 1 2474 338 discriminator 12
	li	a0,2
	call	exit
.L805:
.LBE228:
	.loc 1 2474 379 discriminator 14
	ld	a5,-56(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-472(a5)
.LBE227:
	.loc 1 2475 11
	addi	a5,s0,-504
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 2475 10 discriminator 1
	sw	a5,-196(s0)
	.loc 1 2476 15
	lw	a4,-196(s0)
	.loc 1 2476 11
	li	a5,1
	bne	a4,a5,.L808
.LBB229:
	.loc 1 2476 35 discriminator 1
	sd	zero,-64(s0)
	.loc 1 2476 77 discriminator 1
	ld	a5,-64(s0)
	blt	a5,zero,.L809
	.loc 1 2476 104 discriminator 3
	ld	a4,-64(s0)
	li	a5,255
	ble	a4,a5,.L810
.L809:
.LBB230:
	.loc 1 2476 227 discriminator 4
	lla	a0,.LC9
	call	puts
	.loc 1 2476 264 discriminator 6
	lla	a5,stackframe
	beq	a5,zero,.L811
	.loc 1 2476 277 discriminator 7
	call	stackframe
	j	.L812
.L811:
	.loc 1 2476 298 discriminator 8
	lla	a0,.LC1
	call	puts
	.loc 1 2476 318 discriminator 11
	lla	a0,__func__.11
	call	puts
.L812:
	.loc 1 2476 336 discriminator 13
	li	a0,2
	call	exit
.L810:
.LBE230:
	.loc 1 2476 347 discriminator 15
	addi	a4,s0,-504
	ld	a5,-64(s0)
	add	a5,a4,a5
.LBE229:
	.loc 1 2476 21 discriminator 15
	lbu	a5,0(a5)
	.loc 1 2476 12 discriminator 15
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L813
.L808:
	.loc 1 2477 17
	lw	a4,-196(s0)
	.loc 1 2477 15
	li	a5,254
	bgt	a4,a5,.L813
.LBB231:
	.loc 1 2478 67
	lw	a5,-196(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-196(s0)
	.loc 1 2478 30
	sd	a5,-72(s0)
	.loc 1 2478 74
	ld	a5,-72(s0)
	blt	a5,zero,.L814
	.loc 1 2478 101 discriminator 2
	ld	a4,-72(s0)
	li	a5,255
	ble	a4,a5,.L815
.L814:
.LBB232:
	.loc 1 2478 224 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2478 261 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L816
	.loc 1 2478 274 discriminator 6
	call	stackframe
	j	.L817
.L816:
	.loc 1 2478 295 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2478 315 discriminator 10
	lla	a0,__func__.11
	call	puts
.L817:
	.loc 1 2478 333 discriminator 12
	li	a0,2
	call	exit
.L815:
.LBE232:
	.loc 1 2478 374 discriminator 14
	ld	a5,-72(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-472(a5)
.LBE231:
.LBB233:
	.loc 1 2479 54
	lw	a5,-196(s0)
	.loc 1 2479 30
	sd	a5,-80(s0)
	.loc 1 2479 72
	ld	a5,-80(s0)
	blt	a5,zero,.L818
	.loc 1 2479 99 discriminator 2
	ld	a4,-80(s0)
	li	a5,255
	ble	a4,a5,.L819
.L818:
.LBB234:
	.loc 1 2479 222 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2479 259 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L820
	.loc 1 2479 272 discriminator 6
	call	stackframe
	j	.L821
.L820:
	.loc 1 2479 293 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2479 313 discriminator 10
	lla	a0,__func__.11
	call	puts
.L821:
	.loc 1 2479 331 discriminator 12
	li	a0,2
	call	exit
.L819:
.LBE234:
	.loc 1 2479 372 discriminator 14
	ld	a5,-80(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-472(a5)
.L813:
.LBE233:
	.loc 1 2482 11
	ld	a5,-1272(s0)
	beq	a5,zero,.L803
	.loc 1 2482 22 discriminator 1
	ld	a5,-1272(s0)
	lbu	a5,0(a5)
	.loc 1 2482 16 discriminator 1
	beq	a5,zero,.L803
	.loc 1 2483 48
	addi	a5,s0,-504
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 2483 48 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 2483 13 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-504
	mv	a2,a4
	ld	a1,-1272(s0)
	mv	a0,a5
	call	strncat
.L803:
	.loc 1 2487 5
	addi	a5,s0,-760
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2488 5
	addi	a4,s0,-504
	addi	a5,s0,-760
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
.LBB235:
	.loc 1 2489 18
	li	a5,255
	sd	a5,-88(s0)
	.loc 1 2489 72
	ld	a5,-88(s0)
	blt	a5,zero,.L822
	.loc 1 2489 99 discriminator 2
	ld	a4,-88(s0)
	li	a5,255
	ble	a4,a5,.L823
.L822:
.LBB236:
	.loc 1 2489 222 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2489 259 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L824
	.loc 1 2489 272 discriminator 6
	call	stackframe
	j	.L825
.L824:
	.loc 1 2489 293 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2489 313 discriminator 10
	lla	a0,__func__.11
	call	puts
.L825:
	.loc 1 2489 331 discriminator 12
	li	a0,2
	call	exit
.L823:
.LBE236:
	.loc 1 2489 369 discriminator 14
	ld	a5,-88(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-728(a5)
.LBE235:
	.loc 1 2490 17
	addi	a5,s0,-760
	sd	a5,-40(s0)
	.loc 1 2491 25
	addi	a5,s0,-760
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 2491 25 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 1 2491 17 is_stmt 1 discriminator 1
	addi	a5,s0,-760
	add	a5,a5,a4
	sd	a5,-96(s0)
	.loc 1 2493 5
	addi	a5,s0,-1240
	li	a2,480
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2494 10
	sw	zero,-212(s0)
	.loc 1 2495 10
	j	.L826
.L828:
	.loc 1 2497 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L827:
	.loc 1 2496 15
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 2496 17
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L828
	.loc 1 2499 12
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 2499 11
	beq	a5,zero,.L900
	.loc 1 2502 18
	ld	a5,-40(s0)
	sd	a5,-208(s0)
	.loc 1 2503 14
	j	.L831
.L833:
	.loc 1 2504 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L831:
	.loc 1 2503 15
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 2503 17
	beq	a5,zero,.L832
	.loc 1 2503 19 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 1 2503 17 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L833
.L832:
	.loc 1 2506 14
	ld	a5,-208(s0)
	ld	a4,-40(s0)
	sub	a5,a4,a5
	.loc 1 2506 12
	sext.w	a5,a5
	sw	a5,-216(s0)
	.loc 1 2507 15
	lw	a4,-216(s0)
	.loc 1 2507 11
	li	a5,1
	bne	a4,a5,.L834
	.loc 1 2507 29 discriminator 1
	ld	a5,-208(s0)
	lbu	a5,0(a5)
	.loc 1 2507 18 discriminator 1
	mv	a4,a5
	li	a5,46
	beq	a4,a5,.L826
.L834:
	.loc 1 2509 20
	lw	a4,-216(s0)
	.loc 1 2509 16
	li	a5,2
	bne	a4,a5,.L836
	.loc 1 2509 34 discriminator 1
	ld	a5,-208(s0)
	lbu	a5,0(a5)
	.loc 1 2509 23 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L836
	.loc 1 2509 52 discriminator 2
	ld	a5,-208(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 2509 41 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L836
	.loc 1 2510 21
	lw	a5,-212(s0)
	.loc 1 2510 15
	ble	a5,zero,.L826
	.loc 1 2511 22
	lw	a5,-212(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	sw	a5,-212(s0)
	.loc 1 2510 15
	j	.L826
.L836:
	.loc 1 2514 20
	lw	a5,-216(s0)
	.loc 1 2514 16
	ble	a5,zero,.L826
	.loc 1 2515 17
	lw	a5,-216(s0)
	sw	a5,-220(s0)
	.loc 1 2516 20
	lw	a4,-220(s0)
	.loc 1 2516 15
	li	a5,14
	ble	a4,a5,.L838
	.loc 1 2517 21
	li	a5,14
	sw	a5,-220(s0)
.L838:
	.loc 1 2519 18
	sw	zero,-224(s0)
	.loc 1 2519 13
	j	.L839
.L848:
.LBB237:
	.loc 1 2520 54
	lw	a5,-212(s0)
	.loc 1 2520 30
	sd	a5,-136(s0)
	.loc 1 2520 76
	ld	a5,-136(s0)
	blt	a5,zero,.L840
	.loc 1 2520 103 discriminator 2
	ld	a4,-136(s0)
	li	a5,31
	ble	a4,a5,.L841
.L840:
.LBB238:
	.loc 1 2520 225 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2520 262 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L842
	.loc 1 2520 275 discriminator 6
	call	stackframe
	j	.L843
.L842:
	.loc 1 2520 296 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2520 316 discriminator 10
	lla	a0,__func__.11
	call	puts
.L843:
	.loc 1 2520 334 discriminator 12
	li	a0,2
	call	exit
.L841:
.LBE238:
	.loc 1 2520 379 discriminator 14
	lw	a5,-224(s0)
	.loc 1 2520 355 discriminator 14
	sd	a5,-144(s0)
	.loc 1 2520 397 discriminator 14
	ld	a5,-144(s0)
	blt	a5,zero,.L844
	.loc 1 2520 424 discriminator 16
	ld	a4,-144(s0)
	li	a5,14
	ble	a4,a5,.L845
.L844:
.LBB239:
	.loc 1 2520 548 discriminator 17
	lla	a0,.LC9
	call	puts
	.loc 1 2520 585 discriminator 19
	lla	a5,stackframe
	beq	a5,zero,.L846
	.loc 1 2520 598 discriminator 20
	call	stackframe
	j	.L847
.L846:
	.loc 1 2520 619 discriminator 21
	lla	a0,.LC1
	call	puts
	.loc 1 2520 639 discriminator 24
	lla	a0,__func__.11
	call	puts
.L847:
	.loc 1 2520 657 discriminator 26
	li	a0,2
	call	exit
.L845:
.LBE239:
	.loc 1 2520 720 discriminator 28
	ld	a4,-136(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a4,a5,s0
	ld	a5,-144(s0)
	add	a5,a4,a5
	sb	zero,-1208(a5)
.LBE237:
	.loc 1 2519 41 discriminator 2
	lw	a5,-224(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-224(s0)
.L839:
	.loc 1 2519 34 discriminator 1
	lw	a4,-224(s0)
	li	a5,14
	ble	a4,a5,.L848
	.loc 1 2522 21
	sw	zero,-228(s0)
	.loc 1 2522 13
	j	.L849
.L858:
.LBB240:
	.loc 1 2523 54
	lw	a5,-212(s0)
	.loc 1 2523 30
	sd	a5,-120(s0)
	.loc 1 2523 76
	ld	a5,-120(s0)
	blt	a5,zero,.L850
	.loc 1 2523 103 discriminator 2
	ld	a4,-120(s0)
	li	a5,31
	ble	a4,a5,.L851
.L850:
.LBB241:
	.loc 1 2523 225 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2523 262 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L852
	.loc 1 2523 275 discriminator 6
	call	stackframe
	j	.L853
.L852:
	.loc 1 2523 296 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2523 316 discriminator 10
	lla	a0,__func__.11
	call	puts
.L853:
	.loc 1 2523 334 discriminator 12
	li	a0,2
	call	exit
.L851:
.LBE241:
	.loc 1 2523 379 discriminator 14
	lw	a5,-228(s0)
	.loc 1 2523 355 discriminator 14
	sd	a5,-128(s0)
	.loc 1 2523 400 discriminator 14
	ld	a5,-128(s0)
	blt	a5,zero,.L854
	.loc 1 2523 427 discriminator 16
	ld	a4,-128(s0)
	li	a5,14
	ble	a4,a5,.L855
.L854:
.LBB242:
	.loc 1 2523 551 discriminator 17
	lla	a0,.LC9
	call	puts
	.loc 1 2523 588 discriminator 19
	lla	a5,stackframe
	beq	a5,zero,.L856
	.loc 1 2523 601 discriminator 20
	call	stackframe
	j	.L857
.L856:
	.loc 1 2523 622 discriminator 21
	lla	a0,.LC1
	call	puts
	.loc 1 2523 642 discriminator 24
	lla	a0,__func__.11
	call	puts
.L857:
	.loc 1 2523 660 discriminator 26
	li	a0,2
	call	exit
.L855:
.LBE242:
	.loc 1 2523 734 discriminator 28
	ld	a5,-208(s0)
	lw	a4,-228(s0)
	add	a5,a5,a4
	lbu	a3,0(a5)
	.loc 1 2523 723 discriminator 28
	ld	a4,-120(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a4,a5,s0
	ld	a5,-128(s0)
	add	a5,a4,a5
	sb	a3,-1208(a5)
.LBE240:
	.loc 1 2522 50 discriminator 2
	lw	a5,-228(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-228(s0)
.L849:
	.loc 1 2522 40 discriminator 1
	lw	a4,-228(s0)
	lw	a5,-220(s0)
	blt	a4,a5,.L858
.LBB243:
	.loc 1 2525 50
	lw	a5,-212(s0)
	.loc 1 2525 26
	sd	a5,-104(s0)
	.loc 1 2525 72
	ld	a5,-104(s0)
	blt	a5,zero,.L859
	.loc 1 2525 99 discriminator 2
	ld	a4,-104(s0)
	li	a5,31
	ble	a4,a5,.L860
.L859:
.LBB244:
	.loc 1 2525 221 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2525 258 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L861
	.loc 1 2525 271 discriminator 6
	call	stackframe
	j	.L862
.L861:
	.loc 1 2525 292 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2525 312 discriminator 10
	lla	a0,__func__.11
	call	puts
.L862:
	.loc 1 2525 330 discriminator 12
	li	a0,2
	call	exit
.L860:
.LBE244:
	.loc 1 2525 375 discriminator 14
	lw	a5,-220(s0)
	.loc 1 2525 351 discriminator 14
	sd	a5,-112(s0)
	.loc 1 2525 396 discriminator 14
	ld	a5,-112(s0)
	blt	a5,zero,.L863
	.loc 1 2525 423 discriminator 16
	ld	a4,-112(s0)
	li	a5,14
	ble	a4,a5,.L864
.L863:
.LBB245:
	.loc 1 2525 547 discriminator 17
	lla	a0,.LC9
	call	puts
	.loc 1 2525 584 discriminator 19
	lla	a5,stackframe
	beq	a5,zero,.L865
	.loc 1 2525 597 discriminator 20
	call	stackframe
	j	.L866
.L865:
	.loc 1 2525 618 discriminator 21
	lla	a0,.LC1
	call	puts
	.loc 1 2525 638 discriminator 24
	lla	a0,__func__.11
	call	puts
.L866:
	.loc 1 2525 656 discriminator 26
	li	a0,2
	call	exit
.L864:
.LBE245:
	.loc 1 2525 719 discriminator 28
	ld	a4,-104(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a4,a5,s0
	ld	a5,-112(s0)
	add	a5,a4,a5
	sb	zero,-1208(a5)
.LBE243:
	.loc 1 2526 21
	lw	a4,-212(s0)
	.loc 1 2526 15
	li	a5,30
	bgt	a4,a5,.L826
	.loc 1 2527 22
	lw	a5,-212(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-212(s0)
.L826:
	.loc 1 2495 12
	ld	a4,-40(s0)
	ld	a5,-96(s0)
	bltu	a4,a5,.L827
	j	.L830
.L900:
	.loc 1 2500 13
	nop
.L830:
	.loc 1 2531 8
	sw	zero,-232(s0)
	.loc 1 2532 7
	ld	a5,-1264(s0)
	beq	a5,zero,.L868
	.loc 1 2533 16
	lw	a5,-232(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-232(s0)
	mv	a4,a5
	.loc 1 2533 12
	ld	a5,-1256(s0)
	add	a5,a5,a4
	.loc 1 2533 19
	li	a4,47
	sb	a4,0(a5)
.L868:
	.loc 1 2535 13
	sw	zero,-236(s0)
	.loc 1 2535 5
	j	.L869
.L896:
	.loc 1 2536 26
	lw	a5,-236(s0)
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
.LBB246:
	.loc 1 2536 79
	lw	a5,-236(s0)
	.loc 1 2536 55
	sd	a5,-152(s0)
	.loc 1 2536 100
	ld	a5,-152(s0)
	blt	a5,zero,.L870
	.loc 1 2536 127 discriminator 2
	ld	a4,-152(s0)
	li	a5,31
	ble	a4,a5,.L871
.L870:
.LBB247:
	.loc 1 2536 249 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2536 286 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L872
	.loc 1 2536 299 discriminator 6
	call	stackframe
	j	.L873
.L872:
	.loc 1 2536 320 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2536 340 discriminator 10
	lla	a0,__func__.11
	call	puts
.L873:
	.loc 1 2536 358 discriminator 12
	li	a0,2
	call	exit
.L871:
.LBE247:
	.loc 1 2536 369 discriminator 14
	addi	a3,s0,-1240
	ld	a4,-152(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
.LBE246:
	.loc 1 2536 33 discriminator 14
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 1 2536 32 discriminator 15
	addw	a5,s1,a5
	sext.w	a5,a5
	.loc 1 2536 13 discriminator 15
	sw	a5,-240(s0)
	.loc 1 2537 12
	lw	a5,-232(s0)
	mv	a4,a5
	.loc 1 2537 31
	lw	a5,-240(s0)
	add	a5,a4,a5
	.loc 1 2537 11
	ld	a4,-1264(s0)
	bleu	a4,a5,.L901
	.loc 1 2540 12
	lw	a5,-236(s0)
	.loc 1 2540 11
	beq	a5,zero,.L876
	.loc 1 2541 20
	lw	a5,-232(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-232(s0)
	mv	a4,a5
	.loc 1 2541 16
	ld	a5,-1256(s0)
	add	a5,a5,a4
	.loc 1 2541 23
	li	a4,47
	sb	a4,0(a5)
.L876:
	.loc 1 2543 14
	sw	zero,-244(s0)
	.loc 1 2543 9
	j	.L877
.L895:
.LBB248:
	.loc 1 2544 63
	lw	a5,-236(s0)
	.loc 1 2544 39
	sd	a5,-176(s0)
	.loc 1 2544 84
	ld	a5,-176(s0)
	blt	a5,zero,.L878
	.loc 1 2544 111 discriminator 2
	ld	a4,-176(s0)
	li	a5,31
	ble	a4,a5,.L879
.L878:
.LBB249:
	.loc 1 2544 233 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2544 270 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L880
	.loc 1 2544 283 discriminator 6
	call	stackframe
	j	.L881
.L880:
	.loc 1 2544 304 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2544 324 discriminator 10
	lla	a0,__func__.11
	call	puts
.L881:
	.loc 1 2544 342 discriminator 12
	li	a0,2
	call	exit
.L879:
.LBE249:
	.loc 1 2544 387 discriminator 14
	lw	a5,-244(s0)
	.loc 1 2544 363 discriminator 14
	sd	a5,-184(s0)
	.loc 1 2544 405 discriminator 14
	ld	a5,-184(s0)
	blt	a5,zero,.L882
	.loc 1 2544 432 discriminator 16
	ld	a4,-184(s0)
	li	a5,14
	ble	a4,a5,.L883
.L882:
.LBB250:
	.loc 1 2544 556 discriminator 17
	lla	a0,.LC9
	call	puts
	.loc 1 2544 593 discriminator 19
	lla	a5,stackframe
	beq	a5,zero,.L884
	.loc 1 2544 606 discriminator 20
	call	stackframe
	j	.L885
.L884:
	.loc 1 2544 627 discriminator 21
	lla	a0,.LC1
	call	puts
	.loc 1 2544 647 discriminator 24
	lla	a0,__func__.11
	call	puts
.L885:
	.loc 1 2544 665 discriminator 26
	li	a0,2
	call	exit
.L883:
.LBE250:
	.loc 1 2544 676 discriminator 28
	addi	a3,s0,-1240
	ld	a4,-176(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	ld	a4,-184(s0)
	add	a5,a5,a4
	add	a4,a3,a5
.LBE248:
	.loc 1 2544 20 discriminator 28
	lw	a5,-232(s0)
	addiw	a3,a5,1
	sext.w	a3,a3
	sw	a3,-232(s0)
	mv	a3,a5
	.loc 1 2544 16 discriminator 28
	ld	a5,-1256(s0)
	add	a5,a5,a3
	.loc 1 2544 25 discriminator 28
	lbu	a4,0(a4)
	.loc 1 2544 23 discriminator 28
	sb	a4,0(a5)
	.loc 1 2543 765 discriminator 2
	lw	a5,-244(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-244(s0)
.L877:
.LBB251:
	.loc 1 2543 64 discriminator 1
	lw	a5,-236(s0)
	.loc 1 2543 40 discriminator 1
	sd	a5,-160(s0)
	.loc 1 2543 85 discriminator 1
	ld	a5,-160(s0)
	blt	a5,zero,.L886
	.loc 1 2543 112 discriminator 4
	ld	a4,-160(s0)
	li	a5,31
	ble	a4,a5,.L887
.L886:
.LBB252:
	.loc 1 2543 234 discriminator 5
	lla	a0,.LC9
	call	puts
	.loc 1 2543 271 discriminator 7
	lla	a5,stackframe
	beq	a5,zero,.L888
	.loc 1 2543 284 discriminator 8
	call	stackframe
	j	.L889
.L888:
	.loc 1 2543 305 discriminator 9
	lla	a0,.LC1
	call	puts
	.loc 1 2543 325 discriminator 12
	lla	a0,__func__.11
	call	puts
.L889:
	.loc 1 2543 343 discriminator 14
	li	a0,2
	call	exit
.L887:
.LBE252:
	.loc 1 2543 388 discriminator 16
	lw	a5,-244(s0)
	.loc 1 2543 364 discriminator 16
	sd	a5,-168(s0)
	.loc 1 2543 406 discriminator 16
	ld	a5,-168(s0)
	blt	a5,zero,.L890
	.loc 1 2543 433 discriminator 18
	ld	a4,-168(s0)
	li	a5,14
	ble	a4,a5,.L891
.L890:
.LBB253:
	.loc 1 2543 557 discriminator 19
	lla	a0,.LC9
	call	puts
	.loc 1 2543 594 discriminator 21
	lla	a5,stackframe
	beq	a5,zero,.L892
	.loc 1 2543 607 discriminator 22
	call	stackframe
	j	.L893
.L892:
	.loc 1 2543 628 discriminator 23
	lla	a0,.LC1
	call	puts
	.loc 1 2543 648 discriminator 26
	lla	a0,__func__.11
	call	puts
.L893:
	.loc 1 2543 666 discriminator 28
	li	a0,2
	call	exit
.L891:
.LBE253:
	.loc 1 2543 677 discriminator 30
	addi	a3,s0,-1240
	ld	a4,-160(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	ld	a4,-168(s0)
	add	a5,a5,a4
	add	a5,a3,a5
.LBE251:
	.loc 1 2543 26 discriminator 30
	lbu	a5,0(a5)
	.loc 1 2543 734 discriminator 30
	beq	a5,zero,.L894
	.loc 1 2543 736 discriminator 31
	lw	a5,-232(s0)
	mv	a4,a5
	.loc 1 2543 761 discriminator 31
	ld	a5,-1264(s0)
	addi	a5,a5,-1
	.loc 1 2543 734 discriminator 31
	bltu	a4,a5,.L895
.L894:
	.loc 1 2535 35 discriminator 2
	lw	a5,-236(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-236(s0)
.L869:
	.loc 1 2535 24 discriminator 1
	lw	a4,-236(s0)
	lw	a5,-212(s0)
	blt	a4,a5,.L896
	j	.L875
.L901:
	.loc 1 2538 13
	nop
.L875:
	.loc 1 2547 11
	lw	a5,-232(s0)
	.loc 1 2547 7
	bne	a5,zero,.L897
	.loc 1 2548 11
	ld	a4,-1264(s0)
	li	a5,1
	bleu	a4,a5,.L898
	.loc 1 2549 19
	ld	a5,-1256(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 1 2550 16
	ld	a5,-1256(s0)
	addi	a5,a5,1
	.loc 1 2550 19
	sb	zero,0(a5)
	.loc 1 2559 1
	j	.L902
.L898:
	.loc 1 2552 16
	ld	a5,-1264(s0)
	beq	a5,zero,.L902
	.loc 1 2553 19
	ld	a5,-1256(s0)
	sb	zero,0(a5)
	.loc 1 2559 1
	j	.L902
.L897:
	.loc 1 2557 12
	lw	a5,-232(s0)
	mv	a4,a5
	ld	a5,-1256(s0)
	add	a5,a5,a4
	.loc 1 2557 17
	sb	zero,0(a5)
.L902:
	.loc 1 2559 1
	nop
	ld	ra,1272(sp)
	.cfi_restore 1
	ld	s0,1264(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1280
	ld	s1,1256(sp)
	.cfi_restore 9
	addi	sp,sp,1280
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE60:
	.size	build_abs_normalized, .-build_abs_normalized
	.align	1
	.globl	fs_mkdir
	.type	fs_mkdir, @function
fs_mkdir:
.LFB61:
	.loc 1 2562 1
	.cfi_startproc
	addi	sp,sp,-576
	.cfi_def_cfa_offset 576
	sd	ra,568(sp)
	sd	s0,560(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,576
	.cfi_def_cfa 8, 0
	sd	a0,-568(s0)
	mv	a5,a1
	sw	a5,-572(s0)
	.loc 1 2572 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2573 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2574 5
	addi	a5,s0,-128
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2575 5
	addi	a5,s0,-216
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2576 5
	addi	a5,s0,-220
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2577 5
	addi	a5,s0,-224
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2578 5
	addi	a5,s0,-312
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2579 5
	addi	a5,s0,-314
	li	a2,2
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2580 5
	addi	a5,s0,-408
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2583 5
	addi	a5,s0,-536
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2584 5
	addi	a5,s0,-536
	ld	a2,-568(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 2585 8
	addi	a5,s0,-536
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 2585 7 discriminator 1
	bne	a5,zero,.L904
	.loc 1 2586 24
	li	a5,-1
	j	.L931
.L904:
	.loc 1 2588 8
	addi	a5,s0,-536
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 2588 7 discriminator 1
	beq	a5,zero,.L906
	.loc 1 2589 24
	li	a5,-1
	j	.L931
.L906:
	.loc 1 2592 5
	addi	a5,s0,-552
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2593 10
	sw	zero,-40(s0)
	.loc 1 2593 5
	j	.L907
.L912:
.LBB254:
	.loc 1 2594 46
	lw	a5,-40(s0)
	.loc 1 2594 22
	sd	a5,-32(s0)
	.loc 1 2594 64
	ld	a5,-32(s0)
	blt	a5,zero,.L908
	.loc 1 2594 91 discriminator 2
	ld	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L909
.L908:
.LBB255:
	.loc 1 2594 215 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2594 252 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L910
	.loc 1 2594 265 discriminator 6
	call	stackframe
	j	.L911
.L910:
	.loc 1 2594 286 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2594 306 discriminator 10
	lla	a0,__func__.10
	call	puts
.L911:
	.loc 1 2594 324 discriminator 12
	li	a0,2
	call	exit
.L909:
.LBE255:
	.loc 1 2594 363 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-536(a5)
.LBE254:
	.loc 1 2593 25 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L907:
	.loc 1 2593 18 discriminator 1
	lw	a4,-40(s0)
	li	a5,14
	ble	a4,a5,.L912
	.loc 1 2596 9
	addi	a3,s0,-552
	addi	a4,s0,-36
	addi	a5,s0,-536
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 2596 7 discriminator 1
	bne	a5,zero,.L913
	.loc 1 2597 24
	li	a5,-1
	j	.L931
.L913:
	.loc 1 2599 5
	lw	a5,-36(s0)
	addi	a4,s0,-128
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2600 9
	addi	a5,s0,-128
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 2600 7 discriminator 1
	bne	a5,zero,.L914
	.loc 1 2601 24
	li	a5,-1
	j	.L931
.L914:
.LBB256:
	.loc 1 2603 23
	sd	zero,-24(s0)
	.loc 1 2603 65
	ld	a5,-24(s0)
	blt	a5,zero,.L915
	.loc 1 2603 92 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L916
.L915:
.LBB257:
	.loc 1 2603 216 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2603 253 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L917
	.loc 1 2603 266 discriminator 6
	call	stackframe
	j	.L918
.L917:
	.loc 1 2603 287 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2603 307 discriminator 10
	lla	a0,__func__.10
	call	puts
.L918:
	.loc 1 2603 325 discriminator 12
	li	a0,2
	call	exit
.L916:
.LBE257:
	.loc 1 2603 336 discriminator 14
	addi	a4,s0,-552
	ld	a5,-24(s0)
	add	a5,a4,a5
.LBE256:
	.loc 1 2603 9 discriminator 14
	lbu	a5,0(a5)
	.loc 1 2603 7 discriminator 14
	bne	a5,zero,.L919
	.loc 1 2604 24
	li	a5,-1
	j	.L931
.L919:
	.loc 1 2606 9
	sw	zero,-220(s0)
	.loc 1 2607 13
	li	a5,1
	sw	a5,-224(s0)
	.loc 1 2607 5
	j	.L920
.L923:
	.loc 1 2608 9
	lw	a5,-224(s0)
	addi	a4,s0,-216
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2609 14
	lhu	a5,-216(s0)
	.loc 1 2609 11
	bne	a5,zero,.L921
	.loc 1 2610 17
	lw	a5,-224(s0)
	sw	a5,-220(s0)
	.loc 1 2611 13
	j	.L922
.L921:
	.loc 1 2607 51 discriminator 2
	lw	a5,-224(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-224(s0)
.L920:
	.loc 1 2607 28 discriminator 1
	lla	a5,sb
	lw	a4,8(a5)
	.loc 1 2607 24 discriminator 1
	lw	a5,-224(s0)
	bgeu	a4,a5,.L923
.L922:
	.loc 1 2614 8
	lw	a5,-220(s0)
	.loc 1 2614 7
	bne	a5,zero,.L924
	.loc 1 2615 24
	li	a5,-1
	j	.L931
.L924:
	.loc 1 2617 5
	addi	a5,s0,-312
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2618 14
	li	a5,1
	sh	a5,-312(s0)
	.loc 1 2619 15
	li	a5,1
	sh	a5,-306(s0)
	.loc 1 2620 14
	sw	zero,-304(s0)
	.loc 1 2621 16
	call	fs_now
	mv	a5,a0
	.loc 1 2621 15 discriminator 1
	sw	a5,-288(s0)
	.loc 1 2622 20
	lw	a5,-288(s0)
	.loc 1 2622 15
	sw	a5,-284(s0)
	.loc 1 2623 8
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2623 34 discriminator 1
	lhu	a5,1016(a5)
	.loc 1 2623 7 discriminator 1
	sh	a5,-314(s0)
	.loc 1 2624 5
	lw	a5,-36(s0)
	addi	a4,s0,-408
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2625 20
	lw	a5,-288(s0)
	.loc 1 2625 15
	sw	a5,-292(s0)
	.loc 1 2626 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2626 40 discriminator 1
	lhu	a5,1018(a5)
	.loc 1 2626 13 discriminator 1
	sh	a5,-296(s0)
	.loc 1 2627 24
	lw	a5,-396(s0)
	.loc 1 2627 39
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 2627 13
	beq	a5,zero,.L925
	.loc 1 2627 13 is_stmt 0 discriminator 1
	lhu	a5,-390(s0)
	j	.L926
.L925:
	.loc 1 2627 73 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2627 13 discriminator 4
	lhu	a5,1020(a5)
.L926:
	.loc 1 2627 13 is_stmt 0 discriminator 5
	sh	a5,-294(s0)
	.loc 1 2628 38 is_stmt 1
	lw	a5,-572(s0)
	sext.w	a5,a5
	beq	a5,zero,.L927
	.loc 1 2628 38 is_stmt 0 discriminator 1
	lw	a5,-572(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L928
.L927:
	.loc 1 2628 38 discriminator 2
	li	a5,493
.L928:
	.loc 1 2628 48 is_stmt 1 discriminator 4
	lhu	a4,-314(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 2628 47 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 2628 14 discriminator 4
	sw	a5,-300(s0)
	.loc 1 2629 15
	lw	a5,-396(s0)
	.loc 1 2629 30
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 2629 7
	beq	a5,zero,.L929
	.loc 1 2630 13
	lw	a5,-300(s0)
	.loc 1 2630 28
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-300(s0)
.L929:
	.loc 1 2632 5
	lw	a5,-220(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2633 8
	lw	a5,-36(s0)
	lw	a3,-220(s0)
	addi	a4,s0,-552
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 2633 7 discriminator 1
	beq	a5,zero,.L930
	.loc 1 2634 24
	li	a5,-1
	j	.L931
.L930:
	.loc 1 2636 16
	li	a5,0
.L931:
	.loc 1 2637 1
	mv	a0,a5
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE61:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB62:
	.loc 1 2640 1
	.cfi_startproc
	addi	sp,sp,-496
	.cfi_def_cfa_offset 496
	sd	ra,488(sp)
	sd	s0,480(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,496
	.cfi_def_cfa 8, 0
	sd	a0,-488(s0)
	.loc 1 2652 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2653 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2654 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2655 5
	addi	a5,s0,-128
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2656 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2657 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2658 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2659 5
	addi	a5,s0,-148
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2660 5
	addi	a5,s0,-152
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2661 5
	addi	a5,s0,-240
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2662 5
	addi	a5,s0,-328
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2664 5
	addi	a5,s0,-456
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2665 5
	addi	a5,s0,-456
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 2666 8
	addi	a5,s0,-456
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 2666 7 discriminator 1
	bne	a5,zero,.L933
	.loc 1 2667 24
	li	a5,-1
	j	.L955
.L933:
	.loc 1 2669 10
	addi	a5,s0,-456
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 2669 9 discriminator 1
	sw	a5,-28(s0)
	.loc 1 2670 12
	lw	a5,-28(s0)
	.loc 1 2670 7
	bne	a5,zero,.L935
	.loc 1 2671 24
	li	a5,-1
	j	.L955
.L935:
	.loc 1 2673 5
	lw	a5,-28(s0)
	addi	a4,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2674 10
	lhu	a5,-120(s0)
	.loc 1 2674 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L936
	.loc 1 2675 24
	li	a5,-1
	j	.L955
.L936:
	.loc 1 2677 10
	lw	a5,-112(s0)
	.loc 1 2677 7
	beq	a5,zero,.L937
	.loc 1 2678 12
	sw	zero,-124(s0)
	.loc 1 2679 20
	sw	zero,-128(s0)
	.loc 1 2680 14
	j	.L938
.L945:
	.loc 1 2681 13
	lw	a4,-124(s0)
	addi	a5,s0,-120
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 1 2682 15
	lla	a5,block_buf
	sd	a5,-136(s0)
	.loc 1 2683 20
	li	a5,32
	sw	a5,-140(s0)
	.loc 1 2684 18
	sw	zero,-144(s0)
	.loc 1 2684 13
	j	.L939
.L942:
	.loc 1 2685 22
	ld	a4,-136(s0)
	lw	a5,-144(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 1 2685 25
	lhu	a5,0(a5)
	.loc 1 2685 19
	beq	a5,zero,.L940
	.loc 1 2686 32
	li	a5,1
	sw	a5,-128(s0)
	.loc 1 2687 21
	j	.L941
.L940:
	.loc 1 2684 44 discriminator 2
	lw	a5,-144(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-144(s0)
.L939:
	.loc 1 2684 34 discriminator 1
	lw	a4,-144(s0)
	lw	a5,-140(s0)
	blt	a4,a5,.L942
.L941:
	.loc 1 2690 16
	lw	a5,-128(s0)
	.loc 1 2690 15
	bne	a5,zero,.L956
	.loc 1 2693 16
	lw	a5,-124(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-124(s0)
.L938:
	.loc 1 2680 21
	lw	a4,-112(s0)
	.loc 1 2680 18
	lw	a5,-124(s0)
	bgtu	a4,a5,.L945
	j	.L944
.L956:
	.loc 1 2691 17
	nop
.L944:
	.loc 1 2695 12
	lw	a5,-128(s0)
	.loc 1 2695 11
	beq	a5,zero,.L937
	.loc 1 2696 32
	li	a5,-1
	j	.L955
.L937:
	.loc 1 2700 5
	addi	a5,s0,-472
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2701 13
	sw	zero,-152(s0)
	.loc 1 2701 5
	j	.L946
.L951:
.LBB258:
	.loc 1 2702 46
	lw	a5,-152(s0)
	.loc 1 2702 22
	sd	a5,-24(s0)
	.loc 1 2702 67
	ld	a5,-24(s0)
	blt	a5,zero,.L947
	.loc 1 2702 94 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L948
.L947:
.LBB259:
	.loc 1 2702 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2702 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L949
	.loc 1 2702 268 discriminator 6
	call	stackframe
	j	.L950
.L949:
	.loc 1 2702 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2702 309 discriminator 10
	lla	a0,__func__.9
	call	puts
.L950:
	.loc 1 2702 327 discriminator 12
	li	a0,2
	call	exit
.L948:
.LBE259:
	.loc 1 2702 366 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-456(a5)
.LBE258:
	.loc 1 2701 34 discriminator 2
	lw	a5,-152(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-152(s0)
.L946:
	.loc 1 2701 24 discriminator 1
	lw	a4,-152(s0)
	li	a5,14
	ble	a4,a5,.L951
	.loc 1 2704 9
	addi	a3,s0,-472
	addi	a4,s0,-148
	addi	a5,s0,-456
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 2704 7 discriminator 1
	bne	a5,zero,.L952
	.loc 1 2705 24
	li	a5,-1
	j	.L955
.L952:
	.loc 1 2707 5
	lw	a5,-148(s0)
	addi	a4,s0,-240
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2708 9
	addi	a5,s0,-240
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 2708 7 discriminator 1
	bne	a5,zero,.L953
	.loc 1 2709 24
	li	a5,-1
	j	.L955
.L953:
	.loc 1 2711 8
	lw	a5,-148(s0)
	addi	a4,s0,-472
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 2711 7 discriminator 1
	beq	a5,zero,.L954
	.loc 1 2712 24
	li	a5,-1
	j	.L955
.L954:
	.loc 1 2714 5
	lw	a5,-28(s0)
	addi	a4,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 2715 5
	addi	a5,s0,-328
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2716 5
	lw	a5,-28(s0)
	addi	a4,s0,-328
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2717 16
	li	a5,0
.L955:
	.loc 1 2718 1
	mv	a0,a5
	ld	ra,488(sp)
	.cfi_restore 1
	ld	s0,480(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 496
	addi	sp,sp,496
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE62:
	.size	fs_rmdir, .-fs_rmdir
	.align	1
	.globl	fs_unlink
	.type	fs_unlink, @function
fs_unlink:
.LFB63:
	.loc 1 2721 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	sd	a0,-552(s0)
	.loc 1 2730 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2731 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2732 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2733 5
	addi	a5,s0,-128
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2734 5
	addi	a5,s0,-216
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2735 5
	addi	a5,s0,-304
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2736 5
	addi	a5,s0,-312
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2737 5
	addi	a5,s0,-400
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2739 5
	addi	a5,s0,-528
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2740 5
	addi	a5,s0,-528
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 2741 8
	addi	a5,s0,-528
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 2741 7 discriminator 1
	bne	a5,zero,.L958
	.loc 1 2742 24
	li	a5,-1
	j	.L973
.L958:
	.loc 1 2744 10
	addi	a5,s0,-528
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 2744 9 discriminator 1
	sw	a5,-28(s0)
	.loc 1 2745 12
	lw	a5,-28(s0)
	.loc 1 2745 7
	bne	a5,zero,.L960
	.loc 1 2746 24
	li	a5,-1
	j	.L973
.L960:
	.loc 1 2748 5
	lw	a5,-28(s0)
	addi	a4,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2749 10
	lhu	a5,-120(s0)
	.loc 1 2749 7
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L961
	.loc 1 2750 24
	li	a5,-1
	j	.L973
.L961:
	.loc 1 2752 8
	lw	a5,-28(s0)
	mv	a0,a5
	call	neoc_proc_is_file_open
	mv	a5,a0
	.loc 1 2752 7 discriminator 1
	beq	a5,zero,.L962
	.loc 1 2753 24
	li	a5,-1
	j	.L973
.L962:
	.loc 1 2756 5
	addi	a5,s0,-544
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2757 10
	sw	zero,-128(s0)
	.loc 1 2757 5
	j	.L963
.L968:
.LBB260:
	.loc 1 2758 47
	lw	a5,-128(s0)
	.loc 1 2758 22
	sd	a5,-24(s0)
	.loc 1 2758 65
	ld	a5,-24(s0)
	blt	a5,zero,.L964
	.loc 1 2758 93 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L965
.L964:
.LBB261:
	.loc 1 2758 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2758 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L966
	.loc 1 2758 268 discriminator 6
	call	stackframe
	j	.L967
.L966:
	.loc 1 2758 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2758 309 discriminator 10
	lla	a0,__func__.8
	call	puts
.L967:
	.loc 1 2758 327 discriminator 12
	li	a0,2
	call	exit
.L965:
.LBE261:
	.loc 1 2758 367 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-528(a5)
.LBE260:
	.loc 1 2757 25 discriminator 2
	lw	a5,-128(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-128(s0)
.L963:
	.loc 1 2757 18 discriminator 1
	lw	a4,-128(s0)
	li	a5,14
	ble	a4,a5,.L968
	.loc 1 2760 9
	addi	a3,s0,-544
	addi	a4,s0,-124
	addi	a5,s0,-528
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 2760 7 discriminator 1
	bne	a5,zero,.L969
	.loc 1 2761 24
	li	a5,-1
	j	.L973
.L969:
	.loc 1 2763 5
	lw	a5,-124(s0)
	addi	a4,s0,-216
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2764 9
	addi	a5,s0,-216
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 2764 7 discriminator 1
	bne	a5,zero,.L970
	.loc 1 2765 24
	li	a5,-1
	j	.L973
.L970:
	.loc 1 2767 5
	lw	a5,-124(s0)
	addi	a4,s0,-304
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2768 12
	lw	a5,-292(s0)
	.loc 1 2768 27
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 2768 7
	beq	a5,zero,.L971
	.loc 1 2769 12
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2769 11 discriminator 1
	sd	a5,-312(s0)
	.loc 1 2770 16
	ld	a5,-312(s0)
	lhu	a5,1018(a5)
	.loc 1 2770 11
	beq	a5,zero,.L971
	.loc 1 2770 28 discriminator 1
	ld	a5,-312(s0)
	lhu	a4,1018(a5)
	.loc 1 2770 37 discriminator 1
	lhu	a5,-104(s0)
	.loc 1 2770 24 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L971
	.loc 1 2770 55 discriminator 2
	ld	a5,-312(s0)
	lhu	a4,1018(a5)
	.loc 1 2770 66 discriminator 2
	lhu	a5,-288(s0)
	.loc 1 2770 12 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L971
	.loc 1 2771 32
	li	a5,-1
	j	.L973
.L971:
	.loc 1 2774 8
	lw	a5,-124(s0)
	addi	a4,s0,-544
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 2774 7 discriminator 1
	beq	a5,zero,.L972
	.loc 1 2775 24
	li	a5,-1
	j	.L973
.L972:
	.loc 1 2777 5
	lw	a5,-28(s0)
	addi	a4,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 1 2778 5
	addi	a5,s0,-400
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2779 5
	lw	a5,-28(s0)
	addi	a4,s0,-400
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2780 16
	li	a5,0
.L973:
	.loc 1 2781 1
	mv	a0,a5
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE63:
	.size	fs_unlink, .-fs_unlink
	.align	1
	.type	write_data_inode, @function
write_data_inode:
.LFB64:
	.loc 1 2784 1
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
	sd	a2,-88(s0)
	mv	a4,a3
	sw	a5,-68(s0)
	mv	a5,a4
	sw	a5,-72(s0)
	.loc 1 2791 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2792 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2793 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2794 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2795 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2796 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2797 9
	lw	a5,-72(s0)
	sw	a5,-36(s0)
	.loc 1 2798 8
	sw	zero,-40(s0)
	.loc 1 2799 27
	ld	a5,-88(s0)
	sd	a5,-24(s0)
	.loc 1 2800 10
	j	.L975
.L985:
.LBB262:
	.loc 1 2801 36
	li	a5,512
	sw	a5,-28(s0)
	.loc 1 2801 65
	lw	a5,-28(s0)
	sext.w	a5,a5
	bne	a5,zero,.L976
.LBB263:
	.loc 1 2801 167 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 2801 195 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L977
	.loc 1 2801 208 discriminator 4
	call	stackframe
	j	.L978
.L977:
	.loc 1 2801 229 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2801 249 discriminator 8
	lla	a0,__func__.7
	call	puts
.L978:
	.loc 1 2801 267 discriminator 10
	li	a0,2
	call	exit
.L976:
.LBE263:
	.loc 1 2801 284 discriminator 12
	lw	a4,-40(s0)
	lw	a5,-28(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE262:
	.loc 1 2801 16 discriminator 12
	sw	a5,-44(s0)
.LBB264:
	.loc 1 2802 36
	li	a5,512
	sw	a5,-32(s0)
	.loc 1 2802 65
	lw	a5,-32(s0)
	sext.w	a5,a5
	bne	a5,zero,.L979
.LBB265:
	.loc 1 2802 167 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 2802 193 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L980
	.loc 1 2802 206 discriminator 4
	call	stackframe
	j	.L981
.L980:
	.loc 1 2802 227 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 2802 247 discriminator 8
	lla	a0,__func__.7
	call	puts
.L981:
	.loc 1 2802 265 discriminator 10
	li	a0,2
	call	exit
.L979:
.LBE265:
	.loc 1 2802 282 discriminator 12
	lw	a4,-40(s0)
	lw	a5,-32(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE264:
	.loc 1 2802 16 discriminator 12
	sw	a5,-48(s0)
	.loc 1 2803 21
	lw	a5,-48(s0)
	li	a4,512
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 2803 17
	sw	a5,-52(s0)
	.loc 1 2804 20
	lw	a4,-52(s0)
	lw	a5,-36(s0)
	.loc 1 2804 11
	bleu	a4,a5,.L982
	.loc 1 2805 21
	lw	a5,-36(s0)
	sw	a5,-52(s0)
.L982:
	.loc 1 2807 18
	lw	a4,-44(s0)
	lw	a5,-68(s0)
	mv	a2,a4
	ld	a1,-80(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 2807 17 discriminator 1
	sw	a5,-56(s0)
	.loc 1 2808 12
	lw	a5,-56(s0)
	.loc 1 2808 11
	bne	a5,zero,.L983
	.loc 1 2809 32
	li	a5,-1
	j	.L986
.L983:
	.loc 1 2811 9
	lw	a5,-56(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 1 2812 9
	lw	a5,-48(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-52(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 2813 9
	lw	a5,-56(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 1 2814 13
	lw	a4,-36(s0)
	lw	a5,-52(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 1 2815 12
	lw	a4,-40(s0)
	lw	a5,-52(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-40(s0)
	.loc 1 2816 10
	lw	a5,-52(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
.L975:
	.loc 1 2800 15
	lw	a5,-36(s0)
	bne	a5,zero,.L985
	.loc 1 2818 13
	ld	a5,-80(s0)
	lw	a4,-72(s0)
	sw	a4,8(a5)
	.loc 1 2819 15
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 1 2819 14 discriminator 1
	ld	a5,-80(s0)
	sw	a4,24(a5)
	.loc 1 2820 5
	lw	a5,-68(s0)
	ld	a1,-80(s0)
	mv	a0,a5
	call	write_inode
	.loc 1 2821 16
	li	a5,0
.L986:
	.loc 1 2822 1
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
.LFE64:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB65:
	.loc 1 2825 1
	.cfi_startproc
	addi	sp,sp,-720
	.cfi_def_cfa_offset 720
	sd	ra,712(sp)
	sd	s0,704(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,720
	.cfi_def_cfa 8, 0
	sd	a0,-712(s0)
	sd	a1,-720(s0)
	.loc 1 2834 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2835 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2836 5
	addi	a5,s0,-128
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2837 5
	addi	a5,s0,-216
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2838 5
	addi	a5,s0,-220
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2839 5
	addi	a5,s0,-224
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2840 5
	addi	a5,s0,-312
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2841 5
	addi	a5,s0,-316
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2843 5
	addi	a5,s0,-448
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2844 5
	addi	a5,s0,-448
	ld	a2,-720(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 2845 8
	addi	a5,s0,-448
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 2845 7 discriminator 1
	bne	a5,zero,.L988
	.loc 1 2846 24
	li	a5,-1
	j	.L1012
.L988:
	.loc 1 2848 8
	addi	a5,s0,-448
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 2848 7 discriminator 1
	beq	a5,zero,.L990
	.loc 1 2849 24
	li	a5,-1
	j	.L1012
.L990:
	.loc 1 2852 5
	addi	a5,s0,-464
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2853 10
	sw	zero,-40(s0)
	.loc 1 2853 5
	j	.L991
.L996:
.LBB266:
	.loc 1 2854 47
	lw	a5,-40(s0)
	.loc 1 2854 22
	sd	a5,-32(s0)
	.loc 1 2854 65
	ld	a5,-32(s0)
	blt	a5,zero,.L992
	.loc 1 2854 93 discriminator 2
	ld	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L993
.L992:
.LBB267:
	.loc 1 2854 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2854 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L994
	.loc 1 2854 268 discriminator 6
	call	stackframe
	j	.L995
.L994:
	.loc 1 2854 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2854 309 discriminator 10
	lla	a0,__func__.6
	call	puts
.L995:
	.loc 1 2854 327 discriminator 12
	li	a0,2
	call	exit
.L993:
.LBE267:
	.loc 1 2854 367 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-448(a5)
.LBE266:
	.loc 1 2853 25 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L991:
	.loc 1 2853 18 discriminator 1
	lw	a4,-40(s0)
	li	a5,14
	ble	a4,a5,.L996
	.loc 1 2856 9
	addi	a3,s0,-464
	addi	a4,s0,-36
	addi	a5,s0,-448
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 2856 7 discriminator 1
	bne	a5,zero,.L997
	.loc 1 2857 24
	li	a5,-1
	j	.L1012
.L997:
.LBB268:
	.loc 1 2859 23
	sd	zero,-24(s0)
	.loc 1 2859 66
	ld	a5,-24(s0)
	blt	a5,zero,.L998
	.loc 1 2859 94 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L999
.L998:
.LBB269:
	.loc 1 2859 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2859 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1000
	.loc 1 2859 269 discriminator 6
	call	stackframe
	j	.L1001
.L1000:
	.loc 1 2859 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2859 310 discriminator 10
	lla	a0,__func__.6
	call	puts
.L1001:
	.loc 1 2859 328 discriminator 12
	li	a0,2
	call	exit
.L999:
.LBE269:
	.loc 1 2859 339 discriminator 14
	addi	a4,s0,-464
	ld	a5,-24(s0)
	add	a5,a4,a5
.LBE268:
	.loc 1 2859 9 discriminator 14
	lbu	a5,0(a5)
	.loc 1 2859 7 discriminator 14
	bne	a5,zero,.L1002
	.loc 1 2860 24
	li	a5,-1
	j	.L1012
.L1002:
	.loc 1 2862 5
	lw	a5,-36(s0)
	addi	a4,s0,-128
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2863 9
	addi	a5,s0,-128
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 2863 7 discriminator 1
	bne	a5,zero,.L1003
	.loc 1 2864 24
	li	a5,-1
	j	.L1012
.L1003:
	.loc 1 2866 9
	sw	zero,-220(s0)
	.loc 1 2867 13
	li	a5,1
	sw	a5,-224(s0)
	.loc 1 2867 5
	j	.L1004
.L1007:
	.loc 1 2868 9
	lw	a5,-224(s0)
	addi	a4,s0,-216
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2869 14
	lhu	a5,-216(s0)
	.loc 1 2869 11
	bne	a5,zero,.L1005
	.loc 1 2870 17
	lw	a5,-224(s0)
	sw	a5,-220(s0)
	.loc 1 2871 13
	j	.L1006
.L1005:
	.loc 1 2867 51 discriminator 2
	lw	a5,-224(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-224(s0)
.L1004:
	.loc 1 2867 28 discriminator 1
	lla	a5,sb
	lw	a4,8(a5)
	.loc 1 2867 24 discriminator 1
	lw	a5,-224(s0)
	bgeu	a4,a5,.L1007
.L1006:
	.loc 1 2874 8
	lw	a5,-220(s0)
	.loc 1 2874 7
	bne	a5,zero,.L1008
	.loc 1 2875 24
	li	a5,-1
	j	.L1012
.L1008:
	.loc 1 2877 5
	addi	a5,s0,-312
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2878 12
	li	a5,3
	sh	a5,-312(s0)
	.loc 1 2879 13
	li	a5,1
	sh	a5,-306(s0)
	.loc 1 2880 12
	sw	zero,-304(s0)
	.loc 1 2881 14
	call	fs_now
	mv	a5,a0
	.loc 1 2881 13 discriminator 1
	sw	a5,-288(s0)
	.loc 1 2882 16
	lw	a5,-288(s0)
	.loc 1 2882 13
	sw	a5,-284(s0)
	.loc 1 2883 5
	lw	a5,-220(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 2884 8
	lw	a5,-36(s0)
	lw	a3,-220(s0)
	addi	a4,s0,-464
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 2884 7 discriminator 1
	beq	a5,zero,.L1009
	.loc 1 2885 24
	li	a5,-1
	j	.L1012
.L1009:
	.loc 1 2887 10
	ld	a0,-712(s0)
	call	strlen
	mv	a5,a0
	.loc 1 2887 9 discriminator 1
	sw	a5,-316(s0)
	.loc 1 2888 12
	lw	a4,-316(s0)
	.loc 1 2888 7
	li	a5,240
	bleu	a4,a5,.L1010
	.loc 1 2889 13
	li	a5,240
	sw	a5,-316(s0)
.L1010:
	.loc 1 2892 5
	addi	a5,s0,-704
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2893 5
	addi	a5,s0,-704
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2894 5
	lw	a5,-316(s0)
	mv	a4,a5
	addi	a5,s0,-704
	mv	a2,a4
	ld	a1,-712(s0)
	mv	a0,a5
	call	strncpy
	.loc 1 2895 5
	lw	a5,-220(s0)
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2896 8
	lw	a5,-220(s0)
	lw	a3,-316(s0)
	addi	a2,s0,-704
	addi	a4,s0,-312
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 1 2896 7 discriminator 1
	beq	a5,zero,.L1011
	.loc 1 2897 24
	li	a5,-1
	j	.L1012
.L1011:
	.loc 1 2899 16
	li	a5,0
.L1012:
	.loc 1 2900 1
	mv	a0,a5
	ld	ra,712(sp)
	.cfi_restore 1
	ld	s0,704(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 720
	addi	sp,sp,720
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE65:
	.size	fs_symlink, .-fs_symlink
	.align	1
	.globl	fs_rename
	.type	fs_rename, @function
fs_rename:
.LFB66:
	.loc 1 2903 1
	.cfi_startproc
	addi	sp,sp,-736
	.cfi_def_cfa_offset 736
	sd	ra,728(sp)
	sd	s0,720(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,736
	.cfi_def_cfa 8, 0
	sd	a0,-728(s0)
	sd	a1,-736(s0)
	.loc 1 2911 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2912 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2913 5
	addi	a5,s0,-144
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2914 5
	addi	a5,s0,-232
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2915 5
	addi	a5,s0,-320
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2916 5
	addi	a5,s0,-408
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2917 5
	addi	a5,s0,-416
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2919 5
	addi	a5,s0,-672
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2921 5
	addi	a5,s0,-544
	ld	a2,-728(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 2922 5
	addi	a5,s0,-672
	ld	a2,-736(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 2923 8
	addi	a4,s0,-672
	addi	a5,s0,-544
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 2923 7 discriminator 1
	bne	a5,zero,.L1014
	.loc 1 2924 24
	li	a5,0
	j	.L1047
.L1014:
	.loc 1 2926 8
	addi	a5,s0,-544
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 2926 7 discriminator 1
	bne	a5,zero,.L1016
	.loc 1 2927 24
	li	a5,-1
	j	.L1047
.L1016:
	.loc 1 2929 10
	addi	a5,s0,-544
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 2929 9 discriminator 1
	sw	a5,-52(s0)
	.loc 1 2930 12
	lw	a5,-52(s0)
	.loc 1 2930 7
	bne	a5,zero,.L1017
	.loc 1 2931 24
	li	a5,-1
	j	.L1047
.L1017:
	.loc 1 2933 8
	addi	a5,s0,-672
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 2933 7 discriminator 1
	beq	a5,zero,.L1018
	.loc 1 2934 24
	li	a5,-1
	j	.L1047
.L1018:
	.loc 1 2937 5
	addi	a5,s0,-680
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2940 5
	addi	a5,s0,-696
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2942 5
	addi	a5,s0,-712
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2943 10
	sw	zero,-56(s0)
	.loc 1 2943 5
	j	.L1019
.L1028:
.LBB270:
	.loc 1 2944 47
	lw	a5,-56(s0)
	.loc 1 2944 22
	sd	a5,-40(s0)
	.loc 1 2944 65
	ld	a5,-40(s0)
	blt	a5,zero,.L1020
	.loc 1 2944 93 discriminator 2
	ld	a4,-40(s0)
	li	a5,14
	ble	a4,a5,.L1021
.L1020:
.LBB271:
	.loc 1 2944 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2944 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1022
	.loc 1 2944 268 discriminator 6
	call	stackframe
	j	.L1023
.L1022:
	.loc 1 2944 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2944 309 discriminator 10
	lla	a0,__func__.5
	call	puts
.L1023:
	.loc 1 2944 327 discriminator 12
	li	a0,2
	call	exit
.L1021:
.LBE271:
	.loc 1 2944 368 discriminator 14
	ld	a5,-40(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-680(a5)
.LBE270:
.LBB272:
	.loc 1 2945 47
	lw	a5,-56(s0)
	.loc 1 2945 22
	sd	a5,-48(s0)
	.loc 1 2945 65
	ld	a5,-48(s0)
	blt	a5,zero,.L1024
	.loc 1 2945 93 discriminator 2
	ld	a4,-48(s0)
	li	a5,14
	ble	a4,a5,.L1025
.L1024:
.LBB273:
	.loc 1 2945 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2945 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1026
	.loc 1 2945 268 discriminator 6
	call	stackframe
	j	.L1027
.L1026:
	.loc 1 2945 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2945 309 discriminator 10
	lla	a0,__func__.5
	call	puts
.L1027:
	.loc 1 2945 327 discriminator 12
	li	a0,2
	call	exit
.L1025:
.LBE273:
	.loc 1 2945 368 discriminator 14
	ld	a5,-48(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-696(a5)
.LBE272:
	.loc 1 2943 25 discriminator 2
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-56(s0)
.L1019:
	.loc 1 2943 18 discriminator 1
	lw	a4,-56(s0)
	li	a5,14
	ble	a4,a5,.L1028
	.loc 1 2947 9
	addi	a3,s0,-696
	addi	a4,s0,-676
	addi	a5,s0,-544
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 2947 7 discriminator 1
	bne	a5,zero,.L1029
	.loc 1 2948 24
	li	a5,-1
	j	.L1047
.L1029:
	.loc 1 2950 9
	addi	a3,s0,-712
	addi	a4,s0,-680
	addi	a5,s0,-672
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 2950 7 discriminator 1
	bne	a5,zero,.L1030
	.loc 1 2951 24
	li	a5,-1
	j	.L1047
.L1030:
.LBB274:
	.loc 1 2953 23
	sd	zero,-24(s0)
	.loc 1 2953 66
	ld	a5,-24(s0)
	blt	a5,zero,.L1031
	.loc 1 2953 94 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L1032
.L1031:
.LBB275:
	.loc 1 2953 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 2953 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1033
	.loc 1 2953 269 discriminator 6
	call	stackframe
	j	.L1034
.L1033:
	.loc 1 2953 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 2953 310 discriminator 10
	lla	a0,__func__.5
	call	puts
.L1034:
	.loc 1 2953 328 discriminator 12
	li	a0,2
	call	exit
.L1032:
.LBE275:
	.loc 1 2953 339 discriminator 14
	addi	a4,s0,-696
	ld	a5,-24(s0)
	add	a5,a4,a5
.LBE274:
	.loc 1 2953 9 discriminator 14
	lbu	a5,0(a5)
	.loc 1 2953 7 discriminator 14
	beq	a5,zero,.L1035
.LBB276:
	.loc 1 2953 394 discriminator 15
	sd	zero,-32(s0)
	.loc 1 2953 437 discriminator 15
	ld	a5,-32(s0)
	blt	a5,zero,.L1036
	.loc 1 2953 465 discriminator 17
	ld	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L1037
.L1036:
.LBB277:
	.loc 1 2953 590 discriminator 18
	lla	a0,.LC9
	call	puts
	.loc 1 2953 627 discriminator 20
	lla	a5,stackframe
	beq	a5,zero,.L1038
	.loc 1 2953 640 discriminator 21
	call	stackframe
	j	.L1039
.L1038:
	.loc 1 2953 661 discriminator 22
	lla	a0,.LC1
	call	puts
	.loc 1 2953 681 discriminator 25
	lla	a0,__func__.5
	call	puts
.L1039:
	.loc 1 2953 699 discriminator 27
	li	a0,2
	call	exit
.L1037:
.LBE277:
	.loc 1 2953 710 discriminator 29
	addi	a4,s0,-712
	ld	a5,-32(s0)
	add	a5,a4,a5
.LBE276:
	.loc 1 2953 380 discriminator 29
	lbu	a5,0(a5)
	.loc 1 2953 377 discriminator 29
	bne	a5,zero,.L1040
.L1035:
	.loc 1 2954 24
	li	a5,-1
	j	.L1047
.L1040:
	.loc 1 2956 5
	lw	a5,-680(s0)
	addi	a4,s0,-144
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2957 11
	lhu	a5,-144(s0)
	.loc 1 2957 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L1041
	.loc 1 2958 24
	li	a5,-1
	j	.L1047
.L1041:
	.loc 1 2960 5
	lw	a5,-676(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2961 9
	addi	a5,s0,-232
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 2961 7 discriminator 1
	bne	a5,zero,.L1042
	.loc 1 2962 24
	li	a5,-1
	j	.L1047
.L1042:
	.loc 1 2964 9
	addi	a5,s0,-144
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 2964 7 discriminator 1
	bne	a5,zero,.L1043
	.loc 1 2965 24
	li	a5,-1
	j	.L1047
.L1043:
	.loc 1 2967 5
	lw	a5,-676(s0)
	addi	a4,s0,-320
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2968 5
	lw	a5,-52(s0)
	addi	a4,s0,-408
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 2969 13
	lw	a5,-308(s0)
	.loc 1 2969 28
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 2969 7
	beq	a5,zero,.L1044
	.loc 1 2970 12
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 2970 11 discriminator 1
	sd	a5,-416(s0)
	.loc 1 2971 16
	ld	a5,-416(s0)
	lhu	a5,1018(a5)
	.loc 1 2971 11
	beq	a5,zero,.L1044
	.loc 1 2971 28 discriminator 1
	ld	a5,-416(s0)
	lhu	a4,1018(a5)
	.loc 1 2971 41 discriminator 1
	lhu	a5,-392(s0)
	.loc 1 2971 24 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L1044
	.loc 1 2971 59 discriminator 2
	ld	a5,-416(s0)
	lhu	a4,1018(a5)
	.loc 1 2971 71 discriminator 2
	lhu	a5,-304(s0)
	.loc 1 2971 12 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L1044
	.loc 1 2972 32
	li	a5,-1
	j	.L1047
.L1044:
	.loc 1 2975 8
	lw	a5,-680(s0)
	lw	a3,-52(s0)
	addi	a4,s0,-712
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 2975 7 discriminator 1
	beq	a5,zero,.L1045
	.loc 1 2976 24
	li	a5,-1
	j	.L1047
.L1045:
	.loc 1 2978 8
	lw	a5,-676(s0)
	addi	a4,s0,-696
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 1 2978 7 discriminator 1
	beq	a5,zero,.L1046
	.loc 1 2979 24
	li	a5,-1
	j	.L1047
.L1046:
	.loc 1 2981 16
	li	a5,0
.L1047:
	.loc 1 2982 1
	mv	a0,a5
	ld	ra,728(sp)
	.cfi_restore 1
	ld	s0,720(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 736
	addi	sp,sp,736
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE66:
	.size	fs_rename, .-fs_rename
	.align	1
	.globl	fs_link
	.type	fs_link, @function
fs_link:
.LFB67:
	.loc 1 2985 1
	.cfi_startproc
	addi	sp,sp,-512
	.cfi_def_cfa_offset 512
	sd	ra,504(sp)
	sd	s0,496(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,512
	.cfi_def_cfa 8, 0
	sd	a0,-504(s0)
	sd	a1,-512(s0)
	.loc 1 2991 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2992 5
	addi	a5,s0,-128
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2993 5
	addi	a5,s0,-132
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2994 5
	addi	a5,s0,-136
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2995 5
	addi	a5,s0,-224
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2997 5
	addi	a5,s0,-480
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 2999 5
	addi	a5,s0,-352
	ld	a2,-504(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3000 5
	addi	a5,s0,-480
	ld	a2,-512(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3001 8
	addi	a5,s0,-480
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 3001 7 discriminator 1
	beq	a5,zero,.L1049
	.loc 1 3001 31 discriminator 2
	addi	a5,s0,-352
	lla	a1,.LC11
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 3001 29 discriminator 3
	bne	a5,zero,.L1050
.L1049:
	.loc 1 3002 24
	li	a5,-1
	j	.L1069
.L1050:
	.loc 1 3004 10
	addi	a5,s0,-352
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3004 9 discriminator 1
	sw	a5,-36(s0)
	.loc 1 3005 12
	lw	a5,-36(s0)
	.loc 1 3005 7
	bne	a5,zero,.L1052
	.loc 1 3006 24
	li	a5,-1
	j	.L1069
.L1052:
	.loc 1 3008 8
	addi	a5,s0,-480
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3008 7 discriminator 1
	beq	a5,zero,.L1053
	.loc 1 3009 24
	li	a5,-1
	j	.L1069
.L1053:
	.loc 1 3011 5
	lw	a5,-36(s0)
	addi	a4,s0,-128
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3012 10
	lhu	a5,-128(s0)
	.loc 1 3012 7
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L1054
	.loc 1 3013 24
	li	a5,-1
	j	.L1069
.L1054:
	.loc 1 3016 5
	addi	a5,s0,-496
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3017 10
	sw	zero,-136(s0)
	.loc 1 3017 5
	j	.L1055
.L1060:
.LBB278:
	.loc 1 3018 47
	lw	a5,-136(s0)
	.loc 1 3018 22
	sd	a5,-32(s0)
	.loc 1 3018 65
	ld	a5,-32(s0)
	blt	a5,zero,.L1056
	.loc 1 3018 93 discriminator 2
	ld	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L1057
.L1056:
.LBB279:
	.loc 1 3018 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 3018 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1058
	.loc 1 3018 268 discriminator 6
	call	stackframe
	j	.L1059
.L1058:
	.loc 1 3018 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 3018 309 discriminator 10
	lla	a0,__func__.4
	call	puts
.L1059:
	.loc 1 3018 327 discriminator 12
	li	a0,2
	call	exit
.L1057:
.LBE279:
	.loc 1 3018 367 discriminator 14
	ld	a5,-32(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-480(a5)
.LBE278:
	.loc 1 3017 25 discriminator 2
	lw	a5,-136(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-136(s0)
.L1055:
	.loc 1 3017 18 discriminator 1
	lw	a4,-136(s0)
	li	a5,14
	ble	a4,a5,.L1060
	.loc 1 3020 9
	addi	a3,s0,-496
	addi	a4,s0,-132
	addi	a5,s0,-480
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 3020 7 discriminator 1
	bne	a5,zero,.L1061
	.loc 1 3021 24
	li	a5,-1
	j	.L1069
.L1061:
.LBB280:
	.loc 1 3023 23
	sd	zero,-24(s0)
	.loc 1 3023 66
	ld	a5,-24(s0)
	blt	a5,zero,.L1062
	.loc 1 3023 94 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L1063
.L1062:
.LBB281:
	.loc 1 3023 219 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 3023 256 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1064
	.loc 1 3023 269 discriminator 6
	call	stackframe
	j	.L1065
.L1064:
	.loc 1 3023 290 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 3023 310 discriminator 10
	lla	a0,__func__.4
	call	puts
.L1065:
	.loc 1 3023 328 discriminator 12
	li	a0,2
	call	exit
.L1063:
.LBE281:
	.loc 1 3023 339 discriminator 14
	addi	a4,s0,-496
	ld	a5,-24(s0)
	add	a5,a4,a5
.LBE280:
	.loc 1 3023 9 discriminator 14
	lbu	a5,0(a5)
	.loc 1 3023 7 discriminator 14
	bne	a5,zero,.L1066
	.loc 1 3024 24
	li	a5,-1
	j	.L1069
.L1066:
	.loc 1 3026 5
	lw	a5,-132(s0)
	addi	a4,s0,-224
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3027 9
	addi	a5,s0,-224
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 3027 7 discriminator 1
	bne	a5,zero,.L1067
	.loc 1 3028 24
	li	a5,-1
	j	.L1069
.L1067:
	.loc 1 3030 8
	lw	a5,-132(s0)
	lw	a3,-36(s0)
	addi	a4,s0,-496
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 3030 7 discriminator 1
	beq	a5,zero,.L1068
	.loc 1 3031 24
	li	a5,-1
	j	.L1069
.L1068:
	.loc 1 3033 7
	lhu	a5,-122(s0)
	.loc 1 3033 23
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-122(s0)
	.loc 1 3034 14
	call	fs_now
	mv	a5,a0
	.loc 1 3034 13 discriminator 1
	sw	a5,-100(s0)
	.loc 1 3035 5
	lw	a5,-36(s0)
	addi	a4,s0,-128
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 3036 16
	li	a5,0
.L1069:
	.loc 1 3037 1
	mv	a0,a5
	ld	ra,504(sp)
	.cfi_restore 1
	ld	s0,496(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 512
	addi	sp,sp,512
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE67:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB68:
	.loc 1 3040 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	sd	a1,-256(s0)
	.loc 1 3043 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3044 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3045 7
	ld	a5,-256(s0)
	bne	a5,zero,.L1071
	.loc 1 3046 24
	li	a5,-1
	j	.L1074
.L1071:
	.loc 1 3049 5
	addi	a5,s0,-240
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3050 5
	addi	a5,s0,-240
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3051 10
	addi	a5,s0,-240
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3051 9 discriminator 1
	sw	a5,-20(s0)
	.loc 1 3052 8
	lw	a5,-20(s0)
	.loc 1 3052 7
	bne	a5,zero,.L1073
	.loc 1 3053 24
	li	a5,-1
	j	.L1074
.L1073:
	.loc 1 3055 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3056 16
	lhu	a4,-112(s0)
	.loc 1 3056 13
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 1 3057 17
	lhu	a4,-106(s0)
	.loc 1 3057 14
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 1 3058 16
	lw	a4,-104(s0)
	.loc 1 3058 13
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 1 3059 13
	lw	a4,-20(s0)
	ld	a5,-256(s0)
	sw	a4,8(a5)
	.loc 1 3060 16
	lw	a4,-100(s0)
	.loc 1 3060 13
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 1 3061 15
	lhu	a4,-96(s0)
	.loc 1 3061 12
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 1 3062 15
	lhu	a4,-94(s0)
	.loc 1 3062 12
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 1 3063 17
	lw	a4,-92(s0)
	.loc 1 3063 14
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 1 3064 17
	lw	a4,-88(s0)
	.loc 1 3064 14
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 1 3065 17
	lw	a4,-84(s0)
	.loc 1 3065 14
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 1 3066 16
	li	a5,0
.L1074:
	.loc 1 3067 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE68:
	.size	fs_stat, .-fs_stat
	.align	1
	.globl	fs_readlink
	.type	fs_readlink, @function
fs_readlink:
.LFB69:
	.loc 1 3070 1
	.cfi_startproc
	addi	sp,sp,-400
	.cfi_def_cfa_offset 400
	sd	ra,392(sp)
	sd	s0,384(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,400
	.cfi_def_cfa 8, 0
	sd	a0,-376(s0)
	sd	a1,-384(s0)
	mv	a5,a2
	sw	a5,-388(s0)
	.loc 1 3077 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3078 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3079 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3080 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3081 5
	addi	a5,s0,-216
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3082 5
	addi	a5,s0,-220
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3083 7
	ld	a5,-384(s0)
	beq	a5,zero,.L1076
	.loc 1 3083 12 discriminator 1
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L1077
.L1076:
	.loc 1 3084 24
	li	a5,-1
	j	.L1092
.L1077:
	.loc 1 3087 5
	addi	a5,s0,-352
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3088 5
	addi	a5,s0,-352
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3090 5
	addi	a5,s0,-368
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3091 10
	sw	zero,-32(s0)
	.loc 1 3091 5
	j	.L1079
.L1084:
.LBB282:
	.loc 1 3092 47
	lw	a5,-32(s0)
	.loc 1 3092 22
	sd	a5,-24(s0)
	.loc 1 3092 65
	ld	a5,-24(s0)
	blt	a5,zero,.L1080
	.loc 1 3092 93 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L1081
.L1080:
.LBB283:
	.loc 1 3092 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 3092 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1082
	.loc 1 3092 268 discriminator 6
	call	stackframe
	j	.L1083
.L1082:
	.loc 1 3092 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 3092 309 discriminator 10
	lla	a0,__func__.3
	call	puts
.L1083:
	.loc 1 3092 327 discriminator 12
	li	a0,2
	call	exit
.L1081:
.LBE283:
	.loc 1 3092 367 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-352(a5)
.LBE282:
	.loc 1 3091 25 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-32(s0)
.L1079:
	.loc 1 3091 18 discriminator 1
	lw	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L1084
	.loc 1 3094 9
	addi	a3,s0,-368
	addi	a4,s0,-28
	addi	a5,s0,-352
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 3094 7 discriminator 1
	bne	a5,zero,.L1085
	.loc 1 3095 24
	li	a5,-1
	j	.L1092
.L1085:
	.loc 1 3097 5
	lw	a5,-28(s0)
	addi	a4,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3098 11
	lhu	a5,-120(s0)
	.loc 1 3098 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L1086
	.loc 1 3099 24
	li	a5,-1
	j	.L1092
.L1086:
	.loc 1 3101 10
	addi	a4,s0,-368
	addi	a5,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 1 3101 9 discriminator 1
	sw	a5,-124(s0)
	.loc 1 3102 8
	lw	a5,-124(s0)
	.loc 1 3102 7
	bne	a5,zero,.L1087
	.loc 1 3103 24
	li	a5,-1
	j	.L1092
.L1087:
	.loc 1 3105 5
	lw	a5,-124(s0)
	addi	a4,s0,-216
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3106 10
	lhu	a5,-216(s0)
	.loc 1 3106 7
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L1088
	.loc 1 3107 24
	li	a5,-1
	j	.L1092
.L1088:
	.loc 1 3109 9
	lw	a5,-208(s0)
	.loc 1 3109 6
	sw	a5,-220(s0)
	.loc 1 3110 9
	lw	a5,-220(s0)
	.loc 1 3110 7
	lw	a4,-388(s0)
	sext.w	a4,a4
	bge	a4,a5,.L1089
	.loc 1 3111 10
	lw	a5,-388(s0)
	sw	a5,-220(s0)
.L1089:
	.loc 1 3113 9
	lw	a5,-220(s0)
	.loc 1 3113 7
	bge	a5,zero,.L1090
	.loc 1 3114 10
	sw	zero,-220(s0)
.L1090:
	.loc 1 3116 9
	lw	a5,-220(s0)
	.loc 1 3116 7
	ble	a5,zero,.L1091
	.loc 1 3117 9
	lw	a5,-220(s0)
	mv	a4,a5
	addi	a5,s0,-216
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L1091:
	.loc 1 3119 16
	lw	a5,-220(s0)
.L1092:
	.loc 1 3120 1
	mv	a0,a5
	ld	ra,392(sp)
	.cfi_restore 1
	ld	s0,384(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 400
	addi	sp,sp,400
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE69:
	.size	fs_readlink, .-fs_readlink
	.align	1
	.globl	fs_lstat
	.type	fs_lstat, @function
fs_lstat:
.LFB70:
	.loc 1 3123 1
	.cfi_startproc
	addi	sp,sp,-384
	.cfi_def_cfa_offset 384
	sd	ra,376(sp)
	sd	s0,368(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,384
	.cfi_def_cfa 8, 0
	sd	a0,-376(s0)
	sd	a1,-384(s0)
	.loc 1 3129 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3130 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3131 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3132 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3133 5
	addi	a5,s0,-216
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3134 7
	ld	a5,-384(s0)
	bne	a5,zero,.L1094
	.loc 1 3135 24
	li	a5,-1
	j	.L1105
.L1094:
	.loc 1 3138 5
	addi	a5,s0,-344
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3139 5
	addi	a5,s0,-344
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3141 5
	addi	a5,s0,-360
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3142 10
	sw	zero,-32(s0)
	.loc 1 3142 5
	j	.L1096
.L1101:
.LBB284:
	.loc 1 3143 47
	lw	a5,-32(s0)
	.loc 1 3143 22
	sd	a5,-24(s0)
	.loc 1 3143 65
	ld	a5,-24(s0)
	blt	a5,zero,.L1097
	.loc 1 3143 93 discriminator 2
	ld	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L1098
.L1097:
.LBB285:
	.loc 1 3143 218 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 3143 255 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1099
	.loc 1 3143 268 discriminator 6
	call	stackframe
	j	.L1100
.L1099:
	.loc 1 3143 289 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 3143 309 discriminator 10
	lla	a0,__func__.2
	call	puts
.L1100:
	.loc 1 3143 327 discriminator 12
	li	a0,2
	call	exit
.L1098:
.LBE285:
	.loc 1 3143 367 discriminator 14
	ld	a5,-24(s0)
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-344(a5)
.LBE284:
	.loc 1 3142 25 discriminator 2
	lw	a5,-32(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-32(s0)
.L1096:
	.loc 1 3142 18 discriminator 1
	lw	a4,-32(s0)
	li	a5,14
	ble	a4,a5,.L1101
	.loc 1 3145 9
	addi	a3,s0,-360
	addi	a4,s0,-28
	addi	a5,s0,-344
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 3145 7 discriminator 1
	bne	a5,zero,.L1102
	.loc 1 3146 24
	li	a5,-1
	j	.L1105
.L1102:
	.loc 1 3148 5
	lw	a5,-28(s0)
	addi	a4,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3149 11
	lhu	a5,-120(s0)
	.loc 1 3149 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L1103
	.loc 1 3150 24
	li	a5,-1
	j	.L1105
.L1103:
	.loc 1 3152 10
	addi	a4,s0,-360
	addi	a5,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 1 3152 9 discriminator 1
	sw	a5,-124(s0)
	.loc 1 3153 8
	lw	a5,-124(s0)
	.loc 1 3153 7
	bne	a5,zero,.L1104
	.loc 1 3154 24
	li	a5,-1
	j	.L1105
.L1104:
	.loc 1 3156 5
	lw	a5,-124(s0)
	addi	a4,s0,-216
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3157 16
	lhu	a4,-216(s0)
	.loc 1 3157 13
	ld	a5,-384(s0)
	sh	a4,0(a5)
	.loc 1 3158 17
	lhu	a4,-210(s0)
	.loc 1 3158 14
	ld	a5,-384(s0)
	sh	a4,2(a5)
	.loc 1 3159 16
	lw	a4,-208(s0)
	.loc 1 3159 13
	ld	a5,-384(s0)
	sw	a4,4(a5)
	.loc 1 3160 13
	lw	a4,-124(s0)
	ld	a5,-384(s0)
	sw	a4,8(a5)
	.loc 1 3161 16
	lw	a4,-204(s0)
	.loc 1 3161 13
	ld	a5,-384(s0)
	sw	a4,12(a5)
	.loc 1 3162 15
	lhu	a4,-200(s0)
	.loc 1 3162 12
	ld	a5,-384(s0)
	sh	a4,16(a5)
	.loc 1 3163 15
	lhu	a4,-198(s0)
	.loc 1 3163 12
	ld	a5,-384(s0)
	sh	a4,18(a5)
	.loc 1 3164 17
	lw	a4,-196(s0)
	.loc 1 3164 14
	ld	a5,-384(s0)
	sw	a4,20(a5)
	.loc 1 3165 17
	lw	a4,-192(s0)
	.loc 1 3165 14
	ld	a5,-384(s0)
	sw	a4,24(a5)
	.loc 1 3166 17
	lw	a4,-188(s0)
	.loc 1 3166 14
	ld	a5,-384(s0)
	sw	a4,28(a5)
	.loc 1 3167 16
	li	a5,0
.L1105:
	.loc 1 3168 1
	mv	a0,a5
	ld	ra,376(sp)
	.cfi_restore 1
	ld	s0,368(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 384
	addi	sp,sp,384
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE70:
	.size	fs_lstat, .-fs_lstat
	.align	1
	.globl	fs_chmod
	.type	fs_chmod, @function
fs_chmod:
.LFB71:
	.loc 1 3171 1
	.cfi_startproc
	addi	sp,sp,-272
	.cfi_def_cfa_offset 272
	sd	ra,264(sp)
	sd	s0,256(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,272
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	mv	a5,a1
	sw	a5,-268(s0)
	.loc 1 3175 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3176 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3177 5
	addi	a5,s0,-120
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3179 5
	addi	a5,s0,-248
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3180 5
	addi	a5,s0,-248
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3181 10
	addi	a5,s0,-248
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3181 9 discriminator 1
	sw	a5,-20(s0)
	.loc 1 3182 8
	lw	a5,-20(s0)
	.loc 1 3182 7
	bne	a5,zero,.L1107
	.loc 1 3183 24
	li	a5,-1
	j	.L1110
.L1107:
	.loc 1 3185 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3186 7
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3186 6 discriminator 1
	sd	a5,-120(s0)
	.loc 1 3187 11
	ld	a5,-120(s0)
	lhu	a5,1018(a5)
	.loc 1 3187 7
	beq	a5,zero,.L1109
	.loc 1 3187 22 discriminator 1
	ld	a5,-120(s0)
	lhu	a4,1018(a5)
	.loc 1 3187 31 discriminator 1
	lhu	a5,-96(s0)
	.loc 1 3187 8 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L1109
	.loc 1 3188 24
	li	a5,-1
	j	.L1110
.L1109:
	.loc 1 3190 17
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 3190 12
	sw	a5,-100(s0)
	.loc 1 3191 14
	call	fs_now
	mv	a5,a0
	.loc 1 3191 13 discriminator 1
	sw	a5,-84(s0)
	.loc 1 3192 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 3193 16
	li	a5,0
.L1110:
	.loc 1 3194 1
	mv	a0,a5
	ld	ra,264(sp)
	.cfi_restore 1
	ld	s0,256(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 272
	addi	sp,sp,272
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE71:
	.size	fs_chmod, .-fs_chmod
	.align	1
	.globl	fs_chown
	.type	fs_chown, @function
fs_chown:
.LFB72:
	.loc 1 3197 1
	.cfi_startproc
	addi	sp,sp,-256
	.cfi_def_cfa_offset 256
	sd	ra,248(sp)
	sd	s0,240(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,256
	.cfi_def_cfa 8, 0
	sd	a0,-248(s0)
	mv	a5,a1
	mv	a4,a2
	sh	a5,-250(s0)
	mv	a5,a4
	sh	a5,-252(s0)
	.loc 1 3200 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3201 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3203 5
	addi	a5,s0,-240
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3204 5
	addi	a5,s0,-240
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3205 10
	addi	a5,s0,-240
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3205 9 discriminator 1
	sw	a5,-20(s0)
	.loc 1 3206 8
	lw	a5,-20(s0)
	.loc 1 3206 7
	bne	a5,zero,.L1112
	.loc 1 3207 24
	li	a5,-1
	j	.L1115
.L1112:
	.loc 1 3209 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3210 8
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3210 34 discriminator 1
	lhu	a5,1018(a5)
	.loc 1 3210 7 discriminator 1
	beq	a5,zero,.L1114
	.loc 1 3211 24
	li	a5,-1
	j	.L1115
.L1114:
	.loc 1 3213 11
	lhu	a5,-250(s0)
	sh	a5,-96(s0)
	.loc 1 3214 11
	lhu	a5,-252(s0)
	sh	a5,-94(s0)
	.loc 1 3215 14
	call	fs_now
	mv	a5,a0
	.loc 1 3215 13 discriminator 1
	sw	a5,-84(s0)
	.loc 1 3216 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 3217 16
	li	a5,0
.L1115:
	.loc 1 3218 1
	mv	a0,a5
	ld	ra,248(sp)
	.cfi_restore 1
	ld	s0,240(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 256
	addi	sp,sp,256
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE72:
	.size	fs_chown, .-fs_chown
	.align	1
	.globl	fs_utimes
	.type	fs_utimes, @function
fs_utimes:
.LFB73:
	.loc 1 3221 1
	.cfi_startproc
	addi	sp,sp,-272
	.cfi_def_cfa_offset 272
	sd	ra,264(sp)
	sd	s0,256(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,272
	.cfi_def_cfa 8, 0
	sd	a0,-264(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-268(s0)
	mv	a5,a4
	sw	a5,-272(s0)
	.loc 1 3225 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3226 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3227 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3229 5
	addi	a5,s0,-248
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3230 5
	addi	a5,s0,-248
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 1 3231 10
	addi	a5,s0,-248
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3231 9 discriminator 1
	sw	a5,-20(s0)
	.loc 1 3232 8
	lw	a5,-20(s0)
	.loc 1 3232 7
	bne	a5,zero,.L1117
	.loc 1 3233 24
	li	a5,-1
	j	.L1123
.L1117:
	.loc 1 3235 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3236 9
	call	fs_now
	mv	a5,a0
	.loc 1 3236 8 discriminator 1
	sw	a5,-116(s0)
	.loc 1 3237 43
	lw	a5,-268(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L1119
	.loc 1 3237 43 is_stmt 0 discriminator 1
	lw	a5,-116(s0)
	j	.L1120
.L1119:
	.loc 1 3237 43 discriminator 2
	lw	a5,-268(s0)
.L1120:
	.loc 1 3237 13 is_stmt 1 discriminator 4
	sw	a5,-92(s0)
	.loc 1 3238 43
	lw	a5,-272(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L1121
	.loc 1 3238 43 is_stmt 0 discriminator 1
	lw	a5,-116(s0)
	j	.L1122
.L1121:
	.loc 1 3238 43 discriminator 2
	lw	a5,-272(s0)
.L1122:
	.loc 1 3238 13 is_stmt 1 discriminator 4
	sw	a5,-88(s0)
	.loc 1 3239 13
	lw	a5,-116(s0)
	sw	a5,-84(s0)
	.loc 1 3240 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 3241 16
	li	a5,0
.L1123:
	.loc 1 3242 1
	mv	a0,a5
	ld	ra,264(sp)
	.cfi_restore 1
	ld	s0,256(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 272
	addi	sp,sp,272
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE73:
	.size	fs_utimes, .-fs_utimes
	.align	1
	.globl	fs_open
	.type	fs_open, @function
fs_open:
.LFB74:
	.loc 1 3245 1
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
	.loc 1 3246 16
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 1 3247 1
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
.LFE74:
	.size	fs_open, .-fs_open
	.section	.rodata
	.align	3
.LC22:
	.string	"/dev/tty"
	.text
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB75:
	.loc 1 3250 1
	.cfi_startproc
	addi	sp,sp,-480
	.cfi_def_cfa_offset 480
	sd	ra,472(sp)
	sd	s0,464(sp)
	sd	s1,456(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,480
	.cfi_def_cfa 8, 0
	sd	a0,-472(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-476(s0)
	mv	a5,a4
	sw	a5,-480(s0)
	.loc 1 3268 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3269 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3270 5
	addi	a5,s0,-68
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3271 5
	addi	a5,s0,-72
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3272 5
	addi	a5,s0,-160
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3273 5
	addi	a5,s0,-164
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3274 5
	addi	a5,s0,-168
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3275 5
	addi	a5,s0,-172
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3276 5
	addi	a5,s0,-176
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3277 5
	addi	a5,s0,-178
	li	a2,2
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3278 5
	addi	a5,s0,-184
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3279 5
	addi	a5,s0,-188
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3280 5
	addi	a5,s0,-190
	li	a2,2
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3281 5
	addi	a5,s0,-280
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3282 5
	addi	a5,s0,-284
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3283 5
	addi	a5,s0,-288
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3284 5
	addi	a5,s0,-292
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3285 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3285 15 discriminator 1
	sd	a5,-56(s0)
	.loc 1 3287 5
	addi	a5,s0,-424
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3288 7
	ld	a5,-472(s0)
	beq	a5,zero,.L1127
	.loc 1 3288 19 discriminator 1
	ld	a5,-472(s0)
	lbu	a5,0(a5)
	.loc 1 3288 13 discriminator 1
	beq	a5,zero,.L1127
	.loc 1 3288 32 discriminator 2
	ld	a5,-472(s0)
	lbu	a5,0(a5)
	.loc 1 3288 25 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L1128
	.loc 1 3288 45 discriminator 3
	ld	a5,-472(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 1 3288 39 discriminator 3
	bne	a5,zero,.L1128
.L1127:
	.loc 1 3289 11
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3289 10 discriminator 1
	sd	a5,-64(s0)
	.loc 1 3290 51
	ld	a5,-64(s0)
	addi	a4,a5,888
	.loc 1 3290 9
	addi	a5,s0,-424
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	j	.L1129
.L1128:
	.loc 1 3293 9
	addi	a5,s0,-424
	ld	a2,-472(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L1129:
	.loc 1 3295 8
	addi	a5,s0,-424
	lla	a1,.LC22
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 1 3295 7 discriminator 1
	bne	a5,zero,.L1130
	.loc 1 3296 14
	li	a5,3
	sw	a5,-68(s0)
	.loc 1 3296 9
	j	.L1131
.L1134:
	.loc 1 3297 26
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3297 15
	bne	a5,zero,.L1132
	.loc 1 3298 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 1 3298 31
	call	new_file_table
	mv	a5,a0
	.loc 1 3298 30 discriminator 1
	sd	a5,0(s1)
	.loc 1 3299 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3299 36
	li	a4,5
	sw	a4,0(a5)
	.loc 1 3300 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3300 36
	li	a4,1
	sw	a4,100(a5)
	.loc 1 3301 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3301 36
	li	a4,-1
	sw	a4,4(a5)
	.loc 1 3302 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3302 35
	sw	zero,96(a5)
	.loc 1 3303 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3303 41
	sw	zero,116(a5)
	.loc 1 3304 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3304 42
	sw	zero,120(a5)
	.loc 1 3305 27
	ld	a4,-56(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3305 38
	lw	a4,-476(s0)
	sw	a4,124(a5)
	.loc 1 3306 40
	lw	a5,-68(s0)
	j	.L1171
.L1132:
	.loc 1 3296 31 discriminator 2
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-68(s0)
.L1131:
	.loc 1 3296 26 discriminator 1
	lw	a4,-68(s0)
	li	a5,31
	ble	a4,a5,.L1134
	.loc 1 3309 24
	li	a5,-1
	j	.L1171
.L1130:
	.loc 1 3311 10
	addi	a5,s0,-424
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 1 3311 9 discriminator 1
	sw	a5,-72(s0)
	.loc 1 3312 16
	sw	zero,-164(s0)
	.loc 1 3313 12
	lw	a5,-72(s0)
	.loc 1 3313 7
	bne	a5,zero,.L1135
	.loc 1 3314 17
	lw	a5,-476(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 1 3314 11
	beq	a5,zero,.L1136
.LBB286:
	.loc 1 3316 13
	addi	a5,s0,-440
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3317 21
	sw	zero,-172(s0)
	.loc 1 3317 13
	j	.L1137
.L1142:
.LBB287:
	.loc 1 3318 55
	lw	a5,-172(s0)
	.loc 1 3318 30
	sd	a5,-48(s0)
	.loc 1 3318 76
	ld	a5,-48(s0)
	blt	a5,zero,.L1138
	.loc 1 3318 104 discriminator 2
	ld	a4,-48(s0)
	li	a5,14
	ble	a4,a5,.L1139
.L1138:
.LBB288:
	.loc 1 3318 229 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 3318 266 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1140
	.loc 1 3318 279 discriminator 6
	call	stackframe
	j	.L1141
.L1140:
	.loc 1 3318 300 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 3318 320 discriminator 10
	lla	a0,__func__.1
	call	puts
.L1141:
	.loc 1 3318 338 discriminator 12
	li	a0,2
	call	exit
.L1139:
.LBE288:
	.loc 1 3318 378 discriminator 14
	ld	a5,-48(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-408(a5)
.LBE287:
	.loc 1 3317 50 discriminator 2
	lw	a5,-172(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-172(s0)
.L1137:
	.loc 1 3317 40 discriminator 1
	lw	a4,-172(s0)
	li	a5,14
	ble	a4,a5,.L1142
	.loc 1 3320 17
	addi	a3,s0,-440
	addi	a4,s0,-168
	addi	a5,s0,-424
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 3320 15 discriminator 1
	bne	a5,zero,.L1143
	.loc 1 3321 40
	li	a5,-1
	j	.L1171
.L1143:
	.loc 1 3323 22
	call	alloc_inode_T_FILE
	mv	a5,a0
	.loc 1 3323 21 discriminator 1
	sw	a5,-176(s0)
	.loc 1 3324 24
	lw	a5,-176(s0)
	.loc 1 3324 15
	bne	a5,zero,.L1145
	.loc 1 3325 40
	li	a5,-1
	j	.L1171
.L1145:
	.loc 1 3327 16
	lw	a5,-168(s0)
	lw	a3,-176(s0)
	addi	a4,s0,-440
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 1 3327 15 discriminator 1
	beq	a5,zero,.L1146
	.loc 1 3328 40
	li	a5,-1
	j	.L1171
.L1146:
	.loc 1 3330 17
	lw	a5,-176(s0)
	sw	a5,-72(s0)
	.loc 1 3331 13
	lw	a5,-72(s0)
	addi	a4,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3332 16
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3332 42 discriminator 1
	lhu	a5,1016(a5)
	.loc 1 3332 15 discriminator 1
	sh	a5,-178(s0)
	.loc 1 3334 13
	addi	a5,s0,-456
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3335 19
	sw	zero,-188(s0)
	.loc 1 3335 13
	j	.L1147
.L1152:
.LBB289:
	.loc 1 3336 55
	lw	a5,-188(s0)
	.loc 1 3336 30
	sd	a5,-40(s0)
	.loc 1 3336 74
	ld	a5,-40(s0)
	blt	a5,zero,.L1148
	.loc 1 3336 102 discriminator 2
	ld	a4,-40(s0)
	li	a5,14
	ble	a4,a5,.L1149
.L1148:
.LBB290:
	.loc 1 3336 227 discriminator 3
	lla	a0,.LC9
	call	puts
	.loc 1 3336 264 discriminator 5
	lla	a5,stackframe
	beq	a5,zero,.L1150
	.loc 1 3336 277 discriminator 6
	call	stackframe
	j	.L1151
.L1150:
	.loc 1 3336 298 discriminator 7
	lla	a0,.LC1
	call	puts
	.loc 1 3336 318 discriminator 10
	lla	a0,__func__.1
	call	puts
.L1151:
	.loc 1 3336 336 discriminator 12
	li	a0,2
	call	exit
.L1149:
.LBE290:
	.loc 1 3336 377 discriminator 14
	ld	a5,-40(s0)
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-424(a5)
.LBE289:
	.loc 1 3335 44 discriminator 2
	lw	a5,-188(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-188(s0)
.L1147:
	.loc 1 3335 36 discriminator 1
	lw	a4,-188(s0)
	li	a5,14
	ble	a4,a5,.L1152
	.loc 1 3338 17
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3338 43 discriminator 1
	lhu	a5,1020(a5)
	.loc 1 3338 16 discriminator 1
	sh	a5,-190(s0)
	.loc 1 3339 16
	addi	a3,s0,-456
	addi	a4,s0,-184
	addi	a5,s0,-424
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 1 3339 15 discriminator 1
	beq	a5,zero,.L1153
	.loc 1 3340 17
	lw	a5,-184(s0)
	addi	a4,s0,-280
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 1 3341 27
	lw	a5,-268(s0)
	.loc 1 3341 42
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 3341 19
	beq	a5,zero,.L1153
	.loc 1 3342 32
	lhu	a5,-262(s0)
	.loc 1 3342 24
	sh	a5,-190(s0)
.L1153:
	.loc 1 3345 20
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3345 46 discriminator 1
	lhu	a5,1018(a5)
	.loc 1 3345 19 discriminator 1
	sh	a5,-144(s0)
	.loc 1 3346 19
	lhu	a5,-190(s0)
	sh	a5,-142(s0)
	.loc 1 3347 29
	lw	a5,-480(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 1 3347 50
	beq	a5,zero,.L1154
	.loc 1 3347 50 is_stmt 0 discriminator 1
	lw	a5,-480(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L1155
.L1154:
	.loc 1 3347 50 discriminator 2
	li	a5,420
.L1155:
	.loc 1 3347 60 is_stmt 1 discriminator 4
	lhu	a4,-178(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 1 3347 59 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 1 3347 20 discriminator 4
	sw	a5,-148(s0)
	.loc 1 3348 40
	call	fs_now
	mv	a5,a0
	.loc 1 3348 39 discriminator 1
	sw	a5,-132(s0)
	.loc 1 3348 33 discriminator 1
	lw	a5,-132(s0)
	.loc 1 3348 30 discriminator 1
	sw	a5,-136(s0)
	.loc 1 3348 24 discriminator 1
	lw	a5,-136(s0)
	.loc 1 3348 21 discriminator 1
	sw	a5,-140(s0)
	.loc 1 3349 13
	lw	a5,-72(s0)
	addi	a4,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 1 3350 24
	li	a5,1
	sw	a5,-164(s0)
.LBE286:
	j	.L1156
.L1136:
	.loc 1 3353 32
	li	a5,-1
	j	.L1171
.L1135:
	.loc 1 3357 9
	lw	a5,-72(s0)
	addi	a4,s0,-160
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L1156:
	.loc 1 3359 10
	lhu	a5,-160(s0)
	.loc 1 3359 7
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L1157
	.loc 1 3359 32 discriminator 1
	lhu	a5,-160(s0)
	.loc 1 3359 28 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L1157
	.loc 1 3360 24
	li	a5,-1
	j	.L1171
.L1157:
	.loc 1 3362 10
	lhu	a5,-160(s0)
	.loc 1 3362 7
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L1158
	.loc 1 3363 13
	sw	zero,-284(s0)
	.loc 1 3364 11
	lw	a5,-476(s0)
	sext.w	a5,a5
	bne	a5,zero,.L1159
	.loc 1 3365 17
	lw	a5,-284(s0)
	ori	a5,a5,4
	sext.w	a5,a5
	sw	a5,-284(s0)
.L1159:
	.loc 1 3367 17
	lw	a5,-476(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 3367 11
	beq	a5,zero,.L1160
	.loc 1 3368 17
	lw	a5,-284(s0)
	ori	a5,a5,2
	sext.w	a5,a5
	sw	a5,-284(s0)
.L1160:
	.loc 1 3370 17
	lw	a5,-476(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 1 3370 11
	beq	a5,zero,.L1161
	.loc 1 3371 17
	lw	a5,-284(s0)
	ori	a5,a5,6
	sext.w	a5,a5
	sw	a5,-284(s0)
.L1161:
	.loc 1 3373 12
	lw	a5,-164(s0)
	.loc 1 3373 11
	bne	a5,zero,.L1162
	.loc 1 3374 39
	lw	a5,-284(s0)
	.loc 1 3374 17
	beq	a5,zero,.L1163
	.loc 1 3374 17 is_stmt 0 discriminator 1
	lw	a5,-284(s0)
	j	.L1164
.L1163:
	.loc 1 3374 17 discriminator 2
	li	a5,4
.L1164:
	.loc 1 3374 17 discriminator 4
	addi	a4,s0,-160
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 1 3374 15 is_stmt 1 discriminator 5
	bne	a5,zero,.L1162
	.loc 1 3375 40
	li	a5,-1
	j	.L1171
.L1158:
	.loc 1 3379 15
	lhu	a5,-160(s0)
	.loc 1 3379 12
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L1162
	.loc 1 3380 13
	addi	a5,s0,-160
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 3380 11 discriminator 1
	bne	a5,zero,.L1162
	.loc 1 3381 32
	li	a5,-1
	j	.L1171
.L1162:
	.loc 1 3384 13
	li	a5,3
	sw	a5,-288(s0)
	.loc 1 3384 5
	j	.L1165
.L1170:
	.loc 1 3385 22
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3385 11
	bne	a5,zero,.L1166
	.loc 1 3386 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 1 3386 30
	call	new_file_table
	mv	a5,a0
	.loc 1 3386 29 discriminator 1
	sd	a5,0(s1)
	.loc 1 3387 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3387 35
	li	a4,3
	sw	a4,0(a5)
	.loc 1 3388 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3388 35
	li	a4,1
	sw	a4,100(a5)
	.loc 1 3389 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3389 35
	lw	a4,-72(s0)
	sw	a4,4(a5)
	.loc 1 3390 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3390 34
	ld	t4,-160(s0)
	ld	t3,-152(s0)
	ld	t1,-144(s0)
	ld	a7,-136(s0)
	ld	a6,-128(s0)
	ld	a0,-120(s0)
	ld	a1,-112(s0)
	ld	a2,-104(s0)
	ld	a3,-96(s0)
	ld	a4,-88(s0)
	sd	t4,8(a5)
	sd	t3,16(a5)
	sd	t1,24(a5)
	sd	a7,32(a5)
	sd	a6,40(a5)
	sd	a0,48(a5)
	sd	a1,56(a5)
	sd	a2,64(a5)
	sd	a3,72(a5)
	sd	a4,80(a5)
	ld	a4,-80(s0)
	sd	a4,88(a5)
	.loc 1 3391 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3391 34
	sw	zero,96(a5)
	.loc 1 3392 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3392 40
	sw	zero,116(a5)
	.loc 1 3393 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3393 41
	sw	zero,120(a5)
	.loc 1 3394 23
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3394 37
	lw	a4,-476(s0)
	sw	a4,124(a5)
	.loc 1 3395 22
	lw	a5,-476(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 1 3395 15
	beq	a5,zero,.L1167
	.loc 1 3395 43 discriminator 1
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3395 54 discriminator 1
	lhu	a5,8(a5)
	.loc 1 3395 31 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L1167
	.loc 1 3396 17
	lw	a3,-72(s0)
	.loc 1 3396 51
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3396 17
	addi	a5,a5,8
	mv	a1,a5
	mv	a0,a3
	call	free_inode_blocks
	.loc 1 3397 21
	call	fs_now
	mv	a5,a0
	.loc 1 3397 20 discriminator 1
	sw	a5,-292(s0)
	.loc 1 3398 27
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3398 44
	lw	a4,-292(s0)
	sw	a4,32(a5)
	.loc 1 3399 27
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3399 44
	lw	a4,-292(s0)
	sw	a4,36(a5)
	.loc 1 3400 27
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3400 44
	lw	a4,-292(s0)
	sw	a4,28(a5)
	.loc 1 3401 17
	lw	a3,-72(s0)
	.loc 1 3401 45
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3401 34
	addi	a5,a5,8
	.loc 1 3401 17
	mv	a1,a5
	mv	a0,a3
	call	write_inode
	.loc 1 3402 27
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3402 38
	sw	zero,96(a5)
.L1167:
	.loc 1 3404 22
	lw	a5,-476(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 3404 15
	beq	a5,zero,.L1168
	.loc 1 3404 43 discriminator 1
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3404 54 discriminator 1
	lhu	a5,8(a5)
	.loc 1 3404 31 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L1168
	.loc 1 3405 49
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 1 3405 27
	ld	a3,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 1 3405 60
	lw	a4,16(a4)
	.loc 1 3405 38
	sw	a4,96(a5)
.L1168:
	.loc 1 3407 16
	lw	a5,-164(s0)
	.loc 1 3407 15
	beq	a5,zero,.L1169
	.loc 1 3408 27
	ld	a4,-56(s0)
	lw	a5,-288(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3408 38
	ld	t4,-160(s0)
	ld	t3,-152(s0)
	ld	t1,-144(s0)
	ld	a7,-136(s0)
	ld	a6,-128(s0)
	ld	a0,-120(s0)
	ld	a1,-112(s0)
	ld	a2,-104(s0)
	ld	a3,-96(s0)
	ld	a4,-88(s0)
	sd	t4,8(a5)
	sd	t3,16(a5)
	sd	t1,24(a5)
	sd	a7,32(a5)
	sd	a6,40(a5)
	sd	a0,48(a5)
	sd	a1,56(a5)
	sd	a2,64(a5)
	sd	a3,72(a5)
	sd	a4,80(a5)
	ld	a4,-80(s0)
	sd	a4,88(a5)
.L1169:
	.loc 1 3410 32
	lw	a5,-288(s0)
	j	.L1171
.L1166:
	.loc 1 3384 32 discriminator 2
	lw	a5,-288(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-288(s0)
.L1165:
	.loc 1 3384 24 discriminator 1
	lw	a4,-288(s0)
	li	a5,31
	ble	a4,a5,.L1170
	.loc 1 3413 16
	li	a5,-1
.L1171:
	.loc 1 3414 1
	mv	a0,a5
	ld	ra,472(sp)
	.cfi_restore 1
	ld	s0,464(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 480
	ld	s1,456(sp)
	.cfi_restore 9
	addi	sp,sp,480
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE75:
	.size	fs_open2, .-fs_open2
	.align	1
	.globl	fs_read
	.type	fs_read, @function
fs_read:
.LFB76:
	.loc 1 3417 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	sd	s1,72(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-80(s0)
	sd	a2,-88(s0)
	sw	a5,-68(s0)
	.loc 1 3423 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3424 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3425 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3426 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3427 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3428 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3428 15 discriminator 1
	sd	a5,-40(s0)
	.loc 1 3429 18
	ld	a4,-40(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3429 7
	bne	a5,zero,.L1173
	.loc 1 3430 24
	li	a5,-1
	j	.L1179
.L1173:
	.loc 1 3432 8
	lw	a5,-68(s0)
	sw	a5,-44(s0)
	.loc 1 3433 11
	lw	a5,-44(s0)
	.loc 1 3433 7
	blt	a5,zero,.L1175
	.loc 1 3433 18 discriminator 1
	lw	a4,-44(s0)
	.loc 1 3433 13 discriminator 1
	li	a5,31
	ble	a4,a5,.L1176
.L1175:
	.loc 1 3434 24
	li	a5,-1
	j	.L1179
.L1176:
	.loc 1 3436 17
	ld	a4,-40(s0)
	lw	a5,-44(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3436 6
	sd	a5,-56(s0)
	.loc 1 3437 16
	ld	a5,-56(s0)
	.loc 1 3437 21
	lw	a4,16(a5)
	.loc 1 3437 38
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 1 3437 36
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 3437 14
	sw	a5,-60(s0)
	.loc 1 3438 17
	lw	a5,-60(s0)
	.loc 1 3438 7
	bne	a5,zero,.L1177
	.loc 1 3439 24
	li	a5,0
	j	.L1179
.L1177:
	.loc 1 3441 41
	lw	a5,-60(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	ld	a5,-88(s0)
	bleu	a5,a4,.L1178
	mv	a5,a4
.L1178:
	.loc 1 3441 12
	sext.w	a5,a5
	sw	a5,-64(s0)
	.loc 1 3442 17
	ld	a5,-56(s0)
	.loc 1 3442 5
	addi	a4,a5,8
	.loc 1 3442 24
	ld	a5,-56(s0)
	.loc 1 3442 5
	lw	a5,96(a5)
	lw	a3,-64(s0)
	ld	a2,-80(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 1 3443 6
	ld	a5,-56(s0)
	lw	a3,96(a5)
	.loc 1 3443 11
	lw	a4,-64(s0)
	.loc 1 3443 6
	ld	a5,-56(s0)
	.loc 1 3443 11
	addw	a4,a3,a4
	sext.w	a4,a4
	sw	a4,96(a5)
	.loc 1 3444 6
	ld	s1,-56(s0)
	.loc 1 3444 18
	call	fs_now
	mv	a5,a0
	.loc 1 3444 17 discriminator 1
	sw	a5,28(s1)
	.loc 1 3445 18
	ld	a5,-56(s0)
	.loc 1 3445 5
	lw	a4,4(a5)
	.loc 1 3445 27
	ld	a5,-56(s0)
	.loc 1 3445 25
	addi	a5,a5,8
	.loc 1 3445 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 3446 16
	lw	a5,-64(s0)
.L1179:
	.loc 1 3447 1
	mv	a0,a5
	ld	ra,88(sp)
	.cfi_restore 1
	ld	s0,80(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 96
	ld	s1,72(sp)
	.cfi_restore 9
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE76:
	.size	fs_read, .-fs_read
	.align	1
	.globl	fs_write
	.type	fs_write, @function
fs_write:
.LFB77:
	.loc 1 3450 1
	.cfi_startproc
	addi	sp,sp,-656
	.cfi_def_cfa_offset 656
	sd	ra,648(sp)
	sd	s0,640(sp)
	sd	s1,632(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,656
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-640(s0)
	sd	a2,-648(s0)
	sw	a5,-628(s0)
	.loc 1 3462 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3463 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3464 5
	addi	a5,s0,-68
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3465 5
	addi	a5,s0,-72
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3466 5
	addi	a5,s0,-76
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3467 5
	addi	a5,s0,-80
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3468 5
	addi	a5,s0,-84
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3469 5
	addi	a5,s0,-88
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3470 5
	addi	a5,s0,-92
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3471 5
	addi	a5,s0,-96
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3472 5
	addi	a5,s0,-100
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3473 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3473 15 discriminator 1
	sd	a5,-56(s0)
	.loc 1 3474 7
	lw	a5,-628(s0)
	sext.w	a5,a5
	blt	a5,zero,.L1181
	.loc 1 3474 12 discriminator 1
	lw	a5,-628(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L1182
.L1181:
	.loc 1 3475 24
	li	a5,-1
	j	.L1202
.L1182:
	.loc 1 3477 18
	ld	a4,-56(s0)
	lw	a5,-628(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3477 7
	bne	a5,zero,.L1184
	.loc 1 3478 24
	li	a5,-1
	j	.L1202
.L1184:
	.loc 1 3480 17
	ld	a4,-56(s0)
	lw	a5,-628(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3480 6
	sd	a5,-64(s0)
	.loc 1 3481 9
	ld	a5,-64(s0)
	lw	a4,0(a5)
	.loc 1 3481 7
	li	a5,3
	beq	a4,a5,.L1185
	.loc 1 3482 24
	li	a5,-1
	j	.L1202
.L1185:
	.loc 1 3484 22
	ld	a5,-64(s0)
	.loc 1 3484 9
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 1 3484 7 discriminator 1
	bne	a5,zero,.L1186
	.loc 1 3485 24
	li	a5,-1
	j	.L1202
.L1186:
	.loc 1 3487 13
	ld	a5,-648(s0)
	sext.w	a5,a5
	sw	a5,-68(s0)
	.loc 1 3488 27
	ld	a5,-640(s0)
	sd	a5,-40(s0)
	.loc 1 3489 9
	lw	a5,-68(s0)
	sw	a5,-72(s0)
	.loc 1 3490 13
	ld	a5,-64(s0)
	lw	a4,124(a5)
	.loc 1 3490 21
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 3490 55
	beq	a5,zero,.L1187
	.loc 1 3490 34 discriminator 1
	ld	a5,-64(s0)
	.loc 1 3490 55 discriminator 1
	lw	a5,16(a5)
	j	.L1188
.L1187:
	.loc 1 3490 58 discriminator 2
	ld	a5,-64(s0)
	.loc 1 3490 55 discriminator 2
	lw	a5,96(a5)
.L1188:
	.loc 1 3490 8 discriminator 4
	sw	a5,-76(s0)
	.loc 1 3491 9
	ld	a5,-64(s0)
	lw	a4,124(a5)
	.loc 1 3491 17
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 1 3491 7
	beq	a5,zero,.L1189
	.loc 1 3492 10
	ld	a5,-64(s0)
	.loc 1 3492 15
	lw	a4,-76(s0)
	sw	a4,96(a5)
.L1189:
	.loc 1 3494 12
	sw	zero,-80(s0)
	.loc 1 3495 10
	j	.L1190
.L1200:
.LBB291:
.LBB292:
	.loc 1 3496 36
	li	a5,512
	sw	a5,-44(s0)
	.loc 1 3496 65
	lw	a5,-44(s0)
	sext.w	a5,a5
	bne	a5,zero,.L1191
.LBB293:
	.loc 1 3496 167 discriminator 1
	lla	a0,.LC0
	call	puts
	.loc 1 3496 195 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L1192
	.loc 1 3496 208 discriminator 4
	call	stackframe
	j	.L1193
.L1192:
	.loc 1 3496 229 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 3496 249 discriminator 8
	lla	a0,__func__.0
	call	puts
.L1193:
	.loc 1 3496 267 discriminator 10
	li	a0,2
	call	exit
.L1191:
.LBE293:
	.loc 1 3496 284 discriminator 12
	lw	a4,-76(s0)
	lw	a5,-44(s0)
	divuw	a5,a4,a5
	sext.w	a5,a5
.LBE292:
	.loc 1 3496 16 discriminator 12
	sw	a5,-84(s0)
.LBB294:
	.loc 1 3497 36
	li	a5,512
	sw	a5,-48(s0)
	.loc 1 3497 65
	lw	a5,-48(s0)
	sext.w	a5,a5
	bne	a5,zero,.L1194
.LBB295:
	.loc 1 3497 167 discriminator 1
	lla	a0,.LC8
	call	puts
	.loc 1 3497 193 discriminator 3
	lla	a5,stackframe
	beq	a5,zero,.L1195
	.loc 1 3497 206 discriminator 4
	call	stackframe
	j	.L1196
.L1195:
	.loc 1 3497 227 discriminator 5
	lla	a0,.LC1
	call	puts
	.loc 1 3497 247 discriminator 8
	lla	a0,__func__.0
	call	puts
.L1196:
	.loc 1 3497 265 discriminator 10
	li	a0,2
	call	exit
.L1194:
.LBE295:
	.loc 1 3497 282 discriminator 12
	lw	a4,-76(s0)
	lw	a5,-48(s0)
	remuw	a5,a4,a5
	sext.w	a5,a5
.LBE294:
	.loc 1 3497 16 discriminator 12
	sw	a5,-88(s0)
	.loc 1 3498 21
	lw	a5,-88(s0)
	li	a4,512
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 1 3498 17
	sw	a5,-92(s0)
	.loc 1 3499 20
	lw	a4,-92(s0)
	lw	a5,-72(s0)
	.loc 1 3499 11
	bleu	a4,a5,.L1197
	.loc 1 3500 21
	lw	a5,-72(s0)
	sw	a5,-92(s0)
.L1197:
	.loc 1 3502 36
	ld	a5,-64(s0)
	.loc 1 3502 18
	lw	a4,4(a5)
	.loc 1 3502 45
	ld	a5,-64(s0)
	.loc 1 3502 18
	addi	a5,a5,8
	lw	a3,-84(s0)
	mv	a2,a3
	mv	a1,a5
	mv	a0,a4
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 1 3502 17 discriminator 1
	sw	a5,-96(s0)
	.loc 1 3503 20
	lw	a5,-96(s0)
	.loc 1 3503 11
	beq	a5,zero,.L1203
	.loc 1 3507 9
	addi	a5,s0,-616
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3508 9
	lw	a5,-96(s0)
	addi	a4,s0,-616
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 1 3509 9
	lw	a5,-88(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a4,s0,-616
	add	a5,a4,a5
	lw	a4,-92(s0)
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	memcpy
	.loc 1 3510 9
	lw	a5,-96(s0)
	addi	a4,s0,-616
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 1 3511 13
	lw	a4,-72(s0)
	lw	a5,-92(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-72(s0)
	.loc 1 3512 12
	lw	a4,-76(s0)
	lw	a5,-92(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-76(s0)
	.loc 1 3513 12
	lw	a5,-92(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	ld	a4,-40(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 1 3514 16
	lw	a4,-80(s0)
	lw	a5,-92(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-80(s0)
.L1190:
.LBE291:
	.loc 1 3495 15
	lw	a5,-72(s0)
	bne	a5,zero,.L1200
	j	.L1199
.L1203:
.LBB296:
	.loc 1 3504 13
	nop
.L1199:
.LBE296:
	.loc 1 3516 6
	ld	a5,-64(s0)
	lw	a3,96(a5)
	.loc 1 3516 11
	lw	a4,-80(s0)
	.loc 1 3516 6
	ld	a5,-64(s0)
	.loc 1 3516 11
	addw	a4,a3,a4
	sext.w	a4,a4
	sw	a4,96(a5)
	.loc 1 3517 14
	ld	a5,-64(s0)
	lw	a5,96(a5)
	.loc 1 3517 12
	sw	a5,-100(s0)
	.loc 1 3518 17
	ld	a5,-64(s0)
	.loc 1 3518 22
	lw	a4,16(a5)
	.loc 1 3518 15
	lw	a5,-100(s0)
	.loc 1 3518 7
	bgeu	a4,a5,.L1201
	.loc 1 3519 10
	ld	a5,-64(s0)
	.loc 1 3519 20
	lw	a4,-100(s0)
	sw	a4,16(a5)
.L1201:
	.loc 1 3521 6
	ld	s1,-64(s0)
	.loc 1 3521 18
	call	fs_now
	mv	a5,a0
	.loc 1 3521 17 discriminator 1
	sw	a5,32(s1)
	.loc 1 3522 18
	ld	a5,-64(s0)
	.loc 1 3522 5
	lw	a4,4(a5)
	.loc 1 3522 27
	ld	a5,-64(s0)
	.loc 1 3522 25
	addi	a5,a5,8
	.loc 1 3522 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 1 3523 16
	lw	a5,-80(s0)
.L1202:
	.loc 1 3524 1
	mv	a0,a5
	ld	ra,648(sp)
	.cfi_restore 1
	ld	s0,640(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 656
	ld	s1,632(sp)
	.cfi_restore 9
	addi	sp,sp,656
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE77:
	.size	fs_write, .-fs_write
	.align	1
	.globl	fs_size
	.type	fs_size, @function
fs_size:
.LFB78:
	.loc 1 3527 1
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
	sw	a5,-52(s0)
	.loc 1 3531 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3532 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3533 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3534 16
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3534 15 discriminator 1
	sd	a5,-24(s0)
	.loc 1 3535 18
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3535 7
	bne	a5,zero,.L1205
	.loc 1 3536 24
	li	a5,-1
	j	.L1209
.L1205:
	.loc 1 3538 8
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 1 3539 11
	lw	a5,-28(s0)
	.loc 1 3539 7
	blt	a5,zero,.L1207
	.loc 1 3539 18 discriminator 1
	lw	a4,-28(s0)
	.loc 1 3539 13 discriminator 1
	li	a5,31
	bgt	a4,a5,.L1207
	.loc 1 3539 35 discriminator 2
	ld	a4,-24(s0)
	lw	a5,-28(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3539 40 discriminator 2
	lw	a5,100(a5)
	.loc 1 3539 22 discriminator 2
	bne	a5,zero,.L1208
.L1207:
	.loc 1 3540 24
	li	a5,-1
	j	.L1209
.L1208:
	.loc 1 3542 17
	ld	a4,-24(s0)
	lw	a5,-28(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3542 6
	sd	a5,-40(s0)
	.loc 1 3543 17
	ld	a5,-40(s0)
	.loc 1 3543 22
	lw	a5,16(a5)
.L1209:
	.loc 1 3544 1
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
.LFE78:
	.size	fs_size, .-fs_size
	.align	1
	.globl	fs_close
	.type	fs_close, @function
fs_close:
.LFB79:
	.loc 1 3547 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	sd	s1,56(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-72(s0)
	mv	a5,a1
	sw	a5,-76(s0)
	.loc 1 3551 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3552 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3553 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3554 8
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3554 7 discriminator 1
	sd	a5,-40(s0)
	.loc 1 3555 7
	ld	a5,-72(s0)
	blt	a5,zero,.L1211
	.loc 1 3555 12 discriminator 1
	ld	a4,-72(s0)
	li	a5,31
	ble	a4,a5,.L1212
.L1211:
	.loc 1 3556 24
	li	a5,-1
	j	.L1222
.L1212:
	.loc 1 3558 9
	ld	a4,-40(s0)
	ld	a5,-72(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3558 6
	sd	a5,-48(s0)
	.loc 1 3559 8
	ld	a5,-48(s0)
	.loc 1 3559 7
	bne	a5,zero,.L1214
	.loc 1 3560 24
	li	a5,-1
	j	.L1222
.L1214:
	.loc 1 3562 7
	ld	a4,-40(s0)
	ld	a5,-72(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	.loc 1 3562 11
	sd	zero,0(a5)
	.loc 1 3563 7
	lw	a5,-76(s0)
	sext.w	a5,a5
	beq	a5,zero,.L1215
	.loc 1 3564 9
	ld	s1,-48(s0)
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 1 3564 9 is_stmt 0 discriminator 1
	mv	a1,a5
	mv	a0,s1
	call	owner_remove
.L1215:
	.loc 1 3566 9 is_stmt 1
	ld	a5,-48(s0)
	lw	a5,100(a5)
	.loc 1 3566 7
	ble	a5,zero,.L1216
	.loc 1 3567 10
	ld	a5,-48(s0)
	lw	a4,100(a5)
	.loc 1 3567 16
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,100(a5)
.L1216:
	.loc 1 3569 9
	ld	a5,-48(s0)
	lw	a5,100(a5)
	.loc 1 3569 7
	ble	a5,zero,.L1217
	.loc 1 3570 24
	li	a5,0
	j	.L1222
.L1217:
	.loc 1 3572 8
	ld	a5,-48(s0)
	ld	a5,104(a5)
	.loc 1 3572 6
	sd	a5,-56(s0)
	.loc 1 3573 8
	ld	a5,-56(s0)
	.loc 1 3573 7
	beq	a5,zero,.L1218
	.loc 1 3574 13
	ld	a5,-48(s0)
	lw	a5,116(a5)
	.loc 1 3574 11
	beq	a5,zero,.L1219
	.loc 1 3574 27 discriminator 1
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 1 3574 24 discriminator 1
	ble	a5,zero,.L1219
	.loc 1 3575 19
	ld	a5,-56(s0)
	lw	a4,528(a5)
	.loc 1 3575 16
	addiw	a4,a4,-1
	sext.w	a4,a4
	.loc 1 3575 15
	sw	a4,528(a5)
	.loc 1 3575 19
	lw	a5,528(a5)
	.loc 1 3575 15
	bne	a5,zero,.L1219
	.loc 1 3576 18
	ld	a5,-56(s0)
	.loc 1 3576 29
	sw	zero,520(a5)
.L1219:
	.loc 1 3579 13
	ld	a5,-48(s0)
	lw	a5,120(a5)
	.loc 1 3579 11
	beq	a5,zero,.L1220
	.loc 1 3579 28 discriminator 1
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 1 3579 25 discriminator 1
	ble	a5,zero,.L1220
	.loc 1 3580 19
	ld	a5,-56(s0)
	lw	a4,532(a5)
	.loc 1 3580 16
	addiw	a4,a4,-1
	sext.w	a4,a4
	.loc 1 3580 15
	sw	a4,532(a5)
	.loc 1 3580 19
	lw	a5,532(a5)
	.loc 1 3580 15
	bne	a5,zero,.L1220
	.loc 1 3581 18
	ld	a5,-56(s0)
	.loc 1 3581 30
	sw	zero,524(a5)
.L1220:
	.loc 1 3584 13
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 3584 11
	ble	a5,zero,.L1221
	.loc 1 3585 14
	ld	a5,-56(s0)
	lw	a4,536(a5)
	.loc 1 3585 20
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,536(a5)
.L1221:
	.loc 1 3587 9
	ld	a5,-56(s0)
	ld	a4,-48(s0)
	mv	a1,a4
	mv	a0,a5
	call	neoc_pipe_linked_file_remove
	.loc 1 3588 13
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 1 3588 11
	bne	a5,zero,.L1218
	.loc 1 3589 13
	ld	a5,-56(s0)
	mv	a0,a5
	call	neoc_pipe_linked_file_clear_pipe_refs
	.loc 1 3590 13
	ld	a5,-56(s0)
	mv	a0,a5
	call	free_pipe
.L1218:
	.loc 1 3593 5
	ld	a5,-48(s0)
	mv	a0,a5
	call	free_file
	.loc 1 3594 16
	li	a5,0
.L1222:
	.loc 1 3595 1
	mv	a0,a5
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	ld	s1,56(sp)
	.cfi_restore 9
	addi	sp,sp,80
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE79:
	.size	fs_close, .-fs_close
	.align	1
	.globl	fs_exit
	.type	fs_exit, @function
fs_exit:
.LFB80:
	.loc 1 3598 1
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
	.loc 1 3600 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3601 10
	sw	zero,-20(s0)
	.loc 1 3601 5
	j	.L1224
.L1225:
	.loc 1 3602 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 1 3601 23 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L1224:
	.loc 1 3601 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,31
	ble	a4,a5,.L1225
	.loc 1 3604 1
	nop
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
.LFE80:
	.size	fs_exit, .-fs_exit
	.align	1
	.globl	fs_dup_table
	.type	fs_dup_table, @function
fs_dup_table:
.LFB81:
	.loc 1 3607 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	sd	a1,-48(s0)
	sd	a2,-56(s0)
	.loc 1 3609 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3610 10
	sw	zero,-20(s0)
	.loc 1 3610 5
	j	.L1227
.L1229:
	.loc 1 3611 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3611 11
	beq	a5,zero,.L1228
	.loc 1 3612 27
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 1 3612 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 1 3612 27
	ld	a4,0(a4)
	.loc 1 3612 22
	sd	a4,0(a5)
	.loc 1 3613 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3613 22
	lw	a4,100(a5)
	.loc 1 3613 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 1 3614 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 1 3614 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L1228:
	.loc 1 3610 23 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L1227:
	.loc 1 3610 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,31
	ble	a4,a5,.L1229
	.loc 1 3617 1
	nop
	nop
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE81:
	.size	fs_dup_table, .-fs_dup_table
	.align	1
	.globl	free_fs_table
	.type	free_fs_table, @function
free_fs_table:
.LFB82:
	.loc 1 3620 1
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
	.loc 1 3621 1
	nop
	ld	ra,24(sp)
	.cfi_restore 1
	ld	s0,16(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE82:
	.size	free_fs_table, .-free_fs_table
	.align	1
	.globl	fs_dup2
	.type	fs_dup2, @function
fs_dup2:
.LFB83:
	.loc 1 3624 1
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
	mv	a4,a1
	sw	a5,-36(s0)
	mv	a5,a4
	sw	a5,-40(s0)
	.loc 1 3626 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3627 8
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3627 7 discriminator 1
	sd	a5,-24(s0)
	.loc 1 3628 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L1241
	.loc 1 3628 15 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L1241
	.loc 1 3631 7
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L1242
	.loc 1 3631 15 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L1242
	.loc 1 3634 10
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3634 7
	beq	a5,zero,.L1243
	.loc 1 3637 7
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L1244
	.loc 1 3640 10
	ld	a4,-24(s0)
	lw	a5,-40(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3640 7
	beq	a5,zero,.L1239
	.loc 1 3641 9
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L1239:
	.loc 1 3643 17
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a4,a4,a5
	.loc 1 3643 7
	ld	a3,-24(s0)
	lw	a5,-40(s0)
	slli	a5,a5,3
	add	a5,a3,a5
	.loc 1 3643 17
	ld	a4,0(a4)
	.loc 1 3643 14
	sd	a4,0(a5)
	.loc 1 3644 7
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3644 14
	lw	a4,100(a5)
	.loc 1 3644 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L1231
.L1241:
	.loc 1 3629 17
	nop
	j	.L1231
.L1242:
	.loc 1 3632 17
	nop
	j	.L1231
.L1243:
	.loc 1 3635 17
	nop
	j	.L1231
.L1244:
	.loc 1 3638 17
	nop
.L1231:
	.loc 1 3645 1
	ld	ra,40(sp)
	.cfi_restore 1
	ld	s0,32(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE83:
	.size	fs_dup2, .-fs_dup2
	.align	1
	.globl	fs_fstat_fd
	.type	fs_fstat_fd, @function
fs_fstat_fd:
.LFB84:
	.loc 1 3648 1
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
	sd	a1,-48(s0)
	sw	a5,-36(s0)
	.loc 1 3651 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3652 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3653 7
	ld	a5,-48(s0)
	bne	a5,zero,.L1246
	.loc 1 3654 24
	li	a5,-1
	j	.L1252
.L1246:
	.loc 1 3656 8
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3656 7 discriminator 1
	sd	a5,-24(s0)
	.loc 1 3657 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L1248
	.loc 1 3657 12 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L1249
.L1248:
	.loc 1 3658 24
	li	a5,-1
	j	.L1252
.L1249:
	.loc 1 3660 9
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3660 6
	sd	a5,-32(s0)
	.loc 1 3661 8
	ld	a5,-32(s0)
	.loc 1 3661 7
	beq	a5,zero,.L1250
	.loc 1 3661 14 discriminator 1
	ld	a5,-32(s0)
	lw	a5,100(a5)
	.loc 1 3661 10 discriminator 1
	bne	a5,zero,.L1251
.L1250:
	.loc 1 3662 24
	li	a5,-1
	j	.L1252
.L1251:
	.loc 1 3664 5
	li	a2,32
	li	a1,0
	ld	a0,-48(s0)
	call	memset
	.loc 1 3665 15
	ld	a5,-32(s0)
	.loc 1 3665 20
	lhu	a4,8(a5)
	.loc 1 3665 13
	ld	a5,-48(s0)
	sh	a4,0(a5)
	.loc 1 3666 16
	ld	a5,-32(s0)
	.loc 1 3666 21
	lhu	a4,14(a5)
	.loc 1 3666 14
	ld	a5,-48(s0)
	sh	a4,2(a5)
	.loc 1 3667 15
	ld	a5,-32(s0)
	.loc 1 3667 20
	lw	a4,16(a5)
	.loc 1 3667 13
	ld	a5,-48(s0)
	sw	a4,4(a5)
	.loc 1 3668 15
	ld	a5,-32(s0)
	.loc 1 3668 20
	lw	a4,20(a5)
	.loc 1 3668 13
	ld	a5,-48(s0)
	sw	a4,12(a5)
	.loc 1 3669 14
	ld	a5,-32(s0)
	.loc 1 3669 19
	lhu	a4,24(a5)
	.loc 1 3669 12
	ld	a5,-48(s0)
	sh	a4,16(a5)
	.loc 1 3670 14
	ld	a5,-32(s0)
	.loc 1 3670 19
	lhu	a4,26(a5)
	.loc 1 3670 12
	ld	a5,-48(s0)
	sh	a4,18(a5)
	.loc 1 3671 16
	ld	a5,-32(s0)
	.loc 1 3671 21
	lw	a4,28(a5)
	.loc 1 3671 14
	ld	a5,-48(s0)
	sw	a4,20(a5)
	.loc 1 3672 16
	ld	a5,-32(s0)
	.loc 1 3672 21
	lw	a4,32(a5)
	.loc 1 3672 14
	ld	a5,-48(s0)
	sw	a4,24(a5)
	.loc 1 3673 16
	ld	a5,-32(s0)
	.loc 1 3673 21
	lw	a4,36(a5)
	.loc 1 3673 14
	ld	a5,-48(s0)
	sw	a4,28(a5)
	.loc 1 3674 16
	li	a5,0
.L1252:
	.loc 1 3675 1
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
.LFE84:
	.size	fs_fstat_fd, .-fs_fstat_fd
	.align	1
	.globl	fs_lseek
	.type	fs_lseek, @function
fs_lseek:
.LFB85:
	.loc 1 3678 1
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
	.loc 1 3683 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3684 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3685 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3686 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 1 3687 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L1254
	.loc 1 3687 12 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L1255
.L1254:
	.loc 1 3688 24
	li	a5,-1
	j	.L1264
.L1255:
	.loc 1 3690 8
	call	get_current_file_table
	mv	a5,a0
	.loc 1 3690 7 discriminator 1
	sd	a5,-24(s0)
	.loc 1 3691 9
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 1 3691 6
	sd	a5,-32(s0)
	.loc 1 3692 8
	ld	a5,-32(s0)
	.loc 1 3692 7
	bne	a5,zero,.L1257
	.loc 1 3693 24
	li	a5,-1
	j	.L1264
.L1257:
	.loc 1 3695 5
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L1258
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	bgt	a4,a5,.L1259
	lw	a5,-56(s0)
	sext.w	a5,a5
	beq	a5,zero,.L1260
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L1261
	j	.L1259
.L1260:
	.loc 1 3697 13
	sd	zero,-40(s0)
	.loc 1 3698 9
	j	.L1262
.L1261:
	.loc 1 3700 21
	ld	a5,-32(s0)
	lw	a5,96(a5)
	.loc 1 3700 14
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 3700 13
	sd	a5,-40(s0)
	.loc 1 3701 9
	j	.L1262
.L1258:
	.loc 1 3703 21
	ld	a5,-32(s0)
	.loc 1 3703 26
	lw	a5,16(a5)
	.loc 1 3703 14
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 1 3703 13
	sd	a5,-40(s0)
	.loc 1 3704 9
	j	.L1262
.L1259:
	.loc 1 3706 24
	li	a5,-1
	j	.L1264
.L1262:
	.loc 1 3708 16
	ld	a4,-40(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 1 3708 11
	sd	a5,-48(s0)
	.loc 1 3709 14
	ld	a5,-48(s0)
	.loc 1 3709 7
	bge	a5,zero,.L1263
	.loc 1 3710 24
	li	a5,-1
	j	.L1264
.L1263:
	.loc 1 3712 12
	ld	a4,-48(s0)
	.loc 1 3712 6
	ld	a5,-32(s0)
	.loc 1 3712 12
	sext.w	a4,a4
	.loc 1 3712 11
	sw	a4,96(a5)
	.loc 1 3713 23
	ld	a5,-32(s0)
	lw	a5,96(a5)
	.loc 1 3713 16
	slli	a5,a5,32
	srli	a5,a5,32
.L1264:
	.loc 1 3714 1
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
.LFE85:
	.size	fs_lseek, .-fs_lseek
	.section	.rodata
	.align	3
	.type	__func__.37, @object
	.size	__func__.37, 16
__func__.37:
	.string	"virtio_blk_read"
	.align	3
	.type	__func__.36, @object
	.size	__func__.36, 12
__func__.36:
	.string	"bcache_init"
	.align	3
	.type	__func__.35, @object
	.size	__func__.35, 13
__func__.35:
	.string	"bcache_stats"
	.align	3
	.type	__func__.34, @object
	.size	__func__.34, 13
__func__.34:
	.string	"bcache_evict"
	.align	3
	.type	__func__.33, @object
	.size	__func__.33, 11
__func__.33:
	.string	"bcache_get"
	.align	3
	.type	__func__.32, @object
	.size	__func__.32, 17
__func__.32:
	.string	"virtio_blk_write"
	.align	3
	.type	__func__.31, @object
	.size	__func__.31, 11
__func__.31:
	.string	"read_inode"
	.align	3
	.type	__func__.30, @object
	.size	__func__.30, 12
__func__.30:
	.string	"write_inode"
	.align	3
	.type	__func__.29, @object
	.size	__func__.29, 12
__func__.29:
	.string	"bitmap_test"
	.align	3
	.type	__func__.28, @object
	.size	__func__.28, 7
__func__.28:
	.string	"BBLOCK"
	.align	3
	.type	__func__.27, @object
	.size	__func__.27, 11
__func__.27:
	.string	"bitmap_set"
	.align	3
	.type	__func__.26, @object
	.size	__func__.26, 13
__func__.26:
	.string	"bitmap_clear"
	.align	3
	.type	__func__.25, @object
	.size	__func__.25, 18
__func__.25:
	.string	"free_inode_blocks"
	.align	3
	.type	__func__.24, @object
	.size	__func__.24, 17
__func__.24:
	.string	"alloc_data_block"
	.align	3
	.type	__func__.23, @object
	.size	__func__.23, 14
__func__.23:
	.string	"inode_blockno"
	.align	3
	.type	__func__.22, @object
	.size	__func__.22, 17
__func__.22:
	.string	"inode_bmap_alloc"
	.align	3
	.type	__func__.21, @object
	.size	__func__.21, 10
__func__.21:
	.string	"read_data"
	.align	3
	.type	__func__.20, @object
	.size	__func__.20, 11
__func__.20:
	.string	"dir_lookup"
	.align	3
	.type	__func__.19, @object
	.size	__func__.19, 16
__func__.19:
	.string	"path_lookup_lim"
	.align	3
	.type	__func__.18, @object
	.size	__func__.18, 12
__func__.18:
	.string	"fs_realpath"
	.align	3
	.type	__func__.17, @object
	.size	__func__.17, 11
__func__.17:
	.string	"dump_inode"
	.align	3
	.type	__func__.16, @object
	.size	__func__.16, 9
__func__.16:
	.string	"piperead"
	.align	3
	.type	__func__.15, @object
	.size	__func__.15, 10
__func__.15:
	.string	"pipewrite"
	.align	3
	.type	__func__.14, @object
	.size	__func__.14, 7
__func__.14:
	.string	"fs_now"
	.align	3
	.type	__func__.13, @object
	.size	__func__.13, 11
__func__.13:
	.string	"add_dirent"
	.align	3
	.type	__func__.12, @object
	.size	__func__.12, 14
__func__.12:
	.string	"remove_dirent"
	.align	3
	.type	__func__.11, @object
	.size	__func__.11, 21
__func__.11:
	.string	"build_abs_normalized"
	.align	3
	.type	__func__.10, @object
	.size	__func__.10, 9
__func__.10:
	.string	"fs_mkdir"
	.align	3
	.type	__func__.9, @object
	.size	__func__.9, 9
__func__.9:
	.string	"fs_rmdir"
	.align	3
	.type	__func__.8, @object
	.size	__func__.8, 10
__func__.8:
	.string	"fs_unlink"
	.align	3
	.type	__func__.7, @object
	.size	__func__.7, 17
__func__.7:
	.string	"write_data_inode"
	.align	3
	.type	__func__.6, @object
	.size	__func__.6, 11
__func__.6:
	.string	"fs_symlink"
	.align	3
	.type	__func__.5, @object
	.size	__func__.5, 10
__func__.5:
	.string	"fs_rename"
	.align	3
	.type	__func__.4, @object
	.size	__func__.4, 8
__func__.4:
	.string	"fs_link"
	.align	3
	.type	__func__.3, @object
	.size	__func__.3, 12
__func__.3:
	.string	"fs_readlink"
	.align	3
	.type	__func__.2, @object
	.size	__func__.2, 9
__func__.2:
	.string	"fs_lstat"
	.align	3
	.type	__func__.1, @object
	.size	__func__.1, 9
__func__.1:
	.string	"fs_open2"
	.align	3
	.type	__func__.0, @object
	.size	__func__.0, 9
__func__.0:
	.string	"fs_write"
	.weak	stackframe
	.text
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x6547
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x2c
	.4byte	.LASF502
	.byte	0x1d
	.byte	0x3
	.4byte	0x31647
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x1b
	.byte	0x8
	.byte	0x7
	.4byte	.LASF2
	.uleb128 0x1b
	.byte	0x1
	.byte	0x8
	.4byte	.LASF3
	.uleb128 0x15
	.4byte	0x3a
	.uleb128 0x1b
	.byte	0x2
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x2d
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x24
	.4byte	0x4d
	.uleb128 0x1b
	.byte	0x8
	.byte	0x5
	.4byte	.LASF5
	.uleb128 0x1b
	.byte	0x1
	.byte	0x8
	.4byte	.LASF6
	.uleb128 0x24
	.4byte	0x60
	.uleb128 0x15
	.4byte	0x60
	.uleb128 0x1b
	.byte	0x2
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x1b
	.byte	0x4
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x11
	.4byte	0x33
	.uleb128 0x1b
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x1b
	.byte	0x10
	.byte	0x4
	.4byte	.LASF10
	.uleb128 0x1f
	.4byte	.LASF18
	.byte	0x1c
	.byte	0x6d
	.4byte	0xf2
	.uleb128 0x10
	.4byte	.LASF11
	.byte	0x6f
	.byte	0x13
	.4byte	0x78
	.byte	0
	.uleb128 0x10
	.4byte	.LASF12
	.byte	0x70
	.byte	0x13
	.4byte	0x78
	.byte	0x4
	.uleb128 0x10
	.4byte	.LASF13
	.byte	0x71
	.byte	0x13
	.4byte	0x78
	.byte	0x8
	.uleb128 0x10
	.4byte	.LASF14
	.byte	0x72
	.byte	0x13
	.4byte	0x78
	.byte	0xc
	.uleb128 0x10
	.4byte	.LASF15
	.byte	0x73
	.byte	0x13
	.4byte	0x78
	.byte	0x10
	.uleb128 0x10
	.4byte	.LASF16
	.byte	0x74
	.byte	0x13
	.4byte	0x78
	.byte	0x14
	.uleb128 0x10
	.4byte	.LASF17
	.byte	0x75
	.byte	0x13
	.4byte	0x78
	.byte	0x18
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF19
	.byte	0x58
	.byte	0x78
	.4byte	0x18c
	.uleb128 0x10
	.4byte	.LASF20
	.byte	0x7a
	.byte	0x19
	.4byte	0x71
	.byte	0
	.uleb128 0x10
	.4byte	.LASF21
	.byte	0x7b
	.byte	0x19
	.4byte	0x71
	.byte	0x2
	.uleb128 0x10
	.4byte	.LASF22
	.byte	0x7c
	.byte	0x19
	.4byte	0x71
	.byte	0x4
	.uleb128 0x10
	.4byte	.LASF23
	.byte	0x7d
	.byte	0x19
	.4byte	0x71
	.byte	0x6
	.uleb128 0x10
	.4byte	.LASF11
	.byte	0x7e
	.byte	0x13
	.4byte	0x78
	.byte	0x8
	.uleb128 0x10
	.4byte	.LASF24
	.byte	0x7f
	.byte	0x13
	.4byte	0x78
	.byte	0xc
	.uleb128 0x20
	.string	"uid"
	.byte	0x80
	.4byte	0x71
	.byte	0x10
	.uleb128 0x20
	.string	"gid"
	.byte	0x81
	.4byte	0x71
	.byte	0x12
	.uleb128 0x10
	.4byte	.LASF25
	.byte	0x82
	.byte	0x13
	.4byte	0x78
	.byte	0x14
	.uleb128 0x10
	.4byte	.LASF26
	.byte	0x83
	.byte	0x13
	.4byte	0x78
	.byte	0x18
	.uleb128 0x10
	.4byte	.LASF27
	.byte	0x84
	.byte	0x13
	.4byte	0x78
	.byte	0x1c
	.uleb128 0x10
	.4byte	.LASF28
	.byte	0x85
	.byte	0x13
	.4byte	0x191
	.byte	0x20
	.byte	0
	.uleb128 0x15
	.4byte	0xf2
	.uleb128 0xe
	.4byte	0x78
	.4byte	0x1a1
	.uleb128 0x12
	.4byte	0x33
	.byte	0xd
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF29
	.byte	0x10
	.byte	0x88
	.4byte	0x1c5
	.uleb128 0x10
	.4byte	.LASF30
	.byte	0x8a
	.byte	0x19
	.4byte	0x71
	.byte	0
	.uleb128 0x10
	.4byte	.LASF31
	.byte	0x8b
	.byte	0xa
	.4byte	0x1c5
	.byte	0x2
	.byte	0
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x1d5
	.uleb128 0x12
	.4byte	0x33
	.byte	0xd
	.byte	0
	.uleb128 0x1f
	.4byte	.LASF32
	.byte	0x20
	.byte	0x8e
	.4byte	0x257
	.uleb128 0x10
	.4byte	.LASF20
	.byte	0x90
	.byte	0x19
	.4byte	0x71
	.byte	0
	.uleb128 0x10
	.4byte	.LASF23
	.byte	0x91
	.byte	0x19
	.4byte	0x71
	.byte	0x2
	.uleb128 0x10
	.4byte	.LASF11
	.byte	0x92
	.byte	0x13
	.4byte	0x78
	.byte	0x4
	.uleb128 0x10
	.4byte	.LASF30
	.byte	0x93
	.byte	0x13
	.4byte	0x78
	.byte	0x8
	.uleb128 0x10
	.4byte	.LASF24
	.byte	0x94
	.byte	0x13
	.4byte	0x78
	.byte	0xc
	.uleb128 0x20
	.string	"uid"
	.byte	0x95
	.4byte	0x71
	.byte	0x10
	.uleb128 0x20
	.string	"gid"
	.byte	0x96
	.4byte	0x71
	.byte	0x12
	.uleb128 0x10
	.4byte	.LASF25
	.byte	0x97
	.byte	0x13
	.4byte	0x78
	.byte	0x14
	.uleb128 0x10
	.4byte	.LASF26
	.byte	0x98
	.byte	0x13
	.4byte	0x78
	.byte	0x18
	.uleb128 0x10
	.4byte	.LASF27
	.byte	0x99
	.byte	0x13
	.4byte	0x78
	.byte	0x1c
	.byte	0
	.uleb128 0x11
	.4byte	0x25c
	.uleb128 0x11
	.4byte	0x3a
	.uleb128 0x11
	.4byte	0x41
	.uleb128 0x21
	.4byte	.LASF33
	.2byte	0x100
	.2byte	0x145
	.4byte	0x3f7
	.uleb128 0xa
	.string	"ra"
	.2byte	0x147
	.byte	0x19
	.4byte	0x33
	.byte	0
	.uleb128 0xa
	.string	"sp"
	.2byte	0x148
	.byte	0x19
	.4byte	0x33
	.byte	0x8
	.uleb128 0xa
	.string	"gp"
	.2byte	0x149
	.byte	0x19
	.4byte	0x33
	.byte	0x10
	.uleb128 0xa
	.string	"tp"
	.2byte	0x14a
	.byte	0x19
	.4byte	0x33
	.byte	0x18
	.uleb128 0xa
	.string	"t0"
	.2byte	0x14b
	.byte	0x19
	.4byte	0x33
	.byte	0x20
	.uleb128 0xa
	.string	"t1"
	.2byte	0x14c
	.byte	0x19
	.4byte	0x33
	.byte	0x28
	.uleb128 0xa
	.string	"t2"
	.2byte	0x14d
	.byte	0x19
	.4byte	0x33
	.byte	0x30
	.uleb128 0xa
	.string	"t3"
	.2byte	0x14e
	.byte	0x19
	.4byte	0x33
	.byte	0x38
	.uleb128 0xa
	.string	"t4"
	.2byte	0x14f
	.byte	0x19
	.4byte	0x33
	.byte	0x40
	.uleb128 0xa
	.string	"t5"
	.2byte	0x150
	.byte	0x19
	.4byte	0x33
	.byte	0x48
	.uleb128 0xa
	.string	"t6"
	.2byte	0x151
	.byte	0x19
	.4byte	0x33
	.byte	0x50
	.uleb128 0xa
	.string	"a0"
	.2byte	0x152
	.byte	0x19
	.4byte	0x33
	.byte	0x58
	.uleb128 0xa
	.string	"a1"
	.2byte	0x153
	.byte	0x19
	.4byte	0x33
	.byte	0x60
	.uleb128 0xa
	.string	"a2"
	.2byte	0x154
	.byte	0x19
	.4byte	0x33
	.byte	0x68
	.uleb128 0xa
	.string	"a3"
	.2byte	0x155
	.byte	0x19
	.4byte	0x33
	.byte	0x70
	.uleb128 0xa
	.string	"a4"
	.2byte	0x156
	.byte	0x19
	.4byte	0x33
	.byte	0x78
	.uleb128 0xa
	.string	"a5"
	.2byte	0x157
	.byte	0x19
	.4byte	0x33
	.byte	0x80
	.uleb128 0xa
	.string	"a6"
	.2byte	0x158
	.byte	0x19
	.4byte	0x33
	.byte	0x88
	.uleb128 0xa
	.string	"a7"
	.2byte	0x159
	.byte	0x19
	.4byte	0x33
	.byte	0x90
	.uleb128 0xa
	.string	"s0"
	.2byte	0x15a
	.byte	0x19
	.4byte	0x33
	.byte	0x98
	.uleb128 0xa
	.string	"s1"
	.2byte	0x15b
	.byte	0x19
	.4byte	0x33
	.byte	0xa0
	.uleb128 0xa
	.string	"s2"
	.2byte	0x15c
	.byte	0x19
	.4byte	0x33
	.byte	0xa8
	.uleb128 0xa
	.string	"s3"
	.2byte	0x15d
	.byte	0x19
	.4byte	0x33
	.byte	0xb0
	.uleb128 0xa
	.string	"s4"
	.2byte	0x15e
	.byte	0x19
	.4byte	0x33
	.byte	0xb8
	.uleb128 0xa
	.string	"s5"
	.2byte	0x15f
	.byte	0x19
	.4byte	0x33
	.byte	0xc0
	.uleb128 0xa
	.string	"s6"
	.2byte	0x160
	.byte	0x19
	.4byte	0x33
	.byte	0xc8
	.uleb128 0xa
	.string	"s7"
	.2byte	0x161
	.byte	0x19
	.4byte	0x33
	.byte	0xd0
	.uleb128 0xa
	.string	"s8"
	.2byte	0x162
	.byte	0x19
	.4byte	0x33
	.byte	0xd8
	.uleb128 0xa
	.string	"s9"
	.2byte	0x163
	.byte	0x19
	.4byte	0x33
	.byte	0xe0
	.uleb128 0xa
	.string	"s10"
	.2byte	0x164
	.byte	0x19
	.4byte	0x33
	.byte	0xe8
	.uleb128 0xa
	.string	"s11"
	.2byte	0x165
	.byte	0x19
	.4byte	0x33
	.byte	0xf0
	.uleb128 0xf
	.4byte	.LASF34
	.2byte	0x166
	.byte	0x19
	.4byte	0x33
	.byte	0xf8
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF35
	.byte	0x18
	.2byte	0x173
	.4byte	0x42b
	.uleb128 0xf
	.4byte	.LASF36
	.2byte	0x175
	.byte	0xc
	.4byte	0x257
	.byte	0
	.uleb128 0xf
	.4byte	.LASF37
	.2byte	0x176
	.byte	0x9
	.4byte	0x4d
	.byte	0x8
	.uleb128 0xf
	.4byte	.LASF38
	.2byte	0x177
	.byte	0xb
	.4byte	0x42b
	.byte	0x10
	.byte	0
	.uleb128 0x2e
	.byte	0x8
	.uleb128 0x21
	.4byte	.LASF39
	.2byte	0x430
	.2byte	0x17a
	.4byte	0x5c1
	.uleb128 0xf
	.4byte	.LASF40
	.2byte	0x17c
	.byte	0x17
	.4byte	0x266
	.byte	0
	.uleb128 0xc
	.4byte	.LASF41
	.2byte	0x17d
	.byte	0x17
	.4byte	0x266
	.2byte	0x100
	.uleb128 0xc
	.4byte	.LASF42
	.2byte	0x17e
	.byte	0x13
	.4byte	0x5c1
	.2byte	0x200
	.uleb128 0xc
	.4byte	.LASF43
	.2byte	0x17f
	.byte	0x9
	.4byte	0x4d
	.2byte	0x208
	.uleb128 0xc
	.4byte	.LASF44
	.2byte	0x180
	.byte	0xb
	.4byte	0x25c
	.2byte	0x210
	.uleb128 0xc
	.4byte	.LASF45
	.2byte	0x181
	.byte	0x19
	.4byte	0x33
	.2byte	0x218
	.uleb128 0xc
	.4byte	.LASF46
	.2byte	0x182
	.byte	0x19
	.4byte	0x33
	.2byte	0x220
	.uleb128 0x22
	.string	"sz"
	.2byte	0x183
	.byte	0x19
	.4byte	0x33
	.2byte	0x228
	.uleb128 0xc
	.4byte	.LASF47
	.2byte	0x184
	.byte	0x9
	.4byte	0x4d
	.2byte	0x230
	.uleb128 0xc
	.4byte	.LASF48
	.2byte	0x185
	.byte	0x1a
	.4byte	0x7f
	.2byte	0x238
	.uleb128 0xc
	.4byte	.LASF49
	.2byte	0x186
	.byte	0xb
	.4byte	0x25c
	.2byte	0x240
	.uleb128 0xc
	.4byte	.LASF50
	.2byte	0x187
	.byte	0x9
	.4byte	0x4d
	.2byte	0x248
	.uleb128 0xc
	.4byte	.LASF51
	.2byte	0x188
	.byte	0x9
	.4byte	0x4d
	.2byte	0x24c
	.uleb128 0xc
	.4byte	.LASF52
	.2byte	0x189
	.byte	0x13
	.4byte	0x5c6
	.2byte	0x250
	.uleb128 0xc
	.4byte	.LASF35
	.2byte	0x18a
	.byte	0x1d
	.4byte	0x684
	.2byte	0x350
	.uleb128 0xc
	.4byte	.LASF53
	.2byte	0x18b
	.byte	0x9
	.4byte	0x4d
	.2byte	0x358
	.uleb128 0xc
	.4byte	.LASF54
	.2byte	0x18c
	.byte	0xb
	.4byte	0x42b
	.2byte	0x360
	.uleb128 0xc
	.4byte	.LASF55
	.2byte	0x18d
	.byte	0x9
	.4byte	0x4d
	.2byte	0x368
	.uleb128 0xc
	.4byte	.LASF56
	.2byte	0x18e
	.byte	0x9
	.4byte	0x4d
	.2byte	0x36c
	.uleb128 0xc
	.4byte	.LASF57
	.2byte	0x18f
	.byte	0x13
	.4byte	0x5c1
	.2byte	0x370
	.uleb128 0x22
	.string	"cwd"
	.2byte	0x190
	.byte	0xa
	.4byte	0x68e
	.2byte	0x378
	.uleb128 0xc
	.4byte	.LASF58
	.2byte	0x191
	.byte	0x18
	.4byte	0x71
	.2byte	0x3f8
	.uleb128 0x22
	.string	"uid"
	.2byte	0x192
	.byte	0x19
	.4byte	0x71
	.2byte	0x3fa
	.uleb128 0x22
	.string	"gid"
	.2byte	0x193
	.byte	0x19
	.4byte	0x71
	.2byte	0x3fc
	.uleb128 0xc
	.4byte	.LASF59
	.2byte	0x194
	.byte	0x19
	.4byte	0x71
	.2byte	0x3fe
	.uleb128 0xc
	.4byte	.LASF60
	.2byte	0x195
	.byte	0x9
	.4byte	0x4d
	.2byte	0x400
	.uleb128 0xc
	.4byte	.LASF61
	.2byte	0x196
	.byte	0xb
	.4byte	0x42b
	.2byte	0x408
	.uleb128 0xc
	.4byte	.LASF62
	.2byte	0x197
	.byte	0xa
	.4byte	0x69e
	.2byte	0x410
	.byte	0
	.uleb128 0x11
	.4byte	0x42d
	.uleb128 0xe
	.4byte	0x5d6
	.4byte	0x5d6
	.uleb128 0x12
	.4byte	0x33
	.byte	0x1f
	.byte	0
	.uleb128 0x11
	.4byte	0x5db
	.uleb128 0x1e
	.4byte	.LASF63
	.byte	0x90
	.2byte	0x1b0
	.4byte	0x684
	.uleb128 0xf
	.4byte	.LASF64
	.2byte	0x1b2
	.byte	0x1b
	.4byte	0x756
	.byte	0
	.uleb128 0xf
	.4byte	.LASF30
	.2byte	0x1b3
	.byte	0x13
	.4byte	0x78
	.byte	0x4
	.uleb128 0xa
	.string	"din"
	.2byte	0x1b4
	.byte	0x14
	.4byte	0xf2
	.byte	0x8
	.uleb128 0xa
	.string	"off"
	.2byte	0x1b5
	.byte	0x13
	.4byte	0x78
	.byte	0x60
	.uleb128 0xf
	.4byte	.LASF65
	.2byte	0x1b6
	.byte	0x9
	.4byte	0x4d
	.byte	0x64
	.uleb128 0xf
	.4byte	.LASF66
	.2byte	0x1b7
	.byte	0x14
	.4byte	0x78e
	.byte	0x68
	.uleb128 0xf
	.4byte	.LASF67
	.2byte	0x1b8
	.byte	0x9
	.4byte	0x4d
	.byte	0x70
	.uleb128 0xf
	.4byte	.LASF68
	.2byte	0x1b9
	.byte	0x9
	.4byte	0x4d
	.byte	0x74
	.uleb128 0xf
	.4byte	.LASF69
	.2byte	0x1ba
	.byte	0x9
	.4byte	0x4d
	.byte	0x78
	.uleb128 0xf
	.4byte	.LASF70
	.2byte	0x1bb
	.byte	0x9
	.4byte	0x4d
	.byte	0x7c
	.uleb128 0xf
	.4byte	.LASF71
	.2byte	0x1bc
	.byte	0x9
	.4byte	0x4d
	.byte	0x80
	.uleb128 0xf
	.4byte	.LASF72
	.2byte	0x1bd
	.byte	0xb
	.4byte	0x42b
	.byte	0x88
	.byte	0
	.uleb128 0x11
	.4byte	0x689
	.uleb128 0x11
	.4byte	0x3f7
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x69e
	.uleb128 0x12
	.4byte	0x33
	.byte	0x7f
	.byte	0
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x6ae
	.uleb128 0x12
	.4byte	0x33
	.byte	0x1f
	.byte	0
	.uleb128 0x21
	.4byte	.LASF73
	.2byte	0x228
	.2byte	0x19a
	.4byte	0x747
	.uleb128 0xf
	.4byte	.LASF74
	.2byte	0x19c
	.byte	0xa
	.4byte	0x747
	.byte	0
	.uleb128 0xc
	.4byte	.LASF75
	.2byte	0x19d
	.byte	0x13
	.4byte	0x78
	.2byte	0x200
	.uleb128 0xc
	.4byte	.LASF76
	.2byte	0x19e
	.byte	0x13
	.4byte	0x78
	.2byte	0x204
	.uleb128 0xc
	.4byte	.LASF77
	.2byte	0x19f
	.byte	0x9
	.4byte	0x4d
	.2byte	0x208
	.uleb128 0xc
	.4byte	.LASF78
	.2byte	0x1a0
	.byte	0x9
	.4byte	0x4d
	.2byte	0x20c
	.uleb128 0xc
	.4byte	.LASF79
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x4d
	.2byte	0x210
	.uleb128 0xc
	.4byte	.LASF80
	.2byte	0x1a2
	.byte	0x9
	.4byte	0x4d
	.2byte	0x214
	.uleb128 0xc
	.4byte	.LASF65
	.2byte	0x1a3
	.byte	0x9
	.4byte	0x4d
	.2byte	0x218
	.uleb128 0xc
	.4byte	.LASF81
	.2byte	0x1a4
	.byte	0x9
	.4byte	0x4d
	.2byte	0x21c
	.uleb128 0xc
	.4byte	.LASF82
	.2byte	0x1a5
	.byte	0xb
	.4byte	0x42b
	.2byte	0x220
	.byte	0
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x756
	.uleb128 0x25
	.4byte	0x33
	.byte	0
	.uleb128 0x2f
	.4byte	.LASF503
	.byte	0x7
	.byte	0x4
	.4byte	0x78
	.byte	0x1
	.2byte	0x1a8
	.byte	0x7
	.4byte	0x78e
	.uleb128 0x1d
	.4byte	.LASF83
	.byte	0
	.uleb128 0x1d
	.4byte	.LASF84
	.byte	0x1
	.uleb128 0x1d
	.4byte	.LASF85
	.byte	0x2
	.uleb128 0x1d
	.4byte	.LASF86
	.byte	0x3
	.uleb128 0x1d
	.4byte	.LASF87
	.byte	0x4
	.uleb128 0x1d
	.4byte	.LASF88
	.byte	0x5
	.byte	0
	.uleb128 0x11
	.4byte	0x6ae
	.uleb128 0x1e
	.4byte	.LASF89
	.byte	0x10
	.2byte	0x1c0
	.4byte	0x7d4
	.uleb128 0xf
	.4byte	.LASF90
	.2byte	0x1c2
	.byte	0x19
	.4byte	0x33
	.byte	0
	.uleb128 0xa
	.string	"len"
	.2byte	0x1c3
	.byte	0x13
	.4byte	0x78
	.byte	0x8
	.uleb128 0xf
	.4byte	.LASF91
	.2byte	0x1c4
	.byte	0x19
	.4byte	0x71
	.byte	0xc
	.uleb128 0xf
	.4byte	.LASF57
	.2byte	0x1c5
	.byte	0x19
	.4byte	0x71
	.byte	0xe
	.byte	0
	.uleb128 0x26
	.4byte	.LASF94
	.byte	0x2
	.2byte	0x1c8
	.4byte	0x808
	.uleb128 0xf
	.4byte	.LASF91
	.2byte	0x1ca
	.byte	0x19
	.4byte	0x71
	.byte	0
	.uleb128 0xa
	.string	"idx"
	.2byte	0x1cb
	.byte	0x19
	.4byte	0x71
	.byte	0x2
	.uleb128 0xf
	.4byte	.LASF92
	.2byte	0x1cc
	.byte	0x19
	.4byte	0x808
	.byte	0x4
	.byte	0
	.uleb128 0xe
	.4byte	0x71
	.4byte	0x817
	.uleb128 0x27
	.4byte	0x33
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF93
	.byte	0x8
	.2byte	0x1cf
	.4byte	0x83d
	.uleb128 0xa
	.string	"id"
	.2byte	0x1d1
	.byte	0x13
	.4byte	0x78
	.byte	0
	.uleb128 0xa
	.string	"len"
	.2byte	0x1d2
	.byte	0x13
	.4byte	0x78
	.byte	0x4
	.byte	0
	.uleb128 0x26
	.4byte	.LASF95
	.byte	0x4
	.2byte	0x1d5
	.4byte	0x871
	.uleb128 0xf
	.4byte	.LASF91
	.2byte	0x1d7
	.byte	0x19
	.4byte	0x71
	.byte	0
	.uleb128 0xa
	.string	"idx"
	.2byte	0x1d8
	.byte	0x19
	.4byte	0x71
	.byte	0x2
	.uleb128 0xf
	.4byte	.LASF92
	.2byte	0x1d9
	.byte	0x1d
	.4byte	0x871
	.byte	0x4
	.byte	0
	.uleb128 0xe
	.4byte	0x817
	.4byte	0x880
	.uleb128 0x27
	.4byte	0x33
	.byte	0
	.uleb128 0x1e
	.4byte	.LASF96
	.byte	0x10
	.2byte	0x1dc
	.4byte	0x8b4
	.uleb128 0xf
	.4byte	.LASF20
	.2byte	0x1de
	.byte	0x13
	.4byte	0x78
	.byte	0
	.uleb128 0xf
	.4byte	.LASF97
	.2byte	0x1df
	.byte	0x13
	.4byte	0x78
	.byte	0x4
	.uleb128 0xf
	.4byte	.LASF98
	.2byte	0x1e0
	.byte	0x19
	.4byte	0x33
	.byte	0x8
	.byte	0
	.uleb128 0x21
	.4byte	.LASF99
	.2byte	0x210
	.2byte	0x1e3
	.4byte	0x906
	.uleb128 0xf
	.4byte	.LASF100
	.2byte	0x1e5
	.byte	0x13
	.4byte	0x78
	.byte	0
	.uleb128 0xf
	.4byte	.LASF74
	.2byte	0x1e6
	.byte	0x14
	.4byte	0x906
	.byte	0x4
	.uleb128 0xc
	.4byte	.LASF101
	.2byte	0x1e7
	.byte	0x13
	.4byte	0x78
	.2byte	0x204
	.uleb128 0xc
	.4byte	.LASF102
	.2byte	0x1e8
	.byte	0x13
	.4byte	0x78
	.2byte	0x208
	.uleb128 0xc
	.4byte	.LASF103
	.2byte	0x1e9
	.byte	0x13
	.4byte	0x78
	.2byte	0x20c
	.byte	0
	.uleb128 0xe
	.4byte	0x60
	.4byte	0x915
	.uleb128 0x25
	.4byte	0x33
	.byte	0
	.uleb128 0x1
	.4byte	.LASF104
	.2byte	0x1fe
	.byte	0x1c
	.4byte	0x33
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x4
	.string	"Q"
	.2byte	0x1ff
	.byte	0x16
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x1
	.4byte	.LASF105
	.2byte	0x200
	.byte	0x1c
	.4byte	0x955
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0x11
	.4byte	0x793
	.uleb128 0x1
	.4byte	.LASF106
	.2byte	0x201
	.byte	0x1d
	.4byte	0x970
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0x11
	.4byte	0x7d4
	.uleb128 0x1
	.4byte	.LASF65
	.2byte	0x202
	.byte	0x1c
	.4byte	0x98b
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0x11
	.4byte	0x83d
	.uleb128 0x1
	.4byte	.LASF107
	.2byte	0x203
	.byte	0x18
	.4byte	0x9a6
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0x11
	.4byte	0x60
	.uleb128 0x1
	.4byte	.LASF108
	.2byte	0x204
	.byte	0x1c
	.4byte	0x71
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x30
	.4byte	.LASF109
	.byte	0x1
	.2byte	0x205
	.byte	0x20
	.4byte	0x67
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xe
	.4byte	0x67
	.4byte	0x9e8
	.uleb128 0x25
	.4byte	0x33
	.byte	0
	.uleb128 0x24
	.4byte	0x9d9
	.uleb128 0x31
	.4byte	.LASF110
	.byte	0x1
	.2byte	0x206
	.byte	0x20
	.4byte	0x9e8
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x4
	.string	"req"
	.2byte	0x207
	.byte	0x1f
	.4byte	0x880
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0xe
	.4byte	0x8b4
	.4byte	0xa2c
	.uleb128 0x12
	.4byte	0x33
	.byte	0x1f
	.byte	0
	.uleb128 0x1
	.4byte	.LASF111
	.2byte	0x208
	.byte	0x1d
	.4byte	0xa1c
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache
	.uleb128 0x1
	.4byte	.LASF112
	.2byte	0x209
	.byte	0x16
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_time
	.uleb128 0x1
	.4byte	.LASF113
	.2byte	0x20a
	.byte	0x16
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_hits
	.uleb128 0x1
	.4byte	.LASF114
	.2byte	0x20b
	.byte	0x16
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_misses
	.uleb128 0x4
	.string	"sb"
	.2byte	0x20c
	.byte	0x1b
	.4byte	0x92
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0x1
	.4byte	.LASF115
	.2byte	0x20d
	.byte	0x17
	.4byte	0x906
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0x28
	.4byte	.LASF116
	.2byte	0x20e
	.byte	0x16
	.4byte	0x78
	.uleb128 0x28
	.4byte	.LASF117
	.2byte	0x20f
	.byte	0xc
	.4byte	0x4d
	.uleb128 0x19
	.4byte	.LASF118
	.2byte	0x265
	.byte	0x6
	.4byte	0xad9
	.uleb128 0x2
	.4byte	0x78e
	.byte	0
	.uleb128 0x19
	.4byte	.LASF119
	.2byte	0x264
	.byte	0x6
	.4byte	0xaf0
	.uleb128 0x2
	.4byte	0x78e
	.uleb128 0x2
	.4byte	0x5d6
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF134
	.2byte	0x284
	.byte	0x7
	.4byte	0xb06
	.4byte	0xb06
	.uleb128 0x2
	.4byte	0x78
	.byte	0
	.uleb128 0x1b
	.byte	0x1
	.byte	0x2
	.4byte	.LASF120
	.uleb128 0x5
	.4byte	.LASF130
	.2byte	0x30a
	.byte	0x6
	.uleb128 0x19
	.4byte	.LASF121
	.2byte	0x309
	.byte	0x6
	.4byte	0xb27
	.uleb128 0x2
	.4byte	0x25c
	.byte	0
	.uleb128 0x19
	.4byte	.LASF122
	.2byte	0x263
	.byte	0x6
	.4byte	0xb3e
	.uleb128 0x2
	.4byte	0x78e
	.uleb128 0x2
	.4byte	0x5d6
	.byte	0
	.uleb128 0x23
	.4byte	.LASF125
	.2byte	0x279
	.byte	0x10
	.4byte	0xb4a
	.uleb128 0x11
	.4byte	0x5d6
	.uleb128 0x19
	.4byte	.LASF123
	.2byte	0x275
	.byte	0x6
	.4byte	0xb61
	.uleb128 0x2
	.4byte	0x5d6
	.byte	0
	.uleb128 0x19
	.4byte	.LASF124
	.2byte	0x25f
	.byte	0x6
	.4byte	0xb73
	.uleb128 0x2
	.4byte	0x5d6
	.byte	0
	.uleb128 0x23
	.4byte	.LASF126
	.2byte	0x274
	.byte	0xf
	.4byte	0x5d6
	.uleb128 0x19
	.4byte	.LASF127
	.2byte	0x273
	.byte	0x6
	.4byte	0xb91
	.uleb128 0x2
	.4byte	0x78e
	.byte	0
	.uleb128 0x19
	.4byte	.LASF128
	.2byte	0x262
	.byte	0x6
	.4byte	0xba3
	.uleb128 0x2
	.4byte	0x78e
	.byte	0
	.uleb128 0x23
	.4byte	.LASF129
	.2byte	0x272
	.byte	0x10
	.4byte	0x78e
	.uleb128 0x5
	.4byte	.LASF131
	.2byte	0x271
	.byte	0x6
	.uleb128 0x19
	.4byte	.LASF132
	.2byte	0x261
	.byte	0x6
	.4byte	0xbce
	.uleb128 0x2
	.4byte	0x5d6
	.uleb128 0x2
	.4byte	0x5c1
	.byte	0
	.uleb128 0x19
	.4byte	.LASF133
	.2byte	0x260
	.byte	0x6
	.4byte	0xbe5
	.uleb128 0x2
	.4byte	0x5d6
	.uleb128 0x2
	.4byte	0x5c1
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF135
	.2byte	0x2d8
	.byte	0x7
	.4byte	0x25c
	.4byte	0xc05
	.uleb128 0x2
	.4byte	0x25c
	.uleb128 0x2
	.4byte	0x261
	.uleb128 0x2
	.4byte	0x33
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF136
	.2byte	0x2d6
	.byte	0x5
	.4byte	0x4d
	.4byte	0xc1b
	.uleb128 0x2
	.4byte	0x261
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF137
	.2byte	0x2da
	.byte	0x7
	.4byte	0x25c
	.4byte	0xc36
	.uleb128 0x2
	.4byte	0x25c
	.uleb128 0x2
	.4byte	0x261
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF138
	.2byte	0x2d9
	.byte	0x7
	.4byte	0x25c
	.4byte	0xc56
	.uleb128 0x2
	.4byte	0x25c
	.uleb128 0x2
	.4byte	0x261
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF139
	.2byte	0x2dc
	.byte	0x5
	.4byte	0x4d
	.4byte	0xc71
	.uleb128 0x2
	.4byte	0x261
	.uleb128 0x2
	.4byte	0x261
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF140
	.2byte	0x2dd
	.byte	0x5
	.4byte	0x4d
	.4byte	0xc91
	.uleb128 0x2
	.4byte	0x261
	.uleb128 0x2
	.4byte	0x261
	.uleb128 0x2
	.4byte	0x78
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF141
	.2byte	0x270
	.byte	0x5
	.4byte	0x4d
	.4byte	0xcac
	.uleb128 0x2
	.4byte	0x5c1
	.uleb128 0x2
	.4byte	0x71
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF142
	.2byte	0x27a
	.byte	0xf
	.4byte	0x5c1
	.4byte	0xcc2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF143
	.2byte	0x2d7
	.byte	0x5
	.4byte	0x4d
	.4byte	0xcd9
	.uleb128 0x2
	.4byte	0x261
	.uleb128 0x32
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF144
	.2byte	0x2d5
	.byte	0x7
	.4byte	0x42b
	.4byte	0xcf9
	.uleb128 0x2
	.4byte	0x42b
	.uleb128 0x2
	.4byte	0xcf9
	.uleb128 0x2
	.4byte	0x78
	.byte	0
	.uleb128 0x11
	.4byte	0xcfe
	.uleb128 0x33
	.uleb128 0x19
	.4byte	.LASF145
	.2byte	0xda9
	.byte	0x9c
	.4byte	0xd11
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xda9
	.byte	0x68
	.uleb128 0x23
	.4byte	.LASF147
	.2byte	0x2d1
	.byte	0x7
	.4byte	0x42b
	.uleb128 0x19
	.4byte	.LASF148
	.2byte	0x2db
	.byte	0x6
	.4byte	0xd37
	.uleb128 0x2
	.4byte	0x261
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF149
	.2byte	0x2d4
	.byte	0x7
	.4byte	0x42b
	.4byte	0xd57
	.uleb128 0x2
	.4byte	0x42b
	.uleb128 0x2
	.4byte	0x4d
	.uleb128 0x2
	.4byte	0x78
	.byte	0
	.uleb128 0xd
	.4byte	.LASF154
	.2byte	0xe5d
	.byte	0x6
	.4byte	0x59
	.8byte	.LFB85
	.8byte	.LFE85-.LFB85
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xddf
	.uleb128 0x9
	.string	"fd"
	.2byte	0xe5d
	.byte	0x13
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x8
	.4byte	.LASF150
	.2byte	0xe5d
	.byte	0x1c
	.4byte	0x59
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x8
	.4byte	.LASF151
	.2byte	0xe5d
	.byte	0x28
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"ft"
	.2byte	0xe5f
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"f"
	.2byte	0xe60
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF152
	.2byte	0xe61
	.byte	0xa
	.4byte	0x59
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF153
	.2byte	0xe62
	.byte	0xa
	.4byte	0x59
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xd
	.4byte	.LASF155
	.2byte	0xe3f
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB84
	.8byte	.LFE84-.LFB84
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe39
	.uleb128 0x9
	.string	"fd"
	.2byte	0xe3f
	.byte	0x15
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x9
	.string	"st"
	.2byte	0xe3f
	.byte	0x27
	.4byte	0xe39
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"ft"
	.2byte	0xe41
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"f"
	.2byte	0xe42
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x11
	.4byte	0x1d5
	.uleb128 0x16
	.4byte	.LASF158
	.2byte	0xe27
	.8byte	.LFB83
	.8byte	.LFE83-.LFB83
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe88
	.uleb128 0x8
	.4byte	.LASF156
	.2byte	0xe27
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x8
	.4byte	.LASF157
	.2byte	0xe27
	.byte	0x1d
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"ft"
	.2byte	0xe29
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x34
	.4byte	.LASF159
	.byte	0x1
	.2byte	0xe23
	.byte	0x6
	.8byte	.LFB82
	.8byte	.LFE82-.LFB82
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xeb7
	.uleb128 0x8
	.4byte	.LASF52
	.2byte	0xe23
	.byte	0x23
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x16
	.4byte	.LASF160
	.2byte	0xe16
	.8byte	.LFB81
	.8byte	.LFE81-.LFB81
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf0f
	.uleb128 0x8
	.4byte	.LASF161
	.2byte	0xe16
	.byte	0x21
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x8
	.4byte	.LASF162
	.2byte	0xe16
	.byte	0x39
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x8
	.4byte	.LASF163
	.2byte	0xe16
	.byte	0x52
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"i"
	.2byte	0xe18
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x16
	.4byte	.LASF164
	.2byte	0xe0d
	.8byte	.LFB80
	.8byte	.LFE80-.LFB80
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf49
	.uleb128 0x8
	.4byte	.LASF52
	.2byte	0xe0d
	.byte	0x1d
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"i"
	.2byte	0xe0f
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xd
	.4byte	.LASF165
	.2byte	0xdda
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB79
	.8byte	.LFE79-.LFB79
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfb3
	.uleb128 0x9
	.string	"fd"
	.2byte	0xdda
	.byte	0x13
	.4byte	0x59
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.4byte	.LASF166
	.2byte	0xdda
	.byte	0x1b
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x4
	.string	"ft"
	.2byte	0xddc
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"f"
	.2byte	0xddd
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"p"
	.2byte	0xdde
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0xd
	.4byte	.LASF167
	.2byte	0xdc6
	.byte	0x6
	.4byte	0x4d
	.8byte	.LFB78
	.8byte	.LFE78-.LFB78
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x100f
	.uleb128 0x9
	.string	"fd"
	.2byte	0xdc6
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0xdc8
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"idx"
	.2byte	0xdc9
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"f"
	.2byte	0xdca
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF168
	.2byte	0xd79
	.byte	0x6
	.4byte	0x4d
	.8byte	.LFB77
	.8byte	.LFE77-.LFB77
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11db
	.uleb128 0x9
	.string	"fd"
	.2byte	0xd79
	.byte	0x13
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -628
	.uleb128 0x9
	.string	"buf"
	.2byte	0xd79
	.byte	0x23
	.4byte	0xcf9
	.uleb128 0x3
	.byte	0x91
	.sleb128 -640
	.uleb128 0x8
	.4byte	.LASF169
	.2byte	0xd79
	.byte	0x37
	.4byte	0x33
	.uleb128 0x3
	.byte	0x91
	.sleb128 -648
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0xd7b
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"f"
	.2byte	0xd7c
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF170
	.2byte	0xd7d
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF171
	.2byte	0xd7e
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.string	"off"
	.2byte	0xd7f
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1
	.4byte	.LASF172
	.2byte	0xd80
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF173
	.2byte	0xd81
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.4byte	.LASF174
	.2byte	0xd82
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.4byte	.LASF175
	.2byte	0xd83
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1
	.4byte	.LASF176
	.2byte	0xd84
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.4byte	.LASF177
	.2byte	0xd85
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x4
	.string	"src"
	.2byte	0xda0
	.byte	0x1b
	.4byte	0x11db
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x11f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.0
	.uleb128 0x35
	.4byte	.LLRL0
	.uleb128 0x1
	.4byte	.LASF178
	.2byte	0xdb2
	.byte	0x18
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x7
	.8byte	.LBB292
	.8byte	.LBE292-.LBB292
	.4byte	0x1190
	.uleb128 0x1
	.4byte	.LASF179
	.2byte	0xda8
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.8byte	.LBB293
	.8byte	.LBE293-.LBB293
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xda8
	.byte	0x68
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xda8
	.byte	0x9c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB294
	.8byte	.LBE294-.LBB294
	.uleb128 0x1
	.4byte	.LASF180
	.2byte	0xda9
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB295
	.8byte	.LBE295-.LBB295
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xda9
	.byte	0x68
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xda9
	.byte	0x9c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x11
	.4byte	0x6c
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x11f0
	.uleb128 0x12
	.4byte	0x33
	.byte	0x8
	.byte	0
	.uleb128 0x15
	.4byte	0x11e0
	.uleb128 0xd
	.4byte	.LASF181
	.2byte	0xd58
	.byte	0x6
	.4byte	0x4d
	.8byte	.LFB76
	.8byte	.LFE76-.LFB76
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1290
	.uleb128 0x9
	.string	"fd"
	.2byte	0xd58
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x9
	.string	"buf"
	.2byte	0xd58
	.byte	0x1c
	.4byte	0x42b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x8
	.4byte	.LASF169
	.2byte	0xd58
	.byte	0x30
	.4byte	0x33
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0xd5a
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"idx"
	.2byte	0xd5b
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.string	"f"
	.2byte	0xd5c
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF182
	.2byte	0xd5d
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF183
	.2byte	0xd5e
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.uleb128 0xd
	.4byte	.LASF184
	.2byte	0xcb1
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB75
	.8byte	.LFE75-.LFB75
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14d5
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xcb1
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0x8
	.4byte	.LASF91
	.2byte	0xcb1
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -476
	.uleb128 0x8
	.4byte	.LASF24
	.2byte	0xcb1
	.byte	0x2f
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0xcb3
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"p"
	.2byte	0xcb4
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.string	"i"
	.2byte	0xcb5
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xcb6
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.string	"di"
	.2byte	0xcb7
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.4byte	.LASF186
	.2byte	0xcb8
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xcb9
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x1
	.4byte	.LASF187
	.2byte	0xcba
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -172
	.uleb128 0x1
	.4byte	.LASF188
	.2byte	0xcbb
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x4
	.string	"um"
	.2byte	0xcbc
	.byte	0x18
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -178
	.uleb128 0x1
	.4byte	.LASF189
	.2byte	0xcbd
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x4
	.string	"ii"
	.2byte	0xcbe
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -188
	.uleb128 0x4
	.string	"gid"
	.2byte	0xcbf
	.byte	0x19
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -190
	.uleb128 0x1
	.4byte	.LASF190
	.2byte	0xcc0
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.4byte	.LASF191
	.2byte	0xcc1
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -284
	.uleb128 0x1
	.4byte	.LASF192
	.2byte	0xcc2
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x4
	.string	"now"
	.2byte	0xcc3
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -292
	.uleb128 0x1
	.4byte	.LASF193
	.2byte	0xcd6
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -424
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x11f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.1
	.uleb128 0x3
	.8byte	.LBB286
	.8byte	.LBE286-.LBB286
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xcf3
	.byte	0x12
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -440
	.uleb128 0x1
	.4byte	.LASF196
	.2byte	0xd05
	.byte	0x12
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x7
	.8byte	.LBB287
	.8byte	.LBE287-.LBB287
	.4byte	0x148a
	.uleb128 0x1
	.4byte	.LASF197
	.2byte	0xcf6
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB288
	.8byte	.LBE288-.LBB288
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xcf6
	.byte	0xa6
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xcf6
	.byte	0xda
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB289
	.8byte	.LBE289-.LBB289
	.uleb128 0x1
	.4byte	.LASF198
	.2byte	0xd08
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB290
	.8byte	.LBE290-.LBB290
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xd08
	.byte	0xa4
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xd08
	.byte	0xd8
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x14e5
	.uleb128 0x12
	.4byte	0x33
	.byte	0xe
	.byte	0
	.uleb128 0xd
	.4byte	.LASF199
	.2byte	0xcac
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB74
	.8byte	.LFE74-.LFB74
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1517
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xcac
	.byte	0x19
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF200
	.2byte	0xc94
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB73
	.8byte	.LFE73-.LFB73
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x15a8
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xc94
	.byte	0x1b
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x8
	.4byte	.LASF25
	.2byte	0xc94
	.byte	0x2f
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x8
	.4byte	.LASF26
	.2byte	0xc94
	.byte	0x46
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xc96
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.string	"di"
	.2byte	0xc97
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"now"
	.2byte	0xc98
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x4
	.string	"abs"
	.2byte	0xc9c
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.byte	0
	.uleb128 0xd
	.4byte	.LASF201
	.2byte	0xc7c
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1629
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xc7c
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x9
	.string	"uid"
	.2byte	0xc7c
	.byte	0x34
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x9
	.string	"gid"
	.2byte	0xc7c
	.byte	0x4f
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xc7e
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.string	"di"
	.2byte	0xc7f
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"abs"
	.2byte	0xc82
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0xd
	.4byte	.LASF202
	.2byte	0xc62
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16a8
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xc62
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x8
	.4byte	.LASF24
	.2byte	0xc62
	.byte	0x2e
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xc64
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.string	"di"
	.2byte	0xc65
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"p"
	.2byte	0xc66
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x4
	.string	"abs"
	.2byte	0xc6a
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.byte	0
	.uleb128 0xd
	.4byte	.LASF203
	.2byte	0xc32
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x17b1
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xc32
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x9
	.string	"st"
	.2byte	0xc32
	.byte	0x2e
	.4byte	0xe39
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xc34
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"i"
	.2byte	0xc35
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.string	"pdi"
	.2byte	0xc36
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xc37
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x4
	.string	"di"
	.2byte	0xc38
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x4
	.string	"abs"
	.2byte	0xc41
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -344
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xc44
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x11f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.2
	.uleb128 0x3
	.8byte	.LBB284
	.8byte	.LBE284-.LBB284
	.uleb128 0x1
	.4byte	.LASF204
	.2byte	0xc47
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB285
	.8byte	.LBE285-.LBB285
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xc47
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xc47
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF205
	.2byte	0xbfd
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x18d9
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xbfd
	.byte	0x1d
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x9
	.string	"buf"
	.2byte	0xbfd
	.byte	0x29
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x8
	.4byte	.LASF206
	.2byte	0xbfd
	.byte	0x32
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xbff
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"i"
	.2byte	0xc00
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.string	"pdi"
	.2byte	0xc01
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xc02
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x4
	.string	"di"
	.2byte	0xc03
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x4
	.string	"n"
	.2byte	0xc04
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -220
	.uleb128 0x4
	.string	"abs"
	.2byte	0xc0e
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xc11
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x18e9
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.3
	.uleb128 0x3
	.8byte	.LBB282
	.8byte	.LBE282-.LBB282
	.uleb128 0x1
	.4byte	.LASF207
	.2byte	0xc14
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB283
	.8byte	.LBE283-.LBB283
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xc14
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xc14
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x18e9
	.uleb128 0x12
	.4byte	0x33
	.byte	0xb
	.byte	0
	.uleb128 0x15
	.4byte	0x18d9
	.uleb128 0xd
	.4byte	.LASF208
	.2byte	0xbdf
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x195e
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xbdf
	.byte	0x19
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x9
	.string	"st"
	.2byte	0xbdf
	.byte	0x2d
	.4byte	0xe39
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xbe1
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x4
	.string	"di"
	.2byte	0xbe2
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"abs"
	.2byte	0xbe8
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0xd
	.4byte	.LASF209
	.2byte	0xba8
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1ac6
	.uleb128 0x8
	.4byte	.LASF210
	.2byte	0xba8
	.byte	0x19
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x8
	.4byte	.LASF211
	.2byte	0xba8
	.byte	0x2e
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -512
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xbaa
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"di"
	.2byte	0xbab
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xbac
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.uleb128 0x4
	.string	"i"
	.2byte	0xbad
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x4
	.string	"pdi"
	.2byte	0xbae
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x1
	.4byte	.LASF212
	.2byte	0xbb4
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.uleb128 0x1
	.4byte	.LASF213
	.2byte	0xbb4
	.byte	0x17
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xbc7
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ad6
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.4
	.uleb128 0x7
	.8byte	.LBB278
	.8byte	.LBE278-.LBB278
	.4byte	0x1a7c
	.uleb128 0x1
	.4byte	.LASF214
	.2byte	0xbca
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB279
	.8byte	.LBE279-.LBB279
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xbca
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xbca
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB280
	.8byte	.LBE280-.LBB280
	.uleb128 0x1
	.4byte	.LASF215
	.2byte	0xbcf
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB281
	.8byte	.LBE281-.LBB281
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xbcf
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xbcf
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x1ad6
	.uleb128 0x12
	.4byte	0x33
	.byte	0x7
	.byte	0
	.uleb128 0x15
	.4byte	0x1ac6
	.uleb128 0xd
	.4byte	.LASF216
	.2byte	0xb56
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d2d
	.uleb128 0x8
	.4byte	.LASF210
	.2byte	0xb56
	.byte	0x1b
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -728
	.uleb128 0x8
	.4byte	.LASF211
	.2byte	0xb56
	.byte	0x30
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -736
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xb58
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"i"
	.2byte	0xb59
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"pdi"
	.2byte	0xb5a
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x4
	.string	"opd"
	.2byte	0xb5b
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.4byte	.LASF217
	.2byte	0xb5c
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -320
	.uleb128 0x1
	.4byte	.LASF218
	.2byte	0xb5d
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x4
	.string	"pr"
	.2byte	0xb5e
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -416
	.uleb128 0x1
	.4byte	.LASF212
	.2byte	0xb66
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.uleb128 0x1
	.4byte	.LASF213
	.2byte	0xb66
	.byte	0x17
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x4
	.string	"op"
	.2byte	0xb78
	.byte	0x14
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -676
	.uleb128 0x4
	.string	"np"
	.2byte	0xb78
	.byte	0x1b
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.uleb128 0x1
	.4byte	.LASF219
	.2byte	0xb7b
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x1
	.4byte	.LASF220
	.2byte	0xb7d
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1d3d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.5
	.uleb128 0x7
	.8byte	.LBB270
	.8byte	.LBE270-.LBB270
	.4byte	0x1c46
	.uleb128 0x1
	.4byte	.LASF221
	.2byte	0xb80
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB271
	.8byte	.LBE271-.LBB271
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xb80
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xb80
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB272
	.8byte	.LBE272-.LBB272
	.4byte	0x1c93
	.uleb128 0x1
	.4byte	.LASF222
	.2byte	0xb81
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB273
	.8byte	.LBE273-.LBB273
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xb81
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xb81
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB274
	.8byte	.LBE274-.LBB274
	.4byte	0x1ce0
	.uleb128 0x1
	.4byte	.LASF223
	.2byte	0xb89
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB275
	.8byte	.LBE275-.LBB275
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xb89
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xb89
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB276
	.8byte	.LBE276-.LBB276
	.uleb128 0x17
	.4byte	.LASF224
	.2byte	0xb89
	.2byte	0x18a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB277
	.8byte	.LBE277-.LBB277
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0xb89
	.2byte	0x20f
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0xb89
	.2byte	0x243
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x1d3d
	.uleb128 0x12
	.4byte	0x33
	.byte	0x9
	.byte	0
	.uleb128 0x15
	.4byte	0x1d2d
	.uleb128 0xd
	.4byte	.LASF225
	.2byte	0xb08
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1ed8
	.uleb128 0x8
	.4byte	.LASF226
	.2byte	0xb08
	.byte	0x1c
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.uleb128 0x8
	.4byte	.LASF227
	.2byte	0xb08
	.byte	0x30
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -720
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xb0a
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"i"
	.2byte	0xb0b
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"pdi"
	.2byte	0xb0c
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x4
	.string	"di"
	.2byte	0xb0d
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xb0e
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -220
	.uleb128 0x1
	.4byte	.LASF228
	.2byte	0xb0f
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x4
	.string	"ni"
	.2byte	0xb10
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x1
	.4byte	.LASF229
	.2byte	0xb11
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -316
	.uleb128 0x4
	.string	"abs"
	.2byte	0xb1a
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xb23
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.6
	.uleb128 0x4
	.string	"buf"
	.2byte	0xb4b
	.byte	0x14
	.4byte	0x1eed
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x7
	.8byte	.LBB266
	.8byte	.LBE266-.LBB266
	.4byte	0x1e8e
	.uleb128 0x1
	.4byte	.LASF230
	.2byte	0xb26
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB267
	.8byte	.LBE267-.LBB267
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xb26
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xb26
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB268
	.8byte	.LBE268-.LBB268
	.uleb128 0x1
	.4byte	.LASF231
	.2byte	0xb2b
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB269
	.8byte	.LBE269-.LBB269
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xb2b
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xb2b
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x1ee8
	.uleb128 0x12
	.4byte	0x33
	.byte	0xa
	.byte	0
	.uleb128 0x15
	.4byte	0x1ed8
	.uleb128 0xe
	.4byte	0x60
	.4byte	0x1efd
	.uleb128 0x12
	.4byte	0x33
	.byte	0xef
	.byte	0
	.uleb128 0x18
	.4byte	.LASF276
	.2byte	0xadf
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x206f
	.uleb128 0x8
	.4byte	.LASF30
	.2byte	0xadf
	.byte	0x2b
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x9
	.string	"ip"
	.2byte	0xadf
	.byte	0x43
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x9
	.string	"src"
	.2byte	0xadf
	.byte	0x5f
	.4byte	0x11db
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x8
	.4byte	.LASF11
	.2byte	0xadf
	.byte	0x74
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF171
	.2byte	0xae1
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"off"
	.2byte	0xae2
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF173
	.2byte	0xae3
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF174
	.2byte	0xae4
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF175
	.2byte	0xae5
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF176
	.2byte	0xae6
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"s"
	.2byte	0xaef
	.byte	0x1b
	.4byte	0x11db
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2084
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.7
	.uleb128 0x7
	.8byte	.LBB262
	.8byte	.LBE262-.LBB262
	.4byte	0x2025
	.uleb128 0x1
	.4byte	.LASF232
	.2byte	0xaf1
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x3
	.8byte	.LBB263
	.8byte	.LBE263-.LBB263
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xaf1
	.byte	0x68
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xaf1
	.byte	0x9c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB264
	.8byte	.LBE264-.LBB264
	.uleb128 0x1
	.4byte	.LASF233
	.2byte	0xaf2
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB265
	.8byte	.LBE265-.LBB265
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xaf2
	.byte	0x68
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xaf2
	.byte	0x9c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x11
	.4byte	0xf2
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x2084
	.uleb128 0x12
	.4byte	0x33
	.byte	0x10
	.byte	0
	.uleb128 0x15
	.4byte	0x2074
	.uleb128 0xd
	.4byte	.LASF234
	.2byte	0xaa0
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x21b3
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xaa0
	.byte	0x1b
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xaa2
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"di"
	.2byte	0xaa3
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xaa4
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x4
	.string	"i"
	.2byte	0xaa5
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.4byte	.LASF235
	.2byte	0xaa6
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.4byte	.LASF236
	.2byte	0xaa7
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x4
	.string	"pr"
	.2byte	0xaa8
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x1
	.4byte	.LASF237
	.2byte	0xaa9
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -400
	.uleb128 0x4
	.string	"abs"
	.2byte	0xab2
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -528
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xac3
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1d3d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.8
	.uleb128 0x3
	.8byte	.LBB260
	.8byte	.LBE260-.LBB260
	.uleb128 0x1
	.4byte	.LASF238
	.2byte	0xac6
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB261
	.8byte	.LBE261-.LBB261
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xac6
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xac6
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF239
	.2byte	0xa4f
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x230d
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xa4f
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xa51
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"di"
	.2byte	0xa52
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x4
	.string	"off"
	.2byte	0xa53
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x1
	.4byte	.LASF240
	.2byte	0xa54
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x4
	.string	"de"
	.2byte	0xa55
	.byte	0x15
	.4byte	0x230d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.4byte	.LASF241
	.2byte	0xa56
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x4
	.string	"i"
	.2byte	0xa57
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xa58
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x1
	.4byte	.LASF242
	.2byte	0xa59
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF243
	.2byte	0xa5a
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.4byte	.LASF237
	.2byte	0xa5b
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -328
	.uleb128 0x4
	.string	"abs"
	.2byte	0xa67
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xa8b
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x11f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.9
	.uleb128 0x3
	.8byte	.LBB258
	.8byte	.LBE258-.LBB258
	.uleb128 0x1
	.4byte	.LASF244
	.2byte	0xa8e
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB259
	.8byte	.LBE259-.LBB259
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xa8e
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xa8e
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x11
	.4byte	0x1a1
	.uleb128 0xd
	.4byte	.LASF245
	.2byte	0xa01
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x24a8
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0xa01
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -568
	.uleb128 0x8
	.4byte	.LASF24
	.2byte	0xa01
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -572
	.uleb128 0x1
	.4byte	.LASF42
	.2byte	0xa03
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"i"
	.2byte	0xa04
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"pdi"
	.2byte	0xa05
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x4
	.string	"di"
	.2byte	0xa06
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0xa07
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -220
	.uleb128 0x1
	.4byte	.LASF246
	.2byte	0xa08
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x1
	.4byte	.LASF247
	.2byte	0xa09
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -312
	.uleb128 0x4
	.string	"um"
	.2byte	0xa0a
	.byte	0x18
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -314
	.uleb128 0x1
	.4byte	.LASF190
	.2byte	0xa0b
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x4
	.string	"abs"
	.2byte	0xa16
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.uleb128 0x1
	.4byte	.LASF195
	.2byte	0xa1f
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x11f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.10
	.uleb128 0x7
	.8byte	.LBB254
	.8byte	.LBE254-.LBB254
	.4byte	0x245e
	.uleb128 0x1
	.4byte	.LASF248
	.2byte	0xa22
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB255
	.8byte	.LBE255-.LBB255
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xa22
	.byte	0x98
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xa22
	.byte	0xcc
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB256
	.8byte	.LBE256-.LBB256
	.uleb128 0x1
	.4byte	.LASF249
	.2byte	0xa2b
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB257
	.8byte	.LBE257-.LBB257
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0xa2b
	.byte	0x99
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0xa2b
	.byte	0xcd
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF323
	.2byte	0x987
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2aea
	.uleb128 0x9
	.string	"out"
	.2byte	0x987
	.byte	0x28
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1256
	.uleb128 0x8
	.4byte	.LASF250
	.2byte	0x987
	.byte	0x3c
	.4byte	0x33
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1264
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0x987
	.byte	0x51
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1272
	.uleb128 0x4
	.string	"p"
	.2byte	0x989
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x4
	.string	"n"
	.2byte	0x98a
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -196
	.uleb128 0x1
	.4byte	.LASF251
	.2byte	0x98b
	.byte	0x11
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x1
	.4byte	.LASF252
	.2byte	0x98c
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -212
	.uleb128 0x4
	.string	"len"
	.2byte	0x98d
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.4byte	.LASF253
	.2byte	0x98e
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -220
	.uleb128 0x4
	.string	"i"
	.2byte	0x98f
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x1
	.4byte	.LASF254
	.2byte	0x990
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -228
	.uleb128 0x4
	.string	"pos"
	.2byte	0x991
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.4byte	.LASF255
	.2byte	0x992
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -236
	.uleb128 0x1
	.4byte	.LASF256
	.2byte	0x993
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x4
	.string	"j"
	.2byte	0x994
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -244
	.uleb128 0x1
	.4byte	.LASF257
	.2byte	0x9a2
	.byte	0xa
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2b0a
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.11
	.uleb128 0x4
	.string	"tmp"
	.2byte	0x9b6
	.byte	0xa
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -760
	.uleb128 0x4
	.string	"s"
	.2byte	0x9ba
	.byte	0x11
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"end"
	.2byte	0x9bb
	.byte	0x11
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.4byte	.LASF258
	.2byte	0x9bc
	.byte	0xa
	.4byte	0x2b0f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1240
	.uleb128 0x7
	.8byte	.LBB225
	.8byte	.LBE225-.LBB225
	.4byte	0x265a
	.uleb128 0x1
	.4byte	.LASF259
	.2byte	0x9a6
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB226
	.8byte	.LBE226-.LBB226
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9a6
	.byte	0xa6
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9a6
	.byte	0xda
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB227
	.8byte	.LBE227-.LBB227
	.4byte	0x26a7
	.uleb128 0x1
	.4byte	.LASF260
	.2byte	0x9aa
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB228
	.8byte	.LBE228-.LBB228
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9aa
	.byte	0xa6
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9aa
	.byte	0xda
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB229
	.8byte	.LBE229-.LBB229
	.4byte	0x26f4
	.uleb128 0x1
	.4byte	.LASF261
	.2byte	0x9ac
	.byte	0x23
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB230
	.8byte	.LBE230-.LBB230
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9ac
	.byte	0xa4
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9ac
	.byte	0xd8
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB231
	.8byte	.LBE231-.LBB231
	.4byte	0x2742
	.uleb128 0x1
	.4byte	.LASF262
	.2byte	0x9ae
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB232
	.8byte	.LBE232-.LBB232
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9ae
	.byte	0xa1
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9ae
	.byte	0xd5
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB233
	.8byte	.LBE233-.LBB233
	.4byte	0x2790
	.uleb128 0x1
	.4byte	.LASF263
	.2byte	0x9af
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.8byte	.LBB234
	.8byte	.LBE234-.LBB234
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9af
	.byte	0x9f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9af
	.byte	0xd3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB235
	.8byte	.LBE235-.LBB235
	.4byte	0x27de
	.uleb128 0x1
	.4byte	.LASF264
	.2byte	0x9b9
	.byte	0x12
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.8byte	.LBB236
	.8byte	.LBE236-.LBB236
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9b9
	.byte	0x9f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9b9
	.byte	0xd3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB237
	.8byte	.LBE237-.LBB237
	.4byte	0x286b
	.uleb128 0x1
	.4byte	.LASF265
	.2byte	0x9d8
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x17
	.4byte	.LASF266
	.2byte	0x9d8
	.2byte	0x163
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x7
	.8byte	.LBB238
	.8byte	.LBE238-.LBB238
	.4byte	0x2840
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9d8
	.byte	0xa2
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9d8
	.byte	0xd6
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB239
	.8byte	.LBE239-.LBB239
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x9d8
	.2byte	0x1e5
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x9d8
	.2byte	0x219
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB240
	.8byte	.LBE240-.LBB240
	.4byte	0x28f8
	.uleb128 0x1
	.4byte	.LASF267
	.2byte	0x9db
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x17
	.4byte	.LASF268
	.2byte	0x9db
	.2byte	0x163
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x7
	.8byte	.LBB241
	.8byte	.LBE241-.LBB241
	.4byte	0x28cd
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9db
	.byte	0xa2
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9db
	.byte	0xd6
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB242
	.8byte	.LBE242-.LBB242
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x9db
	.2byte	0x1e8
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x9db
	.2byte	0x21c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB243
	.8byte	.LBE243-.LBB243
	.4byte	0x2985
	.uleb128 0x1
	.4byte	.LASF269
	.2byte	0x9dd
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x17
	.4byte	.LASF270
	.2byte	0x9dd
	.2byte	0x15f
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x7
	.8byte	.LBB244
	.8byte	.LBE244-.LBB244
	.4byte	0x295a
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9dd
	.byte	0x9e
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9dd
	.byte	0xd2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB245
	.8byte	.LBE245-.LBB245
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x9dd
	.2byte	0x1e4
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x9dd
	.2byte	0x218
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB246
	.8byte	.LBE246-.LBB246
	.4byte	0x29d3
	.uleb128 0x1
	.4byte	.LASF271
	.2byte	0x9e8
	.byte	0x37
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x3
	.8byte	.LBB247
	.8byte	.LBE247-.LBB247
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9e8
	.byte	0xba
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9e8
	.byte	0xee
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB248
	.8byte	.LBE248-.LBB248
	.4byte	0x2a60
	.uleb128 0x1
	.4byte	.LASF272
	.2byte	0x9f0
	.byte	0x27
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x17
	.4byte	.LASF273
	.2byte	0x9f0
	.2byte	0x16b
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x7
	.8byte	.LBB249
	.8byte	.LBE249-.LBB249
	.4byte	0x2a35
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9f0
	.byte	0xaa
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9f0
	.byte	0xde
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB250
	.8byte	.LBE250-.LBB250
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x9f0
	.2byte	0x1ed
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x9f0
	.2byte	0x221
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB251
	.8byte	.LBE251-.LBB251
	.uleb128 0x1
	.4byte	.LASF274
	.2byte	0x9ef
	.byte	0x28
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x17
	.4byte	.LASF275
	.2byte	0x9ef
	.2byte	0x16c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x7
	.8byte	.LBB252
	.8byte	.LBE252-.LBB252
	.4byte	0x2abe
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x9ef
	.byte	0xab
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x9ef
	.byte	0xdf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB253
	.8byte	.LBE253-.LBB253
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x9ef
	.2byte	0x1ee
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x9ef
	.2byte	0x222
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x2afa
	.uleb128 0x12
	.4byte	0x33
	.byte	0xff
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x2b0a
	.uleb128 0x12
	.4byte	0x33
	.byte	0x14
	.byte	0
	.uleb128 0x15
	.4byte	0x2afa
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x2b25
	.uleb128 0x12
	.4byte	0x33
	.byte	0x1f
	.uleb128 0x12
	.4byte	0x33
	.byte	0xe
	.byte	0
	.uleb128 0x18
	.4byte	.LASF277
	.2byte	0x95d
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2cbb
	.uleb128 0x8
	.4byte	.LASF278
	.2byte	0x95d
	.byte	0x28
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -180
	.uleb128 0x8
	.4byte	.LASF31
	.2byte	0x95d
	.byte	0x43
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x4
	.string	"pdi"
	.2byte	0x95f
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x4
	.string	"off"
	.2byte	0x960
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.uleb128 0x4
	.string	"de"
	.2byte	0x961
	.byte	0x15
	.4byte	0x230d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF241
	.2byte	0x962
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x4
	.string	"i"
	.2byte	0x963
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF279
	.2byte	0x96e
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2ccb
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.12
	.uleb128 0x7
	.8byte	.LBB219
	.8byte	.LBE219-.LBB219
	.4byte	0x2c24
	.uleb128 0x1
	.4byte	.LASF280
	.2byte	0x971
	.byte	0x49
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.8byte	.LBB220
	.8byte	.LBE220-.LBB220
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x971
	.byte	0x8d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x971
	.byte	0xc1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB221
	.8byte	.LBE221-.LBB221
	.4byte	0x2c71
	.uleb128 0x1
	.4byte	.LASF281
	.2byte	0x979
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB222
	.8byte	.LBE222-.LBB222
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x979
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x979
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB223
	.8byte	.LBE223-.LBB223
	.uleb128 0x1
	.4byte	.LASF282
	.2byte	0x97c
	.byte	0x52
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB224
	.8byte	.LBE224-.LBB224
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x97c
	.byte	0x96
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x97c
	.byte	0xca
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x2ccb
	.uleb128 0x12
	.4byte	0x33
	.byte	0xd
	.byte	0
	.uleb128 0x15
	.4byte	0x2cbb
	.uleb128 0x18
	.4byte	.LASF283
	.2byte	0x8f8
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2f46
	.uleb128 0x8
	.4byte	.LASF278
	.2byte	0x8f8
	.byte	0x25
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -740
	.uleb128 0x8
	.4byte	.LASF31
	.2byte	0x8f8
	.byte	0x40
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -752
	.uleb128 0x8
	.4byte	.LASF284
	.2byte	0x8f8
	.byte	0x54
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -744
	.uleb128 0x4
	.string	"pdi"
	.2byte	0x8fa
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x4
	.string	"de"
	.2byte	0x8fb
	.byte	0x14
	.4byte	0x1a1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x4
	.string	"i"
	.2byte	0x8fc
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x4
	.string	"off"
	.2byte	0x8fd
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF285
	.2byte	0x8fe
	.byte	0x15
	.4byte	0x230d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF241
	.2byte	0x8ff
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x4
	.string	"i_7"
	.2byte	0x900
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.4byte	.LASF173
	.2byte	0x901
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x1
	.4byte	.LASF176
	.2byte	0x902
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x1
	.4byte	.LASF286
	.2byte	0x903
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -172
	.uleb128 0x1
	.4byte	.LASF287
	.2byte	0x904
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.4byte	.LASF288
	.2byte	0x905
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -180
	.uleb128 0x4
	.string	"idx"
	.2byte	0x906
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -184
	.uleb128 0x1
	.4byte	.LASF289
	.2byte	0x907
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -188
	.uleb128 0x1
	.4byte	.LASF174
	.2byte	0x908
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.4byte	.LASF290
	.2byte	0x909
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -196
	.uleb128 0x1
	.4byte	.LASF291
	.2byte	0x90a
	.byte	0x15
	.4byte	0x230d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x1
	.4byte	.LASF292
	.2byte	0x90b
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -212
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.13
	.uleb128 0x4
	.string	"buf"
	.2byte	0x94e
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -728
	.uleb128 0x7
	.8byte	.LBB213
	.8byte	.LBE213-.LBB213
	.4byte	0x2eaf
	.uleb128 0x1
	.4byte	.LASF293
	.2byte	0x927
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB214
	.8byte	.LBE214-.LBB214
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x927
	.byte	0x96
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x927
	.byte	0xca
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB215
	.8byte	.LBE215-.LBB215
	.4byte	0x2efc
	.uleb128 0x1
	.4byte	.LASF294
	.2byte	0x932
	.byte	0x2d
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.8byte	.LBB216
	.8byte	.LBE216-.LBB216
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x932
	.byte	0x71
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x932
	.byte	0xa5
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB217
	.8byte	.LBE217-.LBB217
	.uleb128 0x1
	.4byte	.LASF295
	.2byte	0x93b
	.byte	0x34
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB218
	.8byte	.LBE218-.LBB218
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x93b
	.byte	0x78
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x93b
	.byte	0xac
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF296
	.2byte	0x8de
	.byte	0x16
	.4byte	0x78
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2f98
	.uleb128 0x4
	.string	"di"
	.2byte	0x8e0
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.4byte	.LASF30
	.2byte	0x8e1
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF247
	.2byte	0x8e2
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.byte	0
	.uleb128 0x18
	.4byte	.LASF297
	.2byte	0x89c
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3087
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0x89c
	.byte	0x2f
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x8
	.4byte	.LASF278
	.2byte	0x89c
	.byte	0x44
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x8
	.4byte	.LASF298
	.2byte	0x89c
	.byte	0x59
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.4byte	.LASF299
	.2byte	0x89e
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF300
	.2byte	0x89f
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x4
	.string	"tok"
	.2byte	0x8a0
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x4
	.string	"cur"
	.2byte	0x8a1
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x4
	.string	"ip"
	.2byte	0x8a2
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.4byte	.LASF301
	.2byte	0x8a3
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.4byte	.LASF302
	.2byte	0x8a4
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -244
	.uleb128 0x4
	.string	"n"
	.2byte	0x8a5
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x4
	.string	"i"
	.2byte	0x8a6
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.4byte	.LASF303
	.2byte	0x8b6
	.byte	0xa
	.4byte	0x308c
	.uleb128 0x4
	.byte	0x91
	.sleb128 -112
	.byte	0x6
	.byte	0
	.uleb128 0x11
	.4byte	0x78
	.uleb128 0xe
	.4byte	0x3a
	.4byte	0x30a0
	.uleb128 0x36
	.4byte	0x33
	.uleb128 0x4
	.byte	0x91
	.sleb128 -104
	.byte	0x6
	.byte	0
	.uleb128 0xd
	.4byte	.LASF304
	.2byte	0x87c
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x31c4
	.uleb128 0x9
	.string	"fd"
	.2byte	0x87c
	.byte	0x13
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x8
	.4byte	.LASF90
	.2byte	0x87c
	.byte	0x1d
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x9
	.string	"n"
	.2byte	0x87c
	.byte	0x27
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x87e
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"p"
	.2byte	0x87f
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"i"
	.2byte	0x880
	.byte	0x12
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1d3d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.15
	.uleb128 0x3
	.8byte	.LBB209
	.8byte	.LBE209-.LBB209
	.uleb128 0x1
	.4byte	.LASF305
	.2byte	0x896
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB210
	.8byte	.LBE210-.LBB210
	.4byte	0x3198
	.uleb128 0x1
	.4byte	.LASF306
	.2byte	0x896
	.byte	0x4d
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.8byte	.LBB211
	.8byte	.LBE211-.LBB211
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x896
	.byte	0x91
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x896
	.byte	0xc5
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB212
	.8byte	.LBE212-.LBB212
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x896
	.2byte	0x1bc
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x896
	.2byte	0x1f0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF307
	.2byte	0x852
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x32f5
	.uleb128 0x9
	.string	"fd"
	.2byte	0x852
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x8
	.4byte	.LASF90
	.2byte	0x852
	.byte	0x1c
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x9
	.string	"n"
	.2byte	0x852
	.byte	0x26
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x854
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"p"
	.2byte	0x855
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"j"
	.2byte	0x856
	.byte	0x12
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"i"
	.2byte	0x857
	.byte	0x12
	.4byte	0x54
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x11f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.16
	.uleb128 0x3
	.8byte	.LBB205
	.8byte	.LBE205-.LBB205
	.uleb128 0x1
	.4byte	.LASF308
	.2byte	0x875
	.byte	0x20
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x7
	.8byte	.LBB206
	.8byte	.LBE206-.LBB206
	.4byte	0x32c9
	.uleb128 0x1
	.4byte	.LASF309
	.2byte	0x875
	.byte	0x57
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.8byte	.LBB207
	.8byte	.LBE207-.LBB207
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x875
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x875
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB208
	.8byte	.LBE208-.LBB208
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x875
	.2byte	0x1c5
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x875
	.2byte	0x1f9
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
	.4byte	.LASF310
	.2byte	0x822
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x336d
	.uleb128 0x9
	.string	"fd1"
	.2byte	0x822
	.byte	0x15
	.4byte	0x336d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x9
	.string	"fd2"
	.2byte	0x822
	.byte	0x1f
	.4byte	0x336d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x824
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x4
	.string	"pip"
	.2byte	0x825
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"i"
	.2byte	0x826
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"i_6"
	.2byte	0x827
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x11
	.4byte	0x4d
	.uleb128 0xd
	.4byte	.LASF311
	.2byte	0x811
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33bf
	.uleb128 0x9
	.string	"fd"
	.2byte	0x811
	.byte	0x10
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x813
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"k"
	.2byte	0x814
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0xd
	.4byte	.LASF312
	.2byte	0x804
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33ff
	.uleb128 0x9
	.string	"fd"
	.2byte	0x804
	.byte	0x13
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x806
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF313
	.2byte	0x7f7
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x343f
	.uleb128 0x9
	.string	"fd"
	.2byte	0x7f7
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x7f9
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF314
	.2byte	0x7e3
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x347f
	.uleb128 0x9
	.string	"fd"
	.2byte	0x7e3
	.byte	0x11
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.2byte	0x7e5
	.byte	0x14
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x16
	.4byte	.LASF315
	.2byte	0x7d5
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x34ac
	.uleb128 0x8
	.4byte	.LASF52
	.2byte	0x7d5
	.byte	0x1d
	.4byte	0xb4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF316
	.2byte	0x7c8
	.byte	0xf
	.4byte	0x5d6
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x34de
	.uleb128 0x1
	.4byte	.LASF162
	.2byte	0x7ca
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF317
	.2byte	0x7b0
	.byte	0x10
	.4byte	0x78e
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x352b
	.uleb128 0x4
	.string	"p"
	.2byte	0x7b2
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF318
	.2byte	0x7b3
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.string	"pa"
	.2byte	0x7b4
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x16
	.4byte	.LASF319
	.2byte	0x7a7
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3556
	.uleb128 0x9
	.string	"p"
	.2byte	0x7a7
	.byte	0x1e
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF320
	.2byte	0x793
	.byte	0xf
	.4byte	0x5d6
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3595
	.uleb128 0x4
	.string	"p"
	.2byte	0x795
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF72
	.2byte	0x796
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x16
	.4byte	.LASF321
	.2byte	0x78a
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35c0
	.uleb128 0x9
	.string	"p"
	.2byte	0x78a
	.byte	0x1f
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF322
	.2byte	0x776
	.byte	0x10
	.4byte	0x78e
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x35ff
	.uleb128 0x4
	.string	"p"
	.2byte	0x778
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF82
	.2byte	0x779
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x29
	.4byte	.LASF442
	.2byte	0x771
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1c
	.4byte	.LASF324
	.2byte	0x769
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3650
	.uleb128 0x9
	.string	"f"
	.2byte	0x769
	.byte	0x28
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x9
	.string	"o"
	.2byte	0x769
	.byte	0x3b
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF325
	.2byte	0x761
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3688
	.uleb128 0x9
	.string	"f"
	.2byte	0x761
	.byte	0x25
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x9
	.string	"o"
	.2byte	0x761
	.byte	0x38
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF326
	.2byte	0x75b
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36b8
	.uleb128 0x9
	.string	"f"
	.2byte	0x75b
	.byte	0x24
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x16
	.4byte	.LASF327
	.2byte	0x742
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x38e0
	.uleb128 0x8
	.4byte	.LASF30
	.2byte	0x742
	.byte	0x1f
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x4
	.string	"ip"
	.2byte	0x744
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x4
	.string	"i"
	.2byte	0x745
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.17
	.uleb128 0x7
	.8byte	.LBB193
	.8byte	.LBE193-.LBB193
	.4byte	0x3762
	.uleb128 0x1
	.4byte	.LASF328
	.2byte	0x74e
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB194
	.8byte	.LBE194-.LBB194
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x74e
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x74e
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB195
	.8byte	.LBE195-.LBB195
	.4byte	0x37af
	.uleb128 0x1
	.4byte	.LASF329
	.2byte	0x74f
	.byte	0x29
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB196
	.8byte	.LBE196-.LBB196
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x74f
	.byte	0xab
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x74f
	.byte	0xdf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB197
	.8byte	.LBE197-.LBB197
	.4byte	0x37fc
	.uleb128 0x1
	.4byte	.LASF330
	.2byte	0x752
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB198
	.8byte	.LBE198-.LBB198
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x752
	.byte	0x9a
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x752
	.byte	0xce
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB199
	.8byte	.LBE199-.LBB199
	.4byte	0x3849
	.uleb128 0x1
	.4byte	.LASF331
	.2byte	0x753
	.byte	0x30
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB200
	.8byte	.LBE200-.LBB200
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x753
	.byte	0xb3
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x753
	.byte	0xe7
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB201
	.8byte	.LBE201-.LBB201
	.4byte	0x3896
	.uleb128 0x1
	.4byte	.LASF332
	.2byte	0x755
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB202
	.8byte	.LBE202-.LBB202
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x755
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x755
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB203
	.8byte	.LBE203-.LBB203
	.uleb128 0x1
	.4byte	.LASF333
	.2byte	0x756
	.byte	0x37
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB204
	.8byte	.LBE204-.LBB204
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x756
	.byte	0xbc
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x756
	.byte	0xf0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xd
	.4byte	.LASF334
	.2byte	0x6c2
	.byte	0x5
	.4byte	0x4d
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3d64
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0x6c2
	.byte	0x1d
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1768
	.uleb128 0x9
	.string	"out"
	.2byte	0x6c2
	.byte	0x29
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1776
	.uleb128 0x8
	.4byte	.LASF250
	.2byte	0x6c2
	.byte	0x32
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1780
	.uleb128 0x4
	.string	"dir"
	.2byte	0x6c4
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.4byte	.LASF335
	.2byte	0x6c5
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x4
	.string	"tok"
	.2byte	0x6c6
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -216
	.uleb128 0x1
	.4byte	.LASF336
	.2byte	0x6c7
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -220
	.uleb128 0x1
	.4byte	.LASF337
	.2byte	0x6c8
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -224
	.uleb128 0x4
	.string	"n"
	.2byte	0x6c9
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -228
	.uleb128 0x1
	.4byte	.LASF57
	.2byte	0x6ca
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x4
	.string	"nxt"
	.2byte	0x6cb
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -320
	.uleb128 0x4
	.string	"len"
	.2byte	0x6cc
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -324
	.uleb128 0x4
	.string	"p"
	.2byte	0x6cd
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x4
	.string	"l"
	.2byte	0x6ce
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -340
	.uleb128 0x4
	.string	"i"
	.2byte	0x6cf
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -344
	.uleb128 0x4
	.string	"abs"
	.2byte	0x6df
	.byte	0xa
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -600
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x18e9
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.18
	.uleb128 0x4
	.string	"buf"
	.2byte	0x6ee
	.byte	0xa
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -856
	.uleb128 0x7
	.8byte	.LBB172
	.8byte	.LBE172-.LBB172
	.4byte	0x3a6a
	.uleb128 0x1
	.4byte	.LASF338
	.2byte	0x6e2
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB173
	.8byte	.LBE173-.LBB173
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6e2
	.byte	0x98
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6e2
	.byte	0xcc
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB174
	.8byte	.LBE174-.LBB174
	.4byte	0x3ab7
	.uleb128 0x1
	.4byte	.LASF339
	.2byte	0x6f1
	.byte	0x12
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB175
	.8byte	.LBE175-.LBB175
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6f1
	.byte	0x9f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6f1
	.byte	0xd3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB176
	.8byte	.LBE176-.LBB176
	.uleb128 0x1
	.4byte	.LASF340
	.2byte	0x70a
	.byte	0x12
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1752
	.uleb128 0x1
	.4byte	.LASF341
	.2byte	0x712
	.byte	0x12
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1624
	.uleb128 0x1
	.4byte	.LASF342
	.2byte	0x71d
	.byte	0x12
	.4byte	0x747
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1368
	.uleb128 0x7
	.8byte	.LBB177
	.8byte	.LBE177-.LBB177
	.4byte	0x3b45
	.uleb128 0x1
	.4byte	.LASF343
	.2byte	0x711
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB178
	.8byte	.LBE178-.LBB178
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x711
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x711
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB179
	.8byte	.LBE179-.LBB179
	.4byte	0x3b92
	.uleb128 0x1
	.4byte	.LASF344
	.2byte	0x714
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB180
	.8byte	.LBE180-.LBB180
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x714
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x714
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB181
	.8byte	.LBE181-.LBB181
	.4byte	0x3be0
	.uleb128 0x1
	.4byte	.LASF345
	.2byte	0x717
	.byte	0x23
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.8byte	.LBB182
	.8byte	.LBE182-.LBB182
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x717
	.byte	0xa4
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x717
	.byte	0xd8
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB183
	.8byte	.LBE183-.LBB183
	.4byte	0x3c2e
	.uleb128 0x1
	.4byte	.LASF346
	.2byte	0x71f
	.byte	0x1f
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB184
	.8byte	.LBE184-.LBB184
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x71f
	.byte	0xa0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x71f
	.byte	0xd4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB185
	.8byte	.LBE185-.LBB185
	.4byte	0x3c7c
	.uleb128 0x1
	.4byte	.LASF347
	.2byte	0x723
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.8byte	.LBB186
	.8byte	.LBE186-.LBB186
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x723
	.byte	0x9f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x723
	.byte	0xd3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB187
	.8byte	.LBE187-.LBB187
	.4byte	0x3cca
	.uleb128 0x1
	.4byte	.LASF348
	.2byte	0x725
	.byte	0x23
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.8byte	.LBB188
	.8byte	.LBE188-.LBB188
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x725
	.byte	0xb3
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x725
	.byte	0xe7
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB189
	.8byte	.LBE189-.LBB189
	.4byte	0x3d18
	.uleb128 0x1
	.4byte	.LASF349
	.2byte	0x72a
	.byte	0x1f
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.8byte	.LBB190
	.8byte	.LBE190-.LBB190
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x72a
	.byte	0xa0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x72a
	.byte	0xd4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB191
	.8byte	.LBE191-.LBB191
	.uleb128 0x1
	.4byte	.LASF350
	.2byte	0x72b
	.byte	0x23
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.8byte	.LBB192
	.8byte	.LBE192-.LBB192
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x72b
	.byte	0xb3
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x72b
	.byte	0xe7
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF351
	.2byte	0x65a
	.byte	0x16
	.4byte	0x78
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x42da
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0x65a
	.byte	0x32
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1528
	.uleb128 0x8
	.4byte	.LASF336
	.2byte	0x65a
	.byte	0x3c
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1532
	.uleb128 0x4
	.string	"ipr"
	.2byte	0x65c
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.4byte	.LASF335
	.2byte	0x65d
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x4
	.string	"tok"
	.2byte	0x65e
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x4
	.string	"cur"
	.2byte	0x65f
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.4byte	.LASF57
	.2byte	0x660
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x4
	.string	"nxt"
	.2byte	0x661
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -344
	.uleb128 0x4
	.string	"n"
	.2byte	0x662
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -348
	.uleb128 0x4
	.string	"p"
	.2byte	0x663
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x4
	.string	"buf"
	.2byte	0x679
	.byte	0xa
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x42ea
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.19
	.uleb128 0x1
	.4byte	.LASF352
	.2byte	0x67f
	.byte	0xa
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -872
	.uleb128 0x7
	.8byte	.LBB143
	.8byte	.LBE143-.LBB143
	.4byte	0x3ea2
	.uleb128 0x1
	.4byte	.LASF353
	.2byte	0x67c
	.byte	0x12
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB144
	.8byte	.LBE144-.LBB144
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x67c
	.byte	0x9f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x67c
	.byte	0xd3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB145
	.8byte	.LBE145-.LBB145
	.4byte	0x3eef
	.uleb128 0x1
	.4byte	.LASF354
	.2byte	0x681
	.byte	0x12
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB146
	.8byte	.LBE146-.LBB146
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x681
	.byte	0x93
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x681
	.byte	0xc7
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB147
	.8byte	.LBE147-.LBB147
	.4byte	0x3f3c
	.uleb128 0x1
	.4byte	.LASF355
	.2byte	0x682
	.byte	0x12
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB148
	.8byte	.LBE148-.LBB148
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x682
	.byte	0x93
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x682
	.byte	0xc7
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB149
	.8byte	.LBE149-.LBB149
	.4byte	0x423f
	.uleb128 0x1
	.4byte	.LASF340
	.2byte	0x691
	.byte	0x12
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1512
	.uleb128 0x1
	.4byte	.LASF341
	.2byte	0x699
	.byte	0x12
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1384
	.uleb128 0x1
	.4byte	.LASF342
	.2byte	0x6a4
	.byte	0x12
	.4byte	0x2aea
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x7
	.8byte	.LBB150
	.8byte	.LBE150-.LBB150
	.4byte	0x3fcf
	.uleb128 0x1
	.4byte	.LASF356
	.2byte	0x698
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.8byte	.LBB151
	.8byte	.LBE151-.LBB151
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x698
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x698
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB152
	.8byte	.LBE152-.LBB152
	.4byte	0x401d
	.uleb128 0x1
	.4byte	.LASF357
	.2byte	0x69b
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.8byte	.LBB153
	.8byte	.LBE153-.LBB153
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x69b
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x69b
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB154
	.8byte	.LBE154-.LBB154
	.4byte	0x406b
	.uleb128 0x1
	.4byte	.LASF358
	.2byte	0x69e
	.byte	0x23
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x3
	.8byte	.LBB155
	.8byte	.LBE155-.LBB155
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x69e
	.byte	0xa4
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x69e
	.byte	0xd8
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB156
	.8byte	.LBE156-.LBB156
	.4byte	0x40b9
	.uleb128 0x1
	.4byte	.LASF359
	.2byte	0x6a6
	.byte	0x1f
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.8byte	.LBB157
	.8byte	.LBE157-.LBB157
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6a6
	.byte	0xa0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6a6
	.byte	0xd4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB158
	.8byte	.LBE158-.LBB158
	.4byte	0x4107
	.uleb128 0x1
	.4byte	.LASF360
	.2byte	0x6a8
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x3
	.8byte	.LBB159
	.8byte	.LBE159-.LBB159
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6a8
	.byte	0xae
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6a8
	.byte	0xe2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB160
	.8byte	.LBE160-.LBB160
	.4byte	0x4155
	.uleb128 0x1
	.4byte	.LASF361
	.2byte	0x6ac
	.byte	0x1e
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.8byte	.LBB161
	.8byte	.LBE161-.LBB161
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6ac
	.byte	0xae
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6ac
	.byte	0xe2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB162
	.8byte	.LBE162-.LBB162
	.4byte	0x41a3
	.uleb128 0x1
	.4byte	.LASF362
	.2byte	0x6ad
	.byte	0x25
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.8byte	.LBB163
	.8byte	.LBE163-.LBB163
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6ad
	.byte	0xa6
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6ad
	.byte	0xda
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB164
	.8byte	.LBE164-.LBB164
	.4byte	0x41f4
	.uleb128 0x17
	.4byte	.LASF363
	.2byte	0x6ad
	.2byte	0x195
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.8byte	.LBB165
	.8byte	.LBE165-.LBB165
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x6ad
	.2byte	0x216
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x6ad
	.2byte	0x24a
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB166
	.8byte	.LBE166-.LBB166
	.uleb128 0x1
	.4byte	.LASF364
	.2byte	0x6b2
	.byte	0x1f
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x3
	.8byte	.LBB167
	.8byte	.LBE167-.LBB167
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6b2
	.byte	0xa0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6b2
	.byte	0xd4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB168
	.8byte	.LBE168-.LBB168
	.4byte	0x428c
	.uleb128 0x1
	.4byte	.LASF365
	.2byte	0x6ba
	.byte	0x1d
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB169
	.8byte	.LBE169-.LBB169
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x6ba
	.byte	0x9e
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x6ba
	.byte	0xd2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB170
	.8byte	.LBE170-.LBB170
	.uleb128 0x17
	.4byte	.LASF366
	.2byte	0x6ba
	.2byte	0x18d
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB171
	.8byte	.LBE171-.LBB171
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x6ba
	.2byte	0x20e
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x6ba
	.2byte	0x242
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x42ea
	.uleb128 0x12
	.4byte	0x33
	.byte	0xf
	.byte	0
	.uleb128 0x15
	.4byte	0x42da
	.uleb128 0xd
	.4byte	.LASF367
	.2byte	0x655
	.byte	0xf
	.4byte	0x78
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4321
	.uleb128 0x8
	.4byte	.LASF185
	.2byte	0x655
	.byte	0x27
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF368
	.2byte	0x635
	.byte	0xf
	.4byte	0x78
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4408
	.uleb128 0x8
	.4byte	.LASF42
	.2byte	0x635
	.byte	0x2a
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.4byte	.LASF31
	.2byte	0x635
	.byte	0x40
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.string	"off"
	.2byte	0x637
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"de"
	.2byte	0x638
	.byte	0x15
	.4byte	0x230d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF241
	.2byte	0x639
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x4
	.string	"i"
	.2byte	0x63a
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF279
	.2byte	0x640
	.byte	0xa
	.4byte	0x14d5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.20
	.uleb128 0x3
	.8byte	.LBB141
	.8byte	.LBE141-.LBB141
	.uleb128 0x1
	.4byte	.LASF369
	.2byte	0x64b
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB142
	.8byte	.LBE142-.LBB142
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x64b
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x64b
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
	.4byte	.LASF370
	.2byte	0x60d
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4577
	.uleb128 0x9
	.string	"ip"
	.2byte	0x60d
	.byte	0x20
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x8
	.4byte	.LASF150
	.2byte	0x60d
	.byte	0x34
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x9
	.string	"buf"
	.2byte	0x60d
	.byte	0x4e
	.4byte	0x9a6
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x8
	.4byte	.LASF11
	.2byte	0x60d
	.byte	0x63
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF171
	.2byte	0x60f
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"off"
	.2byte	0x610
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x4
	.string	"dst"
	.2byte	0x611
	.byte	0x15
	.4byte	0x9a6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF173
	.2byte	0x612
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF174
	.2byte	0x613
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF183
	.2byte	0x614
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF176
	.2byte	0x615
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1d3d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.21
	.uleb128 0x7
	.8byte	.LBB137
	.8byte	.LBE137-.LBB137
	.4byte	0x452d
	.uleb128 0x1
	.4byte	.LASF371
	.2byte	0x621
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.8byte	.LBB138
	.8byte	.LBE138-.LBB138
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x621
	.byte	0x68
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x621
	.byte	0x9c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB139
	.8byte	.LBE139-.LBB139
	.uleb128 0x1
	.4byte	.LASF372
	.2byte	0x622
	.byte	0x24
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB140
	.8byte	.LBE140-.LBB140
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x622
	.byte	0x68
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x622
	.byte	0x9c
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF373
	.2byte	0x59c
	.byte	0x16
	.4byte	0x78
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x492f
	.uleb128 0x8
	.4byte	.LASF30
	.2byte	0x59c
	.byte	0x35
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1700
	.uleb128 0x9
	.string	"ip"
	.2byte	0x59c
	.byte	0x4d
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1712
	.uleb128 0x9
	.string	"idx"
	.2byte	0x59c
	.byte	0x61
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1704
	.uleb128 0x4
	.string	"b"
	.2byte	0x59e
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1
	.4byte	.LASF374
	.2byte	0x59f
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x4
	.string	"nb"
	.2byte	0x5a0
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.4byte	.LASF241
	.2byte	0x5a1
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x4
	.string	"i"
	.2byte	0x5a2
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x4
	.string	"db"
	.2byte	0x5a3
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x4
	.string	"di"
	.2byte	0x5a4
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF375
	.2byte	0x5a5
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.4byte	.LASF376
	.2byte	0x5a6
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.4byte	.LASF377
	.2byte	0x5a7
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF378
	.2byte	0x5a8
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x1
	.4byte	.LASF379
	.2byte	0x5a9
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.4byte	.LASF380
	.2byte	0x5aa
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x1
	.4byte	.LASF381
	.2byte	0x5ab
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF382
	.2byte	0x5ac
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF383
	.2byte	0x5ad
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2084
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.22
	.uleb128 0x1
	.4byte	.LASF384
	.2byte	0x5f0
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x1
	.4byte	.LASF385
	.2byte	0x5fe
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1184
	.uleb128 0x7
	.8byte	.LBB122
	.8byte	.LBE122-.LBB122
	.4byte	0x4741
	.uleb128 0x1
	.4byte	.LASF386
	.2byte	0x5bf
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB123
	.8byte	.LBE123-.LBB123
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5bf
	.byte	0x9f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5bf
	.byte	0xd3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB124
	.8byte	.LBE124-.LBB124
	.4byte	0x478e
	.uleb128 0x1
	.4byte	.LASF387
	.2byte	0x5c4
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB125
	.8byte	.LBE125-.LBB125
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5c4
	.byte	0x9e
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5c4
	.byte	0xd2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB126
	.8byte	.LBE126-.LBB126
	.4byte	0x47dc
	.uleb128 0x1
	.4byte	.LASF388
	.2byte	0x5c7
	.byte	0x27
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB127
	.8byte	.LBE127-.LBB127
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5c7
	.byte	0xab
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5c7
	.byte	0xdf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB128
	.8byte	.LBE128-.LBB128
	.4byte	0x4898
	.uleb128 0x4
	.string	"buf"
	.2byte	0x5d4
	.byte	0x18
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1696
	.uleb128 0x7
	.8byte	.LBB129
	.8byte	.LBE129-.LBB129
	.4byte	0x484e
	.uleb128 0x1
	.4byte	.LASF389
	.2byte	0x5ca
	.byte	0x25
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB130
	.8byte	.LBE130-.LBB130
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5ca
	.byte	0xa8
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5ca
	.byte	0xdc
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB131
	.8byte	.LBE131-.LBB131
	.uleb128 0x1
	.4byte	.LASF390
	.2byte	0x5d0
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB132
	.8byte	.LBE132-.LBB132
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5d0
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5d0
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB133
	.8byte	.LBE133-.LBB133
	.4byte	0x48e5
	.uleb128 0x1
	.4byte	.LASF391
	.2byte	0x5e6
	.byte	0x22
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB134
	.8byte	.LBE134-.LBB134
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5e6
	.byte	0xa7
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5e6
	.byte	0xdb
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB135
	.8byte	.LBE135-.LBB135
	.uleb128 0x1
	.4byte	.LASF392
	.2byte	0x5ec
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB136
	.8byte	.LBE136-.LBB136
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x5ec
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x5ec
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF393
	.2byte	0x56a
	.byte	0x16
	.4byte	0x78
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4ae3
	.uleb128 0x9
	.string	"ip"
	.2byte	0x56a
	.byte	0x34
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x9
	.string	"idx"
	.2byte	0x56a
	.byte	0x48
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF374
	.2byte	0x56c
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF241
	.2byte	0x56d
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF394
	.2byte	0x56e
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF395
	.2byte	0x56f
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF377
	.2byte	0x570
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF379
	.2byte	0x571
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF380
	.2byte	0x572
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.4byte	.LASF382
	.2byte	0x573
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2ccb
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.23
	.uleb128 0x7
	.8byte	.LBB116
	.8byte	.LBE116-.LBB116
	.4byte	0x4a4c
	.uleb128 0x1
	.4byte	.LASF396
	.2byte	0x57d
	.byte	0x27
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB117
	.8byte	.LBE117-.LBB117
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x57d
	.byte	0xab
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x57d
	.byte	0xdf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB118
	.8byte	.LBE118-.LBB118
	.4byte	0x4a99
	.uleb128 0x1
	.4byte	.LASF397
	.2byte	0x580
	.byte	0x25
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB119
	.8byte	.LBE119-.LBB119
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x580
	.byte	0xa8
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x580
	.byte	0xdc
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB120
	.8byte	.LBE120-.LBB120
	.uleb128 0x1
	.4byte	.LASF398
	.2byte	0x58c
	.byte	0x26
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB121
	.8byte	.LBE121-.LBB121
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x58c
	.byte	0xab
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x58c
	.byte	0xdf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF399
	.2byte	0x553
	.byte	0x16
	.4byte	0x78
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4bb1
	.uleb128 0x1
	.4byte	.LASF400
	.2byte	0x555
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF401
	.2byte	0x556
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"b"
	.2byte	0x557
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2084
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.24
	.uleb128 0x7
	.8byte	.LBB113
	.8byte	.LBE113-.LBB113
	.4byte	0x4b90
	.uleb128 0x1
	.4byte	.LASF402
	.2byte	0x55b
	.byte	0x27
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x3
	.8byte	.LBB114
	.8byte	.LBE114-.LBB114
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x55b
	.byte	0x6f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x55b
	.byte	0xa3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB115
	.8byte	.LBE115-.LBB115
	.uleb128 0x4
	.string	"z"
	.2byte	0x560
	.byte	0x1c
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF403
	.2byte	0x510
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4f77
	.uleb128 0x8
	.4byte	.LASF30
	.2byte	0x510
	.byte	0x2d
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -660
	.uleb128 0x9
	.string	"ip"
	.2byte	0x510
	.byte	0x45
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -672
	.uleb128 0x4
	.string	"i"
	.2byte	0x512
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1
	.4byte	.LASF404
	.2byte	0x513
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.4byte	.LASF285
	.2byte	0x514
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x4
	.string	"i_1"
	.2byte	0x515
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF405
	.2byte	0x516
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.4byte	.LASF337
	.2byte	0x517
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x4
	.string	"i_2"
	.2byte	0x518
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x1
	.4byte	.LASF406
	.2byte	0x519
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.4byte	.LASF407
	.2byte	0x51a
	.byte	0x14
	.4byte	0x3087
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x4
	.string	"j"
	.2byte	0x51b
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x4f87
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.25
	.uleb128 0x7
	.8byte	.LBB94
	.8byte	.LBE94-.LBB94
	.4byte	0x4cea
	.uleb128 0x1
	.4byte	.LASF408
	.2byte	0x527
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB95
	.8byte	.LBE95-.LBB95
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x527
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x527
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB96
	.8byte	.LBE96-.LBB96
	.4byte	0x4d38
	.uleb128 0x1
	.4byte	.LASF409
	.2byte	0x528
	.byte	0x29
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.8byte	.LBB97
	.8byte	.LBE97-.LBB97
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x528
	.byte	0xab
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x528
	.byte	0xdf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB98
	.8byte	.LBE98-.LBB98
	.4byte	0x4d86
	.uleb128 0x1
	.4byte	.LASF410
	.2byte	0x529
	.byte	0x1a
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.8byte	.LBB99
	.8byte	.LBE99-.LBB99
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x529
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x529
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB100
	.8byte	.LBE100-.LBB100
	.4byte	0x4dd3
	.uleb128 0x1
	.4byte	.LASF411
	.2byte	0x52c
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB101
	.8byte	.LBE101-.LBB101
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x52c
	.byte	0x9a
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x52c
	.byte	0xce
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB102
	.8byte	.LBE102-.LBB102
	.4byte	0x4e20
	.uleb128 0x1
	.4byte	.LASF412
	.2byte	0x52d
	.byte	0x1d
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB103
	.8byte	.LBE103-.LBB103
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x52d
	.byte	0xa0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x52d
	.byte	0xd4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB104
	.8byte	.LBE104-.LBB104
	.4byte	0x4e6d
	.uleb128 0x1
	.4byte	.LASF413
	.2byte	0x536
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB105
	.8byte	.LBE105-.LBB105
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x536
	.byte	0x99
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x536
	.byte	0xcd
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB106
	.8byte	.LBE106-.LBB106
	.4byte	0x4eba
	.uleb128 0x1
	.4byte	.LASF414
	.2byte	0x538
	.byte	0x17
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB107
	.8byte	.LBE107-.LBB107
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x538
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x538
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB108
	.8byte	.LBE108-.LBB108
	.4byte	0x4f07
	.uleb128 0x1
	.4byte	.LASF415
	.2byte	0x539
	.byte	0x1d
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB109
	.8byte	.LBE109-.LBB109
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x539
	.byte	0xa2
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x539
	.byte	0xd6
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB110
	.8byte	.LBE110-.LBB110
	.4byte	0x4f2d
	.uleb128 0x1
	.4byte	.LASF416
	.2byte	0x541
	.byte	0x1c
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -656
	.byte	0
	.uleb128 0x3
	.8byte	.LBB111
	.8byte	.LBE111-.LBB111
	.uleb128 0x1
	.4byte	.LASF417
	.2byte	0x54d
	.byte	0x16
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB112
	.8byte	.LBE112-.LBB112
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x54d
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x54d
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x4f87
	.uleb128 0x12
	.4byte	0x33
	.byte	0x11
	.byte	0
	.uleb128 0x15
	.4byte	0x4f77
	.uleb128 0x1c
	.4byte	.LASF418
	.2byte	0x4fe
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x512d
	.uleb128 0x9
	.string	"b"
	.2byte	0x4fe
	.byte	0x28
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -580
	.uleb128 0x1
	.4byte	.LASF419
	.2byte	0x500
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.string	"bi"
	.2byte	0x501
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.string	"buf"
	.2byte	0x508
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x513d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.26
	.uleb128 0x7
	.8byte	.LBB86
	.8byte	.LBE86-.LBB86
	.4byte	0x5044
	.uleb128 0x1
	.4byte	.LASF420
	.2byte	0x50b
	.byte	0x1f
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB87
	.8byte	.LBE87-.LBB87
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x50b
	.byte	0x67
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x50b
	.byte	0x9b
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB88
	.8byte	.LBE88-.LBB88
	.4byte	0x5094
	.uleb128 0x17
	.4byte	.LASF421
	.2byte	0x50c
	.2byte	0x2a1
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB89
	.8byte	.LBE89-.LBB89
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x50c
	.2byte	0x2e3
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x50c
	.2byte	0x317
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB90
	.8byte	.LBE90-.LBB90
	.uleb128 0x1
	.4byte	.LASF422
	.2byte	0x50c
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.8byte	.LBB91
	.8byte	.LBE91-.LBB91
	.4byte	0x5101
	.uleb128 0x1
	.4byte	.LASF423
	.2byte	0x50c
	.byte	0x49
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.8byte	.LBB92
	.8byte	.LBE92-.LBB92
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x50c
	.byte	0x8b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x50c
	.byte	0xbf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB93
	.8byte	.LBE93-.LBB93
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x50c
	.2byte	0x1b1
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x50c
	.2byte	0x1e5
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x513d
	.uleb128 0x12
	.4byte	0x33
	.byte	0xc
	.byte	0
	.uleb128 0x15
	.4byte	0x512d
	.uleb128 0x1c
	.4byte	.LASF424
	.2byte	0x4ef
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x52e3
	.uleb128 0x9
	.string	"b"
	.2byte	0x4ef
	.byte	0x26
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -580
	.uleb128 0x1
	.4byte	.LASF419
	.2byte	0x4f1
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.string	"bi"
	.2byte	0x4f2
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.string	"buf"
	.2byte	0x4f6
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.27
	.uleb128 0x7
	.8byte	.LBB78
	.8byte	.LBE78-.LBB78
	.4byte	0x51fa
	.uleb128 0x1
	.4byte	.LASF425
	.2byte	0x4f9
	.byte	0x1f
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB79
	.8byte	.LBE79-.LBB79
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4f9
	.byte	0x67
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4f9
	.byte	0x9b
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB80
	.8byte	.LBE80-.LBB80
	.4byte	0x524a
	.uleb128 0x17
	.4byte	.LASF426
	.2byte	0x4fa
	.2byte	0x2a0
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB81
	.8byte	.LBE81-.LBB81
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x4fa
	.2byte	0x2e2
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x4fa
	.2byte	0x316
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB82
	.8byte	.LBE82-.LBB82
	.uleb128 0x1
	.4byte	.LASF427
	.2byte	0x4fa
	.byte	0x14
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x7
	.8byte	.LBB83
	.8byte	.LBE83-.LBB83
	.4byte	0x52b7
	.uleb128 0x1
	.4byte	.LASF428
	.2byte	0x4fa
	.byte	0x49
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x3
	.8byte	.LBB84
	.8byte	.LBE84-.LBB84
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4fa
	.byte	0x8b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4fa
	.byte	0xbf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB85
	.8byte	.LBE85-.LBB85
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x4fa
	.2byte	0x1b1
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x4fa
	.2byte	0x1e5
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF429
	.2byte	0x4e1
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5489
	.uleb128 0x9
	.string	"b"
	.2byte	0x4e1
	.byte	0x26
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -580
	.uleb128 0x1
	.4byte	.LASF419
	.2byte	0x4e3
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x4
	.string	"bi"
	.2byte	0x4e4
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.string	"buf"
	.2byte	0x4e8
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x18e9
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.29
	.uleb128 0x7
	.8byte	.LBB70
	.8byte	.LBE70-.LBB70
	.4byte	0x53a0
	.uleb128 0x1
	.4byte	.LASF430
	.2byte	0x4eb
	.byte	0x1f
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB71
	.8byte	.LBE71-.LBB71
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4eb
	.byte	0x67
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4eb
	.byte	0x9b
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB72
	.8byte	.LBE72-.LBB72
	.4byte	0x543c
	.uleb128 0x1
	.4byte	.LASF431
	.2byte	0x4ec
	.byte	0x20
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x7
	.8byte	.LBB73
	.8byte	.LBE73-.LBB73
	.4byte	0x5411
	.uleb128 0x1
	.4byte	.LASF432
	.2byte	0x4ec
	.byte	0x55
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB74
	.8byte	.LBE74-.LBB74
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4ec
	.byte	0x97
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4ec
	.byte	0xcb
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB75
	.8byte	.LBE75-.LBB75
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x4ec
	.2byte	0x1bd
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x4ec
	.2byte	0x1f1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB76
	.8byte	.LBE76-.LBB76
	.uleb128 0x17
	.4byte	.LASF433
	.2byte	0x4ec
	.2byte	0x2a8
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.8byte	.LBB77
	.8byte	.LBE77-.LBB77
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x4ec
	.2byte	0x2ea
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x4ec
	.2byte	0x31e
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF434
	.2byte	0x4c9
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x55bc
	.uleb128 0x8
	.4byte	.LASF30
	.2byte	0x4c9
	.byte	0x27
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -580
	.uleb128 0x9
	.string	"src"
	.2byte	0x4c9
	.byte	0x45
	.4byte	0x55bc
	.uleb128 0x3
	.byte	0x91
	.sleb128 -592
	.uleb128 0x1
	.4byte	.LASF435
	.2byte	0x4cb
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF100
	.2byte	0x4cc
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF150
	.2byte	0x4cd
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"dip"
	.2byte	0x4ce
	.byte	0x15
	.4byte	0x206f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x18e9
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.30
	.uleb128 0x4
	.string	"buf"
	.2byte	0x4d9
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x7
	.8byte	.LBB66
	.8byte	.LBE66-.LBB66
	.4byte	0x5572
	.uleb128 0x1
	.4byte	.LASF436
	.2byte	0x4d7
	.byte	0x42
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB67
	.8byte	.LBE67-.LBB67
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4d7
	.byte	0x8f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4d7
	.byte	0xc3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB68
	.8byte	.LBE68-.LBB68
	.uleb128 0x1
	.4byte	.LASF437
	.2byte	0x4d8
	.byte	0x2b
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB69
	.8byte	.LBE69-.LBB69
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4d8
	.byte	0x78
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4d8
	.byte	0xac
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x11
	.4byte	0x18c
	.uleb128 0x16
	.4byte	.LASF438
	.2byte	0x4b3
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x56e4
	.uleb128 0x8
	.4byte	.LASF30
	.2byte	0x4b3
	.byte	0x1f
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x8
	.4byte	.LASF439
	.2byte	0x4b3
	.byte	0x37
	.4byte	0x206f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF435
	.2byte	0x4b5
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF100
	.2byte	0x4b6
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF150
	.2byte	0x4b7
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"dip"
	.2byte	0x4b8
	.byte	0x15
	.4byte	0x206f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.31
	.uleb128 0x7
	.8byte	.LBB62
	.8byte	.LBE62-.LBB62
	.4byte	0x569a
	.uleb128 0x1
	.4byte	.LASF440
	.2byte	0x4c2
	.byte	0x42
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB63
	.8byte	.LBE63-.LBB63
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4c2
	.byte	0x8f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4c2
	.byte	0xc3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB64
	.8byte	.LBE64-.LBB64
	.uleb128 0x1
	.4byte	.LASF441
	.2byte	0x4c3
	.byte	0x2b
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB65
	.8byte	.LBE65-.LBB65
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x4c3
	.byte	0x78
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x4c3
	.byte	0xac
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x29
	.4byte	.LASF443
	.2byte	0x4ad
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x18
	.4byte	.LASF444
	.2byte	0x48a
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5777
	.uleb128 0x9
	.string	"ip"
	.2byte	0x48a
	.byte	0x27
	.4byte	0x206f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x8
	.4byte	.LASF191
	.2byte	0x48a
	.byte	0x31
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.string	"p"
	.2byte	0x48c
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF24
	.2byte	0x48d
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF445
	.2byte	0x48e
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF446
	.2byte	0x48f
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x16
	.4byte	.LASF447
	.2byte	0x480
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x57c1
	.uleb128 0x9
	.string	"blk"
	.2byte	0x480
	.byte	0x20
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x9
	.string	"src"
	.2byte	0x480
	.byte	0x33
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"be"
	.2byte	0x482
	.byte	0x1b
	.4byte	0x57c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x11
	.4byte	0x8b4
	.uleb128 0x1c
	.4byte	.LASF448
	.2byte	0x467
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x585e
	.uleb128 0x8
	.4byte	.LASF98
	.2byte	0x467
	.byte	0x32
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x9
	.string	"src"
	.2byte	0x467
	.byte	0x48
	.4byte	0xcf9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x2084
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.32
	.uleb128 0x3
	.8byte	.LBB60
	.8byte	.LBE60-.LBB60
	.uleb128 0x1
	.4byte	.LASF449
	.2byte	0x477
	.byte	0x22
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB61
	.8byte	.LBE61-.LBB61
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x477
	.byte	0x62
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x477
	.byte	0x96
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
	.4byte	.LASF450
	.2byte	0x45e
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x58a8
	.uleb128 0x9
	.string	"blk"
	.2byte	0x45e
	.byte	0x1f
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x9
	.string	"dst"
	.2byte	0x45e
	.byte	0x2c
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x4
	.string	"be"
	.2byte	0x460
	.byte	0x1b
	.4byte	0x57c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x2b
	.4byte	.LASF451
	.2byte	0x457
	.byte	0xd
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x58d5
	.uleb128 0x9
	.string	"be"
	.2byte	0x457
	.byte	0x32
	.4byte	0x57c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x18
	.4byte	.LASF452
	.2byte	0x42d
	.byte	0x1e
	.4byte	0x57c1
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x5cec
	.uleb128 0x8
	.4byte	.LASF100
	.2byte	0x42d
	.byte	0x37
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x4
	.string	"i"
	.2byte	0x42f
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.uleb128 0x1
	.4byte	.LASF453
	.2byte	0x430
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x4
	.string	"i_0"
	.2byte	0x431
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x1ee8
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.33
	.uleb128 0x7
	.8byte	.LBB36
	.8byte	.LBE36-.LBB36
	.4byte	0x5996
	.uleb128 0x1
	.4byte	.LASF454
	.2byte	0x437
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x3
	.8byte	.LBB37
	.8byte	.LBE37-.LBB37
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x437
	.byte	0x9b
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x437
	.byte	0xcf
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB38
	.8byte	.LBE38-.LBB38
	.4byte	0x59e4
	.uleb128 0x1
	.4byte	.LASF455
	.2byte	0x438
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x3
	.8byte	.LBB39
	.8byte	.LBE39-.LBB39
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x438
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x438
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB40
	.8byte	.LBE40-.LBB40
	.4byte	0x5a32
	.uleb128 0x1
	.4byte	.LASF456
	.2byte	0x439
	.byte	0x1c
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x3
	.8byte	.LBB41
	.8byte	.LBE41-.LBB41
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x439
	.byte	0x9c
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x439
	.byte	0xd0
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB42
	.8byte	.LBE42-.LBB42
	.4byte	0x5a7f
	.uleb128 0x1
	.4byte	.LASF457
	.2byte	0x441
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB43
	.8byte	.LBE43-.LBB43
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x441
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x441
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB44
	.8byte	.LBE44-.LBB44
	.4byte	0x5acc
	.uleb128 0x1
	.4byte	.LASF458
	.2byte	0x44b
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB45
	.8byte	.LBE45-.LBB45
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x44b
	.byte	0x9e
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x44b
	.byte	0xd2
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB46
	.8byte	.LBE46-.LBB46
	.4byte	0x5b19
	.uleb128 0x1
	.4byte	.LASF459
	.2byte	0x44c
	.byte	0x2d
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB47
	.8byte	.LBE47-.LBB47
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x44c
	.byte	0xb0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x44c
	.byte	0xe4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB48
	.8byte	.LBE48-.LBB48
	.4byte	0x5b69
	.uleb128 0x17
	.4byte	.LASF460
	.2byte	0x44c
	.2byte	0x1aa
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB49
	.8byte	.LBE49-.LBB49
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x44c
	.2byte	0x22d
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x44c
	.2byte	0x261
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB50
	.8byte	.LBE50-.LBB50
	.4byte	0x5bb7
	.uleb128 0x1
	.4byte	.LASF461
	.2byte	0x44f
	.byte	0x14
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB51
	.8byte	.LBE51-.LBB51
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x44f
	.byte	0x97
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x44f
	.byte	0xcb
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB52
	.8byte	.LBE52-.LBB52
	.4byte	0x5c05
	.uleb128 0x1
	.4byte	.LASF462
	.2byte	0x450
	.byte	0x14
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.8byte	.LBB53
	.8byte	.LBE53-.LBB53
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x450
	.byte	0x97
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x450
	.byte	0xcb
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB54
	.8byte	.LBE54-.LBB54
	.4byte	0x5c53
	.uleb128 0x1
	.4byte	.LASF463
	.2byte	0x451
	.byte	0x14
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.8byte	.LBB55
	.8byte	.LBE55-.LBB55
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x451
	.byte	0x97
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x451
	.byte	0xcb
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB56
	.8byte	.LBE56-.LBB56
	.4byte	0x5ca1
	.uleb128 0x1
	.4byte	.LASF464
	.2byte	0x452
	.byte	0x14
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.8byte	.LBB57
	.8byte	.LBE57-.LBB57
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x452
	.byte	0x97
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x452
	.byte	0xcb
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB58
	.8byte	.LBE58-.LBB58
	.uleb128 0x1
	.4byte	.LASF465
	.2byte	0x453
	.byte	0x2a
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.8byte	.LBB59
	.8byte	.LBE59-.LBB59
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x453
	.byte	0xad
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x453
	.byte	0xe1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x18
	.4byte	.LASF466
	.2byte	0x413
	.byte	0xc
	.4byte	0x4d
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x600f
	.uleb128 0x1
	.4byte	.LASF467
	.2byte	0x415
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF468
	.2byte	0x416
	.byte	0x13
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x4
	.string	"i"
	.2byte	0x417
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x513d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.34
	.uleb128 0x7
	.8byte	.LBB18
	.8byte	.LBE18-.LBB18
	.4byte	0x5d9d
	.uleb128 0x1
	.4byte	.LASF469
	.2byte	0x41e
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x3
	.8byte	.LBB19
	.8byte	.LBE19-.LBB19
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x41e
	.byte	0x98
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x41e
	.byte	0xcc
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB20
	.8byte	.LBE20-.LBB20
	.4byte	0x5dee
	.uleb128 0x17
	.4byte	.LASF470
	.2byte	0x41e
	.2byte	0x196
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x3
	.8byte	.LBB21
	.8byte	.LBE21-.LBB21
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x41e
	.2byte	0x213
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x41e
	.2byte	0x247
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB22
	.8byte	.LBE22-.LBB22
	.4byte	0x5e3c
	.uleb128 0x1
	.4byte	.LASF471
	.2byte	0x41f
	.byte	0x23
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x3
	.8byte	.LBB23
	.8byte	.LBE23-.LBB23
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x41f
	.byte	0xa0
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x41f
	.byte	0xd4
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB24
	.8byte	.LBE24-.LBB24
	.4byte	0x5e89
	.uleb128 0x1
	.4byte	.LASF472
	.2byte	0x424
	.byte	0x1b
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB25
	.8byte	.LBE25-.LBB25
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x424
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x424
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB26
	.8byte	.LBE26-.LBB26
	.4byte	0x5ed9
	.uleb128 0x17
	.4byte	.LASF473
	.2byte	0x424
	.2byte	0x197
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB27
	.8byte	.LBE27-.LBB27
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x424
	.2byte	0x219
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x424
	.2byte	0x24d
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB28
	.8byte	.LBE28-.LBB28
	.4byte	0x5f26
	.uleb128 0x1
	.4byte	.LASF474
	.2byte	0x425
	.byte	0x2d
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.8byte	.LBB29
	.8byte	.LBE29-.LBB29
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x425
	.byte	0xb2
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x425
	.byte	0xe6
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB30
	.8byte	.LBE30-.LBB30
	.4byte	0x5f76
	.uleb128 0x17
	.4byte	.LASF475
	.2byte	0x425
	.2byte	0x1ac
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.8byte	.LBB31
	.8byte	.LBE31-.LBB31
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x425
	.2byte	0x231
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x425
	.2byte	0x265
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB32
	.8byte	.LBE32-.LBB32
	.4byte	0x5fc4
	.uleb128 0x1
	.4byte	.LASF476
	.2byte	0x427
	.byte	0x18
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.8byte	.LBB33
	.8byte	.LBE33-.LBB33
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x427
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x427
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB34
	.8byte	.LBE34-.LBB34
	.uleb128 0x1
	.4byte	.LASF477
	.2byte	0x428
	.byte	0x18
	.4byte	0x84
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.8byte	.LBB35
	.8byte	.LBE35-.LBB35
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x428
	.byte	0x9d
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x428
	.byte	0xd1
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
	.4byte	.LASF478
	.2byte	0x40e
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x608b
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x513d
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.35
	.uleb128 0x3
	.8byte	.LBB16
	.8byte	.LBE16-.LBB16
	.uleb128 0x1
	.4byte	.LASF479
	.2byte	0x410
	.byte	0xab
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB17
	.8byte	.LBE17-.LBB17
	.uleb128 0x13
	.4byte	.LASF146
	.2byte	0x410
	.2byte	0x105
	.uleb128 0x14
	.4byte	.LASF145
	.2byte	0x410
	.2byte	0x139
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
	.4byte	.LASF480
	.2byte	0x400
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x61f9
	.uleb128 0x4
	.string	"i"
	.2byte	0x402
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x18e9
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.36
	.uleb128 0x7
	.8byte	.LBB8
	.8byte	.LBE8-.LBB8
	.4byte	0x6115
	.uleb128 0x1
	.4byte	.LASF481
	.2byte	0x405
	.byte	0x18
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB9
	.8byte	.LBE9-.LBB9
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x405
	.byte	0x95
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x405
	.byte	0xc9
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB10
	.8byte	.LBE10-.LBB10
	.4byte	0x6162
	.uleb128 0x1
	.4byte	.LASF482
	.2byte	0x406
	.byte	0x18
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x3
	.8byte	.LBB11
	.8byte	.LBE11-.LBB11
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x406
	.byte	0x95
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x406
	.byte	0xc9
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x7
	.8byte	.LBB12
	.8byte	.LBE12-.LBB12
	.4byte	0x61af
	.uleb128 0x1
	.4byte	.LASF483
	.2byte	0x407
	.byte	0x18
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.8byte	.LBB13
	.8byte	.LBE13-.LBB13
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x407
	.byte	0x95
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x407
	.byte	0xc9
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x3
	.8byte	.LBB14
	.8byte	.LBE14-.LBB14
	.uleb128 0x1
	.4byte	.LASF484
	.2byte	0x408
	.byte	0x18
	.4byte	0x84
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.8byte	.LBB15
	.8byte	.LBE15-.LBB15
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x408
	.byte	0x95
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x408
	.byte	0xc9
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF485
	.2byte	0x3e7
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6291
	.uleb128 0x8
	.4byte	.LASF98
	.2byte	0x3e7
	.byte	0x31
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x9
	.string	"dst"
	.2byte	0x3e7
	.byte	0x41
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x42ea
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.37
	.uleb128 0x3
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x1
	.4byte	.LASF486
	.2byte	0x3f6
	.byte	0x22
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x3f6
	.byte	0x62
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x3f6
	.byte	0x96
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x16
	.4byte	.LASF487
	.2byte	0x37e
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6354
	.uleb128 0x4
	.string	"s"
	.2byte	0x380
	.byte	0x9
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF152
	.2byte	0x381
	.byte	0x19
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF488
	.2byte	0x382
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"st"
	.2byte	0x383
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF489
	.2byte	0x384
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF490
	.2byte	0x385
	.byte	0x13
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF491
	.2byte	0x386
	.byte	0x14
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF492
	.2byte	0x387
	.byte	0x14
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF493
	.2byte	0x388
	.byte	0x14
	.4byte	0x33
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF494
	.2byte	0x389
	.byte	0x14
	.4byte	0x33
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF495
	.2byte	0x38a
	.byte	0x19
	.4byte	0x33
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.byte	0
	.uleb128 0x18
	.4byte	.LASF496
	.2byte	0x378
	.byte	0x1d
	.4byte	0x78
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x63e0
	.uleb128 0x9
	.string	"b"
	.2byte	0x378
	.byte	0x32
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x63f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.28
	.uleb128 0x3
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x1
	.4byte	.LASF497
	.2byte	0x37a
	.byte	0x3f
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x37a
	.byte	0x85
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x37a
	.byte	0xb9
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x41
	.4byte	0x63f0
	.uleb128 0x12
	.4byte	0x33
	.byte	0x6
	.byte	0
	.uleb128 0x15
	.4byte	0x63e0
	.uleb128 0x18
	.4byte	.LASF498
	.2byte	0x36e
	.byte	0x1d
	.4byte	0x78
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6481
	.uleb128 0x4
	.string	"x"
	.2byte	0x370
	.byte	0x19
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0xb
	.4byte	.LASF194
	.4byte	0x63f0
	.uleb128 0x9
	.byte	0x3
	.8byte	__func__.14
	.uleb128 0x3
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1
	.4byte	.LASF499
	.2byte	0x376
	.byte	0x47
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x5
	.4byte	.LASF146
	.2byte	0x376
	.byte	0x8f
	.uleb128 0x6
	.4byte	.LASF145
	.2byte	0x376
	.byte	0xc3
	.uleb128 0x2
	.4byte	0x4d
	.byte	0
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x2b
	.4byte	.LASF500
	.2byte	0x368
	.byte	0x14
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x64ca
	.uleb128 0x9
	.string	"f0"
	.2byte	0x368
	.byte	0x32
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x9
	.string	"f1"
	.2byte	0x368
	.byte	0x4c
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x9
	.string	"f2"
	.2byte	0x368
	.byte	0x66
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF501
	.2byte	0x364
	.byte	0x1d
	.4byte	0x78
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x6507
	.uleb128 0x9
	.string	"b"
	.2byte	0x364
	.byte	0x36
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x9
	.string	"o"
	.2byte	0x364
	.byte	0x49
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x37
	.4byte	.LASF504
	.byte	0x1
	.2byte	0x360
	.byte	0x14
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x9
	.string	"b"
	.2byte	0x360
	.byte	0x2d
	.4byte	0x33
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x9
	.string	"o"
	.2byte	0x360
	.byte	0x40
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x9
	.string	"v"
	.2byte	0x360
	.byte	0x53
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
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
	.uleb128 0x2
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x4
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
	.uleb128 0x5
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x6
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x7
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
	.uleb128 0x8
	.uleb128 0x5
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
	.uleb128 0x9
	.uleb128 0x5
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
	.uleb128 0xa
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0x5
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
	.sleb128 1
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
	.uleb128 0xe
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x10
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
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x14
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x16
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
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
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0x19
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
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
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
	.uleb128 0x1b
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
	.uleb128 0x1c
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x1d
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 25
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x23
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.byte	0
	.byte	0
	.uleb128 0x24
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x25
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x26
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 4
	.uleb128 0x88
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x27
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x28
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x29
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 6
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
	.byte	0
	.byte	0
	.uleb128 0x2a
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
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
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x2b
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
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
	.uleb128 0x2c
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
	.uleb128 0x2d
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
	.uleb128 0x2e
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x2f
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x30
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x88
	.uleb128 0xb
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x31
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x88
	.uleb128 0x5
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x32
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x33
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x34
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
	.uleb128 0x35
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x36
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x37
	.uleb128 0x2e
	.byte	0x1
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
	.uleb128 .LBB291-.Ltext0
	.uleb128 .LBE291-.Ltext0
	.byte	0x4
	.uleb128 .LBB296-.Ltext0
	.uleb128 .LBE296-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF258:
	.string	"comps"
.LASF101:
	.string	"refcnt"
.LASF213:
	.string	"newabs"
.LASF173:
	.string	"blk_idx"
.LASF28:
	.string	"addrs"
.LASF448:
	.string	"virtio_blk_write"
.LASF159:
	.string	"free_fs_table"
.LASF184:
	.string	"fs_open2"
.LASF125:
	.string	"get_current_file_table"
.LASF348:
	.string	"__neo_array_index72_0"
.LASF360:
	.string	"__neo_array_index58_0"
.LASF305:
	.string	"__neo_array_index82_0"
.LASF230:
	.string	"__neo_array_index101_0"
.LASF161:
	.string	"owner"
.LASF65:
	.string	"used"
.LASF503:
	.string	"anonymous_typeY4"
.LASF270:
	.string	"__neo_array_index93_1"
.LASF193:
	.string	"path2"
.LASF320:
	.string	"alloc_file"
.LASF328:
	.string	"__neo_array_index75_0"
.LASF113:
	.string	"bcache_hits"
.LASF330:
	.string	"__neo_array_index77_0"
.LASF185:
	.string	"path"
.LASF362:
	.string	"__neo_array_index60_0"
.LASF141:
	.string	"neoc_proc_has_supp_gid"
.LASF319:
	.string	"free_file"
.LASF78:
	.string	"write_open"
.LASF165:
	.string	"fs_close"
.LASF194:
	.string	"__func__"
.LASF418:
	.string	"bitmap_clear"
.LASF420:
	.string	"__neo_div_right16"
.LASF423:
	.string	"__neo_div_right17"
.LASF421:
	.string	"__neo_div_right18"
.LASF26:
	.string	"mtime"
.LASF488:
	.string	"devfeat"
.LASF70:
	.string	"oflags"
.LASF427:
	.string	"__neo_array_index29_0"
.LASF148:
	.string	"puts"
.LASF14:
	.string	"nlog"
.LASF489:
	.string	"devQ"
.LASF40:
	.string	"trapframe"
.LASF20:
	.string	"type"
.LASF32:
	.string	"stat"
.LASF17:
	.string	"bmapstart"
.LASF51:
	.string	"xstatus"
.LASF45:
	.string	"vaddr"
.LASF465:
	.string	"__neo_array_index26_0"
.LASF397:
	.string	"__neo_array_index41_0"
.LASF142:
	.string	"proc_slot_get"
.LASF493:
	.string	"sz_used"
.LASF389:
	.string	"__neo_array_index46_0"
.LASF363:
	.string	"__neo_array_index61_0"
.LASF355:
	.string	"__neo_array_index53_0"
.LASF111:
	.string	"bcache"
.LASF219:
	.string	"oname"
.LASF229:
	.string	"tlen"
.LASF416:
	.string	"sbuf"
.LASF367:
	.string	"path_lookup"
.LASF339:
	.string	"__neo_array_index66_0"
.LASF308:
	.string	"__neo_array_index81_0"
.LASF295:
	.string	"__neo_div_right25"
.LASF260:
	.string	"__neo_array_index86_0"
.LASF130:
	.string	"yield"
.LASF162:
	.string	"result"
.LASF55:
	.string	"debug_"
.LASF301:
	.string	"nexttok"
.LASF5:
	.string	"long int"
.LASF68:
	.string	"read_pipe"
.LASF335:
	.string	"rest"
.LASF288:
	.string	"block_end"
.LASF453:
	.string	"slot"
.LASF43:
	.string	"parent_pid"
.LASF400:
	.string	"bmapblocks"
.LASF237:
	.string	"zero"
.LASF132:
	.string	"neoc_file_owner_remove"
.LASF30:
	.string	"inum"
.LASF201:
	.string	"fs_chown"
.LASF100:
	.string	"blkno"
.LASF445:
	.string	"shift"
.LASF303:
	.string	"copy"
.LASF494:
	.string	"sz_total"
.LASF47:
	.string	"zombie"
.LASF59:
	.string	"pgrp"
.LASF490:
	.string	"drvQ"
.LASF480:
	.string	"bcache_init"
.LASF106:
	.string	"avail"
.LASF458:
	.string	"__neo_array_index19_0"
.LASF58:
	.string	"umask"
.LASF411:
	.string	"__neo_array_index34_0"
.LASF34:
	.string	"mepc"
.LASF195:
	.string	"leaf"
.LASF417:
	.string	"__neo_array_index39_0"
.LASF356:
	.string	"__neo_array_index54_0"
.LASF312:
	.string	"is_stdout"
.LASF304:
	.string	"pipewrite"
.LASF322:
	.string	"alloc_pipe"
.LASF216:
	.string	"fs_rename"
.LASF41:
	.string	"context"
.LASF231:
	.string	"__neo_array_index102_0"
.LASF214:
	.string	"__neo_array_index107_0"
.LASF6:
	.string	"unsigned char"
.LASF271:
	.string	"__neo_array_index94_0"
.LASF79:
	.string	"nreader"
.LASF82:
	.string	"linked_file_list"
.LASF425:
	.string	"__neo_div_right13"
.LASF321:
	.string	"free_pipe"
.LASF500:
	.string	"set_flags"
.LASF103:
	.string	"last_use"
.LASF164:
	.string	"fs_exit"
.LASF402:
	.string	"__neo_div_right19"
.LASF208:
	.string	"fs_stat"
.LASF315:
	.string	"fs_init"
.LASF114:
	.string	"bcache_misses"
.LASF188:
	.string	"new_inum"
.LASF380:
	.string	"first_blk"
.LASF135:
	.string	"strncat"
.LASF120:
	.string	"_Bool"
.LASF340:
	.string	"lbuf"
.LASF235:
	.string	"pdi3"
.LASF118:
	.string	"neoc_pipe_linked_file_clear_pipe_refs"
.LASF56:
	.string	"deleted"
.LASF220:
	.string	"nname"
.LASF3:
	.string	"char"
.LASF19:
	.string	"dinode"
.LASF174:
	.string	"blk_off"
.LASF160:
	.string	"fs_dup_table"
.LASF450:
	.string	"read_block"
.LASF182:
	.string	"remaining"
.LASF15:
	.string	"logstart"
.LASF151:
	.string	"whence"
.LASF481:
	.string	"__neo_array_index1_0"
.LASF116:
	.string	"g_time_offset"
.LASF461:
	.string	"__neo_array_index22_0"
.LASF236:
	.string	"pdir"
.LASF398:
	.string	"__neo_array_index42_0"
.LASF468:
	.string	"oldest"
.LASF39:
	.string	"proc"
.LASF91:
	.string	"flags"
.LASF390:
	.string	"__neo_array_index47_0"
.LASF364:
	.string	"__neo_array_index62_0"
.LASF36:
	.string	"process_kalloc_address"
.LASF133:
	.string	"neoc_file_owner_add"
.LASF38:
	.string	"process_kalloc_address_list"
.LASF117:
	.string	"gActiveProc"
.LASF189:
	.string	"pinum"
.LASF289:
	.string	"blk_idx_8"
.LASF139:
	.string	"strcmp"
.LASF204:
	.string	"__neo_array_index110_0"
.LASF486:
	.string	"__neo_div_right1"
.LASF479:
	.string	"__neo_div_right2"
.LASF449:
	.string	"__neo_div_right3"
.LASF499:
	.string	"__neo_div_right4"
.LASF440:
	.string	"__neo_div_right5"
.LASF441:
	.string	"__neo_div_right6"
.LASF497:
	.string	"__neo_div_right7"
.LASF436:
	.string	"__neo_div_right8"
.LASF318:
	.string	"user_va"
.LASF158:
	.string	"fs_dup2"
.LASF261:
	.string	"__neo_array_index87_0"
.LASF282:
	.string	"__neo_div_right27"
.LASF435:
	.string	"inodes_per_blk"
.LASF240:
	.string	"has_entries"
.LASF63:
	.string	"file"
.LASF256:
	.string	"need"
.LASF52:
	.string	"file_table"
.LASF143:
	.string	"printf"
.LASF37:
	.string	"num_process_kalloc_address"
.LASF352:
	.string	"prefix"
.LASF44:
	.string	"stack_top"
.LASF86:
	.string	"FK_FILE"
.LASF171:
	.string	"left"
.LASF419:
	.string	"bmapblk"
.LASF382:
	.string	"second_entries"
.LASF474:
	.string	"__neo_array_index10_0"
.LASF170:
	.string	"to_total"
.LASF455:
	.string	"__neo_array_index15_0"
.LASF422:
	.string	"__neo_array_index30_0"
.LASF375:
	.string	"idx1"
.LASF376:
	.string	"idx2"
.LASF13:
	.string	"ninodes"
.LASF412:
	.string	"__neo_array_index35_0"
.LASF369:
	.string	"__neo_array_index50_0"
.LASF394:
	.string	"dbl_index0"
.LASF395:
	.string	"dbl_index1"
.LASF311:
	.string	"is_tty"
.LASF357:
	.string	"__neo_array_index55_0"
.LASF134:
	.string	"neoc_proc_is_file_open"
.LASF2:
	.string	"long unsigned int"
.LASF496:
	.string	"BBLOCK"
.LASF349:
	.string	"__neo_array_index73_0"
.LASF221:
	.string	"__neo_array_index103_0"
.LASF379:
	.string	"first_entries"
.LASF264:
	.string	"__neo_array_index90_0"
.LASF226:
	.string	"target"
.LASF434:
	.string	"write_inode"
.LASF215:
	.string	"__neo_array_index108_0"
.LASF274:
	.string	"__neo_array_index95_0"
.LASF275:
	.string	"__neo_array_index95_1"
.LASF307:
	.string	"piperead"
.LASF80:
	.string	"nwriter"
.LASF67:
	.string	"pipe_used"
.LASF404:
	.string	"iblk"
.LASF487:
	.string	"virtio_blk_init"
.LASF245:
	.string	"fs_mkdir"
.LASF109:
	.string	"status_byte"
.LASF205:
	.string	"fs_readlink"
.LASF429:
	.string	"bitmap_test"
.LASF314:
	.string	"is_pipe"
.LASF383:
	.string	"db_5"
.LASF447:
	.string	"write_block"
.LASF61:
	.string	"supp_gid_list"
.LASF478:
	.string	"bcache_stats"
.LASF156:
	.string	"oldfd"
.LASF166:
	.string	"massive"
.LASF327:
	.string	"dump_inode"
.LASF276:
	.string	"write_data_inode"
.LASF104:
	.string	"vbase"
.LASF482:
	.string	"__neo_array_index2_0"
.LASF462:
	.string	"__neo_array_index23_0"
.LASF471:
	.string	"__neo_array_index7_0"
.LASF243:
	.string	"pdi2"
.LASF9:
	.string	"long long int"
.LASF202:
	.string	"fs_chmod"
.LASF49:
	.string	"program"
.LASF431:
	.string	"__neo_array_index28_0"
.LASF46:
	.string	"memsz"
.LASF386:
	.string	"__neo_array_index43_0"
.LASF69:
	.string	"write_pipe"
.LASF126:
	.string	"neoc_fs_pop_free_file"
.LASF317:
	.string	"pipealloc"
.LASF64:
	.string	"kind"
.LASF391:
	.string	"__neo_array_index48_0"
.LASF365:
	.string	"__neo_array_index63_0"
.LASF407:
	.string	"second"
.LASF18:
	.string	"superblock"
.LASF378:
	.string	"nb_3"
.LASF381:
	.string	"nb_4"
.LASF344:
	.string	"__neo_array_index68_0"
.LASF66:
	.string	"pipe"
.LASF336:
	.string	"depth"
.LASF262:
	.string	"__neo_array_index88_0"
.LASF42:
	.string	"parent"
.LASF147:
	.string	"kalloc"
.LASF73:
	.string	"spipe"
.LASF155:
	.string	"fs_fstat_fd"
.LASF492:
	.string	"sz_avail"
.LASF361:
	.string	"__neo_array_index59_0"
.LASF199:
	.string	"fs_open"
.LASF169:
	.string	"count"
.LASF90:
	.string	"addr"
.LASF210:
	.string	"oldpath"
.LASF87:
	.string	"FK_PIPE"
.LASF444:
	.string	"check_perm"
.LASF8:
	.string	"unsigned int"
.LASF98:
	.string	"sector"
.LASF176:
	.string	"disk_blk"
.LASF443:
	.string	"read_superblock"
.LASF424:
	.string	"bitmap_set"
.LASF293:
	.string	"__neo_array_index83_0"
.LASF99:
	.string	"bcache_entry"
.LASF475:
	.string	"__neo_array_index11_0"
.LASF287:
	.string	"abs_idx"
.LASF22:
	.string	"minor"
.LASF456:
	.string	"__neo_array_index16_0"
.LASF393:
	.string	"inode_blockno"
.LASF408:
	.string	"__neo_array_index31_0"
.LASF211:
	.string	"newpath"
.LASF163:
	.string	"orig"
.LASF353:
	.string	"__neo_array_index51_0"
.LASF150:
	.string	"offset"
.LASF95:
	.string	"virtq_used"
.LASF370:
	.string	"read_data"
.LASF347:
	.string	"__neo_array_index71_0"
.LASF29:
	.string	"dirent"
.LASF93:
	.string	"virtq_used_elem"
.LASF278:
	.string	"parent_inum"
.LASF94:
	.string	"virtq_avail"
.LASF337:
	.string	"first"
.LASF358:
	.string	"__neo_array_index56_0"
.LASF27:
	.string	"ctime"
.LASF224:
	.string	"__neo_array_index106_0"
.LASF203:
	.string	"fs_lstat"
.LASF292:
	.string	"block_end_11"
.LASF222:
	.string	"__neo_array_index104_0"
.LASF85:
	.string	"FK_STDERR"
.LASF265:
	.string	"__neo_array_index91_0"
.LASF266:
	.string	"__neo_array_index91_1"
.LASF285:
	.string	"ents"
.LASF207:
	.string	"__neo_array_index109_0"
.LASF234:
	.string	"fs_unlink"
.LASF272:
	.string	"__neo_array_index96_0"
.LASF273:
	.string	"__neo_array_index96_1"
.LASF329:
	.string	"__neo_array_index76_0"
.LASF467:
	.string	"victim"
.LASF10:
	.string	"long double"
.LASF124:
	.string	"neoc_file_owner_clear"
.LASF140:
	.string	"strncmp"
.LASF442:
	.string	"file_system_init"
.LASF325:
	.string	"owner_add"
.LASF351:
	.string	"path_lookup_lim"
.LASF89:
	.string	"virtq_desc"
.LASF502:
	.string	"GNU C23 15.2.0 -mabi=lp64d -mno-small-data-limit=0 -mcmodel=medany -misa-spec=20191213 -mtls-dialect=trad -march=rv64imafdc_zicsr_zifencei_zmmul_zaamo_zalrsc_zca_zcd -g -fno-pie -ffreestanding -fzero-init-padding-bits=all"
.LASF96:
	.string	"virtio_blk_req"
.LASF437:
	.string	"__neo_div_right9"
.LASF119:
	.string	"neoc_pipe_linked_file_remove"
.LASF250:
	.string	"outsz"
.LASF483:
	.string	"__neo_array_index3_0"
.LASF129:
	.string	"neoc_fs_pop_free_pipe"
.LASF11:
	.string	"size"
.LASF291:
	.string	"ents_10"
.LASF463:
	.string	"__neo_array_index24_0"
.LASF239:
	.string	"fs_rmdir"
.LASF345:
	.string	"__neo_array_index69_0"
.LASF75:
	.string	"nread"
.LASF200:
	.string	"fs_utimes"
.LASF77:
	.string	"read_open"
.LASF242:
	.string	"i_15"
.LASF225:
	.string	"fs_symlink"
.LASF385:
	.string	"secondbuf"
.LASF387:
	.string	"__neo_array_index44_0"
.LASF181:
	.string	"fs_read"
.LASF48:
	.string	"pagetable"
.LASF71:
	.string	"num_owner_process"
.LASF191:
	.string	"want"
.LASF392:
	.string	"__neo_array_index49_0"
.LASF366:
	.string	"__neo_array_index64_0"
.LASF81:
	.string	"num_linked_file"
.LASF279:
	.string	"namebuf"
.LASF186:
	.string	"created_new"
.LASF154:
	.string	"fs_lseek"
.LASF198:
	.string	"__neo_array_index112_0"
.LASF324:
	.string	"owner_remove"
.LASF269:
	.string	"__neo_array_index93_0"
.LASF83:
	.string	"FK_STDIN"
.LASF122:
	.string	"neoc_pipe_linked_file_add"
.LASF263:
	.string	"__neo_array_index89_0"
.LASF54:
	.string	"process_pages_list"
.LASF316:
	.string	"new_file_table"
.LASF53:
	.string	"num_process_pages"
.LASF84:
	.string	"FK_STDOUT"
.LASF21:
	.string	"major"
.LASF149:
	.string	"memset"
.LASF123:
	.string	"neoc_fs_push_free_file"
.LASF12:
	.string	"nblocks"
.LASF197:
	.string	"__neo_array_index111_0"
.LASF403:
	.string	"free_inode_blocks"
.LASF138:
	.string	"strncpy"
.LASF105:
	.string	"desc"
.LASF451:
	.string	"bcache_release"
.LASF249:
	.string	"__neo_array_index98_0"
.LASF107:
	.string	"vq_area"
.LASF251:
	.string	"tok_start"
.LASF439:
	.string	"dest"
.LASF190:
	.string	"pdi_inh"
.LASF296:
	.string	"alloc_inode_T_FILE"
.LASF145:
	.string	"exit"
.LASF472:
	.string	"__neo_array_index8_0"
.LASF131:
	.string	"neoc_fs_pool_init"
.LASF178:
	.string	"bufblk"
.LASF115:
	.string	"block_buf"
.LASF368:
	.string	"dir_lookup"
.LASF476:
	.string	"__neo_array_index12_0"
.LASF92:
	.string	"ring"
.LASF501:
	.string	"mr32"
.LASF286:
	.string	"cur_entries"
.LASF409:
	.string	"__neo_array_index32_0"
.LASF218:
	.string	"filedi"
.LASF504:
	.string	"mw32"
.LASF31:
	.string	"name"
.LASF414:
	.string	"__neo_array_index37_0"
.LASF217:
	.string	"oldpd"
.LASF354:
	.string	"__neo_array_index52_0"
.LASF168:
	.string	"fs_write"
.LASF196:
	.string	"leafx"
.LASF137:
	.string	"strtok"
.LASF359:
	.string	"__neo_array_index57_0"
.LASF310:
	.string	"pipe_open"
.LASF238:
	.string	"__neo_array_index100_0"
.LASF4:
	.string	"short int"
.LASF290:
	.string	"disk_blk_9"
.LASF406:
	.string	"sblk"
.LASF24:
	.string	"mode"
.LASF223:
	.string	"__neo_array_index105_0"
.LASF350:
	.string	"__neo_array_index74_0"
.LASF415:
	.string	"__neo_array_index38_0"
.LASF377:
	.string	"dindirect_blk"
.LASF267:
	.string	"__neo_array_index92_0"
.LASF268:
	.string	"__neo_array_index92_1"
.LASF460:
	.string	"__neo_array_index21_0"
.LASF248:
	.string	"__neo_array_index97_0"
.LASF438:
	.string	"read_inode"
.LASF167:
	.string	"fs_size"
.LASF257:
	.string	"merged"
.LASF110:
	.string	"dma_buf"
.LASF175:
	.string	"to_write"
.LASF413:
	.string	"__neo_array_index36_0"
.LASF446:
	.string	"perms"
.LASF284:
	.string	"child_inum"
.LASF128:
	.string	"neoc_pipe_linked_file_clear"
.LASF302:
	.string	"next_inum"
.LASF33:
	.string	"context_t"
.LASF332:
	.string	"__neo_array_index79_0"
.LASF323:
	.string	"build_abs_normalized"
.LASF277:
	.string	"remove_dirent"
.LASF373:
	.string	"inode_bmap_alloc"
.LASF498:
	.string	"fs_now"
.LASF112:
	.string	"bcache_time"
.LASF491:
	.string	"sz_desc"
.LASF331:
	.string	"__neo_array_index78_0"
.LASF16:
	.string	"inodestart"
.LASF136:
	.string	"strlen"
.LASF399:
	.string	"alloc_data_block"
.LASF430:
	.string	"__neo_div_right10"
.LASF432:
	.string	"__neo_div_right11"
.LASF433:
	.string	"__neo_div_right12"
.LASF297:
	.string	"path_parent_lookup_abs"
.LASF428:
	.string	"__neo_div_right14"
.LASF426:
	.string	"__neo_div_right15"
.LASF254:
	.string	"i_12"
.LASF255:
	.string	"i_13"
.LASF246:
	.string	"i_14"
.LASF121:
	.string	"panic"
.LASF228:
	.string	"i_16"
.LASF187:
	.string	"i_17"
.LASF192:
	.string	"i_18"
.LASF384:
	.string	"firstbuf"
.LASF144:
	.string	"memcpy"
.LASF172:
	.string	"written"
.LASF76:
	.string	"nwrite"
.LASF343:
	.string	"__neo_array_index67_0"
.LASF459:
	.string	"__neo_array_index20_0"
.LASF484:
	.string	"__neo_array_index4_0"
.LASF454:
	.string	"__neo_array_index14_0"
.LASF464:
	.string	"__neo_array_index25_0"
.LASF473:
	.string	"__neo_array_index9_0"
.LASF396:
	.string	"__neo_array_index40_0"
.LASF227:
	.string	"linkpath"
.LASF50:
	.string	"program_size"
.LASF23:
	.string	"nlink"
.LASF388:
	.string	"__neo_array_index45_0"
.LASF371:
	.string	"__neo_div_right20"
.LASF372:
	.string	"__neo_div_right21"
.LASF309:
	.string	"__neo_div_right22"
.LASF306:
	.string	"__neo_div_right23"
.LASF294:
	.string	"__neo_div_right24"
.LASF206:
	.string	"bufsz"
.LASF280:
	.string	"__neo_div_right26"
.LASF232:
	.string	"__neo_div_right28"
.LASF233:
	.string	"__neo_div_right29"
.LASF466:
	.string	"bcache_evict"
.LASF209:
	.string	"fs_link"
.LASF253:
	.string	"llen"
.LASF485:
	.string	"virtio_blk_read"
.LASF338:
	.string	"__neo_array_index65_0"
.LASF333:
	.string	"__neo_array_index80_0"
.LASF97:
	.string	"reserved"
.LASF405:
	.string	"dblk"
.LASF470:
	.string	"__neo_array_index6_0"
.LASF157:
	.string	"newfd"
.LASF25:
	.string	"atime"
.LASF127:
	.string	"neoc_fs_push_free_pipe"
.LASF259:
	.string	"__neo_array_index85_0"
.LASF60:
	.string	"nsupp"
.LASF495:
	.string	"vq_phys"
.LASF72:
	.string	"owner_process_list"
.LASF452:
	.string	"bcache_get"
.LASF7:
	.string	"short unsigned int"
.LASF62:
	.string	"username"
.LASF298:
	.string	"leafname"
.LASF244:
	.string	"__neo_array_index99_0"
.LASF108:
	.string	"aidx"
.LASF152:
	.string	"base"
.LASF212:
	.string	"oldabs"
.LASF35:
	.string	"process_pages"
.LASF247:
	.string	"newi"
.LASF179:
	.string	"__neo_div_right30"
.LASF180:
	.string	"__neo_div_right31"
.LASF183:
	.string	"to_read"
.LASF241:
	.string	"entries"
.LASF299:
	.string	"save"
.LASF469:
	.string	"__neo_array_index5_0"
.LASF326:
	.string	"owner_cap"
.LASF153:
	.string	"newoff"
.LASF374:
	.string	"indirect_blk"
.LASF102:
	.string	"dirty"
.LASF146:
	.string	"stackframe"
.LASF341:
	.string	"remain"
.LASF283:
	.string	"add_dirent"
.LASF334:
	.string	"fs_realpath"
.LASF57:
	.string	"next"
.LASF74:
	.string	"data"
.LASF281:
	.string	"__neo_array_index84_0"
.LASF88:
	.string	"FK_TTY"
.LASF313:
	.string	"is_stdin"
.LASF342:
	.string	"joined"
.LASF177:
	.string	"newsize"
.LASF477:
	.string	"__neo_array_index13_0"
.LASF401:
	.string	"datastart"
.LASF346:
	.string	"__neo_array_index70_0"
.LASF457:
	.string	"__neo_array_index18_0"
.LASF300:
	.string	"last"
.LASF410:
	.string	"__neo_array_index33_0"
.LASF252:
	.string	"compn"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"fs_neoc.c"
.LASF1:
	.string	"/root/neo-c/minux9"
	.ident	"GCC: (Ubuntu 15.2.0-16ubuntu1) 15.2.0"
	.section	.note.GNU-stack,"",@progbits
