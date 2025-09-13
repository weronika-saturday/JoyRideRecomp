#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826B93A8"))) PPC_WEAK_FUNC(sub_826B93A8);
PPC_FUNC_IMPL(__imp__sub_826B93A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b9420
	if (cr6.eq) goto loc_826B9420;
	// addic. r30,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	r30.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826b9420
	if (cr0.eq) goto loc_826B9420;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x826b9408
	if (!cr6.eq) goto loc_826B9408;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9408:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9454
	if (!cr6.eq) goto loc_826B9454;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x826b943c
	goto loc_826B943C;
loc_826B9420:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9454
	if (!cr6.eq) goto loc_826B9454;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
loc_826B943C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9454:
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

__attribute__((alias("__imp__sub_826B9468"))) PPC_WEAK_FUNC(sub_826B9468);
PPC_FUNC_IMPL(__imp__sub_826B9468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B946C"))) PPC_WEAK_FUNC(sub_826B946C);
PPC_FUNC_IMPL(__imp__sub_826B946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9470"))) PPC_WEAK_FUNC(sub_826B9470);
PPC_FUNC_IMPL(__imp__sub_826B9470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,40(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bne cr6,0x826b94b8
	if (!cr6.eq) goto loc_826B94B8;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B94B8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826b9590
	if (!cr6.gt) goto loc_826B9590;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_826B94C8:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r30,r29,r11
	r30.u64 = r29.u64 + r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bne cr6,0x826b9504
	if (!cr6.eq) goto loc_826B9504;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9504:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x826b9550
	if (cr6.eq) goto loc_826B9550;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826b9530
	if (cr6.eq) goto loc_826B9530;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826b9584
	if (!cr6.eq) goto loc_826B9584;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826b93a8
	sub_826B93A8(ctx, base);
	// b 0x826b9584
	goto loc_826B9584;
loc_826B9530:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9584
	if (!cr6.eq) goto loc_826B9584;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x826b956c
	goto loc_826B956C;
loc_826B9550:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bne cr6,0x826b9584
	if (!cr6.eq) goto loc_826B9584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
loc_826B956C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9584:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x826b94c8
	if (!cr0.eq) goto loc_826B94C8;
loc_826B9590:
	// lwz r30,52(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bne cr6,0x826b95c4
	if (!cr6.eq) goto loc_826B95C4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B95C4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826b95f0
	if (!cr6.gt) goto loc_826B95F0;
	// li r29,0
	r29.s64 = 0;
loc_826B95D0:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x826b9788
	sub_826B9788(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x826b95d0
	if (!cr0.eq) goto loc_826B95D0;
loc_826B95F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B95F4"))) PPC_WEAK_FUNC(sub_826B95F4);
PPC_FUNC_IMPL(__imp__sub_826B95F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B95F8"))) PPC_WEAK_FUNC(sub_826B95F8);
PPC_FUNC_IMPL(__imp__sub_826B95F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x826b9620
	if (!cr6.eq) goto loc_826B9620;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_826B9620:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x826b9328
	sub_826B9328(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9644
	if (!cr6.eq) goto loc_826B9644;
	// lwz r29,56(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 56);
loc_826B9644:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9674
	if (!cr6.eq) goto loc_826B9674;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9674:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826b9714
	if (!cr6.gt) goto loc_826B9714;
	// li r30,0
	r30.s64 = 0;
loc_826B9680:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x826b93a8
	sub_826B93A8(ctx, base);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bne cr6,0x826b96cc
	if (!cr6.eq) goto loc_826B96CC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B96CC:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bne cr6,0x826b9708
	if (!cr6.eq) goto loc_826B9708;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9708:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x826b9680
	if (!cr0.eq) goto loc_826B9680;
loc_826B9714:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9728
	if (!cr6.eq) goto loc_826B9728;
	// lwz r30,36(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 36);
loc_826B9728:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826b9758
	if (!cr6.eq) goto loc_826B9758;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9758:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826b9780
	if (!cr6.gt) goto loc_826B9780;
	// li r29,0
	r29.s64 = 0;
loc_826B9764:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x826b93a8
	sub_826B93A8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x826b9764
	if (!cr0.eq) goto loc_826B9764;
loc_826B9780:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B9784"))) PPC_WEAK_FUNC(sub_826B9784);
PPC_FUNC_IMPL(__imp__sub_826B9784) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B9788"))) PPC_WEAK_FUNC(sub_826B9788);
PPC_FUNC_IMPL(__imp__sub_826B9788) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x826b97bc
	if (cr6.eq) goto loc_826B97BC;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b97c0
	if (cr6.eq) goto loc_826B97C0;
loc_826B97BC:
	// li r11,0
	r11.s64 = 0;
loc_826B97C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826b93a8
	sub_826B93A8(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne cr6,0x826b9800
	if (!cr6.eq) goto loc_826B9800;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9800:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne cr6,0x826b9834
	if (!cr6.eq) goto loc_826B9834;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9834:
	// lbz r11,72(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bne cr6,0x826b9868
	if (!cr6.eq) goto loc_826B9868;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9868:
	// lbz r11,73(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 73);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bne cr6,0x826b989c
	if (!cr6.eq) goto loc_826B989C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B989C:
	// lbz r11,74(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 74);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// bne cr6,0x826b98d0
	if (!cr6.eq) goto loc_826B98D0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B98D0:
	// lbz r11,75(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 75);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// bne cr6,0x826b9904
	if (!cr6.eq) goto loc_826B9904;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B9904:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x826b9328
	sub_826B9328(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9470
	sub_826B9470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b95f8
	sub_826B95F8(ctx, base);
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

__attribute__((alias("__imp__sub_826B9944"))) PPC_WEAK_FUNC(sub_826B9944);
PPC_FUNC_IMPL(__imp__sub_826B9944) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9948"))) PPC_WEAK_FUNC(sub_826B9948);
PPC_FUNC_IMPL(__imp__sub_826B9948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x826be250
	sub_826BE250(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x826b999c
	if (!cr6.eq) goto loc_826B999C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_826B999C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B99B4"))) PPC_WEAK_FUNC(sub_826B99B4);
PPC_FUNC_IMPL(__imp__sub_826B99B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B99B8"))) PPC_WEAK_FUNC(sub_826B99B8);
PPC_FUNC_IMPL(__imp__sub_826B99B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826b9948
	sub_826B9948(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9788
	sub_826B9788(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9A10"))) PPC_WEAK_FUNC(sub_826B9A10);
PPC_FUNC_IMPL(__imp__sub_826B9A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9A14"))) PPC_WEAK_FUNC(sub_826B9A14);
PPC_FUNC_IMPL(__imp__sub_826B9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9A18"))) PPC_WEAK_FUNC(sub_826B9A18);
PPC_FUNC_IMPL(__imp__sub_826B9A18) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,2032
	ctx.r4.s64 = r11.s64 + 2032;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826B9A40"))) PPC_WEAK_FUNC(sub_826B9A40);
PPC_FUNC_IMPL(__imp__sub_826B9A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9A44"))) PPC_WEAK_FUNC(sub_826B9A44);
PPC_FUNC_IMPL(__imp__sub_826B9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9A48"))) PPC_WEAK_FUNC(sub_826B9A48);
PPC_FUNC_IMPL(__imp__sub_826B9A48) {
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b9a94
	if (!cr6.eq) goto loc_826B9A94;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b9a94
	if (cr6.eq) goto loc_826B9A94;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826B9A94:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B9AAC"))) PPC_WEAK_FUNC(sub_826B9AAC);
PPC_FUNC_IMPL(__imp__sub_826B9AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826B9AB0"))) PPC_WEAK_FUNC(sub_826B9AB0);
PPC_FUNC_IMPL(__imp__sub_826B9AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x826b9af8
	if (cr6.lt) goto loc_826B9AF8;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x826b9b08
	if (cr6.lt) goto loc_826B9B08;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// b 0x826b9b08
	goto loc_826B9B08;
loc_826B9AF8:
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bge cr6,0x826b9b08
	if (!cr6.lt) goto loc_826B9B08;
	// li r30,4
	r30.s64 = 4;
loc_826B9B08:
	// li r11,-3
	r11.s64 = -3;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// divwu r9,r11,r28
	ctx.r9.u32 = r11.u32 / r28.u32;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826b9b88
	if (cr6.gt) goto loc_826B9B88;
	// lwz r31,16(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// mullw r29,r30,r28
	r29.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mullw r28,r11,r28
	r28.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b9b68
	if (!cr6.eq) goto loc_826B9B68;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826b9b68
	if (cr6.eq) goto loc_826B9B68;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826B9B68:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_826B9B88:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,2032
	ctx.r4.s64 = r11.s64 + 2032;
	// bl 0x826b4b40
	sub_826B4B40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826B9BA4"))) PPC_WEAK_FUNC(sub_826B9BA4);
PPC_FUNC_IMPL(__imp__sub_826B9BA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826B9BA8"))) PPC_WEAK_FUNC(sub_826B9BA8);
PPC_FUNC_IMPL(__imp__sub_826B9BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826b9bbc
	if (cr6.eq) goto loc_826B9BBC;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(r11.s32, 286, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_826B9BBC:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
}

__attribute__((alias("__imp__sub_826B9BC8"))) PPC_WEAK_FUNC(sub_826B9BC8);
PPC_FUNC_IMPL(__imp__sub_826B9BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826be718
	sub_826BE718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9BCC"))) PPC_WEAK_FUNC(sub_826B9BCC);
PPC_FUNC_IMPL(__imp__sub_826B9BCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9BD0"))) PPC_WEAK_FUNC(sub_826B9BD0);
PPC_FUNC_IMPL(__imp__sub_826B9BD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9C18"))) PPC_WEAK_FUNC(sub_826B9C18);
PPC_FUNC_IMPL(__imp__sub_826B9C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9C1C"))) PPC_WEAK_FUNC(sub_826B9C1C);
PPC_FUNC_IMPL(__imp__sub_826B9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9C20"))) PPC_WEAK_FUNC(sub_826B9C20);
PPC_FUNC_IMPL(__imp__sub_826B9C20) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r5,60(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826b9c68
	if (!cr6.eq) goto loc_826B9C68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r10,2160
	ctx.r4.s64 = ctx.r10.s64 + 2160;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826b9c78
	goto loc_826B9C78;
loc_826B9C68:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// addi r4,r10,2120
	ctx.r4.s64 = ctx.r10.s64 + 2120;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826B9C78:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826be670
	sub_826BE670(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9C98"))) PPC_WEAK_FUNC(sub_826B9C98);
PPC_FUNC_IMPL(__imp__sub_826B9C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9C9C"))) PPC_WEAK_FUNC(sub_826B9C9C);
PPC_FUNC_IMPL(__imp__sub_826B9C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9CA0"))) PPC_WEAK_FUNC(sub_826B9CA0);
PPC_FUNC_IMPL(__imp__sub_826B9CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x826b9cd0
	if (!cr6.eq) goto loc_826B9CD0;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826B9CD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826B9CE0"))) PPC_WEAK_FUNC(sub_826B9CE0);
PPC_FUNC_IMPL(__imp__sub_826B9CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9CE4"))) PPC_WEAK_FUNC(sub_826B9CE4);
PPC_FUNC_IMPL(__imp__sub_826B9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9CE8"))) PPC_WEAK_FUNC(sub_826B9CE8);
PPC_FUNC_IMPL(__imp__sub_826B9CE8) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x826b9d2c
	if (cr6.eq) goto loc_826B9D2C;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826B9D2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9D3C"))) PPC_WEAK_FUNC(sub_826B9D3C);
PPC_FUNC_IMPL(__imp__sub_826B9D3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9D40"))) PPC_WEAK_FUNC(sub_826B9D40);
PPC_FUNC_IMPL(__imp__sub_826B9D40) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x826b9d84
	if (cr6.eq) goto loc_826B9D84;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826B9D84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9D9C"))) PPC_WEAK_FUNC(sub_826B9D9C);
PPC_FUNC_IMPL(__imp__sub_826B9D9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9DA0"))) PPC_WEAK_FUNC(sub_826B9DA0);
PPC_FUNC_IMPL(__imp__sub_826B9DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x826b9dd0
	if (!cr6.eq) goto loc_826B9DD0;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826B9DD0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x826b9e0c
	if (!cr6.eq) goto loc_826B9E0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826B9E0C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2196
	ctx.r4.s64 = r11.s64 + 2196;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826B9E50"))) PPC_WEAK_FUNC(sub_826B9E50);
PPC_FUNC_IMPL(__imp__sub_826B9E50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826B9E54"))) PPC_WEAK_FUNC(sub_826B9E54);
PPC_FUNC_IMPL(__imp__sub_826B9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9E58"))) PPC_WEAK_FUNC(sub_826B9E58);
PPC_FUNC_IMPL(__imp__sub_826B9E58) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826b9ea0
	if (cr6.eq) goto loc_826B9EA0;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826B9EA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9EC0"))) PPC_WEAK_FUNC(sub_826B9EC0);
PPC_FUNC_IMPL(__imp__sub_826B9EC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9EC4"))) PPC_WEAK_FUNC(sub_826B9EC4);
PPC_FUNC_IMPL(__imp__sub_826B9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9EC8"))) PPC_WEAK_FUNC(sub_826B9EC8);
PPC_FUNC_IMPL(__imp__sub_826B9EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9EE0"))) PPC_WEAK_FUNC(sub_826B9EE0);
PPC_FUNC_IMPL(__imp__sub_826B9EE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x826c04e8
	sub_826C04E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826B9F28"))) PPC_WEAK_FUNC(sub_826B9F28);
PPC_FUNC_IMPL(__imp__sub_826B9F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B9F2C"))) PPC_WEAK_FUNC(sub_826B9F2C);
PPC_FUNC_IMPL(__imp__sub_826B9F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9F30"))) PPC_WEAK_FUNC(sub_826B9F30);
PPC_FUNC_IMPL(__imp__sub_826B9F30) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826b9f78
	if (cr6.eq) goto loc_826B9F78;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826B9F78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c04e8
	sub_826C04E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826B9FAC"))) PPC_WEAK_FUNC(sub_826B9FAC);
PPC_FUNC_IMPL(__imp__sub_826B9FAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826B9FB0"))) PPC_WEAK_FUNC(sub_826B9FB0);
PPC_FUNC_IMPL(__imp__sub_826B9FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lhz r11,48(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 48);
	// addi r29,r30,56
	r29.s64 = r30.s64 + 56;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// lwz r31,56(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpw cr6,r10,r31
	cr6.compare<int32_t>(ctx.r10.s32, r31.s32, xer);
	// ble cr6,0x826ba00c
	if (!cr6.gt) goto loc_826BA00C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r7,32767
	ctx.r7.s64 = 32767;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r8,r11,2240
	ctx.r8.s64 = r11.s64 + 2240;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826b9ab0
	sub_826B9AB0(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_826BA00C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x826ba044
	if (!cr6.lt) goto loc_826BA044;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_826BA028:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x826ba028
	if (cr6.lt) goto loc_826BA028;
loc_826BA044:
	// lhz r11,48(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 48);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, r27.u32);
	// lbz r6,5(r27)
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826ba090
	if (cr6.eq) goto loc_826BA090;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba090
	if (cr6.eq) goto loc_826BA090;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826b3940
	sub_826B3940(ctx, base);
loc_826BA090:
	// lhz r11,48(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 48);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,48(r28)
	PPC_STORE_U16(r28.u32 + 48, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826BA0A4"))) PPC_WEAK_FUNC(sub_826BA0A4);
PPC_FUNC_IMPL(__imp__sub_826BA0A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826BA0A8"))) PPC_WEAK_FUNC(sub_826BA0A8);
PPC_FUNC_IMPL(__imp__sub_826BA0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// ble cr6,0x826ba0ec
	if (!cr6.gt) goto loc_826BA0EC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r5,r11,2268
	ctx.r5.s64 = r11.s64 + 2268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BA0EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + r31.u32, ctx.r3.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BA110"))) PPC_WEAK_FUNC(sub_826BA110);
PPC_FUNC_IMPL(__imp__sub_826BA110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BA114"))) PPC_WEAK_FUNC(sub_826BA114);
PPC_FUNC_IMPL(__imp__sub_826BA114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA118"))) PPC_WEAK_FUNC(sub_826BA118);
PPC_FUNC_IMPL(__imp__sub_826BA118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r10,50(r11)
	PPC_STORE_U8(r11.u32 + 50, ctx.r10.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_826BA134:
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bdnz 0x826ba134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BA134;
}

__attribute__((alias("__imp__sub_826BA170"))) PPC_WEAK_FUNC(sub_826BA170);
PPC_FUNC_IMPL(__imp__sub_826BA170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA174"))) PPC_WEAK_FUNC(sub_826BA174);
PPC_FUNC_IMPL(__imp__sub_826BA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA178"))) PPC_WEAK_FUNC(sub_826BA178);
PPC_FUNC_IMPL(__imp__sub_826BA178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_826BA188:
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r10,255
	ctx.r8.s64 = ctx.r10.s64 + 255;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// stb r10,50(r11)
	PPC_STORE_U8(r11.u32 + 50, ctx.r10.u8);
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + r11.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lbz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bgt cr6,0x826ba188
	if (cr6.gt) goto loc_826BA188;
}

__attribute__((alias("__imp__sub_826BA1D0"))) PPC_WEAK_FUNC(sub_826BA1D0);
PPC_FUNC_IMPL(__imp__sub_826BA1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA1D4"))) PPC_WEAK_FUNC(sub_826BA1D4);
PPC_FUNC_IMPL(__imp__sub_826BA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA1D8"))) PPC_WEAK_FUNC(sub_826BA1D8);
PPC_FUNC_IMPL(__imp__sub_826BA1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// addi r28,r31,36
	r28.s64 = r31.s64 + 36;
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826ba248
	if (!cr6.gt) goto loc_826BA248;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r30,52
	r11.s64 = r30.s64 + 52;
loc_826BA218:
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x826ba234
	if (!cr6.eq) goto loc_826BA234;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x826ba380
	if (cr6.eq) goto loc_826BA380;
loc_826BA234:
	// lbz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// blt cr6,0x826ba218
	if (cr6.lt) goto loc_826BA218;
loc_826BA248:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// ble cr6,0x826ba2a4
	if (!cr6.gt) goto loc_826BA2A4;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826ba280
	if (!cr6.eq) goto loc_826BA280;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r6,r11,2284
	ctx.r6.s64 = r11.s64 + 2284;
	// addi r4,r10,2160
	ctx.r4.s64 = ctx.r10.s64 + 2160;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826ba294
	goto loc_826BA294;
loc_826BA280:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r11,2284
	ctx.r7.s64 = r11.s64 + 2284;
	// addi r4,r10,2120
	ctx.r4.s64 = ctx.r10.s64 + 2120;
	// li r6,60
	ctx.r6.s64 = 60;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826BA294:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BA2A4:
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x826ba2e0
	if (!cr6.gt) goto loc_826BA2E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r8,r11,13435
	ctx.r8.s64 = r11.s64 + 13435;
	// ori r7,r7,65533
	ctx.r7.u64 = ctx.r7.u64 | 65533;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x826b9ab0
	sub_826B9AB0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_826BA2E0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x826ba30c
	if (!cr6.lt) goto loc_826BA30C;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_826BA2F0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r26,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r26.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x826ba2f0
	if (cr6.lt) goto loc_826BA2F0;
loc_826BA30C:
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r25,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r25.u32);
	// lbz r8,5(r25)
	ctx.r8.u64 = PPC_LOAD_U8(r25.u32 + 5);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826ba34c
	if (cr6.eq) goto loc_826BA34C;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba34c
	if (cr6.eq) goto loc_826BA34C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b3940
	sub_826B3940(ctx, base);
loc_826BA34C:
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rotlwi r11,r11,1
	r11.u64 = __builtin_rotateleft32(r11.u32, 1);
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// stb r10,51(r8)
	PPC_STORE_U8(ctx.r8.u32 + 51, ctx.r10.u8);
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// addi r6,r11,26
	ctx.r6.s64 = r11.s64 + 26;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r7,r5,r30
	PPC_STORE_U8(ctx.r5.u32 + r30.u32, ctx.r7.u8);
	// lbz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
loc_826BA380:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826BA384"))) PPC_WEAK_FUNC(sub_826BA384);
PPC_FUNC_IMPL(__imp__sub_826BA384) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826BA388"))) PPC_WEAK_FUNC(sub_826BA388);
PPC_FUNC_IMPL(__imp__sub_826BA388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826ba3d8
	if (cr0.lt) goto loc_826BA3D8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r3,86
	ctx.r8.s64 = ctx.r3.s64 + 86;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_826BA3AC:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// bge 0x826ba3ac
	if (!cr0.lt) goto loc_826BA3AC;
loc_826BA3D8:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_826BA3DC"))) PPC_WEAK_FUNC(sub_826BA3DC);
PPC_FUNC_IMPL(__imp__sub_826BA3DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA3E0"))) PPC_WEAK_FUNC(sub_826BA3E0);
PPC_FUNC_IMPL(__imp__sub_826BA3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_826BA3EC:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x826ba408
	if (!cr6.gt) goto loc_826BA408;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826ba3ec
	if (!cr6.eq) goto loc_826BA3EC;
	// blr 
	return;
loc_826BA408:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA414"))) PPC_WEAK_FUNC(sub_826BA414);
PPC_FUNC_IMPL(__imp__sub_826BA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA418"))) PPC_WEAK_FUNC(sub_826BA418);
PPC_FUNC_IMPL(__imp__sub_826BA418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826ba464
	if (!cr6.eq) goto loc_826BA464;
	// li r11,-1
	r11.s64 = -1;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826BA464:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ba388
	sub_826BA388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ba4dc
	if (cr6.lt) goto loc_826BA4DC;
	// li r11,-1
	r11.s64 = -1;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x826ba4d0
	if (!cr6.eq) goto loc_826BA4D0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba4d0
	if (cr6.eq) goto loc_826BA4D0;
loc_826BA4A4:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// ble cr6,0x826ba4c8
	if (!cr6.gt) goto loc_826BA4C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826ba4a4
	if (!cr6.eq) goto loc_826BA4A4;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826BA4C8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9(r11)
	PPC_STORE_U8(r11.u32 + 9, ctx.r10.u8);
loc_826BA4D0:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826BA4DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826ba418
	sub_826BA418(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x826ba500
	if (!cr6.eq) goto loc_826BA500;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826BA500:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ba1d8
	sub_826BA1D8(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BA524"))) PPC_WEAK_FUNC(sub_826BA524);
PPC_FUNC_IMPL(__imp__sub_826BA524) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BA528"))) PPC_WEAK_FUNC(sub_826BA528);
PPC_FUNC_IMPL(__imp__sub_826BA528) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826ba570
	if (cr6.eq) goto loc_826BA570;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BA570:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,48(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba418
	sub_826BA418(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x826ba5ac
	if (!cr6.eq) goto loc_826BA5AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c04e8
	sub_826C04E8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
loc_826BA5AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BA5B0"))) PPC_WEAK_FUNC(sub_826BA5B0);
PPC_FUNC_IMPL(__imp__sub_826BA5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BA5B4"))) PPC_WEAK_FUNC(sub_826BA5B4);
PPC_FUNC_IMPL(__imp__sub_826BA5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA5B8"))) PPC_WEAK_FUNC(sub_826BA5B8);
PPC_FUNC_IMPL(__imp__sub_826BA5B8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r31,r5,r4
	r31.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x826ba624
	if (cr6.eq) goto loc_826BA624;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// beq cr6,0x826ba624
	if (cr6.eq) goto loc_826BA624;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ba5f4
	if (cr6.eq) goto loc_826BA5F4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c1148
	sub_826C1148(ctx, base);
loc_826BA5F4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x826ba658
	if (!cr6.gt) goto loc_826BA658;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,36(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0a70
	sub_826C0A70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BA624:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & r11.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826c05d0
	sub_826C05D0(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// ble cr6,0x826ba658
	if (!cr6.gt) goto loc_826BA658;
	// addi r4,r31,-1
	ctx.r4.s64 = r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
loc_826BA658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BA65C"))) PPC_WEAK_FUNC(sub_826BA65C);
PPC_FUNC_IMPL(__imp__sub_826BA65C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BA660"))) PPC_WEAK_FUNC(sub_826BA660);
PPC_FUNC_IMPL(__imp__sub_826BA660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r9.u16);
	// cmplwi cr6,r9,200
	cr6.compare<uint32_t>(ctx.r9.u32, 200, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2296
	ctx.r4.s64 = r11.s64 + 2296;
	// b 0x826be670
	sub_826BE670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA68C"))) PPC_WEAK_FUNC(sub_826BA68C);
PPC_FUNC_IMPL(__imp__sub_826BA68C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA690"))) PPC_WEAK_FUNC(sub_826BA690);
PPC_FUNC_IMPL(__imp__sub_826BA690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// stb r5,10(r4)
	PPC_STORE_U8(ctx.r4.u32 + 10, ctx.r5.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lbz r9,50(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// stb r9,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r9.u8);
	// stb r10,9(r4)
	PPC_STORE_U8(ctx.r4.u32 + 9, ctx.r10.u8);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA6BC"))) PPC_WEAK_FUNC(sub_826BA6BC);
PPC_FUNC_IMPL(__imp__sub_826BA6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA6C0"))) PPC_WEAK_FUNC(sub_826BA6C0);
PPC_FUNC_IMPL(__imp__sub_826BA6C0) {
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
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// bl 0x826ba178
	sub_826BA178(ctx, base);
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba714
	if (cr6.eq) goto loc_826BA714;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c0980
	sub_826C0980(ctx, base);
loc_826BA714:
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
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

__attribute__((alias("__imp__sub_826BA73C"))) PPC_WEAK_FUNC(sub_826BA73C);
PPC_FUNC_IMPL(__imp__sub_826BA73C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA740"))) PPC_WEAK_FUNC(sub_826BA740);
PPC_FUNC_IMPL(__imp__sub_826BA740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r27,r28,52
	r27.s64 = r28.s64 + 52;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r30,52(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// ble cr6,0x826ba7a0
	if (!cr6.gt) goto loc_826BA7A0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r8,r11,2332
	ctx.r8.s64 = r11.s64 + 2332;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x826b9ab0
	sub_826B9AB0(ctx, base);
	// stw r3,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r3.u32);
loc_826BA7A0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x826ba7d0
	if (!cr6.lt) goto loc_826BA7D0;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_826BA7B4:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x826ba7b4
	if (cr6.lt) goto loc_826BA7B4;
loc_826BA7D0:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,44(r29)
	PPC_STORE_U32(r29.u32 + 44, ctx.r7.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r6,5(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// clrlwi r4,r6,30
	ctx.r4.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826ba820
	if (cr6.eq) goto loc_826BA820;
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba820
	if (cr6.eq) goto loc_826BA820;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,52(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 52);
	// bl 0x826b3940
	sub_826B3940(ctx, base);
loc_826BA820:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c09a8
	sub_826C09A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r3,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r3.u32);
	// stw r11,20(r25)
	PPC_STORE_U32(r25.u32 + 20, r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r11,16(r25)
	PPC_STORE_U32(r25.u32 + 16, r11.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826ba8a4
	if (cr6.eq) goto loc_826BA8A4;
	// addi r30,r26,50
	r30.s64 = r26.s64 + 50;
	// li r28,4
	r28.s64 = 4;
loc_826BA868:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbzu r6,2(r30)
	ea = 2 + r30.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	r30.u32 = ea;
	// addi r11,r10,-6
	r11.s64 = ctx.r10.s64 + -6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// subfe r4,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 & r28.u64;
	// bl 0x826c0980
	sub_826C0980(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,72(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826ba868
	if (cr6.lt) goto loc_826BA868;
loc_826BA8A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826BA8A8"))) PPC_WEAK_FUNC(sub_826BA8A8);
PPC_FUNC_IMPL(__imp__sub_826BA8A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826BA8AC"))) PPC_WEAK_FUNC(sub_826BA8AC);
PPC_FUNC_IMPL(__imp__sub_826BA8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA8B0"))) PPC_WEAK_FUNC(sub_826BA8B0);
PPC_FUNC_IMPL(__imp__sub_826BA8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,52(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b8d10
	sub_826B8D10(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r28,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,28(r28)
	PPC_STORE_U32(r28.u32 + 28, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,32(r28)
	PPC_STORE_U32(r28.u32 + 32, ctx.r10.u32);
	// stw r11,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r11.u32);
	// stw r11,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r11.u32);
	// stw r11,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r11.u32);
	// sth r11,48(r28)
	PPC_STORE_U16(r28.u32 + 48, r11.u16);
	// stb r11,50(r28)
	PPC_STORE_U8(r28.u32 + 50, r11.u8);
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// lwz r7,64(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// stw r7,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r7.u32);
	// stb r8,75(r30)
	PPC_STORE_U8(r30.u32 + 75, ctx.r8.u8);
	// bl 0x826b7a60
	sub_826B7A60(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x826ba96c
	if (cr6.gt) goto loc_826BA96C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826BA96C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r7,16
	cr6.compare<int32_t>(ctx.r7.s32, 16, xer);
	// bgt cr6,0x826ba9a4
	if (cr6.gt) goto loc_826BA9A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826BA9A4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BA9B4"))) PPC_WEAK_FUNC(sub_826BA9B4);
PPC_FUNC_IMPL(__imp__sub_826BA9B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BA9B8"))) PPC_WEAK_FUNC(sub_826BA9B8);
PPC_FUNC_IMPL(__imp__sub_826BA9B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,52(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826ba178
	sub_826BA178(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c0b80
	sub_826C0B80(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// ori r28,r10,65535
	r28.u64 = ctx.r10.u64 | 65535;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bgt cr6,0x826baa1c
	if (cr6.gt) goto loc_826BAA1C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826baa20
	goto loc_826BAA20;
loc_826BAA1C:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BAA20:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bgt cr6,0x826baa5c
	if (cr6.gt) goto loc_826BAA5C;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826baa60
	goto loc_826BAA60;
loc_826BAA5C:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BAA60:
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r11,4095
	r11.s64 = 268369920;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x826baaa0
	if (cr6.gt) goto loc_826BAAA0;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826baaa4
	goto loc_826BAAA4;
loc_826BAAA0:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BAAA4:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bgt cr6,0x826baadc
	if (cr6.gt) goto loc_826BAADC;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826baae0
	goto loc_826BAAE0;
loc_826BAADC:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BAAE0:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lis r11,5461
	r11.s64 = 357892096;
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// ori r10,r11,21845
	ctx.r10.u64 = r11.u64 | 21845;
	// lhz r8,48(r29)
	ctx.r8.u64 = PPC_LOAD_U16(r29.u32 + 48);
	// extsh r11,r8
	r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x826bab34
	if (cr6.gt) goto loc_826BAB34;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bab38
	goto loc_826BAB38;
loc_826BAB34:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BAB38:
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// lhz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 48);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// bgt cr6,0x826bab74
	if (cr6.gt) goto loc_826BAB74;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bab78
	goto loc_826BAB78;
loc_826BAB74:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BAB78:
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,48(r27)
	PPC_STORE_U32(r27.u32 + 48, ctx.r10.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r11,-32
	ctx.r9.s64 = r11.s64 + -32;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826babac
	if (cr6.eq) goto loc_826BABAC;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(r11.s32, 286, xer);
	// bne cr6,0x826babc0
	if (!cr6.eq) goto loc_826BABC0;
loc_826BABAC:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826be718
	sub_826BE718(ctx, base);
loc_826BABC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BABC4"))) PPC_WEAK_FUNC(sub_826BABC4);
PPC_FUNC_IMPL(__imp__sub_826BABC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826BABC8"))) PPC_WEAK_FUNC(sub_826BABC8);
PPC_FUNC_IMPL(__imp__sub_826BABC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826c11f0
	sub_826C11F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9f30
	sub_826B9F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1a00
	sub_826C1A00(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826BAC24"))) PPC_WEAK_FUNC(sub_826BAC24);
PPC_FUNC_IMPL(__imp__sub_826BAC24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BAC28"))) PPC_WEAK_FUNC(sub_826BAC28);
PPC_FUNC_IMPL(__imp__sub_826BAC28) {
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
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1278
	sub_826C1278(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x826bac9c
	if (cr6.eq) goto loc_826BAC9C;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BAC9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
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

__attribute__((alias("__imp__sub_826BACB8"))) PPC_WEAK_FUNC(sub_826BACB8);
PPC_FUNC_IMPL(__imp__sub_826BACB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BACBC"))) PPC_WEAK_FUNC(sub_826BACBC);
PPC_FUNC_IMPL(__imp__sub_826BACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BACC0"))) PPC_WEAK_FUNC(sub_826BACC0);
PPC_FUNC_IMPL(__imp__sub_826BACC0) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,285
	cr6.compare<int32_t>(ctx.r10.s32, 285, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r28,36(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bne cr6,0x826bad28
	if (!cr6.eq) goto loc_826BAD28;
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// ori r4,r11,65533
	ctx.r4.u64 = r11.u64 | 65533;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x826bad18
	if (!cr6.gt) goto loc_826BAD18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,2356
	ctx.r5.s64 = r11.s64 + 2356;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BAD18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9f30
	sub_826B9F30(ctx, base);
	// b 0x826bad34
	goto loc_826BAD34;
loc_826BAD28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bac28
	sub_826BAC28(ctx, base);
loc_826BAD34:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,61
	cr6.compare<int32_t>(ctx.r10.s32, 61, xer);
	// beq cr6,0x826bad78
	if (cr6.eq) goto loc_826BAD78;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BAD78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c1290
	sub_826C1290(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c1290
	sub_826C1290(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826c0980
	sub_826C0980(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BADD8"))) PPC_WEAK_FUNC(sub_826BADD8);
PPC_FUNC_IMPL(__imp__sub_826BADD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826BADDC"))) PPC_WEAK_FUNC(sub_826BADDC);
PPC_FUNC_IMPL(__imp__sub_826BADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BADE0"))) PPC_WEAK_FUNC(sub_826BADE0);
PPC_FUNC_IMPL(__imp__sub_826BADE0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bae34
	if (cr6.eq) goto loc_826BAE34;
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// bne cr6,0x826bae34
	if (!cr6.eq) goto loc_826BAE34;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826c09c8
	sub_826C09C8(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_826BAE34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BAE38"))) PPC_WEAK_FUNC(sub_826BAE38);
PPC_FUNC_IMPL(__imp__sub_826BAE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BAE3C"))) PPC_WEAK_FUNC(sub_826BAE3C);
PPC_FUNC_IMPL(__imp__sub_826BAE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BAE40"))) PPC_WEAK_FUNC(sub_826BAE40);
PPC_FUNC_IMPL(__imp__sub_826BAE40) {
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
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826baed8
	if (cr6.eq) goto loc_826BAED8;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x826baea4
	if (cr6.eq) goto loc_826BAEA4;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// beq cr6,0x826baea4
	if (cr6.eq) goto loc_826BAEA4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bae88
	if (cr6.eq) goto loc_826BAE88;
	// bl 0x826c1148
	sub_826C1148(ctx, base);
loc_826BAE88:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826c09c8
	sub_826C09C8(ctx, base);
	// b 0x826baed8
	goto loc_826BAED8;
loc_826BAEA4:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c05d0
	sub_826C05D0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826c09c8
	sub_826C09C8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_826BAED8:
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

__attribute__((alias("__imp__sub_826BAEEC"))) PPC_WEAK_FUNC(sub_826BAEEC);
PPC_FUNC_IMPL(__imp__sub_826BAEEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BAEF0"))) PPC_WEAK_FUNC(sub_826BAEF0);
PPC_FUNC_IMPL(__imp__sub_826BAEF0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// ori r4,r11,65533
	ctx.r4.u64 = r11.u64 | 65533;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// ble cr6,0x826baf38
	if (!cr6.gt) goto loc_826BAF38;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r5,r11,2356
	ctx.r5.s64 = r11.s64 + 2356;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BAF38:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_826BAF64"))) PPC_WEAK_FUNC(sub_826BAF64);
PPC_FUNC_IMPL(__imp__sub_826BAF64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BAF68"))) PPC_WEAK_FUNC(sub_826BAF68);
PPC_FUNC_IMPL(__imp__sub_826BAF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r25,4(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x826c0980
	sub_826C0980(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r3,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r3.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r8,123
	cr6.compare<int32_t>(ctx.r8.s32, 123, xer);
	// beq cr6,0x826bb02c
	if (cr6.eq) goto loc_826BB02C;
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BB02C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r27,r11,2356
	r27.s64 = r11.s64 + 2356;
	// ori r28,r10,65533
	r28.u64 = ctx.r10.u64 | 65533;
loc_826BB044:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// beq cr6,0x826bb144
	if (cr6.eq) goto loc_826BB144;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bb094
	if (cr6.eq) goto loc_826BB094;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// bne cr6,0x826bb094
	if (!cr6.eq) goto loc_826BB094;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,50
	ctx.r6.s64 = 50;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x826c09c8
	sub_826C09C8(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
loc_826BB094:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// beq cr6,0x826bb110
	if (cr6.eq) goto loc_826BB110;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826bb0f0
	if (cr6.eq) goto loc_826BB0F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// ble cr6,0x826bb0d4
	if (!cr6.gt) goto loc_826BB0D4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BB0D4:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// b 0x826bb118
	goto loc_826BB118;
loc_826BB0F0:
	// bl 0x826bfd98
	sub_826BFD98(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x826bb114
	if (cr6.eq) goto loc_826BB114;
	// bl 0x826baef0
	sub_826BAEF0(ctx, base);
	// b 0x826bb118
	goto loc_826BB118;
loc_826BB110:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_826BB114:
	// bl 0x826bacc0
	sub_826BACC0(ctx, base);
loc_826BB118:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bb130
	if (!cr6.eq) goto loc_826BB130;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// b 0x826bb044
	goto loc_826BB044;
loc_826BB130:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(r11.s32, 59, xer);
	// bne cr6,0x826bb144
	if (!cr6.eq) goto loc_826BB144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// b 0x826bb044
	goto loc_826BB044;
loc_826BB144:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826bae40
	sub_826BAE40(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r31,r26,2,0,29
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826af6b8
	sub_826AF6B8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// rlwimi r10,r3,23,0,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 23) & 0xFF800000) | (ctx.r10.u64 & 0xFFFFFFFF007FFFFF);
	// stwx r10,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r30,12(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x826af6b8
	sub_826AF6B8(ctx, base);
	// lwzx r8,r30,r31
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// rlwimi r8,r3,14,9,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 14) & 0x7FC000) | (ctx.r8.u64 & 0xFFFFFFFFFF803FFF);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stwx r8,r30,r31
	PPC_STORE_U32(r30.u32 + r31.u32, ctx.r8.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BB1AC"))) PPC_WEAK_FUNC(sub_826BB1AC);
PPC_FUNC_IMPL(__imp__sub_826BB1AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826BB1B0"))) PPC_WEAK_FUNC(sub_826BB1B0);
PPC_FUNC_IMPL(__imp__sub_826BB1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,48(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,0(r19)
	r25.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// stb r29,74(r25)
	PPC_STORE_U8(r25.u32 + 74, r29.u8);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// beq cr6,0x826bb34c
	if (cr6.eq) goto loc_826BB34C;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r23,7
	r23.s64 = 7;
	// addi r24,r6,2120
	r24.s64 = ctx.r6.s64 + 2120;
	// addi r22,r7,2160
	r22.s64 = ctx.r7.s64 + 2160;
	// addi r27,r8,2268
	r27.s64 = ctx.r8.s64 + 2268;
	// addi r21,r9,2104
	r21.s64 = ctx.r9.s64 + 2104;
	// addi r20,r10,2384
	r20.s64 = ctx.r10.s64 + 2384;
	// addi r26,r11,2380
	r26.s64 = r11.s64 + 2380;
loc_826BB210:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,279
	cr6.compare<int32_t>(r11.s32, 279, xer);
	// beq cr6,0x826bb288
	if (cr6.eq) goto loc_826BB288;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826bb234
	if (cr6.eq) goto loc_826BB234;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// b 0x826bb328
	goto loc_826BB328;
loc_826BB234:
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// ble cr6,0x826bb264
	if (!cr6.gt) goto loc_826BB264;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BB264:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r3.u16);
	// b 0x826bb324
	goto loc_826BB324;
loc_826BB288:
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// ble cr6,0x826bb300
	if (!cr6.gt) goto loc_826BB300;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826bb2e0
	if (!cr6.eq) goto loc_826BB2E0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826bb2f0
	goto loc_826BB2F0;
loc_826BB2E0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826BB2F0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BB300:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r3.u16);
	// stb r23,74(r25)
	PPC_STORE_U8(r25.u32 + 74, r23.u8);
loc_826BB324:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_826BB328:
	// lbz r11,74(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 74);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826bb34c
	if (!cr6.eq) goto loc_826BB34C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bb34c
	if (!cr6.eq) goto loc_826BB34C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// b 0x826bb210
	goto loc_826BB210;
loc_826BB34C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba118
	sub_826BA118(ctx, base);
	// lbz r11,74(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 74);
	// lbz r10,50(r19)
	ctx.r10.u64 = PPC_LOAD_U8(r19.u32 + 50);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r8,73(r25)
	PPC_STORE_U8(r25.u32 + 73, ctx.r8.u8);
	// lbz r4,50(r19)
	ctx.r4.u64 = PPC_LOAD_U8(r19.u32 + 50);
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BB37C"))) PPC_WEAK_FUNC(sub_826BB37C);
PPC_FUNC_IMPL(__imp__sub_826BB37C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_826BB380"))) PPC_WEAK_FUNC(sub_826BB380);
PPC_FUNC_IMPL(__imp__sub_826BB380) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r10,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// bl 0x826ba8b0
	sub_826BA8B0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,2104
	r28.s64 = r11.s64 + 2104;
	// stw r29,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, r29.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r8,40
	cr6.compare<int32_t>(ctx.r8.s32, 40, xer);
	// beq cr6,0x826bb3f4
	if (cr6.eq) goto loc_826BB3F4;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BB3F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x826bb468
	if (cr6.eq) goto loc_826BB468;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,2412
	ctx.r4.s64 = r11.s64 + 2412;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826ba0a8
	sub_826BA0A8(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r11,50(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 50);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// stb r11,50(r9)
	PPC_STORE_U8(ctx.r9.u32 + 50, r11.u8);
	// addi r5,r11,85
	ctx.r5.s64 = r11.s64 + 85;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r4,r9
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r9.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 1);
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
loc_826BB468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb1b0
	sub_826BB1B0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// beq cr6,0x826bb4a4
	if (cr6.eq) goto loc_826BB4A4;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BB4A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,265
	ctx.r5.s64 = 265;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r11.u32);
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba9b8
	sub_826BA9B8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba740
	sub_826BA740(ctx, base);
	// lwz r3,652(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
}

__attribute__((alias("__imp__sub_826BB4F8"))) PPC_WEAK_FUNC(sub_826BB4F8);
PPC_FUNC_IMPL(__imp__sub_826BB4F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826BB4FC"))) PPC_WEAK_FUNC(sub_826BB4FC);
PPC_FUNC_IMPL(__imp__sub_826BB4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BB500"))) PPC_WEAK_FUNC(sub_826BB500);
PPC_FUNC_IMPL(__imp__sub_826BB500) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
loc_826BB520:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bb558
	if (!cr6.eq) goto loc_826BB558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x826bb520
	goto loc_826BB520;
loc_826BB558:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BB560"))) PPC_WEAK_FUNC(sub_826BB560);
PPC_FUNC_IMPL(__imp__sub_826BB560) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BB564"))) PPC_WEAK_FUNC(sub_826BB564);
PPC_FUNC_IMPL(__imp__sub_826BB564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BB568"))) PPC_WEAK_FUNC(sub_826BB568);
PPC_FUNC_IMPL(__imp__sub_826BB568) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,-1
	r28.s64 = -1;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// beq cr6,0x826bb608
	if (cr6.eq) goto loc_826BB608;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// beq cr6,0x826bb5f8
	if (cr6.eq) goto loc_826BB5F8;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(r11.s32, 286, xer);
	// beq cr6,0x826bb5cc
	if (cr6.eq) goto loc_826BB5CC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,2472
	ctx.r4.s64 = r11.s64 + 2472;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_826BB5CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826c04e8
	sub_826C04E8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// b 0x826bb674
	goto loc_826BB674;
loc_826BB5F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826baf68
	sub_826BAF68(ctx, base);
	// b 0x826bb674
	goto loc_826BB674;
loc_826BB608:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// beq cr6,0x826bb624
	if (cr6.eq) goto loc_826BB624;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2420
	ctx.r4.s64 = r11.s64 + 2420;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BB624:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// bne cr6,0x826bb644
	if (!cr6.eq) goto loc_826BB644;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x826bb660
	goto loc_826BB660;
loc_826BB644:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb500
	sub_826BB500(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c05d0
	sub_826C05D0(ctx, base);
loc_826BB660:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
loc_826BB674:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x826bb6b0
	if (cr6.eq) goto loc_826BB6B0;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// beq cr6,0x826bb6b0
	if (cr6.eq) goto loc_826BB6B0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bb6a0
	if (cr6.eq) goto loc_826BB6A0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c1148
	sub_826C1148(ctx, base);
loc_826BB6A0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x826bb6b4
	goto loc_826BB6B4;
loc_826BB6B0:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_826BB6B4:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0980
	sub_826C0980(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r28,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x826c0878
	sub_826C0878(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826BB700"))) PPC_WEAK_FUNC(sub_826BB700);
PPC_FUNC_IMPL(__imp__sub_826BB700) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826BB704"))) PPC_WEAK_FUNC(sub_826BB704);
PPC_FUNC_IMPL(__imp__sub_826BB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BB708"))) PPC_WEAK_FUNC(sub_826BB708);
PPC_FUNC_IMPL(__imp__sub_826BB708) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// beq cr6,0x826bb754
	if (cr6.eq) goto loc_826BB754;
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826bb744
	if (cr6.eq) goto loc_826BB744;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,2500
	ctx.r4.s64 = r11.s64 + 2500;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BB744:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826ba528
	sub_826BA528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BB754:
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c0c48
	sub_826C0C48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BB790"))) PPC_WEAK_FUNC(sub_826BB790);
PPC_FUNC_IMPL(__imp__sub_826BB790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BB794"))) PPC_WEAK_FUNC(sub_826BB794);
PPC_FUNC_IMPL(__imp__sub_826BB794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BB798"))) PPC_WEAK_FUNC(sub_826BB798);
PPC_FUNC_IMPL(__imp__sub_826BB798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826bb708
	sub_826BB708(ctx, base);
loc_826BB7C0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// bgt cr6,0x826bb880
	if (cr6.gt) goto loc_826BB880;
	// beq cr6,0x826bb854
	if (cr6.eq) goto loc_826BB854;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// beq cr6,0x826bb890
	if (cr6.eq) goto loc_826BB890;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x826bb81c
	if (cr6.eq) goto loc_826BB81C;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// bne cr6,0x826bb8ac
	if (!cr6.eq) goto loc_826BB8AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9f30
	sub_826B9F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1510
	sub_826C1510(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb568
	sub_826BB568(ctx, base);
	// b 0x826bb7c0
	goto loc_826BB7C0;
loc_826BB81C:
	// lwz r28,48(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c11f0
	sub_826C11F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9f30
	sub_826B9F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c1a00
	sub_826C1A00(ctx, base);
	// b 0x826bb7c0
	goto loc_826BB7C0;
loc_826BB854:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c11f0
	sub_826C11F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bac28
	sub_826BAC28(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1a00
	sub_826C1A00(ctx, base);
	// b 0x826bb7c0
	goto loc_826BB7C0;
loc_826BB880:
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// beq cr6,0x826bb890
	if (cr6.eq) goto loc_826BB890;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(r11.s32, 286, xer);
	// bne cr6,0x826bb8ac
	if (!cr6.eq) goto loc_826BB8AC;
loc_826BB890:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb568
	sub_826BB568(ctx, base);
	// b 0x826bb7c0
	goto loc_826BB7C0;
loc_826BB8AC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826BB8B8"))) PPC_WEAK_FUNC(sub_826BB8B8);
PPC_FUNC_IMPL(__imp__sub_826BB8B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BB8BC"))) PPC_WEAK_FUNC(sub_826BB8BC);
PPC_FUNC_IMPL(__imp__sub_826BB8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BB8C0"))) PPC_WEAK_FUNC(sub_826BB8C0);
PPC_FUNC_IMPL(__imp__sub_826BB8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,275
	cr6.compare<int32_t>(r11.s32, 275, xer);
	// bgt cr6,0x826bb97c
	if (cr6.gt) goto loc_826BB97C;
	// beq cr6,0x826bb968
	if (cr6.eq) goto loc_826BB968;
	// cmpwi cr6,r11,265
	cr6.compare<int32_t>(r11.s32, 265, xer);
	// bgt cr6,0x826bb94c
	if (cr6.gt) goto loc_826BB94C;
	// beq cr6,0x826bb928
	if (cr6.eq) goto loc_826BB928;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// beq cr6,0x826bb914
	if (cr6.eq) goto loc_826BB914;
	// cmpwi cr6,r11,263
	cr6.compare<int32_t>(r11.s32, 263, xer);
	// bne cr6,0x826bb994
	if (!cr6.eq) goto loc_826BB994;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// b 0x826bba50
	goto loc_826BBA50;
loc_826BB914:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826baf68
	sub_826BAF68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BB928:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826bb380
	sub_826BB380(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BB94C:
	// cmpwi cr6,r11,269
	cr6.compare<int32_t>(r11.s32, 269, xer);
	// bne cr6,0x826bb994
	if (!cr6.eq) goto loc_826BB994;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// b 0x826bba50
	goto loc_826BBA50;
loc_826BB968:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// b 0x826bba50
	goto loc_826BBA50;
loc_826BB97C:
	// cmpwi cr6,r11,279
	cr6.compare<int32_t>(r11.s32, 279, xer);
	// beq cr6,0x826bb9f4
	if (cr6.eq) goto loc_826BB9F4;
	// cmpwi cr6,r11,284
	cr6.compare<int32_t>(r11.s32, 284, xer);
	// beq cr6,0x826bb9c0
	if (cr6.eq) goto loc_826BB9C0;
	// cmpwi cr6,r11,286
	cr6.compare<int32_t>(r11.s32, 286, xer);
	// beq cr6,0x826bb9a8
	if (cr6.eq) goto loc_826BB9A8;
loc_826BB994:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826bb798
	sub_826BB798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BB9A8:
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x826c04e8
	sub_826C04E8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x826bba4c
	goto loc_826BBA4C;
loc_826BB9C0:
	// li r11,-1
	r11.s64 = -1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfd f0,24(r29)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r29.u32 + 24);
	// stfd f0,8(r31)
	PPC_STORE_U64(r31.u32 + 8, f0.u64);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_826BB9F4:
	// lwz r30,48(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 74);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826bba18
	if (!cr6.eq) goto loc_826BBA18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,2520
	ctx.r4.s64 = r11.s64 + 2520;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BBA18:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 74);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,74(r11)
	PPC_STORE_U8(r11.u32 + 74, ctx.r9.u8);
	// bl 0x826c0980
	sub_826C0980(ctx, base);
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_826BBA4C:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_826BBA50:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BBA68"))) PPC_WEAK_FUNC(sub_826BBA68);
PPC_FUNC_IMPL(__imp__sub_826BBA68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BBA6C"))) PPC_WEAK_FUNC(sub_826BBA6C);
PPC_FUNC_IMPL(__imp__sub_826BBA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BBA70"))) PPC_WEAK_FUNC(sub_826BBA70);
PPC_FUNC_IMPL(__imp__sub_826BBA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,35
	cr6.compare<int32_t>(ctx.r3.s32, 35, xer);
	// beq cr6,0x826bbaa0
	if (cr6.eq) goto loc_826BBAA0;
	// cmpwi cr6,r3,45
	cr6.compare<int32_t>(ctx.r3.s32, 45, xer);
	// beq cr6,0x826bba98
	if (cr6.eq) goto loc_826BBA98;
	// cmpwi cr6,r3,270
	cr6.compare<int32_t>(ctx.r3.s32, 270, xer);
	// beq cr6,0x826bba90
	if (cr6.eq) goto loc_826BBA90;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_826BBA90:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826BBA98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826BBAA0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBAA8"))) PPC_WEAK_FUNC(sub_826BBAA8);
PPC_FUNC_IMPL(__imp__sub_826BBAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	// cmpwi cr6,r3,94
	cr6.compare<int32_t>(ctx.r3.s32, 94, xer);
	// bgt cr6,0x826bbb80
	if (cr6.gt) goto loc_826BBB80;
	// beq cr6,0x826bbb78
	if (cr6.eq) goto loc_826BBB78;
	// addi r11,r3,-37
	r11.s64 = ctx.r3.s64 + -37;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bgt cr6,0x826bbc48
	if (cr6.gt) goto loc_826BBC48;
	// lis r12,-32148
	r12.s64 = -2106851328;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17704
	r12.s64 = r12.s64 + -17704;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826BBB60;
	case 1:
		goto loc_826BBC48;
	case 2:
		goto loc_826BBC48;
	case 3:
		goto loc_826BBC48;
	case 4:
		goto loc_826BBC48;
	case 5:
		goto loc_826BBB50;
	case 6:
		goto loc_826BBB40;
	case 7:
		goto loc_826BBC48;
	case 8:
		goto loc_826BBB48;
	case 9:
		goto loc_826BBC48;
	case 10:
		goto loc_826BBB58;
	case 11:
		goto loc_826BBC48;
	case 12:
		goto loc_826BBC48;
	case 13:
		goto loc_826BBC48;
	case 14:
		goto loc_826BBC48;
	case 15:
		goto loc_826BBC48;
	case 16:
		goto loc_826BBC48;
	case 17:
		goto loc_826BBC48;
	case 18:
		goto loc_826BBC48;
	case 19:
		goto loc_826BBC48;
	case 20:
		goto loc_826BBC48;
	case 21:
		goto loc_826BBC48;
	case 22:
		goto loc_826BBC48;
	case 23:
		goto loc_826BBB68;
	case 24:
		goto loc_826BBC48;
	case 25:
		goto loc_826BBB70;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-17568(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17568);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17584(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17584);
	// lwz r19,-17600(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17600);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17592(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17592);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17576(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17576);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17560(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17560);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17552(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17552);
loc_826BBB40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826BBB48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826BBB50:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_826BBB58:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_826BBB60:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_826BBB68:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_826BBB70:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_826BBB78:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_826BBB80:
	// addi r11,r3,-257
	r11.s64 = ctx.r3.s64 + -257;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bgt cr6,0x826bbc48
	if (cr6.gt) goto loc_826BBC48;
	// lis r12,-32148
	r12.s64 = -2106851328;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17500
	r12.s64 = r12.s64 + -17500;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826BBC38;
	case 1:
		goto loc_826BBC48;
	case 2:
		goto loc_826BBC48;
	case 3:
		goto loc_826BBC48;
	case 4:
		goto loc_826BBC48;
	case 5:
		goto loc_826BBC48;
	case 6:
		goto loc_826BBC48;
	case 7:
		goto loc_826BBC48;
	case 8:
		goto loc_826BBC48;
	case 9:
		goto loc_826BBC48;
	case 10:
		goto loc_826BBC48;
	case 11:
		goto loc_826BBC48;
	case 12:
		goto loc_826BBC48;
	case 13:
		goto loc_826BBC48;
	case 14:
		goto loc_826BBC40;
	case 15:
		goto loc_826BBC48;
	case 16:
		goto loc_826BBC48;
	case 17:
		goto loc_826BBC48;
	case 18:
		goto loc_826BBC48;
	case 19:
		goto loc_826BBC48;
	case 20:
		goto loc_826BBC48;
	case 21:
		goto loc_826BBC10;
	case 22:
		goto loc_826BBC48;
	case 23:
		goto loc_826BBC20;
	case 24:
		goto loc_826BBC30;
	case 25:
		goto loc_826BBC28;
	case 26:
		goto loc_826BBC18;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-17352(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17352);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17344(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17344);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17392(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17392);
	// lwz r19,-17336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17336);
	// lwz r19,-17376(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17376);
	// lwz r19,-17360(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17360);
	// lwz r19,-17368(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17368);
	// lwz r19,-17384(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -17384);
loc_826BBC10:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_826BBC18:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_826BBC20:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_826BBC28:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_826BBC30:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_826BBC38:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_826BBC40:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_826BBC48:
	// li r3,15
	ctx.r3.s64 = 15;
}

__attribute__((alias("__imp__sub_826BBC4C"))) PPC_WEAK_FUNC(sub_826BBC4C);
PPC_FUNC_IMPL(__imp__sub_826BBC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBC50"))) PPC_WEAK_FUNC(sub_826BBC50);
PPC_FUNC_IMPL(__imp__sub_826BBC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// lwz r8,24192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmplwi cr6,r6,200
	cr6.compare<uint32_t>(ctx.r6.u32, 200, xer);
	// sth r6,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r6.u16);
	// ble cr6,0x826bbca0
	if (!cr6.gt) goto loc_826BBCA0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2296
	ctx.r4.s64 = r11.s64 + 2296;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BBCA0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x826bbccc
	if (cr6.eq) goto loc_826BBCCC;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x826bbcc4
	if (cr6.eq) goto loc_826BBCC4;
	// cmpwi cr6,r11,270
	cr6.compare<int32_t>(r11.s32, 270, xer);
	// bne cr6,0x826bbcfc
	if (!cr6.eq) goto loc_826BBCFC;
	// li r30,1
	r30.s64 = 1;
	// b 0x826bbcd0
	goto loc_826BBCD0;
loc_826BBCC4:
	// li r30,0
	r30.s64 = 0;
	// b 0x826bbcd0
	goto loc_826BBCD0;
loc_826BBCCC:
	// li r30,2
	r30.s64 = 2;
loc_826BBCD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1c88
	sub_826C1C88(ctx, base);
	// b 0x826bbd08
	goto loc_826BBD08;
loc_826BBCFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb8c0
	sub_826BB8C0(ctx, base);
loc_826BBD08:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826bbaa8
	sub_826BBAA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,15
	cr6.compare<int32_t>(ctx.r3.s32, 15, xer);
	// beq cr6,0x826bbd80
	if (cr6.eq) goto loc_826BBD80;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,2072
	r28.s64 = r11.s64 + 2072;
loc_826BBD24:
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r29,r28
	r11.u64 = PPC_LOAD_U8(r29.u32 + r28.u32);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// ble cr6,0x826bbd80
	if (!cr6.gt) goto loc_826BBD80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1d58
	sub_826C1D58(ctx, base);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1df8
	sub_826C1DF8(ctx, base);
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// bne cr6,0x826bbd24
	if (!cr6.eq) goto loc_826BBD24;
loc_826BBD80:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r9.u16);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826BBDA4"))) PPC_WEAK_FUNC(sub_826BBDA4);
PPC_FUNC_IMPL(__imp__sub_826BBDA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826BBDA8"))) PPC_WEAK_FUNC(sub_826BBDA8);
PPC_FUNC_IMPL(__imp__sub_826BBDA8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x826bbc50
	sub_826BBC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BBDB0"))) PPC_WEAK_FUNC(sub_826BBDB0);
PPC_FUNC_IMPL(__imp__sub_826BBDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,276
	cr6.compare<int32_t>(ctx.r3.s32, 276, xer);
	// bgt cr6,0x826bbdd4
	if (cr6.gt) goto loc_826BBDD4;
	// beq cr6,0x826bbdcc
	if (cr6.eq) goto loc_826BBDCC;
	// cmpwi cr6,r3,260
	cr6.compare<int32_t>(ctx.r3.s32, 260, xer);
	// blt cr6,0x826bbddc
	if (cr6.lt) goto loc_826BBDDC;
	// cmpwi cr6,r3,262
	cr6.compare<int32_t>(ctx.r3.s32, 262, xer);
	// bgt cr6,0x826bbddc
	if (cr6.gt) goto loc_826BBDDC;
loc_826BBDCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826BBDD4:
	// cmpwi cr6,r3,287
	cr6.compare<int32_t>(ctx.r3.s32, 287, xer);
	// beq cr6,0x826bbdcc
	if (cr6.eq) goto loc_826BBDCC;
loc_826BBDDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBDE4"))) PPC_WEAK_FUNC(sub_826BBDE4);
PPC_FUNC_IMPL(__imp__sub_826BBDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BBDE8"))) PPC_WEAK_FUNC(sub_826BBDE8);
PPC_FUNC_IMPL(__imp__sub_826BBDE8) {
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
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BBE44"))) PPC_WEAK_FUNC(sub_826BBE44);
PPC_FUNC_IMPL(__imp__sub_826BBE44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBE48"))) PPC_WEAK_FUNC(sub_826BBE48);
PPC_FUNC_IMPL(__imp__sub_826BBE48) {
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
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// beq cr6,0x826bbedc
	if (cr6.eq) goto loc_826BBEDC;
loc_826BBE6C:
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x826bbea8
	if (!cr6.eq) goto loc_826BBEA8;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x826bbe90
	if (!cr6.eq) goto loc_826BBE90;
	// li r11,1
	r11.s64 = 1;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
loc_826BBE90:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x826bbea8
	if (!cr6.eq) goto loc_826BBEA8;
	// li r11,1
	r11.s64 = 1;
	// stw r10,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
loc_826BBEA8:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826bbe6c
	if (!cr6.eq) goto loc_826BBE6C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bbedc
	if (cr6.eq) goto loc_826BBEDC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x826c0980
	sub_826C0980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
loc_826BBEDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BBEEC"))) PPC_WEAK_FUNC(sub_826BBEEC);
PPC_FUNC_IMPL(__imp__sub_826BBEEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BBEF0"))) PPC_WEAK_FUNC(sub_826BBEF0);
PPC_FUNC_IMPL(__imp__sub_826BBEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r28,r4,8
	r28.s64 = ctx.r4.s64 + 8;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// blt cr6,0x826bbf2c
	if (cr6.lt) goto loc_826BBF2C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// ble cr6,0x826bbf3c
	if (!cr6.gt) goto loc_826BBF3C;
loc_826BBF2C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2588
	ctx.r4.s64 = r11.s64 + 2588;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BBF3C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bbfb4
	if (!cr6.eq) goto loc_826BBFB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb798
	sub_826BB798(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x826bbf7c
	if (!cr6.eq) goto loc_826BBF7C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbe48
	sub_826BBE48(ctx, base);
loc_826BBF7C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// subfic r4,r10,200
	xer.ca = ctx.r10.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r10.s64;
	// cmpw cr6,r29,r4
	cr6.compare<int32_t>(r29.s32, ctx.r4.s32, xer);
	// ble cr6,0x826bbfa0
	if (!cr6.gt) goto loc_826BBFA0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r5,r11,2564
	ctx.r5.s64 = r11.s64 + 2564;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BBFA0:
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbef0
	sub_826BBEF0(ctx, base);
	// b 0x826bc038
	goto loc_826BC038;
loc_826BBFB4:
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// beq cr6,0x826bbfe8
	if (cr6.eq) goto loc_826BBFE8;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BBFE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb500
	sub_826BB500(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// beq cr6,0x826bc060
	if (cr6.eq) goto loc_826BC060;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba5b8
	sub_826BA5B8(ctx, base);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// ble cr6,0x826bc038
	if (!cr6.gt) goto loc_826BC038;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
loc_826BC038:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// b 0x826bc070
	goto loc_826BC070;
loc_826BC060:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c0660
	sub_826C0660(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
loc_826BC070:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826c13b8
	sub_826C13B8(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BC088"))) PPC_WEAK_FUNC(sub_826BC088);
PPC_FUNC_IMPL(__imp__sub_826BC088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BC08C"))) PPC_WEAK_FUNC(sub_826BC08C);
PPC_FUNC_IMPL(__imp__sub_826BC08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BC090"))) PPC_WEAK_FUNC(sub_826BC090);
PPC_FUNC_IMPL(__imp__sub_826BC090) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x826bc0d0
	if (!cr6.eq) goto loc_826BC0D0;
	// li r11,3
	r11.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_826BC0D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c16f8
	sub_826C16F8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BC0F8"))) PPC_WEAK_FUNC(sub_826BC0F8);
PPC_FUNC_IMPL(__imp__sub_826BC0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC0FC"))) PPC_WEAK_FUNC(sub_826BC0FC);
PPC_FUNC_IMPL(__imp__sub_826BC0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BC100"))) PPC_WEAK_FUNC(sub_826BC100);
PPC_FUNC_IMPL(__imp__sub_826BC100) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// lwz r31,20(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826bc140
	if (cr6.eq) goto loc_826BC140;
loc_826BC120:
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826bc14c
	if (!cr6.eq) goto loc_826BC14C;
	// lbz r11,9(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// or r30,r11,r30
	r30.u64 = r11.u64 | r30.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826bc120
	if (!cr6.eq) goto loc_826BC120;
loc_826BC140:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,2604
	ctx.r4.s64 = r11.s64 + 2604;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BC14C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x826bc16c
	if (cr6.eq) goto loc_826BC16C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c0980
	sub_826C0980(ctx, base);
loc_826BC16C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c0208
	sub_826C0208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BC188"))) PPC_WEAK_FUNC(sub_826BC188);
PPC_FUNC_IMPL(__imp__sub_826BC188) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BC18C"))) PPC_WEAK_FUNC(sub_826BC18C);
PPC_FUNC_IMPL(__imp__sub_826BC18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BC190"))) PPC_WEAK_FUNC(sub_826BC190);
PPC_FUNC_IMPL(__imp__sub_826BC190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bfe68
	sub_826BFE68(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x826bc1e8
	if (!cr6.eq) goto loc_826BC1E8;
	// li r11,3
	r11.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_826BC1E8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c16f8
	sub_826C16F8(ctx, base);
	// li r27,-1
	r27.s64 = -1;
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r11.u8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbz r9,50(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// stb r29,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r29.u8);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r28,132(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r7,259
	cr6.compare<int32_t>(ctx.r7.s32, 259, xer);
	// beq cr6,0x826bc260
	if (cr6.eq) goto loc_826BC260;
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BC260:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r29.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,48(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r10,50(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 50);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r29.u8);
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r11.u32);
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x826c20c0
	sub_826C20C0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,277
	ctx.r5.s64 = 277;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826BC2EC"))) PPC_WEAK_FUNC(sub_826BC2EC);
PPC_FUNC_IMPL(__imp__sub_826BC2EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826BC2F0"))) PPC_WEAK_FUNC(sub_826BC2F0);
PPC_FUNC_IMPL(__imp__sub_826BC2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x826bfe68
	sub_826BFE68(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r9,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r9.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lbz r7,50(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// lbz r4,50(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,276
	ctx.r4.s64 = 276;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x826bc3bc
	if (!cr6.eq) goto loc_826BC3BC;
	// li r11,3
	r11.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_826BC3BC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x826c16f8
	sub_826C16F8(ctx, base);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r28,132(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne cr6,0x826bc3e8
	if (!cr6.eq) goto loc_826BC3E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x826bc410
	goto loc_826BC410;
loc_826BC3E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bc100
	sub_826BC100(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_826BC410:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x826c20c0
	sub_826C20C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BC430"))) PPC_WEAK_FUNC(sub_826BC430);
PPC_FUNC_IMPL(__imp__sub_826BC430) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BC434"))) PPC_WEAK_FUNC(sub_826BC434);
PPC_FUNC_IMPL(__imp__sub_826BC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BC438"))) PPC_WEAK_FUNC(sub_826BC438);
PPC_FUNC_IMPL(__imp__sub_826BC438) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BC490"))) PPC_WEAK_FUNC(sub_826BC490);
PPC_FUNC_IMPL(__imp__sub_826BC490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BC494"))) PPC_WEAK_FUNC(sub_826BC494);
PPC_FUNC_IMPL(__imp__sub_826BC494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BC498"))) PPC_WEAK_FUNC(sub_826BC498);
PPC_FUNC_IMPL(__imp__sub_826BC498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// li r11,3
	r11.s64 = 3;
	// stb r10,50(r31)
	PPC_STORE_U8(r31.u32 + 50, ctx.r10.u8);
loc_826BC4D4:
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r6,r10,86
	ctx.r6.s64 = ctx.r10.s64 + 86;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + r31.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// bdnz 0x826bc4d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BC4D4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(r11.s32, 259, xer);
	// beq cr6,0x826bc548
	if (cr6.eq) goto loc_826BC548;
	// li r4,259
	ctx.r4.s64 = 259;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BC548:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x826bc574
	if (cr6.eq) goto loc_826BC574;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c09a8
	sub_826C09A8(ctx, base);
	// b 0x826bc578
	goto loc_826BC578;
loc_826BC574:
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
loc_826BC578:
	// li r29,0
	r29.s64 = 0;
	// li r28,-1
	r28.s64 = -1;
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r29.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r29.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x826ba118
	sub_826BA118(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r29.u8);
	// lwz r30,48(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r7,50(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// stb r29,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r29.u8);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x826bc630
	if (cr6.eq) goto loc_826BC630;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,31
	ctx.r4.s64 = 31;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
	// bl 0x826c09a8
	sub_826C09A8(ctx, base);
	// b 0x826bc640
	goto loc_826BC640;
loc_826BC630:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x826c0980
	sub_826C0980(ctx, base);
loc_826BC640:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c0878
	sub_826C0878(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x826bc670
	if (cr6.eq) goto loc_826BC670;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r26,1
	ctx.r5.s64 = r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c20c0
	sub_826C20C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9454
	return;
loc_826BC670:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r26,1
	ctx.r5.s64 = r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c20c0
	sub_826C20C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BC68C"))) PPC_WEAK_FUNC(sub_826BC68C);
PPC_FUNC_IMPL(__imp__sub_826BC68C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_826BC690"))) PPC_WEAK_FUNC(sub_826BC690);
PPC_FUNC_IMPL(__imp__sub_826BC690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r26,48(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,2648
	ctx.r4.s64 = ctx.r10.s64 + 2648;
	// lwz r24,36(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,2268
	r28.s64 = r11.s64 + 2268;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmpwi cr6,r8,200
	cr6.compare<int32_t>(ctx.r8.s32, 200, xer);
	// ble cr6,0x826bc6fc
	if (!cr6.gt) goto loc_826BC6FC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BC6FC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r8,2636
	ctx.r4.s64 = ctx.r8.s64 + 2636;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r10,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + r30.u32, ctx.r10.u16);
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r6,r11,2
	ctx.r6.s64 = r11.s64 + 2;
	// cmpwi cr6,r6,200
	cr6.compare<int32_t>(ctx.r6.s32, 200, xer);
	// ble cr6,0x826bc758
	if (!cr6.gt) goto loc_826BC758;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BC758:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,87
	ctx.r9.s64 = r11.s64 + 87;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r8,2624
	ctx.r4.s64 = ctx.r8.s64 + 2624;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r10,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + r30.u32, ctx.r10.u16);
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r6,r11,3
	ctx.r6.s64 = r11.s64 + 3;
	// cmpwi cr6,r6,200
	cr6.compare<int32_t>(ctx.r6.s32, 200, xer);
	// ble cr6,0x826bc7b4
	if (!cr6.gt) goto loc_826BC7B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BC7B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r9,r11,88
	ctx.r9.s64 = r11.s64 + 88;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r3.u16);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x826bc7f4
	if (!cr6.gt) goto loc_826BC7F4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BC7F4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r9,r11,89
	ctx.r9.s64 = r11.s64 + 89;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,2104
	r29.s64 = r11.s64 + 2104;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r3.u16);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r7,61
	cr6.compare<int32_t>(ctx.r7.s32, 61, xer);
	// beq cr6,0x826bc84c
	if (cr6.eq) goto loc_826BC84C;
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BC84C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x826bc8a4
	if (cr6.eq) goto loc_826BC8A4;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BC8A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bc8fc
	if (!cr6.eq) goto loc_826BC8FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// b 0x826bc92c
	goto loc_826BC92C;
loc_826BC8FC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfd f1,27392(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 27392);
	// bl 0x826c0520
	sub_826C0520(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,36(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c09a8
	sub_826C09A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
loc_826BC92C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc498
	sub_826BC498(ctx, base);
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_826BC950"))) PPC_WEAK_FUNC(sub_826BC950);
PPC_FUNC_IMPL(__imp__sub_826BC950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826BC954"))) PPC_WEAK_FUNC(sub_826BC954);
PPC_FUNC_IMPL(__imp__sub_826BC954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BC958"))) PPC_WEAK_FUNC(sub_826BC958);
PPC_FUNC_IMPL(__imp__sub_826BC958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r23,48(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r10,2688
	ctx.r4.s64 = ctx.r10.s64 + 2688;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r22,36(r23)
	r22.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r25,r11,2268
	r25.s64 = r11.s64 + 2268;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// cmpwi cr6,r8,200
	cr6.compare<int32_t>(ctx.r8.s32, 200, xer);
	// ble cr6,0x826bc9c0
	if (!cr6.gt) goto loc_826BC9C0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BC9C0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r8,2676
	ctx.r4.s64 = ctx.r8.s64 + 2676;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r10,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + r30.u32, ctx.r10.u16);
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r6,r11,2
	ctx.r6.s64 = r11.s64 + 2;
	// cmpwi cr6,r6,200
	cr6.compare<int32_t>(ctx.r6.s32, 200, xer);
	// ble cr6,0x826bca1c
	if (!cr6.gt) goto loc_826BCA1C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BCA1C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,87
	ctx.r9.s64 = r11.s64 + 87;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r8,2660
	ctx.r4.s64 = ctx.r8.s64 + 2660;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r10,r7,r30
	PPC_STORE_U16(ctx.r7.u32 + r30.u32, ctx.r10.u16);
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r6,r11,3
	ctx.r6.s64 = r11.s64 + 3;
	// cmpwi cr6,r6,200
	cr6.compare<int32_t>(ctx.r6.s32, 200, xer);
	// ble cr6,0x826bca78
	if (!cr6.gt) goto loc_826BCA78;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BCA78:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r9,r11,88
	ctx.r9.s64 = r11.s64 + 88;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r3.u16);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// cmpwi cr6,r7,200
	cr6.compare<int32_t>(ctx.r7.s32, 200, xer);
	// ble cr6,0x826bcab8
	if (!cr6.gt) goto loc_826BCAB8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,200
	ctx.r4.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BCAB8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,89
	ctx.r9.s64 = r11.s64 + 89;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r29,4
	r29.s64 = 4;
	// addi r27,r9,2120
	r27.s64 = ctx.r9.s64 + 2120;
	// addi r26,r10,2160
	r26.s64 = ctx.r10.s64 + 2160;
	// sthx r3,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r3.u16);
	// addi r24,r11,2104
	r24.s64 = r11.s64 + 2104;
loc_826BCAF0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bcbd0
	if (!cr6.eq) goto loc_826BCBD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826bcb38
	if (cr6.eq) goto loc_826BCB38;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BCB38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// ble cr6,0x826bcba4
	if (!cr6.gt) goto loc_826BCBA4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826bcb84
	if (!cr6.eq) goto loc_826BCB84;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826bcb94
	goto loc_826BCB94;
loc_826BCB84:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826BCB94:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BCBA4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r10.u16);
	// b 0x826bcaf0
	goto loc_826BCAF0;
loc_826BCBD0:
	// cmpwi cr6,r11,267
	cr6.compare<int32_t>(r11.s32, 267, xer);
	// beq cr6,0x826bcc00
	if (cr6.eq) goto loc_826BCC00;
	// li r4,267
	ctx.r4.s64 = 267;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BCC00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826bb500
	sub_826BB500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x826ba5b8
	sub_826BA5B8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c0268
	sub_826C0268(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r29,-3
	ctx.r6.s64 = r29.s64 + -3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc498
	sub_826BC498(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826BCC5C"))) PPC_WEAK_FUNC(sub_826BCC5C);
PPC_FUNC_IMPL(__imp__sub_826BCC5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_826BCC60"))) PPC_WEAK_FUNC(sub_826BCC60);
PPC_FUNC_IMPL(__imp__sub_826BCC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,-1
	r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r7,50(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 50);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// lwz r6,20(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r8,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r8.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r5,285
	cr6.compare<int32_t>(ctx.r5.s32, 285, xer);
	// beq cr6,0x826bcce4
	if (cr6.eq) goto loc_826BCCE4;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BCCE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x826bcd34
	if (cr6.eq) goto loc_826BCD34;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// beq cr6,0x826bcd20
	if (cr6.eq) goto loc_826BCD20;
	// cmpwi cr6,r11,267
	cr6.compare<int32_t>(r11.s32, 267, xer);
	// beq cr6,0x826bcd34
	if (cr6.eq) goto loc_826BCD34;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2704
	ctx.r4.s64 = r11.s64 + 2704;
	// bl 0x826be710
	sub_826BE710(ctx, base);
	// b 0x826bcd40
	goto loc_826BCD40;
loc_826BCD20:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc690
	sub_826BC690(ctx, base);
	// b 0x826bcd40
	goto loc_826BCD40;
loc_826BCD34:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc958
	sub_826BC958(ctx, base);
loc_826BCD40:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826BCD60"))) PPC_WEAK_FUNC(sub_826BCD60);
PPC_FUNC_IMPL(__imp__sub_826BCD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BCD64"))) PPC_WEAK_FUNC(sub_826BCD64);
PPC_FUNC_IMPL(__imp__sub_826BCD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BCD68"))) PPC_WEAK_FUNC(sub_826BCD68);
PPC_FUNC_IMPL(__imp__sub_826BCD68) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbc50
	sub_826BBC50(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x826bcdb4
	if (!cr6.eq) goto loc_826BCDB4;
	// li r11,3
	r11.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_826BCDB4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c16f8
	sub_826C16F8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,274
	cr6.compare<int32_t>(r11.s32, 274, xer);
	// lwz r30,116(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// beq cr6,0x826bcdfc
	if (cr6.eq) goto loc_826BCDFC;
	// li r4,274
	ctx.r4.s64 = 274;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BCDFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r11.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r31,48(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ba6c0
	sub_826BA6C0(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BCE64"))) PPC_WEAK_FUNC(sub_826BCE64);
PPC_FUNC_IMPL(__imp__sub_826BCE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BCE68"))) PPC_WEAK_FUNC(sub_826BCE68);
PPC_FUNC_IMPL(__imp__sub_826BCE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r11,-1
	r11.s64 = -1;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x826bcd68
	sub_826BCD68(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,261
	cr6.compare<int32_t>(r11.s32, 261, xer);
	// bne cr6,0x826bced8
	if (!cr6.eq) goto loc_826BCED8;
loc_826BCE9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0208
	sub_826C0208(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bcd68
	sub_826BCD68(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,261
	cr6.compare<int32_t>(r11.s32, 261, xer);
	// beq cr6,0x826bce9c
	if (cr6.eq) goto loc_826BCE9C;
loc_826BCED8:
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(r11.s32, 260, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x826bcf18
	if (!cr6.eq) goto loc_826BCF18;
	// bl 0x826c0b18
	sub_826C0B18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0208
	sub_826C0208(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbde8
	sub_826BBDE8(ctx, base);
	// b 0x826bcf24
	goto loc_826BCF24;
loc_826BCF18:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826c0208
	sub_826C0208(ctx, base);
loc_826BCF24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c0c30
	sub_826C0C30(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,266
	ctx.r5.s64 = 266;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BCF48"))) PPC_WEAK_FUNC(sub_826BCF48);
PPC_FUNC_IMPL(__imp__sub_826BCF48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BCF4C"))) PPC_WEAK_FUNC(sub_826BCF4C);
PPC_FUNC_IMPL(__imp__sub_826BCF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BCF50"))) PPC_WEAK_FUNC(sub_826BCF50);
PPC_FUNC_IMPL(__imp__sub_826BCF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r31,48(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,285
	cr6.compare<int32_t>(ctx.r10.s32, 285, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// beq cr6,0x826bcfa4
	if (cr6.eq) goto loc_826BCFA4;
	// li r4,285
	ctx.r4.s64 = 285;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BCFA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,50(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 50);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// ble cr6,0x826bcfd8
	if (!cr6.gt) goto loc_826BCFD8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r5,r11,2268
	ctx.r5.s64 = r11.s64 + 2268;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b9c20
	sub_826B9C20(ctx, base);
loc_826BCFD8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 50);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r11,86
	ctx.r8.s64 = r11.s64 + 86;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r9,r7,r29
	PPC_STORE_U16(ctx.r7.u32 + r29.u32, ctx.r9.u16);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x826c02d0
	sub_826C02D0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,50(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r11,50(r10)
	PPC_STORE_U8(ctx.r10.u32 + 50, r11.u8);
	// addi r6,r11,85
	ctx.r6.s64 = r11.s64 + 85;
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 1);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826bb380
	sub_826BB380(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c13b8
	sub_826C13B8(ctx, base);
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r11,85
	ctx.r8.s64 = r11.s64 + 85;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lhzx r11,r7,r31
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + r31.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 1);
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BD0C0"))) PPC_WEAK_FUNC(sub_826BD0C0);
PPC_FUNC_IMPL(__imp__sub_826BD0C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BD0C4"))) PPC_WEAK_FUNC(sub_826BD0C4);
PPC_FUNC_IMPL(__imp__sub_826BD0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BD0C8"))) PPC_WEAK_FUNC(sub_826BD0C8);
PPC_FUNC_IMPL(__imp__sub_826BD0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r26,r8,2120
	r26.s64 = ctx.r8.s64 + 2120;
	// addi r25,r9,2160
	r25.s64 = ctx.r9.s64 + 2160;
	// addi r24,r11,2104
	r24.s64 = r11.s64 + 2104;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r27,r10,2268
	r27.s64 = ctx.r10.s64 + 2268;
loc_826BD108:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826bd13c
	if (cr6.eq) goto loc_826BD13C;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BD13C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r31,48(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// ble cr6,0x826bd1a8
	if (!cr6.gt) goto loc_826BD1A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x826bd188
	if (!cr6.eq) goto loc_826BD188;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,200
	ctx.r5.s64 = 200;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826bd198
	goto loc_826BD198;
loc_826BD188:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826BD198:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BD1A8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9fb0
	sub_826B9FB0(ctx, base);
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r9,r11,86
	ctx.r9.s64 = r11.s64 + 86;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + r31.u32, ctx.r3.u16);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x826bd1e4
	if (!cr6.eq) goto loc_826BD1E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// b 0x826bd108
	goto loc_826BD108;
loc_826BD1E4:
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// bne cr6,0x826bd208
	if (!cr6.eq) goto loc_826BD208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bb500
	sub_826BB500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x826bd214
	goto loc_826BD214;
loc_826BD208:
	// li r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_826BD214:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ba5b8
	sub_826BA5B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ba118
	sub_826BA118(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826BD23C"))) PPC_WEAK_FUNC(sub_826BD23C);
PPC_FUNC_IMPL(__imp__sub_826BD23C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826BD240"))) PPC_WEAK_FUNC(sub_826BD240);
PPC_FUNC_IMPL(__imp__sub_826BD240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x826ba528
	sub_826BA528(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// bne cr6,0x826bd314
	if (!cr6.eq) goto loc_826BD314;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r28,-1
	r28.s64 = -1;
	// li r27,4
	r27.s64 = 4;
	// addi r26,r11,2104
	r26.s64 = r11.s64 + 2104;
loc_826BD284:
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c11f0
	sub_826C11F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,285
	cr6.compare<int32_t>(r11.s32, 285, xer);
	// beq cr6,0x826bd2d0
	if (cr6.eq) goto loc_826BD2D0;
	// li r4,285
	ctx.r4.s64 = 285;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BD2D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r24,24(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c04e8
	sub_826C04E8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1a00
	sub_826C1A00(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x826bd284
	if (cr6.eq) goto loc_826BD284;
loc_826BD314:
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// bne cr6,0x826bd354
	if (!cr6.eq) goto loc_826BD354;
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r25,1
	r25.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c11f0
	sub_826C11F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9f30
	sub_826B9F30(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c1a00
	sub_826C1A00(ctx, base);
loc_826BD354:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_826BD364"))) PPC_WEAK_FUNC(sub_826BD364);
PPC_FUNC_IMPL(__imp__sub_826BD364) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826BD368"))) PPC_WEAK_FUNC(sub_826BD368);
PPC_FUNC_IMPL(__imp__sub_826BD368) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd240
	sub_826BD240(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb380
	sub_826BB380(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c13b8
	sub_826C13B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x826c0878
	sub_826C0878(ctx, base);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BD3EC"))) PPC_WEAK_FUNC(sub_826BD3EC);
PPC_FUNC_IMPL(__imp__sub_826BD3EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD3F0"))) PPC_WEAK_FUNC(sub_826BD3F0);
PPC_FUNC_IMPL(__imp__sub_826BD3F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x826bb798
	sub_826BB798(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// bne cr6,0x826bd450
	if (!cr6.eq) goto loc_826BD450;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,14,9,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0x7FC000) | (ctx.r7.u64 & 0xFFFFFFFFFF803FFF);
	// stwx r7,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x826bd468
	goto loc_826BD468;
loc_826BD450:
	// li r11,0
	r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbef0
	sub_826BBEF0(ctx, base);
loc_826BD468:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BD484"))) PPC_WEAK_FUNC(sub_826BD484);
PPC_FUNC_IMPL(__imp__sub_826BD484) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD488"))) PPC_WEAK_FUNC(sub_826BD488);
PPC_FUNC_IMPL(__imp__sub_826BD488) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,276
	cr6.compare<int32_t>(r11.s32, 276, xer);
	// bgt cr6,0x826bd508
	if (cr6.gt) goto loc_826BD508;
	// beq cr6,0x826bd4d4
	if (cr6.eq) goto loc_826BD4D4;
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(r11.s32, 260, xer);
	// blt cr6,0x826bd510
	if (cr6.lt) goto loc_826BD510;
	// cmpwi cr6,r11,262
	cr6.compare<int32_t>(r11.s32, 262, xer);
	// bgt cr6,0x826bd510
	if (cr6.gt) goto loc_826BD510;
loc_826BD4D4:
	// li r31,0
	r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_826BD4DC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c0b80
	sub_826C0B80(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826BD508:
	// cmpwi cr6,r11,287
	cr6.compare<int32_t>(r11.s32, 287, xer);
	// beq cr6,0x826bd4d4
	if (cr6.eq) goto loc_826BD4D4;
loc_826BD510:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(r11.s32, 59, xer);
	// beq cr6,0x826bd4d4
	if (cr6.eq) goto loc_826BD4D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bb500
	sub_826BB500(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x826bd564
	if (cr6.eq) goto loc_826BD564;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(r11.s32, 14, xer);
	// beq cr6,0x826bd564
	if (cr6.eq) goto loc_826BD564;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x826bd558
	if (!cr6.eq) goto loc_826BD558;
	// bl 0x826c11f0
	sub_826C11F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826bd4dc
	goto loc_826BD4DC;
loc_826BD558:
	// bl 0x826c1148
	sub_826C1148(ctx, base);
	// lbz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// b 0x826bd4dc
	goto loc_826BD4DC;
loc_826BD564:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c05d0
	sub_826C05D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x826bd5a8
	if (!cr6.eq) goto loc_826BD5A8;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x826bd5a8
	if (!cr6.eq) goto loc_826BD5A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,29
	ctx.r9.s64 = 29;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,0,26,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC0);
	// stwx r7,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_826BD5A8:
	// lbz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 50);
	// li r31,-1
	r31.s64 = -1;
}

__attribute__((alias("__imp__sub_826BD5B0"))) PPC_WEAK_FUNC(sub_826BD5B0);
PPC_FUNC_IMPL(__imp__sub_826BD5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826bd4dc
	// ERROR 826BD4DC
	return;
}

__attribute__((alias("__imp__sub_826BD5B4"))) PPC_WEAK_FUNC(sub_826BD5B4);
PPC_FUNC_IMPL(__imp__sub_826BD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BD5B8"))) PPC_WEAK_FUNC(sub_826BD5B8);
PPC_FUNC_IMPL(__imp__sub_826BD5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-258
	r11.s64 = r11.s64 + -258;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bgt cr6,0x826bd71c
	if (cr6.gt) goto loc_826BD71C;
	// lis r12,-32148
	r12.s64 = -2106851328;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10756
	r12.s64 = r12.s64 + -10756;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_826BD704;
	case 1:
		goto loc_826BD66C;
	case 2:
		goto loc_826BD71C;
	case 3:
		goto loc_826BD71C;
	case 4:
		goto loc_826BD71C;
	case 5:
		goto loc_826BD71C;
	case 6:
		goto loc_826BD694;
	case 7:
		goto loc_826BD6B4;
	case 8:
		goto loc_826BD64C;
	case 9:
		goto loc_826BD71C;
	case 10:
		goto loc_826BD6C4;
	case 11:
		goto loc_826BD71C;
	case 12:
		goto loc_826BD71C;
	case 13:
		goto loc_826BD71C;
	case 14:
		goto loc_826BD6A4;
	case 15:
		goto loc_826BD6F4;
	case 16:
		goto loc_826BD71C;
	case 17:
		goto loc_826BD71C;
	case 18:
		goto loc_826BD71C;
	case 19:
		goto loc_826BD65C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-10492(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10492);
	// lwz r19,-10644(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10644);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10604(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10604);
	// lwz r19,-10572(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10572);
	// lwz r19,-10676(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10676);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10556(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10556);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10588(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10588);
	// lwz r19,-10508(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10508);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10468(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10468);
	// lwz r19,-10660(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + -10660);
loc_826BD64C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bce68
	sub_826BCE68(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD65C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc190
	sub_826BC190(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD66C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bbde8
	sub_826BBDE8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9da0
	sub_826B9DA0(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD694:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bcc60
	sub_826BCC60(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD6A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc2f0
	sub_826BC2F0(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD6B4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd368
	sub_826BD368(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD6C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,265
	cr6.compare<int32_t>(r11.s32, 265, xer);
	// bne cr6,0x826bd6ec
	if (!cr6.eq) goto loc_826BD6EC;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bcf50
	sub_826BCF50(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD6EC:
	// bl 0x826bd0c8
	sub_826BD0C8(ctx, base);
	// b 0x826bd724
	goto loc_826BD724;
loc_826BD6F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd488
	sub_826BD488(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd728
	goto loc_826BD728;
loc_826BD704:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc100
	sub_826BC100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826bd728
	goto loc_826BD728;
loc_826BD71C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd3f0
	sub_826BD3F0(ctx, base);
loc_826BD724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826BD728:
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

__attribute__((alias("__imp__sub_826BD73C"))) PPC_WEAK_FUNC(sub_826BD73C);
PPC_FUNC_IMPL(__imp__sub_826BD73C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD740"))) PPC_WEAK_FUNC(sub_826BD740);
PPC_FUNC_IMPL(__imp__sub_826BD740) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r9.u16);
	// cmplwi cr6,r9,200
	cr6.compare<uint32_t>(ctx.r9.u32, 200, xer);
	// ble cr6,0x826bd784
	if (!cr6.gt) goto loc_826BD784;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,2296
	ctx.r4.s64 = r11.s64 + 2296;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BD784:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,276
	cr6.compare<int32_t>(r11.s32, 276, xer);
	// bgt cr6,0x826bd7a8
	if (cr6.gt) goto loc_826BD7A8;
	// beq cr6,0x826bd7e4
	if (cr6.eq) goto loc_826BD7E4;
	// cmpwi cr6,r11,260
	cr6.compare<int32_t>(r11.s32, 260, xer);
	// blt cr6,0x826bd7b0
	if (cr6.lt) goto loc_826BD7B0;
	// cmpwi cr6,r11,262
	cr6.compare<int32_t>(r11.s32, 262, xer);
	// ble cr6,0x826bd7e4
	if (!cr6.gt) goto loc_826BD7E4;
	// b 0x826bd7b0
	goto loc_826BD7B0;
loc_826BD7A8:
	// cmpwi cr6,r11,287
	cr6.compare<int32_t>(r11.s32, 287, xer);
	// beq cr6,0x826bd7e4
	if (cr6.eq) goto loc_826BD7E4;
loc_826BD7B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd5b8
	sub_826BD5B8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(r11.s32, 59, xer);
	// bne cr6,0x826bd7d0
	if (!cr6.eq) goto loc_826BD7D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
loc_826BD7D0:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// lbz r10,50(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 50);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// beq cr6,0x826bd784
	if (cr6.eq) goto loc_826BD784;
loc_826BD7E4:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r9,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r9.u16);
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

__attribute__((alias("__imp__sub_826BD80C"))) PPC_WEAK_FUNC(sub_826BD80C);
PPC_FUNC_IMPL(__imp__sub_826BD80C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD810"))) PPC_WEAK_FUNC(sub_826BD810);
PPC_FUNC_IMPL(__imp__sub_826BD810) {
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
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r5,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// stw r9,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r9.u32);
loc_826BD840:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826bd840
	if (!cr6.eq) goto loc_826BD840;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be888
	sub_826BE888(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ba8b0
	sub_826BA8B0(ctx, base);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,74(r9)
	PPC_STORE_U8(ctx.r9.u32 + 74, ctx.r10.u8);
	// bl 0x826bfd18
	sub_826BFD18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826bd740
	sub_826BD740(ctx, base);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r8,287
	cr6.compare<int32_t>(ctx.r8.s32, 287, xer);
	// beq cr6,0x826bd8dc
	if (cr6.eq) goto loc_826BD8DC;
	// li r4,287
	ctx.r4.s64 = 287;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r11,2104
	ctx.r4.s64 = r11.s64 + 2104;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826be710
	sub_826BE710(ctx, base);
loc_826BD8DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ba9b8
	sub_826BA9B8(ctx, base);
	// lwz r3,732(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BD904"))) PPC_WEAK_FUNC(sub_826BD904);
PPC_FUNC_IMPL(__imp__sub_826BD904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD908"))) PPC_WEAK_FUNC(sub_826BD908);
PPC_FUNC_IMPL(__imp__sub_826BD908) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,2728
	ctx.r4.s64 = r11.s64 + 2728;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BD950"))) PPC_WEAK_FUNC(sub_826BD950);
PPC_FUNC_IMPL(__imp__sub_826BD950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD954"))) PPC_WEAK_FUNC(sub_826BD954);
PPC_FUNC_IMPL(__imp__sub_826BD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BD958"))) PPC_WEAK_FUNC(sub_826BD958);
PPC_FUNC_IMPL(__imp__sub_826BD958) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bd9a4
	if (cr6.eq) goto loc_826BD9A4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// addi r4,r10,2728
	ctx.r4.s64 = ctx.r10.s64 + 2728;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BD9A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BD9B4"))) PPC_WEAK_FUNC(sub_826BD9B4);
PPC_FUNC_IMPL(__imp__sub_826BD9B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BD9B8"))) PPC_WEAK_FUNC(sub_826BD9B8);
PPC_FUNC_IMPL(__imp__sub_826BD9B8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bda28
	if (cr6.eq) goto loc_826BDA28;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// addi r4,r10,2728
	ctx.r4.s64 = ctx.r10.s64 + 2728;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826BDA28:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BDA40"))) PPC_WEAK_FUNC(sub_826BDA40);
PPC_FUNC_IMPL(__imp__sub_826BDA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDA44"))) PPC_WEAK_FUNC(sub_826BDA44);
PPC_FUNC_IMPL(__imp__sub_826BDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BDA48"))) PPC_WEAK_FUNC(sub_826BDA48);
PPC_FUNC_IMPL(__imp__sub_826BDA48) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,2728
	r30.s64 = r11.s64 + 2728;
	// beq cr6,0x826bdaa4
	if (cr6.eq) goto loc_826BDAA4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDAA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x826bdad8
	if (!cr6.lt) goto loc_826BDAD8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2772
	ctx.r6.s64 = r11.s64 + 2772;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826BDAD8:
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

__attribute__((alias("__imp__sub_826BDAEC"))) PPC_WEAK_FUNC(sub_826BDAEC);
PPC_FUNC_IMPL(__imp__sub_826BDAEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDAF0"))) PPC_WEAK_FUNC(sub_826BDAF0);
PPC_FUNC_IMPL(__imp__sub_826BDAF0) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bdb44
	if (cr6.eq) goto loc_826BDB44;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// addi r4,r10,2728
	ctx.r4.s64 = ctx.r10.s64 + 2728;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDB44:
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BDB58"))) PPC_WEAK_FUNC(sub_826BDB58);
PPC_FUNC_IMPL(__imp__sub_826BDB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BDB5C"))) PPC_WEAK_FUNC(sub_826BDB5C);
PPC_FUNC_IMPL(__imp__sub_826BDB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BDB60"))) PPC_WEAK_FUNC(sub_826BDB60);
PPC_FUNC_IMPL(__imp__sub_826BDB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r10,2728
	r30.s64 = ctx.r10.s64 + 2728;
	// addi r29,r11,2756
	r29.s64 = r11.s64 + 2756;
	// beq cr6,0x826bdbb8
	if (cr6.eq) goto loc_826BDBB8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDBB8:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x826bdbd0
	if (!cr6.eq) goto loc_826BDBD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826BDBD0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b9148
	sub_826B9148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bdc18
	if (cr6.eq) goto loc_826BDC18;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDC18:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BDC30"))) PPC_WEAK_FUNC(sub_826BDC30);
PPC_FUNC_IMPL(__imp__sub_826BDC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BDC34"))) PPC_WEAK_FUNC(sub_826BDC34);
PPC_FUNC_IMPL(__imp__sub_826BDC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BDC38"))) PPC_WEAK_FUNC(sub_826BDC38);
PPC_FUNC_IMPL(__imp__sub_826BDC38) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826bdc80
	if (cr6.gt) goto loc_826BDC80;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bdc84
	goto loc_826BDC84;
loc_826BDC80:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BDC84:
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r30.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bdccc
	if (cr6.eq) goto loc_826BDCCC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// addi r4,r10,2728
	ctx.r4.s64 = ctx.r10.s64 + 2728;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDCCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BDCD0"))) PPC_WEAK_FUNC(sub_826BDCD0);
PPC_FUNC_IMPL(__imp__sub_826BDCD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BDCD4"))) PPC_WEAK_FUNC(sub_826BDCD4);
PPC_FUNC_IMPL(__imp__sub_826BDCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BDCD8"))) PPC_WEAK_FUNC(sub_826BDCD8);
PPC_FUNC_IMPL(__imp__sub_826BDCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lis r11,4095
	r11.s64 = 268369920;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826bdd20
	if (cr6.gt) goto loc_826BDD20;
	// rlwinm r6,r30,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bdd24
	goto loc_826BDD24;
loc_826BDD20:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BDD24:
	// stw r30,40(r26)
	PPC_STORE_U32(r26.u32 + 40, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r3,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r3.u32);
	// ble cr6,0x826bde94
	if (!cr6.gt) goto loc_826BDE94;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_826BDD40:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// bdnz 0x826bdd40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BDD40;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826bde94
	if (!cr6.gt) goto loc_826BDE94;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r25,r29
	r25.u64 = r29.u64;
	// mr r21,r30
	r21.u64 = r30.u64;
	// li r22,1
	r22.s64 = 1;
	// li r20,3
	r20.s64 = 3;
	// li r23,4
	r23.s64 = 4;
	// addi r28,r9,2728
	r28.s64 = ctx.r9.s64 + 2728;
	// addi r27,r10,2756
	r27.s64 = ctx.r10.s64 + 2756;
	// addi r24,r11,2784
	r24.s64 = r11.s64 + 2784;
loc_826BDD88:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r30,r25,r11
	r30.u64 = r25.u64 + r11.u64;
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bddc8
	if (cr6.eq) goto loc_826BDDC8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDDC8:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x826bde68
	if (cr6.gt) goto loc_826BDE68;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x826bddf8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826BDDF8;
	// bdzf 4*cr6+eq,0x826bde68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826BDE68;
	// bdzf 4*cr6+eq,0x826bde0c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_826BDE0C;
	// bne cr6,0x826bde54
	if (!cr6.eq) goto loc_826BDE54;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x826bde88
	goto loc_826BDE88;
loc_826BDDF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd9b8
	sub_826BD9B8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r22,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r22.u32);
	// b 0x826bde88
	goto loc_826BDE88;
loc_826BDE0C:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bde44
	if (cr6.eq) goto loc_826BDE44;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDE44:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r20,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r20.u32);
	// stfd f0,0(r30)
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
	// b 0x826bde88
	goto loc_826BDE88;
loc_826BDE54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bdb60
	sub_826BDB60(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
	// b 0x826bde88
	goto loc_826BDE88;
loc_826BDE68:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDE88:
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// bne 0x826bdd88
	if (!cr0.eq) goto loc_826BDD88;
loc_826BDE94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826bdecc
	if (cr6.gt) goto loc_826BDECC;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bded0
	goto loc_826BDED0;
loc_826BDECC:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BDED0:
	// stw r30,52(r26)
	PPC_STORE_U32(r26.u32 + 52, r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r3,16(r26)
	PPC_STORE_U32(r26.u32 + 16, ctx.r3.u32);
	// ble cr6,0x826bdf20
	if (!cr6.gt) goto loc_826BDF20;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_826BDEE8:
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826bdee8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BDEE8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826bdf20
	if (!cr6.gt) goto loc_826BDF20;
loc_826BDF00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// bl 0x826be108
	sub_826BE108(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stwx r3,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x826bdf00
	if (!cr0.eq) goto loc_826BDF00;
loc_826BDF20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826BDF24"))) PPC_WEAK_FUNC(sub_826BDF24);
PPC_FUNC_IMPL(__imp__sub_826BDF24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_826BDF28"))) PPC_WEAK_FUNC(sub_826BDF28);
PPC_FUNC_IMPL(__imp__sub_826BDF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lis r11,16383
	r11.s64 = 1073676288;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r26,r11,65535
	r26.u64 = r11.u64 | 65535;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bgt cr6,0x826bdf70
	if (cr6.gt) goto loc_826BDF70;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bdf74
	goto loc_826BDF74;
loc_826BDF70:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BDF74:
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r31.u32);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bdfbc
	if (cr6.eq) goto loc_826BDFBC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// addi r4,r10,2728
	ctx.r4.s64 = ctx.r10.s64 + 2728;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BDFBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lis r11,5461
	r11.s64 = 357892096;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// ori r9,r11,21845
	ctx.r9.u64 = r11.u64 | 21845;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826bdffc
	if (cr6.gt) goto loc_826BDFFC;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826be000
	goto loc_826BE000;
loc_826BDFFC:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BE000:
	// stw r28,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r28.u32);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// ble cr6,0x826be07c
	if (!cr6.gt) goto loc_826BE07C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_826BE01C:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r27.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bdnz 0x826be01c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BE01C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x826be07c
	if (!cr6.gt) goto loc_826BE07C;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_826BE038:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bdb60
	sub_826BDB60(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stwx r3,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// bne 0x826be038
	if (!cr0.eq) goto loc_826BE038;
loc_826BE07C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bgt cr6,0x826be0ac
	if (cr6.gt) goto loc_826BE0AC;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826be0b0
	goto loc_826BE0B0;
loc_826BE0AC:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BE0B0:
	// stw r31,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r3,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// ble cr6,0x826be100
	if (!cr6.gt) goto loc_826BE100;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_826BE0C8:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stwx r27,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826be0c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BE0C8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x826be100
	if (!cr6.gt) goto loc_826BE100;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_826BE0E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bdb60
	sub_826BDB60(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stwx r3,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r3.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x826be0e4
	if (!cr0.eq) goto loc_826BE0E4;
loc_826BE100:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826BE104"))) PPC_WEAK_FUNC(sub_826BE104);
PPC_FUNC_IMPL(__imp__sub_826BE104) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826BE108"))) PPC_WEAK_FUNC(sub_826BE108);
PPC_FUNC_IMPL(__imp__sub_826BE108) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826b8d10
	sub_826B8D10(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r6,16
	cr6.compare<int32_t>(ctx.r6.s32, 16, xer);
	// bgt cr6,0x826be15c
	if (cr6.gt) goto loc_826BE15C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826b0188
	sub_826B0188(ctx, base);
loc_826BE15C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x826bdb60
	sub_826BDB60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// bne cr6,0x826be184
	if (!cr6.eq) goto loc_826BE184;
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
loc_826BE184:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bda48
	sub_826BDA48(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd9b8
	sub_826BD9B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,72(r30)
	PPC_STORE_U8(r30.u32 + 72, r11.u8);
	// bl 0x826bd9b8
	sub_826BD9B8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,73(r30)
	PPC_STORE_U8(r30.u32 + 73, ctx.r10.u8);
	// bl 0x826bd9b8
	sub_826BD9B8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,74(r30)
	PPC_STORE_U8(r30.u32 + 74, ctx.r9.u8);
	// bl 0x826bd9b8
	sub_826BD9B8(ctx, base);
	// stb r3,75(r30)
	PPC_STORE_U8(r30.u32 + 75, ctx.r3.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bdc38
	sub_826BDC38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bdcd8
	sub_826BDCD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bdf28
	sub_826BDF28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b45f8
	sub_826B45F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826be234
	if (!cr6.eq) goto loc_826BE234;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2800
	ctx.r6.s64 = r11.s64 + 2800;
	// addi r4,r10,2728
	ctx.r4.s64 = ctx.r10.s64 + 2728;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BE234:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BE24C"))) PPC_WEAK_FUNC(sub_826BE24C);
PPC_FUNC_IMPL(__imp__sub_826BE24C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BE250"))) PPC_WEAK_FUNC(sub_826BE250);
PPC_FUNC_IMPL(__imp__sub_826BE250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r8,81
	ctx.r8.s64 = 81;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,4
	r11.s64 = 4;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,2812(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2812);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stbu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r3.u32 = ea;
	// stbu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r3.u32 = ea;
	// stbu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r3.u32 = ea;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r3.u32 = ea;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r3.u32 = ea;
	// stbu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, r11.u8);
	ctx.r3.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_826BE28C"))) PPC_WEAK_FUNC(sub_826BE28C);
PPC_FUNC_IMPL(__imp__sub_826BE28C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE290"))) PPC_WEAK_FUNC(sub_826BE290);
PPC_FUNC_IMPL(__imp__sub_826BE290) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,4
	r11.s64 = 4;
	// li r7,81
	ctx.r7.s64 = 81;
	// lwz r6,24192(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// li r30,8
	r30.s64 = 8;
	// lwz r9,2812(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2812);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r10,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r10.u8);
	// stb r10,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r10.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r30.u8);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// bl 0x826b9058
	sub_826B9058(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,2728
	r30.s64 = r11.s64 + 2728;
	// beq cr6,0x826be334
	if (cr6.eq) goto loc_826BE334;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2756
	ctx.r6.s64 = r11.s64 + 2756;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BE334:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
loc_826BE340:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826be360
	if (!cr0.eq) goto loc_826BE360;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x826be340
	if (!cr6.eq) goto loc_826BE340;
loc_826BE360:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826be38c
	if (cr6.eq) goto loc_826BE38C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,2820
	ctx.r6.s64 = r11.s64 + 2820;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BE38C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BE3A8"))) PPC_WEAK_FUNC(sub_826BE3A8);
PPC_FUNC_IMPL(__imp__sub_826BE3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE3AC"))) PPC_WEAK_FUNC(sub_826BE3AC);
PPC_FUNC_IMPL(__imp__sub_826BE3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE3B0"))) PPC_WEAK_FUNC(sub_826BE3B0);
PPC_FUNC_IMPL(__imp__sub_826BE3B0) {
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
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x826be3fc
	if (cr6.eq) goto loc_826BE3FC;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// beq cr6,0x826be3fc
	if (cr6.eq) goto loc_826BE3FC;
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// bne cr6,0x826be3f4
	if (!cr6.eq) goto loc_826BE3F4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,2836
	ctx.r10.s64 = r11.s64 + 2836;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x826be404
	goto loc_826BE404;
loc_826BE3F4:
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// b 0x826be404
	goto loc_826BE404;
loc_826BE3FC:
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_826BE404:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x826be290
	sub_826BE290(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,2832
	ctx.r4.s64 = r11.s64 + 2832;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826be108
	sub_826BE108(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BE448"))) PPC_WEAK_FUNC(sub_826BE448);
PPC_FUNC_IMPL(__imp__sub_826BE448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE44C"))) PPC_WEAK_FUNC(sub_826BE44C);
PPC_FUNC_IMPL(__imp__sub_826BE44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE450"))) PPC_WEAK_FUNC(sub_826BE450);
PPC_FUNC_IMPL(__imp__sub_826BE450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r31,60(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x826be4d4
	if (!cr6.gt) goto loc_826BE4D4;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x826be49c
	if (cr6.lt) goto loc_826BE49C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3128
	ctx.r4.s64 = r11.s64 + 3128;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BE49C:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,-3
	r11.s64 = -3;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x826be4c8
	if (cr6.gt) goto loc_826BE4C8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826be4cc
	goto loc_826BE4CC;
loc_826BE4C8:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BE4CC:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_826BE4D4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stbx r28,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BE4F0"))) PPC_WEAK_FUNC(sub_826BE4F0);
PPC_FUNC_IMPL(__imp__sub_826BE4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BE4F4"))) PPC_WEAK_FUNC(sub_826BE4F4);
PPC_FUNC_IMPL(__imp__sub_826BE4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE4F8"))) PPC_WEAK_FUNC(sub_826BE4F8);
PPC_FUNC_IMPL(__imp__sub_826BE4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,3000
	r29.s64 = r11.s64 + 3000;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_826BE518:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_826BE520:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826be520
	if (!cr6.eq) goto loc_826BE520;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// addi r9,r29,84
	ctx.r9.s64 = r29.s64 + 84;
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// stb r7,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r7.u8);
	// blt cr6,0x826be518
	if (cr6.lt) goto loc_826BE518;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826BE574"))) PPC_WEAK_FUNC(sub_826BE574);
PPC_FUNC_IMPL(__imp__sub_826BE574) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826BE578"))) PPC_WEAK_FUNC(sub_826BE578);
PPC_FUNC_IMPL(__imp__sub_826BE578) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// bge cr6,0x826be5dc
	if (!cr6.lt) goto loc_826BE5DC;
	// bl 0x828f16e0
	sub_828F16E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826be5cc
	if (cr6.eq) goto loc_826BE5CC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,3156
	ctx.r4.s64 = r11.s64 + 3156;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826be5f0
	goto loc_826BE5F0;
loc_826BE5CC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,16504
	ctx.r4.s64 = r11.s64 + 16504;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// b 0x826be5f0
	goto loc_826BE5F0;
loc_826BE5DC:
	// addi r11,r31,-257
	r11.s64 = r31.s64 + -257;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,3000
	ctx.r8.s64 = ctx.r10.s64 + 3000;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_826BE5F0:
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

__attribute__((alias("__imp__sub_826BE604"))) PPC_WEAK_FUNC(sub_826BE604);
PPC_FUNC_IMPL(__imp__sub_826BE604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE608"))) PPC_WEAK_FUNC(sub_826BE608);
PPC_FUNC_IMPL(__imp__sub_826BE608) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,284
	cr6.compare<int32_t>(ctx.r4.s32, 284, xer);
	// blt cr6,0x826be650
	if (cr6.lt) goto loc_826BE650;
	// cmpwi cr6,r4,286
	cr6.compare<int32_t>(ctx.r4.s32, 286, xer);
	// bgt cr6,0x826be650
	if (cr6.gt) goto loc_826BE650;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826BE650:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be578
	sub_826BE578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BE668"))) PPC_WEAK_FUNC(sub_826BE668);
PPC_FUNC_IMPL(__imp__sub_826BE668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE66C"))) PPC_WEAK_FUNC(sub_826BE66C);
PPC_FUNC_IMPL(__imp__sub_826BE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE670"))) PPC_WEAK_FUNC(sub_826BE670);
PPC_FUNC_IMPL(__imp__sub_826BE670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x826afc28
	sub_826AFC28(ctx, base);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r8,1356
	ctx.r4.s64 = ctx.r8.s64 + 1356;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x826be6f4
	if (cr6.eq) goto loc_826BE6F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be608
	sub_826BE608(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r4,r11,3168
	ctx.r4.s64 = r11.s64 + 3168;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
loc_826BE6F4:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826BE70C"))) PPC_WEAK_FUNC(sub_826BE70C);
PPC_FUNC_IMPL(__imp__sub_826BE70C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BE710"))) PPC_WEAK_FUNC(sub_826BE710);
PPC_FUNC_IMPL(__imp__sub_826BE710) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
}

__attribute__((alias("__imp__sub_826BE714"))) PPC_WEAK_FUNC(sub_826BE714);
PPC_FUNC_IMPL(__imp__sub_826BE714) {
	PPC_FUNC_PROLOGUE();
	// b 0x826be670
	sub_826BE670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BE718"))) PPC_WEAK_FUNC(sub_826BE718);
PPC_FUNC_IMPL(__imp__sub_826BE718) {
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
	// lwz r30,52(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b8760
	sub_826B8760(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826b8500
	sub_826B8500(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826be774
	if (!cr6.eq) goto loc_826BE774;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_826BE774:
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

__attribute__((alias("__imp__sub_826BE788"))) PPC_WEAK_FUNC(sub_826BE788);
PPC_FUNC_IMPL(__imp__sub_826BE788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE78C"))) PPC_WEAK_FUNC(sub_826BE78C);
PPC_FUNC_IMPL(__imp__sub_826BE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE790"))) PPC_WEAK_FUNC(sub_826BE790);
PPC_FUNC_IMPL(__imp__sub_826BE790) {
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
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826be7dc
	if (cr6.eq) goto loc_826BE7DC;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826be7e4
	goto loc_826BE7E4;
loc_826BE7DC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BE7E4:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x826be7f8
	if (cr6.eq) goto loc_826BE7F8;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x826be83c
	if (!cr6.eq) goto loc_826BE83C;
loc_826BE7F8:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// beq cr6,0x826be83c
	if (cr6.eq) goto loc_826BE83C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826be830
	if (cr6.eq) goto loc_826BE830;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826be838
	goto loc_826BE838;
loc_826BE830:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BE838:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_826BE83C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r9,r10,65533
	ctx.r9.u64 = ctx.r10.u64 | 65533;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x826be86c
	if (cr6.lt) goto loc_826BE86C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3184
	ctx.r4.s64 = r11.s64 + 3184;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BE86C:
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

__attribute__((alias("__imp__sub_826BE880"))) PPC_WEAK_FUNC(sub_826BE880);
PPC_FUNC_IMPL(__imp__sub_826BE880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE884"))) PPC_WEAK_FUNC(sub_826BE884);
PPC_FUNC_IMPL(__imp__sub_826BE884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE888"))) PPC_WEAK_FUNC(sub_826BE888);
PPC_FUNC_IMPL(__imp__sub_826BE888) {
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
	// li r11,1
	r11.s64 = 1;
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r3,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r3.u32);
	// li r9,287
	ctx.r9.s64 = 287;
	// stw r5,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,68(r4)
	PPC_STORE_U8(ctx.r4.u32 + 68, ctx.r10.u8);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r8,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r8.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826be938
	if (cr6.eq) goto loc_826BE938;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826BE938:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BE954"))) PPC_WEAK_FUNC(sub_826BE954);
PPC_FUNC_IMPL(__imp__sub_826BE954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE958"))) PPC_WEAK_FUNC(sub_826BE958);
PPC_FUNC_IMPL(__imp__sub_826BE958) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826be994
	if (!cr6.eq) goto loc_826BE994;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826BE994:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826be9d0
	if (cr6.eq) goto loc_826BE9D0;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826be9d8
	goto loc_826BE9D8;
loc_826BE9D0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BE9D8:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826BE9F0"))) PPC_WEAK_FUNC(sub_826BE9F0);
PPC_FUNC_IMPL(__imp__sub_826BE9F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BE9F4"))) PPC_WEAK_FUNC(sub_826BE9F4);
PPC_FUNC_IMPL(__imp__sub_826BE9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BE9F8"))) PPC_WEAK_FUNC(sub_826BE9F8);
PPC_FUNC_IMPL(__imp__sub_826BE9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826BEA14:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x826bea2c
	if (!cr6.eq) goto loc_826BEA2C;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r5.u8);
loc_826BEA2C:
	// bdnz 0x826bea14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BEA14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BEA34"))) PPC_WEAK_FUNC(sub_826BEA34);
PPC_FUNC_IMPL(__imp__sub_826BEA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BEA38"))) PPC_WEAK_FUNC(sub_826BEA38);
PPC_FUNC_IMPL(__imp__sub_826BEA38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x828f1e68
	sub_828F1E68(ctx, base);
	// lbz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// li r29,46
	r29.s64 = 46;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826bea70
	if (cr6.eq) goto loc_826BEA70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// b 0x826bea74
	goto loc_826BEA74;
loc_826BEA70:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826BEA74:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
	// stb r9,68(r31)
	PPC_STORE_U8(r31.u32 + 68, ctx.r9.u8);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x826beab4
	if (cr6.eq) goto loc_826BEAB4;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826BEA98:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// bne cr6,0x826beab0
	if (!cr6.eq) goto loc_826BEAB0;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_826BEAB0:
	// bdnz 0x826bea98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BEA98;
loc_826BEAB4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826af7b8
	sub_826AF7B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826beb1c
	if (!cr6.eq) goto loc_826BEB1C;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826beb08
	if (cr6.eq) goto loc_826BEB08;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826BEAEC:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x826beb04
	if (!cr6.eq) goto loc_826BEB04;
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r29.u8);
loc_826BEB04:
	// bdnz 0x826beaec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BEAEC;
loc_826BEB08:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,284
	ctx.r5.s64 = 284;
	// addi r4,r11,3212
	ctx.r4.s64 = r11.s64 + 3212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be670
	sub_826BE670(ctx, base);
loc_826BEB1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BEB20"))) PPC_WEAK_FUNC(sub_826BEB20);
PPC_FUNC_IMPL(__imp__sub_826BEB20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BEB24"))) PPC_WEAK_FUNC(sub_826BEB24);
PPC_FUNC_IMPL(__imp__sub_826BEB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BEB28"))) PPC_WEAK_FUNC(sub_826BEB28);
PPC_FUNC_IMPL(__imp__sub_826BEB28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_826BEB3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826beb78
	if (cr6.eq) goto loc_826BEB78;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826beb80
	goto loc_826BEB80;
loc_826BEB78:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BEB80:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x828f16e0
	sub_828F16E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826beb3c
	if (!cr6.eq) goto loc_826BEB3C;
	// cmpwi cr6,r30,46
	cr6.compare<int32_t>(r30.s32, 46, xer);
	// beq cr6,0x826beb3c
	if (cr6.eq) goto loc_826BEB3C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3236
	ctx.r4.s64 = r11.s64 + 3236;
	// bl 0x826be958
	sub_826BE958(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826bebd0
	if (cr6.eq) goto loc_826BEBD0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3232
	ctx.r4.s64 = r11.s64 + 3232;
	// bl 0x826be958
	sub_826BE958(ctx, base);
loc_826BEBD0:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828f16e0
	sub_828F16E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + r11.u32);
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r9,r9,0,29,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826bebf8
	if (!cr6.eq) goto loc_826BEBF8;
	// cmpwi cr6,r30,95
	cr6.compare<int32_t>(r30.s32, 95, xer);
	// bne cr6,0x826bec48
	if (!cr6.eq) goto loc_826BEC48;
loc_826BEBF8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826bec38
	if (cr6.eq) goto loc_826BEC38;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x826bebd0
	goto loc_826BEBD0;
loc_826BEC38:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x826bebd0
	goto loc_826BEBD0;
loc_826BEC48:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x826bec88
	if (cr6.eq) goto loc_826BEC88;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826BEC70:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r8,46
	cr6.compare<uint32_t>(ctx.r8.u32, 46, xer);
	// bne cr6,0x826bec84
	if (!cr6.eq) goto loc_826BEC84;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_826BEC84:
	// bdnz 0x826bec70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826BEC70;
loc_826BEC88:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826af7b8
	sub_826AF7B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826becac
	if (!cr6.eq) goto loc_826BECAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bea38
	sub_826BEA38(ctx, base);
loc_826BECAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826BECB0"))) PPC_WEAK_FUNC(sub_826BECB0);
PPC_FUNC_IMPL(__imp__sub_826BECB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826BECB4"))) PPC_WEAK_FUNC(sub_826BECB4);
PPC_FUNC_IMPL(__imp__sub_826BECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BECB8"))) PPC_WEAK_FUNC(sub_826BECB8);
PPC_FUNC_IMPL(__imp__sub_826BECB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// beq cr6,0x826bed14
	if (cr6.eq) goto loc_826BED14;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826bed1c
	goto loc_826BED1C;
loc_826BED14:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BED1C:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,61
	cr6.compare<int32_t>(ctx.r3.s32, 61, xer);
	// bne cr6,0x826bee38
	if (!cr6.eq) goto loc_826BEE38;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// ori r24,r9,65534
	r24.u64 = ctx.r9.u64 | 65534;
	// li r27,-3
	r27.s64 = -3;
	// addi r26,r11,1356
	r26.s64 = r11.s64 + 1356;
	// addi r25,r10,3128
	r25.s64 = ctx.r10.s64 + 3128;
loc_826BED44:
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x826bedd4
	if (!cr6.gt) goto loc_826BEDD4;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// blt cr6,0x826beda0
	if (cr6.lt) goto loc_826BEDA0;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x826afc28
	sub_826AFC28(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
loc_826BEDA0:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x826bedc8
	if (cr6.gt) goto loc_826BEDC8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826b9a48
	sub_826B9A48(ctx, base);
	// b 0x826bedcc
	goto loc_826BEDCC;
loc_826BEDC8:
	// bl 0x826b9a18
	sub_826B9A18(ctx, base);
loc_826BEDCC:
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
loc_826BEDD4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r28.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// beq cr6,0x826bee1c
	if (cr6.eq) goto loc_826BEE1C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x826bee24
	goto loc_826BEE24;
loc_826BEE1C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BEE24:
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// beq cr6,0x826bed44
	if (cr6.eq) goto loc_826BED44;
loc_826BEE38:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// beq cr6,0x826bee4c
	if (cr6.eq) goto loc_826BEE4C;
	// subfic r31,r23,-1
	xer.ca = r23.u32 <= 4294967295;
	r31.s64 = -1 - r23.s64;
loc_826BEE4C:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_826BEE5C"))) PPC_WEAK_FUNC(sub_826BEE5C);
PPC_FUNC_IMPL(__imp__sub_826BEE5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_826BEE60"))) PPC_WEAK_FUNC(sub_826BEE60);
PPC_FUNC_IMPL(__imp__sub_826BEE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// beq cr6,0x826beebc
	if (cr6.eq) goto loc_826BEEBC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826beec4
	goto loc_826BEEC4;
loc_826BEEBC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BEEC4:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x826beed8
	if (cr6.eq) goto loc_826BEED8;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x826beee0
	if (!cr6.eq) goto loc_826BEEE0;
loc_826BEED8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be790
	sub_826BE790(ctx, base);
loc_826BEEE0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// li r22,0
	r22.s64 = 0;
	// addi r29,r11,3000
	r29.s64 = r11.s64 + 3000;
	// addi r28,r10,3168
	r28.s64 = ctx.r10.s64 + 3168;
	// addi r27,r9,1356
	r27.s64 = ctx.r9.s64 + 1356;
	// addi r26,r8,3288
	r26.s64 = ctx.r8.s64 + 3288;
	// addi r25,r7,3264
	r25.s64 = ctx.r7.s64 + 3264;
	// addi r24,r6,3240
	r24.s64 = ctx.r6.s64 + 3240;
loc_826BEF14:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bgt cr6,0x826befbc
	if (cr6.gt) goto loc_826BEFBC;
	// beq cr6,0x826bef34
	if (cr6.eq) goto loc_826BEF34;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x826bef5c
	if (cr6.eq) goto loc_826BEF5C;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bne cr6,0x826befcc
	if (!cr6.eq) goto loc_826BEFCC;
loc_826BEF34:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be790
	sub_826BE790(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x826bef14
	if (!cr6.eq) goto loc_826BEF14;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r22,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r22.u32);
	// b 0x826bef14
	goto loc_826BEF14;
loc_826BEF5C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bne cr6,0x826bef6c
	if (!cr6.eq) goto loc_826BEF6C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_826BEF6C:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x826afc28
	sub_826AFC28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,120(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826afbd8
	sub_826AFBD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x826b0b38
	sub_826B0B38(ctx, base);
	// b 0x826bef14
	goto loc_826BEF14;
loc_826BEFBC:
	// cmpwi cr6,r4,91
	cr6.compare<int32_t>(ctx.r4.s32, 91, xer);
	// beq cr6,0x826bf06c
	if (cr6.eq) goto loc_826BF06C;
	// cmpwi cr6,r4,93
	cr6.compare<int32_t>(ctx.r4.s32, 93, xer);
	// beq cr6,0x826bf020
	if (cr6.eq) goto loc_826BF020;
loc_826BEFCC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x826befdc
	if (cr6.eq) goto loc_826BEFDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be450
	sub_826BE450(ctx, base);
loc_826BEFDC:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826bf010
	if (cr6.eq) goto loc_826BF010;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x826bef14
	goto loc_826BEF14;
loc_826BF010:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x826bef14
	goto loc_826BEF14;
loc_826BF020:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826becb8
	sub_826BECB8(ctx, base);
	// cmpw cr6,r3,r23
	cr6.compare<int32_t>(ctx.r3.s32, r23.s32, xer);
	// bne cr6,0x826bef14
	if (!cr6.eq) goto loc_826BEF14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826bf0e0
	if (cr6.eq) goto loc_826BF0E0;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826bf0e8
	goto loc_826BF0E8;
loc_826BF06C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826becb8
	sub_826BECB8(ctx, base);
	// cmpw cr6,r3,r23
	cr6.compare<int32_t>(ctx.r3.s32, r23.s32, xer);
	// bne cr6,0x826bef14
	if (!cr6.eq) goto loc_826BEF14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826be450
	sub_826BE450(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826bf0b8
	if (cr6.eq) goto loc_826BF0B8;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x826bf0c0
	goto loc_826BF0C0;
loc_826BF0B8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BF0C0:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x826bef14
	if (!cr6.eq) goto loc_826BEF14;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,91
	ctx.r5.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be670
	sub_826BE670(ctx, base);
	// b 0x826bef14
	goto loc_826BEF14;
loc_826BF0E0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x826b8f38
	sub_826B8F38(ctx, base);
loc_826BF0E8:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x826bf120
	if (cr6.eq) goto loc_826BF120;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r23,r11
	r11.u64 = r23.u64 + r11.u64;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// bl 0x826be718
	sub_826BE718(ctx, base);
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
loc_826BF120:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

