#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8259D3C0"))) PPC_WEAK_FUNC(sub_8259D3C0);
PPC_FUNC_IMPL(__imp__sub_8259D3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r11,r3,132
	r11.s64 = ctx.r3.s64 + 132;
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259d420
	if (cr6.eq) goto loc_8259D420;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_8259D404:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8259d468
	if (cr6.eq) goto loc_8259D468;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8259d404
	if (!cr6.eq) goto loc_8259D404;
loc_8259D420:
	// li r31,0
	r31.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8259d454
	if (cr6.eq) goto loc_8259D454;
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8259d454
	if (!cr6.lt) goto loc_8259D454;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a1a00
	sub_825A1A00(ctx, base);
loc_8259D454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8259D468:
	// mr r31,r11
	r31.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8259D46C"))) PPC_WEAK_FUNC(sub_8259D46C);
PPC_FUNC_IMPL(__imp__sub_8259D46C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d424
	// ERROR 8259D424
	return;
}

__attribute__((alias("__imp__sub_8259D470"))) PPC_WEAK_FUNC(sub_8259D470);
PPC_FUNC_IMPL(__imp__sub_8259D470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lwz r11,-20108(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20108);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8259d4b8
	if (!cr6.eq) goto loc_8259D4B8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-20108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20108, r11.u32);
	// addi r3,r9,-19420
	ctx.r3.s64 = ctx.r9.s64 + -19420;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,-20112(r27)
	PPC_STORE_U32(r27.u32 + -20112, ctx.r3.u32);
loc_8259D4B8:
	// rlwinm r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8259d65c
	if (cr6.eq) goto loc_8259D65C;
	// lwz r10,168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// addi r30,r28,156
	r30.s64 = r28.s64 + 156;
	// lwz r11,160(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r11
	r29.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259d5e0
	if (cr6.eq) goto loc_8259D5E0;
loc_8259D4E4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,-20112(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + -20112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8259d50c
	if (cr6.eq) goto loc_8259D50C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8259d50c
	if (cr6.eq) goto loc_8259D50C;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x8259d5c8
	goto loc_8259D5C8;
loc_8259D50C:
	// clrlwi r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8259d524
	if (cr6.eq) goto loc_8259D524;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x825a1a20
	sub_825A1A20(ctx, base);
	// b 0x8259d574
	goto loc_8259D574;
loc_8259D524:
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// addi r31,r28,180
	r31.s64 = r28.s64 + 180;
	// lwz r10,188(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 188);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8259d550
	if (!cr6.gt) goto loc_8259D550;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259D550:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8259d574
	if (cr0.eq) goto loc_8259D574;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8259D574:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r9,r10,r29
	ctx.r9.s64 = r29.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8259d5bc
	if (!cr6.lt) goto loc_8259D5BC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8259D594:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8259d594
	if (cr6.lt) goto loc_8259D594;
loc_8259D5BC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_8259D5C8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259d4e4
	if (!cr6.eq) goto loc_8259D4E4;
loc_8259D5E0:
	// clrlwi r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8259d708
	if (cr6.eq) goto loc_8259D708;
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// addi r30,r28,180
	r30.s64 = r28.s64 + 180;
	// lwz r10,184(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259d708
	if (cr6.eq) goto loc_8259D708;
loc_8259D60C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8259d638
	if (!cr6.eq) goto loc_8259D638;
	// bl 0x825a1a20
	sub_825A1A20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580f78
	sub_82580F78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8259d63c
	goto loc_8259D63C;
loc_8259D638:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8259D63C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259d60c
	if (!cr6.eq) goto loc_8259D60C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8259D65C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8259d088
	sub_8259D088(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259d708
	if (cr6.eq) goto loc_8259D708;
	// lwz r11,168(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// addi r30,r28,156
	r30.s64 = r28.s64 + 156;
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 160);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259d708
	if (cr6.eq) goto loc_8259D708;
loc_8259D698:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8259d6ec
	if (!cr6.eq) goto loc_8259D6EC;
	// clrlwi r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8259d6cc
	if (cr6.eq) goto loc_8259D6CC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a1a20
	sub_825A1A20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580f78
	sub_82580F78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8259d6f0
	goto loc_8259D6F0;
loc_8259D6CC:
	// addi r3,r28,180
	ctx.r3.s64 = r28.s64 + 180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82580f78
	sub_82580F78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8259d6f0
	goto loc_8259D6F0;
loc_8259D6EC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8259D6F0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259d698
	if (!cr6.eq) goto loc_8259D698;
loc_8259D708:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8259D70C"))) PPC_WEAK_FUNC(sub_8259D70C);
PPC_FUNC_IMPL(__imp__sub_8259D70C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8259D710"))) PPC_WEAK_FUNC(sub_8259D710);
PPC_FUNC_IMPL(__imp__sub_8259D710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r3,180
	r27.s64 = ctx.r3.s64 + 180;
	// addi r10,r11,-9040
	ctx.r10.s64 = r11.s64 + -9040;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,192(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x8259d750
	if (!cr6.gt) goto loc_8259D750;
loc_8259D738:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259d738
	if (cr6.gt) goto loc_8259D738;
loc_8259D750:
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r28,r3,156
	r28.s64 = ctx.r3.s64 + 156;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8259d778
	if (!cr6.gt) goto loc_8259D778;
loc_8259D760:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259d760
	if (cr6.gt) goto loc_8259D760;
loc_8259D778:
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259d7e0
	if (cr6.eq) goto loc_8259D7E0;
loc_8259D798:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a1a20
	sub_825A1A20(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8259d7c4
	if (cr6.eq) goto loc_8259D7C4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259D7C4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259d798
	if (!cr6.eq) goto loc_8259D798;
loc_8259D7E0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8259d804
	if (!cr6.gt) goto loc_8259D804;
loc_8259D7EC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259d7ec
	if (cr6.gt) goto loc_8259D7EC;
loc_8259D804:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8259def0
	sub_8259DEF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8259def0
	sub_8259DEF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259def0
	sub_8259DEF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8259D820"))) PPC_WEAK_FUNC(sub_8259D820);
PPC_FUNC_IMPL(__imp__sub_8259D820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8259D824"))) PPC_WEAK_FUNC(sub_8259D824);
PPC_FUNC_IMPL(__imp__sub_8259D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259D828"))) PPC_WEAK_FUNC(sub_8259D828);
PPC_FUNC_IMPL(__imp__sub_8259D828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x825a1128
	sub_825A1128(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-9040
	ctx.r10.s64 = r11.s64 + -9040;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r8,-9052
	r28.s64 = ctx.r8.s64 + -9052;
	// addi r30,r25,132
	r30.s64 = r25.s64 + 132;
	// stw r9,116(r25)
	PPC_STORE_U32(r25.u32 + 116, ctx.r9.u32);
	// stw r28,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r28.u32);
	// stw r31,136(r25)
	PPC_STORE_U32(r25.u32 + 136, r31.u32);
	// stw r31,144(r25)
	PPC_STORE_U32(r25.u32 + 144, r31.u32);
	// stw r31,140(r25)
	PPC_STORE_U32(r25.u32 + 140, r31.u32);
	// stw r31,148(r25)
	PPC_STORE_U32(r25.u32 + 148, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,148(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 148);
	// addi r29,r25,156
	r29.s64 = r25.s64 + 156;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r6,148(r25)
	PPC_STORE_U32(r25.u32 + 148, ctx.r6.u32);
	// stw r31,160(r25)
	PPC_STORE_U32(r25.u32 + 160, r31.u32);
	// stw r31,168(r25)
	PPC_STORE_U32(r25.u32 + 168, r31.u32);
	// stw r31,164(r25)
	PPC_STORE_U32(r25.u32 + 164, r31.u32);
	// stw r31,172(r25)
	PPC_STORE_U32(r25.u32 + 172, r31.u32);
	// stw r28,156(r25)
	PPC_STORE_U32(r25.u32 + 156, r28.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,172(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 172);
	// addi r27,r25,180
	r27.s64 = r25.s64 + 180;
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r4,172(r25)
	PPC_STORE_U32(r25.u32 + 172, ctx.r4.u32);
	// stw r31,184(r25)
	PPC_STORE_U32(r25.u32 + 184, r31.u32);
	// stw r31,192(r25)
	PPC_STORE_U32(r25.u32 + 192, r31.u32);
	// stw r31,188(r25)
	PPC_STORE_U32(r25.u32 + 188, r31.u32);
	// stw r31,196(r25)
	PPC_STORE_U32(r25.u32 + 196, r31.u32);
	// stw r28,180(r25)
	PPC_STORE_U32(r25.u32 + 180, r28.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,196(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 196);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,196(r25)
	PPC_STORE_U32(r25.u32 + 196, ctx.r10.u32);
	// bl 0x826cb298
	sub_826CB298(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,-10512
	ctx.r3.s64 = ctx.r8.s64 + -10512;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,116(r25)
	PPC_STORE_U32(r25.u32 + 116, ctx.r7.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r3,r6,12852
	ctx.r3.s64 = ctx.r6.s64 + 12852;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8259d990
	if (cr6.eq) goto loc_8259D990;
	// rotlwi r11,r5,0
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259d990
	if (cr6.eq) goto loc_8259D990;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259d994
	if (!cr6.eq) goto loc_8259D994;
loc_8259D990:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8259D994:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,128(r25)
	PPC_STORE_U8(r25.u32 + 128, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r3,r10,-8940
	ctx.r3.s64 = ctx.r10.s64 + -8940;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8259da0c
	if (cr6.eq) goto loc_8259DA0C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259da0c
	if (cr6.eq) goto loc_8259DA0C;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259da10
	if (!cr6.eq) goto loc_8259DA10;
loc_8259DA0C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8259DA10:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,129(r25)
	PPC_STORE_U8(r25.u32 + 129, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r3,r10,-8952
	ctx.r3.s64 = ctx.r10.s64 + -8952;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8259da88
	if (cr6.eq) goto loc_8259DA88;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259da88
	if (cr6.eq) goto loc_8259DA88;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259da8c
	if (!cr6.eq) goto loc_8259DA8C;
loc_8259DA88:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8259DA8C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,130(r25)
	PPC_STORE_U8(r25.u32 + 130, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r3,r10,-8968
	ctx.r3.s64 = ctx.r10.s64 + -8968;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8259db04
	if (cr6.eq) goto loc_8259DB04;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259db04
	if (cr6.eq) goto loc_8259DB04;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259db08
	if (!cr6.eq) goto loc_8259DB08;
loc_8259DB04:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8259DB08:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,131(r25)
	PPC_STORE_U8(r25.u32 + 131, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-8992
	ctx.r3.s64 = ctx.r9.s64 + -8992;
	// lfs f0,6240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8259db88
	if (cr6.eq) goto loc_8259DB88;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259db88
	if (cr6.eq) goto loc_8259DB88;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259db8c
	if (!cr6.eq) goto loc_8259DB8C;
loc_8259DB88:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_8259DB8C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,120(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 120, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-9008
	r31.s64 = r11.s64 + -9008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259de0c
	if (cr6.eq) goto loc_8259DE0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x8259dc34
	if (!cr6.gt) goto loc_8259DC34;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259DC34:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x8259dc6c
	if (!cr6.gt) goto loc_8259DC6C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259DC6C:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x8259dca4
	if (!cr6.gt) goto loc_8259DCA4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259DCA4:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259de0c
	if (cr6.eq) goto loc_8259DE0C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r24,r11,18440
	r24.s64 = r11.s64 + 18440;
	// addi r28,r10,-29404
	r28.s64 = ctx.r10.s64 + -29404;
	// addi r27,r9,-9020
	r27.s64 = ctx.r9.s64 + -9020;
loc_8259DCF4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259dd70
	if (cr6.eq) goto loc_8259DD70;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259dd70
	if (cr6.eq) goto loc_8259DD70;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259dd74
	if (!cr6.eq) goto loc_8259DD74;
loc_8259DD70:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8259DD74:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r23,0(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,22272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 22272);
	// bl 0x825a1f80
	sub_825A1F80(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8259ddc4
	if (!cr6.gt) goto loc_8259DDC4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259DDC4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8259dde4
	if (cr0.eq) goto loc_8259DDE4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_8259DDE4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259dcf4
	if (!cr6.eq) goto loc_8259DCF4;
loc_8259DE0C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8259DE14"))) PPC_WEAK_FUNC(sub_8259DE14);
PPC_FUNC_IMPL(__imp__sub_8259DE14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8259DE18"))) PPC_WEAK_FUNC(sub_8259DE18);
PPC_FUNC_IMPL(__imp__sub_8259DE18) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259dfd8
	sub_8259DFD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259DE18"))) PPC_WEAK_FUNC(sub_8259DE18);
PPC_FUNC_IMPL(__imp__sub_8259DE18) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8259DE1C"))) PPC_WEAK_FUNC(sub_8259DE1C);
PPC_FUNC_IMPL(__imp__sub_8259DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259DE20"))) PPC_WEAK_FUNC(sub_8259DE20);
PPC_FUNC_IMPL(__imp__sub_8259DE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-9064
	ctx.r9.s64 = r11.s64 + -9064;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8259de64
	if (!cr6.gt) goto loc_8259DE64;
loc_8259DE4C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259de4c
	if (cr6.gt) goto loc_8259DE4C;
loc_8259DE64:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259de7c
	if (cr6.eq) goto loc_8259DE7C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259DE7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259DE8C"))) PPC_WEAK_FUNC(sub_8259DE8C);
PPC_FUNC_IMPL(__imp__sub_8259DE8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DE90"))) PPC_WEAK_FUNC(sub_8259DE90);
PPC_FUNC_IMPL(__imp__sub_8259DE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-9052
	ctx.r9.s64 = ctx.r10.s64 + -9052;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259DEE8"))) PPC_WEAK_FUNC(sub_8259DEE8);
PPC_FUNC_IMPL(__imp__sub_8259DEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DEEC"))) PPC_WEAK_FUNC(sub_8259DEEC);
PPC_FUNC_IMPL(__imp__sub_8259DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259DEF0"))) PPC_WEAK_FUNC(sub_8259DEF0);
PPC_FUNC_IMPL(__imp__sub_8259DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-9052
	ctx.r9.s64 = r11.s64 + -9052;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8259df34
	if (!cr6.gt) goto loc_8259DF34;
loc_8259DF1C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259df1c
	if (cr6.gt) goto loc_8259DF1C;
loc_8259DF34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259dfd8
	sub_8259DFD8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-9064
	ctx.r10.s64 = r11.s64 + -9064;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8259df70
	if (!cr6.gt) goto loc_8259DF70;
loc_8259DF58:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259df58
	if (cr6.gt) goto loc_8259DF58;
loc_8259DF70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259DF80"))) PPC_WEAK_FUNC(sub_8259DF80);
PPC_FUNC_IMPL(__imp__sub_8259DF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DF84"))) PPC_WEAK_FUNC(sub_8259DF84);
PPC_FUNC_IMPL(__imp__sub_8259DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259DF88"))) PPC_WEAK_FUNC(sub_8259DF88);
PPC_FUNC_IMPL(__imp__sub_8259DF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259def0
	sub_8259DEF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259dfc0
	if (cr6.eq) goto loc_8259DFC0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259DFC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259DFD4"))) PPC_WEAK_FUNC(sub_8259DFD4);
PPC_FUNC_IMPL(__imp__sub_8259DFD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DFD8"))) PPC_WEAK_FUNC(sub_8259DFD8);
PPC_FUNC_IMPL(__imp__sub_8259DFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x8259e0bc
	if (cr6.eq) goto loc_8259E0BC;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8259e04c
	if (!cr6.eq) goto loc_8259E04C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x8259e0bc
	if (cr6.eq) goto loc_8259E0BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8259e0bc
	goto loc_8259E0BC;
loc_8259E04C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259de90
	sub_8259DE90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8259e078
	if (!cr6.gt) goto loc_8259E078;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259E078:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x8259def0
	sub_8259DEF0(ctx, base);
loc_8259E0BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259E0D0"))) PPC_WEAK_FUNC(sub_8259E0D0);
PPC_FUNC_IMPL(__imp__sub_8259E0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E0D4"))) PPC_WEAK_FUNC(sub_8259E0D4);
PPC_FUNC_IMPL(__imp__sub_8259E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E0D8"))) PPC_WEAK_FUNC(sub_8259E0D8);
PPC_FUNC_IMPL(__imp__sub_8259E0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259e110
	if (cr6.eq) goto loc_8259E110;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259E110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259E124"))) PPC_WEAK_FUNC(sub_8259E124);
PPC_FUNC_IMPL(__imp__sub_8259E124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E128"))) PPC_WEAK_FUNC(sub_8259E128);
PPC_FUNC_IMPL(__imp__sub_8259E128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E12C"))) PPC_WEAK_FUNC(sub_8259E12C);
PPC_FUNC_IMPL(__imp__sub_8259E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E130"))) PPC_WEAK_FUNC(sub_8259E130);
PPC_FUNC_IMPL(__imp__sub_8259E130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E134"))) PPC_WEAK_FUNC(sub_8259E134);
PPC_FUNC_IMPL(__imp__sub_8259E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E138"))) PPC_WEAK_FUNC(sub_8259E138);
PPC_FUNC_IMPL(__imp__sub_8259E138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259e194
	if (cr6.eq) goto loc_8259E194;
loc_8259E16C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8259d068
	sub_8259D068(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259e16c
	if (!cr6.eq) goto loc_8259E16C;
loc_8259E194:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 92, temp.u32);
	// stfs f0,88(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 88, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8259E1A8"))) PPC_WEAK_FUNC(sub_8259E1A8);
PPC_FUNC_IMPL(__imp__sub_8259E1A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8259E1AC"))) PPC_WEAK_FUNC(sub_8259E1AC);
PPC_FUNC_IMPL(__imp__sub_8259E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E1B0"))) PPC_WEAK_FUNC(sub_8259E1B0);
PPC_FUNC_IMPL(__imp__sub_8259E1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259e204
	if (cr6.eq) goto loc_8259E204;
loc_8259E1E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8259d360
	sub_8259D360(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259e1e0
	if (!cr6.eq) goto loc_8259E1E0;
loc_8259E204:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 92, temp.u32);
	// stfs f0,88(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 88, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259E218"))) PPC_WEAK_FUNC(sub_8259E218);
PPC_FUNC_IMPL(__imp__sub_8259E218) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259E21C"))) PPC_WEAK_FUNC(sub_8259E21C);
PPC_FUNC_IMPL(__imp__sub_8259E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E220"))) PPC_WEAK_FUNC(sub_8259E220);
PPC_FUNC_IMPL(__imp__sub_8259E220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259e270
	if (cr6.eq) goto loc_8259E270;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_8259E254:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8259e254
	if (!cr6.eq) goto loc_8259E254;
loc_8259E270:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8259E274"))) PPC_WEAK_FUNC(sub_8259E274);
PPC_FUNC_IMPL(__imp__sub_8259E274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E278"))) PPC_WEAK_FUNC(sub_8259E278);
PPC_FUNC_IMPL(__imp__sub_8259E278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_8259E2B4:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x8259e2d4
	if (cr6.eq) goto loc_8259E2D4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8259e2b4
	if (!cr6.eq) goto loc_8259E2B4;
	// blr 
	return;
loc_8259E2D4:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x8259d470
	sub_8259D470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E2DC"))) PPC_WEAK_FUNC(sub_8259E2DC);
PPC_FUNC_IMPL(__imp__sub_8259E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E2E0"))) PPC_WEAK_FUNC(sub_8259E2E0);
PPC_FUNC_IMPL(__imp__sub_8259E2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r30,-8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x8259e33c
	if (cr6.eq) goto loc_8259E33C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r30,116(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 116);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8259E33C:
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259e378
	if (cr6.eq) goto loc_8259E378;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// bne cr6,0x8259e374
	if (!cr6.eq) goto loc_8259E374;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8259E374:
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 116);
loc_8259E378:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x8259e440
	if (cr6.eq) goto loc_8259E440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259e220
	sub_8259E220(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x8259e440
	if (cr6.eq) goto loc_8259E440;
	// lbz r11,130(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259e3d8
	if (cr6.eq) goto loc_8259E3D8;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8259e3d8
	if (!cr6.gt) goto loc_8259E3D8;
loc_8259E3C0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x8259e3c0
	if (cr6.gt) goto loc_8259E3C0;
loc_8259E3D8:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8259e42c
	if (!cr6.gt) goto loc_8259E42C;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,-8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// lbz r5,131(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 131);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8259e42c
	if (cr6.eq) goto loc_8259E42C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8259e42c
	if (!cr6.gt) goto loc_8259E42C;
loc_8259E414:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x8259e414
	if (cr6.gt) goto loc_8259E414;
loc_8259E42C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x8259d068
	sub_8259D068(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8259fe18
	sub_8259FE18(ctx, base);
loc_8259E440:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259E454"))) PPC_WEAK_FUNC(sub_8259E454);
PPC_FUNC_IMPL(__imp__sub_8259E454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E458"))) PPC_WEAK_FUNC(sub_8259E458);
PPC_FUNC_IMPL(__imp__sub_8259E458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8259e4f4
	if (!cr6.gt) goto loc_8259E4F4;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x8259e50c
	if (cr6.lt) goto loc_8259E50C;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8259E48C:
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bge cr6,0x8259e4b8
	if (!cr6.lt) goto loc_8259E4B8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bge 0x8259e48c
	if (!cr0.lt) goto loc_8259E48C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8259E4B8:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// beq cr6,0x8259e4fc
	if (cr6.eq) goto loc_8259E4FC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82746af8
	sub_82746AF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8259E4F4:
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_8259E4FC:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8259fe18
	sub_8259FE18(ctx, base);
loc_8259E50C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8259E518"))) PPC_WEAK_FUNC(sub_8259E518);
PPC_FUNC_IMPL(__imp__sub_8259E518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E51C"))) PPC_WEAK_FUNC(sub_8259E51C);
PPC_FUNC_IMPL(__imp__sub_8259E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E520"))) PPC_WEAK_FUNC(sub_8259E520);
PPC_FUNC_IMPL(__imp__sub_8259E520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259e584
	if (cr6.eq) goto loc_8259E584;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8259e584
	if (cr6.eq) goto loc_8259E584;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8259E558:
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x8259e574
	if (cr6.eq) goto loc_8259E574;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x8259e558
	if (!cr0.lt) goto loc_8259E558;
	// blr 
	return;
loc_8259E574:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// b 0x826e4878
	sub_826E4878(ctx, base);
	return;
loc_8259E584:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8259E594"))) PPC_WEAK_FUNC(sub_8259E594);
PPC_FUNC_IMPL(__imp__sub_8259E594) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E598"))) PPC_WEAK_FUNC(sub_8259E598);
PPC_FUNC_IMPL(__imp__sub_8259E598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_8259E5D0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8259e5f0
	if (cr6.eq) goto loc_8259E5F0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8259e5d0
	if (!cr6.eq) goto loc_8259E5D0;
	// blr 
	return;
loc_8259E5F0:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8259E620"))) PPC_WEAK_FUNC(sub_8259E620);
PPC_FUNC_IMPL(__imp__sub_8259E620) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d3c0
	sub_8259D3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E624"))) PPC_WEAK_FUNC(sub_8259E624);
PPC_FUNC_IMPL(__imp__sub_8259E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E628"))) PPC_WEAK_FUNC(sub_8259E628);
PPC_FUNC_IMPL(__imp__sub_8259E628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8259e664
	if (!cr6.gt) goto loc_8259E664;
loc_8259E64C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x8259e64c
	if (cr6.gt) goto loc_8259E64C;
loc_8259E664:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8259e68c
	if (!cr6.gt) goto loc_8259E68C;
loc_8259E674:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x8259e674
	if (cr6.gt) goto loc_8259E674;
loc_8259E68C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-20088
	ctx.r4.s64 = r11.s64 + -20088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259e458
	sub_8259E458(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259E6C0"))) PPC_WEAK_FUNC(sub_8259E6C0);
PPC_FUNC_IMPL(__imp__sub_8259E6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E6C4"))) PPC_WEAK_FUNC(sub_8259E6C4);
PPC_FUNC_IMPL(__imp__sub_8259E6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E6C8"))) PPC_WEAK_FUNC(sub_8259E6C8);
PPC_FUNC_IMPL(__imp__sub_8259E6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eaaf8
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lfs f30,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, f30.f64);
	// bne cr6,0x8259e714
	if (!cr6.eq) goto loc_8259E714;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab44
	// b 0x828e945c
	return;
loc_8259E714:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f29,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// bne cr6,0x8259e740
	if (!cr6.eq) goto loc_8259E740;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab44
	// b 0x828e945c
	return;
loc_8259E740:
	// addi r25,r28,20
	r25.s64 = r28.s64 + 20;
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// addi r6,r28,52
	ctx.r6.s64 = r28.s64 + 52;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259e984
	if (cr6.eq) goto loc_8259E984;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f28,-8892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8892);
	f28.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// addi r26,r27,20
	r26.s64 = r27.s64 + 20;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// addi r6,r27,52
	ctx.r6.s64 = r27.s64 + 52;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259e984
	if (cr6.eq) goto loc_8259E984;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824a31e8
	sub_824A31E8(ctx, base);
	// fsubs f29,f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f29.f64 - f31.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 * f31.f64));
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f3,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f29,f5
	ctx.f1.f64 = double(float(f29.f64 * ctx.f5.f64));
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f29,f7
	ctx.f2.f64 = double(float(f29.f64 * ctx.f7.f64));
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f29,f4
	f0.f64 = double(float(f29.f64 * ctx.f4.f64));
	// fmuls f13,f3,f29
	ctx.f13.f64 = double(float(ctx.f3.f64 * f29.f64));
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f10,f0,f8
	ctx.f10.f64 = double(float(f0.f64 + ctx.f8.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f9,f13,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f9,16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f8,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fsubs f6,f4,f3
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f4,f0,f13
	ctx.f4.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmuls f3,f9,f9
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f2,f8,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f1,f6,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f0,f5,f5,f2
	f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f13,f4,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(f0.f64)));
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 - ctx.f12.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x82339968
	sub_82339968(ctx, base);
	// lfs f10,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f8,60(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f6,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmadds f3,f6,f29,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * f29.f64 + ctx.f4.f64));
	// stfs f3,84(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f2,88(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fmadds f13,f2,f29,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * f29.f64 + f0.f64));
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f10,92(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,92(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmadds f9,f10,f29,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * f29.f64 + ctx.f11.f64));
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f6,96(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,96(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmadds f5,f6,f29,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * f29.f64 + ctx.f7.f64));
	// stfs f5,96(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
loc_8259E984:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_8259E990"))) PPC_WEAK_FUNC(sub_8259E990);
PPC_FUNC_IMPL(__imp__sub_8259E990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8259E994"))) PPC_WEAK_FUNC(sub_8259E994);
PPC_FUNC_IMPL(__imp__sub_8259E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259E998"))) PPC_WEAK_FUNC(sub_8259E998);
PPC_FUNC_IMPL(__imp__sub_8259E998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eaae0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	f0.f64 = double(temp.f32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmr f27,f1
	f27.f64 = ctx.f1.f64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// fdivs f23,f1,f0
	f23.f64 = double(float(ctx.f1.f64 / f0.f64));
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lfs f22,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f22.f64 = double(temp.f32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmr f25,f22
	f25.f64 = f22.f64;
	// ble cr6,0x8259ea08
	if (!cr6.gt) goto loc_8259EA08;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lfs f0,120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	cr6.compare(f0.f64, f22.f64);
	// blt cr6,0x8259ea08
	if (cr6.lt) goto loc_8259EA08;
	// fdivs f23,f1,f0
	f23.f64 = double(float(ctx.f1.f64 / f0.f64));
loc_8259EA08:
	// lwz r11,64(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 64);
	// addi r31,r24,52
	r31.s64 = r24.s64 + 52;
	// lwz r10,56(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r28,r10
	r28.s64 = ctx.r10.s32;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259ebe4
	if (cr6.eq) goto loc_8259EBE4;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r25,r9,-20104
	r25.s64 = ctx.r9.s64 + -20104;
	// lfs f24,-8892(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8892);
	f24.f64 = double(temp.f32);
	// lfs f26,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f26.f64 = double(temp.f32);
loc_8259EA44:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - r28.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259ea80
	if (cr6.eq) goto loc_8259EA80;
	// fadds f13,f23,f0
	ctx.f13.f64 = double(float(f23.f64 + f0.f64));
	// fsubs f12,f26,f13
	ctx.f12.f64 = double(float(f26.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f26
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f26.f64;
	// stfs f11,4(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// b 0x8259ea88
	goto loc_8259EA88;
loc_8259EA80:
	// fsubs f13,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 - f23.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
loc_8259EA88:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// fcmpu cr6,f0,f22
	cr6.compare(f0.f64, f22.f64);
	// bgt cr6,0x8259eaf8
	if (cr6.gt) goto loc_8259EAF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r28
	ctx.r9.s64 = r28.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r10,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8259eae8
	if (!cr6.lt) goto loc_8259EAE8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_8259EAB8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x8259eab8
	if (cr6.lt) goto loc_8259EAB8;
loc_8259EAE8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8259ebcc
	goto loc_8259EBCC;
loc_8259EAF8:
	// lfs f31,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 20);
	f31.f64 = double(temp.f32);
	// addi r30,r27,20
	r30.s64 = r27.s64 + 20;
	// lfs f30,24(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 24);
	f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f29,28(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 28);
	f29.f64 = double(temp.f32);
	// lfs f28,32(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 32);
	f28.f64 = double(temp.f32);
	// beq cr6,0x8259eb2c
	if (cr6.eq) goto loc_8259EB2C;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259d140
	sub_8259D140(ctx, base);
loc_8259EB2C:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// fadds f25,f0,f25
	f25.f64 = double(float(f0.f64 + f25.f64));
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// bne cr6,0x8259eb44
	if (!cr6.eq) goto loc_8259EB44;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8259EB44:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fdivs f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 / f25.f64));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8259e6c8
	sub_8259E6C8(ctx, base);
	// fcmpu cr6,f27,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f24.f64);
	// bge cr6,0x8259eb84
	if (!cr6.lt) goto loc_8259EB84;
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 36, temp.u32);
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 40, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 44, temp.u32);
	// lfs f0,12(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 48, temp.u32);
	// b 0x8259ebc8
	goto loc_8259EBC8;
loc_8259EB84:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// fdivs f13,f26,f27
	ctx.f13.f64 = double(float(f26.f64 / f27.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 - f31.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 - f30.f64));
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 - f29.f64));
	// fsubs f6,f8,f28
	ctx.f6.f64 = double(float(ctx.f8.f64 - f28.f64));
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f5,36(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r27.u32 + 36, temp.u32);
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f4,40(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r27.u32 + 40, temp.u32);
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f3,44(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r27.u32 + 44, temp.u32);
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f2,48(r27)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r27.u32 + 48, temp.u32);
loc_8259EBC8:
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
loc_8259EBCC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// bne cr6,0x8259ea44
	if (!cr6.eq) goto loc_8259EA44;
loc_8259EBE4:
	// lwz r8,56(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8259ec34
	if (cr6.eq) goto loc_8259EC34;
loc_8259EBF4:
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bne cr6,0x8259ec28
	if (!cr6.eq) goto loc_8259EC28;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// clrlwi r6,r30,24
	ctx.r6.u64 = r30.u32 & 0xFF;
	// bgt cr6,0x8259ec20
	if (cr6.gt) goto loc_8259EC20;
	// lbz r7,128(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 128);
	// b 0x8259ec24
	goto loc_8259EC24;
loc_8259EC20:
	// lbz r7,129(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 129);
loc_8259EC24:
	// or r30,r7,r6
	r30.u64 = ctx.r7.u64 | ctx.r6.u64;
loc_8259EC28:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8259ebf4
	if (!cr6.eq) goto loc_8259EBF4;
loc_8259EC34:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259ecec
	if (cr6.eq) goto loc_8259ECEC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8259ecec
	if (cr6.eq) goto loc_8259ECEC;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8259ec68
	if (cr6.eq) goto loc_8259EC68;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259ec6c
	if (!cr6.eq) goto loc_8259EC6C;
loc_8259EC68:
	// li r11,0
	r11.s64 = 0;
loc_8259EC6C:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r31,28(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19780
	ctx.r4.s64 = ctx.r8.s64 + 19780;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259ecec
	if (cr6.eq) goto loc_8259ECEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826f0598
	sub_826F0598(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826f05f0
	sub_826F05F0(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r9,-25128
	ctx.r3.s64 = ctx.r9.s64 + -25128;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// stw r3,76(r24)
	PPC_STORE_U32(r24.u32 + 76, ctx.r3.u32);
loc_8259ECEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eab2c
}

__attribute__((alias("__imp__sub_8259ECFC"))) PPC_WEAK_FUNC(sub_8259ECFC);
PPC_FUNC_IMPL(__imp__sub_8259ECFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8259ED00"))) PPC_WEAK_FUNC(sub_8259ED00);
PPC_FUNC_IMPL(__imp__sub_8259ED00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eaadc
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r22,r4,4
	r22.s64 = ctx.r4.s64 + 4;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// beq cr6,0x8259ed78
	if (cr6.eq) goto loc_8259ED78;
	// lfs f13,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_8259ED78:
	// lfs f0,24(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r25,-32256
	r25.s64 = -2113929216;
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + f0.f64));
	// lfs f8,28(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// lfs f6,20(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r23,20
	r31.s64 = r23.s64 + 20;
	// lfs f0,3792(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lfs f10,876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 876);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f9,f0
	f30.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f29,f7,f0
	f29.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f28,f5,f0
	f28.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fsubs f4,f12,f30
	ctx.f4.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fsubs f3,f11,f29
	ctx.f3.f64 = double(float(ctx.f11.f64 - f29.f64));
	// fsubs f2,f13,f28
	ctx.f2.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fmuls f1,f4,f4
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f0,f3,f3,f1
	f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f13,f2,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + f0.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f27,f12,f10
	f27.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// bl 0x8233dce0
	sub_8233DCE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fsubs f11,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f28.f64 - f27.f64));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// fsubs f10,f30,f27
	ctx.f10.f64 = double(float(f30.f64 - f27.f64));
	// fsubs f9,f29,f27
	ctx.f9.f64 = double(float(f29.f64 - f27.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f4,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f3,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,148(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f2,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// fadds f13,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 + f27.f64));
	// fadds f12,f30,f27
	ctx.f12.f64 = double(float(f30.f64 + f27.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f11,f29,f27
	ctx.f11.f64 = double(float(f29.f64 + f27.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826ef020
	sub_826EF020(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f10,20(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r7,-20104
	r29.s64 = ctx.r7.s64 + -20104;
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfs f27,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f27.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f22,f27
	f22.f64 = f27.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f30,f8,f10
	f30.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f6,28(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f28,f7,f9
	f28.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f5,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f29,f5,f6
	f29.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f26,-8892(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8892);
	f26.f64 = double(temp.f32);
	// lfs f4,32(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f21,f3,f4
	f21.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmuls f2,f30,f31
	ctx.f2.f64 = double(float(f30.f64 * f31.f64));
	// fmuls f0,f28,f31
	f0.f64 = double(float(f28.f64 * f31.f64));
	// fmsubs f13,f29,f31,f2
	ctx.f13.f64 = double(float(f29.f64 * f31.f64 - ctx.f2.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f0,f29
	ctx.f12.f64 = double(float(f0.f64 - f29.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(f30.f64 - f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// lfs f26,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f26.f64 = double(temp.f32);
	// fmuls f10,f31,f28
	ctx.f10.f64 = double(float(f31.f64 * f28.f64));
	// lfs f25,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f25.f64 = double(temp.f32);
	// fmuls f9,f29,f26
	ctx.f9.f64 = double(float(f29.f64 * f26.f64));
	// fmuls f8,f25,f30
	ctx.f8.f64 = double(float(f25.f64 * f30.f64));
	// fmsubs f7,f25,f29,f10
	ctx.f7.f64 = double(float(f25.f64 * f29.f64 - ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f6,f31,f30,f9
	ctx.f6.f64 = double(float(f31.f64 * f30.f64 - ctx.f9.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f28,f26,f8
	ctx.f5.f64 = double(float(f28.f64 * f26.f64 - ctx.f8.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f1,15400(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15400);
	// bl 0x828eb900
	sub_828EB900(ctx, base);
	// fmuls f4,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(f28.f64 * f28.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fmr f23,f27
	f23.f64 = f27.f64;
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// lfs f13,20(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmr f24,f27
	f24.f64 = f27.f64;
	// lfs f12,24(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// lfs f11,28(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// li r28,5
	r28.s64 = 5;
	// lfs f8,32(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f7,f29,f29,f4
	ctx.f7.f64 = double(float(f29.f64 * f29.f64 + ctx.f4.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f6,f30,f30,f7
	ctx.f6.f64 = double(float(f30.f64 * f30.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f2,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f1,f0,f4
	ctx.f1.f64 = double(float(f0.f64 * ctx.f4.f64));
	// fmuls f0,f10,f4
	f0.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f10,f26,f4
	ctx.f10.f64 = double(float(f26.f64 * ctx.f4.f64));
	// fmuls f7,f25,f4
	ctx.f7.f64 = double(float(f25.f64 * ctx.f4.f64));
	// fmuls f6,f31,f4
	ctx.f6.f64 = double(float(f31.f64 * ctx.f4.f64));
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f4,f13,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fsubs f4,f13,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fsubs f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// stfs f4,192(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f2,200(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fsubs f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 - f0.f64));
	// stfs f3,196(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f0,f13,f10
	f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fsubs f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,208(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f31,26356(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26356);
	f31.f64 = double(temp.f32);
	// fadds f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f3,f5,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,216(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f3,220(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fsubs f0,f11,f6
	f0.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfs f2,224(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fsubs f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,232(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lis r24,-31934
	r24.s64 = -2092826624;
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_8259F06C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259f0e4
	if (cr6.eq) goto loc_8259F0E4;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r10,20572(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 20572);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259f0c8
	if (!cr6.eq) goto loc_8259F0C8;
	// fsubs f13,f0,f24
	ctx.f13.f64 = double(float(f0.f64 - f24.f64));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// fsel f12,f13,f24,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? f24.f64 : f0.f64;
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fsel f10,f11,f12,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - f27.f64));
	// fsel f24,f9,f27,f10
	f24.f64 = ctx.f9.f64 >= 0.0 ? f27.f64 : ctx.f10.f64;
	// b 0x8259f0e4
	goto loc_8259F0E4;
loc_8259F0C8:
	// fsubs f13,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 - f23.f64));
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// fsel f12,f13,f23,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? f23.f64 : f0.f64;
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fsel f10,f11,f12,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - f27.f64));
	// fsel f23,f9,f27,f10
	f23.f64 = ctx.f9.f64 >= 0.0 ? f27.f64 : ctx.f10.f64;
loc_8259F0E4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x8259f06c
	if (!cr0.eq) goto loc_8259F06C;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// blt cr6,0x8259f110
	if (cr6.lt) goto loc_8259F110;
	// fcmpu cr6,f23,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(f23.f64, f24.f64);
	// bgt cr6,0x8259f118
	if (cr6.gt) goto loc_8259F118;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmr f22,f23
	f22.f64 = f23.f64;
	// lfs f0,-8912(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8912);
	f0.f64 = double(temp.f32);
	// b 0x8259f120
	goto loc_8259F120;
loc_8259F110:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x8259f124
	if (!cr6.gt) goto loc_8259F124;
loc_8259F118:
	// lfs f0,3792(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmr f22,f24
	f22.f64 = f24.f64;
loc_8259F120:
	// stfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
loc_8259F124:
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f9,f22,f0
	ctx.f9.f64 = double(float(f22.f64 - f0.f64));
	// lfs f8,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f9,f8,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + f0.f64));
	// stfs f7,88(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * f30.f64));
	// fmuls f5,f28,f7
	ctx.f5.f64 = double(float(f28.f64 * ctx.f7.f64));
	// fmuls f4,f29,f7
	ctx.f4.f64 = double(float(f29.f64 * ctx.f7.f64));
	// fmuls f3,f21,f7
	ctx.f3.f64 = double(float(f21.f64 * ctx.f7.f64));
	// fsubs f2,f13,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fsubs f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f0,f11,f4
	f0.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fsubs f9,f10,f3
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// bge cr6,0x8259f230
	if (!cr6.lt) goto loc_8259F230;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r23,52
	r11.s64 = r23.s64 + 52;
	// lfs f9,-31316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8848);
	ctx.f8.f64 = double(temp.f32);
loc_8259F198:
	// lfs f7,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f6,8(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmuls f31,f7,f1
	f31.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f26,f2,f3
	f26.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmsubs f2,f7,f2,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 - ctx.f6.f64));
	// fmsubs f7,f4,f3,f31
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 - f31.f64));
	// fmsubs f6,f1,f5,f26
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 - f26.f64));
	// fmuls f5,f2,f2
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f8
	cr6.compare(ctx.f3.f64, ctx.f8.f64);
	// bge cr6,0x8259f230
	if (!cr6.lt) goto loc_8259F230;
	// fadds f0,f0,f9
	f0.f64 = double(float(f0.f64 + ctx.f9.f64));
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(f30.f64 * f0.f64));
	// fmuls f6,f28,f0
	ctx.f6.f64 = double(float(f28.f64 * f0.f64));
	// fmuls f5,f29,f0
	ctx.f5.f64 = double(float(f29.f64 * f0.f64));
	// fmuls f4,f21,f0
	ctx.f4.f64 = double(float(f21.f64 * f0.f64));
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// fsubs f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fsubs f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f1,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fsubs f7,f10,f4
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// blt cr6,0x8259f198
	if (cr6.lt) goto loc_8259F198;
loc_8259F230:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-88
	r12.s64 = ctx.r1.s64 + -88;
	// bl 0x828eab28
}

__attribute__((alias("__imp__sub_8259F244"))) PPC_WEAK_FUNC(sub_8259F244);
PPC_FUNC_IMPL(__imp__sub_8259F244) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8259F248"))) PPC_WEAK_FUNC(sub_8259F248);
PPC_FUNC_IMPL(__imp__sub_8259F248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x8259e2e0
	sub_8259E2E0(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259e998
	sub_8259E998(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259f2b8
	if (cr6.eq) goto loc_8259F2B8;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259f2b8
	if (cr6.eq) goto loc_8259F2B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259ed00
	sub_8259ED00(ctx, base);
loc_8259F2B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_8259F2C0"))) PPC_WEAK_FUNC(sub_8259F2C0);
PPC_FUNC_IMPL(__imp__sub_8259F2C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8259F2C4"))) PPC_WEAK_FUNC(sub_8259F2C4);
PPC_FUNC_IMPL(__imp__sub_8259F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F2C8"))) PPC_WEAK_FUNC(sub_8259F2C8);
PPC_FUNC_IMPL(__imp__sub_8259F2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,-8804
	ctx.r10.s64 = r11.s64 + -8804;
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x8259f340
	if (cr6.eq) goto loc_8259F340;
loc_8259F304:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f324
	if (cr6.eq) goto loc_8259F324;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F324:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259f304
	if (!cr6.eq) goto loc_8259F304;
loc_8259F340:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8259f364
	if (!cr6.gt) goto loc_8259F364;
loc_8259F34C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259f34c
	if (cr6.gt) goto loc_8259F34C;
loc_8259F364:
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f39c
	if (cr6.eq) goto loc_8259F39C;
	// bl 0x826ef410
	sub_826EF410(ctx, base);
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f39c
	if (cr6.eq) goto loc_8259F39C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,80(r29)
	PPC_STORE_U32(r29.u32 + 80, ctx.r9.u32);
loc_8259F39C:
	// addi r3,r29,52
	ctx.r3.s64 = r29.s64 + 52;
	// bl 0x825a0330
	sub_825A0330(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a0238
	sub_825A0238(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x825a0140
	sub_825A0140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259F3B8"))) PPC_WEAK_FUNC(sub_8259F3B8);
PPC_FUNC_IMPL(__imp__sub_8259F3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259F3BC"))) PPC_WEAK_FUNC(sub_8259F3BC);
PPC_FUNC_IMPL(__imp__sub_8259F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259F3C0"))) PPC_WEAK_FUNC(sub_8259F3C0);
PPC_FUNC_IMPL(__imp__sub_8259F3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-8804
	ctx.r9.s64 = r11.s64 + -8804;
	// li r31,0
	r31.s64 = 0;
	// addi r8,r10,-8840
	ctx.r8.s64 = ctx.r10.s64 + -8840;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// addi r19,r3,4
	r19.s64 = ctx.r3.s64 + 4;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,20(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,-8828
	ctx.r4.s64 = ctx.r6.s64 + -8828;
	// stw r5,20(r24)
	PPC_STORE_U32(r24.u32 + 20, ctx.r5.u32);
	// addi r25,r24,28
	r25.s64 = r24.s64 + 28;
	// stw r4,28(r24)
	PPC_STORE_U32(r24.u32 + 28, ctx.r4.u32);
	// stw r31,32(r24)
	PPC_STORE_U32(r24.u32 + 32, r31.u32);
	// stw r31,40(r24)
	PPC_STORE_U32(r24.u32 + 40, r31.u32);
	// stw r31,36(r24)
	PPC_STORE_U32(r24.u32 + 36, r31.u32);
	// stw r31,44(r24)
	PPC_STORE_U32(r24.u32 + 44, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | r11.u64;
	// addi r8,r10,-8816
	ctx.r8.s64 = ctx.r10.s64 + -8816;
	// stw r9,44(r24)
	PPC_STORE_U32(r24.u32 + 44, ctx.r9.u32);
	// addi r18,r24,52
	r18.s64 = r24.s64 + 52;
	// stw r8,52(r24)
	PPC_STORE_U32(r24.u32 + 52, ctx.r8.u32);
	// stw r31,56(r24)
	PPC_STORE_U32(r24.u32 + 56, r31.u32);
	// stw r31,64(r24)
	PPC_STORE_U32(r24.u32 + 64, r31.u32);
	// stw r31,60(r24)
	PPC_STORE_U32(r24.u32 + 60, r31.u32);
	// stw r31,68(r24)
	PPC_STORE_U32(r24.u32 + 68, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,68(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r3,r6,-8732
	ctx.r3.s64 = ctx.r6.s64 + -8732;
	// stw r5,68(r24)
	PPC_STORE_U32(r24.u32 + 68, ctx.r5.u32);
	// stw r31,76(r24)
	PPC_STORE_U32(r24.u32 + 76, r31.u32);
	// stw r31,80(r24)
	PPC_STORE_U32(r24.u32 + 80, r31.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x8259f4dc
	if (!cr6.gt) goto loc_8259F4DC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259F4DC:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r25)
	PPC_STORE_U32(r25.u32 + 16, ctx.r10.u32);
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// addi r28,r11,-8788
	r28.s64 = r11.s64 + -8788;
	// beq cr6,0x8259fc10
	if (cr6.eq) goto loc_8259FC10;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r29,10
	r29.s64 = 10;
	// addi r20,r11,18440
	r20.s64 = r11.s64 + 18440;
	// addi r27,r10,-20080
	r27.s64 = ctx.r10.s64 + -20080;
	// addi r23,r9,-29404
	r23.s64 = ctx.r9.s64 + -29404;
	// addi r22,r8,-10512
	r22.s64 = ctx.r8.s64 + -10512;
loc_8259F53C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259f5bc
	if (cr6.eq) goto loc_8259F5BC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f5bc
	if (cr6.eq) goto loc_8259F5BC;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259f5c0
	if (!cr6.eq) goto loc_8259F5C0;
loc_8259F5BC:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8259F5C0:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8259fbe8
	if (cr6.eq) goto loc_8259FBE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8259f648
	if (!cr6.eq) goto loc_8259F648;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r29.u32);
	// li r3,204
	ctx.r3.s64 = 204;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f638
	if (cr6.eq) goto loc_8259F638;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825acb18
	sub_825ACB18(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f63c
	goto loc_8259F63C;
loc_8259F638:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F63C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F648:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f6a8
	if (!cr6.eq) goto loc_8259F6A8;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, r31.u32);
	// li r3,1328
	ctx.r3.s64 = 1328;
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// ld r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f698
	if (cr6.eq) goto loc_8259F698;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825a8c78
	sub_825A8C78(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f69c
	goto loc_8259F69C;
loc_8259F698:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F69C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F6A8:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f708
	if (!cr6.eq) goto loc_8259F708;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f6f8
	if (cr6.eq) goto loc_8259F6F8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825a4480
	sub_825A4480(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f6fc
	goto loc_8259F6FC;
loc_8259F6F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F6FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F708:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f768
	if (!cr6.eq) goto loc_8259F768;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r31.u32);
	// li r3,276
	ctx.r3.s64 = 276;
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// ld r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f758
	if (cr6.eq) goto loc_8259F758;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825a52b0
	sub_825A52B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f75c
	goto loc_8259F75C;
loc_8259F758:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F75C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F768:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f7c8
	if (!cr6.eq) goto loc_8259F7C8;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r31.u32);
	// li r3,212
	ctx.r3.s64 = 212;
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 560);
	// ld r5,568(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f7b8
	if (cr6.eq) goto loc_8259F7B8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ab430
	sub_825AB430(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f7bc
	goto loc_8259F7BC;
loc_8259F7B8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F7BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F7C8:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f828
	if (!cr6.eq) goto loc_8259F828;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r31.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// ld r5,376(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f818
	if (cr6.eq) goto loc_8259F818;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825a4960
	sub_825A4960(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f81c
	goto loc_8259F81C;
loc_8259F818:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F81C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F828:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f888
	if (!cr6.eq) goto loc_8259F888;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, r31.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// stw r31,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 496);
	// ld r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f878
	if (cr6.eq) goto loc_8259F878;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825abf38
	sub_825ABF38(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f87c
	goto loc_8259F87C;
loc_8259F878:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F87C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F888:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f8e8
	if (!cr6.eq) goto loc_8259F8E8;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f8d8
	if (cr6.eq) goto loc_8259F8D8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ac728
	sub_825AC728(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f8dc
	goto loc_8259F8DC;
loc_8259F8D8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F8DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F8E8:
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f948
	if (!cr6.eq) goto loc_8259F948;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r31.u32);
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// ld r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f938
	if (cr6.eq) goto loc_8259F938;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ad9c0
	sub_825AD9C0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f93c
	goto loc_8259F93C;
loc_8259F938:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F93C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F948:
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259f9a8
	if (!cr6.eq) goto loc_8259F9A8;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r31.u32);
	// li r3,296
	ctx.r3.s64 = 296;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// ld r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f998
	if (cr6.eq) goto loc_8259F998;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825a3c38
	sub_825A3C38(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f99c
	goto loc_8259F99C;
loc_8259F998:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F99C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259F9A8:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259fa08
	if (!cr6.eq) goto loc_8259FA08;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r31.u32);
	// li r3,204
	ctx.r3.s64 = 204;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// ld r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259f9f8
	if (cr6.eq) goto loc_8259F9F8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ab618
	sub_825AB618(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259f9fc
	goto loc_8259F9FC;
loc_8259F9F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259F9FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259FA08:
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259fa68
	if (!cr6.eq) goto loc_8259FA68;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, r31.u32);
	// li r3,204
	ctx.r3.s64 = 204;
	// stw r31,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 464);
	// ld r5,472(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fa58
	if (cr6.eq) goto loc_8259FA58;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ab8e8
	sub_825AB8E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259fa5c
	goto loc_8259FA5C;
loc_8259FA58:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259FA5C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259FA68:
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259fac8
	if (!cr6.eq) goto loc_8259FAC8;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r31.u32);
	// li r3,804
	ctx.r3.s64 = 804;
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 528);
	// ld r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fab8
	if (cr6.eq) goto loc_8259FAB8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825aec08
	sub_825AEC08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259fabc
	goto loc_8259FABC;
loc_8259FAB8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259FABC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259FAC8:
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259fb28
	if (!cr6.eq) goto loc_8259FB28;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, r31.u32);
	// li r3,528
	ctx.r3.s64 = 528;
	// stw r31,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 592);
	// ld r5,600(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 600);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fb18
	if (cr6.eq) goto loc_8259FB18;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825a2938
	sub_825A2938(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259fb1c
	goto loc_8259FB1C;
loc_8259FB18:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259FB1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259FB28:
	// lwz r11,56(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259fb88
	if (!cr6.eq) goto loc_8259FB88;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r31.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fb78
	if (cr6.eq) goto loc_8259FB78;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825abbe8
	sub_825ABBE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259fb7c
	goto loc_8259FB7C;
loc_8259FB78:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259FB7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259FB88:
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8259fbe8
	if (!cr6.eq) goto loc_8259FBE8;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r3,280
	ctx.r3.s64 = 280;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fbd8
	if (cr6.eq) goto loc_8259FBD8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825ace78
	sub_825ACE78(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8259fbdc
	goto loc_8259FBDC;
loc_8259FBD8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8259FBDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_8259FBE8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259f53c
	if (!cr6.eq) goto loc_8259F53C;
loc_8259FC10:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-8800
	ctx.r3.s64 = ctx.r10.s64 + -8800;
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8259fc80
	if (cr6.eq) goto loc_8259FC80;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fc80
	if (cr6.eq) goto loc_8259FC80;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259fc84
	if (!cr6.eq) goto loc_8259FC84;
loc_8259FC80:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_8259FC84:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stfs f0,84(r24)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + 84, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r9,12(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259fd70
	if (cr6.eq) goto loc_8259FD70;
loc_8259FCB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 128);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8259fcd0
	if (!cr6.eq) goto loc_8259FCD0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259fcb0
	if (!cr6.eq) goto loc_8259FCB0;
	// b 0x8259fd70
	goto loc_8259FD70;
loc_8259FCD0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-25128
	ctx.r3.s64 = r11.s64 + -25128;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lwz r3,-14120(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8259fd00
	if (cr6.eq) goto loc_8259FD00;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8259fd04
	if (!cr6.eq) goto loc_8259FD04;
loc_8259FD00:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8259FD04:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// stw r3,76(r24)
	PPC_STORE_U32(r24.u32 + 76, ctx.r3.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fd64
	if (cr6.eq) goto loc_8259FD64;
	// lwz r4,76(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// bl 0x826ef488
	sub_826EF488(ctx, base);
	// b 0x8259fd68
	goto loc_8259FD68;
loc_8259FD64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259FD68:
	// stw r3,80(r24)
	PPC_STORE_U32(r24.u32 + 80, ctx.r3.u32);
	// bl 0x826ef3b8
	sub_826EF3B8(ctx, base);
loc_8259FD70:
	// stfs f31,88(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r24.u32 + 88, temp.u32);
	// stfs f31,92(r24)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r24.u32 + 92, temp.u32);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8259fd9c
	if (!cr6.lt) goto loc_8259FD9C;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FD9C:
	// lwz r11,16(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r19)
	PPC_STORE_U32(r19.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8259fdcc
	if (!cr6.lt) goto loc_8259FDCC;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FDCC:
	// lwz r11,16(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 16);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r9,r11,1
	ctx.r9.u64 = r11.u64 | 1;
	// addi r4,r10,-20088
	ctx.r4.s64 = ctx.r10.s64 + -20088;
	// stw r9,16(r18)
	PPC_STORE_U32(r18.u32 + 16, ctx.r9.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8259e458
	sub_8259E458(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
}

__attribute__((alias("__imp__sub_8259FDF8"))) PPC_WEAK_FUNC(sub_8259FDF8);
PPC_FUNC_IMPL(__imp__sub_8259FDF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8259FDFC"))) PPC_WEAK_FUNC(sub_8259FDFC);
PPC_FUNC_IMPL(__imp__sub_8259FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FE00"))) PPC_WEAK_FUNC(sub_8259FE00);
PPC_FUNC_IMPL(__imp__sub_8259FE00) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8259FE00"))) PPC_WEAK_FUNC(sub_8259FE00);
PPC_FUNC_IMPL(__imp__sub_8259FE00) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a04b8
	sub_825A04B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259FE04"))) PPC_WEAK_FUNC(sub_8259FE04);
PPC_FUNC_IMPL(__imp__sub_8259FE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FE08"))) PPC_WEAK_FUNC(sub_8259FE08);
PPC_FUNC_IMPL(__imp__sub_8259FE08) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a05b8
	sub_825A05B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259FE08"))) PPC_WEAK_FUNC(sub_8259FE08);
PPC_FUNC_IMPL(__imp__sub_8259FE08) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8259FE0C"))) PPC_WEAK_FUNC(sub_8259FE0C);
PPC_FUNC_IMPL(__imp__sub_8259FE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FE10"))) PPC_WEAK_FUNC(sub_8259FE10);
PPC_FUNC_IMPL(__imp__sub_8259FE10) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8259FE10"))) PPC_WEAK_FUNC(sub_8259FE10);
PPC_FUNC_IMPL(__imp__sub_8259FE10) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a06b8
	sub_825A06B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259FE14"))) PPC_WEAK_FUNC(sub_8259FE14);
PPC_FUNC_IMPL(__imp__sub_8259FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FE18"))) PPC_WEAK_FUNC(sub_8259FE18);
PPC_FUNC_IMPL(__imp__sub_8259FE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8259fe58
	if (!cr6.gt) goto loc_8259FE58;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FE58:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8259fe84
	if (cr0.eq) goto loc_8259FE84;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8259FE84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259FE98"))) PPC_WEAK_FUNC(sub_8259FE98);
PPC_FUNC_IMPL(__imp__sub_8259FE98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FE9C"))) PPC_WEAK_FUNC(sub_8259FE9C);
PPC_FUNC_IMPL(__imp__sub_8259FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FEA0"))) PPC_WEAK_FUNC(sub_8259FEA0);
PPC_FUNC_IMPL(__imp__sub_8259FEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8259fed8
	if (!cr6.gt) goto loc_8259FED8;
loc_8259FEC0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259fec0
	if (cr6.gt) goto loc_8259FEC0;
loc_8259FED8:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8259fefc
	if (!cr6.gt) goto loc_8259FEFC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FEFC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x8259ff84
	if (cr6.eq) goto loc_8259FF84;
loc_8259FF14:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8259ff3c
	if (!cr6.gt) goto loc_8259FF3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8259FF3C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8259ff68
	if (cr0.eq) goto loc_8259FF68;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8259FF68:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x8259ff14
	if (!cr6.eq) goto loc_8259FF14;
loc_8259FF84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8259FF88"))) PPC_WEAK_FUNC(sub_8259FF88);
PPC_FUNC_IMPL(__imp__sub_8259FF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8259FF8C"))) PPC_WEAK_FUNC(sub_8259FF8C);
PPC_FUNC_IMPL(__imp__sub_8259FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FF90"))) PPC_WEAK_FUNC(sub_8259FF90);
PPC_FUNC_IMPL(__imp__sub_8259FF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-8880
	ctx.r9.s64 = r11.s64 + -8880;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8259ffd4
	if (!cr6.gt) goto loc_8259FFD4;
loc_8259FFBC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8259ffbc
	if (cr6.gt) goto loc_8259FFBC;
loc_8259FFD4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259ffec
	if (cr6.eq) goto loc_8259FFEC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8259FFEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8259FFFC"))) PPC_WEAK_FUNC(sub_8259FFFC);
PPC_FUNC_IMPL(__imp__sub_8259FFFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0000"))) PPC_WEAK_FUNC(sub_825A0000);
PPC_FUNC_IMPL(__imp__sub_825A0000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-8868
	ctx.r9.s64 = r11.s64 + -8868;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825a0044
	if (!cr6.gt) goto loc_825A0044;
loc_825A002C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a002c
	if (cr6.gt) goto loc_825A002C;
loc_825A0044:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a005c
	if (cr6.eq) goto loc_825A005C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A005C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A006C"))) PPC_WEAK_FUNC(sub_825A006C);
PPC_FUNC_IMPL(__imp__sub_825A006C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0070"))) PPC_WEAK_FUNC(sub_825A0070);
PPC_FUNC_IMPL(__imp__sub_825A0070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-8856
	ctx.r9.s64 = r11.s64 + -8856;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825a00b4
	if (!cr6.gt) goto loc_825A00B4;
loc_825A009C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a009c
	if (cr6.gt) goto loc_825A009C;
loc_825A00B4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a00cc
	if (cr6.eq) goto loc_825A00CC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A00CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A00DC"))) PPC_WEAK_FUNC(sub_825A00DC);
PPC_FUNC_IMPL(__imp__sub_825A00DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A00E0"))) PPC_WEAK_FUNC(sub_825A00E0);
PPC_FUNC_IMPL(__imp__sub_825A00E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8840
	ctx.r9.s64 = ctx.r10.s64 + -8840;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0138"))) PPC_WEAK_FUNC(sub_825A0138);
PPC_FUNC_IMPL(__imp__sub_825A0138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A013C"))) PPC_WEAK_FUNC(sub_825A013C);
PPC_FUNC_IMPL(__imp__sub_825A013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0140"))) PPC_WEAK_FUNC(sub_825A0140);
PPC_FUNC_IMPL(__imp__sub_825A0140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-8840
	ctx.r9.s64 = r11.s64 + -8840;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825a0184
	if (!cr6.gt) goto loc_825A0184;
loc_825A016C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a016c
	if (cr6.gt) goto loc_825A016C;
loc_825A0184:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a04b8
	sub_825A04B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-8880
	ctx.r10.s64 = r11.s64 + -8880;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825a01c0
	if (!cr6.gt) goto loc_825A01C0;
loc_825A01A8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a01a8
	if (cr6.gt) goto loc_825A01A8;
loc_825A01C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A01D0"))) PPC_WEAK_FUNC(sub_825A01D0);
PPC_FUNC_IMPL(__imp__sub_825A01D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A01D4"))) PPC_WEAK_FUNC(sub_825A01D4);
PPC_FUNC_IMPL(__imp__sub_825A01D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A01D8"))) PPC_WEAK_FUNC(sub_825A01D8);
PPC_FUNC_IMPL(__imp__sub_825A01D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8828
	ctx.r9.s64 = ctx.r10.s64 + -8828;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0230"))) PPC_WEAK_FUNC(sub_825A0230);
PPC_FUNC_IMPL(__imp__sub_825A0230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0234"))) PPC_WEAK_FUNC(sub_825A0234);
PPC_FUNC_IMPL(__imp__sub_825A0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0238"))) PPC_WEAK_FUNC(sub_825A0238);
PPC_FUNC_IMPL(__imp__sub_825A0238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-8828
	ctx.r9.s64 = r11.s64 + -8828;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825a027c
	if (!cr6.gt) goto loc_825A027C;
loc_825A0264:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a0264
	if (cr6.gt) goto loc_825A0264;
loc_825A027C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a05b8
	sub_825A05B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-8868
	ctx.r10.s64 = r11.s64 + -8868;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825a02b8
	if (!cr6.gt) goto loc_825A02B8;
loc_825A02A0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a02a0
	if (cr6.gt) goto loc_825A02A0;
loc_825A02B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A02C8"))) PPC_WEAK_FUNC(sub_825A02C8);
PPC_FUNC_IMPL(__imp__sub_825A02C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A02CC"))) PPC_WEAK_FUNC(sub_825A02CC);
PPC_FUNC_IMPL(__imp__sub_825A02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A02D0"))) PPC_WEAK_FUNC(sub_825A02D0);
PPC_FUNC_IMPL(__imp__sub_825A02D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-8816
	ctx.r9.s64 = ctx.r10.s64 + -8816;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0328"))) PPC_WEAK_FUNC(sub_825A0328);
PPC_FUNC_IMPL(__imp__sub_825A0328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A032C"))) PPC_WEAK_FUNC(sub_825A032C);
PPC_FUNC_IMPL(__imp__sub_825A032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0330"))) PPC_WEAK_FUNC(sub_825A0330);
PPC_FUNC_IMPL(__imp__sub_825A0330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-8816
	ctx.r9.s64 = r11.s64 + -8816;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825a0374
	if (!cr6.gt) goto loc_825A0374;
loc_825A035C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a035c
	if (cr6.gt) goto loc_825A035C;
loc_825A0374:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a06b8
	sub_825A06B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-8856
	ctx.r10.s64 = r11.s64 + -8856;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825a03b0
	if (!cr6.gt) goto loc_825A03B0;
loc_825A0398:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a0398
	if (cr6.gt) goto loc_825A0398;
loc_825A03B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A03C0"))) PPC_WEAK_FUNC(sub_825A03C0);
PPC_FUNC_IMPL(__imp__sub_825A03C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A03C4"))) PPC_WEAK_FUNC(sub_825A03C4);
PPC_FUNC_IMPL(__imp__sub_825A03C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A03C8"))) PPC_WEAK_FUNC(sub_825A03C8);
PPC_FUNC_IMPL(__imp__sub_825A03C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825a0140
	sub_825A0140(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a0400
	if (cr6.eq) goto loc_825A0400;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A0400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0414"))) PPC_WEAK_FUNC(sub_825A0414);
PPC_FUNC_IMPL(__imp__sub_825A0414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0418"))) PPC_WEAK_FUNC(sub_825A0418);
PPC_FUNC_IMPL(__imp__sub_825A0418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825a0238
	sub_825A0238(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a0450
	if (cr6.eq) goto loc_825A0450;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A0450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0464"))) PPC_WEAK_FUNC(sub_825A0464);
PPC_FUNC_IMPL(__imp__sub_825A0464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0468"))) PPC_WEAK_FUNC(sub_825A0468);
PPC_FUNC_IMPL(__imp__sub_825A0468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825a0330
	sub_825A0330(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a04a0
	if (cr6.eq) goto loc_825A04A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A04A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A04B4"))) PPC_WEAK_FUNC(sub_825A04B4);
PPC_FUNC_IMPL(__imp__sub_825A04B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A04B8"))) PPC_WEAK_FUNC(sub_825A04B8);
PPC_FUNC_IMPL(__imp__sub_825A04B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x825a059c
	if (cr6.eq) goto loc_825A059C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a052c
	if (!cr6.eq) goto loc_825A052C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x825a059c
	if (cr6.eq) goto loc_825A059C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8259c760
	sub_8259C760(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825a059c
	goto loc_825A059C;
loc_825A052C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a00e0
	sub_825A00E0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825a0558
	if (!cr6.gt) goto loc_825A0558;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A0558:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259fea0
	sub_8259FEA0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x825a0140
	sub_825A0140(ctx, base);
loc_825A059C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A05B0"))) PPC_WEAK_FUNC(sub_825A05B0);
PPC_FUNC_IMPL(__imp__sub_825A05B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A05B4"))) PPC_WEAK_FUNC(sub_825A05B4);
PPC_FUNC_IMPL(__imp__sub_825A05B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A05B8"))) PPC_WEAK_FUNC(sub_825A05B8);
PPC_FUNC_IMPL(__imp__sub_825A05B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x825a069c
	if (cr6.eq) goto loc_825A069C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a062c
	if (!cr6.eq) goto loc_825A062C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x825a069c
	if (cr6.eq) goto loc_825A069C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825a069c
	goto loc_825A069C;
loc_825A062C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a01d8
	sub_825A01D8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825a0658
	if (!cr6.gt) goto loc_825A0658;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A0658:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x825a0238
	sub_825A0238(ctx, base);
loc_825A069C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A06B0"))) PPC_WEAK_FUNC(sub_825A06B0);
PPC_FUNC_IMPL(__imp__sub_825A06B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A06B4"))) PPC_WEAK_FUNC(sub_825A06B4);
PPC_FUNC_IMPL(__imp__sub_825A06B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A06B8"))) PPC_WEAK_FUNC(sub_825A06B8);
PPC_FUNC_IMPL(__imp__sub_825A06B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x825a079c
	if (cr6.eq) goto loc_825A079C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a072c
	if (!cr6.eq) goto loc_825A072C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x825a079c
	if (cr6.eq) goto loc_825A079C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8259c760
	sub_8259C760(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825a079c
	goto loc_825A079C;
loc_825A072C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825a02d0
	sub_825A02D0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825a0758
	if (!cr6.gt) goto loc_825A0758;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A0758:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259fea0
	sub_8259FEA0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x825a0330
	sub_825A0330(ctx, base);
loc_825A079C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A07B0"))) PPC_WEAK_FUNC(sub_825A07B0);
PPC_FUNC_IMPL(__imp__sub_825A07B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A07B4"))) PPC_WEAK_FUNC(sub_825A07B4);
PPC_FUNC_IMPL(__imp__sub_825A07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A07B8"))) PPC_WEAK_FUNC(sub_825A07B8);
PPC_FUNC_IMPL(__imp__sub_825A07B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259f2c8
	sub_8259F2C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a07f0
	if (cr6.eq) goto loc_825A07F0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A07F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0804"))) PPC_WEAK_FUNC(sub_825A0804);
PPC_FUNC_IMPL(__imp__sub_825A0804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0808"))) PPC_WEAK_FUNC(sub_825A0808);
PPC_FUNC_IMPL(__imp__sub_825A0808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x825a0860
	if (!cr6.gt) goto loc_825A0860;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
loc_825A082C:
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x825a084c
	if (cr6.lt) goto loc_825A084C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x825a082c
	if (cr6.lt) goto loc_825A082C;
	// b 0x825a0860
	goto loc_825A0860;
loc_825A084C:
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// and r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 & ctx.r8.u64;
loc_825A0860:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a0874
	if (cr6.eq) goto loc_825A0874;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// blr 
	return;
loc_825A0874:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r5
	ctx.r3.u64 = ctx.r8.u64 & ctx.r5.u64;
}

__attribute__((alias("__imp__sub_825A0884"))) PPC_WEAK_FUNC(sub_825A0884);
PPC_FUNC_IMPL(__imp__sub_825A0884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0888"))) PPC_WEAK_FUNC(sub_825A0888);
PPC_FUNC_IMPL(__imp__sub_825A0888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// bl 0x825a0808
	sub_825A0808(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825a0914
	if (!cr6.gt) goto loc_825A0914;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// fdivs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fsel f5,f6,f6,f13
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f13.f64;
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - f0.f64));
	// fsel f3,f4,f0,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? f0.f64 : ctx.f5.f64;
	// fadds f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825A0914:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0928"))) PPC_WEAK_FUNC(sub_825A0928);
PPC_FUNC_IMPL(__imp__sub_825A0928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A092C"))) PPC_WEAK_FUNC(sub_825A092C);
PPC_FUNC_IMPL(__imp__sub_825A092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0930"))) PPC_WEAK_FUNC(sub_825A0930);
PPC_FUNC_IMPL(__imp__sub_825A0930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20016
	ctx.r10.s64 = r11.s64 + -20016;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,-20016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20016);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x825a0808
	sub_825A0808(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x825a0a28
	if (!cr6.gt) goto loc_825A0A28;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// rlwinm r11,r3,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fdivs f2,f11,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fsel f1,f2,f2,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : ctx.f1.f64;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f7,f6,f11
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f6,f5,f11
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fadds f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x825a0a50
	goto loc_825A0A50;
loc_825A0A28:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_825A0A50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0A64"))) PPC_WEAK_FUNC(sub_825A0A64);
PPC_FUNC_IMPL(__imp__sub_825A0A64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0A68"))) PPC_WEAK_FUNC(sub_825A0A68);
PPC_FUNC_IMPL(__imp__sub_825A0A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,6684
	ctx.r10.s64 = r11.s64 + 6684;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// or r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 | ctx.r3.u64;
	// addi r6,r8,7572
	ctx.r6.s64 = ctx.r8.s64 + 7572;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// or r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0AF8"))) PPC_WEAK_FUNC(sub_825A0AF8);
PPC_FUNC_IMPL(__imp__sub_825A0AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0AFC"))) PPC_WEAK_FUNC(sub_825A0AFC);
PPC_FUNC_IMPL(__imp__sub_825A0AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0B00"))) PPC_WEAK_FUNC(sub_825A0B00);
PPC_FUNC_IMPL(__imp__sub_825A0B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825a0b3c
	if (!cr6.gt) goto loc_825A0B3C;
loc_825A0B24:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a0b24
	if (cr6.gt) goto loc_825A0B24;
loc_825A0B3C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x825a0b7c
	if (!cr6.gt) goto loc_825A0B7C;
loc_825A0B64:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825a0b64
	if (cr6.gt) goto loc_825A0B64;
loc_825A0B7C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822caf88
	sub_822CAF88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c3aa0
	sub_822C3AA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A0BB8"))) PPC_WEAK_FUNC(sub_825A0BB8);
PPC_FUNC_IMPL(__imp__sub_825A0BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0BBC"))) PPC_WEAK_FUNC(sub_825A0BBC);
PPC_FUNC_IMPL(__imp__sub_825A0BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0BC0"))) PPC_WEAK_FUNC(sub_825A0BC0);
PPC_FUNC_IMPL(__imp__sub_825A0BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r11,28336
	r29.s64 = r11.s64 + 28336;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r30,1
	r30.s64 = 1;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r28,r11,-8324
	r28.s64 = r11.s64 + -8324;
	// beq cr6,0x825a0c50
	if (cr6.eq) goto loc_825A0C50;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r30,3
	r30.s64 = 3;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825a0c54
	if (!cr6.eq) goto loc_825A0C54;
loc_825A0C50:
	// li r11,0
	r11.s64 = 0;
loc_825A0C54:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// clrlwi r26,r11,24
	r26.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a0c70
	if (cr6.eq) goto loc_825A0C70;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825A0C70:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a0c84
	if (cr6.eq) goto loc_825A0C84;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825A0C84:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a0f60
	if (cr6.eq) goto loc_825A0F60;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x825a0f60
	if (!cr6.eq) goto loc_825A0F60;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x825a0f60
	if (!cr6.gt) goto loc_825A0F60;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824b94b8
	sub_824B94B8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x825a0d94
	if (!cr6.gt) goto loc_825A0D94;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r28,r11,-20016
	r28.s64 = r11.s64 + -20016;
loc_825A0D34:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d1a78
	sub_822D1A78(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c2fd8
	sub_822C2FD8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x825a0d34
	if (cr6.lt) goto loc_825A0D34;
loc_825A0D94:
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// addi r31,r27,24
	r31.s64 = r27.s64 + 24;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// ble cr6,0x825a0dbc
	if (!cr6.gt) goto loc_825A0DBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A0DBC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x825a0e9c
	if (!cr6.gt) goto loc_825A0E9C;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_825A0DE0:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a0e38
	if (cr6.eq) goto loc_825A0E38;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0e38
	if (cr6.eq) goto loc_825A0E38;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a0e3c
	if (!cr6.eq) goto loc_825A0E3C;
loc_825A0E38:
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
loc_825A0E3C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825a0e70
	if (!cr6.gt) goto loc_825A0E70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A0E70:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825a0e90
	if (cr0.eq) goto loc_825A0E90;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_825A0E90:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x825a0de0
	if (cr6.lt) goto loc_825A0DE0;
loc_825A0E9C:
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// ble cr6,0x825a0f60
	if (!cr6.gt) goto loc_825A0F60;
loc_825A0EA8:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a0ef8
	if (cr6.eq) goto loc_825A0EF8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0ef8
	if (cr6.eq) goto loc_825A0EF8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
loc_825A0EF8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a0f4c
	if (cr6.eq) goto loc_825A0F4C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0f4c
	if (cr6.eq) goto loc_825A0F4C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
loc_825A0F4C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(r31.s32, r26.s32, xer);
	// blt cr6,0x825a0ea8
	if (cr6.lt) goto loc_825A0EA8;
loc_825A0F60:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_825A0F68"))) PPC_WEAK_FUNC(sub_825A0F68);
PPC_FUNC_IMPL(__imp__sub_825A0F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825A0F6C"))) PPC_WEAK_FUNC(sub_825A0F6C);
PPC_FUNC_IMPL(__imp__sub_825A0F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0F70"))) PPC_WEAK_FUNC(sub_825A0F70);
PPC_FUNC_IMPL(__imp__sub_825A0F70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F78"))) PPC_WEAK_FUNC(sub_825A0F78);
PPC_FUNC_IMPL(__imp__sub_825A0F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F7C"))) PPC_WEAK_FUNC(sub_825A0F7C);
PPC_FUNC_IMPL(__imp__sub_825A0F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0F80"))) PPC_WEAK_FUNC(sub_825A0F80);
PPC_FUNC_IMPL(__imp__sub_825A0F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f6,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f5,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f3,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f1,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f12,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f10,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f9,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lbz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 104);
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// lfs f8,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f7,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,88(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f6,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,92(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f5,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,96(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f4,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,100(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A105C"))) PPC_WEAK_FUNC(sub_825A105C);
PPC_FUNC_IMPL(__imp__sub_825A105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1060"))) PPC_WEAK_FUNC(sub_825A1060);
PPC_FUNC_IMPL(__imp__sub_825A1060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r6,r8,-20000
	ctx.r6.s64 = ctx.r8.s64 + -20000;
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r5,r7,-8316
	ctx.r5.s64 = ctx.r7.s64 + -8316;
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f12,-30876(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -30876);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4436(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4436);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8316);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,-20000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20000);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f10,92(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f9,96(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f8,108(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
}

__attribute__((alias("__imp__sub_825A1124"))) PPC_WEAK_FUNC(sub_825A1124);
PPC_FUNC_IMPL(__imp__sub_825A1124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1128"))) PPC_WEAK_FUNC(sub_825A1128);
PPC_FUNC_IMPL(__imp__sub_825A1128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,28616
	ctx.r3.s64 = r11.s64 + 28616;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r3,r10,-28876
	ctx.r3.s64 = ctx.r10.s64 + -28876;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a11f0
	if (cr6.eq) goto loc_825A11F0;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a11f0
	if (cr6.eq) goto loc_825A11F0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a11f4
	if (!cr6.eq) goto loc_825A11F4;
loc_825A11F0:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825A11F4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-8192
	ctx.r3.s64 = ctx.r10.s64 + -8192;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f30,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f30.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a1290
	if (cr6.eq) goto loc_825A1290;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1290
	if (cr6.eq) goto loc_825A1290;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1294
	if (!cr6.eq) goto loc_825A1294;
loc_825A1290:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_825A1294:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8200
	ctx.r3.s64 = r11.s64 + -8200;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a1330
	if (cr6.eq) goto loc_825A1330;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1330
	if (cr6.eq) goto loc_825A1330;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1334
	if (!cr6.eq) goto loc_825A1334;
loc_825A1330:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_825A1334:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r3,r11,-8212
	ctx.r3.s64 = r11.s64 + -8212;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a13e0
	if (cr6.eq) goto loc_825A13E0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a13e0
	if (cr6.eq) goto loc_825A13E0;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a13e4
	if (!cr6.eq) goto loc_825A13E4;
loc_825A13E0:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_825A13E4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8232
	ctx.r3.s64 = r11.s64 + -8232;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a1480
	if (cr6.eq) goto loc_825A1480;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1480
	if (cr6.eq) goto loc_825A1480;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1484
	if (!cr6.eq) goto loc_825A1484;
loc_825A1480:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_825A1484:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-18716
	ctx.r3.s64 = ctx.r10.s64 + -18716;
	// lfs f0,-30876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30876);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a151c
	if (cr6.eq) goto loc_825A151C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a151c
	if (cr6.eq) goto loc_825A151C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1520
	if (!cr6.eq) goto loc_825A1520;
loc_825A151C:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825A1520:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-8240
	ctx.r3.s64 = ctx.r8.s64 + -8240;
	// lfs f0,4436(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4436);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a15ac
	if (cr6.eq) goto loc_825A15AC;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a15ac
	if (cr6.eq) goto loc_825A15AC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a15b0
	if (!cr6.eq) goto loc_825A15B0;
loc_825A15AC:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825A15B0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8248
	ctx.r3.s64 = r11.s64 + -8248;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r29,r11,-8316
	r29.s64 = r11.s64 + -8316;
	// beq cr6,0x825a162c
	if (cr6.eq) goto loc_825A162C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a162c
	if (cr6.eq) goto loc_825A162C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1630
	if (!cr6.eq) goto loc_825A1630;
loc_825A162C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825A1630:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8252
	ctx.r3.s64 = r11.s64 + -8252;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a16a4
	if (cr6.eq) goto loc_825A16A4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a16a4
	if (cr6.eq) goto loc_825A16A4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a16a8
	if (!cr6.eq) goto loc_825A16A8;
loc_825A16A4:
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_825A16A8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r11,-8264
	ctx.r3.s64 = r11.s64 + -8264;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a1720
	if (cr6.eq) goto loc_825A1720;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1720
	if (cr6.eq) goto loc_825A1720;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1724
	if (!cr6.eq) goto loc_825A1724;
loc_825A1720:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825A1724:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,-8288
	ctx.r3.s64 = r11.s64 + -8288;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a17a0
	if (cr6.eq) goto loc_825A17A0;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a17a0
	if (cr6.eq) goto loc_825A17A0;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a17a4
	if (!cr6.eq) goto loc_825A17A4;
loc_825A17A0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A17A4:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-8304
	ctx.r3.s64 = ctx.r10.s64 + -8304;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a1818
	if (cr6.eq) goto loc_825A1818;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1818
	if (cr6.eq) goto loc_825A1818;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a181c
	if (!cr6.eq) goto loc_825A181C;
loc_825A1818:
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
loc_825A181C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825A183C"))) PPC_WEAK_FUNC(sub_825A183C);
PPC_FUNC_IMPL(__imp__sub_825A183C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A1840"))) PPC_WEAK_FUNC(sub_825A1840);
PPC_FUNC_IMPL(__imp__sub_825A1840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1864"))) PPC_WEAK_FUNC(sub_825A1864);
PPC_FUNC_IMPL(__imp__sub_825A1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1868"))) PPC_WEAK_FUNC(sub_825A1868);
PPC_FUNC_IMPL(__imp__sub_825A1868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A188C"))) PPC_WEAK_FUNC(sub_825A188C);
PPC_FUNC_IMPL(__imp__sub_825A188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1890"))) PPC_WEAK_FUNC(sub_825A1890);
PPC_FUNC_IMPL(__imp__sub_825A1890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r30.u8);
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// addi r3,r9,-8172
	ctx.r3.s64 = ctx.r9.s64 + -8172;
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r3,r8,-8184
	ctx.r3.s64 = ctx.r8.s64 + -8184;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825a1960
	if (cr6.eq) goto loc_825A1960;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1960
	if (cr6.eq) goto loc_825A1960;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1964
	if (!cr6.eq) goto loc_825A1964;
loc_825A1960:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825A1964:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r10,-29172
	ctx.r3.s64 = ctx.r10.s64 + -29172;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a19d8
	if (cr6.eq) goto loc_825A19D8;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a19d8
	if (cr6.eq) goto loc_825A19D8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a19dc
	if (!cr6.eq) goto loc_825A19DC;
loc_825A19D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825A19DC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825A19F8"))) PPC_WEAK_FUNC(sub_825A19F8);
PPC_FUNC_IMPL(__imp__sub_825A19F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A19FC"))) PPC_WEAK_FUNC(sub_825A19FC);
PPC_FUNC_IMPL(__imp__sub_825A19FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1A00"))) PPC_WEAK_FUNC(sub_825A1A00);
PPC_FUNC_IMPL(__imp__sub_825A1A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
}

__attribute__((alias("__imp__sub_825A1A1C"))) PPC_WEAK_FUNC(sub_825A1A1C);
PPC_FUNC_IMPL(__imp__sub_825A1A1C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A1A20"))) PPC_WEAK_FUNC(sub_825A1A20);
PPC_FUNC_IMPL(__imp__sub_825A1A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825A1A2C"))) PPC_WEAK_FUNC(sub_825A1A2C);
PPC_FUNC_IMPL(__imp__sub_825A1A2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A1A30"))) PPC_WEAK_FUNC(sub_825A1A30);
PPC_FUNC_IMPL(__imp__sub_825A1A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A1A40"))) PPC_WEAK_FUNC(sub_825A1A40);
PPC_FUNC_IMPL(__imp__sub_825A1A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(f0.f64 + f31.f64));
	// fadds f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A1A98"))) PPC_WEAK_FUNC(sub_825A1A98);
PPC_FUNC_IMPL(__imp__sub_825A1A98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1A9C"))) PPC_WEAK_FUNC(sub_825A1A9C);
PPC_FUNC_IMPL(__imp__sub_825A1A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1AA0"))) PPC_WEAK_FUNC(sub_825A1AA0);
PPC_FUNC_IMPL(__imp__sub_825A1AA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825A1AB8"))) PPC_WEAK_FUNC(sub_825A1AB8);
PPC_FUNC_IMPL(__imp__sub_825A1AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1ABC"))) PPC_WEAK_FUNC(sub_825A1ABC);
PPC_FUNC_IMPL(__imp__sub_825A1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1AC0"))) PPC_WEAK_FUNC(sub_825A1AC0);
PPC_FUNC_IMPL(__imp__sub_825A1AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x825a1af8
	if (cr6.gt) goto loc_825A1AF8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x825a1afc
	goto loc_825A1AFC;
loc_825A1AF8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_825A1AFC:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 + f0.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A1B24"))) PPC_WEAK_FUNC(sub_825A1B24);
PPC_FUNC_IMPL(__imp__sub_825A1B24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1B28"))) PPC_WEAK_FUNC(sub_825A1B28);
PPC_FUNC_IMPL(__imp__sub_825A1B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,-19984(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19984);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825a1b58
	if (!cr6.eq) goto loc_825A1B58;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgelr cr6
	if (!cr6.lt) return;
loc_825A1B58:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825A1B5C"))) PPC_WEAK_FUNC(sub_825A1B5C);
PPC_FUNC_IMPL(__imp__sub_825A1B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1B60"))) PPC_WEAK_FUNC(sub_825A1B60);
PPC_FUNC_IMPL(__imp__sub_825A1B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8108
	ctx.r10.s64 = r11.s64 + -8108;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-19980(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19980);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-9020
	r29.s64 = r11.s64 + -9020;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lfs f31,21036(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r3,r5,13852
	ctx.r3.s64 = ctx.r5.s64 + 13852;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x822d9ef0
	sub_822D9EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-10512
	ctx.r3.s64 = ctx.r10.s64 + -10512;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x822d9ef0
	sub_822D9EF0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-8124
	ctx.r3.s64 = ctx.r7.s64 + -8124;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a1cfc
	if (cr6.eq) goto loc_825A1CFC;
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1cfc
	if (cr6.eq) goto loc_825A1CFC;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1d00
	if (!cr6.eq) goto loc_825A1D00;
loc_825A1CFC:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825A1D00:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8136
	ctx.r3.s64 = r11.s64 + -8136;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a1d9c
	if (cr6.eq) goto loc_825A1D9C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1d9c
	if (cr6.eq) goto loc_825A1D9C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1da0
	if (!cr6.eq) goto loc_825A1DA0;
loc_825A1D9C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825A1DA0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8152
	ctx.r3.s64 = r11.s64 + -8152;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a1e3c
	if (cr6.eq) goto loc_825A1E3C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1e3c
	if (cr6.eq) goto loc_825A1E3C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1e40
	if (!cr6.eq) goto loc_825A1E40;
loc_825A1E3C:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825A1E40:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r11,-8160
	r28.s64 = r11.s64 + -8160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1f14
	if (cr6.eq) goto loc_825A1F14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x822d9ef0
	sub_822D9EF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825A1F14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_825A1F20"))) PPC_WEAK_FUNC(sub_825A1F20);
PPC_FUNC_IMPL(__imp__sub_825A1F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825A1F24"))) PPC_WEAK_FUNC(sub_825A1F24);
PPC_FUNC_IMPL(__imp__sub_825A1F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1F28"))) PPC_WEAK_FUNC(sub_825A1F28);
PPC_FUNC_IMPL(__imp__sub_825A1F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-8080
	ctx.r9.s64 = r11.s64 + -8080;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,22272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22272, r11.u32);
	// beq cr6,0x825a1f68
	if (cr6.eq) goto loc_825A1F68;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A1F68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A1F78"))) PPC_WEAK_FUNC(sub_825A1F78);
PPC_FUNC_IMPL(__imp__sub_825A1F78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1F7C"))) PPC_WEAK_FUNC(sub_825A1F7C);
PPC_FUNC_IMPL(__imp__sub_825A1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1F80"))) PPC_WEAK_FUNC(sub_825A1F80);
PPC_FUNC_IMPL(__imp__sub_825A1F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e9fb0
	sub_822E9FB0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a1fe0
	if (cr6.eq) goto loc_825A1FE0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_825A1FE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825A1FE8"))) PPC_WEAK_FUNC(sub_825A1FE8);
PPC_FUNC_IMPL(__imp__sub_825A1FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A1FEC"))) PPC_WEAK_FUNC(sub_825A1FEC);
PPC_FUNC_IMPL(__imp__sub_825A1FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1FF0"))) PPC_WEAK_FUNC(sub_825A1FF0);
PPC_FUNC_IMPL(__imp__sub_825A1FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9fb0
	sub_822E9FB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x825a2038
	if (cr6.eq) goto loc_825A2038;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e5cf0
	sub_826E5CF0(ctx, base);
loc_825A2038:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A204C"))) PPC_WEAK_FUNC(sub_825A204C);
PPC_FUNC_IMPL(__imp__sub_825A204C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2050"))) PPC_WEAK_FUNC(sub_825A2050);
PPC_FUNC_IMPL(__imp__sub_825A2050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,0(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82584e08
	sub_82584E08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825a208c
	if (cr0.eq) goto loc_825A208C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_825A208C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ed5e0
	sub_826ED5E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825A20A0"))) PPC_WEAK_FUNC(sub_825A20A0);
PPC_FUNC_IMPL(__imp__sub_825A20A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825A20A4"))) PPC_WEAK_FUNC(sub_825A20A4);
PPC_FUNC_IMPL(__imp__sub_825A20A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A20A8"))) PPC_WEAK_FUNC(sub_825A20A8);
PPC_FUNC_IMPL(__imp__sub_825A20A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-8072
	ctx.r9.s64 = ctx.r10.s64 + -8072;
	// stw r31,22272(r11)
	PPC_STORE_U32(r11.u32 + 22272, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ba70
	sub_8241BA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A20F4"))) PPC_WEAK_FUNC(sub_825A20F4);
PPC_FUNC_IMPL(__imp__sub_825A20F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A20F8"))) PPC_WEAK_FUNC(sub_825A20F8);
PPC_FUNC_IMPL(__imp__sub_825A20F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-8072
	ctx.r10.s64 = r11.s64 + -8072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x826ec150
	sub_826EC150(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826e60b0
	sub_826E60B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// addi r10,r4,-8080
	ctx.r10.s64 = ctx.r4.s64 + -8080;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,22272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22272, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A2198"))) PPC_WEAK_FUNC(sub_825A2198);
PPC_FUNC_IMPL(__imp__sub_825A2198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A219C"))) PPC_WEAK_FUNC(sub_825A219C);
PPC_FUNC_IMPL(__imp__sub_825A219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A21A0"))) PPC_WEAK_FUNC(sub_825A21A0);
PPC_FUNC_IMPL(__imp__sub_825A21A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825a20f8
	sub_825A20F8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a21d8
	if (cr6.eq) goto loc_825A21D8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A21D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A21EC"))) PPC_WEAK_FUNC(sub_825A21EC);
PPC_FUNC_IMPL(__imp__sub_825A21EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A21F0"))) PPC_WEAK_FUNC(sub_825A21F0);
PPC_FUNC_IMPL(__imp__sub_825A21F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
}

__attribute__((alias("__imp__sub_825A2214"))) PPC_WEAK_FUNC(sub_825A2214);
PPC_FUNC_IMPL(__imp__sub_825A2214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2218"))) PPC_WEAK_FUNC(sub_825A2218);
PPC_FUNC_IMPL(__imp__sub_825A2218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r10,-19976
	ctx.r8.s64 = ctx.r10.s64 + -19976;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,-19976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19976);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,-19976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19976);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
}

__attribute__((alias("__imp__sub_825A2278"))) PPC_WEAK_FUNC(sub_825A2278);
PPC_FUNC_IMPL(__imp__sub_825A2278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A227C"))) PPC_WEAK_FUNC(sub_825A227C);
PPC_FUNC_IMPL(__imp__sub_825A227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2280"))) PPC_WEAK_FUNC(sub_825A2280);
PPC_FUNC_IMPL(__imp__sub_825A2280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r8,r10,-19976
	ctx.r8.s64 = ctx.r10.s64 + -19976;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,-19976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19976);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f0,-19976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19976);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
}

__attribute__((alias("__imp__sub_825A22E0"))) PPC_WEAK_FUNC(sub_825A22E0);
PPC_FUNC_IMPL(__imp__sub_825A22E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A22E4"))) PPC_WEAK_FUNC(sub_825A22E4);
PPC_FUNC_IMPL(__imp__sub_825A22E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A22E8"))) PPC_WEAK_FUNC(sub_825A22E8);
PPC_FUNC_IMPL(__imp__sub_825A22E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// stfs f0,32(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f13,12136(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825a232c
	if (!cr6.gt) goto loc_825A232C;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,32(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
loc_825A232C:
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f6,12(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A2390"))) PPC_WEAK_FUNC(sub_825A2390);
PPC_FUNC_IMPL(__imp__sub_825A2390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2394"))) PPC_WEAK_FUNC(sub_825A2394);
PPC_FUNC_IMPL(__imp__sub_825A2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2398"))) PPC_WEAK_FUNC(sub_825A2398);
PPC_FUNC_IMPL(__imp__sub_825A2398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_825A23B8"))) PPC_WEAK_FUNC(sub_825A23B8);
PPC_FUNC_IMPL(__imp__sub_825A23B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A23BC"))) PPC_WEAK_FUNC(sub_825A23BC);
PPC_FUNC_IMPL(__imp__sub_825A23BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A23C0"))) PPC_WEAK_FUNC(sub_825A23C0);
PPC_FUNC_IMPL(__imp__sub_825A23C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, r11.u8);
	// stb r10,433(r3)
	PPC_STORE_U8(ctx.r3.u32 + 433, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A23D4"))) PPC_WEAK_FUNC(sub_825A23D4);
PPC_FUNC_IMPL(__imp__sub_825A23D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A23D8"))) PPC_WEAK_FUNC(sub_825A23D8);
PPC_FUNC_IMPL(__imp__sub_825A23D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,432(r3)
	PPC_STORE_U8(ctx.r3.u32 + 432, r11.u8);
	// stb r10,433(r3)
	PPC_STORE_U8(ctx.r3.u32 + 433, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A23EC"))) PPC_WEAK_FUNC(sub_825A23EC);
PPC_FUNC_IMPL(__imp__sub_825A23EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A23F0"))) PPC_WEAK_FUNC(sub_825A23F0);
PPC_FUNC_IMPL(__imp__sub_825A23F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-8056
	ctx.r10.s64 = r11.s64 + -8056;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2400"))) PPC_WEAK_FUNC(sub_825A2400);
PPC_FUNC_IMPL(__imp__sub_825A2400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaae4
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lbz r9,433(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 433);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r28,r11,12192
	r28.s64 = r11.s64 + 12192;
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// bne cr6,0x825a2598
	if (!cr6.eq) goto loc_825A2598;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f0,-8028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8028);
	f0.f64 = double(temp.f32);
	// addi r4,r10,12208
	ctx.r4.s64 = ctx.r10.s64 + 12208;
	// stfs f0,436(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// addi r3,r9,-19960
	ctx.r3.s64 = ctx.r9.s64 + -19960;
	// lfs f13,-8032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8032);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8036);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = f0.f64;
	// lfs f11,21036(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// stfs f12,444(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 444, temp.u32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// stfs f11,448(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 448, temp.u32);
	// addi r11,r31,436
	r11.s64 = r31.s64 + 436;
	// lfs f0,12208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12208);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-19960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19960);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + f0.f64));
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f0,f5,f12
	f0.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f9,f4,f7
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8234dc60
	sub_8234DC60(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,464(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// addi r11,r31,464
	r11.s64 = r31.s64 + 464;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// stfs f7,468(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,472(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,476(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 476, temp.u32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,480(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,484(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 484, temp.u32);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,488(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,492(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 492, temp.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,496(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 496, temp.u32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// lfs f12,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,508(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,512(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 512, temp.u32);
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,516(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 516, temp.u32);
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,520(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 520, temp.u32);
	// lfs f7,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,524(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 524, temp.u32);
	// stb r11,433(r31)
	PPC_STORE_U8(r31.u32 + 433, r11.u8);
loc_825A2598:
	// lbz r11,433(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 433);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a291c
	if (cr6.eq) goto loc_825A291C;
	// lfs f31,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	f31.f64 = double(temp.f32);
	// addi r29,r31,272
	r29.s64 = r31.s64 + 272;
	// lfs f30,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	f30.f64 = double(temp.f32);
	// li r30,2
	r30.s64 = 2;
	// lfs f29,228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	f29.f64 = double(temp.f32);
	// lfs f25,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	f25.f64 = double(temp.f32);
	// lfs f28,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f28.f64 = double(temp.f32);
	// lfs f27,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f27.f64 = double(temp.f32);
	// lfs f26,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f26.f64 = double(temp.f32);
	// lfs f24,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f24.f64 = double(temp.f32);
loc_825A25CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a22e8
	sub_825A22E8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(f0.f64 + f31.f64));
	// fadds f30,f13,f30
	f30.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fadds f29,f12,f29
	f29.f64 = double(float(ctx.f12.f64 + f29.f64));
	// fadds f25,f11,f25
	f25.f64 = double(float(ctx.f11.f64 + f25.f64));
	// bne 0x825a25cc
	if (!cr0.eq) goto loc_825A25CC;
	// addi r30,r31,352
	r30.s64 = r31.s64 + 352;
	// li r29,2
	r29.s64 = 2;
loc_825A2610:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f23.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a22e8
	sub_825A22E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + f0.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f30,f13,f30
	f30.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f29,f12,f29
	f29.f64 = double(float(ctx.f12.f64 + f29.f64));
	// fadds f25,f11,f25
	f25.f64 = double(float(ctx.f11.f64 + f25.f64));
	// bl 0x825a2398
	sub_825A2398(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f28,f10,f28
	f28.f64 = double(float(ctx.f10.f64 + f28.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f27,f9,f27
	f27.f64 = double(float(ctx.f9.f64 + f27.f64));
	// fadds f26,f8,f26
	f26.f64 = double(float(ctx.f8.f64 + f26.f64));
	// fadds f24,f7,f24
	f24.f64 = double(float(ctx.f7.f64 + f24.f64));
	// bne 0x825a2610
	if (!cr0.eq) goto loc_825A2610;
	// lfs f13,500(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f11,504(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 504);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f0,496(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 496);
	f0.f64 = double(temp.f32);
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(f0.f64 * f29.f64));
	// lfs f6,468(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 468);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f0,f26
	ctx.f7.f64 = double(float(f0.f64 * f26.f64));
	// lfs f4,472(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 472);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f11,f26
	ctx.f3.f64 = double(float(ctx.f11.f64 * f26.f64));
	// lfs f8,464(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 464);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f13,f26
	ctx.f5.f64 = double(float(ctx.f13.f64 * f26.f64));
	// lbz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 432);
	// lfs f2,480(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 480);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,484(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 484);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f29,488(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 488);
	f29.f64 = double(temp.f32);
	// lfs f0,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	f0.f64 = double(temp.f32);
	// fmadds f11,f6,f31,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * f31.f64 + ctx.f10.f64));
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f4,f31,f9
	ctx.f10.f64 = double(float(ctx.f4.f64 * f31.f64 + ctx.f9.f64));
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// fmadds f12,f8,f31,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * f31.f64 + ctx.f12.f64));
	// fmadds f9,f8,f28,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * f28.f64 + ctx.f7.f64));
	// fmadds f7,f4,f28,f3
	ctx.f7.f64 = double(float(ctx.f4.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f8,f6,f28,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 * f28.f64 + ctx.f5.f64));
	// fdivs f0,f23,f0
	f0.f64 = double(float(f23.f64 / f0.f64));
	// fmadds f11,f1,f30,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * f30.f64 + ctx.f11.f64));
	// fmadds f10,f29,f30,f10
	ctx.f10.f64 = double(float(f29.f64 * f30.f64 + ctx.f10.f64));
	// fmadds f12,f2,f30,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * f30.f64 + ctx.f12.f64));
	// fmadds f9,f2,f27,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * f27.f64 + ctx.f9.f64));
	// fmadds f7,f29,f27,f7
	ctx.f7.f64 = double(float(f29.f64 * f27.f64 + ctx.f7.f64));
	// fmadds f8,f1,f27,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * f27.f64 + ctx.f8.f64));
	// beq cr6,0x825a2734
	if (cr6.eq) goto loc_825A2734;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,432(r31)
	PPC_STORE_U8(r31.u32 + 432, ctx.r10.u8);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f10,248(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f25,252(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f9,256(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// stfs f8,260(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// stfs f7,264(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// stfs f24,268(r31)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// b 0x825a27c0
	goto loc_825A27C0;
loc_825A2734:
	// fsubs f6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f5,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f4,248(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 248);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fmuls f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,252(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f5,f6,f4
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fadds f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f3,240(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// fadds f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f2,248(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// fadds f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f1,244(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f7,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f11,264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lfs f12,268(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,260(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	f0.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// stfs f12,268(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// fadds f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f2,256(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// stfs f1,260(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// fadds f0,f3,f8
	f0.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f0,264(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
loc_825A27C0:
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// lfs f9,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 436);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,448(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 448);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f8,440(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 440);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r31,436
	ctx.r9.s64 = r31.s64 + 436;
	// lfs f6,444(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 444);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f7,f0,f9
	ctx.f7.f64 = double(float(f0.f64 + ctx.f9.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// fadds f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lfs f11,448(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 448);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,444(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 444);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,440(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 440);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,3792(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3792);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f1,436(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 436);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// stfs f3,24(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fadds f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f4,36(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// fadds f2,f0,f7
	ctx.f2.f64 = double(float(f0.f64 + ctx.f7.f64));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f1,480(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 480);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,484(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 484);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f6,488(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 488);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmadds f4,f1,f12,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f5.f64));
	// lfs f7,492(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 492);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f8,f11,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fadds f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmuls f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fsubs f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f0,f9,f10
	f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f10,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f11,f5,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f9,f7,f5
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fadds f6,f10,f2
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f6,64(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// fadds f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// fadds f8,f12,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// fadds f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmuls f1,f6,f6
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmr f11,f6
	ctx.f11.f64 = ctx.f6.f64;
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
	// fmadds f0,f7,f7,f1
	f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f9,f8,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + f0.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,56(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f5,60(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
loc_825A291C:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_825A2930"))) PPC_WEAK_FUNC(sub_825A2930);
PPC_FUNC_IMPL(__imp__sub_825A2930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825A2934"))) PPC_WEAK_FUNC(sub_825A2934);
PPC_FUNC_IMPL(__imp__sub_825A2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2938"))) PPC_WEAK_FUNC(sub_825A2938);
PPC_FUNC_IMPL(__imp__sub_825A2938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r26,272
	r28.s64 = r26.s64 + 272;
	// addi r10,r11,-8056
	ctx.r10.s64 = r11.s64 + -8056;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// li r31,1
	r31.s64 = 1;
loc_825A2970:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2280
	sub_825A2280(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bge 0x825a2970
	if (!cr0.lt) goto loc_825A2970;
	// addi r22,r26,352
	r22.s64 = r26.s64 + 352;
	// li r31,1
	r31.s64 = 1;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_825A2990:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2280
	sub_825A2280(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bge 0x825a2990
	if (!cr0.lt) goto loc_825A2990;
	// li r11,1
	r11.s64 = 1;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stb r11,432(r26)
	PPC_STORE_U8(r26.u32 + 432, r11.u8);
	// li r31,2
	r31.s64 = 2;
loc_825A29B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2218
	sub_825A2218(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x825a29b4
	if (!cr0.eq) goto loc_825A29B4;
	// mr r30,r22
	r30.u64 = r22.u64;
	// li r31,2
	r31.s64 = 2;
loc_825A29D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2218
	sub_825A2218(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x825a29d0
	if (!cr0.eq) goto loc_825A29D0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7784
	ctx.r3.s64 = r11.s64 + -7784;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7796
	ctx.r3.s64 = ctx.r10.s64 + -7796;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,3640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3640);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-7800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7800);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r25,r11,-13328
	r25.s64 = r11.s64 + -13328;
	// addi r30,r10,-13220
	r30.s64 = ctx.r10.s64 + -13220;
	// addi r24,r9,21080
	r24.s64 = ctx.r9.s64 + 21080;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a2b48
	if (cr6.eq) goto loc_825A2B48;
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2b48
	if (cr6.eq) goto loc_825A2B48;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2ad0
	if (cr6.eq) goto loc_825A2AD0;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a2b40
	goto loc_825A2B40;
loc_825A2AD0:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2b48
	if (cr6.eq) goto loc_825A2B48;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2b38
	if (cr6.eq) goto loc_825A2B38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d16a8
	sub_822D16A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2b38
	if (cr6.eq) goto loc_825A2B38;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a2b3c
	goto loc_825A2B3C;
loc_825A2B38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A2B3C:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A2B40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2b4c
	if (!cr6.eq) goto loc_825A2B4C;
loc_825A2B48:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
loc_825A2B4C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,220(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 220, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,224(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 224, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,228(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r26.u32 + 228, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r26.u32 + 232, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7812
	ctx.r3.s64 = r11.s64 + -7812;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r23,r11,-19960
	r23.s64 = r11.s64 + -19960;
	// beq cr6,0x825a2c70
	if (cr6.eq) goto loc_825A2C70;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2c70
	if (cr6.eq) goto loc_825A2C70;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2bf8
	if (cr6.eq) goto loc_825A2BF8;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a2c68
	goto loc_825A2C68;
loc_825A2BF8:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2c70
	if (cr6.eq) goto loc_825A2C70;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2c60
	if (cr6.eq) goto loc_825A2C60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d16a8
	sub_822D16A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2c60
	if (cr6.eq) goto loc_825A2C60;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a2c64
	goto loc_825A2C64;
loc_825A2C60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A2C64:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A2C68:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2c74
	if (!cr6.eq) goto loc_825A2C74;
loc_825A2C70:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825A2C74:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,204(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 204, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,208(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 208, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,212(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r26.u32 + 212, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,216(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r26.u32 + 216, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7832
	ctx.r3.s64 = ctx.r10.s64 + -7832;
	// lfs f0,-512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -512);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r29,r11,-13188
	r29.s64 = r11.s64 + -13188;
	// beq cr6,0x825a2da4
	if (cr6.eq) goto loc_825A2DA4;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2da4
	if (cr6.eq) goto loc_825A2DA4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d2c
	if (cr6.eq) goto loc_825A2D2C;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a2d9c
	goto loc_825A2D9C;
loc_825A2D2C:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2da4
	if (cr6.eq) goto loc_825A2DA4;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2d94
	if (cr6.eq) goto loc_825A2D94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822b0690
	sub_822B0690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2d94
	if (cr6.eq) goto loc_825A2D94;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a2d98
	goto loc_825A2D98;
loc_825A2D94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A2D98:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A2D9C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2da8
	if (!cr6.eq) goto loc_825A2DA8;
loc_825A2DA4:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825A2DA8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,236(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 236, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7856
	ctx.r3.s64 = r11.s64 + -7856;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-7880
	ctx.r3.s64 = ctx.r9.s64 + -7880;
	// lfs f30,15536(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15536);
	f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a2ec8
	if (cr6.eq) goto loc_825A2EC8;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2ec8
	if (cr6.eq) goto loc_825A2EC8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2e50
	if (cr6.eq) goto loc_825A2E50;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a2ec0
	goto loc_825A2EC0;
loc_825A2E50:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2ec8
	if (cr6.eq) goto loc_825A2EC8;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2eb8
	if (cr6.eq) goto loc_825A2EB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d16a8
	sub_822D16A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2eb8
	if (cr6.eq) goto loc_825A2EB8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a2ebc
	goto loc_825A2EBC;
loc_825A2EB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A2EBC:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A2EC0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2ecc
	if (!cr6.eq) goto loc_825A2ECC;
loc_825A2EC8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825A2ECC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2fd0
	if (cr6.eq) goto loc_825A2FD0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2fd0
	if (cr6.eq) goto loc_825A2FD0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2f58
	if (cr6.eq) goto loc_825A2F58;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a2fc8
	goto loc_825A2FC8;
loc_825A2F58:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2fd0
	if (cr6.eq) goto loc_825A2FD0;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2fc0
	if (cr6.eq) goto loc_825A2FC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822b0690
	sub_822B0690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2fc0
	if (cr6.eq) goto loc_825A2FC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a2fc4
	goto loc_825A2FC4;
loc_825A2FC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A2FC4:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A2FC8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2fd4
	if (!cr6.eq) goto loc_825A2FD4;
loc_825A2FD0:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825A2FD4:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a21f0
	sub_825A21F0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7904
	ctx.r3.s64 = r11.s64 + -7904;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-7928
	ctx.r3.s64 = ctx.r9.s64 + -7928;
	// lfs f31,2816(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2816);
	f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a3104
	if (cr6.eq) goto loc_825A3104;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3104
	if (cr6.eq) goto loc_825A3104;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a308c
	if (cr6.eq) goto loc_825A308C;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a30fc
	goto loc_825A30FC;
loc_825A308C:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3104
	if (cr6.eq) goto loc_825A3104;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a30f4
	if (cr6.eq) goto loc_825A30F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d16a8
	sub_822D16A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a30f4
	if (cr6.eq) goto loc_825A30F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a30f8
	goto loc_825A30F8;
loc_825A30F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A30F8:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A30FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3108
	if (!cr6.eq) goto loc_825A3108;
loc_825A3104:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825A3108:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a320c
	if (cr6.eq) goto loc_825A320C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a320c
	if (cr6.eq) goto loc_825A320C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3194
	if (cr6.eq) goto loc_825A3194;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a3204
	goto loc_825A3204;
loc_825A3194:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a320c
	if (cr6.eq) goto loc_825A320C;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a31fc
	if (cr6.eq) goto loc_825A31FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822b0690
	sub_822B0690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a31fc
	if (cr6.eq) goto loc_825A31FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a3200
	goto loc_825A3200;
loc_825A31FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A3200:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A3204:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3210
	if (!cr6.eq) goto loc_825A3210;
loc_825A320C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825A3210:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r26,312
	ctx.r3.s64 = r26.s64 + 312;
	// bl 0x825a21f0
	sub_825A21F0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7952
	ctx.r3.s64 = r11.s64 + -7952;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r10,-7976
	ctx.r3.s64 = ctx.r10.s64 + -7976;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a3338
	if (cr6.eq) goto loc_825A3338;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3338
	if (cr6.eq) goto loc_825A3338;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a32c0
	if (cr6.eq) goto loc_825A32C0;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a3330
	goto loc_825A3330;
loc_825A32C0:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3338
	if (cr6.eq) goto loc_825A3338;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3328
	if (cr6.eq) goto loc_825A3328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d16a8
	sub_822D16A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3328
	if (cr6.eq) goto loc_825A3328;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a332c
	goto loc_825A332C;
loc_825A3328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A332C:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A3330:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a333c
	if (!cr6.eq) goto loc_825A333C;
loc_825A3338:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825A333C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3440
	if (cr6.eq) goto loc_825A3440;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3440
	if (cr6.eq) goto loc_825A3440;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a33c8
	if (cr6.eq) goto loc_825A33C8;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a3438
	goto loc_825A3438;
loc_825A33C8:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3440
	if (cr6.eq) goto loc_825A3440;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3430
	if (cr6.eq) goto loc_825A3430;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822b0690
	sub_822B0690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3430
	if (cr6.eq) goto loc_825A3430;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a3434
	goto loc_825A3434;
loc_825A3430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A3434:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A3438:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3444
	if (!cr6.eq) goto loc_825A3444;
loc_825A3440:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825A3444:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825a21f0
	sub_825A21F0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-8000
	ctx.r3.s64 = r11.s64 + -8000;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r10,-8024
	ctx.r3.s64 = ctx.r10.s64 + -8024;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a356c
	if (cr6.eq) goto loc_825A356C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a356c
	if (cr6.eq) goto loc_825A356C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a34f4
	if (cr6.eq) goto loc_825A34F4;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a3564
	goto loc_825A3564;
loc_825A34F4:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a356c
	if (cr6.eq) goto loc_825A356C;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a355c
	if (cr6.eq) goto loc_825A355C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d16a8
	sub_822D16A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a355c
	if (cr6.eq) goto loc_825A355C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a3560
	goto loc_825A3560;
loc_825A355C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A3560:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A3564:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3570
	if (!cr6.eq) goto loc_825A3570;
loc_825A356C:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_825A3570:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3674
	if (cr6.eq) goto loc_825A3674;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3674
	if (cr6.eq) goto loc_825A3674;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a35fc
	if (cr6.eq) goto loc_825A35FC;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825a366c
	goto loc_825A366C;
loc_825A35FC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3674
	if (cr6.eq) goto loc_825A3674;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3664
	if (cr6.eq) goto loc_825A3664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822b0690
	sub_822B0690(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3664
	if (cr6.eq) goto loc_825A3664;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a3668
	goto loc_825A3668;
loc_825A3664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A3668:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825A366C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3678
	if (!cr6.eq) goto loc_825A3678;
loc_825A3674:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_825A3678:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r26,392
	ctx.r3.s64 = r26.s64 + 392;
	// bl 0x825a21f0
	sub_825A21F0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 240, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f0,4(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 244, temp.u32);
	// lfs f0,8(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 248, temp.u32);
	// lfs f0,12(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 252, temp.u32);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 256, temp.u32);
	// lfs f0,4(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 260, temp.u32);
	// lfs f0,8(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 264, temp.u32);
	// lfs f0,12(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,268(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 268, temp.u32);
	// stb r11,433(r26)
	PPC_STORE_U8(r26.u32 + 433, r11.u8);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-104(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
}

__attribute__((alias("__imp__sub_825A36F0"))) PPC_WEAK_FUNC(sub_825A36F0);
PPC_FUNC_IMPL(__imp__sub_825A36F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825A36F4"))) PPC_WEAK_FUNC(sub_825A36F4);
PPC_FUNC_IMPL(__imp__sub_825A36F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A36F8"))) PPC_WEAK_FUNC(sub_825A36F8);
PPC_FUNC_IMPL(__imp__sub_825A36F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8056
	ctx.r10.s64 = r11.s64 + -8056;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a373c
	if (cr6.eq) goto loc_825A373C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A373C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A3750"))) PPC_WEAK_FUNC(sub_825A3750);
PPC_FUNC_IMPL(__imp__sub_825A3750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3754"))) PPC_WEAK_FUNC(sub_825A3754);
PPC_FUNC_IMPL(__imp__sub_825A3754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3758"))) PPC_WEAK_FUNC(sub_825A3758);
PPC_FUNC_IMPL(__imp__sub_825A3758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7748
	ctx.r10.s64 = r11.s64 + -7748;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3768"))) PPC_WEAK_FUNC(sub_825A3768);
PPC_FUNC_IMPL(__imp__sub_825A3768) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f10,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// fmuls f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// fmuls f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f6,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f0,f1
	ctx.f3.f64 = double(float(f0.f64 * ctx.f1.f64));
	// lfs f4,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f9.f64 = double(temp.f32);
	// fadds f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f8,f4,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f5,f12,f1
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// fsubs f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmadds f1,f7,f4,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f10,f0,f3,f1
	ctx.f10.f64 = double(float(f0.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x825a381c
	if (!cr6.lt) goto loc_825A381C;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f2,f7,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fadds f1,f13,f5
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f1,0(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fadds f0,f12,f4
	f0.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f0,4(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fadds f13,f11,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fadds f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
loc_825A381C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_825A3820"))) PPC_WEAK_FUNC(sub_825A3820);
PPC_FUNC_IMPL(__imp__sub_825A3820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3824"))) PPC_WEAK_FUNC(sub_825A3824);
PPC_FUNC_IMPL(__imp__sub_825A3824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3828"))) PPC_WEAK_FUNC(sub_825A3828);
PPC_FUNC_IMPL(__imp__sub_825A3828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eaae0
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// beq cr6,0x825a3c20
	if (cr6.eq) goto loc_825A3C20;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	f0.f64 = double(temp.f32);
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-31965
	ctx.r6.s64 = -2094858240;
	// fmadds f0,f13,f30,f0
	f0.f64 = double(float(ctx.f13.f64 * f30.f64 + f0.f64));
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,12328(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12328);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825a38e8
	if (!cr6.gt) goto loc_825A38E8;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,276(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
loc_825A38E8:
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f0.f64 = double(temp.f32);
	// lis r30,-31965
	r30.s64 = -2094858240;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f12,264(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r30,12348
	r29.s64 = r30.s64 + 12348;
	// lfs f11,252(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,256(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f10,268(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 268);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,260(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f30,f10
	f30.f64 = double(float(f30.f64 / ctx.f10.f64));
	// lfs f29,284(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 284);
	f29.f64 = double(temp.f32);
	// lfs f28,236(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	f28.f64 = double(temp.f32);
	// lfs f27,240(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 240);
	f27.f64 = double(temp.f32);
	// lfs f26,244(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 244);
	f26.f64 = double(temp.f32);
	// lfs f1,276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r11,12332
	ctx.r4.s64 = r11.s64 + 12332;
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f27
	ctx.f4.f64 = double(float(f0.f64 * f27.f64));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f13,f27
	ctx.f3.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmuls f2,f12,f27
	ctx.f2.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f29,f0,f11
	f29.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f13,f11
	f27.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f7,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f31,f30
	ctx.f1.f64 = double(float(f31.f64 - f30.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f24,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f24.f64 = double(temp.f32);
	// addi r11,r31,204
	r11.s64 = r31.s64 + 204;
	// lfs f25,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f25.f64 = double(temp.f32);
	// addi r10,r31,220
	ctx.r10.s64 = r31.s64 + 220;
	// lfs f23,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	f23.f64 = double(temp.f32);
	// fmadds f22,f9,f26,f4
	f22.f64 = double(float(ctx.f9.f64 * f26.f64 + ctx.f4.f64));
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f3,f8,f26,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 * f26.f64 + ctx.f3.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f7,f26,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * f26.f64 + ctx.f2.f64));
	// lfs f26,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	f26.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f9,f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + f29.f64));
	// stfs f26,216(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// fmadds f8,f8,f10,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + f27.f64));
	// fmuls f26,f24,f1
	f26.f64 = double(float(f24.f64 * ctx.f1.f64));
	// fmadds f7,f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmuls f25,f25,f1
	f25.f64 = double(float(f25.f64 * ctx.f1.f64));
	// fmuls f24,f23,f1
	f24.f64 = double(float(f23.f64 * ctx.f1.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f6,f28,f22
	ctx.f10.f64 = double(float(ctx.f6.f64 * f28.f64 + f22.f64));
	// fmadds f3,f5,f28,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f2,f4,f28,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 * f28.f64 + ctx.f2.f64));
	// fmadds f4,f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f7.f64));
	// lfs f7,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f8,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f28,f6,f11,f9
	f28.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f9.f64));
	// lfs f9,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f3,f30
	ctx.f3.f64 = double(float(ctx.f3.f64 * f30.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f29,f10,f30
	f29.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 * f30.f64));
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lfs f6,3792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// fmuls f4,f4,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * f30.f64));
	// fmuls f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 * f30.f64));
	// fmuls f11,f28,f30
	ctx.f11.f64 = double(float(f28.f64 * f30.f64));
	// fadds f4,f24,f4
	ctx.f4.f64 = double(float(f24.f64 + ctx.f4.f64));
	// stfs f4,212(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// fadds f5,f26,f5
	ctx.f5.f64 = double(float(f26.f64 + ctx.f5.f64));
	// stfs f5,208(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(f25.f64 + ctx.f11.f64));
	// stfs f11,204(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f4,220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f11,f4,f1
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// lfs f4,228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f4,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// lfs f4,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f4,232(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// fadds f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 + f29.f64));
	// stfs f5,224(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// fadds f4,f1,f2
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f11,220(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// stfs f4,228(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f3,232(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// fadds f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// fadds f4,f9,f1
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f2,f2,f10
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f11,216(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,212(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fadds f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12348(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12348);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f7,f12,f10,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f8.f64));
	// lfs f8,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f5,f0,f9,f7
	ctx.f5.f64 = double(float(f0.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + f31.f64));
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f6,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f31,f3
	ctx.f2.f64 = double(float(f31.f64 - ctx.f3.f64));
	// fmuls f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f9,f8,f3
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f7,f0,f2
	ctx.f7.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fmuls f5,f13,f2
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f3,f12,f2
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f8,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f2,f6
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fadds f2,f7,f1
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// fadds f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// fadds f11,f4,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f9,f1
	ctx.f9.f64 = ctx.f1.f64;
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmadds f2,f1,f1,f4
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// stfs f6,68(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// fmadds f11,f1,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f6,f31,f10
	ctx.f6.f64 = double(float(f31.f64 / ctx.f10.f64));
	// fmuls f5,f6,f3
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f5,60(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// fmuls f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12348(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12348);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f1,f12,f10,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f2.f64));
	// lfs f13,292(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,288(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f9,f1
	ctx.f11.f64 = double(float(f0.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fsel f10,f11,f11,f8
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(f31.f64 - ctx.f10.f64));
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmadds f1,f9,f13,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// bl 0x825a3768
	sub_825A3768(ctx, base);
loc_825A3C20:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab2c
}

__attribute__((alias("__imp__sub_825A3C34"))) PPC_WEAK_FUNC(sub_825A3C34);
PPC_FUNC_IMPL(__imp__sub_825A3C34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A3C38"))) PPC_WEAK_FUNC(sub_825A3C38);
PPC_FUNC_IMPL(__imp__sub_825A3C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-7748
	ctx.r9.s64 = r11.s64 + -7748;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-7656
	ctx.r3.s64 = ctx.r7.s64 + -7656;
	// lfs f0,2816(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2816);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a3d00
	if (cr6.eq) goto loc_825A3D00;
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3d00
	if (cr6.eq) goto loc_825A3D00;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a3d04
	if (!cr6.eq) goto loc_825A3D04;
loc_825A3D00:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A3D04:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,280(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7676
	ctx.r3.s64 = ctx.r10.s64 + -7676;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a3d84
	if (cr6.eq) goto loc_825A3D84;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3d84
	if (cr6.eq) goto loc_825A3D84;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a3d88
	if (!cr6.eq) goto loc_825A3D88;
loc_825A3D84:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A3D88:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,284(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7688
	ctx.r3.s64 = ctx.r10.s64 + -7688;
	// lfs f0,-12676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12676);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a3e08
	if (cr6.eq) goto loc_825A3E08;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3e08
	if (cr6.eq) goto loc_825A3E08;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a3e0c
	if (!cr6.eq) goto loc_825A3E0C;
loc_825A3E08:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A3E0C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,272(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-7796
	ctx.r3.s64 = ctx.r9.s64 + -7796;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,3640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3640);
	f0.f64 = double(temp.f32);
	// lfs f13,-7800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -7800);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a3eac
	if (cr6.eq) goto loc_825A3EAC;
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3eac
	if (cr6.eq) goto loc_825A3EAC;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a3eb0
	if (!cr6.eq) goto loc_825A3EB0;
loc_825A3EAC:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
loc_825A3EB0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,252(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,256(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,264(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7812
	ctx.r3.s64 = r11.s64 + -7812;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,-19904
	r30.s64 = r11.s64 + -19904;
	// beq cr6,0x825a3f44
	if (cr6.eq) goto loc_825A3F44;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3f44
	if (cr6.eq) goto loc_825A3F44;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a3f48
	if (!cr6.eq) goto loc_825A3F48;
loc_825A3F44:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825A3F48:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,244(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,248(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7832
	ctx.r3.s64 = ctx.r10.s64 + -7832;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a3fe0
	if (cr6.eq) goto loc_825A3FE0;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3fe0
	if (cr6.eq) goto loc_825A3FE0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a3fe4
	if (!cr6.eq) goto loc_825A3FE4;
loc_825A3FE0:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A3FE4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,268(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7708
	ctx.r3.s64 = ctx.r10.s64 + -7708;
	// lfs f0,-13388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13388);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a4064
	if (cr6.eq) goto loc_825A4064;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a4064
	if (cr6.eq) goto loc_825A4064;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4068
	if (!cr6.eq) goto loc_825A4068;
loc_825A4064:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A4068:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,288(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7728
	ctx.r3.s64 = ctx.r10.s64 + -7728;
	// lfs f0,15536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 15536);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a40e8
	if (cr6.eq) goto loc_825A40E8;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a40e8
	if (cr6.eq) goto loc_825A40E8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a40ec
	if (!cr6.eq) goto loc_825A40EC;
loc_825A40E8:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A40EC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f0,292(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 292, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825A4148"))) PPC_WEAK_FUNC(sub_825A4148);
PPC_FUNC_IMPL(__imp__sub_825A4148) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825A414C"))) PPC_WEAK_FUNC(sub_825A414C);
PPC_FUNC_IMPL(__imp__sub_825A414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4150"))) PPC_WEAK_FUNC(sub_825A4150);
PPC_FUNC_IMPL(__imp__sub_825A4150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7748
	ctx.r10.s64 = r11.s64 + -7748;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a4194
	if (cr6.eq) goto loc_825A4194;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A4194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A41A8"))) PPC_WEAK_FUNC(sub_825A41A8);
PPC_FUNC_IMPL(__imp__sub_825A41A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A41AC"))) PPC_WEAK_FUNC(sub_825A41AC);
PPC_FUNC_IMPL(__imp__sub_825A41AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A41B0"))) PPC_WEAK_FUNC(sub_825A41B0);
PPC_FUNC_IMPL(__imp__sub_825A41B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7636
	ctx.r10.s64 = r11.s64 + -7636;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A41C0"))) PPC_WEAK_FUNC(sub_825A41C0);
PPC_FUNC_IMPL(__imp__sub_825A41C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lfs f0,204(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,228(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// addi r9,r11,-19848
	ctx.r9.s64 = r11.s64 + -19848;
	// stb r10,232(r3)
	PPC_STORE_U8(ctx.r3.u32 + 232, ctx.r10.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f0,-19848(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19848);
	f0.f64 = double(temp.f32);
	// stfs f0,236(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4244"))) PPC_WEAK_FUNC(sub_825A4244);
PPC_FUNC_IMPL(__imp__sub_825A4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4248"))) PPC_WEAK_FUNC(sub_825A4248);
PPC_FUNC_IMPL(__imp__sub_825A4248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaaf8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bne cr6,0x825a441c
	if (!cr6.eq) goto loc_825A441C;
	// lfs f0,216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = f0.f64;
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f13,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// lfs f12,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// stfs f1,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// stfs f28,240(r30)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f29,244(r30)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,248(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 248, temp.u32);
	// addi r8,r10,6656
	ctx.r8.s64 = ctx.r10.s64 + 6656;
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r9,6644
	ctx.r7.s64 = ctx.r9.s64 + 6644;
	// lfs f10,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f1
	ctx.f8.f64 = ctx.f1.f64;
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f4,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lfs f3,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fadds f13,f2,f28
	ctx.f13.f64 = double(float(ctx.f2.f64 + f28.f64));
	// stfs f1,236(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
	// fadds f12,f10,f29
	ctx.f12.f64 = double(float(ctx.f10.f64 + f29.f64));
	// stfs f13,240(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 240, temp.u32);
	// fadds f11,f9,f31
	ctx.f11.f64 = double(float(ctx.f9.f64 + f31.f64));
	// stfs f12,244(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 244, temp.u32);
	// stfs f11,248(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 248, temp.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// addi r31,r30,236
	r31.s64 = r30.s64 + 236;
	// lwz r6,252(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// fmr f7,f28
	ctx.f7.f64 = f28.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f6,f29
	ctx.f6.f64 = f29.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a43d0
	if (cr6.eq) goto loc_825A43D0;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f7
	ctx.f1.f64 = double(float(f0.f64 * ctx.f7.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fadds f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_825A43D0:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,212(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f1,f5
	cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// bgt cr6,0x825a4418
	if (cr6.gt) goto loc_825A4418;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825A4418:
	// stb r11,232(r30)
	PPC_STORE_U8(r30.u32 + 232, r11.u8);
loc_825A441C:
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 + f30.f64));
	// lfs f12,204(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,228(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x825a4468
	if (!cr6.gt) goto loc_825A4468;
	// lbz r11,232(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4468
	if (cr6.eq) goto loc_825A4468;
	// stfs f31,228(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stb r28,232(r30)
	PPC_STORE_U8(r30.u32 + 232, r28.u8);
	// lfs f0,236(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f13,240(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f12,244(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f11,248(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
loc_825A4468:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825A447C"))) PPC_WEAK_FUNC(sub_825A447C);
PPC_FUNC_IMPL(__imp__sub_825A447C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825A4480"))) PPC_WEAK_FUNC(sub_825A4480);
PPC_FUNC_IMPL(__imp__sub_825A4480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-7636
	ctx.r9.s64 = r11.s64 + -7636;
	// addi r3,r10,-7784
	ctx.r3.s64 = ctx.r10.s64 + -7784;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-7548
	ctx.r3.s64 = ctx.r7.s64 + -7548;
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a4554
	if (cr6.eq) goto loc_825A4554;
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a4554
	if (cr6.eq) goto loc_825A4554;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4558
	if (!cr6.eq) goto loc_825A4558;
loc_825A4554:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A4558:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7560
	ctx.r3.s64 = ctx.r10.s64 + -7560;
	// lfs f30,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3648);
	f30.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a45d8
	if (cr6.eq) goto loc_825A45D8;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a45d8
	if (cr6.eq) goto loc_825A45D8;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a45dc
	if (!cr6.eq) goto loc_825A45DC;
loc_825A45D8:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A45DC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,212(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7580
	ctx.r3.s64 = ctx.r10.s64 + -7580;
	// lfs f0,4580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4580);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a465c
	if (cr6.eq) goto loc_825A465C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a465c
	if (cr6.eq) goto loc_825A465C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4660
	if (!cr6.eq) goto loc_825A4660;
loc_825A465C:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A4660:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-7596
	ctx.r3.s64 = ctx.r10.s64 + -7596;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a46e0
	if (cr6.eq) goto loc_825A46E0;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a46e0
	if (cr6.eq) goto loc_825A46E0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a46e4
	if (!cr6.eq) goto loc_825A46E4;
loc_825A46E0:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A46E4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,220(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-7616
	ctx.r3.s64 = r11.s64 + -7616;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a475c
	if (cr6.eq) goto loc_825A475C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a475c
	if (cr6.eq) goto loc_825A475C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a4760
	if (!cr6.eq) goto loc_825A4760;
loc_825A475C:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825A4760:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// addi r9,r11,-19848
	ctx.r9.s64 = r11.s64 + -19848;
	// stb r10,232(r31)
	PPC_STORE_U8(r31.u32 + 232, ctx.r10.u8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,-19848(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19848);
	f0.f64 = double(temp.f32);
	// addi r3,r8,-25128
	ctx.r3.s64 = ctx.r8.s64 + -25128;
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r3,-14120(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825a47d4
	if (cr6.eq) goto loc_825A47D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a47d8
	if (!cr6.eq) goto loc_825A47D8;
loc_825A47D4:
	// li r11,0
	r11.s64 = 0;
loc_825A47D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// stw r3,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A4814"))) PPC_WEAK_FUNC(sub_825A4814);
PPC_FUNC_IMPL(__imp__sub_825A4814) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4818"))) PPC_WEAK_FUNC(sub_825A4818);
PPC_FUNC_IMPL(__imp__sub_825A4818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7636
	ctx.r10.s64 = r11.s64 + -7636;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a485c
	if (cr6.eq) goto loc_825A485C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A485C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A4870"))) PPC_WEAK_FUNC(sub_825A4870);
PPC_FUNC_IMPL(__imp__sub_825A4870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4874"))) PPC_WEAK_FUNC(sub_825A4874);
PPC_FUNC_IMPL(__imp__sub_825A4874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4878"))) PPC_WEAK_FUNC(sub_825A4878);
PPC_FUNC_IMPL(__imp__sub_825A4878) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A487C"))) PPC_WEAK_FUNC(sub_825A487C);
PPC_FUNC_IMPL(__imp__sub_825A487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4880"))) PPC_WEAK_FUNC(sub_825A4880);
PPC_FUNC_IMPL(__imp__sub_825A4880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-7536
	ctx.r10.s64 = r11.s64 + -7536;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8259d710
	sub_8259D710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4890"))) PPC_WEAK_FUNC(sub_825A4890);
PPC_FUNC_IMPL(__imp__sub_825A4890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,221(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 221);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f6,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,88(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A48F0"))) PPC_WEAK_FUNC(sub_825A48F0);
PPC_FUNC_IMPL(__imp__sub_825A48F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,220(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a494c
	if (cr6.eq) goto loc_825A494C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a494c
	if (cr6.eq) goto loc_825A494C;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_825A494C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A495C"))) PPC_WEAK_FUNC(sub_825A495C);
PPC_FUNC_IMPL(__imp__sub_825A495C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4960"))) PPC_WEAK_FUNC(sub_825A4960);
PPC_FUNC_IMPL(__imp__sub_825A4960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8259d828
	sub_8259D828(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-7536
	ctx.r10.s64 = r11.s64 + -7536;
	// stb r28,220(r31)
	PPC_STORE_U8(r31.u32 + 220, r28.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r29,r11,-7784
	r29.s64 = r11.s64 + -7784;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a4a78
	if (cr6.eq) goto loc_825A4A78;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-7500
	ctx.r3.s64 = r11.s64 + -7500;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822cb4c8
	sub_822CB4C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,220(r31)
	PPC_STORE_U8(r31.u32 + 220, ctx.r9.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-7516
	ctx.r3.s64 = ctx.r8.s64 + -7516;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822cb4c8
	sub_822CB4C8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// stb r6,221(r31)
	PPC_STORE_U8(r31.u32 + 221, ctx.r6.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825A4A78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825A4A80"))) PPC_WEAK_FUNC(sub_825A4A80);
PPC_FUNC_IMPL(__imp__sub_825A4A80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825A4A84"))) PPC_WEAK_FUNC(sub_825A4A84);
PPC_FUNC_IMPL(__imp__sub_825A4A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4A88"))) PPC_WEAK_FUNC(sub_825A4A88);
PPC_FUNC_IMPL(__imp__sub_825A4A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-7536
	ctx.r10.s64 = r11.s64 + -7536;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8259d710
	sub_8259D710(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a4acc
	if (cr6.eq) goto loc_825A4ACC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A4ACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825A4AE0"))) PPC_WEAK_FUNC(sub_825A4AE0);
PPC_FUNC_IMPL(__imp__sub_825A4AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4AE4"))) PPC_WEAK_FUNC(sub_825A4AE4);
PPC_FUNC_IMPL(__imp__sub_825A4AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

