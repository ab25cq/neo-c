	.file	"fs_neoc.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_c2p0_zicsr2p0_zifencei2p0_zmmul1p0_zaamo1p0_zalrsc1p0_zca1p0_zcd1p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.file 0 "/home/ab25cq/minux9" "fs_neoc.c"
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
	.file 1 "/home/ab25cq/minux9/common.h"
	.loc 1 407 1
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
	.file 2 "/home/ab25cq/minux9/fs.c"
	.loc 2 129 33
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 2 129 6
	mv	a4,a5
	.loc 2 129 36
	lw	a5,-32(s0)
	sw	a5,0(a4)
	.loc 2 130 1
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
	.loc 2 132 1
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
	.loc 2 130 44
	lwu	a4,-28(s0)
	ld	a5,-24(s0)
	add	a5,a4,a5
	.loc 2 130 16
	lw	a5,0(a5)
	sext.w	a5,a5
	.loc 2 131 1
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
	.loc 2 133 1
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
	.loc 2 194 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 194 18
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
	.loc 2 195 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 195 18
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
	.loc 2 196 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 2 196 18
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
	.loc 2 197 1
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
	.align	1
	.type	fs_now, @function
fs_now:
.LFB9:
	.loc 2 199 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 2 201 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 398 6
#APP
# 398 "/home/ab25cq/minux9/fs.c" 1
	csrr a5, time
# 0 "" 2
#NO_APP
	sd	a5,-24(s0)
	.loc 2 398 47
	ld	a4,-24(s0)
	lla	a5,.LC0
	ld	a5,0(a5)
	mulhu	a5,a4,a5
	srli	a5,a5,18
	.loc 2 398 30
	sext.w	a4,a5
	.loc 2 398 29
	lla	a5,g_time_offset
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 399 1
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
	.loc 2 401 1
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
	sw	a5,-20(s0)
	.loc 2 449 18
	lla	a5,sb
	lw	a4,24(a5)
	.loc 2 449 31
	lw	a5,-20(s0)
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 2 449 28
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 450 1
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
.LFE10:
	.size	BBLOCK, .-BBLOCK
	.section	.rodata
	.align	3
.LC1:
	.string	"virtio-blk not found\n"
	.align	3
.LC2:
	.string	"not legacy mmio\n"
	.align	3
.LC3:
	.string	"FEATURES_OK rejected\n"
	.align	3
.LC4:
	.string	"unsupported queue size\n"
	.align	3
.LC5:
	.string	"virtqueue too large\n"
	.align	3
.LC6:
	.string	"kalloc failed\n"
	.text
	.align	1
	.globl	virtio_blk_init
	.type	virtio_blk_init, @function
virtio_blk_init:
.LFB11:
	.loc 2 454 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	.loc 2 466 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 467 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 468 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 469 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 470 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 471 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 472 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 473 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 474 5
	addi	a5,s0,-72
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 475 5
	addi	a5,s0,-80
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 476 5
	addi	a5,s0,-88
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 139 10
	sw	zero,-20(s0)
	.loc 2 139 5
	j	.L10
.L14:
	.loc 2 135 26
	lw	a5,-20(s0)
	mv	a4,a5
	li	a5,65536
	addi	a5,a5,1
	add	a5,a4,a5
	slli	a5,a5,12
	.loc 2 135 13
	sd	a5,-32(s0)
	.loc 2 137 12
	ld	a5,-32(s0)
	li	a1,0
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 2 137 11 discriminator 1
	li	a5,1953656832
	addi	a5,a5,-1674
	bne	a4,a5,.L32
	.loc 2 138 12
	ld	a5,-32(s0)
	li	a1,8
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 2 138 11 discriminator 1
	li	a5,2
	bne	a4,a5,.L12
	.loc 2 137 18
	ld	a4,-32(s0)
	lla	a5,vbase
	sd	a4,0(a5)
	.loc 2 137 13
	j	.L13
.L32:
	.loc 2 136 13
	nop
.L12:
	.loc 2 139 22 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L10:
	.loc 2 139 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,7
	ble	a4,a5,.L14
.L13:
	.loc 2 140 8
	lla	a5,vbase
	ld	a5,0(a5)
	.loc 2 140 7
	bne	a5,zero,.L15
	.loc 2 139 9
	lla	a0,.LC1
	call	puts
.L16:
	.loc 2 139 14
	j	.L16
.L15:
	.loc 2 142 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,4
	mv	a0,a5
	call	mr32
	mv	a5,a0
	mv	a4,a5
	.loc 2 142 7 discriminator 1
	li	a5,1
	beq	a4,a5,.L17
	.loc 2 140 9
	lla	a0,.LC2
	call	puts
.L18:
	.loc 2 140 14
	j	.L18
.L17:
	.loc 2 142 5 discriminator 2
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 2 143 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,3
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 2 145 13
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,16
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 2 145 12 discriminator 1
	sw	a5,-36(s0)
	.loc 2 147 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,32
	mv	a0,a5
	call	mw32
	.loc 2 149 8
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 2 149 25 discriminator 1
	ori	a5,a5,8
	sext.w	a5,a5
	.loc 2 149 7 discriminator 1
	sw	a5,-40(s0)
	.loc 2 150 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 2 155 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,112
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 2 155 27 discriminator 1
	andi	a5,a5,8
	sext.w	a5,a5
	.loc 2 155 7 discriminator 1
	bne	a5,zero,.L19
	.loc 2 152 9
	lla	a0,.LC3
	call	puts
.L20:
	.loc 2 153 14
	j	.L20
.L19:
	.loc 2 155 5 discriminator 2
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,40
	mv	a0,a5
	call	mw32
	.loc 2 156 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,48
	mv	a0,a5
	call	mw32
	.loc 2 157 10
	lla	a5,vbase
	ld	a5,0(a5)
	li	a1,52
	mv	a0,a5
	call	mr32
	mv	a5,a0
	.loc 2 157 9 discriminator 1
	sw	a5,-44(s0)
	.loc 2 158 29
	lw	a5,-44(s0)
	sext.w	a3,a5
	li	a4,128
	bleu	a3,a4,.L21
	li	a5,128
.L21:
	sext.w	a5,a5
	.loc 2 158 9
	sw	a5,-48(s0)
	.loc 2 159 6
	lw	a4,-48(s0)
	lla	a5,Q
	sw	a4,0(a5)
	.loc 2 162 8
	lla	a5,Q
	lw	a5,0(a5)
	.loc 2 162 7
	beq	a5,zero,.L22
	.loc 2 162 13 discriminator 1
	lla	a5,Q
	lw	a4,0(a5)
	.loc 2 162 10 discriminator 1
	li	a5,1024
	bleu	a4,a5,.L23
.L22:
	.loc 2 160 9
	lla	a0,.LC4
	call	puts
.L24:
	.loc 2 160 14
	j	.L24
.L23:
	.loc 2 162 18 discriminator 2
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,4
	.loc 2 162 12 discriminator 2
	sd	a5,-56(s0)
	.loc 2 163 18
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	slli	a5,a5,1
	.loc 2 163 13
	sd	a5,-64(s0)
	.loc 2 164 22
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 2 164 17
	addi	a5,a5,4
	.loc 2 164 12
	sd	a5,-72(s0)
	.loc 2 165 21
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a4,a4,a5
	.loc 2 165 30
	ld	a5,-72(s0)
	add	a5,a4,a5
	.loc 2 165 13
	sd	a5,-80(s0)
	.loc 2 174 10
	j	.L25
.L27:
	.loc 2 168 10
	lla	a5,Q
	lw	a5,0(a5)
	srliw	a5,a5,1
	sext.w	a4,a5
	lla	a5,Q
	sw	a4,0(a5)
	.loc 2 169 22
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,4
	.loc 2 169 16
	sd	a5,-56(s0)
	.loc 2 170 22
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,2
	slli	a5,a5,1
	.loc 2 170 17
	sd	a5,-64(s0)
	.loc 2 171 26
	lla	a5,Q
	lw	a5,0(a5)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,3
	.loc 2 171 21
	addi	a5,a5,4
	.loc 2 171 16
	sd	a5,-72(s0)
	.loc 2 172 25
	ld	a4,-56(s0)
	ld	a5,-64(s0)
	add	a4,a4,a5
	.loc 2 172 34
	ld	a5,-72(s0)
	add	a5,a4,a5
	.loc 2 172 17
	sd	a5,-80(s0)
.L25:
	.loc 2 174 19
	ld	a4,-80(s0)
	.loc 2 174 24
	li	a5,4096
	bleu	a4,a5,.L26
	.loc 2 174 27 discriminator 1
	lla	a5,Q
	lw	a4,0(a5)
	.loc 2 174 24 discriminator 1
	li	a5,1
	bgtu	a4,a5,.L27
.L26:
	.loc 2 176 16
	ld	a4,-80(s0)
	.loc 2 176 7
	li	a5,4096
	bleu	a4,a5,.L28
	.loc 2 174 9
	lla	a0,.LC5
	call	puts
.L29:
	.loc 2 174 14
	j	.L29
.L28:
	.loc 2 176 5 discriminator 1
	lla	a5,vbase
	ld	a4,0(a5)
	lla	a5,Q
	lw	a5,0(a5)
	mv	a2,a5
	li	a1,56
	mv	a0,a4
	call	mw32
	.loc 2 178 13
	call	kalloc
	mv	a4,a0
	.loc 2 178 12 discriminator 1
	lla	a5,vq_area
	sd	a4,0(a5)
	.loc 2 180 8
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 2 180 7
	bne	a5,zero,.L30
	.loc 2 179 9
	lla	a0,.LC6
	call	puts
.L31:
	.loc 2 179 14
	j	.L31
.L30:
	.loc 2 180 5 discriminator 1
	lla	a5,vq_area
	ld	a5,0(a5)
	li	a2,4096
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 182 9
	lla	a5,vq_area
	ld	a4,0(a5)
	lla	a5,desc
	sd	a4,0(a5)
	.loc 2 183 41
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a5,-56(s0)
	add	a4,a4,a5
	.loc 2 183 10
	lla	a5,avail
	sd	a4,0(a5)
	.loc 2 184 47
	lla	a5,vq_area
	ld	a4,0(a5)
	ld	a3,-56(s0)
	ld	a5,-64(s0)
	add	a5,a3,a5
	add	a4,a4,a5
	.loc 2 184 9
	lla	a5,used
	sd	a4,0(a5)
	.loc 2 186 13
	lla	a5,vq_area
	ld	a5,0(a5)
	.loc 2 186 12
	sd	a5,-88(s0)
	.loc 2 187 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,4096
	li	a1,56
	mv	a0,a5
	call	mw32
	.loc 2 188 5
	lla	a5,vbase
	ld	a4,0(a5)
	.loc 2 188 45
	ld	a5,-88(s0)
	srli	a5,a5,12
	.loc 2 188 5
	sext.w	a5,a5
	mv	a2,a5
	li	a1,64
	mv	a0,a4
	call	mw32
	.loc 2 190 5
	lla	a5,vbase
	ld	a5,0(a5)
	lw	a4,-40(s0)
	ori	a4,a4,4
	sext.w	a4,a4
	mv	a2,a4
	li	a1,112
	mv	a0,a5
	call	mw32
	.loc 2 191 1
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
	.align	1
	.type	virtio_blk_read, @function
virtio_blk_read:
.LFB12:
	.loc 2 194 1
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
	.loc 2 206 13
	lla	a5,req
	sw	zero,0(a5)
	.loc 2 207 15
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 2 208 17
	lla	a5,req
	sw	zero,4(a5)
	.loc 2 209 16
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 2 211 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 211 18
	lla	a4,req
	.loc 2 211 17
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
	.loc 2 211 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 211 16
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
	.loc 2 211 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 211 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 2 212 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 212 18
	lla	a4,dma_buf
	.loc 2 212 17
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
	.loc 2 212 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 212 16
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
	.loc 2 212 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 212 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 2 213 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 2 213 18
	lla	a4,status_byte
	.loc 2 213 17
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
	.loc 2 213 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 2 213 16
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
	.loc 2 215 5
	li	a2,2
	li	a1,3
	li	a0,1
	call	set_flags
	.loc 2 217 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 2 217 21
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 217 24
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 2 218 5
	fence	rw,rw
	.loc 2 219 16
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 2 219 15
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 2 219 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 2 219 15
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 2 221 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 2 226 10
	j	.L34
.L35:
	.loc 2 224 9
	fence	rw,rw
.L34:
	.loc 2 226 22
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L35
	.loc 2 226 5 discriminator 1
	li	a2,512
	lla	a1,dma_buf
	ld	a0,-32(s0)
	call	memcpy
	.loc 2 227 1
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
.LFE12:
	.size	virtio_blk_read, .-virtio_blk_read
	.align	1
	.globl	bcache_init
	.type	bcache_init, @function
bcache_init:
.LFB13:
	.loc 2 230 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 2 232 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 256 10
	sw	zero,-20(s0)
	.loc 2 256 5
	j	.L37
.L38:
	.loc 2 251 18
	lw	a4,-20(s0)
	.loc 2 251 24
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 2 252 18
	lw	a4,-20(s0)
	.loc 2 252 25
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,516(a5)
	.loc 2 253 18
	lw	a4,-20(s0)
	.loc 2 253 24
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 2 254 18
	lw	a4,-20(s0)
	.loc 2 254 27
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,524(a5)
	.loc 2 256 23 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L37:
	.loc 2 256 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,31
	ble	a4,a5,.L38
	.loc 2 256 16 discriminator 4
	lla	a5,bcache_hits
	sw	zero,0(a5)
	.loc 2 257 18
	lla	a5,bcache_misses
	sw	zero,0(a5)
	.loc 2 258 1
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
.LFE13:
	.size	bcache_init, .-bcache_init
	.section	.rodata
	.align	3
.LC7:
	.string	"Block cache stats: hits=%u misses=%u hit_rate=%u%%\n"
	.text
	.align	1
	.globl	bcache_stats
	.type	bcache_stats, @function
bcache_stats:
.LFB14:
	.loc 2 261 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 264 5
	lla	a5,bcache_hits
	lw	a1,0(a5)
	lla	a5,bcache_misses
	lw	a2,0(a5)
	.loc 2 264 107
	lla	a5,bcache_hits
	lw	a4,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 264 5
	beq	a5,zero,.L40
	.loc 2 264 139 discriminator 1
	lla	a5,bcache_hits
	lw	a4,0(a5)
	li	a5,100
	mulw	a5,a4,a5
	sext.w	a4,a5
	.loc 2 264 156 discriminator 1
	lla	a5,bcache_hits
	lw	a3,0(a5)
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 264 5 discriminator 1
	divuw	a5,a4,a5
	sext.w	a5,a5
	j	.L41
.L40:
	.loc 2 264 5 is_stmt 0 discriminator 2
	li	a5,0
.L41:
	.loc 2 264 5 discriminator 4
	mv	a3,a5
	lla	a0,.LC7
	call	printf
	.loc 2 265 1 is_stmt 1
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
.LFE14:
	.size	bcache_stats, .-bcache_stats
	.align	1
	.type	bcache_evict, @function
bcache_evict:
.LFB15:
	.loc 2 268 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 2 272 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 273 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 274 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 270 11
	li	a5,-1
	sw	a5,-20(s0)
	.loc 2 271 11
	li	a5,-1
	sw	a5,-24(s0)
	.loc 2 281 10
	sw	zero,-28(s0)
	.loc 2 281 5
	j	.L43
.L45:
	.loc 2 279 21
	lw	a4,-28(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 2 279 11
	bne	a5,zero,.L44
	.loc 2 279 42 discriminator 1
	lw	a4,-28(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a4,524(a5)
	.loc 2 279 51 discriminator 1
	lw	a5,-24(s0)
	.loc 2 279 31 discriminator 1
	bgeu	a4,a5,.L44
	.loc 2 276 29
	lw	a4,-28(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,524(a5)
	.loc 2 276 19
	sw	a5,-24(s0)
	.loc 2 277 19
	lw	a5,-28(s0)
	sw	a5,-20(s0)
.L44:
	.loc 2 281 23 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-28(s0)
.L43:
	.loc 2 281 18 discriminator 1
	lw	a4,-28(s0)
	li	a5,31
	ble	a4,a5,.L45
	.loc 2 290 14
	lw	a5,-20(s0)
	.loc 2 290 7
	blt	a5,zero,.L46
	.loc 2 286 26
	lw	a4,-20(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 2 286 11
	beq	a5,zero,.L47
	.loc 2 286 48 discriminator 1
	lw	a4,-20(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 2 286 32 discriminator 1
	beq	a5,zero,.L47
	.loc 2 284 44
	lw	a4,-20(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 2 284 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 2 284 65
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 2 284 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L47:
	.loc 2 286 23 discriminator 3
	lw	a4,-20(s0)
	.loc 2 286 29 discriminator 3
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,0(a5)
	.loc 2 287 23
	lw	a4,-20(s0)
	.loc 2 287 29
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
.L46:
	.loc 2 290 16 discriminator 1
	lw	a5,-20(s0)
	.loc 2 291 1
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
.LFE15:
	.size	bcache_evict, .-bcache_evict
	.align	1
	.type	bcache_get, @function
bcache_get:
.LFB16:
	.loc 2 294 1
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
	.loc 2 298 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 299 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 300 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 296 16
	lla	a5,bcache_time
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_time
	sw	a4,0(a5)
	.loc 2 309 10
	sw	zero,-20(s0)
	.loc 2 309 5
	j	.L50
.L53:
	.loc 2 306 21
	lw	a4,-20(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 2 306 11
	lw	a4,-36(s0)
	sext.w	a4,a4
	bne	a4,a5,.L51
	.loc 2 301 22
	lw	a4,-20(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,516(a5)
	.loc 2 301 29
	addiw	a5,a5,1
	sext.w	a3,a5
	lla	a2,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,516(a5)
	.loc 2 302 22
	lw	a4,-20(s0)
	.loc 2 302 31
	lla	a5,bcache_time
	lw	a3,0(a5)
	lla	a2,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,524(a5)
	.loc 2 303 24
	lla	a5,bcache_hits
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_hits
	sw	a4,0(a5)
	.loc 2 304 39
	lw	a4,-20(s0)
	.loc 2 304 32
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	j	.L60
.L51:
	.loc 2 309 23 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L50:
	.loc 2 309 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,31
	ble	a4,a5,.L53
	.loc 2 309 18 discriminator 3
	lla	a5,bcache_misses
	lw	a5,0(a5)
	addiw	a5,a5,1
	sext.w	a4,a5
	lla	a5,bcache_misses
	sw	a4,0(a5)
	.loc 2 310 9
	li	a5,-1
	sw	a5,-24(s0)
	.loc 2 319 12
	sw	zero,-28(s0)
	.loc 2 319 5
	j	.L54
.L57:
	.loc 2 316 23
	lw	a4,-28(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 2 316 11
	bne	a5,zero,.L55
	.loc 2 313 17
	lw	a5,-28(s0)
	sw	a5,-24(s0)
	.loc 2 314 13
	j	.L56
.L55:
	.loc 2 319 29 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-28(s0)
.L54:
	.loc 2 319 22 discriminator 1
	lw	a4,-28(s0)
	li	a5,31
	ble	a4,a5,.L57
.L56:
	.loc 2 323 12
	lw	a5,-24(s0)
	.loc 2 323 7
	bge	a5,zero,.L58
	.loc 2 320 14
	call	bcache_evict
	mv	a5,a0
	.loc 2 320 13 discriminator 1
	sw	a5,-24(s0)
.L58:
	.loc 2 332 12
	lw	a5,-24(s0)
	.loc 2 332 7
	bge	a5,zero,.L59
	.loc 2 325 13
	sw	zero,-24(s0)
	.loc 2 329 24
	lw	a4,-24(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,520(a5)
	.loc 2 329 11
	beq	a5,zero,.L59
	.loc 2 327 42
	lw	a4,-24(s0)
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a5,0(a5)
	.loc 2 327 13
	slli	a3,a5,32
	srli	a3,a3,32
	.loc 2 327 61
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 2 327 13
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_write
.L59:
	.loc 2 332 17 discriminator 1
	lw	a4,-24(s0)
	.loc 2 332 23 discriminator 1
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	lw	a4,-36(s0)
	sw	a4,0(a5)
	.loc 2 333 17
	lw	a4,-24(s0)
	.loc 2 333 23
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	sw	zero,520(a5)
	.loc 2 334 17
	lw	a4,-24(s0)
	.loc 2 334 24
	lla	a3,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a3,a5
	li	a4,1
	sw	a4,516(a5)
	.loc 2 335 17
	lw	a4,-24(s0)
	.loc 2 335 26
	lla	a5,bcache_time
	lw	a3,0(a5)
	lla	a2,bcache
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	add	a5,a2,a5
	sw	a3,524(a5)
	.loc 2 336 5
	lwu	a3,-36(s0)
	.loc 2 336 39
	lw	a4,-24(s0)
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
	addi	a5,a5,4
	.loc 2 336 5
	mv	a1,a5
	mv	a0,a3
	call	virtio_blk_read
	.loc 2 338 23
	lw	a4,-24(s0)
	.loc 2 338 16
	mv	a5,a4
	slli	a5,a5,5
	add	a5,a5,a4
	slli	a5,a5,4
	lla	a4,bcache
	add	a5,a5,a4
.L60:
	.loc 2 339 1
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
.LFE16:
	.size	bcache_get, .-bcache_get
	.align	1
	.type	bcache_release, @function
bcache_release:
.LFB17:
	.loc 2 342 1
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
	.loc 2 347 10
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 2 347 7
	beq	a5,zero,.L63
	.loc 2 345 11
	ld	a5,-24(s0)
	lw	a5,516(a5)
	.loc 2 345 19
	addiw	a5,a5,-1
	sext.w	a4,a5
	ld	a5,-24(s0)
	sw	a4,516(a5)
.L63:
	.loc 2 347 1
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
	.loc 2 350 1
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
	.loc 2 352 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 351 8
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	mv	a5,a0
	.loc 2 351 7 discriminator 1
	sd	a5,-24(s0)
	.loc 2 352 18
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 2 352 5
	li	a2,512
	mv	a1,a5
	ld	a0,-48(s0)
	call	memcpy
	.loc 2 353 5
	ld	a5,-24(s0)
	mv	a0,a5
	call	bcache_release
	.loc 2 354 1
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
	.loc 2 357 1
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
	.loc 2 358 13
	lla	a5,req
	li	a4,1
	sw	a4,0(a5)
	.loc 2 359 15
	lla	a5,req
	ld	a4,-24(s0)
	sd	a4,8(a5)
	.loc 2 360 17
	lla	a5,req
	sw	zero,4(a5)
	.loc 2 361 16
	lla	a5,status_byte
	li	a4,-1
	sb	a4,0(a5)
	.loc 2 363 5
	li	a2,512
	ld	a1,-32(s0)
	lla	a0,dma_buf
	call	memcpy
	.loc 2 365 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 365 18
	lla	a4,req
	.loc 2 365 17
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
	.loc 2 365 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 365 16
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
	.loc 2 365 9
	lla	a5,desc
	ld	a5,0(a5)
	.loc 2 365 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,1
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 2 366 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 366 18
	lla	a4,dma_buf
	.loc 2 366 17
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
	.loc 2 366 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 366 16
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
	.loc 2 366 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,16
	.loc 2 366 17
	lbu	a4,14(a5)
	andi	a4,a4,0
	ori	a4,a4,2
	sb	a4,14(a5)
	lbu	a4,15(a5)
	andi	a4,a4,0
	sb	a4,15(a5)
	.loc 2 367 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 2 367 18
	lla	a4,status_byte
	.loc 2 367 17
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
	.loc 2 367 9
	lla	a5,desc
	ld	a5,0(a5)
	addi	a5,a5,32
	.loc 2 367 16
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
	.loc 2 369 5
	li	a2,2
	li	a1,1
	li	a0,1
	call	set_flags
	.loc 2 371 10
	lla	a5,avail
	ld	a4,0(a5)
	.loc 2 371 21
	lla	a5,aidx
	lhu	a5,0(a5)
	sext.w	a3,a5
	lla	a5,Q
	lw	a5,0(a5)
	remuw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 371 24
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,1
	add	a5,a4,a5
	sh	zero,4(a5)
	.loc 2 372 5
	fence	rw,rw
	.loc 2 373 16
	lla	a5,aidx
	lhu	a5,0(a5)
	addiw	a5,a5,1
	slli	a4,a5,48
	srli	a4,a4,48
	.loc 2 373 15
	lla	a5,aidx
	sh	a4,0(a5)
	.loc 2 373 10
	lla	a5,avail
	ld	a5,0(a5)
	.loc 2 373 15
	lla	a4,aidx
	lhu	a4,0(a4)
	sh	a4,2(a5)
	.loc 2 375 5
	lla	a5,vbase
	ld	a5,0(a5)
	li	a2,0
	li	a1,80
	mv	a0,a5
	call	mw32
	.loc 2 379 10
	j	.L66
.L67:
	.loc 2 378 9
	fence	rw,rw
.L66:
	.loc 2 379 22
	lla	a5,status_byte
	lbu	a5,0(a5)
	andi	a5,a5,0xff
	mv	a4,a5
	li	a5,255
	beq	a4,a5,.L67
	.loc 2 380 1
	nop
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
.LFE19:
	.size	virtio_blk_write, .-virtio_blk_write
	.align	1
	.globl	write_block
	.type	write_block, @function
write_block:
.LFB20:
	.loc 2 383 1
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
	.loc 2 385 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 383 8
	lw	a5,-36(s0)
	mv	a0,a5
	call	bcache_get
	mv	a5,a0
	.loc 2 383 7 discriminator 1
	sd	a5,-24(s0)
	.loc 2 384 14
	ld	a5,-24(s0)
	addi	a5,a5,4
	.loc 2 384 5
	li	a2,512
	ld	a1,-48(s0)
	mv	a0,a5
	call	memcpy
	.loc 2 385 7
	ld	a5,-24(s0)
	.loc 2 385 14
	li	a4,1
	sw	a4,520(a5)
	.loc 2 386 5
	ld	a5,-24(s0)
	mv	a0,a5
	call	bcache_release
	.loc 2 387 1
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
	.loc 2 390 1
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
	.loc 2 395 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 396 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 397 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 398 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 407 7
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 407 6 discriminator 1
	sd	a5,-24(s0)
	.loc 2 408 12
	ld	a5,-56(s0)
	lw	a5,12(a5)
	.loc 2 408 18
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 2 408 9
	sw	a5,-28(s0)
	.loc 2 409 10
	li	a5,6
	sw	a5,-32(s0)
	.loc 2 415 9
	ld	a5,-24(s0)
	lhu	a4,1018(a5)
	.loc 2 415 18
	ld	a5,-56(s0)
	lhu	a5,16(a5)
	.loc 2 415 7
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L70
	.loc 2 410 14
	li	a5,6
	sw	a5,-32(s0)
	j	.L71
.L70:
	.loc 2 412 14
	ld	a5,-24(s0)
	lhu	a4,1020(a5)
	.loc 2 412 23
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	.loc 2 412 12
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L72
	.loc 2 411 14
	li	a5,3
	sw	a5,-32(s0)
	j	.L71
.L72:
	.loc 2 413 17
	ld	a4,-24(s0)
	ld	a5,-56(s0)
	lhu	a5,18(a5)
	mv	a1,a5
	mv	a0,a4
	call	neoc_proc_has_supp_gid
	mv	a5,a0
	.loc 2 413 55 discriminator 1
	beq	a5,zero,.L73
	.loc 2 413 55 is_stmt 0 discriminator 2
	li	a5,3
	j	.L74
.L73:
	.loc 2 413 55 discriminator 3
	li	a5,0
.L74:
	.loc 2 413 14 is_stmt 1 discriminator 5
	sw	a5,-32(s0)
.L71:
	.loc 2 415 16
	lw	a5,-28(s0)
	lw	a4,-32(s0)
	srlw	a5,a5,a4
	sext.w	a5,a5
	.loc 2 415 24
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 2 415 10
	sw	a5,-36(s0)
	.loc 2 418 13
	lw	a5,-60(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 2 418 7
	beq	a5,zero,.L75
	.loc 2 418 25 discriminator 1
	lw	a5,-36(s0)
	andi	a5,a5,4
	sext.w	a5,a5
	.loc 2 418 16 discriminator 1
	bne	a5,zero,.L75
	.loc 2 417 24
	li	a5,0
	j	.L79
.L75:
	.loc 2 419 13
	lw	a5,-60(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 2 419 7
	beq	a5,zero,.L77
	.loc 2 419 25 discriminator 1
	lw	a5,-36(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 2 419 16 discriminator 1
	bne	a5,zero,.L77
	.loc 2 418 24
	li	a5,0
	j	.L79
.L77:
	.loc 2 420 13
	lw	a5,-60(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 2 420 7
	beq	a5,zero,.L78
	.loc 2 420 25 discriminator 1
	lw	a5,-36(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 2 420 16 discriminator 1
	bne	a5,zero,.L78
	.loc 2 419 24
	li	a5,0
	j	.L79
.L78:
	.loc 2 420 16 discriminator 3
	li	a5,1
.L79:
	.loc 2 421 1
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
	.loc 2 424 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 424 5
	lla	a1,block_buf
	li	a0,1
	call	read_block
	.loc 2 425 5
	li	a2,28
	lla	a1,block_buf
	lla	a0,sb
	call	memcpy
	.loc 2 426 1
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
	.loc 2 429 1
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
	sw	a5,-52(s0)
	.loc 2 434 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 435 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 436 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 437 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 435 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	beq	a5,zero,.L82
	.loc 2 435 23 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 2 435 14 discriminator 2
	lw	a4,-52(s0)
	sext.w	a4,a4
	bleu	a4,a5,.L83
.L82:
	.loc 2 430 9
	li	a2,88
	li	a1,0
	ld	a0,-64(s0)
	call	memset
	j	.L81
.L83:
	.loc 2 435 19 discriminator 3
	li	a5,5
	sw	a5,-20(s0)
	.loc 2 437 13
	lla	a5,sb
	lw	a4,20(a5)
	.loc 2 437 31
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a3,a5
	.loc 2 437 34
	lw	a5,-20(s0)
	divuw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 437 24
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 437 10
	sw	a5,-24(s0)
	.loc 2 439 18
	lw	a5,-52(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 2 439 21
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 2 439 37
	li	a5,88
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 439 11
	sw	a5,-28(s0)
	.loc 2 441 5
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 442 9
	lw	a5,-28(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	lla	a5,block_buf
	add	a5,a4,a5
	.loc 2 442 8
	sd	a5,-40(s0)
	.loc 2 443 11
	ld	a5,-40(s0)
	.loc 2 443 10
	ld	a4,-64(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
.L81:
	.loc 2 444 1
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE23:
	.size	read_inode, .-read_inode
	.align	1
	.type	write_inode, @function
write_inode:
.LFB24:
	.loc 2 447 1
	.cfi_startproc
	addi	sp,sp,-576
	.cfi_def_cfa_offset 576
	sd	ra,568(sp)
	sd	s0,560(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,576
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-576(s0)
	sw	a5,-564(s0)
	.loc 2 452 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 453 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 454 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 455 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 454 7
	lw	a5,-564(s0)
	sext.w	a5,a5
	beq	a5,zero,.L89
	.loc 2 454 23 discriminator 2
	lla	a5,sb
	lw	a5,8(a5)
	.loc 2 454 14 discriminator 2
	lw	a4,-564(s0)
	sext.w	a4,a4
	bgtu	a4,a5,.L89
	.loc 2 454 19 discriminator 3
	li	a5,5
	sw	a5,-20(s0)
	.loc 2 455 13
	lla	a5,sb
	lw	a4,20(a5)
	.loc 2 455 31
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a3,a5
	.loc 2 455 34
	lw	a5,-20(s0)
	divuw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 455 24
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 455 10
	sw	a5,-24(s0)
	.loc 2 456 18
	lw	a5,-564(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	.loc 2 456 21
	lw	a5,-20(s0)
	remuw	a5,a4,a5
	sext.w	a4,a5
	.loc 2 456 37
	li	a5,88
	mulw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 456 11
	sw	a5,-28(s0)
	.loc 2 459 5
	addi	a5,s0,-552
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 459 5 discriminator 1
	lw	a5,-24(s0)
	addi	a4,s0,-552
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 460 9
	lw	a5,-28(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a4,s0,-552
	add	a5,a4,a5
	.loc 2 460 8
	sd	a5,-40(s0)
	.loc 2 461 5
	ld	a4,-40(s0)
	.loc 2 461 9
	ld	a5,-576(s0)
	mv	a3,a5
	li	a5,88
	mv	a2,a5
	mv	a1,a3
	mv	a0,a4
	call	memcpy
	.loc 2 462 5
	lw	a5,-24(s0)
	addi	a4,s0,-552
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L85
.L89:
	.loc 2 453 17 discriminator 2
	nop
.L85:
	.loc 2 463 1
	ld	ra,568(sp)
	.cfi_restore 1
	ld	s0,560(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 576
	addi	sp,sp,576
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE24:
	.size	write_inode, .-write_inode
	.align	1
	.type	bitmap_test, @function
bitmap_test:
.LFB25:
	.loc 2 466 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 2 469 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 470 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 467 13
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	.loc 2 467 12 discriminator 1
	sw	a5,-20(s0)
	.loc 2 469 5
	addi	a5,s0,-536
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 469 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 470 9
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 470 7
	sw	a5,-24(s0)
	.loc 2 471 23
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a5,a5
	.loc 2 471 20
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	sext.w	a4,a5
	.loc 2 471 31
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 2 471 26
	sraw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 471 35
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 2 472 1
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
.LFE25:
	.size	bitmap_test, .-bitmap_test
	.align	1
	.type	bitmap_set, @function
bitmap_set:
.LFB26:
	.loc 2 475 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 2 478 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 479 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 476 13
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	.loc 2 476 12 discriminator 1
	sw	a5,-20(s0)
	.loc 2 478 5
	addi	a5,s0,-536
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 478 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 479 9
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 479 7
	sw	a5,-24(s0)
	.loc 2 480 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 2 480 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 2 480 23
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 2 480 18
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 480 14
	slliw	a5,a5,24
	sraiw	a5,a5,24
	or	a5,a4,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	andi	a4,a5,0xff
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-520(a5)
	.loc 2 481 5
	lw	a5,-20(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 2 482 1
	nop
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE26:
	.size	bitmap_set, .-bitmap_set
	.align	1
	.type	bitmap_clear, @function
bitmap_clear:
.LFB27:
	.loc 2 485 1
	.cfi_startproc
	addi	sp,sp,-560
	.cfi_def_cfa_offset 560
	sd	ra,552(sp)
	sd	s0,544(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,560
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-548(s0)
	.loc 2 488 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 489 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 487 7
	lw	a5,-548(s0)
	sext.w	a5,a5
	beq	a5,zero,.L96
	.loc 2 487 13 discriminator 1
	lw	a5,-548(s0)
	mv	a0,a5
	call	BBLOCK
	mv	a5,a0
	.loc 2 487 12 discriminator 2
	sw	a5,-20(s0)
	.loc 2 489 5
	addi	a5,s0,-536
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 489 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 490 9
	lw	a5,-548(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 490 7
	sw	a5,-24(s0)
	.loc 2 491 11
	lw	a5,-24(s0)
	srliw	a5,a5,3
	sext.w	a2,a5
	.loc 2 491 8
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	lbu	a5,-520(a5)
	slliw	a4,a5,24
	sraiw	a4,a4,24
	.loc 2 491 24
	lw	a5,-24(s0)
	andi	a5,a5,7
	sext.w	a5,a5
	.loc 2 491 19
	li	a3,1
	sllw	a5,a3,a5
	sext.w	a5,a5
	.loc 2 491 14
	slliw	a5,a5,24
	sraiw	a5,a5,24
	not	a5,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	and	a5,a4,a5
	slliw	a5,a5,24
	sraiw	a5,a5,24
	andi	a4,a5,0xff
	slli	a5,a2,32
	srli	a5,a5,32
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	a4,-520(a5)
	.loc 2 492 5
	lw	a5,-20(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	write_block
	j	.L93
.L96:
	.loc 2 486 17 discriminator 1
	nop
.L93:
	.loc 2 493 1
	ld	ra,552(sp)
	.cfi_restore 1
	ld	s0,544(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 560
	addi	sp,sp,560
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE27:
	.size	bitmap_clear, .-bitmap_clear
	.align	1
	.type	free_inode_blocks, @function
free_inode_blocks:
.LFB28:
	.loc 2 496 1
	.cfi_startproc
	addi	sp,sp,-608
	.cfi_def_cfa_offset 608
	sd	ra,600(sp)
	sd	s0,592(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,608
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-608(s0)
	sw	a5,-596(s0)
	.loc 2 507 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 508 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 509 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 510 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 511 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 512 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 513 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 514 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 515 5
	addi	a5,s0,-64
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 516 5
	addi	a5,s0,-68
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 507 10
	sw	zero,-20(s0)
	.loc 2 507 5
	j	.L98
.L100:
	.loc 2 504 21
	lw	a5,-20(s0)
	ld	a4,-608(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 504 11
	beq	a5,zero,.L99
	.loc 2 501 13
	lw	a5,-20(s0)
	ld	a4,-608(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
	.loc 2 502 22
	lw	a5,-20(s0)
	.loc 2 502 25
	ld	a4,-608(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	sw	zero,0(a5)
.L99:
	.loc 2 507 23 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L98:
	.loc 2 507 18 discriminator 2
	lw	a4,-20(s0)
	li	a5,11
	ble	a4,a5,.L100
	.loc 2 519 17
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 2 519 7
	beq	a5,zero,.L101
	.loc 2 508 23
	ld	a5,-608(s0)
	lw	a5,80(a5)
	.loc 2 508 13
	sw	a5,-24(s0)
	.loc 2 509 9
	lw	a5,-24(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 510 13
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 2 514 16
	sw	zero,-36(s0)
	.loc 2 514 9
	j	.L102
.L104:
	.loc 2 513 20
	ld	a4,-32(s0)
	lw	a5,-36(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 513 15
	beq	a5,zero,.L103
	.loc 2 512 34
	ld	a4,-32(s0)
	lw	a5,-36(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 2 512 17
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L103:
	.loc 2 514 62 discriminator 3
	lw	a5,-36(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L102:
	.loc 2 514 30 discriminator 2
	lw	a5,-36(s0)
	mv	a4,a5
	li	a5,127
	bleu	a4,a5,.L104
	.loc 2 514 9 discriminator 4
	lw	a5,-24(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 2 515 22
	ld	a5,-608(s0)
	sw	zero,80(a5)
.L101:
	.loc 2 538 17
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 2 538 7
	beq	a5,zero,.L105
	.loc 2 520 23
	ld	a5,-608(s0)
	lw	a5,84(a5)
	.loc 2 520 13
	sw	a5,-40(s0)
	.loc 2 521 9
	lw	a5,-40(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 522 14
	lla	a5,block_buf
	sd	a5,-48(s0)
	.loc 2 534 16
	sw	zero,-52(s0)
	.loc 2 534 9
	j	.L106
.L112:
.LBB2:
	.loc 2 525 22
	ld	a4,-48(s0)
	lw	a5,-52(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 525 15
	beq	a5,zero,.L113
	.loc 2 525 23 discriminator 2
	ld	a4,-48(s0)
	lw	a5,-52(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 525 17 discriminator 2
	sw	a5,-56(s0)
	.loc 2 527 13
	addi	a5,s0,-584
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 527 13 discriminator 1
	lw	a5,-56(s0)
	addi	a4,s0,-584
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 528 19
	addi	a5,s0,-584
	sd	a5,-64(s0)
	.loc 2 532 18
	sw	zero,-68(s0)
	.loc 2 532 13
	j	.L109
.L111:
	.loc 2 531 26
	ld	a4,-64(s0)
	lw	a5,-68(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 531 19
	beq	a5,zero,.L110
	.loc 2 530 40
	ld	a4,-64(s0)
	lw	a5,-68(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 2 530 21
	lw	a5,0(a5)
	mv	a0,a5
	call	bitmap_clear
.L110:
	.loc 2 532 64 discriminator 2
	lw	a5,-68(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-68(s0)
.L109:
	.loc 2 532 34 discriminator 1
	lw	a5,-68(s0)
	mv	a4,a5
	li	a5,127
	bleu	a4,a5,.L111
	.loc 2 532 13 discriminator 3
	lw	a5,-56(s0)
	mv	a0,a5
	call	bitmap_clear
	j	.L108
.L113:
	.loc 2 524 17
	nop
.L108:
.LBE2:
	.loc 2 534 62 discriminator 2
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
.L106:
	.loc 2 534 30 discriminator 1
	lw	a5,-52(s0)
	mv	a4,a5
	li	a5,127
	bleu	a4,a5,.L112
	.loc 2 534 9 discriminator 3
	lw	a5,-40(s0)
	mv	a0,a5
	call	bitmap_clear
	.loc 2 535 24
	ld	a5,-608(s0)
	sw	zero,84(a5)
.L105:
	.loc 2 538 13 discriminator 1
	ld	a5,-608(s0)
	sw	zero,8(a5)
	.loc 2 539 5
	lw	a5,-596(s0)
	ld	a1,-608(s0)
	mv	a0,a5
	call	write_inode
	.loc 2 540 1
	nop
	ld	ra,600(sp)
	.cfi_restore 1
	ld	s0,592(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 608
	addi	sp,sp,608
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE28:
	.size	free_inode_blocks, .-free_inode_blocks
	.align	1
	.type	alloc_data_block, @function
alloc_data_block:
.LFB29:
	.loc 2 543 1
	.cfi_startproc
	addi	sp,sp,-544
	.cfi_def_cfa_offset 544
	sd	ra,536(sp)
	sd	s0,528(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,544
	.cfi_def_cfa 8, 0
	.loc 2 547 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 548 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 549 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 544 19
	lla	a5,sb
	lw	a4,0(a5)
	.loc 2 544 32
	li	a5,4096
	addiw	a5,a5,-1
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 544 35
	srliw	a5,a5,12
	sext.w	a5,a5
	.loc 2 544 15
	sw	a5,-20(s0)
	.loc 2 545 17
	lla	a5,sb
	lw	a4,24(a5)
	.loc 2 545 27
	lw	a5,-20(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 545 14
	sw	a5,-24(s0)
	.loc 2 556 10
	lw	a5,-24(s0)
	sw	a5,-28(s0)
	.loc 2 556 5
	j	.L115
.L118:
	.loc 2 555 13
	lw	a5,-28(s0)
	mv	a0,a5
	call	bitmap_test
	mv	a5,a0
	.loc 2 555 11 discriminator 1
	bne	a5,zero,.L116
.LBB3:
	.loc 2 548 13
	lw	a5,-28(s0)
	mv	a0,a5
	call	bitmap_set
	.loc 2 551 13
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 551 13 discriminator 1
	addi	a5,s0,-544
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 552 13
	lw	a5,-28(s0)
	addi	a4,s0,-544
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 2 553 32
	lw	a5,-28(s0)
	j	.L119
.L116:
.LBE3:
	.loc 2 556 36 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-28(s0)
.L115:
	.loc 2 556 29 discriminator 1
	lla	a5,sb
	lw	a4,0(a5)
	.loc 2 556 26 discriminator 1
	lw	a5,-28(s0)
	bgtu	a4,a5,.L118
	.loc 2 556 16 discriminator 3
	li	a5,0
.L119:
	.loc 2 557 1
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
	.loc 2 560 1
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sd	ra,88(sp)
	sd	s0,80(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,96
	.cfi_def_cfa 8, 0
	sd	a0,-88(s0)
	mv	a5,a1
	sw	a5,-92(s0)
	.loc 2 569 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 570 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 571 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 572 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 573 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 574 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 575 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 576 5
	addi	a5,s0,-72
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 589 7
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L121
	.loc 2 562 33
	ld	a4,-88(s0)
	lwu	a5,-92(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L127
.L121:
	.loc 2 564 12
	lw	a5,-92(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L123
	.loc 2 565 31
	ld	a5,-88(s0)
	lw	a5,80(a5)
	.loc 2 565 21
	sw	a5,-20(s0)
	.loc 2 567 24
	lw	a5,-20(s0)
	.loc 2 567 11
	bne	a5,zero,.L124
	.loc 2 566 32
	li	a5,0
	j	.L127
.L124:
	.loc 2 567 9 discriminator 1
	lw	a5,-20(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 568 16
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 2 569 31
	ld	a4,-32(s0)
	.loc 2 569 35
	lw	a5,-92(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 2 569 31
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	j	.L127
.L123:
	.loc 2 572 12
	lw	a5,-92(s0)
	addiw	a5,a5,-140
	sw	a5,-92(s0)
	.loc 2 573 19
	lw	a5,-92(s0)
	srliw	a5,a5,7
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 2 574 23
	lw	a5,-92(s0)
	andi	a5,a5,127
	sext.w	a5,a5
	.loc 2 574 19
	sw	a5,-40(s0)
	.loc 2 576 32
	ld	a5,-88(s0)
	lw	a5,84(a5)
	.loc 2 576 22
	sw	a5,-44(s0)
	.loc 2 579 25
	lw	a5,-44(s0)
	.loc 2 579 11
	bne	a5,zero,.L125
	.loc 2 577 32
	li	a5,0
	j	.L127
.L125:
	.loc 2 579 9 discriminator 1
	lw	a5,-44(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 580 22
	lla	a5,block_buf
	sd	a5,-56(s0)
	.loc 2 581 32
	ld	a4,-56(s0)
	lw	a5,-36(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 581 18
	sw	a5,-60(s0)
	.loc 2 585 21
	lw	a5,-60(s0)
	.loc 2 585 11
	bne	a5,zero,.L126
	.loc 2 582 32
	li	a5,0
	j	.L127
.L126:
	.loc 2 585 9 discriminator 1
	lw	a5,-60(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 586 23
	lla	a5,block_buf
	sd	a5,-72(s0)
	.loc 2 587 38
	ld	a4,-72(s0)
	lw	a5,-40(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
.L127:
	.loc 2 589 1
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
.LFE30:
	.size	inode_blockno, .-inode_blockno
	.align	1
	.type	inode_bmap_alloc, @function
inode_bmap_alloc:
.LFB31:
	.loc 2 592 1
	.cfi_startproc
	addi	sp,sp,-1664
	.cfi_def_cfa_offset 1664
	sd	ra,1656(sp)
	sd	s0,1648(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,1664
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-1664(s0)
	mv	a4,a2
	sw	a5,-1652(s0)
	mv	a5,a4
	sw	a5,-1656(s0)
	.loc 2 609 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 610 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 611 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 612 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 613 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 614 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 615 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 616 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 617 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 618 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 619 5
	addi	a5,s0,-68
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 620 5
	addi	a5,s0,-80
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 621 5
	addi	a5,s0,-84
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 622 5
	addi	a5,s0,-88
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 623 5
	addi	a5,s0,-96
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 624 5
	addi	a5,s0,-100
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 603 7
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,11
	bgtu	a4,a5,.L129
	.loc 2 600 21
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 600 11
	bne	a5,zero,.L130
	.loc 2 595 15
	call	alloc_data_block
	mv	a5,a0
	.loc 2 595 14 discriminator 1
	sw	a5,-20(s0)
	.loc 2 597 16
	lw	a5,-20(s0)
	.loc 2 597 15
	bne	a5,zero,.L131
	.loc 2 596 40
	li	a5,0
	j	.L145
.L131:
	.loc 2 597 27 discriminator 1
	lw	a4,-20(s0)
	ld	a3,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a3,a5
	sw	a4,0(a5)
	.loc 2 598 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
.L130:
	.loc 2 600 33 discriminator 1
	ld	a4,-1664(s0)
	lwu	a5,-1656(s0)
	addi	a5,a5,8
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 600 33 is_stmt 0
	j	.L145
.L129:
	.loc 2 627 7 is_stmt 1
	lw	a5,-1656(s0)
	sext.w	a4,a5
	li	a5,139
	bgtu	a4,a5,.L133
.LBB4:
	.loc 2 604 31
	ld	a5,-1664(s0)
	lw	a5,80(a5)
	.loc 2 604 21
	sw	a5,-24(s0)
	.loc 2 613 24
	lw	a5,-24(s0)
	.loc 2 613 11
	bne	a5,zero,.L134
	.loc 2 606 16
	call	alloc_data_block
	mv	a5,a0
	.loc 2 606 15 discriminator 1
	sw	a5,-28(s0)
	.loc 2 609 16
	lw	a5,-28(s0)
	.loc 2 609 15
	bne	a5,zero,.L135
	.loc 2 607 40
	li	a5,0
	j	.L145
.L135:
	.loc 2 609 26 discriminator 2
	lw	a4,-28(s0)
	ld	a5,-1664(s0)
	sw	a4,80(a5)
	.loc 2 610 13
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 2 611 25
	lw	a5,-28(s0)
	sw	a5,-24(s0)
.L134:
	.loc 2 614 9
	addi	a5,s0,-1640
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 614 9 discriminator 2
	lw	a5,-24(s0)
	addi	a4,s0,-1640
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 615 16
	addi	a5,s0,-1640
	sd	a5,-40(s0)
	.loc 2 616 14
	lw	a5,-1656(s0)
	addiw	a5,a5,-12
	sext.w	a5,a5
	.loc 2 616 10
	sw	a5,-44(s0)
	.loc 2 623 19
	ld	a4,-40(s0)
	lw	a5,-44(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 623 11
	bne	a5,zero,.L137
	.loc 2 618 16
	call	alloc_data_block
	mv	a5,a0
	.loc 2 618 15 discriminator 2
	sw	a5,-48(s0)
	.loc 2 620 16
	lw	a5,-48(s0)
	.loc 2 620 15
	bne	a5,zero,.L138
	.loc 2 619 40
	li	a5,0
	j	.L145
.L138:
	.loc 2 620 20 discriminator 2
	ld	a4,-40(s0)
	lw	a5,-44(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 2 620 23 discriminator 2
	lw	a4,-48(s0)
	sw	a4,0(a5)
	.loc 2 621 13
	lw	a5,-24(s0)
	addi	a4,s0,-1640
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L137:
	.loc 2 623 31 discriminator 2
	ld	a4,-40(s0)
	lw	a5,-44(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 623 31 is_stmt 0
	j	.L145
.L133:
.LBE4:
	.loc 2 627 11 is_stmt 1 discriminator 1
	lw	a5,-1656(s0)
	addiw	a5,a5,-140
	sext.w	a5,a5
	.loc 2 627 7 discriminator 1
	sw	a5,-52(s0)
	.loc 2 628 9
	lw	a5,-52(s0)
	srliw	a5,a5,7
	sext.w	a5,a5
	sw	a5,-56(s0)
	.loc 2 629 12
	lw	a5,-52(s0)
	andi	a5,a5,127
	sext.w	a5,a5
	.loc 2 629 9
	sw	a5,-60(s0)
	.loc 2 631 28
	ld	a5,-1664(s0)
	lw	a5,84(a5)
	.loc 2 631 18
	sw	a5,-64(s0)
	.loc 2 640 21
	lw	a5,-64(s0)
	.loc 2 640 7
	bne	a5,zero,.L139
	.loc 2 633 14
	call	alloc_data_block
	mv	a5,a0
	.loc 2 633 13 discriminator 1
	sw	a5,-68(s0)
	.loc 2 635 12
	lw	a5,-68(s0)
	.loc 2 635 11
	bne	a5,zero,.L140
	.loc 2 634 32
	li	a5,0
	j	.L145
.L140:
	.loc 2 635 24 discriminator 1
	lw	a4,-68(s0)
	ld	a5,-1664(s0)
	sw	a4,84(a5)
	.loc 2 636 9
	lw	a5,-1652(s0)
	ld	a1,-1664(s0)
	mv	a0,a5
	call	write_inode
	.loc 2 637 22
	lw	a5,-68(s0)
	sw	a5,-64(s0)
.L139:
	.loc 2 641 5
	addi	a5,s0,-616
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 641 5 discriminator 1
	lw	a5,-64(s0)
	addi	a4,s0,-616
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 642 18
	addi	a5,s0,-616
	sd	a5,-80(s0)
	.loc 2 643 28
	ld	a4,-80(s0)
	lw	a5,-56(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 643 14
	sw	a5,-84(s0)
	.loc 2 652 17
	lw	a5,-84(s0)
	.loc 2 652 7
	bne	a5,zero,.L141
	.loc 2 645 14
	call	alloc_data_block
	mv	a5,a0
	.loc 2 645 13 discriminator 1
	sw	a5,-88(s0)
	.loc 2 647 12
	lw	a5,-88(s0)
	.loc 2 647 11
	bne	a5,zero,.L142
	.loc 2 646 32
	li	a5,0
	j	.L145
.L142:
	.loc 2 647 22 discriminator 1
	ld	a4,-80(s0)
	lw	a5,-56(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 2 647 28 discriminator 1
	lw	a4,-88(s0)
	sw	a4,0(a5)
	.loc 2 648 9
	lw	a5,-64(s0)
	addi	a4,s0,-616
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 2 649 18
	lw	a5,-88(s0)
	sw	a5,-84(s0)
.L141:
	.loc 2 653 5
	addi	a5,s0,-1128
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 653 5 discriminator 1
	lw	a5,-84(s0)
	addi	a4,s0,-1128
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 654 19
	addi	a5,s0,-1128
	sd	a5,-96(s0)
	.loc 2 661 22
	ld	a4,-96(s0)
	lw	a5,-60(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 661 7
	bne	a5,zero,.L143
	.loc 2 656 14
	call	alloc_data_block
	mv	a5,a0
	.loc 2 656 13 discriminator 1
	sw	a5,-100(s0)
	.loc 2 658 12
	lw	a5,-100(s0)
	.loc 2 658 11
	bne	a5,zero,.L144
	.loc 2 657 32
	li	a5,0
	j	.L145
.L144:
	.loc 2 658 23 discriminator 1
	ld	a4,-96(s0)
	lw	a5,-60(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	.loc 2 658 29 discriminator 1
	lw	a4,-100(s0)
	sw	a4,0(a5)
	.loc 2 659 9
	lw	a5,-84(s0)
	addi	a4,s0,-1128
	mv	a1,a4
	mv	a0,a5
	call	write_block
.L143:
	.loc 2 661 30 discriminator 1
	ld	a4,-96(s0)
	lw	a5,-60(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
.L145:
	.loc 2 662 1
	mv	a0,a5
	ld	ra,1656(sp)
	.cfi_restore 1
	ld	s0,1648(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1664
	addi	sp,sp,1664
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
	.loc 2 665 1
	.cfi_startproc
	addi	sp,sp,-80
	.cfi_def_cfa_offset 80
	sd	ra,72(sp)
	sd	s0,64(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,80
	.cfi_def_cfa 8, 0
	sd	a0,-56(s0)
	mv	a5,a1
	sd	a2,-72(s0)
	mv	a4,a3
	sw	a5,-60(s0)
	mv	a5,a4
	sw	a5,-64(s0)
	.loc 2 673 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 674 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 675 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 676 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 677 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 678 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 679 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 665 9
	lw	a5,-64(s0)
	sw	a5,-20(s0)
	.loc 2 666 8
	lw	a5,-60(s0)
	sw	a5,-24(s0)
	.loc 2 667 8
	ld	a5,-72(s0)
	sd	a5,-32(s0)
	.loc 2 686 10
	j	.L147
.L151:
	.loc 2 670 20
	lw	a5,-24(s0)
	srliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 670 16
	sw	a5,-36(s0)
	.loc 2 671 20
	lw	a5,-24(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 2 671 16
	sw	a5,-40(s0)
	.loc 2 672 20
	lw	a5,-40(s0)
	li	a4,512
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 672 16
	sw	a5,-44(s0)
	.loc 2 675 19
	lw	a4,-44(s0)
	lw	a5,-20(s0)
	.loc 2 675 11
	bleu	a4,a5,.L148
	.loc 2 673 20
	lw	a5,-20(s0)
	sw	a5,-44(s0)
.L148:
	.loc 2 675 18 discriminator 2
	lw	a5,-36(s0)
	mv	a1,a5
	ld	a0,-56(s0)
	call	inode_blockno
	mv	a5,a0
	.loc 2 675 17 discriminator 3
	sw	a5,-48(s0)
	.loc 2 682 20
	lw	a5,-48(s0)
	.loc 2 682 11
	bne	a5,zero,.L149
	.loc 2 677 13
	ld	a5,-32(s0)
	lw	a4,-44(s0)
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	memset
	j	.L150
.L149:
	.loc 2 679 13
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 680 13
	ld	a3,-32(s0)
	lw	a5,-40(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-44(s0)
	mv	a2,a4
	mv	a1,a5
	mv	a0,a3
	call	memcpy
.L150:
	.loc 2 682 13
	lw	a4,-20(s0)
	lw	a5,-44(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-20(s0)
	.loc 2 683 12
	lw	a4,-24(s0)
	lw	a5,-44(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-24(s0)
	.loc 2 684 12
	ld	a4,-32(s0)
	lw	a5,-44(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	add	a5,a4,a5
	sd	a5,-32(s0)
.L147:
	.loc 2 686 15
	lw	a5,-20(s0)
	bne	a5,zero,.L151
	.loc 2 686 1
	nop
	nop
	ld	ra,72(sp)
	.cfi_restore 1
	ld	s0,64(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 80
	addi	sp,sp,80
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
	.loc 2 689 1
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
	.loc 2 694 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 695 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 696 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 697 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 689 8
	sw	zero,-20(s0)
	.loc 2 691 5
	addi	a5,s0,-56
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 706 10
	j	.L153
.L159:
	.loc 2 693 9
	lw	a5,-20(s0)
	li	a3,512
	lla	a2,block_buf
	mv	a1,a5
	ld	a0,-72(s0)
	call	read_data
	.loc 2 694 11
	lla	a5,block_buf
	sd	a5,-32(s0)
	.loc 2 695 16
	li	a5,32
	sw	a5,-36(s0)
	.loc 2 704 14
	sw	zero,-40(s0)
	.loc 2 704 9
	j	.L154
.L158:
	.loc 2 698 18
	ld	a4,-32(s0)
	lw	a5,-40(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 698 21
	lhu	a5,0(a5)
	.loc 2 698 15
	beq	a5,zero,.L161
	.loc 2 698 30 discriminator 2
	ld	a4,-32(s0)
	lw	a5,-40(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 698 33 discriminator 2
	addi	a4,a5,2
	.loc 2 698 13 discriminator 2
	addi	a5,s0,-56
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 2 699 24
	sb	zero,-42(s0)
	.loc 2 703 16
	addi	a5,s0,-56
	li	a2,14
	ld	a1,-80(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 2 703 15 discriminator 1
	bne	a5,zero,.L156
	.loc 2 701 42
	ld	a4,-32(s0)
	lw	a5,-40(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 701 45
	lhu	a5,0(a5)
	sext.w	a5,a5
	j	.L160
.L161:
	.loc 2 697 17
	nop
.L156:
	.loc 2 704 36 discriminator 2
	lw	a5,-40(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L154:
	.loc 2 704 26 discriminator 1
	lw	a4,-40(s0)
	lw	a5,-36(s0)
	blt	a4,a5,.L158
	.loc 2 704 12 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-20(s0)
.L153:
	.loc 2 706 21
	ld	a5,-72(s0)
	lw	a4,8(a5)
	.loc 2 706 14
	lw	a5,-20(s0)
	bgtu	a4,a5,.L159
	.loc 2 706 16 discriminator 1
	li	a5,0
.L160:
	.loc 2 707 1
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
	.loc 2 710 1
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
	.loc 2 712 16
	li	a1,8
	ld	a0,-24(s0)
	call	path_lookup_lim
	mv	a5,a0
	.loc 2 713 1
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
.LC8:
	.string	"/"
	.text
	.align	1
	.type	path_lookup_lim, @function
path_lookup_lim:
.LFB35:
	.loc 2 716 1
	.cfi_startproc
	addi	sp,sp,-1424
	.cfi_def_cfa_offset 1424
	sd	ra,1416(sp)
	sd	s0,1408(sp)
	sd	s1,1400(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1424
	.cfi_def_cfa 8, 0
	sd	a0,-1416(s0)
	mv	a5,a1
	sw	a5,-1420(s0)
	.loc 2 725 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 726 5
	addi	a5,s0,-128
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 727 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 728 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 729 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 730 5
	addi	a5,s0,-232
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 731 5
	addi	a5,s0,-236
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 732 5
	addi	a5,s0,-248
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 717 7
	lw	a5,-1420(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L165
	.loc 2 716 24
	li	a5,0
	j	.L188
.L165:
	.loc 2 718 7
	ld	a5,-1416(s0)
	beq	a5,zero,.L167
	.loc 2 718 19 discriminator 1
	ld	a5,-1416(s0)
	lbu	a5,0(a5)
	.loc 2 718 13 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L168
.L167:
	.loc 2 717 24
	li	a5,0
	j	.L188
.L168:
	.loc 2 720 8
	lla	a1,.LC8
	ld	a0,-1416(s0)
	call	strcmp
	mv	a5,a0
	.loc 2 720 7 discriminator 1
	bne	a5,zero,.L169
	.loc 2 718 24
	li	a5,1
	j	.L188
.L169:
	.loc 2 721 5
	addi	a5,s0,-120
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 2 724 11
	lhu	a5,-120(s0)
	.loc 2 724 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L170
	.loc 2 722 24
	li	a5,0
	j	.L188
.L170:
	.loc 2 725 5
	addi	a5,s0,-504
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 725 5 discriminator 2
	addi	a5,s0,-504
	li	a2,255
	ld	a1,-1416(s0)
	mv	a0,a5
	call	strncpy
	.loc 2 725 23 discriminator 3
	sb	zero,-249(s0)
	.loc 2 726 9
	addi	a5,s0,-504
	sd	a5,-128(s0)
	.loc 2 728 8
	li	a5,1
	sw	a5,-140(s0)
	.loc 2 730 5
	addi	a5,s0,-760
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 729 14
	li	a5,47
	sb	a5,-760(s0)
	.loc 2 729 14
	sb	zero,-759(s0)
	.loc 2 777 10
	j	.L171
.L187:
	.loc 2 732 13
	sd	zero,-128(s0)
	.loc 2 735 15
	lhu	a5,-120(s0)
	.loc 2 735 11
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L172
	.loc 2 733 32
	li	a5,0
	j	.L188
.L172:
	.loc 2 736 13
	addi	a5,s0,-120
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 736 11 discriminator 1
	bne	a5,zero,.L173
	.loc 2 735 32
	li	a5,0
	j	.L188
.L173:
	.loc 2 736 14 discriminator 2
	ld	a4,-136(s0)
	addi	a5,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 2 736 13 discriminator 3
	sw	a5,-144(s0)
	.loc 2 738 16
	lw	a5,-144(s0)
	.loc 2 738 11
	bne	a5,zero,.L174
	.loc 2 737 32
	li	a5,0
	j	.L188
.L174:
	.loc 2 738 9 discriminator 1
	lw	a5,-144(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 772 15
	lhu	a5,-232(s0)
	.loc 2 772 11
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L175
.LBB5:
	.loc 2 742 13
	addi	a5,s0,-1400
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 742 18 discriminator 1
	lw	a5,-224(s0)
	.loc 2 742 14 discriminator 1
	sw	a5,-236(s0)
	.loc 2 743 17
	lw	a4,-236(s0)
	.loc 2 743 15
	li	a5,127
	ble	a4,a5,.L176
	.loc 2 742 18
	li	a5,127
	sw	a5,-236(s0)
.L176:
	.loc 2 743 13 discriminator 1
	lw	a5,-236(s0)
	mv	a3,a5
	addi	a4,s0,-1400
	addi	a5,s0,-232
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 2 744 17
	lw	a5,-236(s0)
	.loc 2 744 20
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1368(a5)
	.loc 2 747 13
	addi	a5,s0,-1272
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 747 22 discriminator 1
	sb	zero,-1272(s0)
	.loc 2 748 15
	lla	a1,.LC8
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 2 748 14 discriminator 1
	sd	a5,-248(s0)
	.loc 2 754 18
	j	.L177
.L179:
	.loc 2 751 26
	lbu	a5,-1272(s0)
	.loc 2 751 19
	beq	a5,zero,.L178
	.loc 2 750 55
	addi	a5,s0,-1272
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 750 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 2 750 21 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1272
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L178:
	.loc 2 751 17 discriminator 1
	ld	s1,-248(s0)
	.loc 2 751 49 discriminator 1
	addi	a5,s0,-1272
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 751 49 is_stmt 0 discriminator 2
	mv	a4,a5
	.loc 2 751 17 is_stmt 1 discriminator 2
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1272
	mv	a2,a4
	mv	a1,s1
	mv	a0,a5
	call	strncat
	.loc 2 752 19
	lla	a1,.LC8
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 2 752 18 discriminator 1
	sd	a5,-248(s0)
.L177:
	.loc 2 754 19
	ld	a5,-248(s0)
	bne	a5,zero,.L179
	.loc 2 755 13
	addi	a5,s0,-1016
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 765 20
	lbu	a5,-1400(s0)
	.loc 2 765 15
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L180
	.loc 2 756 17
	addi	a4,s0,-1400
	addi	a5,s0,-1016
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 2 757 41
	sb	zero,-761(s0)
	j	.L181
.L180:
	.loc 2 760 17
	addi	a4,s0,-760
	addi	a5,s0,-1016
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 2 761 41
	sb	zero,-761(s0)
	.loc 2 763 28
	lbu	a5,-1016(s0)
	.loc 2 763 19
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L182
	.loc 2 763 43 discriminator 1
	lbu	a5,-1015(s0)
	.loc 2 763 20 discriminator 1
	beq	a5,zero,.L183
.L182:
	.loc 2 762 55
	addi	a5,s0,-1016
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 762 55 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 2 762 21 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1016
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L183:
	.loc 2 763 52 discriminator 2
	addi	a5,s0,-1016
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 763 52 is_stmt 0 discriminator 3
	mv	a4,a5
	.loc 2 763 17 is_stmt 1 discriminator 3
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1400
	addi	a5,s0,-1016
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L181:
	.loc 2 769 22
	lbu	a5,-1272(s0)
	.loc 2 769 15
	beq	a5,zero,.L184
	.loc 2 766 51
	addi	a5,s0,-1016
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 766 51 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 2 766 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1016
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
	.loc 2 767 54
	addi	a5,s0,-1016
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 767 54 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 2 767 17 is_stmt 1 discriminator 1
	li	a5,255
	sub	a3,a5,a4
	addi	a4,s0,-1272
	addi	a5,s0,-1016
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L184:
	.loc 2 769 32 discriminator 1
	lw	a5,-1420(s0)
	addiw	a5,a5,-1
	sext.w	a4,a5
	addi	a5,s0,-1016
	mv	a1,a4
	mv	a0,a5
	call	path_lookup_lim
	mv	a5,a0
	.loc 2 769 32 is_stmt 0
	j	.L188
.L175:
.LBE5:
	.loc 2 772 12 is_stmt 1 discriminator 1
	lw	a5,-144(s0)
	sw	a5,-140(s0)
	.loc 2 772 12 discriminator 1
	ld	t3,-232(s0)
	ld	t1,-224(s0)
	ld	a7,-216(s0)
	ld	a6,-208(s0)
	ld	a0,-200(s0)
	ld	a1,-192(s0)
	ld	a2,-184(s0)
	ld	a3,-176(s0)
	ld	a4,-168(s0)
	ld	a5,-160(s0)
	sd	t3,-120(s0)
	sd	t1,-112(s0)
	sd	a7,-104(s0)
	sd	a6,-96(s0)
	sd	a0,-88(s0)
	sd	a1,-80(s0)
	sd	a2,-72(s0)
	sd	a3,-64(s0)
	sd	a4,-56(s0)
	sd	a5,-48(s0)
	ld	a5,-152(s0)
	sd	a5,-40(s0)
	.loc 2 775 20
	lbu	a5,-760(s0)
	.loc 2 775 11
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L185
	.loc 2 775 35 discriminator 1
	lbu	a5,-759(s0)
	.loc 2 775 12 discriminator 1
	beq	a5,zero,.L186
.L185:
	.loc 2 774 47
	addi	a5,s0,-760
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 774 47 is_stmt 0 discriminator 1
	mv	a4,a5
	.loc 2 774 13 is_stmt 1 discriminator 1
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-760
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L186:
	.loc 2 775 9 discriminator 2
	ld	s1,-136(s0)
	.loc 2 775 43 discriminator 2
	addi	a5,s0,-760
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 775 43 is_stmt 0 discriminator 3
	mv	a4,a5
	.loc 2 775 9 is_stmt 1 discriminator 3
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-760
	mv	a2,a4
	mv	a1,s1
	mv	a0,a5
	call	strncat
.L171:
	.loc 2 777 16
	ld	a5,-128(s0)
	lla	a1,.LC8
	mv	a0,a5
	call	strtok
	mv	a5,a0
	.loc 2 777 15 discriminator 1
	sd	a5,-136(s0)
	ld	a5,-136(s0)
	.loc 2 777 33 discriminator 1
	bne	a5,zero,.L187
	.loc 2 777 16 discriminator 2
	lw	a5,-140(s0)
.L188:
	.loc 2 778 1
	mv	a0,a5
	ld	ra,1416(sp)
	.cfi_restore 1
	ld	s0,1408(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1424
	ld	s1,1400(sp)
	.cfi_restore 9
	addi	sp,sp,1424
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
	.loc 2 781 1
	.cfi_startproc
	addi	sp,sp,-1712
	.cfi_def_cfa_offset 1712
	sd	ra,1704(sp)
	sd	s0,1696(sp)
	sd	s1,1688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1712
	.cfi_def_cfa 8, 0
	sd	a0,-1688(s0)
	sd	a1,-1696(s0)
	mv	a5,a2
	sw	a5,-1700(s0)
	.loc 2 794 5
	addi	a5,s0,-120
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 795 5
	addi	a5,s0,-128
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 796 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 797 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 798 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 799 5
	addi	a5,s0,-148
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 800 5
	addi	a5,s0,-152
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 801 5
	addi	a5,s0,-240
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 802 5
	addi	a5,s0,-244
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 803 5
	addi	a5,s0,-256
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 804 5
	addi	a5,s0,-260
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 805 5
	addi	a5,s0,-264
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 784 7
	ld	a5,-1696(s0)
	beq	a5,zero,.L190
	.loc 2 784 12 discriminator 1
	lw	a5,-1700(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L191
.L190:
	.loc 2 783 24
	li	a5,-1
	j	.L218
.L191:
	.loc 2 785 5
	addi	a5,s0,-520
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 784 5
	addi	a5,s0,-520
	ld	a2,-1688(s0)
	li	a1,256
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 787 11
	lbu	a5,-520(s0)
	.loc 2 787 7
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L193
	.loc 2 786 24
	li	a5,-1
	j	.L218
.L193:
	.loc 2 788 8
	addi	a5,s0,-520
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 788 7 discriminator 1
	bne	a5,zero,.L194
	.loc 2 787 11
	lw	a5,-1700(s0)
	sext.w	a4,a5
	li	a5,1
	ble	a4,a5,.L195
	.loc 2 787 19 discriminator 1
	ld	a5,-1696(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 2 787 16 discriminator 1
	ld	a5,-1696(s0)
	addi	a5,a5,1
	.loc 2 787 19 discriminator 1
	sb	zero,0(a5)
	.loc 2 787 32 discriminator 1
	li	a5,0
	.loc 2 787 32 is_stmt 0
	j	.L218
.L195:
	.loc 2 787 24 is_stmt 1 discriminator 2
	li	a5,-1
	.loc 2 787 24 is_stmt 0
	j	.L218
.L194:
	.loc 2 788 5 is_stmt 1 discriminator 2
	addi	a5,s0,-120
	mv	a1,a5
	li	a0,1
	call	read_inode
	.loc 2 790 5
	addi	a5,s0,-776
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 789 5
	addi	a4,s0,-520
	addi	a5,s0,-776
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 2 789 23 discriminator 1
	sb	zero,-521(s0)
	.loc 2 790 9
	addi	a5,s0,-776
	sd	a5,-128(s0)
	.loc 2 791 8
	sd	zero,-136(s0)
	.loc 2 792 10
	li	a5,8
	sw	a5,-140(s0)
	.loc 2 792 10
	li	a5,1
	sw	a5,-144(s0)
	.loc 2 792 6
	sw	zero,-148(s0)
	.loc 2 792 10
	lw	a5,-148(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-148(s0)
	mv	a4,a5
	.loc 2 792 8
	ld	a5,-1696(s0)
	add	a5,a5,a4
	.loc 2 792 13
	li	a4,47
	sb	a4,0(a5)
	.loc 2 792 8
	ld	a5,-1696(s0)
	addi	a5,a5,1
	.loc 2 792 11
	sb	zero,0(a5)
	.loc 2 820 10
	j	.L196
.L217:
	.loc 2 794 13
	sd	zero,-128(s0)
	.loc 2 796 15
	lhu	a5,-120(s0)
	.loc 2 796 11
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L197
	.loc 2 795 32
	li	a5,-1
	j	.L218
.L197:
	.loc 2 797 13
	addi	a5,s0,-120
	li	a1,1
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 797 11 discriminator 2
	bne	a5,zero,.L198
	.loc 2 796 32
	li	a5,-1
	j	.L218
.L198:
	.loc 2 797 14 discriminator 3
	ld	a4,-136(s0)
	addi	a5,s0,-120
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 2 797 13 discriminator 4
	sw	a5,-152(s0)
	.loc 2 799 12
	lw	a5,-152(s0)
	.loc 2 799 11
	bne	a5,zero,.L199
	.loc 2 798 32
	li	a5,-1
	j	.L218
.L199:
	.loc 2 799 9 discriminator 2
	lw	a5,-152(s0)
	addi	a4,s0,-240
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 814 15
	lhu	a5,-240(s0)
	.loc 2 814 11
	sext.w	a4,a5
	li	a5,3
	bne	a4,a5,.L200
.LBB6:
	.loc 2 802 16
	lw	a5,-140(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 2 802 15
	sw	a5,-140(s0)
	.loc 2 802 16
	lw	a5,-140(s0)
	.loc 2 802 15
	bgt	a5,zero,.L201
	.loc 2 801 40
	li	a5,-1
	j	.L218
.L201:
	.loc 2 803 13
	addi	a5,s0,-1672
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 802 20
	lw	a5,-232(s0)
	.loc 2 802 16
	sw	a5,-244(s0)
	.loc 2 803 19
	lw	a4,-244(s0)
	.loc 2 803 15
	li	a5,127
	ble	a4,a5,.L203
	.loc 2 802 20
	li	a5,127
	sw	a5,-244(s0)
.L203:
	.loc 2 803 13 discriminator 3
	lw	a5,-244(s0)
	mv	a3,a5
	addi	a4,s0,-1672
	addi	a5,s0,-240
	mv	a2,a4
	li	a1,0
	mv	a0,a5
	call	read_data
	.loc 2 803 17 discriminator 4
	lw	a5,-244(s0)
	.loc 2 803 22 discriminator 4
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-1640(a5)
	.loc 2 805 13
	addi	a5,s0,-1544
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 804 22
	sb	zero,-1544(s0)
	.loc 2 804 15
	lla	a1,.LC8
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 2 804 14 discriminator 2
	sd	a5,-256(s0)
	.loc 2 806 18
	j	.L204
.L206:
	.loc 2 805 26
	lbu	a5,-1544(s0)
	.loc 2 805 19
	beq	a5,zero,.L205
	.loc 2 805 55 discriminator 3
	addi	a5,s0,-1544
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 805 55 is_stmt 0 discriminator 5
	mv	a4,a5
	.loc 2 805 21 is_stmt 1 discriminator 5
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1544
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L205:
	.loc 2 805 17 discriminator 7
	ld	s1,-256(s0)
	.loc 2 805 49 discriminator 7
	addi	a5,s0,-1544
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 805 49 is_stmt 0 discriminator 8
	mv	a4,a5
	.loc 2 805 17 is_stmt 1 discriminator 8
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-1544
	mv	a2,a4
	mv	a1,s1
	mv	a0,a5
	call	strncat
	.loc 2 805 19 discriminator 9
	lla	a1,.LC8
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 2 805 18 discriminator 10
	sd	a5,-256(s0)
.L204:
	.loc 2 806 19
	ld	a5,-256(s0)
	bne	a5,zero,.L206
	.loc 2 807 13
	addi	a5,s0,-1288
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 810 20
	lbu	a5,-1672(s0)
	.loc 2 810 15
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L207
	.loc 2 806 17
	addi	a4,s0,-1672
	addi	a5,s0,-1288
	li	a2,511
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	j	.L208
.L207:
	.loc 2 808 26
	sb	zero,-1288(s0)
	.loc 2 808 17
	addi	a5,s0,-1288
	li	a2,511
	ld	a1,-1696(s0)
	mv	a0,a5
	call	strncat
	.loc 2 808 27 discriminator 1
	addi	a5,s0,-1288
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 808 41 discriminator 2
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 2 808 26 discriminator 2
	addi	a5,a5,-32
	add	a5,a5,s0
	lbu	a5,-1256(a5)
	.loc 2 808 19 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L209
	.loc 2 808 55 discriminator 3
	addi	a5,s0,-1288
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 808 55 is_stmt 0 discriminator 5
	mv	a4,a5
	.loc 2 808 21 is_stmt 1 discriminator 5
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1288
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L209:
	.loc 2 808 52 discriminator 7
	addi	a5,s0,-1288
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 808 52 is_stmt 0 discriminator 8
	mv	a4,a5
	.loc 2 808 17 is_stmt 1 discriminator 8
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1672
	addi	a5,s0,-1288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L208:
	.loc 2 811 22
	lbu	a5,-1544(s0)
	.loc 2 811 15
	beq	a5,zero,.L210
	.loc 2 810 27
	addi	a5,s0,-1288
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 810 41 discriminator 1
	addiw	a5,a5,-1
	sext.w	a5,a5
	.loc 2 810 26 discriminator 1
	addi	a5,a5,-32
	add	a5,a5,s0
	lbu	a5,-1256(a5)
	.loc 2 810 19 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L211
	.loc 2 810 55 discriminator 2
	addi	a5,s0,-1288
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 810 55 is_stmt 0 discriminator 4
	mv	a4,a5
	.loc 2 810 21 is_stmt 1 discriminator 4
	li	a5,511
	sub	a4,a5,a4
	addi	a5,s0,-1288
	mv	a2,a4
	lla	a1,.LC8
	mv	a0,a5
	call	strncat
.L211:
	.loc 2 810 54 discriminator 6
	addi	a5,s0,-1288
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 810 54 is_stmt 0 discriminator 7
	mv	a4,a5
	.loc 2 810 17 is_stmt 1 discriminator 7
	li	a5,511
	sub	a3,a5,a4
	addi	a4,s0,-1544
	addi	a5,s0,-1288
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	strncat
.L210:
	.loc 2 811 32 discriminator 1
	lw	a4,-1700(s0)
	addi	a5,s0,-1288
	mv	a2,a4
	ld	a1,-1696(s0)
	mv	a0,a5
	call	fs_realpath
	mv	a5,a0
	.loc 2 811 32 is_stmt 0
	j	.L218
.L200:
.LBE6:
	.loc 2 814 11 is_stmt 1 discriminator 1
	ld	a5,-136(s0)
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 814 10 discriminator 2
	sw	a5,-260(s0)
	.loc 2 816 13
	lw	a4,-148(s0)
	lw	a5,-260(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 816 15
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 2 816 11
	lw	a4,-1700(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L212
	.loc 2 815 32
	li	a5,-1
	j	.L218
.L212:
	.loc 2 817 15
	lw	a4,-148(s0)
	.loc 2 817 11
	li	a5,1
	bne	a4,a5,.L213
	.loc 2 817 23 discriminator 1
	ld	a5,-1696(s0)
	lbu	a5,0(a5)
	.loc 2 817 12 discriminator 1
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L214
.L213:
	.loc 2 816 18
	lw	a5,-148(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-148(s0)
	mv	a4,a5
	.loc 2 816 16
	ld	a5,-1696(s0)
	add	a5,a5,a4
	.loc 2 816 21
	li	a4,47
	sb	a4,0(a5)
.L214:
	.loc 2 817 14 discriminator 2
	sw	zero,-264(s0)
	.loc 2 817 9
	j	.L215
.L216:
	.loc 2 817 25 discriminator 5
	ld	a5,-136(s0)
	lw	a4,-264(s0)
	add	a4,a5,a4
	.loc 2 817 18 discriminator 5
	lw	a5,-148(s0)
	addiw	a3,a5,1
	sext.w	a3,a3
	sw	a3,-148(s0)
	mv	a3,a5
	.loc 2 817 16 discriminator 5
	ld	a5,-1696(s0)
	add	a5,a5,a3
	.loc 2 817 25 discriminator 5
	lbu	a4,0(a4)
	.loc 2 817 21 discriminator 5
	sb	a4,0(a5)
	.loc 2 817 30 discriminator 5
	lw	a5,-264(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-264(s0)
.L215:
	.loc 2 817 26 discriminator 3
	lw	a4,-264(s0)
	lw	a5,-260(s0)
	blt	a4,a5,.L216
	.loc 2 817 12 discriminator 6
	lw	a5,-148(s0)
	mv	a4,a5
	ld	a5,-1696(s0)
	add	a5,a5,a4
	.loc 2 817 15 discriminator 6
	sb	zero,0(a5)
	.loc 2 818 12
	ld	t3,-240(s0)
	ld	t1,-232(s0)
	ld	a7,-224(s0)
	ld	a6,-216(s0)
	ld	a0,-208(s0)
	ld	a1,-200(s0)
	ld	a2,-192(s0)
	ld	a3,-184(s0)
	ld	a4,-176(s0)
	ld	a5,-168(s0)
	sd	t3,-120(s0)
	sd	t1,-112(s0)
	sd	a7,-104(s0)
	sd	a6,-96(s0)
	sd	a0,-88(s0)
	sd	a1,-80(s0)
	sd	a2,-72(s0)
	sd	a3,-64(s0)
	sd	a4,-56(s0)
	sd	a5,-48(s0)
	ld	a5,-160(s0)
	sd	a5,-40(s0)
.L196:
	.loc 2 820 16
	ld	a5,-128(s0)
	lla	a1,.LC8
	mv	a0,a5
	call	strtok
	mv	a5,a0
	.loc 2 820 15 discriminator 1
	sd	a5,-136(s0)
	ld	a5,-136(s0)
	.loc 2 820 33 discriminator 1
	bne	a5,zero,.L217
	.loc 2 820 16 discriminator 2
	li	a5,0
.L218:
	.loc 2 821 1
	mv	a0,a5
	ld	ra,1704(sp)
	.cfi_restore 1
	ld	s0,1696(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1712
	ld	s1,1688(sp)
	.cfi_restore 9
	addi	sp,sp,1712
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE36:
	.size	fs_realpath, .-fs_realpath
	.section	.rodata
	.align	3
.LC9:
	.string	"== i-node %u ==\n"
	.align	3
.LC10:
	.string	"  type  = %u\n"
	.align	3
.LC11:
	.string	"  size  = %u\n"
	.align	3
.LC12:
	.string	"  addrs ="
	.align	3
.LC13:
	.string	" %u"
	.align	3
.LC14:
	.string	" [indirect %u]"
	.align	3
.LC15:
	.string	" [double-indirect %u]"
	.align	3
.LC16:
	.string	"\n"
	.text
	.align	1
	.globl	dump_inode
	.type	dump_inode, @function
dump_inode:
.LFB37:
	.loc 2 824 1
	.cfi_startproc
	addi	sp,sp,-128
	.cfi_def_cfa_offset 128
	sd	ra,120(sp)
	sd	s0,112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,128
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sw	a5,-116(s0)
	.loc 2 827 5
	addi	a5,s0,-104
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 828 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 825 5
	addi	a4,s0,-104
	lw	a5,-116(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 826 5
	lw	a5,-116(s0)
	mv	a1,a5
	lla	a0,.LC9
	call	printf
	.loc 2 827 31
	lhu	a5,-104(s0)
	.loc 2 827 5
	sext.w	a5,a5
	mv	a1,a5
	lla	a0,.LC10
	call	printf
	.loc 2 828 5
	lw	a5,-96(s0)
	mv	a1,a5
	lla	a0,.LC11
	call	printf
	.loc 2 829 5
	lla	a0,.LC12
	call	printf
	.loc 2 833 10
	sw	zero,-108(s0)
	.loc 2 833 5
	j	.L220
.L222:
	.loc 2 832 20
	lw	a5,-108(s0)
	addi	a4,a5,8
	addi	a5,s0,-104
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 2 832 11
	beq	a5,zero,.L221
	.loc 2 831 13
	lw	a5,-108(s0)
	addi	a4,a5,8
	addi	a5,s0,-104
	slli	a4,a4,2
	add	a5,a4,a5
	lw	a5,0(a5)
	mv	a1,a5
	lla	a0,.LC13
	call	printf
.L221:
	.loc 2 833 23 discriminator 2
	lw	a5,-108(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-108(s0)
.L220:
	.loc 2 833 18 discriminator 1
	lw	a4,-108(s0)
	li	a5,11
	ble	a4,a5,.L222
	.loc 2 836 16
	lw	a5,-24(s0)
	.loc 2 836 7
	beq	a5,zero,.L223
	.loc 2 834 9
	lw	a5,-24(s0)
	mv	a1,a5
	lla	a0,.LC14
	call	printf
.L223:
	.loc 2 839 16
	lw	a5,-20(s0)
	.loc 2 839 7
	beq	a5,zero,.L224
	.loc 2 837 9
	lw	a5,-20(s0)
	mv	a1,a5
	lla	a0,.LC15
	call	printf
.L224:
	.loc 2 839 5 discriminator 1
	lla	a0,.LC16
	call	printf
	.loc 2 840 1
	nop
	ld	ra,120(sp)
	.cfi_restore 1
	ld	s0,112(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 128
	addi	sp,sp,128
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE37:
	.size	dump_inode, .-dump_inode
	.align	1
	.type	owner_cap, @function
owner_cap:
.LFB38:
	.loc 2 843 1
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
	.loc 2 849 16
	li	a5,64
	.loc 2 850 1
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
	.loc 2 853 1
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
	.loc 2 853 7
	ld	a5,-24(s0)
	beq	a5,zero,.L231
	.loc 2 853 10 discriminator 1
	ld	a5,-32(s0)
	beq	a5,zero,.L231
	.loc 2 853 5 discriminator 2
	ld	a1,-32(s0)
	ld	a0,-24(s0)
	call	neoc_file_owner_add
	j	.L227
.L231:
	.loc 2 852 17
	nop
.L227:
	.loc 2 854 1
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
	.loc 2 857 1
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
	.loc 2 857 7
	ld	a5,-24(s0)
	beq	a5,zero,.L236
	.loc 2 857 10 discriminator 1
	ld	a5,-32(s0)
	beq	a5,zero,.L236
	.loc 2 857 5 discriminator 2
	ld	a1,-32(s0)
	ld	a0,-24(s0)
	call	neoc_file_owner_remove
	j	.L232
.L236:
	.loc 2 856 17
	nop
.L232:
	.loc 2 858 1
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
	.loc 2 861 1
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	ra,8(sp)
	sd	s0,0(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 2 864 5
	call	neoc_fs_pool_init
	.loc 2 865 1
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
	.loc 2 868 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 2 871 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 872 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 869 7
	call	neoc_fs_pop_free_pipe
	mv	a5,a0
	.loc 2 869 6 discriminator 1
	sd	a5,-24(s0)
	.loc 2 870 26
	ld	a5,-24(s0)
	.loc 2 870 48
	beq	a5,zero,.L239
	.loc 2 870 29 discriminator 1
	ld	a5,-24(s0)
	.loc 2 870 48 discriminator 1
	ld	a5,544(a5)
	j	.L240
.L239:
	.loc 2 870 48 is_stmt 0 discriminator 2
	li	a5,0
.L240:
	.loc 2 870 21 is_stmt 1 discriminator 4
	sd	a5,-32(s0)
	.loc 2 880 9
	ld	a5,-24(s0)
	.loc 2 880 7
	bne	a5,zero,.L241
	.loc 2 873 27
	call	kalloc
	mv	a5,a0
	.loc 2 873 10 discriminator 1
	sd	a5,-24(s0)
	.loc 2 877 13
	ld	a5,-24(s0)
	.loc 2 877 11
	bne	a5,zero,.L242
	.loc 2 875 32
	li	a5,0
	j	.L244
.L242:
	.loc 2 877 25 discriminator 1
	sd	zero,-32(s0)
.L241:
	.loc 2 880 5 discriminator 1
	ld	a5,-24(s0)
	li	a2,552
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 881 6
	ld	a5,-24(s0)
	.loc 2 881 24
	ld	a4,-32(s0)
	sd	a4,544(a5)
	.loc 2 883 16
	ld	a5,-24(s0)
.L244:
	.loc 2 884 1
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
	.loc 2 887 1
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
	.loc 2 889 7
	ld	a5,-24(s0)
	beq	a5,zero,.L248
	.loc 2 889 5 discriminator 1
	ld	a0,-24(s0)
	call	neoc_pipe_linked_file_clear
	.loc 2 890 5
	ld	a0,-24(s0)
	call	neoc_fs_push_free_pipe
	j	.L245
.L248:
	.loc 2 888 17
	nop
.L245:
	.loc 2 891 1
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
	.loc 2 894 1
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sd	ra,24(sp)
	sd	s0,16(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	.loc 2 897 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 898 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 894 7
	call	neoc_fs_pop_free_file
	mv	a5,a0
	.loc 2 894 6 discriminator 1
	sd	a5,-24(s0)
	.loc 2 895 28
	ld	a5,-24(s0)
	.loc 2 895 52
	beq	a5,zero,.L250
	.loc 2 895 31 discriminator 1
	ld	a5,-24(s0)
	.loc 2 895 52 discriminator 1
	ld	a5,136(a5)
	j	.L251
.L250:
	.loc 2 895 52 is_stmt 0 discriminator 2
	li	a5,0
.L251:
	.loc 2 895 23 is_stmt 1 discriminator 4
	sd	a5,-32(s0)
	.loc 2 903 9
	ld	a5,-24(s0)
	.loc 2 903 7
	bne	a5,zero,.L252
	.loc 2 898 26
	call	kalloc
	mv	a5,a0
	.loc 2 898 10 discriminator 2
	sd	a5,-24(s0)
	.loc 2 900 13
	ld	a5,-24(s0)
	.loc 2 900 11
	bne	a5,zero,.L253
	.loc 2 899 32
	li	a5,0
	j	.L255
.L253:
	.loc 2 900 27 discriminator 1
	sd	zero,-32(s0)
.L252:
	.loc 2 903 5 discriminator 1
	ld	a5,-24(s0)
	li	a2,144
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 904 6
	ld	a5,-24(s0)
	.loc 2 904 26
	ld	a4,-32(s0)
	sd	a4,136(a5)
	.loc 2 905 16
	ld	a5,-24(s0)
.L255:
	.loc 2 906 1
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
	.loc 2 909 1
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
	.loc 2 912 7
	ld	a5,-24(s0)
	beq	a5,zero,.L259
	.loc 2 912 5 discriminator 1
	ld	a0,-24(s0)
	call	neoc_file_owner_clear
	.loc 2 913 5
	ld	a0,-24(s0)
	call	neoc_fs_push_free_file
	j	.L256
.L259:
	.loc 2 911 17
	nop
.L256:
	.loc 2 914 1
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
	.loc 2 917 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	ra,40(sp)
	sd	s0,32(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	.loc 2 921 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 922 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 923 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 921 7
	call	alloc_pipe
	mv	a5,a0
	.loc 2 921 6 discriminator 2
	sd	a5,-24(s0)
	.loc 2 924 9
	ld	a5,-24(s0)
	.loc 2 924 7
	bne	a5,zero,.L261
	.loc 2 923 24
	li	a5,0
	j	.L263
.L261:
	.loc 2 924 6 discriminator 1
	ld	a5,-24(s0)
	.loc 2 924 13 discriminator 1
	sw	zero,512(a5)
	.loc 2 925 6
	ld	a5,-24(s0)
	.loc 2 925 14
	sw	zero,516(a5)
	.loc 2 926 6
	ld	a5,-24(s0)
	.loc 2 926 17
	li	a4,1
	sw	a4,520(a5)
	.loc 2 927 6
	ld	a5,-24(s0)
	.loc 2 927 18
	li	a4,1
	sw	a4,524(a5)
	.loc 2 928 6
	ld	a5,-24(s0)
	.loc 2 928 12
	sw	zero,536(a5)
	.loc 2 929 6
	ld	a5,-24(s0)
	.loc 2 929 23
	sw	zero,540(a5)
	.loc 2 930 5
	ld	a5,-24(s0)
	mv	a0,a5
	call	neoc_pipe_linked_file_clear
	.loc 2 932 12
	ld	a5,-24(s0)
	sd	a5,-32(s0)
	.loc 2 933 7
	ld	a5,-24(s0)
	sd	a5,-40(s0)
	.loc 2 935 16
	ld	a5,-24(s0)
.L263:
	.loc 2 936 1
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
	.loc 2 939 1
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
	.loc 2 941 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 942 12
	call	alloc_file
	mv	a5,a0
	.loc 2 942 11 discriminator 1
	sd	a5,-40(s0)
	.loc 2 945 8
	ld	a5,-40(s0)
	.loc 2 945 7
	bne	a5,zero,.L265
	.loc 2 943 24
	li	a5,0
	j	.L267
.L265:
	.loc 2 945 5 discriminator 1
	ld	a5,-40(s0)
	mv	a0,a5
	call	neoc_file_owner_clear
	.loc 2 947 5
	ld	s1,-40(s0)
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 947 5 is_stmt 0 discriminator 1
	mv	a1,a5
	mv	a0,s1
	call	owner_add
	.loc 2 949 16 is_stmt 1
	ld	a5,-40(s0)
.L267:
	.loc 2 950 1
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
	.loc 2 953 1
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
	.loc 2 954 5
	li	a2,256
	li	a1,0
	ld	a0,-40(s0)
	call	memset
	.loc 2 956 19
	call	new_file_table
	mv	a4,a0
	.loc 2 956 18 discriminator 1
	ld	a5,-40(s0)
	sd	a4,0(a5)
	.loc 2 958 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 2 958 24
	sw	zero,0(a5)
	.loc 2 959 15
	ld	a5,-40(s0)
	ld	a5,0(a5)
	.loc 2 959 24
	li	a4,1
	sw	a4,100(a5)
	.loc 2 961 15
	ld	a5,-40(s0)
	addi	s1,a5,8
	.loc 2 961 19
	call	new_file_table
	mv	a5,a0
	.loc 2 961 18 discriminator 1
	sd	a5,0(s1)
	.loc 2 963 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 2 963 24
	li	a4,1
	sw	a4,0(a5)
	.loc 2 964 15
	ld	a5,-40(s0)
	addi	a5,a5,8
	ld	a5,0(a5)
	.loc 2 964 24
	li	a4,1
	sw	a4,100(a5)
	.loc 2 966 15
	ld	a5,-40(s0)
	addi	s1,a5,16
	.loc 2 966 19
	call	new_file_table
	mv	a5,a0
	.loc 2 966 18 discriminator 1
	sd	a5,0(s1)
	.loc 2 968 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 2 968 24
	li	a4,2
	sw	a4,0(a5)
	.loc 2 969 15
	ld	a5,-40(s0)
	addi	a5,a5,16
	ld	a5,0(a5)
	.loc 2 969 24
	li	a4,1
	sw	a4,100(a5)
	.loc 2 970 1
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
	.loc 2 973 1
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
	.loc 2 975 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 974 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 974 15 discriminator 1
	sd	a5,-24(s0)
	.loc 2 984 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L270
	.loc 2 984 12 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L271
.L270:
	.loc 2 983 24
	li	a5,0
	j	.L276
.L271:
	.loc 2 985 19
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 985 7
	bne	a5,zero,.L273
	.loc 2 984 24
	li	a5,0
	j	.L276
.L273:
	.loc 2 987 19
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 987 23
	lw	a5,100(a5)
	.loc 2 987 7
	bne	a5,zero,.L274
	.loc 2 985 24
	li	a5,0
	j	.L276
.L274:
	.loc 2 990 18
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 990 22
	lw	a4,0(a5)
	.loc 2 990 7
	li	a5,4
	bne	a4,a5,.L275
	.loc 2 990 45 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 990 49 discriminator 1
	ld	a5,104(a5)
	.loc 2 990 33 discriminator 1
	beq	a5,zero,.L275
	.loc 2 988 24
	li	a5,1
	j	.L276
.L275:
	.loc 2 990 16 discriminator 3
	li	a5,0
.L276:
	.loc 2 991 1
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
	.loc 2 994 1
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
	.loc 2 996 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 995 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 995 15 discriminator 1
	sd	a5,-24(s0)
	.loc 2 1002 18
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1002 7
	beq	a5,zero,.L278
	.loc 2 1002 34 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1002 38 discriminator 1
	lw	a5,100(a5)
	.loc 2 1002 22 discriminator 1
	beq	a5,zero,.L278
	.loc 2 1000 22
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1000 26
	lw	a5,0(a5)
	.loc 2 1000 11
	bne	a5,zero,.L278
	.loc 2 998 32
	li	a5,1
	j	.L280
.L278:
	.loc 2 1002 16 discriminator 3
	li	a5,0
.L280:
	.loc 2 1003 1
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
	.loc 2 1006 1
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
	.loc 2 1008 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1007 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1007 15 discriminator 1
	sd	a5,-24(s0)
	.loc 2 1015 18
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1015 7
	beq	a5,zero,.L282
	.loc 2 1015 34 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1015 38 discriminator 1
	lw	a5,100(a5)
	.loc 2 1015 22 discriminator 1
	beq	a5,zero,.L282
	.loc 2 1013 22
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1013 26
	lw	a4,0(a5)
	.loc 2 1013 11
	li	a5,1
	bne	a4,a5,.L282
	.loc 2 1011 32
	li	a5,1
	j	.L284
.L282:
	.loc 2 1015 16 discriminator 3
	li	a5,0
.L284:
	.loc 2 1016 1
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
	.loc 2 1019 1
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
	.loc 2 1022 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1023 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1020 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1020 15 discriminator 1
	sd	a5,-24(s0)
	.loc 2 1022 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L286
	.loc 2 1022 12 discriminator 2
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L287
.L286:
	.loc 2 1021 24
	li	a5,0
	j	.L293
.L287:
	.loc 2 1023 19
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1023 7
	bne	a5,zero,.L289
	.loc 2 1022 24
	li	a5,0
	j	.L293
.L289:
	.loc 2 1023 17 discriminator 2
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1023 21 discriminator 2
	lw	a5,0(a5)
	.loc 2 1023 6 discriminator 2
	sw	a5,-28(s0)
	.loc 2 1024 18
	lw	a5,-28(s0)
	.loc 2 1024 39
	beq	a5,zero,.L290
	.loc 2 1024 26 discriminator 2
	lw	a4,-28(s0)
	.loc 2 1024 23 discriminator 2
	li	a5,1
	beq	a4,a5,.L290
	.loc 2 1024 34 discriminator 4
	lw	a4,-28(s0)
	.loc 2 1024 31 discriminator 4
	li	a5,2
	beq	a4,a5,.L290
	.loc 2 1024 42 discriminator 6
	lw	a4,-28(s0)
	.loc 2 1024 39 discriminator 6
	li	a5,5
	bne	a4,a5,.L291
.L290:
	.loc 2 1024 39 is_stmt 0 discriminator 7
	li	a5,1
	.loc 2 1024 39
	j	.L293
.L291:
	.loc 2 1024 39 discriminator 8
	li	a5,0
.L293:
	.loc 2 1025 1 is_stmt 1
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
	.loc 2 1028 1
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
	.loc 2 1033 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1034 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1035 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1036 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1028 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1028 15 discriminator 1
	sd	a5,-40(s0)
	.loc 2 1030 9
	call	pipealloc
	mv	a5,a0
	.loc 2 1030 8 discriminator 1
	sd	a5,-48(s0)
	.loc 2 1053 10
	li	a5,3
	sw	a5,-52(s0)
	.loc 2 1053 5
	j	.L295
.L298:
	.loc 2 1052 22
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1052 11
	bne	a5,zero,.L296
	.loc 2 1034 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 2 1034 27
	call	new_file_table
	mv	a5,a0
	.loc 2 1034 26 discriminator 2
	sd	a5,0(s1)
	.loc 2 1036 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1036 32
	li	a4,4
	sw	a4,0(a5)
	.loc 2 1037 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1037 32
	li	a4,1
	sw	a4,100(a5)
	.loc 2 1038 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1038 32
	li	a4,-1
	sw	a4,4(a5)
	.loc 2 1039 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1039 31
	sw	zero,96(a5)
	.loc 2 1040 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1040 32
	ld	a4,-48(s0)
	sd	a4,104(a5)
	.loc 2 1041 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1041 37
	li	a4,1
	sw	a4,116(a5)
	.loc 2 1042 23
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1042 38
	sw	zero,120(a5)
	.loc 2 1043 17
	lw	a4,-52(s0)
	ld	a5,-72(s0)
	sw	a4,0(a5)
	.loc 2 1045 16
	ld	a5,-48(s0)
	lw	a4,536(a5)
	.loc 2 1045 22
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,536(a5)
	.loc 2 1046 13
	ld	a3,-48(s0)
	.loc 2 1046 53
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	.loc 2 1046 13
	ld	a5,0(a5)
	mv	a1,a5
	mv	a0,a3
	call	neoc_pipe_linked_file_add
	.loc 2 1047 16
	ld	a5,-48(s0)
	lw	a4,528(a5)
	.loc 2 1047 25
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,528(a5)
	.loc 2 1050 13
	j	.L297
.L296:
	.loc 2 1053 23 discriminator 2
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
.L295:
	.loc 2 1053 18 discriminator 1
	lw	a4,-52(s0)
	li	a5,31
	ble	a4,a5,.L298
.L297:
	.loc 2 1075 12
	li	a5,3
	sw	a5,-56(s0)
	.loc 2 1075 5
	j	.L299
.L302:
	.loc 2 1074 22
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1074 11
	bne	a5,zero,.L300
	.loc 2 1055 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 2 1055 29
	call	new_file_table
	mv	a5,a0
	.loc 2 1055 28 discriminator 1
	sd	a5,0(s1)
	.loc 2 1057 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1057 34
	li	a4,4
	sw	a4,0(a5)
	.loc 2 1058 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1058 34
	li	a4,1
	sw	a4,100(a5)
	.loc 2 1059 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1059 34
	li	a4,-1
	sw	a4,4(a5)
	.loc 2 1061 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1061 33
	sw	zero,96(a5)
	.loc 2 1062 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1062 34
	ld	a4,-48(s0)
	sd	a4,104(a5)
	.loc 2 1063 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1063 40
	li	a4,1
	sw	a4,120(a5)
	.loc 2 1064 23
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1064 39
	sw	zero,116(a5)
	.loc 2 1065 17
	lw	a4,-56(s0)
	ld	a5,-80(s0)
	sw	a4,0(a5)
	.loc 2 1067 16
	ld	a5,-48(s0)
	lw	a4,536(a5)
	.loc 2 1067 22
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,536(a5)
	.loc 2 1068 13
	ld	a3,-48(s0)
	.loc 2 1068 53
	ld	a4,-40(s0)
	lw	a5,-56(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	.loc 2 1068 13
	ld	a5,0(a5)
	mv	a1,a5
	mv	a0,a3
	call	neoc_pipe_linked_file_add
	.loc 2 1069 16
	ld	a5,-48(s0)
	lw	a4,532(a5)
	.loc 2 1069 25
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,532(a5)
	.loc 2 1072 13
	j	.L301
.L300:
	.loc 2 1075 29 discriminator 2
	lw	a5,-56(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-56(s0)
.L299:
	.loc 2 1075 22 discriminator 1
	lw	a4,-56(s0)
	li	a5,31
	ble	a4,a5,.L302
	.loc 2 1075 1
	nop
.L301:
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
.LC17:
	.string	"piperead"
	.text
	.align	1
	.globl	piperead
	.type	piperead, @function
piperead:
.LFB54:
	.loc 2 1078 1
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
	.loc 2 1083 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1084 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1085 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1086 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1086 16 discriminator 1
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1086 15 discriminator 2
	sd	a5,-24(s0)
	.loc 2 1092 18
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1092 7
	bne	a5,zero,.L304
	.loc 2 1089 9
	lla	a0,.LC17
	call	panic
.L304:
	.loc 2 1095 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L305
	.loc 2 1095 12 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L306
.L305:
	.loc 2 1093 9
	lla	a0,.LC17
	call	panic
.L306:
	.loc 2 1095 17 discriminator 2
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1095 21 discriminator 2
	ld	a5,104(a5)
	.loc 2 1095 6 discriminator 2
	sd	a5,-32(s0)
	.loc 2 1101 9
	ld	a5,-32(s0)
	.loc 2 1101 7
	bne	a5,zero,.L308
	.loc 2 1098 9
	lla	a0,.LC17
	call	panic
	.loc 2 1105 10
	j	.L308
.L310:
	.loc 2 1102 9
	call	yield
.L308:
	.loc 2 1105 12
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 2 1105 22
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 2 1105 30
	bne	a4,a5,.L309
	.loc 2 1105 33 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 2 1105 30 discriminator 1
	bne	a5,zero,.L310
.L309:
	.loc 2 1110 9
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 2 1110 19
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 2 1110 7
	bne	a4,a5,.L311
	.loc 2 1110 31 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 2 1110 27 discriminator 1
	bne	a5,zero,.L311
	.loc 2 1106 24
	li	a5,0
	j	.L320
.L311:
	.loc 2 1110 6 discriminator 3
	sw	zero,-36(s0)
	.loc 2 1129 10
	sw	zero,-40(s0)
	.loc 2 1129 5
	j	.L313
.L316:
	.loc 2 1113 13
	call	yield
.L314:
	.loc 2 1117 16
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 2 1117 26
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 2 1117 34
	bne	a4,a5,.L315
	.loc 2 1117 37 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 2 1117 34 discriminator 1
	bne	a5,zero,.L316
.L315:
	.loc 2 1121 13
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 2 1121 23
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 2 1121 11
	bne	a4,a5,.L317
	.loc 2 1121 35 discriminator 1
	ld	a5,-32(s0)
	lw	a5,524(a5)
	.loc 2 1121 31 discriminator 1
	beq	a5,zero,.L321
.L317:
	.loc 2 1121 18 discriminator 3
	ld	a3,-32(s0)
	.loc 2 1121 26 discriminator 3
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 2 1121 33 discriminator 3
	andi	a5,a5,511
	sext.w	a4,a5
	.loc 2 1121 13 discriminator 3
	lw	a5,-40(s0)
	sext.w	a5,a5
	mv	a2,a5
	ld	a5,-64(s0)
	add	a5,a5,a2
	.loc 2 1121 24 discriminator 3
	slli	a4,a4,32
	srli	a4,a4,32
	add	a4,a3,a4
	lbu	a4,0(a4)
	.loc 2 1121 16 discriminator 3
	sb	a4,0(a5)
	.loc 2 1122 10
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 2 1122 17
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,512(a5)
	.loc 2 1125 10
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
	.loc 2 1129 42 discriminator 2
	lw	a5,-40(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-40(s0)
.L313:
	.loc 2 1129 18 discriminator 1
	lw	a5,-40(s0)
	sext.w	a5,a5
	.loc 2 1129 20 discriminator 1
	lw	a4,-56(s0)
	sext.w	a4,a4
	ble	a4,a5,.L318
	.loc 2 1129 23 discriminator 3
	ld	a5,-32(s0)
	lw	a4,512(a5)
	.loc 2 1129 32 discriminator 3
	ld	a5,-32(s0)
	lw	a5,516(a5)
	.loc 2 1129 20 discriminator 3
	bltu	a4,a5,.L314
	j	.L318
.L321:
	.loc 2 1118 13
	nop
.L318:
	.loc 2 1129 16 discriminator 5
	lw	a5,-36(s0)
	sext.w	a5,a5
.L320:
	.loc 2 1130 1
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
.LFE54:
	.size	piperead, .-piperead
	.section	.rodata
	.align	3
.LC18:
	.string	"pipewrite"
	.text
	.align	1
	.globl	pipewrite
	.type	pipewrite, @function
pipewrite:
.LFB55:
	.loc 2 1133 1
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
	.loc 2 1137 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1138 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1139 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1136 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1136 15 discriminator 1
	sd	a5,-24(s0)
	.loc 2 1142 18
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1142 7
	bne	a5,zero,.L323
	.loc 2 1139 9
	lla	a0,.LC18
	call	panic
.L323:
	.loc 2 1145 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L324
	.loc 2 1145 12 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L325
.L324:
	.loc 2 1143 9
	lla	a0,.LC18
	call	panic
.L325:
	.loc 2 1145 17 discriminator 2
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1145 21 discriminator 2
	ld	a5,104(a5)
	.loc 2 1145 6 discriminator 2
	sd	a5,-32(s0)
	.loc 2 1151 9
	ld	a5,-32(s0)
	.loc 2 1151 7
	bne	a5,zero,.L326
	.loc 2 1148 9
	lla	a0,.LC18
	call	panic
.L326:
	.loc 2 1169 10
	sw	zero,-36(s0)
	.loc 2 1169 5
	j	.L327
.L330:
	.loc 2 1154 13
	call	yield
.L328:
	.loc 2 1157 16
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 2 1157 26
	ld	a5,-32(s0)
	lw	a5,512(a5)
	.loc 2 1157 24
	subw	a5,a4,a5
	sext.w	a4,a5
	.loc 2 1157 38
	li	a5,512
	bne	a4,a5,.L329
	.loc 2 1157 41 discriminator 1
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 2 1157 38 discriminator 1
	bne	a5,zero,.L330
.L329:
	.loc 2 1161 14
	ld	a5,-32(s0)
	lw	a5,520(a5)
	.loc 2 1161 11
	bne	a5,zero,.L331
	.loc 2 1159 36
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 2 1159 44
	ble	a5,zero,.L332
	.loc 2 1159 44 is_stmt 0 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	.loc 2 1159 44
	j	.L336
.L332:
	.loc 2 1159 44 discriminator 2
	li	a5,-1
	.loc 2 1159 44
	j	.L336
.L331:
	.loc 2 1161 36 is_stmt 1 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	mv	a4,a5
	ld	a5,-64(s0)
	add	a5,a5,a4
	.loc 2 1161 10 discriminator 1
	ld	a3,-32(s0)
	.loc 2 1161 18 discriminator 1
	ld	a4,-32(s0)
	lw	a4,516(a4)
	.loc 2 1161 26 discriminator 1
	andi	a4,a4,511
	sext.w	a2,a4
	.loc 2 1161 36 discriminator 1
	lbu	a4,0(a5)
	.loc 2 1161 31 discriminator 1
	slli	a5,a2,32
	srli	a5,a5,32
	add	a5,a3,a5
	sb	a4,0(a5)
	.loc 2 1162 10
	ld	a5,-32(s0)
	lw	a4,516(a5)
	.loc 2 1162 18
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,516(a5)
	.loc 2 1169 22 discriminator 2
	lw	a5,-36(s0)
	sext.w	a5,a5
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-36(s0)
.L327:
	.loc 2 1169 18 discriminator 1
	lw	a5,-36(s0)
	sext.w	a5,a5
	lw	a4,-56(s0)
	sext.w	a4,a4
	bgt	a4,a5,.L328
	.loc 2 1169 16 discriminator 3
	lw	a5,-56(s0)
.L336:
	.loc 2 1170 1
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
.LFE55:
	.size	pipewrite, .-pipewrite
	.align	1
	.type	path_parent_lookup_abs, @function
path_parent_lookup_abs:
.LFB56:
	.loc 2 1173 1
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
	.loc 2 1173 1
	mv	a5,sp
	mv	s10,a5
	.loc 2 1183 5
	addi	a5,s0,-120
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1184 5
	addi	a5,s0,-128
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1185 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1186 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1187 5
	addi	a5,s0,-232
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1188 5
	addi	a5,s0,-240
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1189 5
	addi	a5,s0,-244
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1190 5
	addi	a5,s0,-248
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1191 5
	addi	a5,s0,-252
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1184 7
	ld	a5,-264(s0)
	beq	a5,zero,.L338
	.loc 2 1184 19 discriminator 2
	ld	a5,-264(s0)
	lbu	a5,0(a5)
	.loc 2 1184 13 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L339
.L338:
	.loc 2 1183 24
	li	a5,0
	j	.L340
.L339:
	.loc 2 1187 8
	lla	a1,.LC8
	ld	a0,-264(s0)
	call	strcmp
	mv	a5,a0
	.loc 2 1187 7 discriminator 2
	bne	a5,zero,.L341
	.loc 2 1184 24
	li	a5,0
	j	.L340
.L341:
	.loc 2 1187 15 discriminator 3
	ld	a0,-264(s0)
	call	strlen
	mv	a5,a0
	.loc 2 1187 27 discriminator 4
	addiw	a5,a5,1
	sext.w	s1,a5
	mv	a5,s1
	.loc 2 1187 10 discriminator 4
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
	.loc 2 1188 5
	mv	a5,s1
	mv	a2,a5
	li	a1,0
	ld	a0,-112(s0)
	call	memset
	.loc 2 1188 5 discriminator 2
	mv	a2,s1
	ld	a1,-264(s0)
	ld	a0,-112(s0)
	call	strncpy
	.loc 2 1191 9
	ld	a5,-112(s0)
	sd	a5,-120(s0)
	.loc 2 1192 9
	sd	zero,-128(s0)
	.loc 2 1193 9
	ld	a5,-120(s0)
	lla	a1,.LC8
	mv	a0,a5
	call	strtok
	mv	a5,a0
	.loc 2 1193 8 discriminator 1
	sd	a5,-136(s0)
	.loc 2 1194 8
	li	a5,1
	sw	a5,-140(s0)
	.loc 2 1196 5
	lw	a5,-140(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1214 10
	j	.L342
.L347:
	.loc 2 1199 17
	lla	a1,.LC8
	li	a0,0
	call	strtok
	mv	a5,a0
	.loc 2 1199 16 discriminator 1
	sd	a5,-240(s0)
	.loc 2 1206 12
	ld	a5,-240(s0)
	.loc 2 1206 11
	bne	a5,zero,.L343
	.loc 2 1202 17
	ld	a5,-136(s0)
	sd	a5,-128(s0)
	.loc 2 1203 13
	j	.L344
.L343:
	.loc 2 1207 14
	lhu	a5,-232(s0)
	.loc 2 1207 11
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L345
	.loc 2 1206 32
	li	a5,0
	j	.L340
.L345:
	.loc 2 1207 19 discriminator 1
	ld	a4,-136(s0)
	addi	a5,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 2 1207 18 discriminator 2
	sw	a5,-244(s0)
	.loc 2 1209 21
	lw	a5,-244(s0)
	.loc 2 1209 11
	bne	a5,zero,.L346
	.loc 2 1208 32
	li	a5,0
	j	.L340
.L346:
	.loc 2 1209 9 discriminator 1
	lw	a5,-244(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1210 12
	lw	a5,-244(s0)
	sw	a5,-140(s0)
	.loc 2 1211 12
	ld	a5,-240(s0)
	sd	a5,-136(s0)
.L342:
	.loc 2 1214 11
	ld	a5,-136(s0)
	bne	a5,zero,.L347
.L344:
	.loc 2 1215 8
	ld	a5,-128(s0)
	.loc 2 1215 7
	bne	a5,zero,.L348
	.loc 2 1214 24
	li	a5,0
	j	.L340
.L348:
	.loc 2 1215 17 discriminator 1
	lw	a4,-140(s0)
	ld	a5,-272(s0)
	sw	a4,0(a5)
	.loc 2 1217 7
	ld	a5,-128(s0)
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 1217 6 discriminator 1
	sw	a5,-248(s0)
	.loc 2 1219 9
	lw	a4,-248(s0)
	.loc 2 1219 7
	li	a5,14
	ble	a4,a5,.L349
	.loc 2 1218 10
	li	a5,14
	sw	a5,-248(s0)
.L349:
	.loc 2 1220 10
	sw	zero,-252(s0)
	.loc 2 1220 5
	j	.L350
.L351:
	.loc 2 1219 17
	lw	a5,-252(s0)
	mv	a4,a5
	ld	a5,-280(s0)
	add	a5,a5,a4
	.loc 2 1219 20
	sb	zero,0(a5)
	.loc 2 1220 23 discriminator 3
	lw	a5,-252(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-252(s0)
.L350:
	.loc 2 1220 18 discriminator 1
	lw	a4,-252(s0)
	li	a5,13
	ble	a4,a5,.L351
	.loc 2 1220 5 discriminator 4
	ld	a5,-128(s0)
	lw	a4,-248(s0)
	mv	a2,a4
	mv	a1,a5
	ld	a0,-280(s0)
	call	strncpy
	.loc 2 1221 16
	li	a5,1
.L340:
	mv	sp,s10
	.loc 2 1222 1
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
	.loc 2 1225 1
	.cfi_startproc
	addi	sp,sp,-208
	.cfi_def_cfa_offset 208
	sd	ra,200(sp)
	sd	s0,192(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,208
	.cfi_def_cfa 8, 0
	.loc 2 1229 5
	addi	a5,s0,-104
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1230 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1231 5
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1243 13
	li	a5,1
	sw	a5,-108(s0)
	.loc 2 1243 5
	j	.L354
.L357:
	.loc 2 1230 9
	lw	a5,-108(s0)
	addi	a4,s0,-104
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1242 14
	lhu	a5,-104(s0)
	.loc 2 1242 11
	bne	a5,zero,.L355
	.loc 2 1234 13
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1235 22
	li	a5,2
	sh	a5,-200(s0)
	.loc 2 1236 23
	li	a5,1
	sh	a5,-194(s0)
	.loc 2 1237 22
	sw	zero,-192(s0)
	.loc 2 1238 22
	li	a5,420
	sw	a5,-188(s0)
	.loc 2 1238 21
	sh	zero,-184(s0)
	.loc 2 1238 21
	sh	zero,-182(s0)
	.loc 2 1238 46
	call	fs_now
	mv	a5,a0
	.loc 2 1238 45 discriminator 1
	sw	a5,-172(s0)
	.loc 2 1238 39 discriminator 1
	lw	a5,-172(s0)
	.loc 2 1238 34 discriminator 1
	sw	a5,-176(s0)
	.loc 2 1238 28 discriminator 1
	lw	a5,-176(s0)
	.loc 2 1238 23 discriminator 1
	sw	a5,-180(s0)
	.loc 2 1239 13
	lw	a5,-108(s0)
	addi	a4,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1240 32
	lw	a5,-108(s0)
	j	.L358
.L355:
	.loc 2 1243 41 discriminator 2
	lw	a5,-108(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-108(s0)
.L354:
	.loc 2 1243 28 discriminator 1
	lla	a5,sb
	lw	a4,8(a5)
	.loc 2 1243 24 discriminator 1
	lw	a5,-108(s0)
	bgeu	a4,a5,.L357
	.loc 2 1243 16 discriminator 3
	li	a5,0
.L358:
	.loc 2 1244 1
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
	.loc 2 1247 1
	.cfi_startproc
	addi	sp,sp,-736
	.cfi_def_cfa_offset 736
	sd	ra,728(sp)
	sd	s0,720(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,736
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-736(s0)
	mv	a4,a2
	sw	a5,-724(s0)
	mv	a5,a4
	sw	a5,-728(s0)
	.loc 2 1266 5
	addi	a5,s0,-104
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1267 5
	addi	a5,s0,-120
	li	a2,16
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1268 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1269 5
	addi	a5,s0,-128
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1270 5
	addi	a5,s0,-136
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1271 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1272 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1273 5
	addi	a5,s0,-148
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1274 5
	addi	a5,s0,-152
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1275 5
	addi	a5,s0,-156
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1276 5
	addi	a5,s0,-160
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1277 5
	addi	a5,s0,-164
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1278 5
	addi	a5,s0,-168
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1279 5
	addi	a5,s0,-172
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1280 5
	addi	a5,s0,-176
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1281 5
	addi	a5,s0,-180
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1282 5
	addi	a5,s0,-192
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1283 5
	addi	a5,s0,-196
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1252 7
	ld	a5,-736(s0)
	beq	a5,zero,.L360
	.loc 2 1252 19 discriminator 1
	ld	a5,-736(s0)
	lbu	a5,0(a5)
	.loc 2 1252 13 discriminator 1
	bne	a5,zero,.L361
.L360:
	.loc 2 1250 24
	li	a5,-1
	j	.L376
.L361:
	.loc 2 1253 5
	addi	a4,s0,-104
	lw	a5,-724(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1257 11
	lhu	a5,-104(s0)
	.loc 2 1257 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L363
	.loc 2 1254 24
	li	a5,-1
	j	.L376
.L363:
	.loc 2 1258 13
	lw	a5,-728(s0)
	slli	a5,a5,48
	srli	a5,a5,48
	.loc 2 1258 12
	sh	a5,-120(s0)
	.loc 2 1261 10
	sw	zero,-124(s0)
	.loc 2 1261 5
	j	.L364
.L365:
	.loc 2 1260 16
	lw	a5,-124(s0)
	.loc 2 1260 19
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-102(a5)
	.loc 2 1261 23 discriminator 3
	lw	a5,-124(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-124(s0)
.L364:
	.loc 2 1261 18 discriminator 1
	lw	a4,-124(s0)
	li	a5,13
	ble	a4,a5,.L365
	.loc 2 1261 5 discriminator 4
	addi	a5,s0,-120
	addi	a5,a5,2
	li	a2,14
	ld	a1,-736(s0)
	mv	a0,a5
	call	strncpy
	.loc 2 1264 8
	sw	zero,-128(s0)
	.loc 2 1294 10
	j	.L366
.L373:
	.loc 2 1266 9
	lw	a4,-128(s0)
	addi	a5,s0,-104
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 2 1267 13
	lla	a5,block_buf
	sd	a5,-136(s0)
	.loc 2 1268 16
	li	a5,32
	sw	a5,-140(s0)
	.loc 2 1290 16
	sw	zero,-144(s0)
	.loc 2 1290 9
	j	.L367
.L372:
	.loc 2 1289 20
	ld	a4,-136(s0)
	lw	a5,-144(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1289 25
	lhu	a5,0(a5)
	.loc 2 1289 15
	bne	a5,zero,.L368
	.loc 2 1271 21
	ld	a4,-136(s0)
	lw	a5,-144(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1271 26
	lhu	a4,-120(s0)
	mv	a7,a4
	lhu	a4,-118(s0)
	mv	a6,a4
	lhu	a4,-116(s0)
	mv	a0,a4
	lhu	a4,-114(s0)
	mv	a1,a4
	lhu	a4,-112(s0)
	mv	a2,a4
	lhu	a4,-110(s0)
	mv	a3,a4
	lhu	a4,-108(s0)
	sh	a7,0(a5)
	sh	a6,2(a5)
	sh	a0,4(a5)
	sh	a1,6(a5)
	sh	a2,8(a5)
	sh	a3,10(a5)
	sh	a4,12(a5)
	lhu	a4,-106(s0)
	sh	a4,14(a5)
	.loc 2 1273 29
	lw	a5,-128(s0)
	srliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 1273 24
	sw	a5,-148(s0)
	.loc 2 1274 26
	lw	a3,-148(s0)
	addi	a4,s0,-104
	lw	a5,-724(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 2 1274 25 discriminator 2
	sw	a5,-152(s0)
	.loc 2 1276 20
	lw	a5,-152(s0)
	.loc 2 1276 19
	bne	a5,zero,.L369
	.loc 2 1275 48
	li	a5,-1
	j	.L376
.L369:
	.loc 2 1276 17 discriminator 2
	lw	a5,-152(s0)
	ld	a4,-136(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 2 1279 32
	lw	a5,-96(s0)
	.loc 2 1279 37
	srliw	a5,a5,4
	sext.w	a5,a5
	.loc 2 1279 28
	sw	a5,-156(s0)
	.loc 2 1280 29
	lw	a5,-128(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	.loc 2 1280 69
	lw	a4,-144(s0)
	.loc 2 1280 68
	addw	a5,a5,a4
	sext.w	a5,a5
	.loc 2 1280 24
	sw	a5,-160(s0)
	.loc 2 1287 27
	lw	a4,-160(s0)
	lw	a5,-156(s0)
	.loc 2 1287 19
	bltu	a4,a5,.L370
	.loc 2 1282 36
	lw	a5,-128(s0)
	srliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 1282 41
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 2 1282 44
	slliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 1282 30
	sw	a5,-164(s0)
	.loc 2 1284 27
	lw	a4,-96(s0)
	.loc 2 1284 32
	lw	a5,-164(s0)
	.loc 2 1284 23
	bgeu	a4,a5,.L371
	.loc 2 1283 33
	lw	a5,-164(s0)
	sw	a5,-96(s0)
.L371:
	.loc 2 1284 31 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 2 1284 30 discriminator 2
	sw	a5,-80(s0)
	.loc 2 1285 21
	addi	a4,s0,-104
	lw	a5,-724(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
.L370:
	.loc 2 1287 40 discriminator 1
	li	a5,0
	.loc 2 1287 40 is_stmt 0
	j	.L376
.L368:
	.loc 2 1290 42 is_stmt 1 discriminator 2
	lw	a5,-144(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-144(s0)
.L367:
	.loc 2 1290 30 discriminator 1
	lw	a4,-144(s0)
	lw	a5,-140(s0)
	blt	a4,a5,.L372
	.loc 2 1290 12 discriminator 3
	lw	a5,-128(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-128(s0)
.L366:
	.loc 2 1294 18
	lw	a4,-96(s0)
	.loc 2 1294 14
	lw	a5,-128(s0)
	bgtu	a4,a5,.L373
	.loc 2 1294 12 discriminator 1
	lw	a5,-96(s0)
	.loc 2 1294 8 discriminator 1
	srliw	a5,a5,4
	sext.w	a5,a5
	sw	a5,-168(s0)
	.loc 2 1295 19
	lw	a5,-168(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	slli	a5,a5,4
	.loc 2 1295 43
	srli	a5,a5,9
	.loc 2 1295 14
	sext.w	a5,a5
	sw	a5,-172(s0)
	.loc 2 1296 17
	lw	a5,-168(s0)
	slliw	a5,a5,4
	sext.w	a5,a5
	.loc 2 1296 41
	andi	a5,a5,496
	sext.w	a5,a5
	.loc 2 1296 12
	sw	a5,-176(s0)
	.loc 2 1297 16
	lw	a3,-172(s0)
	addi	a4,s0,-104
	lw	a5,-724(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 2 1297 15 discriminator 1
	sw	a5,-180(s0)
	.loc 2 1300 8
	lw	a5,-180(s0)
	.loc 2 1300 7
	bne	a5,zero,.L374
	.loc 2 1298 24
	li	a5,-1
	j	.L376
.L374:
	.loc 2 1301 5
	addi	a5,s0,-712
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1301 5 discriminator 1
	lw	a5,-180(s0)
	addi	a4,s0,-712
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 1302 12
	addi	a5,s0,-712
	sd	a5,-192(s0)
	.loc 2 1303 12
	ld	a4,-192(s0)
	.loc 2 1303 21
	lw	a5,-176(s0)
	srliw	a5,a5,4
	sext.w	a5,a5
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 2 1303 12
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1303 46
	lhu	a4,-120(s0)
	mv	a7,a4
	lhu	a4,-118(s0)
	mv	a6,a4
	lhu	a4,-116(s0)
	mv	a0,a4
	lhu	a4,-114(s0)
	mv	a1,a4
	lhu	a4,-112(s0)
	mv	a2,a4
	lhu	a4,-110(s0)
	mv	a3,a4
	lhu	a4,-108(s0)
	sh	a7,0(a5)
	sh	a6,2(a5)
	sh	a0,4(a5)
	sh	a1,6(a5)
	sh	a2,8(a5)
	sh	a3,10(a5)
	sh	a4,12(a5)
	lhu	a4,-106(s0)
	sh	a4,14(a5)
	.loc 2 1304 5
	lw	a5,-180(s0)
	addi	a4,s0,-712
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 2 1306 28
	lw	a5,-172(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 2 1306 31
	slliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 1306 17
	sw	a5,-196(s0)
	.loc 2 1308 11
	lw	a4,-96(s0)
	.loc 2 1308 16
	lw	a5,-196(s0)
	.loc 2 1308 7
	bgeu	a4,a5,.L375
	.loc 2 1307 17
	lw	a5,-196(s0)
	sw	a5,-96(s0)
.L375:
	.loc 2 1308 15 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 2 1308 14 discriminator 2
	sw	a5,-80(s0)
	.loc 2 1309 5
	addi	a4,s0,-104
	lw	a5,-724(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1310 16
	li	a5,0
.L376:
	.loc 2 1311 1
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
.LFE58:
	.size	add_dirent, .-add_dirent
	.align	1
	.type	remove_dirent, @function
remove_dirent:
.LFB59:
	.loc 2 1314 1
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sd	ra,152(sp)
	sd	s0,144(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-160(s0)
	sw	a5,-148(s0)
	.loc 2 1320 5
	addi	a5,s0,-104
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1321 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1322 5
	addi	a5,s0,-120
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1323 5
	addi	a5,s0,-124
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1324 5
	addi	a5,s0,-128
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1317 5
	addi	a4,s0,-104
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1320 11
	lhu	a5,-104(s0)
	.loc 2 1320 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L378
	.loc 2 1318 24
	li	a5,-1
	j	.L386
.L378:
	.loc 2 1320 8 discriminator 2
	sw	zero,-108(s0)
	.loc 2 1322 5
	addi	a5,s0,-144
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1340 10
	j	.L380
.L385:
	.loc 2 1323 9
	lw	a5,-108(s0)
	srliw	a5,a5,9
	sext.w	a3,a5
	addi	a4,s0,-104
	lw	a5,-148(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 2 1323 9 is_stmt 0 discriminator 2
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 1324 11 is_stmt 1
	lla	a5,block_buf
	sd	a5,-120(s0)
	.loc 2 1325 16
	li	a5,32
	sw	a5,-124(s0)
	.loc 2 1338 14
	sw	zero,-128(s0)
	.loc 2 1338 9
	j	.L381
.L384:
	.loc 2 1328 18
	ld	a4,-120(s0)
	lw	a5,-128(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1328 21
	lhu	a5,0(a5)
	.loc 2 1328 15
	beq	a5,zero,.L387
	.loc 2 1328 30 discriminator 2
	ld	a4,-120(s0)
	lw	a5,-128(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1328 33 discriminator 2
	addi	a4,a5,2
	.loc 2 1328 13 discriminator 2
	addi	a5,s0,-144
	li	a2,14
	mv	a1,a4
	mv	a0,a5
	call	memcpy
	.loc 2 1329 24
	sb	zero,-130(s0)
	.loc 2 1337 16
	addi	a5,s0,-144
	li	a2,14
	ld	a1,-160(s0)
	mv	a0,a5
	call	strncmp
	mv	a5,a0
	.loc 2 1337 15 discriminator 1
	bne	a5,zero,.L383
	.loc 2 1331 19
	ld	a4,-120(s0)
	lw	a5,-128(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1331 27
	sh	zero,0(a5)
	.loc 2 1332 17
	lw	a5,-108(s0)
	srliw	a5,a5,9
	sext.w	a3,a5
	addi	a4,s0,-104
	lw	a5,-148(s0)
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 2 1332 17 is_stmt 0 discriminator 1
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 2 1333 27 is_stmt 1
	call	fs_now
	mv	a5,a0
	.loc 2 1333 26 discriminator 1
	sw	a5,-80(s0)
	.loc 2 1334 17
	addi	a4,s0,-104
	lw	a5,-148(s0)
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1335 40
	li	a5,0
	j	.L386
.L387:
	.loc 2 1327 17
	nop
.L383:
	.loc 2 1338 36 discriminator 2
	lw	a5,-128(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-128(s0)
.L381:
	.loc 2 1338 26 discriminator 1
	lw	a4,-128(s0)
	lw	a5,-124(s0)
	blt	a4,a5,.L384
	.loc 2 1338 12 discriminator 3
	lw	a5,-108(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-108(s0)
.L380:
	.loc 2 1340 18
	lw	a4,-96(s0)
	.loc 2 1340 14
	lw	a5,-108(s0)
	bgtu	a4,a5,.L385
	.loc 2 1340 16 discriminator 1
	li	a5,-1
.L386:
	.loc 2 1341 1
	mv	a0,a5
	ld	ra,152(sp)
	.cfi_restore 1
	ld	s0,144(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 160
	addi	sp,sp,160
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE59:
	.size	remove_dirent, .-remove_dirent
	.align	1
	.type	build_abs_normalized, @function
build_abs_normalized:
.LFB60:
	.loc 2 1344 1
	.cfi_startproc
	addi	sp,sp,-1136
	.cfi_def_cfa_offset 1136
	sd	ra,1128(sp)
	sd	s0,1120(sp)
	sd	s1,1112(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,1136
	.cfi_def_cfa 8, 0
	sd	a0,-1112(s0)
	sd	a1,-1120(s0)
	sd	a2,-1128(s0)
	.loc 2 1357 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1358 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1359 5
	addi	a5,s0,-72
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1360 5
	addi	a5,s0,-76
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1361 5
	addi	a5,s0,-80
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1362 5
	addi	a5,s0,-84
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1363 5
	addi	a5,s0,-88
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1364 5
	addi	a5,s0,-92
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1365 5
	addi	a5,s0,-96
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1366 5
	addi	a5,s0,-100
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1367 5
	addi	a5,s0,-104
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1368 5
	addi	a5,s0,-108
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1346 7
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1346 6 discriminator 1
	sd	a5,-56(s0)
	.loc 2 1348 5
	addi	a5,s0,-368
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1363 7
	ld	a5,-1128(s0)
	beq	a5,zero,.L389
	.loc 2 1363 18 discriminator 2
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 2 1363 12 discriminator 2
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L389
	.loc 2 1349 9
	addi	a5,s0,-368
	li	a2,255
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncpy
	.loc 2 1350 33
	sb	zero,-113(s0)
	j	.L390
.L389:
	.loc 2 1353 25
	ld	a5,-56(s0)
	addi	a4,a5,888
	.loc 2 1353 9
	addi	a5,s0,-368
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 2 1354 33
	sb	zero,-113(s0)
	.loc 2 1355 11
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 1355 10 discriminator 1
	sw	a5,-60(s0)
	.loc 2 1359 15
	lw	a4,-60(s0)
	.loc 2 1359 11
	li	a5,1
	bne	a4,a5,.L391
	.loc 2 1359 26 discriminator 2
	lbu	a5,-368(s0)
	.loc 2 1359 12 discriminator 2
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L392
.L391:
	.loc 2 1358 17
	lw	a4,-60(s0)
	.loc 2 1358 15
	li	a5,254
	bgt	a4,a5,.L392
	.loc 2 1357 25
	lw	a5,-60(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-60(s0)
	.loc 2 1357 28
	addi	a5,a5,-32
	add	a5,a5,s0
	li	a4,47
	sb	a4,-336(a5)
	.loc 2 1357 23
	lw	a5,-60(s0)
	.loc 2 1357 26
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-336(a5)
.L392:
	.loc 2 1360 11
	ld	a5,-1128(s0)
	beq	a5,zero,.L390
	.loc 2 1360 22 discriminator 2
	ld	a5,-1128(s0)
	lbu	a5,0(a5)
	.loc 2 1360 16 discriminator 2
	beq	a5,zero,.L390
	.loc 2 1359 48
	addi	a5,s0,-368
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 1359 48 is_stmt 0 discriminator 3
	mv	a4,a5
	.loc 2 1359 13 is_stmt 1 discriminator 3
	li	a5,255
	sub	a4,a5,a4
	addi	a5,s0,-368
	mv	a2,a4
	ld	a1,-1128(s0)
	mv	a0,a5
	call	strncat
.L390:
	.loc 2 1364 5
	addi	a5,s0,-624
	li	a2,256
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1364 5 discriminator 2
	addi	a4,s0,-368
	addi	a5,s0,-624
	li	a2,255
	mv	a1,a4
	mv	a0,a5
	call	strncpy
	.loc 2 1365 23
	sb	zero,-369(s0)
	.loc 2 1366 17
	addi	a5,s0,-624
	sd	a5,-40(s0)
	.loc 2 1367 25
	addi	a5,s0,-624
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 1367 25 is_stmt 0 discriminator 2
	mv	a4,a5
	.loc 2 1367 17 is_stmt 1 discriminator 2
	addi	a5,s0,-624
	add	a5,a5,a4
	sd	a5,-48(s0)
	.loc 2 1370 5
	addi	a5,s0,-1104
	li	a2,480
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1370 10 discriminator 1
	sw	zero,-76(s0)
	.loc 2 1391 10
	j	.L393
.L395:
	.loc 2 1372 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L394:
	.loc 2 1373 15
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 1373 17
	mv	a4,a5
	li	a5,47
	beq	a4,a5,.L395
	.loc 2 1374 12
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 1374 11
	beq	a5,zero,.L422
	.loc 2 1374 18 discriminator 1
	ld	a5,-40(s0)
	sd	a5,-72(s0)
	.loc 2 1376 14
	j	.L398
.L400:
	.loc 2 1375 14
	ld	a5,-40(s0)
	addi	a5,a5,1
	sd	a5,-40(s0)
.L398:
	.loc 2 1376 15
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 1376 17
	beq	a5,zero,.L399
	.loc 2 1376 19 discriminator 1
	ld	a5,-40(s0)
	lbu	a5,0(a5)
	.loc 2 1376 17 discriminator 1
	mv	a4,a5
	li	a5,47
	bne	a4,a5,.L400
.L399:
	.loc 2 1376 14 discriminator 3
	ld	a5,-72(s0)
	ld	a4,-40(s0)
	sub	a5,a4,a5
	.loc 2 1376 12 discriminator 3
	sext.w	a5,a5
	sw	a5,-80(s0)
	.loc 2 1389 15
	lw	a4,-80(s0)
	.loc 2 1389 11
	li	a5,1
	bne	a4,a5,.L401
	.loc 2 1389 29 discriminator 1
	ld	a5,-72(s0)
	lbu	a5,0(a5)
	.loc 2 1389 18 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L401
	.loc 2 1389 18 is_stmt 0
	j	.L393
.L401:
	.loc 2 1391 20 is_stmt 1
	lw	a4,-80(s0)
	.loc 2 1391 16
	li	a5,2
	bne	a4,a5,.L402
	.loc 2 1391 34 discriminator 1
	ld	a5,-72(s0)
	lbu	a5,0(a5)
	.loc 2 1391 23 discriminator 1
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L402
	.loc 2 1391 52 discriminator 2
	ld	a5,-72(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 2 1391 41 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L402
	.loc 2 1381 21
	lw	a5,-76(s0)
	.loc 2 1381 15
	ble	a5,zero,.L393
	.loc 2 1380 22
	lw	a5,-76(s0)
	addiw	a5,a5,-1
	sext.w	a5,a5
	sw	a5,-76(s0)
	.loc 2 1381 15
	j	.L393
.L402:
	.loc 2 1383 20
	lw	a5,-80(s0)
	.loc 2 1383 16
	ble	a5,zero,.L393
	.loc 2 1382 17
	lw	a5,-80(s0)
	sw	a5,-84(s0)
	.loc 2 1384 20
	lw	a4,-84(s0)
	.loc 2 1384 15
	li	a5,14
	ble	a4,a5,.L404
	.loc 2 1383 21
	li	a5,14
	sw	a5,-84(s0)
.L404:
	.loc 2 1385 18
	sw	zero,-88(s0)
	.loc 2 1385 13
	j	.L405
.L406:
	.loc 2 1384 29
	lw	a4,-76(s0)
	lw	a3,-88(s0)
	.loc 2 1384 32
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 2 1385 41 discriminator 3
	lw	a5,-88(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-88(s0)
.L405:
	.loc 2 1385 34 discriminator 1
	lw	a4,-88(s0)
	li	a5,14
	ble	a4,a5,.L406
	.loc 2 1386 21
	sw	zero,-92(s0)
	.loc 2 1386 13
	j	.L407
.L408:
	.loc 2 1385 45
	ld	a5,-72(s0)
	lw	a4,-92(s0)
	add	a5,a5,a4
	.loc 2 1385 29
	lw	a4,-76(s0)
	lw	a2,-92(s0)
	.loc 2 1385 45
	lbu	a3,0(a5)
	.loc 2 1385 35
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	sb	a3,-1072(a5)
	.loc 2 1386 50 discriminator 3
	lw	a5,-92(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-92(s0)
.L407:
	.loc 2 1386 40 discriminator 1
	lw	a4,-92(s0)
	lw	a5,-84(s0)
	blt	a4,a5,.L408
	.loc 2 1386 25 discriminator 4
	lw	a4,-76(s0)
	lw	a3,-84(s0)
	.loc 2 1386 31 discriminator 4
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	sb	zero,-1072(a5)
	.loc 2 1388 21
	lw	a4,-76(s0)
	.loc 2 1388 15
	li	a5,30
	bgt	a4,a5,.L393
	.loc 2 1387 22
	lw	a5,-76(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-76(s0)
.L393:
	.loc 2 1391 12
	ld	a4,-40(s0)
	ld	a5,-48(s0)
	bltu	a4,a5,.L394
	j	.L397
.L422:
	.loc 2 1373 13
	nop
.L397:
	.loc 2 1391 8 discriminator 3
	sw	zero,-96(s0)
	.loc 2 1393 7
	ld	a5,-1120(s0)
	beq	a5,zero,.L410
	.loc 2 1392 16
	lw	a5,-96(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-96(s0)
	mv	a4,a5
	.loc 2 1392 12
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 2 1392 19
	li	a4,47
	sb	a4,0(a5)
.L410:
	.loc 2 1399 13
	sw	zero,-100(s0)
	.loc 2 1399 5
	j	.L411
.L418:
	.loc 2 1394 26
	lw	a5,-100(s0)
	snez	a5,a5
	andi	a5,a5,0xff
	sext.w	s1,a5
	.loc 2 1394 45
	lw	a4,-100(s0)
	addi	a3,s0,-1104
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	add	a5,a3,a5
	.loc 2 1394 33
	mv	a0,a5
	call	strlen
	mv	a5,a0
	.loc 2 1394 32 discriminator 1
	addw	a5,s1,a5
	sext.w	a5,a5
	.loc 2 1394 13 discriminator 1
	sw	a5,-104(s0)
	.loc 2 1396 12
	lw	a5,-96(s0)
	mv	a4,a5
	.loc 2 1396 36
	lw	a5,-104(s0)
	add	a5,a4,a5
	.loc 2 1396 11
	ld	a4,-1120(s0)
	bleu	a4,a5,.L423
	.loc 2 1397 12
	lw	a5,-100(s0)
	.loc 2 1397 11
	beq	a5,zero,.L414
	.loc 2 1396 20
	lw	a5,-96(s0)
	addiw	a4,a5,1
	sext.w	a4,a4
	sw	a4,-96(s0)
	mv	a4,a5
	.loc 2 1396 16
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 2 1396 23
	li	a4,47
	sb	a4,0(a5)
.L414:
	.loc 2 1398 14
	sw	zero,-108(s0)
	.loc 2 1398 9
	j	.L415
.L417:
	.loc 2 1397 35
	lw	a4,-100(s0)
	lw	a2,-108(s0)
	.loc 2 1397 20
	lw	a5,-96(s0)
	addiw	a3,a5,1
	sext.w	a3,a3
	sw	a3,-96(s0)
	mv	a3,a5
	.loc 2 1397 16
	ld	a5,-1112(s0)
	add	a3,a5,a3
	.loc 2 1397 35
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a2
	lbu	a5,-1072(a5)
	.loc 2 1397 23
	sb	a5,0(a3)
	.loc 2 1398 75 discriminator 4
	lw	a5,-108(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-108(s0)
.L415:
	.loc 2 1398 36 discriminator 1
	lw	a4,-100(s0)
	lw	a3,-108(s0)
	mv	a5,a4
	slli	a5,a5,4
	sub	a5,a5,a4
	addi	a5,a5,-32
	add	a5,a5,s0
	add	a5,a5,a3
	lbu	a5,-1072(a5)
	.loc 2 1398 39 discriminator 1
	beq	a5,zero,.L416
	.loc 2 1398 41 discriminator 3
	lw	a5,-96(s0)
	mv	a4,a5
	.loc 2 1398 71 discriminator 3
	ld	a5,-1120(s0)
	addi	a5,a5,-1
	.loc 2 1398 39 discriminator 3
	bltu	a4,a5,.L417
.L416:
	.loc 2 1399 35 discriminator 2
	lw	a5,-100(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-100(s0)
.L411:
	.loc 2 1399 24 discriminator 1
	lw	a4,-100(s0)
	lw	a5,-76(s0)
	blt	a4,a5,.L418
	j	.L413
.L423:
	.loc 2 1395 13
	nop
.L413:
	.loc 2 1405 11
	lw	a5,-96(s0)
	.loc 2 1405 7
	bne	a5,zero,.L419
	.loc 2 1402 11
	ld	a4,-1120(s0)
	li	a5,1
	bleu	a4,a5,.L420
	.loc 2 1400 19
	ld	a5,-1112(s0)
	li	a4,47
	sb	a4,0(a5)
	.loc 2 1400 16
	ld	a5,-1112(s0)
	addi	a5,a5,1
	.loc 2 1400 19
	sb	zero,0(a5)
	.loc 2 1405 1
	j	.L424
.L420:
	.loc 2 1402 16 discriminator 1
	ld	a5,-1120(s0)
	beq	a5,zero,.L424
	.loc 2 1401 19
	ld	a5,-1112(s0)
	sb	zero,0(a5)
	.loc 2 1405 1
	j	.L424
.L419:
	.loc 2 1403 12
	lw	a5,-96(s0)
	mv	a4,a5
	ld	a5,-1112(s0)
	add	a5,a5,a4
	.loc 2 1403 17
	sb	zero,0(a5)
.L424:
	.loc 2 1405 1
	nop
	ld	ra,1128(sp)
	.cfi_restore 1
	ld	s0,1120(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 1136
	ld	s1,1112(sp)
	.cfi_restore 9
	addi	sp,sp,1136
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
	.loc 2 1408 1
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
	mv	a5,a1
	sw	a5,-556(s0)
	.loc 2 1418 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1419 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1420 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1421 5
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1422 5
	addi	a5,s0,-204
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1423 5
	addi	a5,s0,-208
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1424 5
	addi	a5,s0,-296
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1425 5
	addi	a5,s0,-298
	li	a2,2
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1426 5
	addi	a5,s0,-392
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1412 5
	addi	a5,s0,-520
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1412 5 discriminator 1
	addi	a5,s0,-520
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1416 8
	addi	a5,s0,-520
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1416 7 discriminator 1
	bne	a5,zero,.L426
	.loc 2 1413 24
	li	a5,-1
	j	.L445
.L426:
	.loc 2 1419 8
	addi	a5,s0,-520
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1419 7 discriminator 2
	beq	a5,zero,.L428
	.loc 2 1416 24
	li	a5,-1
	j	.L445
.L428:
	.loc 2 1421 5
	addi	a5,s0,-536
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1421 10 discriminator 2
	sw	zero,-24(s0)
	.loc 2 1421 5
	j	.L429
.L430:
	.loc 2 1420 13
	lw	a5,-24(s0)
	.loc 2 1420 16
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-520(a5)
	.loc 2 1421 25 discriminator 5
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-24(s0)
.L429:
	.loc 2 1421 18 discriminator 3
	lw	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L430
	.loc 2 1423 9
	addi	a3,s0,-536
	addi	a4,s0,-20
	addi	a5,s0,-520
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1423 7 discriminator 2
	bne	a5,zero,.L431
	.loc 2 1421 24
	li	a5,-1
	j	.L445
.L431:
	.loc 2 1423 5 discriminator 3
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1425 9
	addi	a5,s0,-112
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1425 7 discriminator 2
	bne	a5,zero,.L432
	.loc 2 1424 24
	li	a5,-1
	j	.L445
.L432:
	.loc 2 1428 12
	lbu	a5,-536(s0)
	.loc 2 1428 7
	bne	a5,zero,.L433
	.loc 2 1425 24
	li	a5,-1
	j	.L445
.L433:
	.loc 2 1429 9
	sw	zero,-204(s0)
	.loc 2 1434 13
	li	a5,1
	sw	a5,-208(s0)
	.loc 2 1434 5
	j	.L434
.L437:
	.loc 2 1431 9
	lw	a5,-208(s0)
	addi	a4,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1433 14
	lhu	a5,-200(s0)
	.loc 2 1433 11
	bne	a5,zero,.L435
	.loc 2 1432 17
	lw	a5,-208(s0)
	sw	a5,-204(s0)
	.loc 2 1432 13
	j	.L436
.L435:
	.loc 2 1434 41 discriminator 2
	lw	a5,-208(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-208(s0)
.L434:
	.loc 2 1434 28 discriminator 1
	lla	a5,sb
	lw	a4,8(a5)
	.loc 2 1434 24 discriminator 1
	lw	a5,-208(s0)
	bgeu	a4,a5,.L437
.L436:
	.loc 2 1435 8
	lw	a5,-204(s0)
	.loc 2 1435 7
	bne	a5,zero,.L438
	.loc 2 1434 24
	li	a5,-1
	j	.L445
.L438:
	.loc 2 1435 5 discriminator 1
	addi	a5,s0,-296
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1436 14
	li	a5,1
	sh	a5,-296(s0)
	.loc 2 1436 15
	li	a5,1
	sh	a5,-290(s0)
	.loc 2 1436 14
	sw	zero,-288(s0)
	.loc 2 1436 16
	call	fs_now
	mv	a5,a0
	.loc 2 1436 15 discriminator 1
	sw	a5,-272(s0)
	.loc 2 1436 20 discriminator 1
	lw	a5,-272(s0)
	.loc 2 1436 15 discriminator 1
	sw	a5,-268(s0)
	.loc 2 1438 8
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1438 34 discriminator 1
	lhu	a5,1016(a5)
	.loc 2 1438 7 discriminator 1
	sh	a5,-298(s0)
	.loc 2 1439 5
	lw	a5,-20(s0)
	addi	a4,s0,-392
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1440 20
	lw	a5,-272(s0)
	.loc 2 1440 15
	sw	a5,-276(s0)
	.loc 2 1440 14
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1440 40 discriminator 1
	lhu	a5,1018(a5)
	.loc 2 1440 13 discriminator 1
	sh	a5,-280(s0)
	.loc 2 1441 24
	lw	a5,-380(s0)
	.loc 2 1441 29
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 2 1441 13
	beq	a5,zero,.L439
	.loc 2 1441 13 is_stmt 0 discriminator 1
	lhu	a5,-374(s0)
	j	.L440
.L439:
	.loc 2 1441 53 is_stmt 1 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1441 13 discriminator 4
	lhu	a5,1020(a5)
.L440:
	.loc 2 1441 13 is_stmt 0 discriminator 5
	sh	a5,-278(s0)
	.loc 2 1442 38 is_stmt 1
	lw	a5,-556(s0)
	sext.w	a5,a5
	beq	a5,zero,.L441
	.loc 2 1442 38 is_stmt 0 discriminator 1
	lw	a5,-556(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L442
.L441:
	.loc 2 1442 38 discriminator 2
	li	a5,493
.L442:
	.loc 2 1442 48 is_stmt 1 discriminator 4
	lhu	a4,-298(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 2 1442 47 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 2 1442 14 discriminator 4
	sw	a5,-284(s0)
	.loc 2 1444 15
	lw	a5,-380(s0)
	.loc 2 1444 20
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 2 1444 7
	beq	a5,zero,.L443
	.loc 2 1443 13
	lw	a5,-284(s0)
	.loc 2 1443 18
	ori	a5,a5,1024
	sext.w	a5,a5
	sw	a5,-284(s0)
.L443:
	.loc 2 1444 5 discriminator 1
	lw	a5,-204(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1447 8
	lw	a5,-20(s0)
	lw	a3,-204(s0)
	addi	a4,s0,-536
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 2 1447 7 discriminator 1
	beq	a5,zero,.L444
	.loc 2 1446 24
	li	a5,-1
	j	.L445
.L444:
	.loc 2 1447 16 discriminator 2
	li	a5,0
.L445:
	.loc 2 1448 1
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
.LFE61:
	.size	fs_mkdir, .-fs_mkdir
	.align	1
	.globl	fs_rmdir
	.type	fs_rmdir, @function
fs_rmdir:
.LFB62:
	.loc 2 1451 1
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
	.loc 2 1463 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1464 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1465 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1466 5
	addi	a5,s0,-120
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1467 5
	addi	a5,s0,-128
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1468 5
	addi	a5,s0,-132
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1469 5
	addi	a5,s0,-136
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1470 5
	addi	a5,s0,-140
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1471 5
	addi	a5,s0,-144
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1472 5
	addi	a5,s0,-232
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1473 5
	addi	a5,s0,-320
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1454 5
	addi	a5,s0,-448
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1454 5 discriminator 1
	addi	a5,s0,-448
	ld	a2,-472(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1457 8
	addi	a5,s0,-448
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1457 7 discriminator 1
	bne	a5,zero,.L447
	.loc 2 1455 24
	li	a5,-1
	j	.L465
.L447:
	.loc 2 1457 10 discriminator 2
	addi	a5,s0,-448
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1457 9 discriminator 3
	sw	a5,-20(s0)
	.loc 2 1459 12
	lw	a5,-20(s0)
	.loc 2 1459 7
	bne	a5,zero,.L449
	.loc 2 1458 24
	li	a5,-1
	j	.L465
.L449:
	.loc 2 1459 5 discriminator 1
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1462 10
	lhu	a5,-112(s0)
	.loc 2 1462 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L450
	.loc 2 1460 24
	li	a5,-1
	j	.L465
.L450:
	.loc 2 1476 10
	lw	a5,-104(s0)
	.loc 2 1476 7
	beq	a5,zero,.L451
	.loc 2 1464 12
	sw	zero,-116(s0)
	.loc 2 1464 20
	sw	zero,-120(s0)
	.loc 2 1473 14
	j	.L452
.L459:
	.loc 2 1466 13
	lw	a4,-116(s0)
	addi	a5,s0,-112
	li	a3,512
	lla	a2,block_buf
	mv	a1,a4
	mv	a0,a5
	call	read_data
	.loc 2 1467 15
	lla	a5,block_buf
	sd	a5,-128(s0)
	.loc 2 1468 20
	li	a5,32
	sw	a5,-132(s0)
	.loc 2 1470 18
	sw	zero,-136(s0)
	.loc 2 1470 13
	j	.L453
.L456:
	.loc 2 1470 22 discriminator 5
	ld	a4,-128(s0)
	lw	a5,-136(s0)
	slli	a5,a5,4
	add	a5,a4,a5
	.loc 2 1470 25 discriminator 5
	lhu	a5,0(a5)
	.loc 2 1470 19 discriminator 5
	beq	a5,zero,.L454
	.loc 2 1469 32
	li	a5,1
	sw	a5,-120(s0)
	.loc 2 1469 21
	j	.L455
.L454:
	.loc 2 1470 44 discriminator 3
	lw	a5,-136(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-136(s0)
.L453:
	.loc 2 1470 34 discriminator 4
	lw	a4,-136(s0)
	lw	a5,-132(s0)
	blt	a4,a5,.L456
.L455:
	.loc 2 1471 16
	lw	a5,-120(s0)
	.loc 2 1471 15
	bne	a5,zero,.L466
	.loc 2 1471 16 discriminator 2
	lw	a5,-116(s0)
	addiw	a5,a5,512
	sext.w	a5,a5
	sw	a5,-116(s0)
.L452:
	.loc 2 1473 21
	lw	a4,-104(s0)
	.loc 2 1473 18
	lw	a5,-116(s0)
	bgtu	a4,a5,.L459
	j	.L458
.L466:
	.loc 2 1470 17
	nop
.L458:
	.loc 2 1474 12
	lw	a5,-120(s0)
	.loc 2 1474 11
	beq	a5,zero,.L451
	.loc 2 1473 32
	li	a5,-1
	j	.L465
.L451:
	.loc 2 1477 5
	addi	a5,s0,-464
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1477 13 discriminator 1
	sw	zero,-144(s0)
	.loc 2 1477 5
	j	.L460
.L461:
	.loc 2 1476 13
	lw	a5,-144(s0)
	.loc 2 1476 19
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-448(a5)
	.loc 2 1477 34 discriminator 4
	lw	a5,-144(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-144(s0)
.L460:
	.loc 2 1477 24 discriminator 2
	lw	a4,-144(s0)
	li	a5,14
	ble	a4,a5,.L461
	.loc 2 1479 9
	addi	a3,s0,-464
	addi	a4,s0,-140
	addi	a5,s0,-448
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1479 7 discriminator 1
	bne	a5,zero,.L462
	.loc 2 1477 24
	li	a5,-1
	j	.L465
.L462:
	.loc 2 1479 5 discriminator 2
	lw	a5,-140(s0)
	addi	a4,s0,-232
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1481 9
	addi	a5,s0,-232
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1481 7 discriminator 1
	bne	a5,zero,.L463
	.loc 2 1480 24
	li	a5,-1
	j	.L465
.L463:
	.loc 2 1484 8
	lw	a5,-140(s0)
	addi	a4,s0,-464
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 2 1484 7 discriminator 1
	beq	a5,zero,.L464
	.loc 2 1481 24
	li	a5,-1
	j	.L465
.L464:
	.loc 2 1484 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 2 1486 5
	addi	a5,s0,-320
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1487 5
	lw	a5,-20(s0)
	addi	a4,s0,-320
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1488 16
	li	a5,0
.L465:
	.loc 2 1489 1
	mv	a0,a5
	ld	ra,472(sp)
	.cfi_restore 1
	ld	s0,464(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 480
	addi	sp,sp,480
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
	.loc 2 1492 1
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
	.loc 2 1501 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1502 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1503 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1504 5
	addi	a5,s0,-120
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1505 5
	addi	a5,s0,-208
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1506 5
	addi	a5,s0,-296
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1507 5
	addi	a5,s0,-304
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1508 5
	addi	a5,s0,-392
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1495 5
	addi	a5,s0,-520
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1495 5 discriminator 1
	addi	a5,s0,-520
	ld	a2,-552(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1498 8
	addi	a5,s0,-520
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1498 7 discriminator 1
	bne	a5,zero,.L468
	.loc 2 1496 24
	li	a5,-1
	j	.L479
.L468:
	.loc 2 1498 10 discriminator 2
	addi	a5,s0,-520
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1498 9 discriminator 3
	sw	a5,-20(s0)
	.loc 2 1500 12
	lw	a5,-20(s0)
	.loc 2 1500 7
	bne	a5,zero,.L470
	.loc 2 1499 24
	li	a5,-1
	j	.L479
.L470:
	.loc 2 1500 5 discriminator 1
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1504 10
	lhu	a5,-112(s0)
	.loc 2 1504 7
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L471
	.loc 2 1501 24
	li	a5,-1
	j	.L479
.L471:
	.loc 2 1508 8
	lw	a5,-20(s0)
	mv	a0,a5
	call	neoc_proc_is_file_open
	mv	a5,a0
	.loc 2 1508 7 discriminator 2
	beq	a5,zero,.L472
	.loc 2 1505 24
	li	a5,-1
	j	.L479
.L472:
	.loc 2 1509 5
	addi	a5,s0,-536
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1509 10 discriminator 1
	sw	zero,-120(s0)
	.loc 2 1509 5
	j	.L473
.L474:
	.loc 2 1508 13
	lw	a5,-120(s0)
	.loc 2 1508 16
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-520(a5)
	.loc 2 1509 25 discriminator 4
	lw	a5,-120(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-120(s0)
.L473:
	.loc 2 1509 18 discriminator 2
	lw	a4,-120(s0)
	li	a5,14
	ble	a4,a5,.L474
	.loc 2 1511 9
	addi	a3,s0,-536
	addi	a4,s0,-116
	addi	a5,s0,-520
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1511 7 discriminator 1
	bne	a5,zero,.L475
	.loc 2 1509 24
	li	a5,-1
	j	.L479
.L475:
	.loc 2 1511 5 discriminator 2
	lw	a5,-116(s0)
	addi	a4,s0,-208
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1514 9
	addi	a5,s0,-208
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1514 7 discriminator 1
	bne	a5,zero,.L476
	.loc 2 1512 24
	li	a5,-1
	j	.L479
.L476:
	.loc 2 1514 5 discriminator 2
	lw	a5,-116(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1519 12
	lw	a5,-284(s0)
	.loc 2 1519 17
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 2 1519 7
	beq	a5,zero,.L477
	.loc 2 1516 12
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1516 11 discriminator 1
	sd	a5,-304(s0)
	.loc 2 1518 16
	ld	a5,-304(s0)
	lhu	a5,1018(a5)
	.loc 2 1518 11
	beq	a5,zero,.L477
	.loc 2 1518 28 discriminator 1
	ld	a5,-304(s0)
	lhu	a4,1018(a5)
	.loc 2 1518 37 discriminator 1
	lhu	a5,-96(s0)
	.loc 2 1518 24 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L477
	.loc 2 1518 45 discriminator 2
	ld	a5,-304(s0)
	lhu	a4,1018(a5)
	.loc 2 1518 56 discriminator 2
	lhu	a5,-280(s0)
	.loc 2 1518 12 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L477
	.loc 2 1517 32
	li	a5,-1
	j	.L479
.L477:
	.loc 2 1522 8
	lw	a5,-116(s0)
	addi	a4,s0,-536
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 2 1522 7 discriminator 1
	beq	a5,zero,.L478
	.loc 2 1519 24
	li	a5,-1
	j	.L479
.L478:
	.loc 2 1522 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	free_inode_blocks
	.loc 2 1523 5
	addi	a5,s0,-392
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1524 5
	lw	a5,-20(s0)
	addi	a4,s0,-392
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1525 16
	li	a5,0
.L479:
	.loc 2 1526 1
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
	.loc 2 1529 1
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
	sd	a1,-64(s0)
	sd	a2,-72(s0)
	mv	a4,a3
	sw	a5,-52(s0)
	mv	a5,a4
	sw	a5,-56(s0)
	.loc 2 1536 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1537 5
	addi	a5,s0,-32
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1538 5
	addi	a5,s0,-36
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1539 5
	addi	a5,s0,-40
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1540 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1541 5
	addi	a5,s0,-48
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1531 9
	lw	a5,-56(s0)
	sw	a5,-28(s0)
	.loc 2 1531 8
	sw	zero,-32(s0)
	.loc 2 1531 27
	ld	a5,-72(s0)
	sd	a5,-24(s0)
	.loc 2 1542 10
	j	.L481
.L485:
	.loc 2 1533 20
	lw	a5,-32(s0)
	srliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 1533 16
	sw	a5,-36(s0)
	.loc 2 1533 20
	lw	a5,-32(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 2 1533 16
	sw	a5,-40(s0)
	.loc 2 1534 21
	lw	a5,-40(s0)
	li	a4,512
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1534 17
	sw	a5,-44(s0)
	.loc 2 1535 20
	lw	a4,-44(s0)
	lw	a5,-28(s0)
	.loc 2 1535 11
	bleu	a4,a5,.L482
	.loc 2 1534 21
	lw	a5,-28(s0)
	sw	a5,-44(s0)
.L482:
	.loc 2 1535 18 discriminator 1
	lw	a4,-36(s0)
	lw	a5,-52(s0)
	mv	a2,a4
	ld	a1,-64(s0)
	mv	a0,a5
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 2 1535 17 discriminator 2
	sw	a5,-48(s0)
	.loc 2 1537 12
	lw	a5,-48(s0)
	.loc 2 1537 11
	bne	a5,zero,.L483
	.loc 2 1536 32
	li	a5,-1
	j	.L486
.L483:
	.loc 2 1537 9 discriminator 2
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	read_block
	.loc 2 1538 9
	lw	a5,-40(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	lla	a5,block_buf
	add	a5,a4,a5
	lw	a4,-44(s0)
	mv	a2,a4
	ld	a1,-24(s0)
	mv	a0,a5
	call	memcpy
	.loc 2 1539 9
	lw	a5,-48(s0)
	lla	a1,block_buf
	mv	a0,a5
	call	write_block
	.loc 2 1540 13
	lw	a4,-28(s0)
	lw	a5,-44(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-28(s0)
	.loc 2 1540 12
	lw	a4,-32(s0)
	lw	a5,-44(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-32(s0)
	.loc 2 1540 10
	lw	a5,-44(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	ld	a4,-24(s0)
	add	a5,a4,a5
	sd	a5,-24(s0)
.L481:
	.loc 2 1542 15
	lw	a5,-28(s0)
	bne	a5,zero,.L485
	.loc 2 1542 13 discriminator 1
	ld	a5,-64(s0)
	lw	a4,-56(s0)
	sw	a4,8(a5)
	.loc 2 1542 15 discriminator 1
	call	fs_now
	mv	a5,a0
	mv	a4,a5
	.loc 2 1542 14 discriminator 2
	ld	a5,-64(s0)
	sw	a4,24(a5)
	.loc 2 1542 5 discriminator 2
	lw	a5,-52(s0)
	ld	a1,-64(s0)
	mv	a0,a5
	call	write_inode
	.loc 2 1542 16 discriminator 3
	li	a5,0
.L486:
	.loc 2 1543 1
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
.LFE64:
	.size	write_data_inode, .-write_data_inode
	.align	1
	.globl	fs_symlink
	.type	fs_symlink, @function
fs_symlink:
.LFB65:
	.loc 2 1546 1
	.cfi_startproc
	addi	sp,sp,-704
	.cfi_def_cfa_offset 704
	sd	ra,696(sp)
	sd	s0,688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,704
	.cfi_def_cfa 8, 0
	sd	a0,-696(s0)
	sd	a1,-704(s0)
	.loc 2 1555 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1556 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1557 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1558 5
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1559 5
	addi	a5,s0,-204
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1560 5
	addi	a5,s0,-208
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1561 5
	addi	a5,s0,-296
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1562 5
	addi	a5,s0,-300
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1549 5
	addi	a5,s0,-432
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1548 5
	addi	a5,s0,-432
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1550 8
	addi	a5,s0,-432
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1550 7 discriminator 1
	bne	a5,zero,.L488
	.loc 2 1549 24
	li	a5,-1
	j	.L504
.L488:
	.loc 2 1552 8
	addi	a5,s0,-432
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1552 7 discriminator 1
	beq	a5,zero,.L490
	.loc 2 1550 24
	li	a5,-1
	j	.L504
.L490:
	.loc 2 1553 5
	addi	a5,s0,-448
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1553 10 discriminator 1
	sw	zero,-24(s0)
	.loc 2 1553 5
	j	.L491
.L492:
	.loc 2 1552 13
	lw	a5,-24(s0)
	.loc 2 1552 16
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-432(a5)
	.loc 2 1553 25 discriminator 4
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-24(s0)
.L491:
	.loc 2 1553 18 discriminator 2
	lw	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L492
	.loc 2 1554 9
	addi	a3,s0,-448
	addi	a4,s0,-20
	addi	a5,s0,-432
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1554 7 discriminator 1
	bne	a5,zero,.L493
	.loc 2 1553 24
	li	a5,-1
	j	.L504
.L493:
	.loc 2 1556 12
	lbu	a5,-448(s0)
	.loc 2 1556 7
	bne	a5,zero,.L494
	.loc 2 1554 24
	li	a5,-1
	j	.L504
.L494:
	.loc 2 1556 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1560 9
	addi	a5,s0,-112
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1560 7 discriminator 2
	bne	a5,zero,.L495
	.loc 2 1557 24
	li	a5,-1
	j	.L504
.L495:
	.loc 2 1560 9 discriminator 3
	sw	zero,-204(s0)
	.loc 2 1562 13
	li	a5,1
	sw	a5,-208(s0)
	.loc 2 1562 5
	j	.L496
.L499:
	.loc 2 1561 9
	lw	a5,-208(s0)
	addi	a4,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1561 14 discriminator 2
	lhu	a5,-200(s0)
	.loc 2 1561 11 discriminator 2
	bne	a5,zero,.L497
	.loc 2 1561 17 discriminator 3
	lw	a5,-208(s0)
	sw	a5,-204(s0)
	.loc 2 1561 13
	j	.L498
.L497:
	.loc 2 1562 41 discriminator 3
	lw	a5,-208(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-208(s0)
.L496:
	.loc 2 1562 28 discriminator 2
	lla	a5,sb
	lw	a4,8(a5)
	.loc 2 1562 24 discriminator 2
	lw	a5,-208(s0)
	bgeu	a4,a5,.L499
.L498:
	.loc 2 1563 8
	lw	a5,-204(s0)
	.loc 2 1563 7
	bne	a5,zero,.L500
	.loc 2 1562 24
	li	a5,-1
	j	.L504
.L500:
	.loc 2 1563 5 discriminator 1
	addi	a5,s0,-296
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1563 12 discriminator 2
	li	a5,3
	sh	a5,-296(s0)
	.loc 2 1563 13 discriminator 2
	li	a5,1
	sh	a5,-290(s0)
	.loc 2 1563 12 discriminator 2
	sw	zero,-288(s0)
	.loc 2 1563 14 discriminator 2
	call	fs_now
	mv	a5,a0
	.loc 2 1563 13 discriminator 3
	sw	a5,-272(s0)
	.loc 2 1563 16 discriminator 3
	lw	a5,-272(s0)
	.loc 2 1563 13 discriminator 3
	sw	a5,-268(s0)
	.loc 2 1563 5 discriminator 3
	lw	a5,-204(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1567 8
	lw	a5,-20(s0)
	lw	a3,-204(s0)
	addi	a4,s0,-448
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 2 1567 7 discriminator 1
	beq	a5,zero,.L501
	.loc 2 1565 24
	li	a5,-1
	j	.L504
.L501:
	.loc 2 1567 10 discriminator 2
	ld	a0,-696(s0)
	call	strlen
	mv	a5,a0
	.loc 2 1567 9 discriminator 3
	sw	a5,-300(s0)
	.loc 2 1568 12
	lw	a4,-300(s0)
	.loc 2 1568 7
	li	a5,240
	bleu	a4,a5,.L502
	.loc 2 1567 13
	li	a5,240
	sw	a5,-300(s0)
.L502:
	.loc 2 1569 5
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1568 5
	addi	a5,s0,-688
	li	a2,240
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1568 5 discriminator 1
	lw	a5,-300(s0)
	mv	a4,a5
	addi	a5,s0,-688
	mv	a2,a4
	ld	a1,-696(s0)
	mv	a0,a5
	call	strncpy
	.loc 2 1569 5
	lw	a5,-204(s0)
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1571 8
	lw	a5,-204(s0)
	lw	a3,-300(s0)
	addi	a2,s0,-688
	addi	a4,s0,-296
	mv	a1,a4
	mv	a0,a5
	call	write_data_inode
	mv	a5,a0
	.loc 2 1571 7 discriminator 1
	beq	a5,zero,.L503
	.loc 2 1570 24
	li	a5,-1
	j	.L504
.L503:
	.loc 2 1571 16 discriminator 2
	li	a5,0
.L504:
	.loc 2 1572 1
	mv	a0,a5
	ld	ra,696(sp)
	.cfi_restore 1
	ld	s0,688(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 704
	addi	sp,sp,704
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
	.loc 2 1575 1
	.cfi_startproc
	addi	sp,sp,-704
	.cfi_def_cfa_offset 704
	sd	ra,696(sp)
	sd	s0,688(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,704
	.cfi_def_cfa 8, 0
	sd	a0,-696(s0)
	sd	a1,-704(s0)
	.loc 2 1583 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1584 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1585 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1586 5
	addi	a5,s0,-200
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1587 5
	addi	a5,s0,-288
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1588 5
	addi	a5,s0,-376
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1589 5
	addi	a5,s0,-384
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1578 5
	addi	a5,s0,-640
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1578 5 discriminator 1
	addi	a5,s0,-512
	ld	a2,-696(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1579 5
	addi	a5,s0,-640
	ld	a2,-704(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1582 8
	addi	a4,s0,-640
	addi	a5,s0,-512
	mv	a1,a4
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1582 7 discriminator 1
	bne	a5,zero,.L506
	.loc 2 1581 24
	li	a5,0
	j	.L523
.L506:
	.loc 2 1584 8
	addi	a5,s0,-512
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1584 7 discriminator 2
	bne	a5,zero,.L508
	.loc 2 1582 24
	li	a5,-1
	j	.L523
.L508:
	.loc 2 1584 10 discriminator 3
	addi	a5,s0,-512
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1584 9 discriminator 4
	sw	a5,-20(s0)
	.loc 2 1586 12
	lw	a5,-20(s0)
	.loc 2 1586 7
	bne	a5,zero,.L509
	.loc 2 1585 24
	li	a5,-1
	j	.L523
.L509:
	.loc 2 1588 8
	addi	a5,s0,-640
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1588 7 discriminator 2
	beq	a5,zero,.L510
	.loc 2 1586 24
	li	a5,-1
	j	.L523
.L510:
	.loc 2 1589 5
	addi	a5,s0,-648
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1589 5 discriminator 2
	addi	a5,s0,-664
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1589 5 discriminator 3
	addi	a5,s0,-680
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1590 10
	sw	zero,-24(s0)
	.loc 2 1590 5
	j	.L511
.L512:
	.loc 2 1589 14
	lw	a5,-24(s0)
	.loc 2 1589 17
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-648(a5)
	.loc 2 1589 14
	lw	a5,-24(s0)
	.loc 2 1589 17
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-664(a5)
	.loc 2 1590 25 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-24(s0)
.L511:
	.loc 2 1590 18 discriminator 1
	lw	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L512
	.loc 2 1591 9
	addi	a3,s0,-664
	addi	a4,s0,-644
	addi	a5,s0,-512
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1591 7 discriminator 1
	bne	a5,zero,.L513
	.loc 2 1590 24
	li	a5,-1
	j	.L523
.L513:
	.loc 2 1592 9
	addi	a3,s0,-680
	addi	a4,s0,-648
	addi	a5,s0,-640
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1592 7 discriminator 1
	bne	a5,zero,.L514
	.loc 2 1591 24
	li	a5,-1
	j	.L523
.L514:
	.loc 2 1594 13
	lbu	a5,-664(s0)
	.loc 2 1594 7
	beq	a5,zero,.L515
	.loc 2 1594 26 discriminator 1
	lbu	a5,-680(s0)
	.loc 2 1594 19 discriminator 1
	bne	a5,zero,.L516
.L515:
	.loc 2 1592 24
	li	a5,-1
	j	.L523
.L516:
	.loc 2 1594 5 discriminator 2
	lw	a5,-648(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1597 11
	lhu	a5,-112(s0)
	.loc 2 1597 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L517
	.loc 2 1595 24
	li	a5,-1
	j	.L523
.L517:
	.loc 2 1597 5 discriminator 1
	lw	a5,-644(s0)
	addi	a4,s0,-200
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1599 9
	addi	a5,s0,-200
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1599 7 discriminator 1
	bne	a5,zero,.L518
	.loc 2 1598 24
	li	a5,-1
	j	.L523
.L518:
	.loc 2 1602 9
	addi	a5,s0,-112
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1602 7 discriminator 1
	bne	a5,zero,.L519
	.loc 2 1599 24
	li	a5,-1
	j	.L523
.L519:
	.loc 2 1602 5 discriminator 2
	lw	a5,-644(s0)
	addi	a4,s0,-288
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1603 5
	lw	a5,-20(s0)
	addi	a4,s0,-376
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1608 13
	lw	a5,-276(s0)
	.loc 2 1608 18
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 2 1608 7
	beq	a5,zero,.L520
	.loc 2 1605 12
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1605 11 discriminator 1
	sd	a5,-384(s0)
	.loc 2 1607 16
	ld	a5,-384(s0)
	lhu	a5,1018(a5)
	.loc 2 1607 11
	beq	a5,zero,.L520
	.loc 2 1607 28 discriminator 1
	ld	a5,-384(s0)
	lhu	a4,1018(a5)
	.loc 2 1607 41 discriminator 1
	lhu	a5,-360(s0)
	.loc 2 1607 24 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L520
	.loc 2 1607 49 discriminator 2
	ld	a5,-384(s0)
	lhu	a4,1018(a5)
	.loc 2 1607 61 discriminator 2
	lhu	a5,-272(s0)
	.loc 2 1607 12 discriminator 2
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L520
	.loc 2 1606 32
	li	a5,-1
	j	.L523
.L520:
	.loc 2 1609 8
	lw	a5,-648(s0)
	lw	a3,-20(s0)
	addi	a4,s0,-680
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 2 1609 7 discriminator 1
	beq	a5,zero,.L521
	.loc 2 1608 24
	li	a5,-1
	j	.L523
.L521:
	.loc 2 1610 8
	lw	a5,-644(s0)
	addi	a4,s0,-664
	mv	a1,a4
	mv	a0,a5
	call	remove_dirent
	mv	a5,a0
	.loc 2 1610 7 discriminator 1
	beq	a5,zero,.L522
	.loc 2 1609 24
	li	a5,-1
	j	.L523
.L522:
	.loc 2 1610 16 discriminator 2
	li	a5,0
.L523:
	.loc 2 1611 1
	mv	a0,a5
	ld	ra,696(sp)
	.cfi_restore 1
	ld	s0,688(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 704
	addi	sp,sp,704
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
	.loc 2 1614 1
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
	sd	a1,-496(s0)
	.loc 2 1620 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1621 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1622 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1623 5
	addi	a5,s0,-120
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1624 5
	addi	a5,s0,-208
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1617 5
	addi	a5,s0,-464
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1617 5 discriminator 1
	addi	a5,s0,-336
	ld	a2,-488(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1618 5
	addi	a5,s0,-464
	ld	a2,-496(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1621 8
	addi	a5,s0,-464
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1621 7 discriminator 2
	beq	a5,zero,.L525
	.loc 2 1621 31 discriminator 3
	addi	a5,s0,-336
	lla	a1,.LC8
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1621 29 discriminator 4
	bne	a5,zero,.L526
.L525:
	.loc 2 1620 24
	li	a5,-1
	j	.L537
.L526:
	.loc 2 1621 10 discriminator 5
	addi	a5,s0,-336
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1621 9 discriminator 6
	sw	a5,-20(s0)
	.loc 2 1623 12
	lw	a5,-20(s0)
	.loc 2 1623 7
	bne	a5,zero,.L528
	.loc 2 1622 24
	li	a5,-1
	j	.L537
.L528:
	.loc 2 1625 8
	addi	a5,s0,-464
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1625 7 discriminator 1
	beq	a5,zero,.L529
	.loc 2 1623 24
	li	a5,-1
	j	.L537
.L529:
	.loc 2 1625 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1628 10
	lhu	a5,-112(s0)
	.loc 2 1628 7
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L530
	.loc 2 1626 24
	li	a5,-1
	j	.L537
.L530:
	.loc 2 1629 5
	addi	a5,s0,-480
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1629 10 discriminator 1
	sw	zero,-120(s0)
	.loc 2 1629 5
	j	.L531
.L532:
	.loc 2 1628 13
	lw	a5,-120(s0)
	.loc 2 1628 16
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-464(a5)
	.loc 2 1629 25 discriminator 4
	lw	a5,-120(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-120(s0)
.L531:
	.loc 2 1629 18 discriminator 2
	lw	a4,-120(s0)
	li	a5,14
	ble	a4,a5,.L532
	.loc 2 1630 9
	addi	a3,s0,-480
	addi	a4,s0,-116
	addi	a5,s0,-464
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1630 7 discriminator 1
	bne	a5,zero,.L533
	.loc 2 1629 24
	li	a5,-1
	j	.L537
.L533:
	.loc 2 1632 12
	lbu	a5,-480(s0)
	.loc 2 1632 7
	bne	a5,zero,.L534
	.loc 2 1630 24
	li	a5,-1
	j	.L537
.L534:
	.loc 2 1632 5 discriminator 1
	lw	a5,-116(s0)
	addi	a4,s0,-208
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1635 9
	addi	a5,s0,-208
	li	a1,3
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1635 7 discriminator 1
	bne	a5,zero,.L535
	.loc 2 1633 24
	li	a5,-1
	j	.L537
.L535:
	.loc 2 1637 8
	lw	a5,-116(s0)
	lw	a3,-20(s0)
	addi	a4,s0,-480
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 2 1637 7 discriminator 1
	beq	a5,zero,.L536
	.loc 2 1635 24
	li	a5,-1
	j	.L537
.L536:
	.loc 2 1637 7 discriminator 2
	lhu	a5,-106(s0)
	.loc 2 1637 13 discriminator 2
	addiw	a5,a5,1
	slli	a5,a5,48
	srli	a5,a5,48
	sh	a5,-106(s0)
	.loc 2 1638 14
	call	fs_now
	mv	a5,a0
	.loc 2 1638 13 discriminator 1
	sw	a5,-84(s0)
	.loc 2 1639 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1640 16
	li	a5,0
.L537:
	.loc 2 1641 1
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
.LFE67:
	.size	fs_link, .-fs_link
	.align	1
	.globl	fs_stat
	.type	fs_stat, @function
fs_stat:
.LFB68:
	.loc 2 1644 1
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
	.loc 2 1647 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1648 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1646 7
	ld	a5,-256(s0)
	bne	a5,zero,.L539
	.loc 2 1645 24
	li	a5,-1
	j	.L542
.L539:
	.loc 2 1647 5
	addi	a5,s0,-240
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1646 5
	addi	a5,s0,-240
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1647 10
	addi	a5,s0,-240
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1647 9 discriminator 3
	sw	a5,-20(s0)
	.loc 2 1649 8
	lw	a5,-20(s0)
	.loc 2 1649 7
	bne	a5,zero,.L541
	.loc 2 1648 24
	li	a5,-1
	j	.L542
.L541:
	.loc 2 1649 5 discriminator 1
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1650 16
	lhu	a4,-112(s0)
	.loc 2 1650 13
	ld	a5,-256(s0)
	sh	a4,0(a5)
	.loc 2 1650 17
	lhu	a4,-106(s0)
	.loc 2 1650 14
	ld	a5,-256(s0)
	sh	a4,2(a5)
	.loc 2 1650 16
	lw	a4,-104(s0)
	.loc 2 1650 13
	ld	a5,-256(s0)
	sw	a4,4(a5)
	.loc 2 1650 13
	lw	a4,-20(s0)
	ld	a5,-256(s0)
	sw	a4,8(a5)
	.loc 2 1651 16
	lw	a4,-100(s0)
	.loc 2 1651 13
	ld	a5,-256(s0)
	sw	a4,12(a5)
	.loc 2 1651 15
	lhu	a4,-96(s0)
	.loc 2 1651 12
	ld	a5,-256(s0)
	sh	a4,16(a5)
	.loc 2 1651 15
	lhu	a4,-94(s0)
	.loc 2 1651 12
	ld	a5,-256(s0)
	sh	a4,18(a5)
	.loc 2 1652 17
	lw	a4,-92(s0)
	.loc 2 1652 14
	ld	a5,-256(s0)
	sw	a4,20(a5)
	.loc 2 1652 17
	lw	a4,-88(s0)
	.loc 2 1652 14
	ld	a5,-256(s0)
	sw	a4,24(a5)
	.loc 2 1652 17
	lw	a4,-84(s0)
	.loc 2 1652 14
	ld	a5,-256(s0)
	sw	a4,28(a5)
	.loc 2 1653 16
	li	a5,0
.L542:
	.loc 2 1654 1
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
	.loc 2 1657 1
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
	.loc 2 1664 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1665 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1666 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1667 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1668 5
	addi	a5,s0,-208
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1669 5
	addi	a5,s0,-212
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1659 7
	ld	a5,-384(s0)
	beq	a5,zero,.L544
	.loc 2 1659 12 discriminator 1
	lw	a5,-388(s0)
	sext.w	a5,a5
	bgt	a5,zero,.L545
.L544:
	.loc 2 1658 24
	li	a5,-1
	j	.L556
.L545:
	.loc 2 1660 5
	addi	a5,s0,-344
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1659 5
	addi	a5,s0,-344
	ld	a2,-376(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1661 5
	addi	a5,s0,-360
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1661 10 discriminator 1
	sw	zero,-24(s0)
	.loc 2 1661 5
	j	.L547
.L548:
	.loc 2 1660 13
	lw	a5,-24(s0)
	.loc 2 1660 16
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-344(a5)
	.loc 2 1661 25 discriminator 4
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-24(s0)
.L547:
	.loc 2 1661 18 discriminator 2
	lw	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L548
	.loc 2 1662 9
	addi	a3,s0,-360
	addi	a4,s0,-20
	addi	a5,s0,-344
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1662 7 discriminator 1
	bne	a5,zero,.L549
	.loc 2 1661 24
	li	a5,-1
	j	.L556
.L549:
	.loc 2 1662 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1663 11
	lhu	a5,-112(s0)
	.loc 2 1663 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L550
	.loc 2 1662 24
	li	a5,-1
	j	.L556
.L550:
	.loc 2 1663 10 discriminator 1
	addi	a4,s0,-360
	addi	a5,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 2 1663 9 discriminator 2
	sw	a5,-116(s0)
	.loc 2 1664 8
	lw	a5,-116(s0)
	.loc 2 1664 7
	bne	a5,zero,.L551
	.loc 2 1663 24
	li	a5,-1
	j	.L556
.L551:
	.loc 2 1664 5 discriminator 2
	lw	a5,-116(s0)
	addi	a4,s0,-208
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1666 10
	lhu	a5,-208(s0)
	.loc 2 1666 7
	sext.w	a4,a5
	li	a5,3
	beq	a4,a5,.L552
	.loc 2 1665 24
	li	a5,-1
	j	.L556
.L552:
	.loc 2 1666 9 discriminator 2
	lw	a5,-200(s0)
	.loc 2 1666 6 discriminator 2
	sw	a5,-212(s0)
	.loc 2 1666 9 discriminator 2
	lw	a5,-212(s0)
	.loc 2 1666 7 discriminator 2
	lw	a4,-388(s0)
	sext.w	a4,a4
	bge	a4,a5,.L553
	.loc 2 1666 10 discriminator 3
	lw	a5,-388(s0)
	sw	a5,-212(s0)
.L553:
	.loc 2 1667 9
	lw	a5,-212(s0)
	.loc 2 1667 7
	bge	a5,zero,.L554
	.loc 2 1666 10
	sw	zero,-212(s0)
.L554:
	.loc 2 1668 9
	lw	a5,-212(s0)
	.loc 2 1668 7
	ble	a5,zero,.L555
	.loc 2 1667 9
	lw	a5,-212(s0)
	mv	a4,a5
	addi	a5,s0,-208
	mv	a3,a4
	ld	a2,-384(s0)
	li	a1,0
	mv	a0,a5
	call	read_data
.L555:
	.loc 2 1668 16 discriminator 2
	lw	a5,-212(s0)
.L556:
	.loc 2 1669 1
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
	.loc 2 1672 1
	.cfi_startproc
	addi	sp,sp,-368
	.cfi_def_cfa_offset 368
	sd	ra,360(sp)
	sd	s0,352(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,368
	.cfi_def_cfa 8, 0
	sd	a0,-360(s0)
	sd	a1,-368(s0)
	.loc 2 1678 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1679 5
	addi	a5,s0,-24
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1680 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1681 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1682 5
	addi	a5,s0,-208
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1674 7
	ld	a5,-368(s0)
	bne	a5,zero,.L558
	.loc 2 1673 24
	li	a5,-1
	j	.L565
.L558:
	.loc 2 1675 5
	addi	a5,s0,-336
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1674 5
	addi	a5,s0,-336
	ld	a2,-360(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1676 5
	addi	a5,s0,-352
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1676 10 discriminator 1
	sw	zero,-24(s0)
	.loc 2 1676 5
	j	.L560
.L561:
	.loc 2 1675 13
	lw	a5,-24(s0)
	.loc 2 1675 16
	addi	a5,a5,-16
	add	a5,a5,s0
	sb	zero,-336(a5)
	.loc 2 1676 25 discriminator 4
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-24(s0)
.L560:
	.loc 2 1676 18 discriminator 2
	lw	a4,-24(s0)
	li	a5,14
	ble	a4,a5,.L561
	.loc 2 1677 9
	addi	a3,s0,-352
	addi	a4,s0,-20
	addi	a5,s0,-336
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1677 7 discriminator 1
	bne	a5,zero,.L562
	.loc 2 1676 24
	li	a5,-1
	j	.L565
.L562:
	.loc 2 1677 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1678 11
	lhu	a5,-112(s0)
	.loc 2 1678 7
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L563
	.loc 2 1677 24
	li	a5,-1
	j	.L565
.L563:
	.loc 2 1678 10 discriminator 2
	addi	a4,s0,-352
	addi	a5,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	dir_lookup
	mv	a5,a0
	.loc 2 1678 9 discriminator 3
	sw	a5,-116(s0)
	.loc 2 1679 8
	lw	a5,-116(s0)
	.loc 2 1679 7
	bne	a5,zero,.L564
	.loc 2 1678 24
	li	a5,-1
	j	.L565
.L564:
	.loc 2 1679 5 discriminator 2
	lw	a5,-116(s0)
	addi	a4,s0,-208
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1680 16
	lhu	a4,-208(s0)
	.loc 2 1680 13
	ld	a5,-368(s0)
	sh	a4,0(a5)
	.loc 2 1680 17
	lhu	a4,-202(s0)
	.loc 2 1680 14
	ld	a5,-368(s0)
	sh	a4,2(a5)
	.loc 2 1680 16
	lw	a4,-200(s0)
	.loc 2 1680 13
	ld	a5,-368(s0)
	sw	a4,4(a5)
	.loc 2 1680 13
	lw	a4,-116(s0)
	ld	a5,-368(s0)
	sw	a4,8(a5)
	.loc 2 1681 16
	lw	a4,-196(s0)
	.loc 2 1681 13
	ld	a5,-368(s0)
	sw	a4,12(a5)
	.loc 2 1681 15
	lhu	a4,-192(s0)
	.loc 2 1681 12
	ld	a5,-368(s0)
	sh	a4,16(a5)
	.loc 2 1681 15
	lhu	a4,-190(s0)
	.loc 2 1681 12
	ld	a5,-368(s0)
	sh	a4,18(a5)
	.loc 2 1682 17
	lw	a4,-188(s0)
	.loc 2 1682 14
	ld	a5,-368(s0)
	sw	a4,20(a5)
	.loc 2 1682 17
	lw	a4,-184(s0)
	.loc 2 1682 14
	ld	a5,-368(s0)
	sw	a4,24(a5)
	.loc 2 1682 17
	lw	a4,-180(s0)
	.loc 2 1682 14
	ld	a5,-368(s0)
	sw	a4,28(a5)
	.loc 2 1683 16
	li	a5,0
.L565:
	.loc 2 1684 1
	mv	a0,a5
	ld	ra,360(sp)
	.cfi_restore 1
	ld	s0,352(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 368
	addi	sp,sp,368
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
	.loc 2 1687 1
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
	.loc 2 1691 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1692 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1693 5
	addi	a5,s0,-120
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1689 5
	addi	a5,s0,-248
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1688 5
	addi	a5,s0,-248
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1689 10
	addi	a5,s0,-248
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1689 9 discriminator 2
	sw	a5,-20(s0)
	.loc 2 1691 8
	lw	a5,-20(s0)
	.loc 2 1691 7
	bne	a5,zero,.L567
	.loc 2 1690 24
	li	a5,-1
	j	.L570
.L567:
	.loc 2 1691 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1693 7
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1693 6 discriminator 2
	sd	a5,-120(s0)
	.loc 2 1695 11
	ld	a5,-120(s0)
	lhu	a5,1018(a5)
	.loc 2 1695 7
	beq	a5,zero,.L569
	.loc 2 1695 22 discriminator 1
	ld	a5,-120(s0)
	lhu	a4,1018(a5)
	.loc 2 1695 31 discriminator 1
	lhu	a5,-96(s0)
	.loc 2 1695 8 discriminator 1
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L569
	.loc 2 1694 24
	li	a5,-1
	j	.L570
.L569:
	.loc 2 1695 17 discriminator 3
	lw	a5,-268(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-1
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1695 12 discriminator 3
	sw	a5,-100(s0)
	.loc 2 1695 14 discriminator 3
	call	fs_now
	mv	a5,a0
	.loc 2 1695 13 discriminator 4
	sw	a5,-84(s0)
	.loc 2 1696 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1697 16
	li	a5,0
.L570:
	.loc 2 1698 1
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
	.loc 2 1701 1
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
	.loc 2 1704 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1705 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1703 5
	addi	a5,s0,-240
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1702 5
	addi	a5,s0,-240
	ld	a2,-248(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1703 10
	addi	a5,s0,-240
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1703 9 discriminator 2
	sw	a5,-20(s0)
	.loc 2 1705 8
	lw	a5,-20(s0)
	.loc 2 1705 7
	bne	a5,zero,.L572
	.loc 2 1704 24
	li	a5,-1
	j	.L575
.L572:
	.loc 2 1705 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1708 8
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1708 34 discriminator 1
	lhu	a5,1018(a5)
	.loc 2 1708 7 discriminator 1
	beq	a5,zero,.L574
	.loc 2 1707 24
	li	a5,-1
	j	.L575
.L574:
	.loc 2 1708 11 discriminator 2
	lhu	a5,-250(s0)
	sh	a5,-96(s0)
	.loc 2 1708 11 discriminator 2
	lhu	a5,-252(s0)
	sh	a5,-94(s0)
	.loc 2 1708 14 discriminator 2
	call	fs_now
	mv	a5,a0
	.loc 2 1708 13 discriminator 3
	sw	a5,-84(s0)
	.loc 2 1709 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1710 16
	li	a5,0
.L575:
	.loc 2 1711 1
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
	.loc 2 1714 1
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
	.loc 2 1718 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1719 5
	addi	a5,s0,-112
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1720 5
	addi	a5,s0,-116
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1716 5
	addi	a5,s0,-248
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1715 5
	addi	a5,s0,-248
	ld	a2,-264(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	.loc 2 1716 10
	addi	a5,s0,-248
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1716 9 discriminator 2
	sw	a5,-20(s0)
	.loc 2 1718 8
	lw	a5,-20(s0)
	.loc 2 1718 7
	bne	a5,zero,.L577
	.loc 2 1717 24
	li	a5,-1
	j	.L583
.L577:
	.loc 2 1718 5 discriminator 2
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1719 9
	call	fs_now
	mv	a5,a0
	.loc 2 1719 8 discriminator 2
	sw	a5,-116(s0)
	.loc 2 1720 43
	lw	a5,-268(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L579
	.loc 2 1720 43 is_stmt 0 discriminator 2
	lw	a5,-116(s0)
	j	.L580
.L579:
	.loc 2 1720 43 discriminator 3
	lw	a5,-268(s0)
.L580:
	.loc 2 1720 13 is_stmt 1 discriminator 5
	sw	a5,-92(s0)
	.loc 2 1721 43
	lw	a5,-272(s0)
	sext.w	a4,a5
	li	a5,-1
	bne	a4,a5,.L581
	.loc 2 1721 43 is_stmt 0 discriminator 1
	lw	a5,-116(s0)
	j	.L582
.L581:
	.loc 2 1721 43 discriminator 2
	lw	a5,-272(s0)
.L582:
	.loc 2 1721 13 is_stmt 1 discriminator 4
	sw	a5,-88(s0)
	.loc 2 1722 13
	lw	a5,-116(s0)
	sw	a5,-84(s0)
	.loc 2 1723 5
	lw	a5,-20(s0)
	addi	a4,s0,-112
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1724 16
	li	a5,0
.L583:
	.loc 2 1725 1
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
	.loc 2 1728 1
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
	.loc 2 1728 16
	li	a2,0
	li	a1,0
	ld	a0,-24(s0)
	call	fs_open2
	mv	a5,a0
	.loc 2 1729 1
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
.LC19:
	.string	"/dev/tty"
	.text
	.align	1
	.globl	fs_open2
	.type	fs_open2, @function
fs_open2:
.LFB75:
	.loc 2 1732 1
	.cfi_startproc
	addi	sp,sp,-464
	.cfi_def_cfa_offset 464
	sd	ra,456(sp)
	sd	s0,448(sp)
	sd	s1,440(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,464
	.cfi_def_cfa 8, 0
	sd	a0,-456(s0)
	mv	a5,a1
	mv	a4,a2
	sw	a5,-460(s0)
	mv	a5,a4
	sw	a5,-464(s0)
	.loc 2 1750 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1751 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1752 5
	addi	a5,s0,-52
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1753 5
	addi	a5,s0,-56
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1754 5
	addi	a5,s0,-144
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1755 5
	addi	a5,s0,-148
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1756 5
	addi	a5,s0,-152
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1757 5
	addi	a5,s0,-156
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1758 5
	addi	a5,s0,-160
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1759 5
	addi	a5,s0,-162
	li	a2,2
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1760 5
	addi	a5,s0,-168
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1761 5
	addi	a5,s0,-172
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1762 5
	addi	a5,s0,-174
	li	a2,2
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1763 5
	addi	a5,s0,-264
	li	a2,88
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1764 5
	addi	a5,s0,-268
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1765 5
	addi	a5,s0,-272
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1766 5
	addi	a5,s0,-276
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1733 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1733 15 discriminator 1
	sd	a5,-40(s0)
	.loc 2 1735 5
	addi	a5,s0,-408
	li	a2,128
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1743 7
	ld	a5,-456(s0)
	beq	a5,zero,.L587
	.loc 2 1743 19 discriminator 1
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 2 1743 13 discriminator 1
	beq	a5,zero,.L587
	.loc 2 1743 32 discriminator 2
	ld	a5,-456(s0)
	lbu	a5,0(a5)
	.loc 2 1743 25 discriminator 2
	mv	a4,a5
	li	a5,46
	bne	a4,a5,.L588
	.loc 2 1743 45 discriminator 3
	ld	a5,-456(s0)
	addi	a5,a5,1
	lbu	a5,0(a5)
	.loc 2 1743 39 discriminator 3
	bne	a5,zero,.L588
.L587:
	.loc 2 1736 11
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1736 10 discriminator 1
	sd	a5,-48(s0)
	.loc 2 1737 51
	ld	a5,-48(s0)
	addi	a4,a5,888
	.loc 2 1737 9
	addi	a5,s0,-408
	mv	a2,a4
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
	j	.L589
.L588:
	.loc 2 1739 9
	addi	a5,s0,-408
	ld	a2,-456(s0)
	li	a1,128
	mv	a0,a5
	call	build_abs_normalized
.L589:
	.loc 2 1760 8
	addi	a5,s0,-408
	lla	a1,.LC19
	mv	a0,a5
	call	strcmp
	mv	a5,a0
	.loc 2 1760 7 discriminator 2
	bne	a5,zero,.L590
	.loc 2 1757 14
	li	a5,3
	sw	a5,-52(s0)
	.loc 2 1757 9
	j	.L591
.L594:
	.loc 2 1756 26
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1756 15
	bne	a5,zero,.L592
	.loc 2 1746 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 2 1746 31
	call	new_file_table
	mv	a5,a0
	.loc 2 1746 30 discriminator 1
	sd	a5,0(s1)
	.loc 2 1747 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1747 36
	li	a4,5
	sw	a4,0(a5)
	.loc 2 1748 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1748 36
	li	a4,1
	sw	a4,100(a5)
	.loc 2 1749 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1749 36
	li	a4,-1
	sw	a4,4(a5)
	.loc 2 1750 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1750 35
	sw	zero,96(a5)
	.loc 2 1751 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1751 41
	sw	zero,116(a5)
	.loc 2 1752 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1752 42
	sw	zero,120(a5)
	.loc 2 1753 27
	ld	a4,-40(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1753 38
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 2 1754 40
	lw	a5,-52(s0)
	j	.L623
.L592:
	.loc 2 1757 31 discriminator 3
	lw	a5,-52(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-52(s0)
.L591:
	.loc 2 1757 26 discriminator 2
	lw	a4,-52(s0)
	li	a5,31
	ble	a4,a5,.L594
	.loc 2 1757 24 discriminator 4
	li	a5,-1
	.loc 2 1757 24 is_stmt 0
	j	.L623
.L590:
	.loc 2 1760 10 is_stmt 1 discriminator 3
	addi	a5,s0,-408
	mv	a0,a5
	call	path_lookup
	mv	a5,a0
	.loc 2 1760 9 discriminator 4
	sw	a5,-56(s0)
	.loc 2 1762 16
	sw	zero,-148(s0)
	.loc 2 1803 12
	lw	a5,-56(s0)
	.loc 2 1803 7
	bne	a5,zero,.L595
	.loc 2 1799 17
	lw	a5,-460(s0)
	andi	a5,a5,512
	sext.w	a5,a5
	.loc 2 1799 11
	beq	a5,zero,.L596
.LBB7:
	.loc 2 1770 13
	addi	a5,s0,-424
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1771 21
	sw	zero,-156(s0)
	.loc 2 1771 13
	j	.L597
.L598:
	.loc 2 1770 21
	lw	a5,-156(s0)
	.loc 2 1770 27
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-392(a5)
	.loc 2 1771 50 discriminator 3
	lw	a5,-156(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-156(s0)
.L597:
	.loc 2 1771 40 discriminator 1
	lw	a4,-156(s0)
	li	a5,14
	ble	a4,a5,.L598
	.loc 2 1774 17
	addi	a3,s0,-424
	addi	a4,s0,-152
	addi	a5,s0,-408
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1774 15 discriminator 1
	bne	a5,zero,.L599
	.loc 2 1772 40
	li	a5,-1
	j	.L623
.L599:
	.loc 2 1774 22 discriminator 2
	call	alloc_inode_T_FILE
	mv	a5,a0
	.loc 2 1774 21 discriminator 3
	sw	a5,-160(s0)
	.loc 2 1776 24
	lw	a5,-160(s0)
	.loc 2 1776 15
	bne	a5,zero,.L601
	.loc 2 1775 40
	li	a5,-1
	j	.L623
.L601:
	.loc 2 1777 16
	lw	a5,-152(s0)
	lw	a3,-160(s0)
	addi	a4,s0,-424
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	add_dirent
	mv	a5,a0
	.loc 2 1777 15 discriminator 1
	beq	a5,zero,.L602
	.loc 2 1776 40
	li	a5,-1
	j	.L623
.L602:
	.loc 2 1777 17 discriminator 2
	lw	a5,-160(s0)
	sw	a5,-56(s0)
	.loc 2 1778 13
	lw	a5,-56(s0)
	addi	a4,s0,-144
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1782 16
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1782 42 discriminator 1
	lhu	a5,1016(a5)
	.loc 2 1782 15 discriminator 1
	sh	a5,-162(s0)
	.loc 2 1785 13
	addi	a5,s0,-440
	li	a2,15
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1785 19 discriminator 1
	sw	zero,-172(s0)
	.loc 2 1785 13
	j	.L603
.L604:
	.loc 2 1784 22
	lw	a5,-172(s0)
	.loc 2 1784 26
	addi	a5,a5,-32
	add	a5,a5,s0
	sb	zero,-408(a5)
	.loc 2 1785 44 discriminator 4
	lw	a5,-172(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-172(s0)
.L603:
	.loc 2 1785 36 discriminator 2
	lw	a4,-172(s0)
	li	a5,14
	ble	a4,a5,.L604
	.loc 2 1785 17 discriminator 5
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1785 43 discriminator 6
	lhu	a5,1020(a5)
	.loc 2 1785 16 discriminator 6
	sh	a5,-174(s0)
	.loc 2 1790 16
	addi	a3,s0,-440
	addi	a4,s0,-168
	addi	a5,s0,-408
	mv	a2,a3
	mv	a1,a4
	mv	a0,a5
	call	path_parent_lookup_abs
	mv	a5,a0
	.loc 2 1790 15 discriminator 1
	beq	a5,zero,.L605
	.loc 2 1787 17
	lw	a5,-168(s0)
	addi	a4,s0,-264
	mv	a1,a4
	mv	a0,a5
	call	read_inode
	.loc 2 1789 27
	lw	a5,-252(s0)
	.loc 2 1789 32
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 2 1789 19
	beq	a5,zero,.L605
	.loc 2 1788 32
	lhu	a5,-246(s0)
	.loc 2 1788 24
	sh	a5,-174(s0)
.L605:
	.loc 2 1790 20 discriminator 2
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1790 46 discriminator 3
	lhu	a5,1018(a5)
	.loc 2 1790 19 discriminator 3
	sh	a5,-128(s0)
	.loc 2 1791 19
	lhu	a5,-174(s0)
	sh	a5,-126(s0)
	.loc 2 1792 29
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 2 1792 50
	beq	a5,zero,.L606
	.loc 2 1792 50 is_stmt 0 discriminator 1
	lw	a5,-464(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	j	.L607
.L606:
	.loc 2 1792 50 discriminator 2
	li	a5,420
.L607:
	.loc 2 1792 60 is_stmt 1 discriminator 4
	lhu	a4,-162(s0)
	sext.w	a4,a4
	not	a4,a4
	sext.w	a4,a4
	.loc 2 1792 59 discriminator 4
	and	a5,a5,a4
	sext.w	a5,a5
	.loc 2 1792 20 discriminator 4
	sw	a5,-132(s0)
	.loc 2 1793 40
	call	fs_now
	mv	a5,a0
	.loc 2 1793 39 discriminator 1
	sw	a5,-116(s0)
	.loc 2 1793 33 discriminator 1
	lw	a5,-116(s0)
	.loc 2 1793 30 discriminator 1
	sw	a5,-120(s0)
	.loc 2 1793 24 discriminator 1
	lw	a5,-120(s0)
	.loc 2 1793 21 discriminator 1
	sw	a5,-124(s0)
	.loc 2 1794 13
	lw	a5,-56(s0)
	addi	a4,s0,-144
	mv	a1,a4
	mv	a0,a5
	call	write_inode
	.loc 2 1795 24
	li	a5,1
	sw	a5,-148(s0)
.LBE7:
	j	.L608
.L596:
	.loc 2 1797 32
	li	a5,-1
	j	.L623
.L595:
	.loc 2 1800 9
	lw	a5,-56(s0)
	addi	a4,s0,-144
	mv	a1,a4
	mv	a0,a5
	call	read_inode
.L608:
	.loc 2 1806 10
	lhu	a5,-144(s0)
	.loc 2 1806 7
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L609
	.loc 2 1806 22 discriminator 1
	lhu	a5,-144(s0)
	.loc 2 1806 18 discriminator 1
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L609
	.loc 2 1803 24
	li	a5,-1
	j	.L623
.L609:
	.loc 2 1820 10
	lhu	a5,-144(s0)
	.loc 2 1820 7
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L610
	.loc 2 1807 13
	sw	zero,-268(s0)
	.loc 2 1809 11
	lw	a5,-460(s0)
	sext.w	a5,a5
	bne	a5,zero,.L611
	.loc 2 1808 17
	lw	a5,-268(s0)
	ori	a5,a5,4
	sext.w	a5,a5
	sw	a5,-268(s0)
.L611:
	.loc 2 1810 17
	lw	a5,-460(s0)
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 2 1810 11
	beq	a5,zero,.L612
	.loc 2 1809 17
	lw	a5,-268(s0)
	ori	a5,a5,2
	sext.w	a5,a5
	sw	a5,-268(s0)
.L612:
	.loc 2 1813 17
	lw	a5,-460(s0)
	andi	a5,a5,2
	sext.w	a5,a5
	.loc 2 1813 11
	beq	a5,zero,.L613
	.loc 2 1810 17
	lw	a5,-268(s0)
	ori	a5,a5,6
	sext.w	a5,a5
	sw	a5,-268(s0)
.L613:
	.loc 2 1816 12
	lw	a5,-148(s0)
	.loc 2 1816 11
	bne	a5,zero,.L614
	.loc 2 1815 39
	lw	a5,-268(s0)
	.loc 2 1815 17
	beq	a5,zero,.L615
	.loc 2 1815 17 is_stmt 0 discriminator 1
	lw	a5,-268(s0)
	j	.L616
.L615:
	.loc 2 1815 17 discriminator 2
	li	a5,4
.L616:
	.loc 2 1815 17 discriminator 4
	addi	a4,s0,-144
	mv	a1,a5
	mv	a0,a4
	call	check_perm
	mv	a5,a0
	.loc 2 1815 15 is_stmt 1 discriminator 5
	bne	a5,zero,.L614
	.loc 2 1814 40
	li	a5,-1
	j	.L623
.L610:
	.loc 2 1818 15
	lhu	a5,-144(s0)
	.loc 2 1818 12
	sext.w	a4,a5
	li	a5,1
	bne	a4,a5,.L614
	.loc 2 1818 13 discriminator 1
	addi	a5,s0,-144
	li	a1,5
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1818 11 discriminator 2
	bne	a5,zero,.L614
	.loc 2 1817 32
	li	a5,-1
	j	.L623
.L614:
	.loc 2 1854 13
	li	a5,3
	sw	a5,-272(s0)
	.loc 2 1854 5
	j	.L617
.L622:
	.loc 2 1853 22
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1853 11
	bne	a5,zero,.L618
	.loc 2 1822 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	s1,a4,a5
	.loc 2 1822 30
	call	new_file_table
	mv	a5,a0
	.loc 2 1822 29 discriminator 1
	sd	a5,0(s1)
	.loc 2 1824 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1824 35
	li	a4,3
	sw	a4,0(a5)
	.loc 2 1825 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1825 35
	li	a4,1
	sw	a4,100(a5)
	.loc 2 1826 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1826 35
	lw	a4,-56(s0)
	sw	a4,4(a5)
	.loc 2 1827 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1827 34
	ld	t4,-144(s0)
	ld	t3,-136(s0)
	ld	t1,-128(s0)
	ld	a7,-120(s0)
	ld	a6,-112(s0)
	ld	a0,-104(s0)
	ld	a1,-96(s0)
	ld	a2,-88(s0)
	ld	a3,-80(s0)
	ld	a4,-72(s0)
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
	ld	a4,-64(s0)
	sd	a4,88(a5)
	.loc 2 1828 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1828 34
	sw	zero,96(a5)
	.loc 2 1829 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1829 40
	sw	zero,116(a5)
	.loc 2 1830 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1830 41
	sw	zero,120(a5)
	.loc 2 1831 23
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1831 37
	lw	a4,-460(s0)
	sw	a4,124(a5)
	.loc 2 1844 22
	lw	a5,-460(s0)
	andi	a5,a5,1024
	sext.w	a5,a5
	.loc 2 1844 15
	beq	a5,zero,.L619
	.loc 2 1844 43 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1844 54 discriminator 1
	lhu	a5,8(a5)
	.loc 2 1844 31 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L619
	.loc 2 1835 17
	lw	a3,-56(s0)
	.loc 2 1835 51
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1835 17
	addi	a5,a5,8
	mv	a1,a5
	mv	a0,a3
	call	free_inode_blocks
	.loc 2 1836 21
	call	fs_now
	mv	a5,a0
	.loc 2 1836 20 discriminator 1
	sw	a5,-276(s0)
	.loc 2 1837 27
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1837 44
	lw	a4,-276(s0)
	sw	a4,32(a5)
	.loc 2 1838 27
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1838 44
	lw	a4,-276(s0)
	sw	a4,36(a5)
	.loc 2 1839 27
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1839 44
	lw	a4,-276(s0)
	sw	a4,28(a5)
	.loc 2 1840 17
	lw	a3,-56(s0)
	.loc 2 1840 45
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1840 34
	addi	a5,a5,8
	.loc 2 1840 17
	mv	a1,a5
	mv	a0,a3
	call	write_inode
	.loc 2 1841 27
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1841 38
	sw	zero,96(a5)
.L619:
	.loc 2 1848 22
	lw	a5,-460(s0)
	mv	a4,a5
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1848 15
	beq	a5,zero,.L620
	.loc 2 1848 43 discriminator 1
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1848 54 discriminator 1
	lhu	a5,8(a5)
	.loc 2 1848 31 discriminator 1
	sext.w	a4,a5
	li	a5,2
	bne	a4,a5,.L620
	.loc 2 1845 49
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a4,0(a5)
	.loc 2 1845 27
	ld	a3,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a3,a5
	ld	a5,0(a5)
	.loc 2 1845 60
	lw	a4,16(a4)
	.loc 2 1845 38
	sw	a4,96(a5)
.L620:
	.loc 2 1851 16
	lw	a5,-148(s0)
	.loc 2 1851 15
	beq	a5,zero,.L621
	.loc 2 1849 27
	ld	a4,-40(s0)
	lw	a5,-272(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1849 38
	ld	t4,-144(s0)
	ld	t3,-136(s0)
	ld	t1,-128(s0)
	ld	a7,-120(s0)
	ld	a6,-112(s0)
	ld	a0,-104(s0)
	ld	a1,-96(s0)
	ld	a2,-88(s0)
	ld	a3,-80(s0)
	ld	a4,-72(s0)
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
	ld	a4,-64(s0)
	sd	a4,88(a5)
.L621:
	.loc 2 1851 32 discriminator 1
	lw	a5,-272(s0)
	.loc 2 1851 32 is_stmt 0
	j	.L623
.L618:
	.loc 2 1854 32 is_stmt 1 discriminator 2
	lw	a5,-272(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-272(s0)
.L617:
	.loc 2 1854 24 discriminator 1
	lw	a4,-272(s0)
	li	a5,31
	ble	a4,a5,.L622
	.loc 2 1854 16 discriminator 3
	li	a5,-1
.L623:
	.loc 2 1855 1
	mv	a0,a5
	ld	ra,456(sp)
	.cfi_restore 1
	ld	s0,448(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 464
	ld	s1,440(sp)
	.cfi_restore 9
	addi	sp,sp,464
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
	.loc 2 1858 1
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
	.loc 2 1864 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1865 5
	addi	a5,s0,-44
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1866 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1867 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1868 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1860 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1860 15 discriminator 1
	sd	a5,-40(s0)
	.loc 2 1866 18
	ld	a4,-40(s0)
	lw	a5,-68(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1866 7
	bne	a5,zero,.L625
	.loc 2 1863 24
	li	a5,-1
	j	.L631
.L625:
	.loc 2 1866 8 discriminator 2
	lw	a5,-68(s0)
	sw	a5,-44(s0)
	.loc 2 1870 11
	lw	a5,-44(s0)
	.loc 2 1870 7
	blt	a5,zero,.L627
	.loc 2 1870 18 discriminator 1
	lw	a4,-44(s0)
	.loc 2 1870 13 discriminator 1
	li	a5,31
	ble	a4,a5,.L628
.L627:
	.loc 2 1868 24
	li	a5,-1
	j	.L631
.L628:
	.loc 2 1870 17 discriminator 2
	ld	a4,-40(s0)
	lw	a5,-44(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1870 6 discriminator 2
	sd	a5,-56(s0)
	.loc 2 1871 16
	ld	a5,-56(s0)
	.loc 2 1871 21
	lw	a4,16(a5)
	.loc 2 1871 28
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 2 1871 26
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1871 14
	sw	a5,-60(s0)
	.loc 2 1874 17
	lw	a5,-60(s0)
	.loc 2 1874 7
	bne	a5,zero,.L629
	.loc 2 1872 24
	li	a5,0
	j	.L631
.L629:
	.loc 2 1874 41 discriminator 1
	lw	a5,-60(s0)
	slli	a4,a5,32
	srli	a4,a4,32
	ld	a5,-88(s0)
	bleu	a5,a4,.L630
	mv	a5,a4
.L630:
	.loc 2 1874 12 discriminator 1
	sext.w	a5,a5
	sw	a5,-64(s0)
	.loc 2 1875 17
	ld	a5,-56(s0)
	.loc 2 1875 5
	addi	a4,a5,8
	.loc 2 1875 24
	ld	a5,-56(s0)
	.loc 2 1875 5
	lw	a5,96(a5)
	lw	a3,-64(s0)
	ld	a2,-80(s0)
	mv	a1,a5
	mv	a0,a4
	call	read_data
	.loc 2 1876 6
	ld	a5,-56(s0)
	lw	a3,96(a5)
	.loc 2 1876 11
	lw	a4,-64(s0)
	.loc 2 1876 6
	ld	a5,-56(s0)
	.loc 2 1876 11
	addw	a4,a3,a4
	sext.w	a4,a4
	sw	a4,96(a5)
	.loc 2 1878 6
	ld	s1,-56(s0)
	.loc 2 1878 18
	call	fs_now
	mv	a5,a0
	.loc 2 1878 17 discriminator 1
	sw	a5,28(s1)
	.loc 2 1879 18
	ld	a5,-56(s0)
	.loc 2 1879 5
	lw	a4,4(a5)
	.loc 2 1879 27
	ld	a5,-56(s0)
	.loc 2 1879 25
	addi	a5,a5,8
	.loc 2 1879 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 2 1880 16
	lw	a5,-64(s0)
.L631:
	.loc 2 1881 1
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
	.loc 2 1884 1
	.cfi_startproc
	addi	sp,sp,-640
	.cfi_def_cfa_offset 640
	sd	ra,632(sp)
	sd	s0,624(sp)
	sd	s1,616(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	.cfi_offset 9, -24
	addi	s0,sp,640
	.cfi_def_cfa 8, 0
	mv	a5,a0
	sd	a1,-624(s0)
	sd	a2,-632(s0)
	sw	a5,-612(s0)
	.loc 2 1896 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1897 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1898 5
	addi	a5,s0,-60
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1899 5
	addi	a5,s0,-64
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1900 5
	addi	a5,s0,-68
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1901 5
	addi	a5,s0,-72
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1902 5
	addi	a5,s0,-76
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1903 5
	addi	a5,s0,-80
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1904 5
	addi	a5,s0,-84
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1905 5
	addi	a5,s0,-88
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1906 5
	addi	a5,s0,-92
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1886 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1886 15 discriminator 1
	sd	a5,-48(s0)
	.loc 2 1889 7
	lw	a5,-612(s0)
	sext.w	a5,a5
	blt	a5,zero,.L633
	.loc 2 1889 12 discriminator 1
	lw	a5,-612(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L634
.L633:
	.loc 2 1888 24
	li	a5,-1
	j	.L648
.L634:
	.loc 2 1891 18
	ld	a4,-48(s0)
	lw	a5,-612(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1891 7
	bne	a5,zero,.L636
	.loc 2 1889 24
	li	a5,-1
	j	.L648
.L636:
	.loc 2 1891 17 discriminator 1
	ld	a4,-48(s0)
	lw	a5,-612(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1891 6 discriminator 1
	sd	a5,-56(s0)
	.loc 2 1893 9
	ld	a5,-56(s0)
	lw	a4,0(a5)
	.loc 2 1893 7
	li	a5,3
	beq	a4,a5,.L637
	.loc 2 1892 24
	li	a5,-1
	j	.L648
.L637:
	.loc 2 1896 22
	ld	a5,-56(s0)
	.loc 2 1896 9
	addi	a5,a5,8
	li	a1,2
	mv	a0,a5
	call	check_perm
	mv	a5,a0
	.loc 2 1896 7 discriminator 2
	bne	a5,zero,.L638
	.loc 2 1893 24
	li	a5,-1
	j	.L648
.L638:
	.loc 2 1896 13 discriminator 3
	ld	a5,-632(s0)
	sext.w	a5,a5
	sw	a5,-60(s0)
	.loc 2 1898 27
	ld	a5,-624(s0)
	sd	a5,-40(s0)
	.loc 2 1899 9
	lw	a5,-60(s0)
	sw	a5,-64(s0)
	.loc 2 1901 13
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 2 1901 21
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1901 45
	beq	a5,zero,.L639
	.loc 2 1901 34 discriminator 2
	ld	a5,-56(s0)
	.loc 2 1901 45 discriminator 2
	lw	a5,16(a5)
	j	.L640
.L639:
	.loc 2 1901 48 discriminator 3
	ld	a5,-56(s0)
	.loc 2 1901 45 discriminator 3
	lw	a5,96(a5)
.L640:
	.loc 2 1901 8 discriminator 5
	sw	a5,-68(s0)
	.loc 2 1905 9
	ld	a5,-56(s0)
	lw	a4,124(a5)
	.loc 2 1905 17
	li	a5,4096
	addi	a5,a5,-2048
	and	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1905 7
	beq	a5,zero,.L641
	.loc 2 1903 10
	ld	a5,-56(s0)
	.loc 2 1903 15
	lw	a4,-68(s0)
	sw	a4,96(a5)
.L641:
	.loc 2 1905 12 discriminator 2
	sw	zero,-72(s0)
	.loc 2 1928 10
	j	.L642
.L646:
.LBB8:
	.loc 2 1908 20
	lw	a5,-68(s0)
	srliw	a5,a5,9
	sext.w	a5,a5
	.loc 2 1908 16
	sw	a5,-76(s0)
	.loc 2 1909 20
	lw	a5,-68(s0)
	andi	a5,a5,511
	sext.w	a5,a5
	.loc 2 1909 16
	sw	a5,-80(s0)
	.loc 2 1910 21
	lw	a5,-80(s0)
	li	a4,512
	subw	a5,a4,a5
	sext.w	a5,a5
	.loc 2 1910 17
	sw	a5,-84(s0)
	.loc 2 1913 20
	lw	a4,-84(s0)
	lw	a5,-64(s0)
	.loc 2 1913 11
	bleu	a4,a5,.L643
	.loc 2 1911 21
	lw	a5,-64(s0)
	sw	a5,-84(s0)
.L643:
	.loc 2 1913 36 discriminator 1
	ld	a5,-56(s0)
	.loc 2 1913 18 discriminator 1
	lw	a4,4(a5)
	.loc 2 1913 45 discriminator 1
	ld	a5,-56(s0)
	.loc 2 1913 18 discriminator 1
	addi	a5,a5,8
	lw	a3,-76(s0)
	mv	a2,a3
	mv	a1,a5
	mv	a0,a4
	call	inode_bmap_alloc
	mv	a5,a0
	.loc 2 1913 17 discriminator 2
	sw	a5,-88(s0)
	.loc 2 1917 20
	lw	a5,-88(s0)
	.loc 2 1917 11
	beq	a5,zero,.L649
	.loc 2 1918 9
	addi	a5,s0,-608
	li	a2,512
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1918 9 discriminator 1
	lw	a5,-88(s0)
	addi	a4,s0,-608
	mv	a1,a4
	mv	a0,a5
	call	read_block
	.loc 2 1919 9
	lw	a5,-80(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	addi	a4,s0,-608
	add	a5,a4,a5
	lw	a4,-84(s0)
	mv	a2,a4
	ld	a1,-40(s0)
	mv	a0,a5
	call	memcpy
	.loc 2 1920 9
	lw	a5,-88(s0)
	addi	a4,s0,-608
	mv	a1,a4
	mv	a0,a5
	call	write_block
	.loc 2 1922 13
	lw	a4,-64(s0)
	lw	a5,-84(s0)
	subw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-64(s0)
	.loc 2 1923 12
	lw	a4,-68(s0)
	lw	a5,-84(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-68(s0)
	.loc 2 1924 12
	lw	a5,-84(s0)
	slli	a5,a5,32
	srli	a5,a5,32
	ld	a4,-40(s0)
	add	a5,a4,a5
	sd	a5,-40(s0)
	.loc 2 1925 16
	lw	a4,-72(s0)
	lw	a5,-84(s0)
	addw	a5,a4,a5
	sext.w	a5,a5
	sw	a5,-72(s0)
.L642:
.LBE8:
	.loc 2 1928 15
	lw	a5,-64(s0)
	bne	a5,zero,.L646
	j	.L645
.L649:
.LBB9:
	.loc 2 1914 13
	nop
.L645:
.LBE9:
	.loc 2 1928 6 discriminator 1
	ld	a5,-56(s0)
	lw	a3,96(a5)
	.loc 2 1928 11 discriminator 1
	lw	a4,-72(s0)
	.loc 2 1928 6 discriminator 1
	ld	a5,-56(s0)
	.loc 2 1928 11 discriminator 1
	addw	a4,a3,a4
	sext.w	a4,a4
	sw	a4,96(a5)
	.loc 2 1930 14
	ld	a5,-56(s0)
	lw	a5,96(a5)
	.loc 2 1930 12
	sw	a5,-92(s0)
	.loc 2 1934 17
	ld	a5,-56(s0)
	.loc 2 1934 22
	lw	a4,16(a5)
	.loc 2 1934 15
	lw	a5,-92(s0)
	.loc 2 1934 7
	bgeu	a4,a5,.L647
	.loc 2 1932 10
	ld	a5,-56(s0)
	.loc 2 1932 20
	lw	a4,-92(s0)
	sw	a4,16(a5)
.L647:
	.loc 2 1934 6 discriminator 1
	ld	s1,-56(s0)
	.loc 2 1934 18 discriminator 1
	call	fs_now
	mv	a5,a0
	.loc 2 1934 17 discriminator 2
	sw	a5,32(s1)
	.loc 2 1935 18
	ld	a5,-56(s0)
	.loc 2 1935 5
	lw	a4,4(a5)
	.loc 2 1935 27
	ld	a5,-56(s0)
	.loc 2 1935 25
	addi	a5,a5,8
	.loc 2 1935 5
	mv	a1,a5
	mv	a0,a4
	call	write_inode
	.loc 2 1936 16
	lw	a5,-72(s0)
.L648:
	.loc 2 1937 1
	mv	a0,a5
	ld	ra,632(sp)
	.cfi_restore 1
	ld	s0,624(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 640
	ld	s1,616(sp)
	.cfi_restore 9
	addi	sp,sp,640
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
	.loc 2 1940 1
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
	.loc 2 1944 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1945 5
	addi	a5,s0,-28
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1946 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1940 16
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1940 15 discriminator 1
	sd	a5,-24(s0)
	.loc 2 1946 18
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1946 7
	bne	a5,zero,.L651
	.loc 2 1943 24
	li	a5,-1
	j	.L655
.L651:
	.loc 2 1946 8 discriminator 2
	lw	a5,-52(s0)
	sw	a5,-28(s0)
	.loc 2 1950 11
	lw	a5,-28(s0)
	.loc 2 1950 7
	blt	a5,zero,.L653
	.loc 2 1950 18 discriminator 1
	lw	a4,-28(s0)
	.loc 2 1950 13 discriminator 1
	li	a5,31
	bgt	a4,a5,.L653
	.loc 2 1950 35 discriminator 2
	ld	a4,-24(s0)
	lw	a5,-28(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1950 40 discriminator 2
	lw	a5,100(a5)
	.loc 2 1950 22 discriminator 2
	bne	a5,zero,.L654
.L653:
	.loc 2 1948 24
	li	a5,-1
	j	.L655
.L654:
	.loc 2 1950 17 discriminator 3
	ld	a4,-24(s0)
	lw	a5,-28(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1950 6 discriminator 3
	sd	a5,-40(s0)
	.loc 2 1951 17
	ld	a5,-40(s0)
	.loc 2 1951 22
	lw	a5,16(a5)
.L655:
	.loc 2 1952 1
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
	.loc 2 1955 1
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
	.loc 2 1959 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1960 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1961 5
	addi	a5,s0,-56
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1958 8
	call	get_current_file_table
	mv	a5,a0
	.loc 2 1958 7 discriminator 1
	sd	a5,-40(s0)
	.loc 2 1960 7
	ld	a5,-72(s0)
	blt	a5,zero,.L657
	.loc 2 1960 12 discriminator 2
	ld	a4,-72(s0)
	li	a5,31
	ble	a4,a5,.L658
.L657:
	.loc 2 1959 24
	li	a5,-1
	j	.L668
.L658:
	.loc 2 1960 9 discriminator 3
	ld	a4,-40(s0)
	ld	a5,-72(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 1960 6 discriminator 3
	sd	a5,-48(s0)
	.loc 2 1964 8
	ld	a5,-48(s0)
	.loc 2 1964 7
	bne	a5,zero,.L660
	.loc 2 1961 24
	li	a5,-1
	j	.L668
.L660:
	.loc 2 1964 7 discriminator 1
	ld	a4,-40(s0)
	ld	a5,-72(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	.loc 2 1964 11 discriminator 1
	sd	zero,0(a5)
	.loc 2 1970 7
	lw	a5,-76(s0)
	sext.w	a5,a5
	beq	a5,zero,.L661
	.loc 2 1967 9
	ld	s1,-48(s0)
	lla	a5,gActiveProc
	lw	a5,0(a5)
	mv	a0,a5
	call	proc_slot_get
	mv	a5,a0
	.loc 2 1967 9 is_stmt 0 discriminator 1
	mv	a1,a5
	mv	a0,s1
	call	owner_remove
.L661:
	.loc 2 1973 9 is_stmt 1
	ld	a5,-48(s0)
	lw	a5,100(a5)
	.loc 2 1973 7
	ble	a5,zero,.L662
	.loc 2 1970 10
	ld	a5,-48(s0)
	lw	a4,100(a5)
	.loc 2 1970 16
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,100(a5)
.L662:
	.loc 2 1976 9
	ld	a5,-48(s0)
	lw	a5,100(a5)
	.loc 2 1976 7
	ble	a5,zero,.L663
	.loc 2 1973 24
	li	a5,0
	j	.L668
.L663:
	.loc 2 1976 8 discriminator 1
	ld	a5,-48(s0)
	ld	a5,104(a5)
	.loc 2 1976 6 discriminator 1
	sd	a5,-56(s0)
	.loc 2 1990 8
	ld	a5,-56(s0)
	.loc 2 1990 7
	beq	a5,zero,.L664
	.loc 2 1979 13
	ld	a5,-48(s0)
	lw	a5,116(a5)
	.loc 2 1979 11
	beq	a5,zero,.L665
	.loc 2 1979 27 discriminator 1
	ld	a5,-56(s0)
	lw	a5,528(a5)
	.loc 2 1979 24 discriminator 1
	ble	a5,zero,.L665
	.loc 2 1978 19
	ld	a5,-56(s0)
	lw	a4,528(a5)
	.loc 2 1978 16
	addiw	a4,a4,-1
	sext.w	a4,a4
	.loc 2 1978 15
	sw	a4,528(a5)
	.loc 2 1978 19
	lw	a5,528(a5)
	.loc 2 1978 15
	bne	a5,zero,.L665
	.loc 2 1978 18 discriminator 1
	ld	a5,-56(s0)
	.loc 2 1978 29 discriminator 1
	sw	zero,520(a5)
.L665:
	.loc 2 1980 13
	ld	a5,-48(s0)
	lw	a5,120(a5)
	.loc 2 1980 11
	beq	a5,zero,.L666
	.loc 2 1980 28 discriminator 1
	ld	a5,-56(s0)
	lw	a5,532(a5)
	.loc 2 1980 25 discriminator 1
	ble	a5,zero,.L666
	.loc 2 1979 19
	ld	a5,-56(s0)
	lw	a4,532(a5)
	.loc 2 1979 16
	addiw	a4,a4,-1
	sext.w	a4,a4
	.loc 2 1979 15
	sw	a4,532(a5)
	.loc 2 1979 19
	lw	a5,532(a5)
	.loc 2 1979 15
	bne	a5,zero,.L666
	.loc 2 1979 18 discriminator 2
	ld	a5,-56(s0)
	.loc 2 1979 30 discriminator 2
	sw	zero,524(a5)
.L666:
	.loc 2 1981 13
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 2 1981 11
	ble	a5,zero,.L667
	.loc 2 1980 14
	ld	a5,-56(s0)
	lw	a4,536(a5)
	.loc 2 1980 20
	addiw	a4,a4,-1
	sext.w	a4,a4
	sw	a4,536(a5)
.L667:
	.loc 2 1981 9 discriminator 1
	ld	a5,-56(s0)
	ld	a4,-48(s0)
	mv	a1,a4
	mv	a0,a5
	call	neoc_pipe_linked_file_remove
	.loc 2 1987 13
	ld	a5,-56(s0)
	lw	a5,536(a5)
	.loc 2 1987 11
	bne	a5,zero,.L664
	.loc 2 1984 13
	ld	a5,-56(s0)
	mv	a0,a5
	call	neoc_pipe_linked_file_clear_pipe_refs
	.loc 2 1985 13
	ld	a5,-56(s0)
	mv	a0,a5
	call	free_pipe
.L664:
	.loc 2 1990 5 discriminator 1
	ld	a5,-48(s0)
	mv	a0,a5
	call	free_file
	.loc 2 1991 16
	li	a5,0
.L668:
	.loc 2 1992 1
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
	.loc 2 1995 1
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
	.loc 2 1997 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 1999 10
	sw	zero,-20(s0)
	.loc 2 1999 5
	j	.L670
.L671:
	.loc 2 1997 9
	lw	a5,-20(s0)
	li	a1,1
	mv	a0,a5
	call	fs_close
	.loc 2 1999 23 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L670:
	.loc 2 1999 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,31
	ble	a4,a5,.L671
	.loc 2 1999 1
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
	.loc 2 2002 1
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
	.loc 2 2004 5
	addi	a5,s0,-20
	li	a2,4
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2036 10
	sw	zero,-20(s0)
	.loc 2 2036 5
	j	.L673
.L675:
	.loc 2 2034 16
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2034 11
	beq	a5,zero,.L674
	.loc 2 2006 27
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-56(s0)
	add	a4,a4,a5
	.loc 2 2006 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a3,-48(s0)
	add	a5,a3,a5
	.loc 2 2006 27
	ld	a4,0(a4)
	.loc 2 2006 22
	sd	a4,0(a5)
	.loc 2 2007 19
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2007 22
	lw	a4,100(a5)
	.loc 2 2007 28
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	.loc 2 2010 29
	lw	a5,-20(s0)
	slli	a5,a5,3
	ld	a4,-48(s0)
	add	a5,a4,a5
	.loc 2 2010 13
	ld	a5,0(a5)
	ld	a1,-40(s0)
	mv	a0,a5
	call	owner_add
.L674:
	.loc 2 2036 23 discriminator 2
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	sw	a5,-20(s0)
.L673:
	.loc 2 2036 18 discriminator 1
	lw	a4,-20(s0)
	li	a5,31
	ble	a4,a5,.L675
	.loc 2 2013 1
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
	.loc 2 2016 1
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
	.loc 2 2017 1
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
	.loc 2 2020 1
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
	.loc 2 2022 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2057 8
	call	get_current_file_table
	mv	a5,a0
	.loc 2 2057 7 discriminator 1
	sd	a5,-24(s0)
	.loc 2 2059 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L687
	.loc 2 2059 15 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L687
	.loc 2 2060 7
	lw	a5,-40(s0)
	sext.w	a5,a5
	blt	a5,zero,.L688
	.loc 2 2060 15 discriminator 1
	lw	a5,-40(s0)
	sext.w	a4,a5
	li	a5,31
	bgt	a4,a5,.L688
	.loc 2 2061 10
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2061 7
	beq	a5,zero,.L689
	.loc 2 2063 7
	lw	a5,-36(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L690
	.loc 2 2064 10
	ld	a4,-24(s0)
	lw	a5,-40(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2064 7
	beq	a5,zero,.L685
	.loc 2 2063 9
	lw	a5,-40(s0)
	li	a1,0
	mv	a0,a5
	call	fs_close
.L685:
	.loc 2 2064 17 discriminator 1
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a4,a4,a5
	.loc 2 2064 7 discriminator 1
	ld	a3,-24(s0)
	lw	a5,-40(s0)
	slli	a5,a5,3
	add	a5,a3,a5
	.loc 2 2064 17 discriminator 1
	ld	a4,0(a4)
	.loc 2 2064 14 discriminator 1
	sd	a4,0(a5)
	.loc 2 2065 7
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2065 14
	lw	a4,100(a5)
	.loc 2 2065 20
	addiw	a4,a4,1
	sext.w	a4,a4
	sw	a4,100(a5)
	j	.L677
.L687:
	.loc 2 2058 17
	nop
	j	.L677
.L688:
	.loc 2 2059 17
	nop
	j	.L677
.L689:
	.loc 2 2060 17
	nop
	j	.L677
.L690:
	.loc 2 2061 17
	nop
.L677:
	.loc 2 2066 1
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
	.loc 2 2069 1
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
	.loc 2 2072 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2073 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2074 7
	ld	a5,-48(s0)
	bne	a5,zero,.L692
	.loc 2 2072 24
	li	a5,-1
	j	.L698
.L692:
	.loc 2 2074 8 discriminator 1
	call	get_current_file_table
	mv	a5,a0
	.loc 2 2074 7 discriminator 2
	sd	a5,-24(s0)
	.loc 2 2076 7
	lw	a5,-36(s0)
	sext.w	a5,a5
	blt	a5,zero,.L694
	.loc 2 2076 12 discriminator 1
	lw	a5,-36(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L695
.L694:
	.loc 2 2075 24
	li	a5,-1
	j	.L698
.L695:
	.loc 2 2076 9 discriminator 2
	ld	a4,-24(s0)
	lw	a5,-36(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2076 6 discriminator 2
	sd	a5,-32(s0)
	.loc 2 2081 8
	ld	a5,-32(s0)
	.loc 2 2081 7
	beq	a5,zero,.L696
	.loc 2 2081 14 discriminator 1
	ld	a5,-32(s0)
	lw	a5,100(a5)
	.loc 2 2081 10 discriminator 1
	bne	a5,zero,.L697
.L696:
	.loc 2 2077 24
	li	a5,-1
	j	.L698
.L697:
	.loc 2 2081 5 discriminator 2
	li	a2,32
	li	a1,0
	ld	a0,-48(s0)
	call	memset
	.loc 2 2093 15
	ld	a5,-32(s0)
	.loc 2 2093 20
	lhu	a4,8(a5)
	.loc 2 2093 13
	ld	a5,-48(s0)
	sh	a4,0(a5)
	.loc 2 2093 16
	ld	a5,-32(s0)
	.loc 2 2093 21
	lhu	a4,14(a5)
	.loc 2 2093 14
	ld	a5,-48(s0)
	sh	a4,2(a5)
	.loc 2 2093 15
	ld	a5,-32(s0)
	.loc 2 2093 20
	lw	a4,16(a5)
	.loc 2 2093 13
	ld	a5,-48(s0)
	sw	a4,4(a5)
	.loc 2 2094 15
	ld	a5,-32(s0)
	.loc 2 2094 20
	lw	a4,20(a5)
	.loc 2 2094 13
	ld	a5,-48(s0)
	sw	a4,12(a5)
	.loc 2 2094 14
	ld	a5,-32(s0)
	.loc 2 2094 19
	lhu	a4,24(a5)
	.loc 2 2094 12
	ld	a5,-48(s0)
	sh	a4,16(a5)
	.loc 2 2094 14
	ld	a5,-32(s0)
	.loc 2 2094 19
	lhu	a4,26(a5)
	.loc 2 2094 12
	ld	a5,-48(s0)
	sh	a4,18(a5)
	.loc 2 2095 16
	ld	a5,-32(s0)
	.loc 2 2095 21
	lw	a4,28(a5)
	.loc 2 2095 14
	ld	a5,-48(s0)
	sw	a4,20(a5)
	.loc 2 2095 16
	ld	a5,-32(s0)
	.loc 2 2095 21
	lw	a4,32(a5)
	.loc 2 2095 14
	ld	a5,-48(s0)
	sw	a4,24(a5)
	.loc 2 2095 16
	ld	a5,-32(s0)
	.loc 2 2095 21
	lw	a4,36(a5)
	.loc 2 2095 14
	ld	a5,-48(s0)
	sw	a4,28(a5)
	.loc 2 2097 16
	li	a5,0
.L698:
	.loc 2 2098 1
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
	.loc 2 2101 1
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
	.loc 2 2106 5
	addi	a5,s0,-24
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2107 5
	addi	a5,s0,-32
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2108 5
	addi	a5,s0,-40
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2109 5
	addi	a5,s0,-48
	li	a2,8
	li	a1,0
	mv	a0,a5
	call	memset
	.loc 2 2104 7
	lw	a5,-52(s0)
	sext.w	a5,a5
	blt	a5,zero,.L700
	.loc 2 2104 12 discriminator 1
	lw	a5,-52(s0)
	sext.w	a4,a5
	li	a5,31
	ble	a4,a5,.L701
.L700:
	.loc 2 2103 24
	li	a5,-1
	j	.L710
.L701:
	.loc 2 2104 8 discriminator 2
	call	get_current_file_table
	mv	a5,a0
	.loc 2 2104 7 discriminator 3
	sd	a5,-24(s0)
	.loc 2 2105 9
	ld	a4,-24(s0)
	lw	a5,-52(s0)
	slli	a5,a5,3
	add	a5,a4,a5
	ld	a5,0(a5)
	.loc 2 2105 6
	sd	a5,-32(s0)
	.loc 2 2108 8
	ld	a5,-32(s0)
	.loc 2 2108 7
	bne	a5,zero,.L703
	.loc 2 2106 24
	li	a5,-1
	j	.L710
.L703:
	.loc 2 2116 5
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	beq	a4,a5,.L704
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,2
	bgt	a4,a5,.L705
	lw	a5,-56(s0)
	sext.w	a5,a5
	beq	a5,zero,.L706
	lw	a5,-56(s0)
	sext.w	a4,a5
	li	a5,1
	beq	a4,a5,.L707
	j	.L705
.L706:
	.loc 2 2110 13
	sd	zero,-40(s0)
	.loc 2 2110 9
	j	.L708
.L707:
	.loc 2 2111 21
	ld	a5,-32(s0)
	lw	a5,96(a5)
	.loc 2 2111 14
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 2 2111 13
	sd	a5,-40(s0)
	.loc 2 2111 9
	j	.L708
.L704:
	.loc 2 2112 21
	ld	a5,-32(s0)
	.loc 2 2112 26
	lw	a5,16(a5)
	.loc 2 2112 14
	slli	a5,a5,32
	srli	a5,a5,32
	.loc 2 2112 13
	sd	a5,-40(s0)
	.loc 2 2112 9
	j	.L708
.L705:
	.loc 2 2113 24
	li	a5,-1
	j	.L710
.L708:
	.loc 2 2116 16
	ld	a4,-40(s0)
	ld	a5,-64(s0)
	add	a5,a4,a5
	.loc 2 2116 11
	sd	a5,-48(s0)
	.loc 2 2119 14
	ld	a5,-48(s0)
	.loc 2 2119 7
	bge	a5,zero,.L709
	.loc 2 2117 24
	li	a5,-1
	j	.L710
.L709:
	.loc 2 2119 12 discriminator 1
	ld	a4,-48(s0)
	.loc 2 2119 6 discriminator 1
	ld	a5,-32(s0)
	.loc 2 2119 12 discriminator 1
	sext.w	a4,a4
	.loc 2 2119 11 discriminator 1
	sw	a4,96(a5)
	.loc 2 2120 23
	ld	a5,-32(s0)
	lw	a5,96(a5)
	.loc 2 2120 16
	slli	a5,a5,32
	srli	a5,a5,32
.L710:
	.loc 2 2121 1
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
.LC0:
	.dword	4835703278458516699
	.text
.Letext0:
	.file 3 "fs_neoc.c"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x375e
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x27
	.4byte	.LASF353
	.byte	0x1d
	.byte	0x3
	.4byte	0x31647
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x12
	.byte	0x1
	.byte	0x8
	.4byte	.LASF2
	.uleb128 0x1d
	.4byte	0x33
	.uleb128 0x12
	.byte	0x2
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x28
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1e
	.4byte	0x46
	.uleb128 0x12
	.byte	0x8
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x12
	.byte	0x1
	.byte	0x8
	.4byte	.LASF5
	.uleb128 0x1e
	.4byte	0x59
	.uleb128 0x1d
	.4byte	0x59
	.uleb128 0x12
	.byte	0x2
	.byte	0x7
	.4byte	.LASF6
	.uleb128 0x12
	.byte	0x4
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x12
	.byte	0x8
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0xb
	.4byte	0x78
	.uleb128 0x12
	.byte	0x8
	.byte	0x5
	.4byte	.LASF9
	.uleb128 0x12
	.byte	0x10
	.byte	0x4
	.4byte	.LASF10
	.uleb128 0x18
	.4byte	.LASF18
	.byte	0x1c
	.byte	0x6b
	.4byte	0xf2
	.uleb128 0xa
	.4byte	.LASF11
	.byte	0x6d
	.byte	0x13
	.4byte	0x71
	.byte	0
	.uleb128 0xa
	.4byte	.LASF12
	.byte	0x6e
	.byte	0x13
	.4byte	0x71
	.byte	0x4
	.uleb128 0xa
	.4byte	.LASF13
	.byte	0x6f
	.byte	0x13
	.4byte	0x71
	.byte	0x8
	.uleb128 0xa
	.4byte	.LASF14
	.byte	0x70
	.byte	0x13
	.4byte	0x71
	.byte	0xc
	.uleb128 0xa
	.4byte	.LASF15
	.byte	0x71
	.byte	0x13
	.4byte	0x71
	.byte	0x10
	.uleb128 0xa
	.4byte	.LASF16
	.byte	0x72
	.byte	0x13
	.4byte	0x71
	.byte	0x14
	.uleb128 0xa
	.4byte	.LASF17
	.byte	0x73
	.byte	0x13
	.4byte	0x71
	.byte	0x18
	.byte	0
	.uleb128 0x18
	.4byte	.LASF19
	.byte	0x58
	.byte	0x76
	.4byte	0x18c
	.uleb128 0xa
	.4byte	.LASF20
	.byte	0x78
	.byte	0x19
	.4byte	0x6a
	.byte	0
	.uleb128 0xa
	.4byte	.LASF21
	.byte	0x79
	.byte	0x19
	.4byte	0x6a
	.byte	0x2
	.uleb128 0xa
	.4byte	.LASF22
	.byte	0x7a
	.byte	0x19
	.4byte	0x6a
	.byte	0x4
	.uleb128 0xa
	.4byte	.LASF23
	.byte	0x7b
	.byte	0x19
	.4byte	0x6a
	.byte	0x6
	.uleb128 0xa
	.4byte	.LASF11
	.byte	0x7c
	.byte	0x13
	.4byte	0x71
	.byte	0x8
	.uleb128 0xa
	.4byte	.LASF24
	.byte	0x7d
	.byte	0x13
	.4byte	0x71
	.byte	0xc
	.uleb128 0x19
	.string	"uid"
	.byte	0x7e
	.4byte	0x6a
	.byte	0x10
	.uleb128 0x19
	.string	"gid"
	.byte	0x7f
	.4byte	0x6a
	.byte	0x12
	.uleb128 0xa
	.4byte	.LASF25
	.byte	0x80
	.byte	0x13
	.4byte	0x71
	.byte	0x14
	.uleb128 0xa
	.4byte	.LASF26
	.byte	0x81
	.byte	0x13
	.4byte	0x71
	.byte	0x18
	.uleb128 0xa
	.4byte	.LASF27
	.byte	0x82
	.byte	0x13
	.4byte	0x71
	.byte	0x1c
	.uleb128 0xa
	.4byte	.LASF28
	.byte	0x83
	.byte	0x13
	.4byte	0x191
	.byte	0x20
	.byte	0
	.uleb128 0x1d
	.4byte	0xf2
	.uleb128 0xc
	.4byte	0x71
	.4byte	0x1a1
	.uleb128 0x10
	.4byte	0x78
	.byte	0xd
	.byte	0
	.uleb128 0x18
	.4byte	.LASF29
	.byte	0x10
	.byte	0x86
	.4byte	0x1c5
	.uleb128 0xa
	.4byte	.LASF30
	.byte	0x88
	.byte	0x19
	.4byte	0x6a
	.byte	0
	.uleb128 0xa
	.4byte	.LASF31
	.byte	0x89
	.byte	0xa
	.4byte	0x1c5
	.byte	0x2
	.byte	0
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x1d5
	.uleb128 0x10
	.4byte	0x78
	.byte	0xd
	.byte	0
	.uleb128 0x18
	.4byte	.LASF32
	.byte	0x20
	.byte	0x8c
	.4byte	0x257
	.uleb128 0xa
	.4byte	.LASF20
	.byte	0x8e
	.byte	0x19
	.4byte	0x6a
	.byte	0
	.uleb128 0xa
	.4byte	.LASF23
	.byte	0x8f
	.byte	0x19
	.4byte	0x6a
	.byte	0x2
	.uleb128 0xa
	.4byte	.LASF11
	.byte	0x90
	.byte	0x13
	.4byte	0x71
	.byte	0x4
	.uleb128 0xa
	.4byte	.LASF30
	.byte	0x91
	.byte	0x13
	.4byte	0x71
	.byte	0x8
	.uleb128 0xa
	.4byte	.LASF24
	.byte	0x92
	.byte	0x13
	.4byte	0x71
	.byte	0xc
	.uleb128 0x19
	.string	"uid"
	.byte	0x93
	.4byte	0x6a
	.byte	0x10
	.uleb128 0x19
	.string	"gid"
	.byte	0x94
	.4byte	0x6a
	.byte	0x12
	.uleb128 0xa
	.4byte	.LASF25
	.byte	0x95
	.byte	0x13
	.4byte	0x71
	.byte	0x14
	.uleb128 0xa
	.4byte	.LASF26
	.byte	0x96
	.byte	0x13
	.4byte	0x71
	.byte	0x18
	.uleb128 0xa
	.4byte	.LASF27
	.byte	0x97
	.byte	0x13
	.4byte	0x71
	.byte	0x1c
	.byte	0
	.uleb128 0xb
	.4byte	0x25c
	.uleb128 0xb
	.4byte	0x33
	.uleb128 0xb
	.4byte	0x3a
	.uleb128 0x1a
	.4byte	.LASF33
	.2byte	0x100
	.2byte	0x143
	.4byte	0x3f7
	.uleb128 0x6
	.string	"ra"
	.2byte	0x145
	.byte	0x19
	.4byte	0x78
	.byte	0
	.uleb128 0x6
	.string	"sp"
	.2byte	0x146
	.byte	0x19
	.4byte	0x78
	.byte	0x8
	.uleb128 0x6
	.string	"gp"
	.2byte	0x147
	.byte	0x19
	.4byte	0x78
	.byte	0x10
	.uleb128 0x6
	.string	"tp"
	.2byte	0x148
	.byte	0x19
	.4byte	0x78
	.byte	0x18
	.uleb128 0x6
	.string	"t0"
	.2byte	0x149
	.byte	0x19
	.4byte	0x78
	.byte	0x20
	.uleb128 0x6
	.string	"t1"
	.2byte	0x14a
	.byte	0x19
	.4byte	0x78
	.byte	0x28
	.uleb128 0x6
	.string	"t2"
	.2byte	0x14b
	.byte	0x19
	.4byte	0x78
	.byte	0x30
	.uleb128 0x6
	.string	"t3"
	.2byte	0x14c
	.byte	0x19
	.4byte	0x78
	.byte	0x38
	.uleb128 0x6
	.string	"t4"
	.2byte	0x14d
	.byte	0x19
	.4byte	0x78
	.byte	0x40
	.uleb128 0x6
	.string	"t5"
	.2byte	0x14e
	.byte	0x19
	.4byte	0x78
	.byte	0x48
	.uleb128 0x6
	.string	"t6"
	.2byte	0x14f
	.byte	0x19
	.4byte	0x78
	.byte	0x50
	.uleb128 0x6
	.string	"a0"
	.2byte	0x150
	.byte	0x19
	.4byte	0x78
	.byte	0x58
	.uleb128 0x6
	.string	"a1"
	.2byte	0x151
	.byte	0x19
	.4byte	0x78
	.byte	0x60
	.uleb128 0x6
	.string	"a2"
	.2byte	0x152
	.byte	0x19
	.4byte	0x78
	.byte	0x68
	.uleb128 0x6
	.string	"a3"
	.2byte	0x153
	.byte	0x19
	.4byte	0x78
	.byte	0x70
	.uleb128 0x6
	.string	"a4"
	.2byte	0x154
	.byte	0x19
	.4byte	0x78
	.byte	0x78
	.uleb128 0x6
	.string	"a5"
	.2byte	0x155
	.byte	0x19
	.4byte	0x78
	.byte	0x80
	.uleb128 0x6
	.string	"a6"
	.2byte	0x156
	.byte	0x19
	.4byte	0x78
	.byte	0x88
	.uleb128 0x6
	.string	"a7"
	.2byte	0x157
	.byte	0x19
	.4byte	0x78
	.byte	0x90
	.uleb128 0x6
	.string	"s0"
	.2byte	0x158
	.byte	0x19
	.4byte	0x78
	.byte	0x98
	.uleb128 0x6
	.string	"s1"
	.2byte	0x159
	.byte	0x19
	.4byte	0x78
	.byte	0xa0
	.uleb128 0x6
	.string	"s2"
	.2byte	0x15a
	.byte	0x19
	.4byte	0x78
	.byte	0xa8
	.uleb128 0x6
	.string	"s3"
	.2byte	0x15b
	.byte	0x19
	.4byte	0x78
	.byte	0xb0
	.uleb128 0x6
	.string	"s4"
	.2byte	0x15c
	.byte	0x19
	.4byte	0x78
	.byte	0xb8
	.uleb128 0x6
	.string	"s5"
	.2byte	0x15d
	.byte	0x19
	.4byte	0x78
	.byte	0xc0
	.uleb128 0x6
	.string	"s6"
	.2byte	0x15e
	.byte	0x19
	.4byte	0x78
	.byte	0xc8
	.uleb128 0x6
	.string	"s7"
	.2byte	0x15f
	.byte	0x19
	.4byte	0x78
	.byte	0xd0
	.uleb128 0x6
	.string	"s8"
	.2byte	0x160
	.byte	0x19
	.4byte	0x78
	.byte	0xd8
	.uleb128 0x6
	.string	"s9"
	.2byte	0x161
	.byte	0x19
	.4byte	0x78
	.byte	0xe0
	.uleb128 0x6
	.string	"s10"
	.2byte	0x162
	.byte	0x19
	.4byte	0x78
	.byte	0xe8
	.uleb128 0x6
	.string	"s11"
	.2byte	0x163
	.byte	0x19
	.4byte	0x78
	.byte	0xf0
	.uleb128 0x9
	.4byte	.LASF34
	.2byte	0x164
	.byte	0x19
	.4byte	0x78
	.byte	0xf8
	.byte	0
	.uleb128 0x17
	.4byte	.LASF35
	.byte	0x18
	.2byte	0x171
	.4byte	0x42b
	.uleb128 0x9
	.4byte	.LASF36
	.2byte	0x173
	.byte	0xc
	.4byte	0x257
	.byte	0
	.uleb128 0x9
	.4byte	.LASF37
	.2byte	0x174
	.byte	0x9
	.4byte	0x46
	.byte	0x8
	.uleb128 0x9
	.4byte	.LASF38
	.2byte	0x175
	.byte	0xb
	.4byte	0x42b
	.byte	0x10
	.byte	0
	.uleb128 0x29
	.byte	0x8
	.uleb128 0x1a
	.4byte	.LASF39
	.2byte	0x430
	.2byte	0x178
	.4byte	0x5c1
	.uleb128 0x9
	.4byte	.LASF40
	.2byte	0x17a
	.byte	0x17
	.4byte	0x266
	.byte	0
	.uleb128 0x7
	.4byte	.LASF41
	.2byte	0x17b
	.byte	0x17
	.4byte	0x266
	.2byte	0x100
	.uleb128 0x7
	.4byte	.LASF42
	.2byte	0x17c
	.byte	0x13
	.4byte	0x5c1
	.2byte	0x200
	.uleb128 0x7
	.4byte	.LASF43
	.2byte	0x17d
	.byte	0x9
	.4byte	0x46
	.2byte	0x208
	.uleb128 0x7
	.4byte	.LASF44
	.2byte	0x17e
	.byte	0xb
	.4byte	0x25c
	.2byte	0x210
	.uleb128 0x7
	.4byte	.LASF45
	.2byte	0x17f
	.byte	0x19
	.4byte	0x78
	.2byte	0x218
	.uleb128 0x7
	.4byte	.LASF46
	.2byte	0x180
	.byte	0x19
	.4byte	0x78
	.2byte	0x220
	.uleb128 0x1b
	.string	"sz"
	.2byte	0x181
	.byte	0x19
	.4byte	0x78
	.2byte	0x228
	.uleb128 0x7
	.4byte	.LASF47
	.2byte	0x182
	.byte	0x9
	.4byte	0x46
	.2byte	0x230
	.uleb128 0x7
	.4byte	.LASF48
	.2byte	0x183
	.byte	0x1a
	.4byte	0x7f
	.2byte	0x238
	.uleb128 0x7
	.4byte	.LASF49
	.2byte	0x184
	.byte	0xb
	.4byte	0x25c
	.2byte	0x240
	.uleb128 0x7
	.4byte	.LASF50
	.2byte	0x185
	.byte	0x9
	.4byte	0x46
	.2byte	0x248
	.uleb128 0x7
	.4byte	.LASF51
	.2byte	0x186
	.byte	0x9
	.4byte	0x46
	.2byte	0x24c
	.uleb128 0x7
	.4byte	.LASF52
	.2byte	0x187
	.byte	0x13
	.4byte	0x5c6
	.2byte	0x250
	.uleb128 0x7
	.4byte	.LASF35
	.2byte	0x188
	.byte	0x1d
	.4byte	0x684
	.2byte	0x350
	.uleb128 0x7
	.4byte	.LASF53
	.2byte	0x189
	.byte	0x9
	.4byte	0x46
	.2byte	0x358
	.uleb128 0x7
	.4byte	.LASF54
	.2byte	0x18a
	.byte	0xb
	.4byte	0x42b
	.2byte	0x360
	.uleb128 0x7
	.4byte	.LASF55
	.2byte	0x18b
	.byte	0x9
	.4byte	0x46
	.2byte	0x368
	.uleb128 0x7
	.4byte	.LASF56
	.2byte	0x18c
	.byte	0x9
	.4byte	0x46
	.2byte	0x36c
	.uleb128 0x7
	.4byte	.LASF57
	.2byte	0x18d
	.byte	0x13
	.4byte	0x5c1
	.2byte	0x370
	.uleb128 0x1b
	.string	"cwd"
	.2byte	0x18e
	.byte	0xa
	.4byte	0x68e
	.2byte	0x378
	.uleb128 0x7
	.4byte	.LASF58
	.2byte	0x18f
	.byte	0x18
	.4byte	0x6a
	.2byte	0x3f8
	.uleb128 0x1b
	.string	"uid"
	.2byte	0x190
	.byte	0x19
	.4byte	0x6a
	.2byte	0x3fa
	.uleb128 0x1b
	.string	"gid"
	.2byte	0x191
	.byte	0x19
	.4byte	0x6a
	.2byte	0x3fc
	.uleb128 0x7
	.4byte	.LASF59
	.2byte	0x192
	.byte	0x19
	.4byte	0x6a
	.2byte	0x3fe
	.uleb128 0x7
	.4byte	.LASF60
	.2byte	0x193
	.byte	0x9
	.4byte	0x46
	.2byte	0x400
	.uleb128 0x7
	.4byte	.LASF61
	.2byte	0x194
	.byte	0xb
	.4byte	0x42b
	.2byte	0x408
	.uleb128 0x7
	.4byte	.LASF62
	.2byte	0x195
	.byte	0xa
	.4byte	0x69e
	.2byte	0x410
	.byte	0
	.uleb128 0xb
	.4byte	0x42d
	.uleb128 0xc
	.4byte	0x5d6
	.4byte	0x5d6
	.uleb128 0x10
	.4byte	0x78
	.byte	0x1f
	.byte	0
	.uleb128 0xb
	.4byte	0x5db
	.uleb128 0x17
	.4byte	.LASF63
	.byte	0x90
	.2byte	0x1ae
	.4byte	0x684
	.uleb128 0x9
	.4byte	.LASF64
	.2byte	0x1b0
	.byte	0x1b
	.4byte	0x756
	.byte	0
	.uleb128 0x9
	.4byte	.LASF30
	.2byte	0x1b1
	.byte	0x13
	.4byte	0x71
	.byte	0x4
	.uleb128 0x6
	.string	"din"
	.2byte	0x1b2
	.byte	0x14
	.4byte	0xf2
	.byte	0x8
	.uleb128 0x6
	.string	"off"
	.2byte	0x1b3
	.byte	0x13
	.4byte	0x71
	.byte	0x60
	.uleb128 0x9
	.4byte	.LASF65
	.2byte	0x1b4
	.byte	0x9
	.4byte	0x46
	.byte	0x64
	.uleb128 0x9
	.4byte	.LASF66
	.2byte	0x1b5
	.byte	0x14
	.4byte	0x78e
	.byte	0x68
	.uleb128 0x9
	.4byte	.LASF67
	.2byte	0x1b6
	.byte	0x9
	.4byte	0x46
	.byte	0x70
	.uleb128 0x9
	.4byte	.LASF68
	.2byte	0x1b7
	.byte	0x9
	.4byte	0x46
	.byte	0x74
	.uleb128 0x9
	.4byte	.LASF69
	.2byte	0x1b8
	.byte	0x9
	.4byte	0x46
	.byte	0x78
	.uleb128 0x9
	.4byte	.LASF70
	.2byte	0x1b9
	.byte	0x9
	.4byte	0x46
	.byte	0x7c
	.uleb128 0x9
	.4byte	.LASF71
	.2byte	0x1ba
	.byte	0x9
	.4byte	0x46
	.byte	0x80
	.uleb128 0x9
	.4byte	.LASF72
	.2byte	0x1bb
	.byte	0xb
	.4byte	0x42b
	.byte	0x88
	.byte	0
	.uleb128 0xb
	.4byte	0x689
	.uleb128 0xb
	.4byte	0x3f7
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x69e
	.uleb128 0x10
	.4byte	0x78
	.byte	0x7f
	.byte	0
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x6ae
	.uleb128 0x10
	.4byte	0x78
	.byte	0x1f
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF73
	.2byte	0x228
	.2byte	0x198
	.4byte	0x747
	.uleb128 0x9
	.4byte	.LASF74
	.2byte	0x19a
	.byte	0xa
	.4byte	0x747
	.byte	0
	.uleb128 0x7
	.4byte	.LASF75
	.2byte	0x19b
	.byte	0x13
	.4byte	0x71
	.2byte	0x200
	.uleb128 0x7
	.4byte	.LASF76
	.2byte	0x19c
	.byte	0x13
	.4byte	0x71
	.2byte	0x204
	.uleb128 0x7
	.4byte	.LASF77
	.2byte	0x19d
	.byte	0x9
	.4byte	0x46
	.2byte	0x208
	.uleb128 0x7
	.4byte	.LASF78
	.2byte	0x19e
	.byte	0x9
	.4byte	0x46
	.2byte	0x20c
	.uleb128 0x7
	.4byte	.LASF79
	.2byte	0x19f
	.byte	0x9
	.4byte	0x46
	.2byte	0x210
	.uleb128 0x7
	.4byte	.LASF80
	.2byte	0x1a0
	.byte	0x9
	.4byte	0x46
	.2byte	0x214
	.uleb128 0x7
	.4byte	.LASF65
	.2byte	0x1a1
	.byte	0x9
	.4byte	0x46
	.2byte	0x218
	.uleb128 0x7
	.4byte	.LASF81
	.2byte	0x1a2
	.byte	0x9
	.4byte	0x46
	.2byte	0x21c
	.uleb128 0x7
	.4byte	.LASF82
	.2byte	0x1a3
	.byte	0xb
	.4byte	0x42b
	.2byte	0x220
	.byte	0
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x756
	.uleb128 0x1f
	.4byte	0x78
	.byte	0
	.uleb128 0x2a
	.4byte	.LASF354
	.byte	0x7
	.byte	0x4
	.4byte	0x71
	.byte	0x3
	.2byte	0x1a6
	.byte	0x7
	.4byte	0x78e
	.uleb128 0x14
	.4byte	.LASF83
	.byte	0
	.uleb128 0x14
	.4byte	.LASF84
	.byte	0x1
	.uleb128 0x14
	.4byte	.LASF85
	.byte	0x2
	.uleb128 0x14
	.4byte	.LASF86
	.byte	0x3
	.uleb128 0x14
	.4byte	.LASF87
	.byte	0x4
	.uleb128 0x14
	.4byte	.LASF88
	.byte	0x5
	.byte	0
	.uleb128 0xb
	.4byte	0x6ae
	.uleb128 0x17
	.4byte	.LASF89
	.byte	0x10
	.2byte	0x1be
	.4byte	0x7d4
	.uleb128 0x9
	.4byte	.LASF90
	.2byte	0x1c0
	.byte	0x19
	.4byte	0x78
	.byte	0
	.uleb128 0x6
	.string	"len"
	.2byte	0x1c1
	.byte	0x13
	.4byte	0x71
	.byte	0x8
	.uleb128 0x9
	.4byte	.LASF91
	.2byte	0x1c2
	.byte	0x19
	.4byte	0x6a
	.byte	0xc
	.uleb128 0x9
	.4byte	.LASF57
	.2byte	0x1c3
	.byte	0x19
	.4byte	0x6a
	.byte	0xe
	.byte	0
	.uleb128 0x21
	.4byte	.LASF94
	.byte	0x2
	.2byte	0x1c6
	.4byte	0x808
	.uleb128 0x9
	.4byte	.LASF91
	.2byte	0x1c8
	.byte	0x19
	.4byte	0x6a
	.byte	0
	.uleb128 0x6
	.string	"idx"
	.2byte	0x1c9
	.byte	0x19
	.4byte	0x6a
	.byte	0x2
	.uleb128 0x9
	.4byte	.LASF92
	.2byte	0x1ca
	.byte	0x19
	.4byte	0x808
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x6a
	.4byte	0x817
	.uleb128 0x22
	.4byte	0x78
	.byte	0
	.uleb128 0x17
	.4byte	.LASF93
	.byte	0x8
	.2byte	0x1cd
	.4byte	0x83d
	.uleb128 0x6
	.string	"id"
	.2byte	0x1cf
	.byte	0x13
	.4byte	0x71
	.byte	0
	.uleb128 0x6
	.string	"len"
	.2byte	0x1d0
	.byte	0x13
	.4byte	0x71
	.byte	0x4
	.byte	0
	.uleb128 0x21
	.4byte	.LASF95
	.byte	0x4
	.2byte	0x1d3
	.4byte	0x871
	.uleb128 0x9
	.4byte	.LASF91
	.2byte	0x1d5
	.byte	0x19
	.4byte	0x6a
	.byte	0
	.uleb128 0x6
	.string	"idx"
	.2byte	0x1d6
	.byte	0x19
	.4byte	0x6a
	.byte	0x2
	.uleb128 0x9
	.4byte	.LASF92
	.2byte	0x1d7
	.byte	0x1d
	.4byte	0x871
	.byte	0x4
	.byte	0
	.uleb128 0xc
	.4byte	0x817
	.4byte	0x880
	.uleb128 0x22
	.4byte	0x78
	.byte	0
	.uleb128 0x17
	.4byte	.LASF96
	.byte	0x10
	.2byte	0x1da
	.4byte	0x8b4
	.uleb128 0x9
	.4byte	.LASF20
	.2byte	0x1dc
	.byte	0x13
	.4byte	0x71
	.byte	0
	.uleb128 0x9
	.4byte	.LASF97
	.2byte	0x1dd
	.byte	0x13
	.4byte	0x71
	.byte	0x4
	.uleb128 0x9
	.4byte	.LASF98
	.2byte	0x1de
	.byte	0x19
	.4byte	0x78
	.byte	0x8
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF99
	.2byte	0x210
	.2byte	0x1e1
	.4byte	0x906
	.uleb128 0x9
	.4byte	.LASF100
	.2byte	0x1e3
	.byte	0x13
	.4byte	0x71
	.byte	0
	.uleb128 0x9
	.4byte	.LASF74
	.2byte	0x1e4
	.byte	0x14
	.4byte	0x906
	.byte	0x4
	.uleb128 0x7
	.4byte	.LASF101
	.2byte	0x1e5
	.byte	0x13
	.4byte	0x71
	.2byte	0x204
	.uleb128 0x7
	.4byte	.LASF102
	.2byte	0x1e6
	.byte	0x13
	.4byte	0x71
	.2byte	0x208
	.uleb128 0x7
	.4byte	.LASF103
	.2byte	0x1e7
	.byte	0x13
	.4byte	0x71
	.2byte	0x20c
	.byte	0
	.uleb128 0xc
	.4byte	0x59
	.4byte	0x915
	.uleb128 0x1f
	.4byte	0x78
	.byte	0
	.uleb128 0x1
	.4byte	.LASF104
	.byte	0x3
	.2byte	0x1fc
	.byte	0x1c
	.4byte	0x78
	.uleb128 0x9
	.byte	0x3
	.8byte	vbase
	.uleb128 0x2
	.string	"Q"
	.byte	0x3
	.2byte	0x1fd
	.byte	0x16
	.4byte	0x71
	.uleb128 0x9
	.byte	0x3
	.8byte	Q
	.uleb128 0x1
	.4byte	.LASF105
	.byte	0x3
	.2byte	0x1fe
	.byte	0x1c
	.4byte	0x958
	.uleb128 0x9
	.byte	0x3
	.8byte	desc
	.uleb128 0xb
	.4byte	0x793
	.uleb128 0x1
	.4byte	.LASF106
	.byte	0x3
	.2byte	0x1ff
	.byte	0x1d
	.4byte	0x974
	.uleb128 0x9
	.byte	0x3
	.8byte	avail
	.uleb128 0xb
	.4byte	0x7d4
	.uleb128 0x1
	.4byte	.LASF65
	.byte	0x3
	.2byte	0x200
	.byte	0x1c
	.4byte	0x990
	.uleb128 0x9
	.byte	0x3
	.8byte	used
	.uleb128 0xb
	.4byte	0x83d
	.uleb128 0x1
	.4byte	.LASF107
	.byte	0x3
	.2byte	0x201
	.byte	0x18
	.4byte	0x9ac
	.uleb128 0x9
	.byte	0x3
	.8byte	vq_area
	.uleb128 0xb
	.4byte	0x59
	.uleb128 0x1
	.4byte	.LASF108
	.byte	0x3
	.2byte	0x202
	.byte	0x1c
	.4byte	0x6a
	.uleb128 0x9
	.byte	0x3
	.8byte	aidx
	.uleb128 0x2b
	.4byte	.LASF109
	.byte	0x3
	.2byte	0x203
	.byte	0x20
	.4byte	0x60
	.byte	0x4
	.uleb128 0x9
	.byte	0x3
	.8byte	status_byte
	.uleb128 0xc
	.4byte	0x60
	.4byte	0x9ef
	.uleb128 0x1f
	.4byte	0x78
	.byte	0
	.uleb128 0x1e
	.4byte	0x9e0
	.uleb128 0x2c
	.4byte	.LASF110
	.byte	0x3
	.2byte	0x204
	.byte	0x20
	.4byte	0x9ef
	.2byte	0x200
	.uleb128 0x9
	.byte	0x3
	.8byte	dma_buf
	.uleb128 0x2
	.string	"req"
	.byte	0x3
	.2byte	0x205
	.byte	0x1f
	.4byte	0x880
	.uleb128 0x9
	.byte	0x3
	.8byte	req
	.uleb128 0xc
	.4byte	0x8b4
	.4byte	0xa34
	.uleb128 0x10
	.4byte	0x78
	.byte	0x1f
	.byte	0
	.uleb128 0x1
	.4byte	.LASF111
	.byte	0x3
	.2byte	0x206
	.byte	0x1d
	.4byte	0xa24
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache
	.uleb128 0x1
	.4byte	.LASF112
	.byte	0x3
	.2byte	0x207
	.byte	0x16
	.4byte	0x71
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_time
	.uleb128 0x1
	.4byte	.LASF113
	.byte	0x3
	.2byte	0x208
	.byte	0x16
	.4byte	0x71
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_hits
	.uleb128 0x1
	.4byte	.LASF114
	.byte	0x3
	.2byte	0x209
	.byte	0x16
	.4byte	0x71
	.uleb128 0x9
	.byte	0x3
	.8byte	bcache_misses
	.uleb128 0x2
	.string	"sb"
	.byte	0x3
	.2byte	0x20a
	.byte	0x1b
	.4byte	0x92
	.uleb128 0x9
	.byte	0x3
	.8byte	sb
	.uleb128 0x1
	.4byte	.LASF115
	.byte	0x3
	.2byte	0x20b
	.byte	0x17
	.4byte	0x906
	.uleb128 0x9
	.byte	0x3
	.8byte	block_buf
	.uleb128 0x23
	.4byte	.LASF116
	.2byte	0x20c
	.byte	0x16
	.4byte	0x71
	.uleb128 0x23
	.4byte	.LASF117
	.2byte	0x20d
	.byte	0xc
	.4byte	0x46
	.uleb128 0x11
	.4byte	.LASF118
	.2byte	0x262
	.4byte	0xae6
	.uleb128 0x5
	.4byte	0x78e
	.byte	0
	.uleb128 0x11
	.4byte	.LASF119
	.2byte	0x261
	.4byte	0xafc
	.uleb128 0x5
	.4byte	0x78e
	.uleb128 0x5
	.4byte	0x5d6
	.byte	0
	.uleb128 0xf
	.4byte	.LASF134
	.2byte	0x281
	.byte	0x7
	.4byte	0xb12
	.4byte	0xb12
	.uleb128 0x5
	.4byte	0x71
	.byte	0
	.uleb128 0x12
	.byte	0x1
	.byte	0x2
	.4byte	.LASF120
	.uleb128 0x24
	.4byte	.LASF130
	.2byte	0x307
	.uleb128 0x11
	.4byte	.LASF121
	.2byte	0x306
	.4byte	0xb31
	.uleb128 0x5
	.4byte	0x25c
	.byte	0
	.uleb128 0x11
	.4byte	.LASF122
	.2byte	0x260
	.4byte	0xb47
	.uleb128 0x5
	.4byte	0x78e
	.uleb128 0x5
	.4byte	0x5d6
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF125
	.2byte	0x276
	.byte	0x10
	.4byte	0xb53
	.uleb128 0xb
	.4byte	0x5d6
	.uleb128 0x11
	.4byte	.LASF123
	.2byte	0x272
	.4byte	0xb69
	.uleb128 0x5
	.4byte	0x5d6
	.byte	0
	.uleb128 0x11
	.4byte	.LASF124
	.2byte	0x25c
	.4byte	0xb7a
	.uleb128 0x5
	.4byte	0x5d6
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF126
	.2byte	0x271
	.byte	0xf
	.4byte	0x5d6
	.uleb128 0x11
	.4byte	.LASF127
	.2byte	0x270
	.4byte	0xb97
	.uleb128 0x5
	.4byte	0x78e
	.byte	0
	.uleb128 0x11
	.4byte	.LASF128
	.2byte	0x25f
	.4byte	0xba8
	.uleb128 0x5
	.4byte	0x78e
	.byte	0
	.uleb128 0x1c
	.4byte	.LASF129
	.2byte	0x26f
	.byte	0x10
	.4byte	0x78e
	.uleb128 0x24
	.4byte	.LASF131
	.2byte	0x26e
	.uleb128 0x11
	.4byte	.LASF132
	.2byte	0x25e
	.4byte	0xbd1
	.uleb128 0x5
	.4byte	0x5d6
	.uleb128 0x5
	.4byte	0x5c1
	.byte	0
	.uleb128 0x11
	.4byte	.LASF133
	.2byte	0x25d
	.4byte	0xbe7
	.uleb128 0x5
	.4byte	0x5d6
	.uleb128 0x5
	.4byte	0x5c1
	.byte	0
	.uleb128 0xf
	.4byte	.LASF135
	.2byte	0x2d5
	.byte	0x7
	.4byte	0x25c
	.4byte	0xc07
	.uleb128 0x5
	.4byte	0x25c
	.uleb128 0x5
	.4byte	0x261
	.uleb128 0x5
	.4byte	0x78
	.byte	0
	.uleb128 0xf
	.4byte	.LASF136
	.2byte	0x2d3
	.byte	0x5
	.4byte	0x46
	.4byte	0xc1d
	.uleb128 0x5
	.4byte	0x261
	.byte	0
	.uleb128 0xf
	.4byte	.LASF137
	.2byte	0x2d7
	.byte	0x7
	.4byte	0x25c
	.4byte	0xc38
	.uleb128 0x5
	.4byte	0x25c
	.uleb128 0x5
	.4byte	0x261
	.byte	0
	.uleb128 0xf
	.4byte	.LASF138
	.2byte	0x2d6
	.byte	0x7
	.4byte	0x25c
	.4byte	0xc58
	.uleb128 0x5
	.4byte	0x25c
	.uleb128 0x5
	.4byte	0x261
	.uleb128 0x5
	.4byte	0x46
	.byte	0
	.uleb128 0xf
	.4byte	.LASF139
	.2byte	0x2d9
	.byte	0x5
	.4byte	0x46
	.4byte	0xc73
	.uleb128 0x5
	.4byte	0x261
	.uleb128 0x5
	.4byte	0x261
	.byte	0
	.uleb128 0xf
	.4byte	.LASF140
	.2byte	0x2da
	.byte	0x5
	.4byte	0x46
	.4byte	0xc93
	.uleb128 0x5
	.4byte	0x261
	.uleb128 0x5
	.4byte	0x261
	.uleb128 0x5
	.4byte	0x71
	.byte	0
	.uleb128 0xf
	.4byte	.LASF141
	.2byte	0x26d
	.byte	0x5
	.4byte	0x46
	.4byte	0xcae
	.uleb128 0x5
	.4byte	0x5c1
	.uleb128 0x5
	.4byte	0x6a
	.byte	0
	.uleb128 0xf
	.4byte	.LASF142
	.2byte	0x277
	.byte	0xf
	.4byte	0x5c1
	.4byte	0xcc4
	.uleb128 0x5
	.4byte	0x46
	.byte	0
	.uleb128 0xf
	.4byte	.LASF143
	.2byte	0x2d4
	.byte	0x5
	.4byte	0x46
	.4byte	0xcdb
	.uleb128 0x5
	.4byte	0x261
	.uleb128 0x2d
	.byte	0
	.uleb128 0xf
	.4byte	.LASF144
	.2byte	0x2d2
	.byte	0x7
	.4byte	0x42b
	.4byte	0xcfb
	.uleb128 0x5
	.4byte	0x42b
	.uleb128 0x5
	.4byte	0xcfb
	.uleb128 0x5
	.4byte	0x71
	.byte	0
	.uleb128 0xb
	.4byte	0xd00
	.uleb128 0x2e
	.uleb128 0x1c
	.4byte	.LASF145
	.2byte	0x2ce
	.byte	0x7
	.4byte	0x42b
	.uleb128 0x11
	.4byte	.LASF146
	.2byte	0x2d8
	.4byte	0xd1e
	.uleb128 0x5
	.4byte	0x261
	.byte	0
	.uleb128 0xf
	.4byte	.LASF147
	.2byte	0x2d1
	.byte	0x7
	.4byte	0x42b
	.4byte	0xd3e
	.uleb128 0x5
	.4byte	0x42b
	.uleb128 0x5
	.4byte	0x46
	.uleb128 0x5
	.4byte	0x71
	.byte	0
	.uleb128 0x8
	.4byte	.LASF152
	.2byte	0x834
	.byte	0x6
	.4byte	0x52
	.8byte	.LFB85
	.8byte	.LFE85-.LFB85
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdcb
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x834
	.byte	0x13
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF148
	.2byte	0x834
	.byte	0x1c
	.4byte	0x52
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x3
	.4byte	.LASF149
	.2byte	0x834
	.byte	0x28
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.string	"ft"
	.byte	0x2
	.2byte	0x836
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"f"
	.byte	0x2
	.2byte	0x837
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF150
	.byte	0x2
	.2byte	0x838
	.byte	0xa
	.4byte	0x52
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF151
	.byte	0x2
	.2byte	0x839
	.byte	0xa
	.4byte	0x52
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0x8
	.4byte	.LASF153
	.2byte	0x814
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB84
	.8byte	.LFE84-.LFB84
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe29
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x814
	.byte	0x15
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"st"
	.byte	0x2
	.2byte	0x814
	.byte	0x27
	.4byte	0xe29
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"ft"
	.byte	0x2
	.2byte	0x816
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"f"
	.byte	0x2
	.2byte	0x817
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xb
	.4byte	0x1d5
	.uleb128 0xd
	.4byte	.LASF156
	.2byte	0x7e3
	.8byte	.LFB83
	.8byte	.LFE83-.LFB83
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe79
	.uleb128 0x3
	.4byte	.LASF154
	.2byte	0x7e3
	.byte	0x12
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x3
	.4byte	.LASF155
	.2byte	0x7e3
	.byte	0x1d
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"ft"
	.byte	0x2
	.2byte	0x7e5
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x2f
	.4byte	.LASF157
	.byte	0x2
	.2byte	0x7df
	.byte	0x6
	.8byte	.LFB82
	.8byte	.LFE82-.LFB82
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xea8
	.uleb128 0x3
	.4byte	.LASF52
	.2byte	0x7df
	.byte	0x23
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF158
	.2byte	0x7d1
	.8byte	.LFB81
	.8byte	.LFE81-.LFB81
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf01
	.uleb128 0x3
	.4byte	.LASF159
	.2byte	0x7d1
	.byte	0x21
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x3
	.4byte	.LASF160
	.2byte	0x7d1
	.byte	0x39
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x3
	.4byte	.LASF161
	.2byte	0x7d1
	.byte	0x52
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x7d3
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0xd
	.4byte	.LASF162
	.2byte	0x7ca
	.8byte	.LFB80
	.8byte	.LFE80-.LFB80
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf3c
	.uleb128 0x3
	.4byte	.LASF52
	.2byte	0x7ca
	.byte	0x1d
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x7cc
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x8
	.4byte	.LASF163
	.2byte	0x7a2
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB79
	.8byte	.LFE79-.LFB79
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xfaa
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x7a2
	.byte	0x13
	.4byte	0x52
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF164
	.2byte	0x7a2
	.byte	0x1b
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.string	"ft"
	.byte	0x2
	.2byte	0x7a4
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"f"
	.byte	0x2
	.2byte	0x7a5
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x7a6
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0x8
	.4byte	.LASF165
	.2byte	0x793
	.byte	0x6
	.4byte	0x46
	.8byte	.LFB78
	.8byte	.LFE78-.LFB78
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x100a
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x793
	.byte	0x12
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x795
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"idx"
	.byte	0x2
	.2byte	0x796
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"f"
	.byte	0x2
	.2byte	0x797
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x8
	.4byte	.LASF166
	.2byte	0x75b
	.byte	0x6
	.4byte	0x46
	.8byte	.LFB77
	.8byte	.LFE77-.LFB77
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x113a
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x75b
	.byte	0x13
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -612
	.uleb128 0x4
	.string	"buf"
	.byte	0x2
	.2byte	0x75b
	.byte	0x23
	.4byte	0xcfb
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x3
	.4byte	.LASF167
	.2byte	0x75b
	.byte	0x3c
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -632
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x75d
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"f"
	.byte	0x2
	.2byte	0x75e
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF168
	.byte	0x2
	.2byte	0x75f
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF169
	.byte	0x2
	.2byte	0x760
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x761
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF170
	.byte	0x2
	.2byte	0x762
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF171
	.byte	0x2
	.2byte	0x763
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x1
	.4byte	.LASF172
	.byte	0x2
	.2byte	0x764
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF173
	.byte	0x2
	.2byte	0x765
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.4byte	.LASF174
	.byte	0x2
	.2byte	0x766
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.4byte	.LASF175
	.byte	0x2
	.2byte	0x767
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.string	"src"
	.byte	0x2
	.2byte	0x76a
	.byte	0x1b
	.4byte	0x113a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x30
	.4byte	.LLRL0
	.uleb128 0x1
	.4byte	.LASF176
	.byte	0x2
	.2byte	0x77d
	.byte	0x18
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.byte	0
	.byte	0
	.uleb128 0xb
	.4byte	0x65
	.uleb128 0x8
	.4byte	.LASF177
	.2byte	0x741
	.byte	0x6
	.4byte	0x46
	.8byte	.LFB76
	.8byte	.LFE76-.LFB76
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11e1
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x741
	.byte	0x12
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x4
	.string	"buf"
	.byte	0x2
	.2byte	0x741
	.byte	0x1c
	.4byte	0x42b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x3
	.4byte	.LASF167
	.2byte	0x741
	.byte	0x35
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x743
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"idx"
	.byte	0x2
	.2byte	0x744
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.string	"f"
	.byte	0x2
	.2byte	0x745
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF178
	.byte	0x2
	.2byte	0x746
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF179
	.byte	0x2
	.2byte	0x747
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.byte	0
	.uleb128 0x8
	.4byte	.LASF180
	.2byte	0x6c3
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB75
	.8byte	.LFE75-.LFB75
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x138f
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x6c3
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -456
	.uleb128 0x3
	.4byte	.LASF91
	.2byte	0x6c3
	.byte	0x24
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -460
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x6c3
	.byte	0x2f
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x6c5
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x6c6
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x6c7
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x6c8
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x6c9
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF182
	.byte	0x2
	.2byte	0x6ca
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x6cb
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF183
	.byte	0x2
	.2byte	0x6cc
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x1
	.4byte	.LASF184
	.byte	0x2
	.2byte	0x6cd
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.string	"um"
	.byte	0x2
	.2byte	0x6ce
	.byte	0x18
	.4byte	0x6a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -162
	.uleb128 0x1
	.4byte	.LASF185
	.byte	0x2
	.2byte	0x6cf
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x2
	.string	"ii"
	.byte	0x2
	.2byte	0x6d0
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -172
	.uleb128 0x2
	.string	"gid"
	.byte	0x2
	.2byte	0x6d1
	.byte	0x19
	.4byte	0x6a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -174
	.uleb128 0x1
	.4byte	.LASF186
	.byte	0x2
	.2byte	0x6d2
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x1
	.4byte	.LASF187
	.byte	0x2
	.2byte	0x6d3
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.4byte	.LASF188
	.byte	0x2
	.2byte	0x6d4
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x2
	.string	"now"
	.byte	0x2
	.2byte	0x6d5
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -276
	.uleb128 0x1
	.4byte	.LASF189
	.byte	0x2
	.2byte	0x6c6
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -408
	.uleb128 0x15
	.8byte	.LBB7
	.8byte	.LBE7-.LBB7
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x6e9
	.byte	0x12
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -424
	.uleb128 0x1
	.4byte	.LASF191
	.byte	0x2
	.2byte	0x6f8
	.byte	0x12
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -440
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x139f
	.uleb128 0x10
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0x8
	.4byte	.LASF192
	.2byte	0x6bf
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB74
	.8byte	.LFE74-.LFB74
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13d1
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x6bf
	.byte	0x19
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.4byte	.LASF193
	.2byte	0x6b1
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB73
	.8byte	.LFE73-.LFB73
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1466
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x6b1
	.byte	0x1b
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF25
	.2byte	0x6b1
	.byte	0x2f
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x3
	.4byte	.LASF26
	.2byte	0x6b1
	.byte	0x46
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x6b3
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x6b4
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"now"
	.byte	0x2
	.2byte	0x6b5
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x6b3
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.byte	0
	.uleb128 0x8
	.4byte	.LASF194
	.2byte	0x6a4
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB72
	.8byte	.LFE72-.LFB72
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14ec
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x6a4
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x4
	.string	"uid"
	.byte	0x2
	.2byte	0x6a4
	.byte	0x34
	.4byte	0x6a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -250
	.uleb128 0x4
	.string	"gid"
	.byte	0x2
	.2byte	0x6a4
	.byte	0x4f
	.4byte	0x6a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x6a6
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x6a7
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x6a6
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x8
	.4byte	.LASF195
	.2byte	0x696
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB71
	.8byte	.LFE71-.LFB71
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x156f
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x696
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x696
	.byte	0x2e
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -268
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x698
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x699
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x69a
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x698
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.byte	0
	.uleb128 0x8
	.4byte	.LASF196
	.2byte	0x687
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB70
	.8byte	.LFE70-.LFB70
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1624
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x687
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.uleb128 0x4
	.string	"st"
	.byte	0x2
	.2byte	0x687
	.byte	0x2e
	.4byte	0xe29
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x689
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x68a
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x68b
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x68c
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x68d
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x68a
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x68b
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -352
	.byte	0
	.uleb128 0x8
	.4byte	.LASF197
	.2byte	0x678
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB69
	.8byte	.LFE69-.LFB69
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x16f9
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x678
	.byte	0x1d
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x4
	.string	"buf"
	.byte	0x2
	.2byte	0x678
	.byte	0x29
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x3
	.4byte	.LASF198
	.2byte	0x678
	.byte	0x32
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -388
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x67a
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x67b
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x67c
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x67d
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x67e
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x2
	.string	"n"
	.byte	0x2
	.2byte	0x67f
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -212
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x67b
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -344
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x67c
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -360
	.byte	0
	.uleb128 0x8
	.4byte	.LASF199
	.2byte	0x66b
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB68
	.8byte	.LFE68-.LFB68
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x176d
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x66b
	.byte	0x19
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x4
	.string	"st"
	.byte	0x2
	.2byte	0x66b
	.byte	0x2d
	.4byte	0xe29
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x66d
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x66e
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x66e
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.byte	0
	.uleb128 0x8
	.4byte	.LASF200
	.2byte	0x64d
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB67
	.8byte	.LFE67-.LFB67
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1834
	.uleb128 0x3
	.4byte	.LASF201
	.2byte	0x64d
	.byte	0x19
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -488
	.uleb128 0x3
	.4byte	.LASF202
	.2byte	0x64d
	.byte	0x2e
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -496
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x64f
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x650
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x651
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x652
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x653
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x1
	.4byte	.LASF203
	.byte	0x2
	.2byte	0x650
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -336
	.uleb128 0x1
	.4byte	.LASF204
	.byte	0x2
	.2byte	0x650
	.byte	0x17
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x65c
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -480
	.byte	0
	.uleb128 0x8
	.4byte	.LASF205
	.2byte	0x626
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB66
	.8byte	.LFE66-.LFB66
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x194d
	.uleb128 0x3
	.4byte	.LASF201
	.2byte	0x626
	.byte	0x1b
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF202
	.2byte	0x626
	.byte	0x30
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x628
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x629
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x62a
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"opd"
	.byte	0x2
	.2byte	0x62b
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.4byte	.LASF206
	.byte	0x2
	.2byte	0x62c
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -288
	.uleb128 0x1
	.4byte	.LASF207
	.byte	0x2
	.2byte	0x62d
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -376
	.uleb128 0x2
	.string	"pr"
	.byte	0x2
	.2byte	0x62e
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -384
	.uleb128 0x1
	.4byte	.LASF203
	.byte	0x2
	.2byte	0x629
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -512
	.uleb128 0x1
	.4byte	.LASF204
	.byte	0x2
	.2byte	0x629
	.byte	0x17
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -640
	.uleb128 0x2
	.string	"op"
	.byte	0x2
	.2byte	0x634
	.byte	0x14
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -644
	.uleb128 0x2
	.string	"np"
	.byte	0x2
	.2byte	0x634
	.byte	0x1b
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -648
	.uleb128 0x1
	.4byte	.LASF208
	.byte	0x2
	.2byte	0x634
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -664
	.uleb128 0x1
	.4byte	.LASF209
	.byte	0x2
	.2byte	0x634
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -680
	.byte	0
	.uleb128 0x8
	.4byte	.LASF210
	.2byte	0x609
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB65
	.8byte	.LFE65-.LFB65
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1a45
	.uleb128 0x3
	.4byte	.LASF211
	.2byte	0x609
	.byte	0x1c
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -696
	.uleb128 0x3
	.4byte	.LASF212
	.2byte	0x609
	.byte	0x30
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -704
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x60b
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x60c
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x60d
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x60e
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x60f
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -204
	.uleb128 0x1
	.4byte	.LASF213
	.byte	0x2
	.2byte	0x610
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x2
	.string	"ni"
	.byte	0x2
	.2byte	0x611
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x1
	.4byte	.LASF214
	.byte	0x2
	.2byte	0x612
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -300
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x60c
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -432
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x610
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x620
	.byte	0x14
	.4byte	0x1a45
	.uleb128 0x3
	.byte	0x91
	.sleb128 -688
	.byte	0
	.uleb128 0xc
	.4byte	0x59
	.4byte	0x1a55
	.uleb128 0x10
	.4byte	0x78
	.byte	0xef
	.byte	0
	.uleb128 0xe
	.4byte	.LASF236
	.2byte	0x5f8
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB64
	.8byte	.LFE64-.LFB64
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1b24
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x5f8
	.byte	0x2b
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x4
	.string	"ip"
	.byte	0x2
	.2byte	0x5f8
	.byte	0x43
	.4byte	0x1b24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.string	"src"
	.byte	0x2
	.2byte	0x5f8
	.byte	0x5f
	.4byte	0x113a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF11
	.2byte	0x5f8
	.byte	0x74
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF169
	.byte	0x2
	.2byte	0x5fa
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x5fb
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF171
	.byte	0x2
	.2byte	0x5fc
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF172
	.byte	0x2
	.2byte	0x5fd
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF173
	.byte	0x2
	.2byte	0x5fe
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF174
	.byte	0x2
	.2byte	0x5ff
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"s"
	.byte	0x2
	.2byte	0x5fb
	.byte	0x1b
	.4byte	0x113a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	0xf2
	.uleb128 0x8
	.4byte	.LASF215
	.2byte	0x5d3
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB63
	.8byte	.LFE63-.LFB63
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1c01
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x5d3
	.byte	0x1b
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x5d5
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x5d6
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x5d7
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x5d8
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF216
	.byte	0x2
	.2byte	0x5d9
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x1
	.4byte	.LASF217
	.byte	0x2
	.2byte	0x5da
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.string	"pr"
	.byte	0x2
	.2byte	0x5db
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -304
	.uleb128 0x1
	.4byte	.LASF218
	.byte	0x2
	.2byte	0x5dc
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x5d6
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -520
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x5e4
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.byte	0
	.uleb128 0x8
	.4byte	.LASF219
	.2byte	0x5aa
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB62
	.8byte	.LFE62-.LFB62
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1d0c
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x5aa
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -472
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x5ac
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x5ad
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x5ae
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x1
	.4byte	.LASF220
	.byte	0x2
	.2byte	0x5af
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.string	"de"
	.byte	0x2
	.2byte	0x5b0
	.byte	0x15
	.4byte	0x1d0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.4byte	.LASF221
	.byte	0x2
	.2byte	0x5b1
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x5b2
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x5b3
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x1
	.4byte	.LASF222
	.byte	0x2
	.2byte	0x5b4
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF223
	.byte	0x2
	.2byte	0x5b5
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.4byte	.LASF218
	.byte	0x2
	.2byte	0x5b6
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -320
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x5ad
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -448
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x5c4
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -464
	.byte	0
	.uleb128 0xb
	.4byte	0x1a1
	.uleb128 0x8
	.4byte	.LASF224
	.2byte	0x57f
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB61
	.8byte	.LFE61-.LFB61
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1e09
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x57f
	.byte	0x1a
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.uleb128 0x3
	.4byte	.LASF24
	.2byte	0x57f
	.byte	0x24
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -556
	.uleb128 0x1
	.4byte	.LASF42
	.byte	0x2
	.2byte	0x581
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x582
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x583
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -112
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x584
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x585
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -204
	.uleb128 0x1
	.4byte	.LASF225
	.byte	0x2
	.2byte	0x586
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -208
	.uleb128 0x1
	.4byte	.LASF226
	.byte	0x2
	.2byte	0x587
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -296
	.uleb128 0x2
	.string	"um"
	.byte	0x2
	.2byte	0x588
	.byte	0x18
	.4byte	0x6a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -298
	.uleb128 0x1
	.4byte	.LASF186
	.byte	0x2
	.2byte	0x589
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -392
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x583
	.byte	0xa
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -520
	.uleb128 0x1
	.4byte	.LASF190
	.byte	0x2
	.2byte	0x58c
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.byte	0
	.uleb128 0x13
	.4byte	.LASF273
	.2byte	0x53f
	.8byte	.LFB60
	.8byte	.LFE60-.LFB60
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1f6b
	.uleb128 0x4
	.string	"out"
	.byte	0x2
	.2byte	0x53f
	.byte	0x28
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1112
	.uleb128 0x3
	.4byte	.LASF227
	.2byte	0x53f
	.byte	0x41
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1120
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x53f
	.byte	0x56
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x541
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x2
	.string	"n"
	.byte	0x2
	.2byte	0x542
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF228
	.byte	0x2
	.2byte	0x543
	.byte	0x11
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF229
	.byte	0x2
	.2byte	0x544
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -76
	.uleb128 0x2
	.string	"len"
	.byte	0x2
	.2byte	0x545
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF230
	.byte	0x2
	.2byte	0x546
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x547
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.4byte	.LASF231
	.byte	0x2
	.2byte	0x548
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x2
	.string	"pos"
	.byte	0x2
	.2byte	0x549
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.4byte	.LASF232
	.byte	0x2
	.2byte	0x54a
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x1
	.4byte	.LASF233
	.byte	0x2
	.2byte	0x54b
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.string	"j"
	.byte	0x2
	.2byte	0x54c
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF234
	.byte	0x2
	.2byte	0x543
	.byte	0xa
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -368
	.uleb128 0x2
	.string	"tmp"
	.byte	0x2
	.2byte	0x553
	.byte	0xa
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -624
	.uleb128 0x2
	.string	"s"
	.byte	0x2
	.2byte	0x556
	.byte	0x11
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"end"
	.byte	0x2
	.2byte	0x557
	.byte	0x11
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF235
	.byte	0x2
	.2byte	0x559
	.byte	0xa
	.4byte	0x1f7b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1104
	.byte	0
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x1f7b
	.uleb128 0x10
	.4byte	0x78
	.byte	0xff
	.byte	0
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x1f91
	.uleb128 0x10
	.4byte	0x78
	.byte	0x1f
	.uleb128 0x10
	.4byte	0x78
	.byte	0xe
	.byte	0
	.uleb128 0xe
	.4byte	.LASF237
	.2byte	0x521
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB59
	.8byte	.LFE59-.LFB59
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2037
	.uleb128 0x3
	.4byte	.LASF238
	.2byte	0x521
	.byte	0x28
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x521
	.byte	0x43
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x523
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x524
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x2
	.string	"de"
	.byte	0x2
	.2byte	0x525
	.byte	0x15
	.4byte	0x1d0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF221
	.byte	0x2
	.2byte	0x526
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x527
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.4byte	.LASF239
	.byte	0x2
	.2byte	0x529
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.byte	0
	.uleb128 0xe
	.4byte	.LASF240
	.2byte	0x4de
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB58
	.8byte	.LFE58-.LFB58
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x21ca
	.uleb128 0x3
	.4byte	.LASF238
	.2byte	0x4de
	.byte	0x25
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -724
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x4de
	.byte	0x40
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -736
	.uleb128 0x3
	.4byte	.LASF241
	.2byte	0x4de
	.byte	0x54
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -728
	.uleb128 0x2
	.string	"pdi"
	.byte	0x2
	.2byte	0x4e0
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.string	"de"
	.byte	0x2
	.2byte	0x4e1
	.byte	0x14
	.4byte	0x1a1
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x4e2
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x4e3
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x1
	.4byte	.LASF242
	.byte	0x2
	.2byte	0x4e4
	.byte	0x15
	.4byte	0x1d0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.4byte	.LASF221
	.byte	0x2
	.2byte	0x4e5
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x2
	.string	"i_7"
	.byte	0x2
	.2byte	0x4e6
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x1
	.4byte	.LASF171
	.byte	0x2
	.2byte	0x4e7
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x1
	.4byte	.LASF174
	.byte	0x2
	.2byte	0x4e8
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x1
	.4byte	.LASF243
	.byte	0x2
	.2byte	0x4e9
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -156
	.uleb128 0x1
	.4byte	.LASF244
	.byte	0x2
	.2byte	0x4ea
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -160
	.uleb128 0x1
	.4byte	.LASF245
	.byte	0x2
	.2byte	0x4eb
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -164
	.uleb128 0x2
	.string	"idx"
	.byte	0x2
	.2byte	0x4ec
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -168
	.uleb128 0x1
	.4byte	.LASF246
	.byte	0x2
	.2byte	0x4ed
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -172
	.uleb128 0x1
	.4byte	.LASF172
	.byte	0x2
	.2byte	0x4ee
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -176
	.uleb128 0x1
	.4byte	.LASF247
	.byte	0x2
	.2byte	0x4ef
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -180
	.uleb128 0x1
	.4byte	.LASF248
	.byte	0x2
	.2byte	0x4f0
	.byte	0x15
	.4byte	0x1d0c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -192
	.uleb128 0x1
	.4byte	.LASF249
	.byte	0x2
	.2byte	0x4f1
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -196
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x514
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -712
	.byte	0
	.uleb128 0xe
	.4byte	.LASF250
	.2byte	0x4c8
	.byte	0x16
	.4byte	0x71
	.8byte	.LFB57
	.8byte	.LFE57-.LFB57
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x221f
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x4ca
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x1
	.4byte	.LASF30
	.byte	0x2
	.2byte	0x4cb
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x1
	.4byte	.LASF226
	.byte	0x2
	.2byte	0x4cc
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -200
	.byte	0
	.uleb128 0xe
	.4byte	.LASF251
	.2byte	0x494
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB56
	.8byte	.LFE56-.LFB56
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2318
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x494
	.byte	0x2f
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x3
	.4byte	.LASF238
	.2byte	0x494
	.byte	0x44
	.4byte	0x2318
	.uleb128 0x3
	.byte	0x91
	.sleb128 -272
	.uleb128 0x3
	.4byte	.LASF252
	.2byte	0x494
	.byte	0x59
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -280
	.uleb128 0x1
	.4byte	.LASF253
	.byte	0x2
	.2byte	0x496
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF254
	.byte	0x2
	.2byte	0x497
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x2
	.string	"tok"
	.byte	0x2
	.2byte	0x498
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.string	"cur"
	.byte	0x2
	.2byte	0x499
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x2
	.string	"ip"
	.byte	0x2
	.2byte	0x49a
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x1
	.4byte	.LASF255
	.byte	0x2
	.2byte	0x49b
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x1
	.4byte	.LASF256
	.byte	0x2
	.2byte	0x49c
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -244
	.uleb128 0x2
	.string	"n"
	.byte	0x2
	.2byte	0x49d
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x49e
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -252
	.uleb128 0x1
	.4byte	.LASF257
	.byte	0x2
	.2byte	0x4a3
	.byte	0xa
	.4byte	0x231d
	.uleb128 0x4
	.byte	0x91
	.sleb128 -112
	.byte	0x6
	.byte	0
	.uleb128 0xb
	.4byte	0x71
	.uleb128 0xc
	.4byte	0x33
	.4byte	0x2331
	.uleb128 0x31
	.4byte	0x78
	.uleb128 0x4
	.byte	0x91
	.sleb128 -104
	.byte	0x6
	.byte	0
	.uleb128 0x8
	.4byte	.LASF258
	.2byte	0x46c
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB55
	.8byte	.LFE55-.LFB55
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x23ac
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x46c
	.byte	0x13
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF90
	.2byte	0x46c
	.byte	0x1d
	.4byte	0x25c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.string	"n"
	.byte	0x2
	.2byte	0x46c
	.byte	0x27
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x46e
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x46f
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x470
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x8
	.4byte	.LASF259
	.2byte	0x435
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB54
	.8byte	.LFE54-.LFB54
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2435
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x435
	.byte	0x12
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF90
	.2byte	0x435
	.byte	0x1c
	.4byte	0x25c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x4
	.string	"n"
	.byte	0x2
	.2byte	0x435
	.byte	0x26
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x437
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x438
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"j"
	.byte	0x2
	.2byte	0x439
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x43a
	.byte	0x12
	.4byte	0x4d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF260
	.2byte	0x403
	.8byte	.LFB53
	.8byte	.LFE53-.LFB53
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x24b3
	.uleb128 0x4
	.string	"fd1"
	.byte	0x2
	.2byte	0x403
	.byte	0x15
	.4byte	0x24b3
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x4
	.string	"fd2"
	.byte	0x2
	.2byte	0x403
	.byte	0x1f
	.4byte	0x24b3
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x405
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"pip"
	.byte	0x2
	.2byte	0x406
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x407
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x2
	.string	"i_6"
	.byte	0x2
	.2byte	0x408
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0xb
	.4byte	0x46
	.uleb128 0x8
	.4byte	.LASF261
	.2byte	0x3fa
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB52
	.8byte	.LFE52-.LFB52
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2508
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x3fa
	.byte	0x10
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x3fc
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"k"
	.byte	0x2
	.2byte	0x3fd
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x8
	.4byte	.LASF262
	.2byte	0x3ed
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB51
	.8byte	.LFE51-.LFB51
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x254a
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x3ed
	.byte	0x13
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x3ef
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.4byte	.LASF263
	.2byte	0x3e1
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB50
	.8byte	.LFE50-.LFB50
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x258c
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x3e1
	.byte	0x12
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x3e3
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.4byte	.LASF264
	.2byte	0x3cc
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB49
	.8byte	.LFE49-.LFB49
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x25ce
	.uleb128 0x4
	.string	"fd"
	.byte	0x2
	.2byte	0x3cc
	.byte	0x11
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF52
	.byte	0x2
	.2byte	0x3ce
	.byte	0x14
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF265
	.2byte	0x3b8
	.8byte	.LFB48
	.8byte	.LFE48-.LFB48
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x25fb
	.uleb128 0x3
	.4byte	.LASF52
	.2byte	0x3b8
	.byte	0x1d
	.4byte	0xb53
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x8
	.4byte	.LASF266
	.2byte	0x3aa
	.byte	0xf
	.4byte	0x5d6
	.8byte	.LFB47
	.8byte	.LFE47-.LFB47
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x262e
	.uleb128 0x1
	.4byte	.LASF160
	.byte	0x2
	.2byte	0x3ac
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x8
	.4byte	.LASF267
	.2byte	0x394
	.byte	0x10
	.4byte	0x78e
	.8byte	.LFB46
	.8byte	.LFE46-.LFB46
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x267e
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x396
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF268
	.byte	0x2
	.2byte	0x397
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"pa"
	.byte	0x2
	.2byte	0x398
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0xd
	.4byte	.LASF269
	.2byte	0x38c
	.8byte	.LFB45
	.8byte	.LFE45-.LFB45
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26aa
	.uleb128 0x4
	.string	"p"
	.byte	0x2
	.2byte	0x38c
	.byte	0x1e
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.4byte	.LASF270
	.2byte	0x37d
	.byte	0xf
	.4byte	0x5d6
	.8byte	.LFB44
	.8byte	.LFE44-.LFB44
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x26eb
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x37f
	.byte	0x13
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF72
	.byte	0x2
	.2byte	0x380
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xd
	.4byte	.LASF271
	.2byte	0x376
	.8byte	.LFB43
	.8byte	.LFE43-.LFB43
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2717
	.uleb128 0x4
	.string	"p"
	.byte	0x2
	.2byte	0x376
	.byte	0x1f
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.4byte	.LASF272
	.2byte	0x363
	.byte	0x10
	.4byte	0x78e
	.8byte	.LFB42
	.8byte	.LFE42-.LFB42
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2758
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x365
	.byte	0x14
	.4byte	0x78e
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF82
	.byte	0x2
	.2byte	0x366
	.byte	0xb
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x20
	.4byte	.LASF323
	.2byte	0x35c
	.8byte	.LFB41
	.8byte	.LFE41-.LFB41
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x13
	.4byte	.LASF274
	.2byte	0x358
	.8byte	.LFB40
	.8byte	.LFE40-.LFB40
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27ab
	.uleb128 0x4
	.string	"f"
	.byte	0x2
	.2byte	0x358
	.byte	0x28
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"o"
	.byte	0x2
	.2byte	0x358
	.byte	0x3b
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x13
	.4byte	.LASF275
	.2byte	0x354
	.8byte	.LFB39
	.8byte	.LFE39-.LFB39
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x27e5
	.uleb128 0x4
	.string	"f"
	.byte	0x2
	.2byte	0x354
	.byte	0x25
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"o"
	.byte	0x2
	.2byte	0x354
	.byte	0x38
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x25
	.4byte	.LASF276
	.2byte	0x34a
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB38
	.8byte	.LFE38-.LFB38
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2816
	.uleb128 0x4
	.string	"f"
	.byte	0x2
	.2byte	0x34a
	.byte	0x24
	.4byte	0x5d6
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xd
	.4byte	.LASF277
	.2byte	0x337
	.8byte	.LFB37
	.8byte	.LFE37-.LFB37
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2863
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x337
	.byte	0x1f
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -116
	.uleb128 0x2
	.string	"ip"
	.byte	0x2
	.2byte	0x339
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x33a
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.byte	0
	.uleb128 0x8
	.4byte	.LASF278
	.2byte	0x30c
	.byte	0x5
	.4byte	0x46
	.8byte	.LFB36
	.8byte	.LFE36-.LFB36
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x29e2
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x30c
	.byte	0x1d
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1688
	.uleb128 0x4
	.string	"out"
	.byte	0x2
	.2byte	0x30c
	.byte	0x29
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1696
	.uleb128 0x3
	.4byte	.LASF227
	.2byte	0x30c
	.byte	0x32
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1700
	.uleb128 0x2
	.string	"dir"
	.byte	0x2
	.2byte	0x30e
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF279
	.byte	0x2
	.2byte	0x30f
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x2
	.string	"tok"
	.byte	0x2
	.2byte	0x310
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x1
	.4byte	.LASF280
	.byte	0x2
	.2byte	0x311
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x1
	.4byte	.LASF281
	.byte	0x2
	.2byte	0x312
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x2
	.string	"n"
	.byte	0x2
	.2byte	0x313
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -148
	.uleb128 0x1
	.4byte	.LASF57
	.byte	0x2
	.2byte	0x314
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -152
	.uleb128 0x2
	.string	"nxt"
	.byte	0x2
	.2byte	0x315
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -240
	.uleb128 0x2
	.string	"len"
	.byte	0x2
	.2byte	0x316
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -244
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x317
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -256
	.uleb128 0x2
	.string	"l"
	.byte	0x2
	.2byte	0x318
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -260
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x319
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -264
	.uleb128 0x2
	.string	"abs"
	.byte	0x2
	.2byte	0x310
	.byte	0xa
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -520
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x315
	.byte	0xa
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -776
	.uleb128 0x15
	.8byte	.LBB6
	.8byte	.LBE6-.LBB6
	.uleb128 0x1
	.4byte	.LASF282
	.byte	0x2
	.2byte	0x322
	.byte	0x12
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1672
	.uleb128 0x1
	.4byte	.LASF283
	.byte	0x2
	.2byte	0x324
	.byte	0x12
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1544
	.uleb128 0x1
	.4byte	.LASF284
	.byte	0x2
	.2byte	0x326
	.byte	0x12
	.4byte	0x747
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1288
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF285
	.2byte	0x2cb
	.byte	0x16
	.4byte	0x71
	.8byte	.LFB35
	.8byte	.LFE35-.LFB35
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b10
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x2cb
	.byte	0x32
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1416
	.uleb128 0x3
	.4byte	.LASF280
	.2byte	0x2cb
	.byte	0x3c
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1420
	.uleb128 0x2
	.string	"ipr"
	.byte	0x2
	.2byte	0x2cd
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x1
	.4byte	.LASF279
	.byte	0x2
	.2byte	0x2ce
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x2
	.string	"tok"
	.byte	0x2
	.2byte	0x2cf
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -136
	.uleb128 0x2
	.string	"cur"
	.byte	0x2
	.2byte	0x2d0
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -140
	.uleb128 0x1
	.4byte	.LASF57
	.byte	0x2
	.2byte	0x2d1
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -144
	.uleb128 0x2
	.string	"nxt"
	.byte	0x2
	.2byte	0x2d2
	.byte	0x14
	.4byte	0xf2
	.uleb128 0x3
	.byte	0x91
	.sleb128 -232
	.uleb128 0x2
	.string	"n"
	.byte	0x2
	.2byte	0x2d3
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -236
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x2d4
	.byte	0xb
	.4byte	0x25c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -248
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x2d4
	.byte	0xa
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -504
	.uleb128 0x1
	.4byte	.LASF286
	.byte	0x2
	.2byte	0x2d9
	.byte	0xa
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -760
	.uleb128 0x15
	.8byte	.LBB5
	.8byte	.LBE5-.LBB5
	.uleb128 0x1
	.4byte	.LASF282
	.byte	0x2
	.2byte	0x2e5
	.byte	0x12
	.4byte	0x68e
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1400
	.uleb128 0x1
	.4byte	.LASF283
	.byte	0x2
	.2byte	0x2ea
	.byte	0x12
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1272
	.uleb128 0x1
	.4byte	.LASF284
	.byte	0x2
	.2byte	0x2f2
	.byte	0x12
	.4byte	0x1f6b
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1016
	.byte	0
	.byte	0
	.uleb128 0x8
	.4byte	.LASF287
	.2byte	0x2c5
	.byte	0xf
	.4byte	0x71
	.8byte	.LFB34
	.8byte	.LFE34-.LFB34
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2b42
	.uleb128 0x3
	.4byte	.LASF181
	.2byte	0x2c5
	.byte	0x27
	.4byte	0x261
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x8
	.4byte	.LASF288
	.2byte	0x2b0
	.byte	0xf
	.4byte	0x71
	.8byte	.LFB33
	.8byte	.LFE33-.LFB33
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2bd2
	.uleb128 0x3
	.4byte	.LASF42
	.2byte	0x2b0
	.byte	0x2a
	.4byte	0x1b24
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF31
	.2byte	0x2b0
	.byte	0x40
	.4byte	0x261
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x2b2
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"de"
	.byte	0x2
	.2byte	0x2b3
	.byte	0x15
	.4byte	0x1d0c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF221
	.byte	0x2
	.2byte	0x2b4
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x2b5
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF239
	.byte	0x2
	.2byte	0x2b2
	.byte	0xa
	.4byte	0x138f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.byte	0
	.uleb128 0xd
	.4byte	.LASF289
	.2byte	0x298
	.8byte	.LFB32
	.8byte	.LFE32-.LFB32
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2c9e
	.uleb128 0x4
	.string	"ip"
	.byte	0x2
	.2byte	0x298
	.byte	0x20
	.4byte	0x1b24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF148
	.2byte	0x298
	.byte	0x34
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x4
	.string	"buf"
	.byte	0x2
	.2byte	0x298
	.byte	0x4e
	.4byte	0x9ac
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x3
	.4byte	.LASF11
	.2byte	0x298
	.byte	0x63
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF169
	.byte	0x2
	.2byte	0x29a
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"off"
	.byte	0x2
	.2byte	0x29b
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"dst"
	.byte	0x2
	.2byte	0x29c
	.byte	0x15
	.4byte	0x9ac
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF171
	.byte	0x2
	.2byte	0x29d
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF172
	.byte	0x2
	.2byte	0x29e
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF179
	.byte	0x2
	.2byte	0x29f
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF174
	.byte	0x2
	.2byte	0x2a0
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.uleb128 0xe
	.4byte	.LASF290
	.2byte	0x24f
	.byte	0x16
	.4byte	0x71
	.8byte	.LFB31
	.8byte	.LFE31-.LFB31
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2e36
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x24f
	.byte	0x35
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1652
	.uleb128 0x4
	.string	"ip"
	.byte	0x2
	.2byte	0x24f
	.byte	0x4d
	.4byte	0x1b24
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1664
	.uleb128 0x4
	.string	"idx"
	.byte	0x2
	.2byte	0x24f
	.byte	0x61
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1656
	.uleb128 0x2
	.string	"b"
	.byte	0x2
	.2byte	0x251
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF291
	.byte	0x2
	.2byte	0x252
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"nb"
	.byte	0x2
	.2byte	0x253
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF221
	.byte	0x2
	.2byte	0x254
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x255
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x2
	.string	"db"
	.byte	0x2
	.2byte	0x256
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"di"
	.byte	0x2
	.2byte	0x257
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF292
	.byte	0x2
	.2byte	0x258
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF293
	.byte	0x2
	.2byte	0x259
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF294
	.byte	0x2
	.2byte	0x25a
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF295
	.byte	0x2
	.2byte	0x25b
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x1
	.4byte	.LASF296
	.byte	0x2
	.2byte	0x25c
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF297
	.byte	0x2
	.2byte	0x25d
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -84
	.uleb128 0x1
	.4byte	.LASF298
	.byte	0x2
	.2byte	0x25e
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x1
	.4byte	.LASF299
	.byte	0x2
	.2byte	0x25f
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x1
	.4byte	.LASF300
	.byte	0x2
	.2byte	0x260
	.byte	0x13
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x1
	.4byte	.LASF301
	.byte	0x2
	.2byte	0x280
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -616
	.uleb128 0x1
	.4byte	.LASF302
	.byte	0x2
	.2byte	0x28c
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1128
	.uleb128 0x15
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x265
	.byte	0x18
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -1640
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	.LASF303
	.2byte	0x22f
	.byte	0x16
	.4byte	0x71
	.8byte	.LFB30
	.8byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2efb
	.uleb128 0x4
	.string	"ip"
	.byte	0x2
	.2byte	0x22f
	.byte	0x34
	.4byte	0x1b24
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.uleb128 0x4
	.string	"idx"
	.byte	0x2
	.2byte	0x22f
	.byte	0x48
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x1
	.4byte	.LASF291
	.byte	0x2
	.2byte	0x231
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF221
	.byte	0x2
	.2byte	0x232
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF304
	.byte	0x2
	.2byte	0x233
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF305
	.byte	0x2
	.2byte	0x234
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF294
	.byte	0x2
	.2byte	0x235
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF296
	.byte	0x2
	.2byte	0x236
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF297
	.byte	0x2
	.2byte	0x237
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x1
	.4byte	.LASF299
	.byte	0x2
	.2byte	0x238
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.byte	0
	.uleb128 0xe
	.4byte	.LASF306
	.2byte	0x21e
	.byte	0x16
	.4byte	0x71
	.8byte	.LFB29
	.8byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x2f6d
	.uleb128 0x1
	.4byte	.LASF307
	.byte	0x2
	.2byte	0x220
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF308
	.byte	0x2
	.2byte	0x221
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"b"
	.byte	0x2
	.2byte	0x222
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x15
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.uleb128 0x2
	.string	"z"
	.byte	0x2
	.2byte	0x226
	.byte	0x1c
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -544
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF309
	.2byte	0x1ef
	.8byte	.LFB28
	.8byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x306b
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x1ef
	.byte	0x2d
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -596
	.uleb128 0x4
	.string	"ip"
	.byte	0x2
	.2byte	0x1ef
	.byte	0x45
	.4byte	0x1b24
	.uleb128 0x3
	.byte	0x91
	.sleb128 -608
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x1f1
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF310
	.byte	0x2
	.2byte	0x1f2
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF242
	.byte	0x2
	.2byte	0x1f3
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x2
	.string	"i_1"
	.byte	0x2
	.2byte	0x1f4
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1
	.4byte	.LASF311
	.byte	0x2
	.2byte	0x1f5
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF281
	.byte	0x2
	.2byte	0x1f6
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"i_2"
	.byte	0x2
	.2byte	0x1f7
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x1
	.4byte	.LASF312
	.byte	0x2
	.2byte	0x1f8
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF313
	.byte	0x2
	.2byte	0x1f9
	.byte	0x14
	.4byte	0x2318
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.string	"j"
	.byte	0x2
	.2byte	0x1fa
	.byte	0x9
	.4byte	0x46
	.uleb128 0x3
	.byte	0x91
	.sleb128 -68
	.uleb128 0x15
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1
	.4byte	.LASF314
	.byte	0x2
	.2byte	0x20e
	.byte	0x1c
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -584
	.byte	0
	.byte	0
	.uleb128 0x13
	.4byte	.LASF315
	.2byte	0x1e4
	.8byte	.LFB27
	.8byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x30c8
	.uleb128 0x4
	.string	"b"
	.byte	0x2
	.2byte	0x1e4
	.byte	0x28
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF316
	.byte	0x2
	.2byte	0x1e6
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"bi"
	.byte	0x2
	.2byte	0x1e7
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x1e8
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.byte	0
	.uleb128 0x13
	.4byte	.LASF317
	.2byte	0x1da
	.8byte	.LFB26
	.8byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3125
	.uleb128 0x4
	.string	"b"
	.byte	0x2
	.2byte	0x1da
	.byte	0x26
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF316
	.byte	0x2
	.2byte	0x1dc
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"bi"
	.byte	0x2
	.2byte	0x1dd
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x1dd
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.byte	0
	.uleb128 0xe
	.4byte	.LASF318
	.2byte	0x1d1
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB25
	.8byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3187
	.uleb128 0x4
	.string	"b"
	.byte	0x2
	.2byte	0x1d1
	.byte	0x26
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -548
	.uleb128 0x1
	.4byte	.LASF316
	.byte	0x2
	.2byte	0x1d3
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"bi"
	.byte	0x2
	.2byte	0x1d4
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x1d4
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -536
	.byte	0
	.uleb128 0x13
	.4byte	.LASF319
	.2byte	0x1be
	.8byte	.LFB24
	.8byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3217
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x1be
	.byte	0x27
	.4byte	0x71
	.uleb128 0x3
	.byte	0x91
	.sleb128 -564
	.uleb128 0x4
	.string	"src"
	.byte	0x2
	.2byte	0x1be
	.byte	0x45
	.4byte	0x3217
	.uleb128 0x3
	.byte	0x91
	.sleb128 -576
	.uleb128 0x1
	.4byte	.LASF320
	.byte	0x2
	.2byte	0x1c0
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF100
	.byte	0x2
	.2byte	0x1c1
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF148
	.byte	0x2
	.2byte	0x1c2
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"dip"
	.byte	0x2
	.2byte	0x1c3
	.byte	0x15
	.4byte	0x1b24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x2
	.string	"buf"
	.byte	0x2
	.2byte	0x1ca
	.byte	0x14
	.4byte	0x906
	.uleb128 0x3
	.byte	0x91
	.sleb128 -552
	.byte	0
	.uleb128 0xb
	.4byte	0x18c
	.uleb128 0xd
	.4byte	.LASF321
	.2byte	0x1ac
	.8byte	.LFB23
	.8byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3298
	.uleb128 0x3
	.4byte	.LASF30
	.2byte	0x1ac
	.byte	0x1f
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x3
	.4byte	.LASF322
	.2byte	0x1ac
	.byte	0x37
	.4byte	0x1b24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF320
	.byte	0x2
	.2byte	0x1ae
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF100
	.byte	0x2
	.2byte	0x1af
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF148
	.byte	0x2
	.2byte	0x1b0
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.string	"dip"
	.byte	0x2
	.2byte	0x1b1
	.byte	0x15
	.4byte	0x1b24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.byte	0
	.uleb128 0x20
	.4byte	.LASF324
	.2byte	0x1a7
	.8byte	.LFB22
	.8byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.4byte	.LASF325
	.2byte	0x185
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB21
	.8byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3330
	.uleb128 0x4
	.string	"ip"
	.byte	0x2
	.2byte	0x185
	.byte	0x27
	.4byte	0x1b24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x3
	.4byte	.LASF187
	.2byte	0x185
	.byte	0x31
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -60
	.uleb128 0x2
	.string	"p"
	.byte	0x2
	.2byte	0x187
	.byte	0x13
	.4byte	0x5c1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1
	.4byte	.LASF24
	.byte	0x2
	.2byte	0x188
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1
	.4byte	.LASF326
	.byte	0x2
	.2byte	0x189
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF327
	.byte	0x2
	.2byte	0x18a
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0xd
	.4byte	.LASF328
	.2byte	0x17e
	.8byte	.LFB20
	.8byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x337d
	.uleb128 0x4
	.string	"blk"
	.byte	0x2
	.2byte	0x17e
	.byte	0x20
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"src"
	.byte	0x2
	.2byte	0x17e
	.byte	0x33
	.4byte	0xcfb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"be"
	.byte	0x2
	.2byte	0x180
	.byte	0x1b
	.4byte	0x337d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xb
	.4byte	0x8b4
	.uleb128 0x13
	.4byte	.LASF329
	.2byte	0x164
	.8byte	.LFB19
	.8byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x33bf
	.uleb128 0x3
	.4byte	.LASF98
	.2byte	0x164
	.byte	0x32
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"src"
	.byte	0x2
	.2byte	0x164
	.byte	0x48
	.4byte	0xcfb
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xd
	.4byte	.LASF330
	.2byte	0x15d
	.8byte	.LFB18
	.8byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x340c
	.uleb128 0x4
	.string	"blk"
	.byte	0x2
	.2byte	0x15d
	.byte	0x1f
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x4
	.string	"dst"
	.byte	0x2
	.2byte	0x15d
	.byte	0x2c
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x2
	.string	"be"
	.byte	0x2
	.2byte	0x15f
	.byte	0x1b
	.4byte	0x337d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x32
	.4byte	.LASF331
	.byte	0x2
	.2byte	0x155
	.byte	0xd
	.8byte	.LFB17
	.8byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x343b
	.uleb128 0x4
	.string	"be"
	.byte	0x2
	.2byte	0x155
	.byte	0x32
	.4byte	0x337d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0xe
	.4byte	.LASF332
	.2byte	0x125
	.byte	0x1e
	.4byte	0x337d
	.8byte	.LFB16
	.8byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x349b
	.uleb128 0x3
	.4byte	.LASF100
	.2byte	0x125
	.byte	0x37
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x127
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF333
	.byte	0x2
	.2byte	0x128
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"i_0"
	.byte	0x2
	.2byte	0x129
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0xe
	.4byte	.LASF334
	.2byte	0x10b
	.byte	0xc
	.4byte	0x46
	.8byte	.LFB15
	.8byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x34ec
	.uleb128 0x1
	.4byte	.LASF335
	.byte	0x2
	.2byte	0x10d
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF336
	.byte	0x2
	.2byte	0x10e
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"i"
	.byte	0x2
	.2byte	0x10f
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x20
	.4byte	.LASF337
	.2byte	0x104
	.8byte	.LFB14
	.8byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x33
	.4byte	.LASF338
	.byte	0x2
	.byte	0xe5
	.byte	0x6
	.8byte	.LFB13
	.8byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x3530
	.uleb128 0x26
	.string	"i"
	.byte	0xe7
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x34
	.4byte	.LASF339
	.byte	0x2
	.byte	0xc1
	.byte	0xd
	.8byte	.LFB12
	.8byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x356c
	.uleb128 0x35
	.4byte	.LASF98
	.byte	0x2
	.byte	0xc1
	.byte	0x31
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x16
	.string	"dst"
	.byte	0xc1
	.byte	0x41
	.4byte	0x42b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0xd
	.4byte	.LASF340
	.2byte	0x1c5
	.8byte	.LFB11
	.8byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x363a
	.uleb128 0x2
	.string	"s"
	.byte	0x2
	.2byte	0x1c7
	.byte	0x9
	.4byte	0x46
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1
	.4byte	.LASF150
	.byte	0x2
	.2byte	0x1c8
	.byte	0x19
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.4byte	.LASF341
	.byte	0x2
	.2byte	0x1c9
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.string	"st"
	.byte	0x2
	.2byte	0x1ca
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.4byte	.LASF342
	.byte	0x2
	.2byte	0x1cb
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1
	.4byte	.LASF343
	.byte	0x2
	.2byte	0x1cc
	.byte	0x13
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x1
	.4byte	.LASF344
	.byte	0x2
	.2byte	0x1cd
	.byte	0x19
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x1
	.4byte	.LASF345
	.byte	0x2
	.2byte	0x1ce
	.byte	0x19
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x1
	.4byte	.LASF346
	.byte	0x2
	.2byte	0x1cf
	.byte	0x19
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x1
	.4byte	.LASF347
	.byte	0x2
	.2byte	0x1d0
	.byte	0x19
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -80
	.uleb128 0x1
	.4byte	.LASF348
	.byte	0x2
	.2byte	0x1d1
	.byte	0x19
	.4byte	0x78
	.uleb128 0x3
	.byte	0x91
	.sleb128 -88
	.byte	0
	.uleb128 0x25
	.4byte	.LASF349
	.2byte	0x190
	.byte	0x1d
	.4byte	0x71
	.8byte	.LFB10
	.8byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x366b
	.uleb128 0x4
	.string	"b"
	.byte	0x2
	.2byte	0x190
	.byte	0x32
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x36
	.4byte	.LASF350
	.byte	0x2
	.byte	0xc6
	.byte	0x1d
	.4byte	0x71
	.8byte	.LFB9
	.8byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x369a
	.uleb128 0x26
	.string	"x"
	.byte	0xc8
	.byte	0x19
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x37
	.4byte	.LASF351
	.byte	0x2
	.byte	0x84
	.byte	0x14
	.8byte	.LFB8
	.8byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x36e0
	.uleb128 0x16
	.string	"f0"
	.byte	0x84
	.byte	0x32
	.4byte	0x6a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -18
	.uleb128 0x16
	.string	"f1"
	.byte	0x84
	.byte	0x4c
	.4byte	0x6a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x16
	.string	"f2"
	.byte	0x84
	.byte	0x66
	.4byte	0x6a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -22
	.byte	0
	.uleb128 0x38
	.4byte	.LASF352
	.byte	0x2
	.byte	0x83
	.byte	0x1d
	.4byte	0x71
	.8byte	.LFB7
	.8byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x371b
	.uleb128 0x16
	.string	"b"
	.byte	0x83
	.byte	0x36
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x16
	.string	"o"
	.byte	0x83
	.byte	0x49
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x39
	.4byte	.LASF355
	.byte	0x1
	.2byte	0x196
	.byte	0x14
	.8byte	.LFB6
	.8byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x4
	.string	"b"
	.byte	0x1
	.2byte	0x196
	.byte	0x2d
	.4byte	0x78
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x4
	.string	"o"
	.byte	0x1
	.2byte	0x196
	.byte	0x40
	.4byte	0x71
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x4
	.string	"v"
	.byte	0x1
	.2byte	0x196
	.byte	0x53
	.4byte	0x71
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
	.uleb128 0xb
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
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
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
	.uleb128 0x3
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
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
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0x7
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0x8
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x9
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0xa
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0xb
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x49
	.uleb128 0x13
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
	.sleb128 2
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
	.uleb128 0xe
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0xf
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
	.uleb128 0x10
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
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
	.uleb128 0x12
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
	.uleb128 0x13
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x14
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x17
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0x1a
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0x1c
	.uleb128 0x2e
	.byte	0
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
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x21
	.sleb128 511
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x21
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
	.sleb128 3
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
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x23
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 3
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
	.uleb128 0x24
	.uleb128 0x2e
	.byte	0
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
	.byte	0
	.byte	0
	.uleb128 0x25
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x26
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 2
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
	.uleb128 0x27
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
	.uleb128 0x28
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
	.uleb128 0x29
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x2a
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
	.uleb128 0x2b
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
	.uleb128 0x2c
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
	.uleb128 0x2d
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x2e
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x2f
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
	.uleb128 0x30
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x31
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x32
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
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x33
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
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
	.uleb128 0x34
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
	.uleb128 0x35
	.uleb128 0x5
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
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x36
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
	.uleb128 0x37
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
	.uleb128 0x38
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
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x39
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
	.uleb128 .LBB8-.Ltext0
	.uleb128 .LBE8-.Ltext0
	.byte	0x4
	.uleb128 .LBB9-.Ltext0
	.uleb128 .LBE9-.Ltext0
	.byte	0
.Ldebug_ranges3:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF226:
	.string	"newi"
.LASF125:
	.string	"get_current_file_table"
.LASF169:
	.string	"left"
.LASF254:
	.string	"last"
.LASF165:
	.string	"fs_size"
.LASF205:
	.string	"fs_rename"
.LASF45:
	.string	"vaddr"
.LASF182:
	.string	"created_new"
.LASF262:
	.string	"is_stdout"
.LASF150:
	.string	"base"
.LASF154:
	.string	"oldfd"
.LASF132:
	.string	"neoc_file_owner_remove"
.LASF133:
	.string	"neoc_file_owner_add"
.LASF303:
	.string	"inode_blockno"
.LASF136:
	.string	"strlen"
.LASF155:
	.string	"newfd"
.LASF140:
	.string	"strncmp"
.LASF50:
	.string	"program_size"
.LASF149:
	.string	"whence"
.LASF331:
	.string	"bcache_release"
.LASF91:
	.string	"flags"
.LASF306:
	.string	"alloc_data_block"
.LASF302:
	.string	"secondbuf"
.LASF239:
	.string	"namebuf"
.LASF93:
	.string	"virtq_used_elem"
.LASF7:
	.string	"unsigned int"
.LASF57:
	.string	"next"
.LASF123:
	.string	"neoc_fs_push_free_file"
.LASF252:
	.string	"leafname"
.LASF231:
	.string	"i_12"
.LASF232:
	.string	"i_13"
.LASF218:
	.string	"zero"
.LASF222:
	.string	"i_15"
.LASF213:
	.string	"i_16"
.LASF183:
	.string	"i_17"
.LASF28:
	.string	"addrs"
.LASF237:
	.string	"remove_dirent"
.LASF215:
	.string	"fs_unlink"
.LASF127:
	.string	"neoc_fs_push_free_pipe"
.LASF192:
	.string	"fs_open"
.LASF273:
	.string	"build_abs_normalized"
.LASF173:
	.string	"to_write"
.LASF234:
	.string	"merged"
.LASF253:
	.string	"save"
.LASF245:
	.string	"block_end"
.LASF265:
	.string	"fs_init"
.LASF46:
	.string	"memsz"
.LASF24:
	.string	"mode"
.LASF342:
	.string	"devQ"
.LASF89:
	.string	"virtq_desc"
.LASF53:
	.string	"num_process_pages"
.LASF116:
	.string	"g_time_offset"
.LASF229:
	.string	"compn"
.LASF235:
	.string	"comps"
.LASF298:
	.string	"nb_4"
.LASF114:
	.string	"bcache_misses"
.LASF242:
	.string	"ents"
.LASF200:
	.string	"fs_link"
.LASF86:
	.string	"FK_FILE"
.LASF92:
	.string	"ring"
.LASF333:
	.string	"slot"
.LASF350:
	.string	"fs_now"
.LASF352:
	.string	"mr32"
.LASF195:
	.string	"fs_chmod"
.LASF168:
	.string	"to_total"
.LASF305:
	.string	"dbl_index1"
.LASF54:
	.string	"process_pages_list"
.LASF264:
	.string	"is_pipe"
.LASF309:
	.string	"free_inode_blocks"
.LASF326:
	.string	"shift"
.LASF44:
	.string	"stack_top"
.LASF87:
	.string	"FK_PIPE"
.LASF167:
	.string	"count"
.LASF248:
	.string	"ents_10"
.LASF160:
	.string	"result"
.LASF52:
	.string	"file_table"
.LASF202:
	.string	"newpath"
.LASF238:
	.string	"parent_inum"
.LASF63:
	.string	"file"
.LASF138:
	.string	"strncpy"
.LASF78:
	.string	"write_open"
.LASF14:
	.string	"nlog"
.LASF176:
	.string	"bufblk"
.LASF243:
	.string	"cur_entries"
.LASF135:
	.string	"strncat"
.LASF316:
	.string	"bmapblk"
.LASF64:
	.string	"kind"
.LASF223:
	.string	"pdi2"
.LASF27:
	.string	"ctime"
.LASF206:
	.string	"oldpd"
.LASF340:
	.string	"virtio_blk_init"
.LASF66:
	.string	"pipe"
.LASF159:
	.string	"owner"
.LASF284:
	.string	"joined"
.LASF278:
	.string	"fs_realpath"
.LASF32:
	.string	"stat"
.LASF282:
	.string	"lbuf"
.LASF51:
	.string	"xstatus"
.LASF124:
	.string	"neoc_file_owner_clear"
.LASF65:
	.string	"used"
.LASF297:
	.string	"first_blk"
.LASF321:
	.string	"read_inode"
.LASF99:
	.string	"bcache_entry"
.LASF151:
	.string	"newoff"
.LASF142:
	.string	"proc_slot_get"
.LASF146:
	.string	"puts"
.LASF337:
	.string	"bcache_stats"
.LASF286:
	.string	"prefix"
.LASF211:
	.string	"target"
.LASF311:
	.string	"dblk"
.LASF148:
	.string	"offset"
.LASF339:
	.string	"virtio_blk_read"
.LASF126:
	.string	"neoc_fs_pop_free_file"
.LASF267:
	.string	"pipealloc"
.LASF256:
	.string	"next_inum"
.LASF120:
	.string	"_Bool"
.LASF109:
	.string	"status_byte"
.LASF317:
	.string	"bitmap_set"
.LASF49:
	.string	"program"
.LASF240:
	.string	"add_dirent"
.LASF180:
	.string	"fs_open2"
.LASF171:
	.string	"blk_idx"
.LASF158:
	.string	"fs_dup_table"
.LASF338:
	.string	"bcache_init"
.LASF196:
	.string	"fs_lstat"
.LASF71:
	.string	"num_owner_process"
.LASF21:
	.string	"major"
.LASF129:
	.string	"neoc_fs_pop_free_pipe"
.LASF212:
	.string	"linkpath"
.LASF181:
	.string	"path"
.LASF281:
	.string	"first"
.LASF104:
	.string	"vbase"
.LASF355:
	.string	"mw32"
.LASF313:
	.string	"second"
.LASF287:
	.string	"path_lookup"
.LASF217:
	.string	"pdir"
.LASF276:
	.string	"owner_cap"
.LASF115:
	.string	"block_buf"
.LASF190:
	.string	"leaf"
.LASF94:
	.string	"virtq_avail"
.LASF270:
	.string	"alloc_file"
.LASF328:
	.string	"write_block"
.LASF2:
	.string	"char"
.LASF156:
	.string	"fs_dup2"
.LASF288:
	.string	"dir_lookup"
.LASF300:
	.string	"db_5"
.LASF85:
	.string	"FK_STDERR"
.LASF198:
	.string	"bufsz"
.LASF274:
	.string	"owner_remove"
.LASF325:
	.string	"check_perm"
.LASF353:
	.string	"GNU C23 15.2.1 20250808 (Red Hat Cross 15.2.1-1) -mabi=lp64 -mcmodel=medany -misa-spec=20191213 -mtls-dialect=trad -march=rv64imafdc_zicsr_zifencei_zmmul_zaamo_zalrsc_zca_zcd -g -ffreestanding"
.LASF102:
	.string	"dirty"
.LASF47:
	.string	"zombie"
.LASF74:
	.string	"data"
.LASF318:
	.string	"bitmap_test"
.LASF98:
	.string	"sector"
.LASF111:
	.string	"bcache"
.LASF336:
	.string	"oldest"
.LASF230:
	.string	"llen"
.LASF294:
	.string	"dindirect_blk"
.LASF118:
	.string	"neoc_pipe_linked_file_clear_pipe_refs"
.LASF208:
	.string	"oname"
.LASF314:
	.string	"sbuf"
.LASF88:
	.string	"FK_TTY"
.LASF82:
	.string	"linked_file_list"
.LASF335:
	.string	"victim"
.LASF225:
	.string	"i_14"
.LASF13:
	.string	"ninodes"
.LASF268:
	.string	"user_va"
.LASF80:
	.string	"nwriter"
.LASF73:
	.string	"spipe"
.LASF188:
	.string	"i_18"
.LASF348:
	.string	"vq_phys"
.LASF117:
	.string	"gActiveProc"
.LASF258:
	.string	"pipewrite"
.LASF296:
	.string	"first_entries"
.LASF292:
	.string	"idx1"
.LASF164:
	.string	"massive"
.LASF9:
	.string	"long long int"
.LASF130:
	.string	"yield"
.LASF121:
	.string	"panic"
.LASF17:
	.string	"bmapstart"
.LASF189:
	.string	"path2"
.LASF143:
	.string	"printf"
.LASF224:
	.string	"fs_mkdir"
.LASF332:
	.string	"bcache_get"
.LASF204:
	.string	"newabs"
.LASF280:
	.string	"depth"
.LASF246:
	.string	"blk_idx_8"
.LASF41:
	.string	"context"
.LASF285:
	.string	"path_lookup_lim"
.LASF259:
	.string	"piperead"
.LASF113:
	.string	"bcache_hits"
.LASF261:
	.string	"is_tty"
.LASF174:
	.string	"disk_blk"
.LASF177:
	.string	"fs_read"
.LASF112:
	.string	"bcache_time"
.LASF330:
	.string	"read_block"
.LASF175:
	.string	"newsize"
.LASF186:
	.string	"pdi_inh"
.LASF147:
	.string	"memset"
.LASF131:
	.string	"neoc_fs_pool_init"
.LASF301:
	.string	"firstbuf"
.LASF179:
	.string	"to_read"
.LASF134:
	.string	"neoc_proc_is_file_open"
.LASF107:
	.string	"vq_area"
.LASF197:
	.string	"fs_readlink"
.LASF11:
	.string	"size"
.LASF266:
	.string	"new_file_table"
.LASF22:
	.string	"minor"
.LASF334:
	.string	"bcache_evict"
.LASF163:
	.string	"fs_close"
.LASF40:
	.string	"trapframe"
.LASF48:
	.string	"pagetable"
.LASF84:
	.string	"FK_STDOUT"
.LASF210:
	.string	"fs_symlink"
.LASF67:
	.string	"pipe_used"
.LASF152:
	.string	"fs_lseek"
.LASF299:
	.string	"second_entries"
.LASF320:
	.string	"inodes_per_blk"
.LASF214:
	.string	"tlen"
.LASF255:
	.string	"nexttok"
.LASF153:
	.string	"fs_fstat_fd"
.LASF346:
	.string	"sz_used"
.LASF77:
	.string	"read_open"
.LASF10:
	.string	"long double"
.LASF59:
	.string	"pgrp"
.LASF19:
	.string	"dinode"
.LASF329:
	.string	"virtio_blk_write"
.LASF257:
	.string	"copy"
.LASF38:
	.string	"process_kalloc_address_list"
.LASF341:
	.string	"devfeat"
.LASF29:
	.string	"dirent"
.LASF283:
	.string	"remain"
.LASF68:
	.string	"read_pipe"
.LASF58:
	.string	"umask"
.LASF343:
	.string	"drvQ"
.LASF72:
	.string	"owner_process_list"
.LASF184:
	.string	"new_inum"
.LASF327:
	.string	"perms"
.LASF42:
	.string	"parent"
.LASF277:
	.string	"dump_inode"
.LASF55:
	.string	"debug_"
.LASF3:
	.string	"short int"
.LASF324:
	.string	"read_superblock"
.LASF207:
	.string	"filedi"
.LASF4:
	.string	"long int"
.LASF76:
	.string	"nwrite"
.LASF201:
	.string	"oldpath"
.LASF62:
	.string	"username"
.LASF33:
	.string	"context_t"
.LASF106:
	.string	"avail"
.LASF315:
	.string	"bitmap_clear"
.LASF81:
	.string	"num_linked_file"
.LASF122:
	.string	"neoc_pipe_linked_file_add"
.LASF310:
	.string	"iblk"
.LASF43:
	.string	"parent_pid"
.LASF263:
	.string	"is_stdin"
.LASF157:
	.string	"free_fs_table"
.LASF323:
	.string	"file_system_init"
.LASF228:
	.string	"tok_start"
.LASF101:
	.string	"refcnt"
.LASF178:
	.string	"remaining"
.LASF269:
	.string	"free_file"
.LASF56:
	.string	"deleted"
.LASF203:
	.string	"oldabs"
.LASF166:
	.string	"fs_write"
.LASF61:
	.string	"supp_gid_list"
.LASF199:
	.string	"fs_stat"
.LASF31:
	.string	"name"
.LASF354:
	.string	"anonymous_typeY4"
.LASF103:
	.string	"last_use"
.LASF128:
	.string	"neoc_pipe_linked_file_clear"
.LASF69:
	.string	"write_pipe"
.LASF271:
	.string	"free_pipe"
.LASF37:
	.string	"num_process_kalloc_address"
.LASF70:
	.string	"oflags"
.LASF39:
	.string	"proc"
.LASF26:
	.string	"mtime"
.LASF141:
	.string	"neoc_proc_has_supp_gid"
.LASF162:
	.string	"fs_exit"
.LASF216:
	.string	"pdi3"
.LASF8:
	.string	"long unsigned int"
.LASF15:
	.string	"logstart"
.LASF249:
	.string	"block_end_11"
.LASF347:
	.string	"sz_total"
.LASF344:
	.string	"sz_desc"
.LASF275:
	.string	"owner_add"
.LASF209:
	.string	"nname"
.LASF289:
	.string	"read_data"
.LASF161:
	.string	"orig"
.LASF233:
	.string	"need"
.LASF194:
	.string	"fs_chown"
.LASF345:
	.string	"sz_avail"
.LASF227:
	.string	"outsz"
.LASF139:
	.string	"strcmp"
.LASF304:
	.string	"dbl_index0"
.LASF60:
	.string	"nsupp"
.LASF20:
	.string	"type"
.LASF18:
	.string	"superblock"
.LASF5:
	.string	"unsigned char"
.LASF349:
	.string	"BBLOCK"
.LASF35:
	.string	"process_pages"
.LASF172:
	.string	"blk_off"
.LASF96:
	.string	"virtio_blk_req"
.LASF30:
	.string	"inum"
.LASF108:
	.string	"aidx"
.LASF272:
	.string	"alloc_pipe"
.LASF16:
	.string	"inodestart"
.LASF250:
	.string	"alloc_inode_T_FILE"
.LASF137:
	.string	"strtok"
.LASF191:
	.string	"leafx"
.LASF90:
	.string	"addr"
.LASF312:
	.string	"sblk"
.LASF119:
	.string	"neoc_pipe_linked_file_remove"
.LASF293:
	.string	"idx2"
.LASF100:
	.string	"blkno"
.LASF36:
	.string	"process_kalloc_address"
.LASF319:
	.string	"write_inode"
.LASF251:
	.string	"path_parent_lookup_abs"
.LASF247:
	.string	"disk_blk_9"
.LASF295:
	.string	"nb_3"
.LASF23:
	.string	"nlink"
.LASF308:
	.string	"datastart"
.LASF12:
	.string	"nblocks"
.LASF75:
	.string	"nread"
.LASF185:
	.string	"pinum"
.LASF219:
	.string	"fs_rmdir"
.LASF291:
	.string	"indirect_blk"
.LASF6:
	.string	"short unsigned int"
.LASF187:
	.string	"want"
.LASF144:
	.string	"memcpy"
.LASF110:
	.string	"dma_buf"
.LASF221:
	.string	"entries"
.LASF244:
	.string	"abs_idx"
.LASF97:
	.string	"reserved"
.LASF241:
	.string	"child_inum"
.LASF170:
	.string	"written"
.LASF145:
	.string	"kalloc"
.LASF260:
	.string	"pipe_open"
.LASF95:
	.string	"virtq_used"
.LASF279:
	.string	"rest"
.LASF79:
	.string	"nreader"
.LASF34:
	.string	"mepc"
.LASF193:
	.string	"fs_utimes"
.LASF351:
	.string	"set_flags"
.LASF290:
	.string	"inode_bmap_alloc"
.LASF105:
	.string	"desc"
.LASF25:
	.string	"atime"
.LASF220:
	.string	"has_entries"
.LASF307:
	.string	"bmapblocks"
.LASF322:
	.string	"dest"
.LASF236:
	.string	"write_data_inode"
.LASF83:
	.string	"FK_STDIN"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"fs_neoc.c"
.LASF1:
	.string	"/home/ab25cq/minux9"
	.ident	"GCC: (GNU) 15.2.1 20250808 (Red Hat Cross 15.2.1-1)"
	.section	.note.GNU-stack,"",@progbits
