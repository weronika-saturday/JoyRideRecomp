#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826C32D8"))) PPC_WEAK_FUNC(sub_826C32D8);
PPC_FUNC_IMPL(__imp__sub_826C32D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3300"))) PPC_WEAK_FUNC(sub_826C3300);
PPC_FUNC_IMPL(__imp__sub_826C3300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c333c
	if (cr6.eq) goto loc_826C333C;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c3328
	if (cr6.eq) goto loc_826C3328;
loc_826C3318:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3318
	if (!cr6.eq) goto loc_826C3318;
loc_826C3328:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_826C333C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3344"))) PPC_WEAK_FUNC(sub_826C3344);
PPC_FUNC_IMPL(__imp__sub_826C3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C3348"))) PPC_WEAK_FUNC(sub_826C3348);
PPC_FUNC_IMPL(__imp__sub_826C3348) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826c3408
	if (cr6.eq) goto loc_826C3408;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x826c3390
	if (!cr6.eq) goto loc_826C3390;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c338c
	if (cr6.eq) goto loc_826C338C;
loc_826C3380:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c3380
	if (!cr6.eq) goto loc_826C3380;
loc_826C338C:
	// subf r29,r31,r11
	r29.s64 = r11.s64 - r31.s64;
loc_826C3390:
	// lwz r30,24(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826c33f0
	if (cr6.eq) goto loc_826C33F0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r28,r11,13368
	r28.s64 = r11.s64 + 13368;
loc_826C33A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c33b8
	if (cr6.eq) goto loc_826C33B8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x826c33bc
	goto loc_826C33BC;
loc_826C33B8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826C33BC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c33c8
	if (!cr6.eq) goto loc_826C33C8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_826C33C8:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826c20e8
	sub_826C20E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c33fc
	if (!cr6.eq) goto loc_826C33FC;
	// lwz r30,44(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826c33a4
	if (!cr6.eq) goto loc_826C33A4;
loc_826C33F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826C33FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826C3408:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C3410"))) PPC_WEAK_FUNC(sub_826C3410);
PPC_FUNC_IMPL(__imp__sub_826C3410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C3414"))) PPC_WEAK_FUNC(sub_826C3414);
PPC_FUNC_IMPL(__imp__sub_826C3414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C3418"))) PPC_WEAK_FUNC(sub_826C3418);
PPC_FUNC_IMPL(__imp__sub_826C3418) {
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
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c3458
	if (cr6.eq) goto loc_826C3458;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c3444
	if (!cr6.eq) goto loc_826C3444;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,13368
	r11.s64 = r11.s64 + 13368;
loc_826C3444:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826C3458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C3468"))) PPC_WEAK_FUNC(sub_826C3468);
PPC_FUNC_IMPL(__imp__sub_826C3468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C346C"))) PPC_WEAK_FUNC(sub_826C346C);
PPC_FUNC_IMPL(__imp__sub_826C346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C3470"))) PPC_WEAK_FUNC(sub_826C3470);
PPC_FUNC_IMPL(__imp__sub_826C3470) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826c3530
	if (cr6.eq) goto loc_826C3530;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x826c34b8
	if (!cr6.eq) goto loc_826C34B8;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c34b4
	if (cr6.eq) goto loc_826C34B4;
loc_826C34A8:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c34a8
	if (!cr6.eq) goto loc_826C34A8;
loc_826C34B4:
	// subf r29,r31,r11
	r29.s64 = r11.s64 - r31.s64;
loc_826C34B8:
	// lwz r30,28(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826c3518
	if (cr6.eq) goto loc_826C3518;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r28,r11,13368
	r28.s64 = r11.s64 + 13368;
loc_826C34CC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c34e0
	if (cr6.eq) goto loc_826C34E0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x826c34e4
	goto loc_826C34E4;
loc_826C34E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826C34E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c34f0
	if (!cr6.eq) goto loc_826C34F0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_826C34F0:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826c20e8
	sub_826C20E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c3524
	if (!cr6.eq) goto loc_826C3524;
	// lwz r30,40(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826c34cc
	if (!cr6.eq) goto loc_826C34CC;
loc_826C3518:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826C3524:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826C3530:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C3538"))) PPC_WEAK_FUNC(sub_826C3538);
PPC_FUNC_IMPL(__imp__sub_826C3538) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C353C"))) PPC_WEAK_FUNC(sub_826C353C);
PPC_FUNC_IMPL(__imp__sub_826C353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C3540"))) PPC_WEAK_FUNC(sub_826C3540);
PPC_FUNC_IMPL(__imp__sub_826C3540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c356c
	if (cr6.eq) goto loc_826C356C;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r4.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// blr 
	return;
loc_826C356C:
	// stw r10,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r10.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3584"))) PPC_WEAK_FUNC(sub_826C3584);
PPC_FUNC_IMPL(__imp__sub_826C3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C3588"))) PPC_WEAK_FUNC(sub_826C3588);
PPC_FUNC_IMPL(__imp__sub_826C3588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826c35b8
	if (cr6.eq) goto loc_826C35B8;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r4.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
	// blr 
	return;
loc_826C35B8:
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, r11.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
}

__attribute__((alias("__imp__sub_826C35CC"))) PPC_WEAK_FUNC(sub_826C35CC);
PPC_FUNC_IMPL(__imp__sub_826C35CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C35D0"))) PPC_WEAK_FUNC(sub_826C35D0);
PPC_FUNC_IMPL(__imp__sub_826C35D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x826c361c
	if (!cr6.eq) goto loc_826C361C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c3604
	if (cr6.eq) goto loc_826C3604;
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r5,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r5.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_826C3604:
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_826C361C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826c3668
	if (!cr6.eq) goto loc_826C3668;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c3650
	if (cr6.eq) goto loc_826C3650;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, r11.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r5,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r5.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_826C3650:
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
loc_826C3668:
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r4,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r4.u32);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, r11.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// stw r5,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r5.u32);
	// stw r3,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C3688"))) PPC_WEAK_FUNC(sub_826C3688);
PPC_FUNC_IMPL(__imp__sub_826C3688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c36b0
	if (cr6.eq) goto loc_826C36B0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826C3698:
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c3698
	if (!cr6.eq) goto loc_826C3698;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_826C36B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C36BC"))) PPC_WEAK_FUNC(sub_826C36BC);
PPC_FUNC_IMPL(__imp__sub_826C36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C36C0"))) PPC_WEAK_FUNC(sub_826C36C0);
PPC_FUNC_IMPL(__imp__sub_826C36C0) {
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
	// rlwinm r11,r5,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r30,r11,7100
	r30.s64 = r11.s64 + 7100;
	// bne cr6,0x826c374c
	if (!cr6.eq) goto loc_826C374C;
loc_826C36EC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x826c3718
	if (!cr6.eq) goto loc_826C3718;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x826c3718
	if (!cr6.eq) goto loc_826C3718;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c3738
	if (cr6.eq) goto loc_826C3738;
loc_826C3718:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3728
	if (!cr6.eq) goto loc_826C3728;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C3728:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x826c36ec
	goto loc_826C36EC;
loc_826C3738:
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826C374C:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_826C3750:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x826c377c
	if (!cr6.eq) goto loc_826C377C;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x826c377c
	if (!cr6.eq) goto loc_826C377C;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c379c
	if (cr6.eq) goto loc_826C379C;
loc_826C377C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c378c
	if (!cr6.eq) goto loc_826C378C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C378C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x826c3750
	goto loc_826C3750;
loc_826C379C:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x826c37d4
	if (cr6.eq) goto loc_826C37D4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x826c37d8
	goto loc_826C37D8;
loc_826C37D4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_826C37D8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r27,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// bne cr6,0x826c37fc
	if (!cr6.eq) goto loc_826C37FC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
loc_826C37FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C380C"))) PPC_WEAK_FUNC(sub_826C380C);
PPC_FUNC_IMPL(__imp__sub_826C380C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C3810"))) PPC_WEAK_FUNC(sub_826C3810);
PPC_FUNC_IMPL(__imp__sub_826C3810) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x826c38d8
	if (cr6.eq) goto loc_826C38D8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r11,7100
	r29.s64 = r11.s64 + 7100;
loc_826C3844:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c38b4
	if (cr6.eq) goto loc_826C38B4;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x826c38bc
	if (!cr6.eq) goto loc_826C38BC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r30,1
	r30.s64 = 1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
loc_826C3868:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c3894
	if (cr6.eq) goto loc_826C3894;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// beq cr6,0x826c388c
	if (cr6.eq) goto loc_826C388C;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x826c389c
	if (!cr6.eq) goto loc_826C389C;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// b 0x826c389c
	goto loc_826C389C;
loc_826C388C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x826c389c
	goto loc_826C389C;
loc_826C3894:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C389C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// bgt cr6,0x826c3868
	if (cr6.gt) goto loc_826C3868;
	// b 0x826c38c8
	goto loc_826C38C8;
loc_826C38B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C38BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826C38C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// bne cr6,0x826c3844
	if (!cr6.eq) goto loc_826C3844;
loc_826C38D8:
	// rlwinm r11,r26,0,24,24
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c3958
	if (cr6.eq) goto loc_826C3958;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x826c391c
	if (cr6.eq) goto loc_826C391C;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x826c3920
	goto loc_826C3920;
loc_826C391C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_826C3920:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r26,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// subf r8,r27,r10
	ctx.r8.s64 = ctx.r10.s64 - r27.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// bne cr6,0x826c395c
	if (!cr6.eq) goto loc_826C395C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826C3958:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826C395C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826C396C"))) PPC_WEAK_FUNC(sub_826C396C);
PPC_FUNC_IMPL(__imp__sub_826C396C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826C3970"))) PPC_WEAK_FUNC(sub_826C3970);
PPC_FUNC_IMPL(__imp__sub_826C3970) {
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
	// rlwinm r11,r5,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c3b40
	if (cr6.eq) goto loc_826C3B40;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x826c39cc
	if (cr6.eq) goto loc_826C39CC;
	// li r11,7
	r11.s64 = 7;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r26.u32);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// b 0x826c39d0
	goto loc_826C39D0;
loc_826C39CC:
	// mr r28,r26
	r28.u64 = r26.u64;
loc_826C39D0:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,4232
	r11.s64 = r11.s64 + 4232;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c3a00
	if (cr6.eq) goto loc_826C3A00;
loc_826C39F0:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c39f0
	if (!cr6.eq) goto loc_826C39F0;
loc_826C3A00:
	// stw r4,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r4.u32);
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// bne cr6,0x826c3a18
	if (!cr6.eq) goto loc_826C3A18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7124
	ctx.r3.s64 = r11.s64 + 7124;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C3A18:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - r31.s64;
	// addi r11,r11,3976
	r11.s64 = r11.s64 + 3976;
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826c3a54
	if (cr6.eq) goto loc_826C3A54;
loc_826C3A44:
	// lbzu r10,1(r31)
	ea = 1 + r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c3a44
	if (!cr6.eq) goto loc_826C3A44;
loc_826C3A54:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r11,7100
	r30.s64 = r11.s64 + 7100;
loc_826C3A60:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bne cr6,0x826c3a80
	if (!cr6.eq) goto loc_826C3A80;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c3aa0
	if (cr6.eq) goto loc_826C3AA0;
loc_826C3A80:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3a90
	if (!cr6.eq) goto loc_826C3A90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C3A90:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x826c3a60
	goto loc_826C3A60;
loc_826C3AA0:
	// subf r11,r31,r4
	r11.s64 = ctx.r4.s64 - r31.s64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// rlwinm r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826c3b28
	if (!cr6.eq) goto loc_826C3B28;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r9,r10,13368
	ctx.r9.s64 = ctx.r10.s64 + 13368;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x826c3ad8
	if (!cr6.eq) goto loc_826C3AD8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// beq cr6,0x826c3ae0
	if (cr6.eq) goto loc_826C3AE0;
loc_826C3AD8:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// b 0x826c3ae4
	goto loc_826C3AE4;
loc_826C3AE0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_826C3AE4:
	// stbx r26,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r26.u8);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x826c3b00
	if (!cr6.eq) goto loc_826C3B00;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// beq cr6,0x826c3b20
	if (cr6.eq) goto loc_826C3B20;
loc_826C3B00:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stbx r26,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r26.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826C3B20:
	// mr r11,r26
	r11.u64 = r26.u64;
	// stbx r26,r26,r10
	PPC_STORE_U8(r26.u32 + ctx.r10.u32, r26.u8);
loc_826C3B28:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826C3B40:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r31,r11,7100
	r31.s64 = r11.s64 + 7100;
loc_826C3B48:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bne cr6,0x826c3b68
	if (!cr6.eq) goto loc_826C3B68;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c3b88
	if (cr6.eq) goto loc_826C3B88;
loc_826C3B68:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3b78
	if (!cr6.eq) goto loc_826C3B78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C3B78:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x826c3b48
	goto loc_826C3B48;
loc_826C3B88:
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826C3B98"))) PPC_WEAK_FUNC(sub_826C3B98);
PPC_FUNC_IMPL(__imp__sub_826C3B98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826C3B9C"))) PPC_WEAK_FUNC(sub_826C3B9C);
PPC_FUNC_IMPL(__imp__sub_826C3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C3BA0"))) PPC_WEAK_FUNC(sub_826C3BA0);
PPC_FUNC_IMPL(__imp__sub_826C3BA0) {
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
	// clrlwi r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r30,r11,7100
	r30.s64 = r11.s64 + 7100;
	// beq cr6,0x826c3c2c
	if (cr6.eq) goto loc_826C3C2C;
loc_826C3BCC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// bne cr6,0x826c3bf8
	if (!cr6.eq) goto loc_826C3BF8;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// bne cr6,0x826c3bf8
	if (!cr6.eq) goto loc_826C3BF8;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c3c18
	if (cr6.eq) goto loc_826C3C18;
loc_826C3BF8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3c08
	if (!cr6.eq) goto loc_826C3C08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C3C08:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x826c3bcc
	goto loc_826C3BCC;
loc_826C3C18:
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826C3C2C:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_826C3C30:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// bne cr6,0x826c3c5c
	if (!cr6.eq) goto loc_826C3C5C;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,93
	cr6.compare<uint32_t>(ctx.r10.u32, 93, xer);
	// bne cr6,0x826c3c5c
	if (!cr6.eq) goto loc_826C3C5C;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c3c7c
	if (cr6.eq) goto loc_826C3C7C;
loc_826C3C5C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3c6c
	if (!cr6.eq) goto loc_826C3C6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C3C6C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x826c3c30
	goto loc_826C3C30;
loc_826C3C7C:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x826c3cb4
	if (cr6.eq) goto loc_826C3CB4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x826c3cb8
	goto loc_826C3CB8;
loc_826C3CB4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_826C3CB8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r27,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// bne cr6,0x826c3cdc
	if (!cr6.eq) goto loc_826C3CDC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
loc_826C3CDC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C3CEC"))) PPC_WEAK_FUNC(sub_826C3CEC);
PPC_FUNC_IMPL(__imp__sub_826C3CEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C3CF0"))) PPC_WEAK_FUNC(sub_826C3CF0);
PPC_FUNC_IMPL(__imp__sub_826C3CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r18,r4,0,28,28
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x826c3d60
	if (cr6.eq) goto loc_826C3D60;
	// rlwinm r11,r4,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3d60
	if (!cr6.eq) goto loc_826C3D60;
	// rlwinm r11,r4,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c3d60
	if (!cr6.eq) goto loc_826C3D60;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,4488
	r11.s64 = r11.s64 + 4488;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c3d54
	if (cr6.eq) goto loc_826C3D54;
loc_826C3D44:
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c3d44
	if (!cr6.eq) goto loc_826C3D44;
loc_826C3D54:
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9440
	return;
loc_826C3D60:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,5000
	r11.s64 = r11.s64 + 5000;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c3d8c
	if (cr6.eq) goto loc_826C3D8C;
loc_826C3D7C:
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c3d7c
	if (!cr6.eq) goto loc_826C3D7C;
loc_826C3D8C:
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r21,r11,4488
	r21.s64 = r11.s64 + 4488;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r21.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c4034
	if (cr6.eq) goto loc_826C4034;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r22,38
	r22.s64 = 38;
	// li r23,39
	r23.s64 = 39;
	// li r24,62
	r24.s64 = 62;
	// li r25,34
	r25.s64 = 34;
	// li r26,60
	r26.s64 = 60;
	// li r27,32
	r27.s64 = 32;
	// addi r29,r9,3976
	r29.s64 = ctx.r9.s64 + 3976;
	// addi r28,r10,7144
	r28.s64 = ctx.r10.s64 + 7144;
	// addi r30,r11,6536
	r30.s64 = r11.s64 + 6536;
loc_826C3DE0:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bgt cr6,0x826c3f54
	if (cr6.gt) goto loc_826C3F54;
	// beq cr6,0x826c3f30
	if (cr6.eq) goto loc_826C3F30;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// beq cr6,0x826c3e80
	if (cr6.eq) goto loc_826C3E80;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x826c3e48
	if (!cr6.eq) goto loc_826C3E48;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r10,112
	cr6.compare<uint32_t>(ctx.r10.u32, 112, xer);
	// bne cr6,0x826c3e48
	if (!cr6.eq) goto loc_826C3E48;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r10,59
	cr6.compare<uint32_t>(ctx.r10.u32, 59, xer);
	// bne cr6,0x826c3e48
	if (!cr6.eq) goto loc_826C3E48;
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r22.u8);
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// b 0x826c401c
	goto loc_826C401C;
loc_826C3E48:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c401c
	goto loc_826C401C;
loc_826C3E80:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// bne cr6,0x826c3ec0
	if (!cr6.eq) goto loc_826C3EC0;
	// lbzu r11,3(r31)
	ea = 3 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c3ef8
	if (cr6.eq) goto loc_826C3EF8;
loc_826C3EA0:
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x826c3ea0
	if (!cr6.eq) goto loc_826C3EA0;
	// b 0x826c3ef8
	goto loc_826C3EF8;
loc_826C3EC0:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c3ef8
	if (cr6.eq) goto loc_826C3EF8;
loc_826C3ED4:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x826c3ed4
	if (!cr6.eq) goto loc_826C3ED4;
loc_826C3EF8:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826c2d58
	sub_826C2D58(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c3f1c
	if (!cr6.eq) goto loc_826C3F1C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826c4024
	goto loc_826C4024;
loc_826C3F1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826c4024
	goto loc_826C4024;
loc_826C3F30:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r24.u8);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c401c
	goto loc_826C401C;
loc_826C3F54:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// beq cr6,0x826c3fa0
	if (cr6.eq) goto loc_826C3FA0;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(r11.u32, 113, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r25.u8);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c401c
	goto loc_826C401C;
loc_826C3FA0:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c3fc4
	if (!cr6.eq) goto loc_826C3FC4;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c401c
	goto loc_826C401C;
loc_826C3FC4:
	// rlwinm r11,r20,0,20,20
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c4010
	if (cr6.eq) goto loc_826C4010;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c4010
	if (cr6.eq) goto loc_826C4010;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r27.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c4024
	if (cr6.eq) goto loc_826C4024;
loc_826C3FFC:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c3ffc
	if (!cr6.eq) goto loc_826C3FFC;
	// b 0x826c4024
	goto loc_826C4024;
loc_826C4010:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_826C401C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_826C4024:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r21.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c3de0
	if (!cr6.eq) goto loc_826C3DE0;
loc_826C4034:
	// stw r31,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826C403C"))) PPC_WEAK_FUNC(sub_826C403C);
PPC_FUNC_IMPL(__imp__sub_826C403C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_826C4040"))) PPC_WEAK_FUNC(sub_826C4040);
PPC_FUNC_IMPL(__imp__sub_826C4040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r18,r4,0,28,28
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x826c40b0
	if (cr6.eq) goto loc_826C40B0;
	// rlwinm r11,r4,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c40b0
	if (!cr6.eq) goto loc_826C40B0;
	// rlwinm r11,r4,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c40b0
	if (!cr6.eq) goto loc_826C40B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,4488
	r11.s64 = r11.s64 + 4488;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c40a4
	if (cr6.eq) goto loc_826C40A4;
loc_826C4094:
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c4094
	if (!cr6.eq) goto loc_826C4094;
loc_826C40A4:
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9440
	return;
loc_826C40B0:
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,4744
	r11.s64 = r11.s64 + 4744;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c40dc
	if (cr6.eq) goto loc_826C40DC;
loc_826C40CC:
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c40cc
	if (!cr6.eq) goto loc_826C40CC;
loc_826C40DC:
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r21,r11,4488
	r21.s64 = r11.s64 + 4488;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r21.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c4384
	if (cr6.eq) goto loc_826C4384;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r22,38
	r22.s64 = 38;
	// li r23,39
	r23.s64 = 39;
	// li r24,62
	r24.s64 = 62;
	// li r25,34
	r25.s64 = 34;
	// li r26,60
	r26.s64 = 60;
	// li r27,32
	r27.s64 = 32;
	// addi r29,r9,3976
	r29.s64 = ctx.r9.s64 + 3976;
	// addi r28,r10,7144
	r28.s64 = ctx.r10.s64 + 7144;
	// addi r30,r11,6536
	r30.s64 = r11.s64 + 6536;
loc_826C4130:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bgt cr6,0x826c42a4
	if (cr6.gt) goto loc_826C42A4;
	// beq cr6,0x826c4280
	if (cr6.eq) goto loc_826C4280;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// beq cr6,0x826c41d0
	if (cr6.eq) goto loc_826C41D0;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x826c4198
	if (!cr6.eq) goto loc_826C4198;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r10,112
	cr6.compare<uint32_t>(ctx.r10.u32, 112, xer);
	// bne cr6,0x826c4198
	if (!cr6.eq) goto loc_826C4198;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r10,59
	cr6.compare<uint32_t>(ctx.r10.u32, 59, xer);
	// bne cr6,0x826c4198
	if (!cr6.eq) goto loc_826C4198;
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r22.u8);
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// b 0x826c436c
	goto loc_826C436C;
loc_826C4198:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c436c
	goto loc_826C436C;
loc_826C41D0:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// bne cr6,0x826c4210
	if (!cr6.eq) goto loc_826C4210;
	// lbzu r11,3(r31)
	ea = 3 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c4248
	if (cr6.eq) goto loc_826C4248;
loc_826C41F0:
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x826c41f0
	if (!cr6.eq) goto loc_826C41F0;
	// b 0x826c4248
	goto loc_826C4248;
loc_826C4210:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c4248
	if (cr6.eq) goto loc_826C4248;
loc_826C4224:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x826c4224
	if (!cr6.eq) goto loc_826C4224;
loc_826C4248:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826c2d58
	sub_826C2D58(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c426c
	if (!cr6.eq) goto loc_826C426C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826c4374
	goto loc_826C4374;
loc_826C426C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826c4374
	goto loc_826C4374;
loc_826C4280:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r24.u8);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c436c
	goto loc_826C436C;
loc_826C42A4:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// beq cr6,0x826c42f0
	if (cr6.eq) goto loc_826C42F0;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(r11.u32, 113, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r25.u8);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c436c
	goto loc_826C436C;
loc_826C42F0:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4314
	if (!cr6.eq) goto loc_826C4314;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c436c
	goto loc_826C436C;
loc_826C4314:
	// rlwinm r11,r20,0,20,20
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c4360
	if (cr6.eq) goto loc_826C4360;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c4360
	if (cr6.eq) goto loc_826C4360;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r27.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c4374
	if (cr6.eq) goto loc_826C4374;
loc_826C434C:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c434c
	if (!cr6.eq) goto loc_826C434C;
	// b 0x826c4374
	goto loc_826C4374;
loc_826C4360:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
loc_826C436C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_826C4374:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lbzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r21.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c4130
	if (!cr6.eq) goto loc_826C4130;
loc_826C4384:
	// stw r31,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826C438C"))) PPC_WEAK_FUNC(sub_826C438C);
PPC_FUNC_IMPL(__imp__sub_826C438C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_826C4390"))) PPC_WEAK_FUNC(sub_826C4390);
PPC_FUNC_IMPL(__imp__sub_826C4390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,5768
	ctx.r10.s64 = ctx.r10.s64 + 5768;
loc_826C439C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826c43b4
	if (cr6.eq) goto loc_826C43B4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x826c439c
	goto loc_826C439C;
loc_826C43B4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C43BC"))) PPC_WEAK_FUNC(sub_826C43BC);
PPC_FUNC_IMPL(__imp__sub_826C43BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C43C0"))) PPC_WEAK_FUNC(sub_826C43C0);
PPC_FUNC_IMPL(__imp__sub_826C43C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,6280
	ctx.r10.s64 = ctx.r10.s64 + 6280;
loc_826C43CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826c43e4
	if (cr6.eq) goto loc_826C43E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x826c43cc
	goto loc_826C43CC;
loc_826C43E4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C43EC"))) PPC_WEAK_FUNC(sub_826C43EC);
PPC_FUNC_IMPL(__imp__sub_826C43EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C43F0"))) PPC_WEAK_FUNC(sub_826C43F0);
PPC_FUNC_IMPL(__imp__sub_826C43F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stwx r10,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C442C"))) PPC_WEAK_FUNC(sub_826C442C);
PPC_FUNC_IMPL(__imp__sub_826C442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C4430"))) PPC_WEAK_FUNC(sub_826C4430);
PPC_FUNC_IMPL(__imp__sub_826C4430) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826c44a0
	if (cr6.eq) goto loc_826C44A0;
	// lwz r11,32(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4470
	if (cr6.eq) goto loc_826C4470;
loc_826C4460:
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c4460
	if (!cr6.eq) goto loc_826C4460;
loc_826C4470:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r28,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4490
	if (cr6.eq) goto loc_826C4490;
loc_826C4480:
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c4480
	if (!cr6.eq) goto loc_826C4480;
loc_826C4490:
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x826c44e0
	goto loc_826C44E0;
loc_826C44A0:
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r31,20(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x826c44dc
	if (cr6.eq) goto loc_826C44DC;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// b 0x826c44e0
	goto loc_826C44E0;
loc_826C44DC:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_826C44E0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c44f4
	if (cr6.eq) goto loc_826C44F4;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x826c44f8
	goto loc_826C44F8;
loc_826C44F4:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_826C44F8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r27,r10,13368
	r27.s64 = ctx.r10.s64 + 13368;
	// bne cr6,0x826c450c
	if (!cr6.eq) goto loc_826C450C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826C450C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4528
	if (cr6.eq) goto loc_826C4528;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// b 0x826c452c
	goto loc_826C452C;
loc_826C4528:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_826C452C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c4538
	if (!cr6.eq) goto loc_826C4538;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826C4538:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r30,24(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826c459c
	if (cr6.eq) goto loc_826C459C;
loc_826C454C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c4430
	sub_826C4430(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c457c
	if (cr6.eq) goto loc_826C457C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// b 0x826c4584
	goto loc_826C4584;
loc_826C457C:
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r28.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_826C4584:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r28,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r28.u32);
	// lwz r30,44(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826c454c
	if (!cr6.eq) goto loc_826C454C;
loc_826C459C:
	// lwz r30,32(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826c4644
	if (cr6.eq) goto loc_826C4644;
loc_826C45A8:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826c45bc
	if (cr6.eq) goto loc_826C45BC;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x826c45c0
	goto loc_826C45C0;
loc_826C45BC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_826C45C0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826c45d4
	if (cr6.eq) goto loc_826C45D4;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x826c45d8
	goto loc_826C45D8;
loc_826C45D4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_826C45D8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x826c45e4
	if (!cr6.eq) goto loc_826C45E4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_826C45E4:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826c45f0
	if (!cr6.eq) goto loc_826C45F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_826C45F0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c3168
	sub_826C3168(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c4618
	if (cr6.eq) goto loc_826C4618;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// b 0x826c4620
	goto loc_826C4620;
loc_826C4618:
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_826C4620:
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4644
	if (cr6.eq) goto loc_826C4644;
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826c45a8
	if (!cr6.eq) goto loc_826C45A8;
loc_826C4644:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826C464C"))) PPC_WEAK_FUNC(sub_826C464C);
PPC_FUNC_IMPL(__imp__sub_826C464C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826C4650"))) PPC_WEAK_FUNC(sub_826C4650);
PPC_FUNC_IMPL(__imp__sub_826C4650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x826c46b4
	if (cr6.eq) goto loc_826C46B4;
	// addis r28,r3,1
	r28.s64 = ctx.r3.s64 + 65536;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
loc_826C4678:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// neg r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// lwzx r30,r9,r3
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// beq cr6,0x826c46a0
	if (cr6.eq) goto loc_826C46A0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826c46a4
	goto loc_826C46A4;
loc_826C46A0:
	// bl 0x8241a2e8
	sub_8241A2E8(ctx, base);
loc_826C46A4:
	// rotlwi r11,r30,0
	r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x826c4678
	if (!cr6.eq) goto loc_826C4678;
loc_826C46B4:
	// neg r11,r29
	r11.s64 = -r29.s64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C46D8"))) PPC_WEAK_FUNC(sub_826C46D8);
PPC_FUNC_IMPL(__imp__sub_826C46D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826C46DC"))) PPC_WEAK_FUNC(sub_826C46DC);
PPC_FUNC_IMPL(__imp__sub_826C46DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C46E0"))) PPC_WEAK_FUNC(sub_826C46E0);
PPC_FUNC_IMPL(__imp__sub_826C46E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c472c
	if (cr6.eq) goto loc_826C472C;
loc_826C471C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c471c
	if (!cr6.eq) goto loc_826C471C;
loc_826C472C:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x826c4430
	sub_826C4430(ctx, base);
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

__attribute__((alias("__imp__sub_826C475C"))) PPC_WEAK_FUNC(sub_826C475C);
PPC_FUNC_IMPL(__imp__sub_826C475C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C4760"))) PPC_WEAK_FUNC(sub_826C4760);
PPC_FUNC_IMPL(__imp__sub_826C4760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c4784
	if (cr6.eq) goto loc_826C4784;
loc_826C4774:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c4774
	if (!cr6.eq) goto loc_826C4774;
loc_826C4784:
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addic r9,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r9.s64 = r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// b 0x826c4430
	sub_826C4430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C479C"))) PPC_WEAK_FUNC(sub_826C479C);
PPC_FUNC_IMPL(__imp__sub_826C479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C47A0"))) PPC_WEAK_FUNC(sub_826C47A0);
PPC_FUNC_IMPL(__imp__sub_826C47A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c47c4
	if (cr6.eq) goto loc_826C47C4;
loc_826C47B4:
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c47b4
	if (!cr6.eq) goto loc_826C47B4;
loc_826C47C4:
	// lwz r11,32(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c47e4
	if (cr6.eq) goto loc_826C47E4;
loc_826C47D4:
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c47d4
	if (!cr6.eq) goto loc_826C47D4;
loc_826C47E4:
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// addi r3,r9,48
	ctx.r3.s64 = ctx.r9.s64 + 48;
	// b 0x826c4650
	sub_826C4650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C47F0"))) PPC_WEAK_FUNC(sub_826C47F0);
PPC_FUNC_IMPL(__imp__sub_826C47F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r7,0,21,21
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x826c481c
	if (!cr6.eq) goto loc_826C481C;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
loc_826C481C:
	// rlwinm r31,r27,0,20,20
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	// lwz r24,0(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// beq cr6,0x826c483c
	if (cr6.eq) goto loc_826C483C;
	// bl 0x826c3cf0
	sub_826C3CF0(ctx, base);
	// b 0x826c4840
	goto loc_826C4840;
loc_826C483C:
	// bl 0x826c4040
	sub_826C4040(ctx, base);
loc_826C4840:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x826c4898
	if (cr6.eq) goto loc_826C4898;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x826c4868
	if (cr6.eq) goto loc_826C4868;
	// lbz r11,-1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + -1);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bne cr6,0x826c4898
	if (!cr6.eq) goto loc_826C4898;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// b 0x826c4898
	goto loc_826C4898;
loc_826C4868:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lbz r9,-1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + -1);
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// addi r10,r10,3976
	ctx.r10.s64 = ctx.r10.s64 + 3976;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826c4898
	if (cr6.eq) goto loc_826C4898;
loc_826C4884:
	// mr r30,r11
	r30.u64 = r11.u64;
	// lbzu r9,-1(r11)
	ea = -1 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826c4884
	if (!cr6.eq) goto loc_826C4884;
loc_826C4898:
	// clrlwi r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c4924
	if (!cr6.eq) goto loc_826C4924;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r26,48
	ctx.r3.s64 = r26.s64 + 48;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c48e0
	if (cr6.eq) goto loc_826C48E0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// b 0x826c48e4
	goto loc_826C48E4;
loc_826C48E0:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_826C48E4:
	// subf r10,r24,r30
	ctx.r10.s64 = r30.s64 - r24.s64;
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826c4910
	if (cr6.eq) goto loc_826C4910;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, r11.u32);
	// b 0x826c4918
	goto loc_826C4918;
loc_826C4910:
	// stw r31,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r31.u32);
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
loc_826C4918:
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// stw r31,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r31.u32);
loc_826C4924:
	// rlwinm r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c495c
	if (!cr6.eq) goto loc_826C495C;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c4944
	if (!cr6.eq) goto loc_826C4944;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,13368
	r11.s64 = r11.s64 + 13368;
loc_826C4944:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c495c
	if (!cr6.eq) goto loc_826C495C;
	// subf r11,r24,r30
	r11.s64 = r30.s64 - r24.s64;
	// stw r24,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r24.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
loc_826C495C:
	// rlwinm r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bne cr6,0x826c4974
	if (!cr6.eq) goto loc_826C4974;
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
loc_826C4974:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826C4978"))) PPC_WEAK_FUNC(sub_826C4978);
PPC_FUNC_IMPL(__imp__sub_826C4978) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826C497C"))) PPC_WEAK_FUNC(sub_826C497C);
PPC_FUNC_IMPL(__imp__sub_826C497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C4980"))) PPC_WEAK_FUNC(sub_826C4980);
PPC_FUNC_IMPL(__imp__sub_826C4980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r18,r4,0,28,28
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x826c49e8
	if (cr6.eq) goto loc_826C49E8;
	// rlwinm r11,r4,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c49e8
	if (!cr6.eq) goto loc_826C49E8;
	// rlwinm r11,r4,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c49e8
	if (!cr6.eq) goto loc_826C49E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,5512
	r11.s64 = r11.s64 + 5512;
loc_826C49C4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c49dc
	if (cr6.eq) goto loc_826C49DC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x826c49c4
	goto loc_826C49C4;
loc_826C49DC:
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9440
	return;
loc_826C49E8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r11,r11,5768
	r11.s64 = r11.s64 + 5768;
loc_826C49F4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c4a0c
	if (cr6.eq) goto loc_826C4A0C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x826c49f4
	goto loc_826C49F4;
loc_826C4A0C:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r21,38
	r21.s64 = 38;
	// li r22,39
	r22.s64 = 39;
	// li r23,62
	r23.s64 = 62;
	// li r24,34
	r24.s64 = 34;
	// li r25,60
	r25.s64 = 60;
	// li r26,32
	r26.s64 = 32;
	// addi r29,r9,3976
	r29.s64 = ctx.r9.s64 + 3976;
	// addi r28,r8,5512
	r28.s64 = ctx.r8.s64 + 5512;
	// addi r27,r10,7144
	r27.s64 = ctx.r10.s64 + 7144;
	// addi r30,r11,6536
	r30.s64 = r11.s64 + 6536;
loc_826C4A4C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_826C4A50:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r11,r10,r28
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4cb4
	if (cr6.eq) goto loc_826C4CB4;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bgt cr6,0x826c4be4
	if (cr6.gt) goto loc_826C4BE4;
	// beq cr6,0x826c4bbc
	if (cr6.eq) goto loc_826C4BBC;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// beq cr6,0x826c4b0c
	if (cr6.eq) goto loc_826C4B0C;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x826c4ad0
	if (!cr6.eq) goto loc_826C4AD0;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r8,112
	cr6.compare<uint32_t>(ctx.r8.u32, 112, xer);
	// bne cr6,0x826c4ad0
	if (!cr6.eq) goto loc_826C4AD0;
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r8,59
	cr6.compare<uint32_t>(ctx.r8.u32, 59, xer);
	// bne cr6,0x826c4ad0
	if (!cr6.eq) goto loc_826C4AD0;
	// stb r21,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r21.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// b 0x826c4a4c
	goto loc_826C4A4C;
loc_826C4AD0:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r22.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c4a4c
	goto loc_826C4A4C;
loc_826C4B0C:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// bne cr6,0x826c4b4c
	if (!cr6.eq) goto loc_826C4B4C;
	// lbzu r11,3(r31)
	ea = 3 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c4b84
	if (cr6.eq) goto loc_826C4B84;
loc_826C4B2C:
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x826c4b2c
	if (!cr6.eq) goto loc_826C4B2C;
	// b 0x826c4b84
	goto loc_826C4B84;
loc_826C4B4C:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c4b84
	if (cr6.eq) goto loc_826C4B84;
loc_826C4B60:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x826c4b60
	if (!cr6.eq) goto loc_826C4B60;
loc_826C4B84:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826c2d58
	sub_826C2D58(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4ba8
	if (!cr6.eq) goto loc_826C4BA8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826c4a50
	goto loc_826C4A50;
loc_826C4BA8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826c4a50
	goto loc_826C4A50;
loc_826C4BBC:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c4a4c
	goto loc_826C4A4C;
loc_826C4BE4:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// beq cr6,0x826c4c34
	if (cr6.eq) goto loc_826C4C34;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(r11.u32, 113, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r24.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c4a4c
	goto loc_826C4A4C;
loc_826C4C34:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4c5c
	if (!cr6.eq) goto loc_826C4C5C;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r25.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c4a4c
	goto loc_826C4A4C;
loc_826C4C5C:
	// rlwinm r11,r20,0,20,20
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c4ca4
	if (cr6.eq) goto loc_826C4CA4;
	// lbzx r11,r9,r29
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4ca4
	if (cr6.eq) goto loc_826C4CA4;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c4a50
	if (cr6.eq) goto loc_826C4A50;
loc_826C4C90:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c4c90
	if (!cr6.eq) goto loc_826C4C90;
	// b 0x826c4a50
	goto loc_826C4A50;
loc_826C4CA4:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826c4a4c
	goto loc_826C4A4C;
loc_826C4CB4:
	// stw r31,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826C4CBC"))) PPC_WEAK_FUNC(sub_826C4CBC);
PPC_FUNC_IMPL(__imp__sub_826C4CBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_826C4CC0"))) PPC_WEAK_FUNC(sub_826C4CC0);
PPC_FUNC_IMPL(__imp__sub_826C4CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r18,r4,0,28,28
	r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x826c4d28
	if (cr6.eq) goto loc_826C4D28;
	// rlwinm r11,r4,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c4d28
	if (!cr6.eq) goto loc_826C4D28;
	// rlwinm r11,r4,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c4d28
	if (!cr6.eq) goto loc_826C4D28;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,6024
	r11.s64 = r11.s64 + 6024;
loc_826C4D04:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c4d1c
	if (cr6.eq) goto loc_826C4D1C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x826c4d04
	goto loc_826C4D04;
loc_826C4D1C:
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9440
	return;
loc_826C4D28:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r11,r11,6280
	r11.s64 = r11.s64 + 6280;
loc_826C4D34:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c4d4c
	if (cr6.eq) goto loc_826C4D4C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x826c4d34
	goto loc_826C4D34;
loc_826C4D4C:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r21,38
	r21.s64 = 38;
	// li r22,39
	r22.s64 = 39;
	// li r23,62
	r23.s64 = 62;
	// li r24,34
	r24.s64 = 34;
	// li r25,60
	r25.s64 = 60;
	// li r26,32
	r26.s64 = 32;
	// addi r29,r9,3976
	r29.s64 = ctx.r9.s64 + 3976;
	// addi r28,r8,6024
	r28.s64 = ctx.r8.s64 + 6024;
	// addi r27,r10,7144
	r27.s64 = ctx.r10.s64 + 7144;
	// addi r30,r11,6536
	r30.s64 = r11.s64 + 6536;
loc_826C4D8C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_826C4D90:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lbzx r11,r10,r28
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4ff4
	if (cr6.eq) goto loc_826C4FF4;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(r11.u32, 103, xer);
	// bgt cr6,0x826c4f24
	if (cr6.gt) goto loc_826C4F24;
	// beq cr6,0x826c4efc
	if (cr6.eq) goto loc_826C4EFC;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// beq cr6,0x826c4e4c
	if (cr6.eq) goto loc_826C4E4C;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// bne cr6,0x826c4e10
	if (!cr6.eq) goto loc_826C4E10;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r8,112
	cr6.compare<uint32_t>(ctx.r8.u32, 112, xer);
	// bne cr6,0x826c4e10
	if (!cr6.eq) goto loc_826C4E10;
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r8,59
	cr6.compare<uint32_t>(ctx.r8.u32, 59, xer);
	// bne cr6,0x826c4e10
	if (!cr6.eq) goto loc_826C4E10;
	// stb r21,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r21.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,5
	r31.s64 = r31.s64 + 5;
	// b 0x826c4d8c
	goto loc_826C4D8C;
loc_826C4E10:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,115
	cr6.compare<uint32_t>(r11.u32, 115, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r22.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c4d8c
	goto loc_826C4D8C;
loc_826C4E4C:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(r11.u32, 120, xer);
	// bne cr6,0x826c4e8c
	if (!cr6.eq) goto loc_826C4E8C;
	// lbzu r11,3(r31)
	ea = 3 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c4ec4
	if (cr6.eq) goto loc_826C4EC4;
loc_826C4E6C:
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// bne cr6,0x826c4e6c
	if (!cr6.eq) goto loc_826C4E6C;
	// b 0x826c4ec4
	goto loc_826C4EC4;
loc_826C4E8C:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lbzx r11,r11,r30
	r11.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x826c4ec4
	if (cr6.eq) goto loc_826C4EC4;
loc_826C4EA0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r9,1(r31)
	ea = 1 + r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,255
	cr6.compare<uint32_t>(ctx.r7.u32, 255, xer);
	// bne cr6,0x826c4ea0
	if (!cr6.eq) goto loc_826C4EA0;
loc_826C4EC4:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826c2d58
	sub_826C2D58(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4ee8
	if (!cr6.eq) goto loc_826C4EE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826c4d90
	goto loc_826C4D90;
loc_826C4EE8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826c4d90
	goto loc_826C4D90;
loc_826C4EFC:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c4d8c
	goto loc_826C4D8C;
loc_826C4F24:
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// beq cr6,0x826c4f74
	if (cr6.eq) goto loc_826C4F74;
	// cmplwi cr6,r11,113
	cr6.compare<uint32_t>(r11.u32, 113, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,117
	cr6.compare<uint32_t>(r11.u32, 117, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,111
	cr6.compare<uint32_t>(r11.u32, 111, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// stb r24,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r24.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// b 0x826c4d8c
	goto loc_826C4D8C;
loc_826C4F74:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,116
	cr6.compare<uint32_t>(r11.u32, 116, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// bne cr6,0x826c4f9c
	if (!cr6.eq) goto loc_826C4F9C;
	// stb r25,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r25.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x826c4d8c
	goto loc_826C4D8C;
loc_826C4F9C:
	// rlwinm r11,r20,0,20,20
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c4fe4
	if (cr6.eq) goto loc_826C4FE4;
	// lbzx r11,r9,r29
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c4fe4
	if (cr6.eq) goto loc_826C4FE4;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c4d90
	if (cr6.eq) goto loc_826C4D90;
loc_826C4FD0:
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c4fd0
	if (!cr6.eq) goto loc_826C4FD0;
	// b 0x826c4d90
	goto loc_826C4D90;
loc_826C4FE4:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x826c4d8c
	goto loc_826C4D8C;
loc_826C4FF4:
	// stw r31,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826C4FFC"))) PPC_WEAK_FUNC(sub_826C4FFC);
PPC_FUNC_IMPL(__imp__sub_826C4FFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_826C5000"))) PPC_WEAK_FUNC(sub_826C5000);
PPC_FUNC_IMPL(__imp__sub_826C5000) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c4650
	sub_826C4650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C5000"))) PPC_WEAK_FUNC(sub_826C5000);
PPC_FUNC_IMPL(__imp__sub_826C5000) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C5004"))) PPC_WEAK_FUNC(sub_826C5004);
PPC_FUNC_IMPL(__imp__sub_826C5004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5008"))) PPC_WEAK_FUNC(sub_826C5008);
PPC_FUNC_IMPL(__imp__sub_826C5008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lis r11,1
	r11.s64 = 65536;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// ori r6,r11,16
	ctx.r6.u64 = r11.u64 | 16;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// li r11,0
	r11.s64 = 0;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r11.u32);
}

__attribute__((alias("__imp__sub_826C505C"))) PPC_WEAK_FUNC(sub_826C505C);
PPC_FUNC_IMPL(__imp__sub_826C505C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5060"))) PPC_WEAK_FUNC(sub_826C5060);
PPC_FUNC_IMPL(__imp__sub_826C5060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r22,r11,5256
	r22.s64 = r11.s64 + 5256;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r8,r9,r22
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + r22.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826c53a8
	if (cr6.eq) goto loc_826C53A8;
	// rlwinm r15,r6,0,21,19
	r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// rlwinm r14,r6,0,29,29
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r3,48
	r27.s64 = ctx.r3.s64 + 48;
	// ori r16,r5,12
	r16.u64 = ctx.r5.u64 | 12;
	// ori r24,r4,10
	r24.u64 = ctx.r4.u64 | 10;
	// li r25,0
	r25.s64 = 0;
	// addi r26,r8,3976
	r26.s64 = ctx.r8.s64 + 3976;
	// addi r21,r7,13368
	r21.s64 = ctx.r7.s64 + 13368;
	// addi r17,r6,7048
	r17.s64 = ctx.r6.s64 + 7048;
	// addi r20,r9,7192
	r20.s64 = ctx.r9.s64 + 7192;
	// addi r19,r10,7180
	r19.s64 = ctx.r10.s64 + 7180;
	// addi r18,r11,7156
	r18.s64 = r11.s64 + 7156;
loc_826C50E0:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c510c
	if (cr6.eq) goto loc_826C510C;
loc_826C50FC:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lbzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c50fc
	if (!cr6.eq) goto loc_826C50FC;
loc_826C510C:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x826c5124
	if (!cr6.eq) goto loc_826C5124;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5124:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// neg r8,r11
	ctx.r8.s64 = -r11.s64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r11,28
	ctx.r7.s64 = r11.s64 + 28;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// ble cr6,0x826c51b4
	if (!cr6.gt) goto loc_826C51B4;
	// lwzx r11,r27,r16
	r11.u64 = PPC_LOAD_U32(r27.u32 + r16.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c5164
	if (cr6.eq) goto loc_826C5164;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x826c5180
	goto loc_826C5180;
loc_826C5164:
	// bl 0x8241a350
	sub_8241A350(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c5180
	if (!cr6.eq) goto loc_826C5180;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5180:
	// neg r11,r31
	r11.s64 = -r31.s64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r8,r31,r24
	ctx.r8.u64 = r31.u64 + r24.u64;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// neg r7,r11
	ctx.r7.s64 = -r11.s64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r8.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_826C51B4:
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// beq cr6,0x826c51d8
	if (cr6.eq) goto loc_826C51D8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r25,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r25.u32);
	// b 0x826c51dc
	goto loc_826C51DC;
loc_826C51D8:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_826C51DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r9,32(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826c520c
	if (cr6.eq) goto loc_826C520C;
	// lwz r11,36(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// stw r29,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r29.u32);
	// b 0x826c5214
	goto loc_826C5214;
loc_826C520C:
	// stw r25,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r25.u32);
	// stw r29,32(r23)
	PPC_STORE_U32(r23.u32 + 32, r29.u32);
loc_826C5214:
	// stw r29,36(r23)
	PPC_STORE_U32(r23.u32 + 36, r29.u32);
	// stw r25,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r25.u32);
	// stw r23,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r23.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c5244
	if (cr6.eq) goto loc_826C5244;
loc_826C5234:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c5234
	if (!cr6.eq) goto loc_826C5234;
loc_826C5244:
	// stw r4,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// beq cr6,0x826c525c
	if (cr6.eq) goto loc_826C525C;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C525C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne cr6,0x826c5298
	if (!cr6.eq) goto loc_826C5298;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x826c5288
	if (!cr6.eq) goto loc_826C5288;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// beq cr6,0x826c5290
	if (cr6.eq) goto loc_826C5290;
loc_826C5288:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x826c5294
	goto loc_826C5294;
loc_826C5290:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_826C5294:
	// stbx r25,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r25.u8);
loc_826C5298:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c52bc
	if (cr6.eq) goto loc_826C52BC;
loc_826C52AC:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c52ac
	if (!cr6.eq) goto loc_826C52AC;
loc_826C52BC:
	// stw r4,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r30,r11
	r30.s64 = r11.s8;
	// cmpwi cr6,r30,39
	cr6.compare<int32_t>(r30.s32, 39, xer);
	// beq cr6,0x826c52e0
	if (cr6.eq) goto loc_826C52E0;
	// cmpwi cr6,r30,34
	cr6.compare<int32_t>(r30.s32, 34, xer);
	// beq cr6,0x826c52e0
	if (cr6.eq) goto loc_826C52E0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C52E0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r30,39
	cr6.compare<int32_t>(r30.s32, 39, xer);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// bne cr6,0x826c5304
	if (!cr6.eq) goto loc_826C5304;
	// bl 0x826c4980
	sub_826C4980(ctx, base);
	// b 0x826c5308
	goto loc_826C5308;
loc_826C5304:
	// bl 0x826c4cc0
	sub_826C4CC0(ctx, base);
loc_826C5308:
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// beq cr6,0x826c5330
	if (cr6.eq) goto loc_826C5330;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5330:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne cr6,0x826c536c
	if (!cr6.eq) goto loc_826C536C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne cr6,0x826c535c
	if (!cr6.eq) goto loc_826C535C;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// beq cr6,0x826c5364
	if (cr6.eq) goto loc_826C5364;
loc_826C535C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// b 0x826c5368
	goto loc_826C5368;
loc_826C5364:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_826C5368:
	// stbx r25,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r25.u8);
loc_826C536C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c5390
	if (cr6.eq) goto loc_826C5390;
loc_826C5380:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5380
	if (!cr6.eq) goto loc_826C5380;
loc_826C5390:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r9,r10,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c50e0
	if (!cr6.eq) goto loc_826C50E0;
loc_826C53A8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_826C53AC"))) PPC_WEAK_FUNC(sub_826C53AC);
PPC_FUNC_IMPL(__imp__sub_826C53AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_826C53B0"))) PPC_WEAK_FUNC(sub_826C53B0);
PPC_FUNC_IMPL(__imp__sub_826C53B0) {
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
	// rlwinm r11,r5,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c5430
	if (!cr6.eq) goto loc_826C5430;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r11,7100
	r30.s64 = r11.s64 + 7100;
loc_826C53DC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bne cr6,0x826c53fc
	if (!cr6.eq) goto loc_826C53FC;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// beq cr6,0x826c541c
	if (cr6.eq) goto loc_826C541C;
loc_826C53FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c540c
	if (!cr6.eq) goto loc_826C540C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C540C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x826c53dc
	goto loc_826C53DC;
loc_826C541C:
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826C5430:
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r29,48
	ctx.r3.s64 = r29.s64 + 48;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c546c
	if (cr6.eq) goto loc_826C546C;
	// li r11,0
	r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x826c5470
	goto loc_826C5470;
loc_826C546C:
	// li r30,0
	r30.s64 = 0;
loc_826C5470:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,3976
	ctx.r10.s64 = ctx.r10.s64 + 3976;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826c549c
	if (cr6.eq) goto loc_826C549C;
loc_826C548C:
	// lbzu r9,1(r11)
	ea = 1 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826c548c
	if (!cr6.eq) goto loc_826C548C;
loc_826C549C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c5060
	sub_826C5060(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x826c54d0
	if (!cr6.eq) goto loc_826C54D0;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x826c54dc
	if (cr6.eq) goto loc_826C54DC;
loc_826C54D0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7208
	ctx.r3.s64 = r11.s64 + 7208;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C54DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C54F0"))) PPC_WEAK_FUNC(sub_826C54F0);
PPC_FUNC_IMPL(__imp__sub_826C54F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826C54F4"))) PPC_WEAK_FUNC(sub_826C54F4);
PPC_FUNC_IMPL(__imp__sub_826C54F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C54F8"))) PPC_WEAK_FUNC(sub_826C54F8);
PPC_FUNC_IMPL(__imp__sub_826C54F8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x826c2228
	sub_826C2228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x826c554c
	if (cr6.eq) goto loc_826C554C;
	// li r11,1
	r11.s64 = 1;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r26,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r26.u32);
	// stw r26,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// b 0x826c5550
	goto loc_826C5550;
loc_826C554C:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_826C5550:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,4232
	r11.s64 = r11.s64 + 4232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c5580
	if (cr6.eq) goto loc_826C5580;
loc_826C5570:
	// lbzu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5570
	if (!cr6.eq) goto loc_826C5570;
loc_826C5580:
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, xer);
	// bne cr6,0x826c5598
	if (!cr6.eq) goto loc_826C5598;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7232
	ctx.r3.s64 = r11.s64 + 7232;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5598:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - r30.s64;
	// addi r10,r11,3976
	ctx.r10.s64 = r11.s64 + 3976;
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826c55d4
	if (cr6.eq) goto loc_826C55D4;
loc_826C55C4:
	// lbzu r9,1(r11)
	ea = 1 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826c55c4
	if (!cr6.eq) goto loc_826C55C4;
loc_826C55D4:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c5060
	sub_826C5060(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// bne cr6,0x826c5620
	if (!cr6.eq) goto loc_826C5620;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c5918
	sub_826C5918(ctx, base);
	// b 0x826c5664
	goto loc_826C5664;
loc_826C5620:
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// bne cr6,0x826c5658
	if (!cr6.eq) goto loc_826C5658;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x826c5648
	if (cr6.eq) goto loc_826C5648;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7220
	ctx.r3.s64 = r11.s64 + 7220;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5648:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x826c5664
	goto loc_826C5664;
loc_826C5658:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7220
	ctx.r3.s64 = r11.s64 + 7220;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5664:
	// rlwinm r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c56b0
	if (!cr6.eq) goto loc_826C56B0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c5684
	if (cr6.eq) goto loc_826C5684;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x826c568c
	goto loc_826C568C;
loc_826C5684:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r10,r10,13368
	ctx.r10.s64 = ctx.r10.s64 + 13368;
loc_826C568C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c56a8
	if (cr6.eq) goto loc_826C56A8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stbx r26,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_826C56A8:
	// mr r11,r26
	r11.u64 = r26.u64;
	// stbx r26,r10,r26
	PPC_STORE_U8(ctx.r10.u32 + r26.u32, r26.u8);
loc_826C56B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826C56B8"))) PPC_WEAK_FUNC(sub_826C56B8);
PPC_FUNC_IMPL(__imp__sub_826C56B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826C56BC"))) PPC_WEAK_FUNC(sub_826C56BC);
PPC_FUNC_IMPL(__imp__sub_826C56BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C56C0"))) PPC_WEAK_FUNC(sub_826C56C0);
PPC_FUNC_IMPL(__imp__sub_826C56C0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,33
	cr6.compare<uint32_t>(ctx.r10.u32, 33, xer);
	// beq cr6,0x826c578c
	if (cr6.eq) goto loc_826C578C;
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// beq cr6,0x826c56f8
	if (cr6.eq) goto loc_826C56F8;
	// bl 0x826c54f8
	sub_826C54F8(ctx, base);
	// b 0x826c5900
	goto loc_826C5900;
loc_826C56F8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x826c5718
	if (cr6.eq) goto loc_826C5718;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(r11.u32, 88, xer);
	// bne cr6,0x826c5780
	if (!cr6.eq) goto loc_826C5780;
loc_826C5718:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,109
	cr6.compare<uint32_t>(ctx.r10.u32, 109, xer);
	// beq cr6,0x826c5738
	if (cr6.eq) goto loc_826C5738;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,77
	cr6.compare<uint32_t>(ctx.r10.u32, 77, xer);
	// bne cr6,0x826c5780
	if (!cr6.eq) goto loc_826C5780;
loc_826C5738:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,108
	cr6.compare<int32_t>(ctx.r10.s32, 108, xer);
	// beq cr6,0x826c5754
	if (cr6.eq) goto loc_826C5754;
	// cmpwi cr6,r10,76
	cr6.compare<int32_t>(ctx.r10.s32, 76, xer);
	// bne cr6,0x826c5780
	if (!cr6.eq) goto loc_826C5780;
loc_826C5754:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r8,r10,3976
	ctx.r8.s64 = ctx.r10.s64 + 3976;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826c5780
	if (cr6.eq) goto loc_826C5780;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826c53b0
	sub_826C53B0(ctx, base);
	// b 0x826c5900
	goto loc_826C5900;
loc_826C5780:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826c3970
	sub_826C3970(ctx, base);
	// b 0x826c5900
	goto loc_826C5900;
loc_826C578C:
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// beq cr6,0x826c5880
	if (cr6.eq) goto loc_826C5880;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(r11.u32, 68, xer);
	// beq cr6,0x826c5808
	if (cr6.eq) goto loc_826C5808;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(r11.u32, 91, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,68
	cr6.compare<uint32_t>(ctx.r10.u32, 68, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,65
	cr6.compare<uint32_t>(ctx.r10.u32, 65, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826c3ba0
	sub_826C3BA0(ctx, base);
	// b 0x826c5900
	goto loc_826C5900;
loc_826C5808:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,79
	cr6.compare<uint32_t>(ctx.r10.u32, 79, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r10,89
	cr6.compare<uint32_t>(ctx.r10.u32, 89, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi cr6,r10,80
	cr6.compare<uint32_t>(ctx.r10.u32, 80, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// cmplwi cr6,r10,69
	cr6.compare<uint32_t>(ctx.r10.u32, 69, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// addi r8,r10,3976
	ctx.r8.s64 = ctx.r10.s64 + 3976;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826c58a4
	if (cr6.eq) goto loc_826C58A4;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826c3810
	sub_826C3810(ctx, base);
	// b 0x826c5900
	goto loc_826C5900;
loc_826C5880:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x826c58a4
	if (!cr6.eq) goto loc_826C58A4;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826c36c0
	sub_826C36C0(ctx, base);
	// b 0x826c5900
	goto loc_826C5900;
loc_826C58A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x826c58f4
	if (cr6.eq) goto loc_826C58F4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r11,7100
	r30.s64 = r11.s64 + 7100;
loc_826C58C4:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c58d8
	if (!cr6.eq) goto loc_826C58D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C58D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// bne cr6,0x826c58c4
	if (!cr6.eq) goto loc_826C58C4;
loc_826C58F4:
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826C5900:
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

__attribute__((alias("__imp__sub_826C5914"))) PPC_WEAK_FUNC(sub_826C5914);
PPC_FUNC_IMPL(__imp__sub_826C5914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5918"))) PPC_WEAK_FUNC(sub_826C5918);
PPC_FUNC_IMPL(__imp__sub_826C5918) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r24,r11,3976
	r24.s64 = r11.s64 + 3976;
	// addi r26,r10,7100
	r26.s64 = ctx.r10.s64 + 7100;
loc_826C5948:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lbzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r24.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c5970
	if (cr6.eq) goto loc_826C5970;
loc_826C5960:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// lbzx r9,r10,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r24.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5960
	if (!cr6.eq) goto loc_826C5960;
loc_826C5970:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_826C5978:
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c59e8
	if (cr6.eq) goto loc_826C59E8;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// bne cr6,0x826c59f4
	if (!cr6.eq) goto loc_826C59F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// beq cr6,0x826c5a28
	if (cr6.eq) goto loc_826C5A28;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c56c0
	sub_826C56C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c5948
	if (cr6.eq) goto loc_826C5948;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c5a10
	if (cr6.eq) goto loc_826C5A10;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r25,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r25.u32);
	// b 0x826c5948
	goto loc_826C5948;
loc_826C59E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C59F4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c47f0
	sub_826C47F0(ctx, base);
	// b 0x826c5978
	goto loc_826C5978;
loc_826C5A10:
	// stw r25,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r25.u32);
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r25,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r25.u32);
	// b 0x826c5948
	goto loc_826C5948;
loc_826C5A28:
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r28,0,22,22
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x200;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r11,4232
	r11.s64 = r11.s64 + 4232;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// beq cr6,0x826c5ac0
	if (cr6.eq) goto loc_826C5AC0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c5a68
	if (cr6.eq) goto loc_826C5A68;
loc_826C5A58:
	// lbzu r10,1(r30)
	ea = 1 + r30.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r30.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5a58
	if (!cr6.eq) goto loc_826C5A58;
loc_826C5A68:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c5a80
	if (cr6.eq) goto loc_826C5A80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x826c5a84
	goto loc_826C5A84;
loc_826C5A80:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_826C5A84:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c5a94
	if (!cr6.eq) goto loc_826C5A94;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,13368
	ctx.r3.s64 = r11.s64 + 13368;
loc_826C5A94:
	// subf r6,r5,r30
	ctx.r6.s64 = r30.s64 - ctx.r5.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x826c20e8
	sub_826C20E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c5adc
	if (!cr6.eq) goto loc_826C5ADC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,7256
	ctx.r3.s64 = r11.s64 + 7256;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
	// b 0x826c5adc
	goto loc_826C5ADC;
loc_826C5AC0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826c5ad8
	if (cr6.eq) goto loc_826C5AD8;
loc_826C5AC8:
	// lbzu r10,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5ac8
	if (!cr6.eq) goto loc_826C5AC8;
loc_826C5AD8:
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
loc_826C5ADC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c5b00
	if (cr6.eq) goto loc_826C5B00;
loc_826C5AF0:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c5af0
	if (!cr6.eq) goto loc_826C5AF0;
loc_826C5B00:
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x826c5b1c
	if (cr6.eq) goto loc_826C5B1C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7220
	ctx.r3.s64 = r11.s64 + 7220;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
loc_826C5B1C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826C5B2C"))) PPC_WEAK_FUNC(sub_826C5B2C);
PPC_FUNC_IMPL(__imp__sub_826C5B2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826C5B30"))) PPC_WEAK_FUNC(sub_826C5B30);
PPC_FUNC_IMPL(__imp__sub_826C5B30) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c5b6c
	if (cr6.eq) goto loc_826C5B6C;
loc_826C5B58:
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c5b58
	if (!cr6.eq) goto loc_826C5B58;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_826C5B6C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c5b90
	if (cr6.eq) goto loc_826C5B90;
loc_826C5B7C:
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c5b7c
	if (!cr6.eq) goto loc_826C5B7C;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_826C5B90:
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(r11.u32, 239, xer);
	// bne cr6,0x826c5bc0
	if (!cr6.eq) goto loc_826C5BC0;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,187
	cr6.compare<uint32_t>(r11.u32, 187, xer);
	// bne cr6,0x826c5bc0
	if (!cr6.eq) goto loc_826C5BC0;
	// lbz r11,2(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(r11.u32, 191, xer);
	// bne cr6,0x826c5bc0
	if (!cr6.eq) goto loc_826C5BC0;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
loc_826C5BC0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r10,3976
	r29.s64 = ctx.r10.s64 + 3976;
	// addi r28,r11,7284
	r28.s64 = r11.s64 + 7284;
	// b 0x826c5bd8
	goto loc_826C5BD8;
loc_826C5BD4:
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_826C5BD8:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c5bf8
	if (cr6.eq) goto loc_826C5BF8;
loc_826C5BE8:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c5be8
	if (!cr6.eq) goto loc_826C5BE8;
loc_826C5BF8:
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c5c84
	if (cr6.eq) goto loc_826C5C84;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// bne cr6,0x826c5c78
	if (!cr6.eq) goto loc_826C5C78;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c56c0
	sub_826C56C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c5bd4
	if (cr6.eq) goto loc_826C5BD4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826c5c60
	if (cr6.eq) goto loc_826C5C60;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x826c5bd4
	goto loc_826C5BD4;
loc_826C5C60:
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r30.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x826c5bd4
	goto loc_826C5BD4;
loc_826C5C78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824239f0
	sub_824239F0(ctx, base);
	// b 0x826c5bd4
	goto loc_826C5BD4;
loc_826C5C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C5C88"))) PPC_WEAK_FUNC(sub_826C5C88);
PPC_FUNC_IMPL(__imp__sub_826C5C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C5C8C"))) PPC_WEAK_FUNC(sub_826C5C8C);
PPC_FUNC_IMPL(__imp__sub_826C5C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5C90"))) PPC_WEAK_FUNC(sub_826C5C90);
PPC_FUNC_IMPL(__imp__sub_826C5C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5072
	ctx.r9.s64 = r11.s64 + 5072;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_826C5CA0"))) PPC_WEAK_FUNC(sub_826C5CA0);
PPC_FUNC_IMPL(__imp__sub_826C5CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5CA4"))) PPC_WEAK_FUNC(sub_826C5CA4);
PPC_FUNC_IMPL(__imp__sub_826C5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5CA8"))) PPC_WEAK_FUNC(sub_826C5CA8);
PPC_FUNC_IMPL(__imp__sub_826C5CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5088
	ctx.r9.s64 = r11.s64 + 5088;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_826C5CB8"))) PPC_WEAK_FUNC(sub_826C5CB8);
PPC_FUNC_IMPL(__imp__sub_826C5CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5CBC"))) PPC_WEAK_FUNC(sub_826C5CBC);
PPC_FUNC_IMPL(__imp__sub_826C5CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5CC0"))) PPC_WEAK_FUNC(sub_826C5CC0);
PPC_FUNC_IMPL(__imp__sub_826C5CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5104
	ctx.r9.s64 = r11.s64 + 5104;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5CD4"))) PPC_WEAK_FUNC(sub_826C5CD4);
PPC_FUNC_IMPL(__imp__sub_826C5CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5CD8"))) PPC_WEAK_FUNC(sub_826C5CD8);
PPC_FUNC_IMPL(__imp__sub_826C5CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5120
	ctx.r9.s64 = r11.s64 + 5120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_826C5CE8"))) PPC_WEAK_FUNC(sub_826C5CE8);
PPC_FUNC_IMPL(__imp__sub_826C5CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5CEC"))) PPC_WEAK_FUNC(sub_826C5CEC);
PPC_FUNC_IMPL(__imp__sub_826C5CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5CF0"))) PPC_WEAK_FUNC(sub_826C5CF0);
PPC_FUNC_IMPL(__imp__sub_826C5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5144
	ctx.r9.s64 = r11.s64 + 5144;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_826C5D00"))) PPC_WEAK_FUNC(sub_826C5D00);
PPC_FUNC_IMPL(__imp__sub_826C5D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5D04"))) PPC_WEAK_FUNC(sub_826C5D04);
PPC_FUNC_IMPL(__imp__sub_826C5D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5D08"))) PPC_WEAK_FUNC(sub_826C5D08);
PPC_FUNC_IMPL(__imp__sub_826C5D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5168
	ctx.r9.s64 = r11.s64 + 5168;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_826C5D18"))) PPC_WEAK_FUNC(sub_826C5D18);
PPC_FUNC_IMPL(__imp__sub_826C5D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5D1C"))) PPC_WEAK_FUNC(sub_826C5D1C);
PPC_FUNC_IMPL(__imp__sub_826C5D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5D20"))) PPC_WEAK_FUNC(sub_826C5D20);
PPC_FUNC_IMPL(__imp__sub_826C5D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,5280
	ctx.r9.s64 = r11.s64 + 5280;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5D34"))) PPC_WEAK_FUNC(sub_826C5D34);
PPC_FUNC_IMPL(__imp__sub_826C5D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5D38"))) PPC_WEAK_FUNC(sub_826C5D38);
PPC_FUNC_IMPL(__imp__sub_826C5D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8231c0d0
	sub_8231C0D0(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// addi r8,r10,23664
	ctx.r8.s64 = ctx.r10.s64 + 23664;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_826C5D84"))) PPC_WEAK_FUNC(sub_826C5D84);
PPC_FUNC_IMPL(__imp__sub_826C5D84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5D88"))) PPC_WEAK_FUNC(sub_826C5D88);
PPC_FUNC_IMPL(__imp__sub_826C5D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c5dc4
	if (cr6.eq) goto loc_826C5DC4;
	// bl 0x826dec08
	sub_826DEC08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826dec30
	sub_826DEC30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826C5DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826C5DD8"))) PPC_WEAK_FUNC(sub_826C5DD8);
PPC_FUNC_IMPL(__imp__sub_826C5DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5DDC"))) PPC_WEAK_FUNC(sub_826C5DDC);
PPC_FUNC_IMPL(__imp__sub_826C5DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5DE0"))) PPC_WEAK_FUNC(sub_826C5DE0);
PPC_FUNC_IMPL(__imp__sub_826C5DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c5e08
	if (cr6.eq) goto loc_826C5E08;
	// bl 0x826dec08
	sub_826DEC08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826ded38
	sub_826DED38(ctx, base);
loc_826C5E08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826C5E18"))) PPC_WEAK_FUNC(sub_826C5E18);
PPC_FUNC_IMPL(__imp__sub_826C5E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5E1C"))) PPC_WEAK_FUNC(sub_826C5E1C);
PPC_FUNC_IMPL(__imp__sub_826C5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5E20"))) PPC_WEAK_FUNC(sub_826C5E20);
PPC_FUNC_IMPL(__imp__sub_826C5E20) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5e68
	if (!cr6.eq) goto loc_826C5E68;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C5E68:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,13372(r11)
	PPC_STORE_U32(r11.u32 + 13372, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826C5E84"))) PPC_WEAK_FUNC(sub_826C5E84);
PPC_FUNC_IMPL(__imp__sub_826C5E84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5E88"))) PPC_WEAK_FUNC(sub_826C5E88);
PPC_FUNC_IMPL(__imp__sub_826C5E88) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c5ed4
	if (!cr6.eq) goto loc_826C5ED4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C5ED4:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r29
	ctx.r8.u64 = r11.u64 + r29.u64;
	// stw r31,13372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13372, r31.u32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826C5EF8"))) PPC_WEAK_FUNC(sub_826C5EF8);
PPC_FUNC_IMPL(__imp__sub_826C5EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826C5EFC"))) PPC_WEAK_FUNC(sub_826C5EFC);
PPC_FUNC_IMPL(__imp__sub_826C5EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5F00"))) PPC_WEAK_FUNC(sub_826C5F00);
PPC_FUNC_IMPL(__imp__sub_826C5F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c5f3c
	if (!cr6.eq) goto loc_826C5F3C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x826c5f3c
	if (cr6.eq) goto loc_826C5F3C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
loc_826C5F3C:
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

__attribute__((alias("__imp__sub_826C5F50"))) PPC_WEAK_FUNC(sub_826C5F50);
PPC_FUNC_IMPL(__imp__sub_826C5F50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5F54"))) PPC_WEAK_FUNC(sub_826C5F54);
PPC_FUNC_IMPL(__imp__sub_826C5F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C5F58"))) PPC_WEAK_FUNC(sub_826C5F58);
PPC_FUNC_IMPL(__imp__sub_826C5F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C5F7C"))) PPC_WEAK_FUNC(sub_826C5F7C);
PPC_FUNC_IMPL(__imp__sub_826C5F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C5F80"))) PPC_WEAK_FUNC(sub_826C5F80);
PPC_FUNC_IMPL(__imp__sub_826C5F80) {
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
	// lis r11,-31964
	r11.s64 = -2094792704;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,5072
	r29.s64 = r11.s64 + 5072;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_826C5FA0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828eb7a0
	sub_828EB7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826c5fd4
	if (cr6.eq) goto loc_826C5FD4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826c5fa0
	if (cr6.lt) goto loc_826C5FA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826C5FD4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C5FDC"))) PPC_WEAK_FUNC(sub_826C5FDC);
PPC_FUNC_IMPL(__imp__sub_826C5FDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826C5FE0"))) PPC_WEAK_FUNC(sub_826C5FE0);
PPC_FUNC_IMPL(__imp__sub_826C5FE0) {
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
	// lis r11,-31964
	r11.s64 = -2094792704;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,5120
	r29.s64 = r11.s64 + 5120;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_826C6000:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828eb7a0
	sub_828EB7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826c6034
	if (cr6.eq) goto loc_826C6034;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,24
	r11.s64 = r29.s64 + 24;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826c6000
	if (cr6.lt) goto loc_826C6000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826C6034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C603C"))) PPC_WEAK_FUNC(sub_826C603C);
PPC_FUNC_IMPL(__imp__sub_826C603C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826C6040"))) PPC_WEAK_FUNC(sub_826C6040);
PPC_FUNC_IMPL(__imp__sub_826C6040) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r28,-31933
	r28.s64 = -2092761088;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r10,14584(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 14584);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r25,r31
	r25.u64 = r31.u64;
	// lis r26,-31933
	r26.s64 = -2092761088;
loc_826C6080:
	// mr r30,r31
	r30.u64 = r31.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_826C608C:
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c60b8
	if (!cr6.eq) goto loc_826C60B8;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r28)
	PPC_STORE_U32(r28.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// lwz r10,14584(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 14584);
loc_826C60B8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r31,13372(r26)
	PPC_STORE_U32(r26.u32 + 13372, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c6104
	if (!cr6.eq) goto loc_826C6104;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x826c6104
	if (cr6.eq) goto loc_826C6104;
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c60fc
	if (!cr6.eq) goto loc_826C60FC;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r28)
	PPC_STORE_U32(r28.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// lwz r10,14584(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 14584);
loc_826C60FC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,13372(r26)
	PPC_STORE_U32(r26.u32 + 13372, r31.u32);
loc_826C6104:
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x826c6144
	if (cr6.eq) goto loc_826C6144;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x826c608c
	if (cr6.lt) goto loc_826C608C;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x826c6080
	if (cr6.lt) goto loc_826C6080;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e944c
	return;
loc_826C6144:
	// stw r27,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826C6154"))) PPC_WEAK_FUNC(sub_826C6154);
PPC_FUNC_IMPL(__imp__sub_826C6154) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_826C6158"))) PPC_WEAK_FUNC(sub_826C6158);
PPC_FUNC_IMPL(__imp__sub_826C6158) {
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
	// lis r11,-31964
	r11.s64 = -2094792704;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,5168
	r29.s64 = r11.s64 + 5168;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_826C6178:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828eb7a0
	sub_828EB7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826c61ac
	if (cr6.eq) goto loc_826C61AC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,112
	r11.s64 = r29.s64 + 112;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826c6178
	if (cr6.lt) goto loc_826C6178;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826C61AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C61B4"))) PPC_WEAK_FUNC(sub_826C61B4);
PPC_FUNC_IMPL(__imp__sub_826C61B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826C61B8"))) PPC_WEAK_FUNC(sub_826C61B8);
PPC_FUNC_IMPL(__imp__sub_826C61B8) {
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
	// lis r11,-31964
	r11.s64 = -2094792704;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,5280
	r29.s64 = r11.s64 + 5280;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_826C61D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x828eb7a0
	sub_828EB7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826c620c
	if (cr6.eq) goto loc_826C620C;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,152
	r11.s64 = r29.s64 + 152;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826c61d8
	if (cr6.lt) goto loc_826C61D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826C620C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C6214"))) PPC_WEAK_FUNC(sub_826C6214);
PPC_FUNC_IMPL(__imp__sub_826C6214) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826C6218"))) PPC_WEAK_FUNC(sub_826C6218);
PPC_FUNC_IMPL(__imp__sub_826C6218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c626c
	if (cr6.eq) goto loc_826C626C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c6268
	if (!cr6.eq) goto loc_826C6268;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x826c6268
	if (cr6.eq) goto loc_826C6268;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
loc_826C6268:
	// bl 0x826dec78
	sub_826DEC78(ctx, base);
loc_826C626C:
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

__attribute__((alias("__imp__sub_826C6280"))) PPC_WEAK_FUNC(sub_826C6280);
PPC_FUNC_IMPL(__imp__sub_826C6280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6284"))) PPC_WEAK_FUNC(sub_826C6284);
PPC_FUNC_IMPL(__imp__sub_826C6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6288"))) PPC_WEAK_FUNC(sub_826C6288);
PPC_FUNC_IMPL(__imp__sub_826C6288) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c62f4
	if (cr6.eq) goto loc_826C62F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c62dc
	if (!cr6.eq) goto loc_826C62DC;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x826c62dc
	if (cr6.eq) goto loc_826C62DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
loc_826C62DC:
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826C62F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826C62F8"))) PPC_WEAK_FUNC(sub_826C62F8);
PPC_FUNC_IMPL(__imp__sub_826C62F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826C62FC"))) PPC_WEAK_FUNC(sub_826C62FC);
PPC_FUNC_IMPL(__imp__sub_826C62FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6300"))) PPC_WEAK_FUNC(sub_826C6300);
PPC_FUNC_IMPL(__imp__sub_826C6300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r10,14584(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 14584);
	// lis r28,-31933
	r28.s64 = -2092761088;
loc_826C632C:
	// li r27,0
	r27.s64 = 0;
loc_826C6330:
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c635c
	if (!cr6.eq) goto loc_826C635C;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r29)
	PPC_STORE_U32(r29.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// lwz r10,14584(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 14584);
loc_826C635C:
	// add r11,r26,r27
	r11.u64 = r26.u64 + r27.u64;
	// stw r31,13372(r28)
	PPC_STORE_U32(r28.u32 + 13372, r31.u32);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826c6404
	if (cr6.eq) goto loc_826C6404;
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c63a0
	if (!cr6.eq) goto loc_826C63A0;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r29)
	PPC_STORE_U32(r29.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// lwz r10,14584(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 14584);
loc_826C63A0:
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// stw r31,13372(r28)
	PPC_STORE_U32(r28.u32 + 13372, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c63e8
	if (!cr6.eq) goto loc_826C63E8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x826c63e8
	if (cr6.eq) goto loc_826C63E8;
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826c63e0
	if (!cr6.eq) goto loc_826C63E0;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r29)
	PPC_STORE_U32(r29.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C63E0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r31,13372(r28)
	PPC_STORE_U32(r28.u32 + 13372, r31.u32);
loc_826C63E8:
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,14584(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 14584);
loc_826C6404:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(r27.s32, 6, xer);
	// blt cr6,0x826c6330
	if (cr6.lt) goto loc_826C6330;
	// addi r25,r25,24
	r25.s64 = r25.s64 + 24;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r26,r26,6
	r26.s64 = r26.s64 + 6;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x826c632c
	if (cr6.lt) goto loc_826C632C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826C6428"))) PPC_WEAK_FUNC(sub_826C6428);
PPC_FUNC_IMPL(__imp__sub_826C6428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826C642C"))) PPC_WEAK_FUNC(sub_826C642C);
PPC_FUNC_IMPL(__imp__sub_826C642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6430"))) PPC_WEAK_FUNC(sub_826C6430);
PPC_FUNC_IMPL(__imp__sub_826C6430) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// lis r28,-31933
	r28.s64 = -2092761088;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lis r29,-31933
	r29.s64 = -2092761088;
loc_826C6454:
	// lwz r11,14584(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 14584);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c6484
	if (!cr6.eq) goto loc_826C6484;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,14584(r29)
	PPC_STORE_U32(r29.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-17000
	ctx.r3.s64 = ctx.r10.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C6484:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,13372(r28)
	PPC_STORE_U32(r28.u32 + 13372, r31.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c64ac
	if (cr6.eq) goto loc_826C64AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826C64AC:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x826c6454
	if (cr6.lt) goto loc_826C6454;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C64C0"))) PPC_WEAK_FUNC(sub_826C64C0);
PPC_FUNC_IMPL(__imp__sub_826C64C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C64C4"))) PPC_WEAK_FUNC(sub_826C64C4);
PPC_FUNC_IMPL(__imp__sub_826C64C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C64C8"))) PPC_WEAK_FUNC(sub_826C64C8);
PPC_FUNC_IMPL(__imp__sub_826C64C8) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c6518
	if (!cr6.eq) goto loc_826C6518;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C6518:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stb r30,1196(r31)
	PPC_STORE_U8(r31.u32 + 1196, r30.u8);
	// stw r31,13372(r11)
	PPC_STORE_U32(r11.u32 + 13372, r31.u32);
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

__attribute__((alias("__imp__sub_826C6538"))) PPC_WEAK_FUNC(sub_826C6538);
PPC_FUNC_IMPL(__imp__sub_826C6538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C653C"))) PPC_WEAK_FUNC(sub_826C653C);
PPC_FUNC_IMPL(__imp__sub_826C653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6540"))) PPC_WEAK_FUNC(sub_826C6540);
PPC_FUNC_IMPL(__imp__sub_826C6540) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c6588
	if (!cr6.eq) goto loc_826C6588;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C6588:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lbz r3,1196(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 1196);
	// stw r31,13372(r11)
	PPC_STORE_U32(r11.u32 + 13372, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826C65A4"))) PPC_WEAK_FUNC(sub_826C65A4);
PPC_FUNC_IMPL(__imp__sub_826C65A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C65A8"))) PPC_WEAK_FUNC(sub_826C65A8);
PPC_FUNC_IMPL(__imp__sub_826C65A8) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c6608
	if (!cr6.eq) goto loc_826C6608;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C6608:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r31,13372(r11)
	PPC_STORE_U32(r11.u32 + 13372, r31.u32);
	// bl 0x826c7388
	sub_826C7388(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826C6628"))) PPC_WEAK_FUNC(sub_826C6628);
PPC_FUNC_IMPL(__imp__sub_826C6628) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826C662C"))) PPC_WEAK_FUNC(sub_826C662C);
PPC_FUNC_IMPL(__imp__sub_826C662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6630"))) PPC_WEAK_FUNC(sub_826C6630);
PPC_FUNC_IMPL(__imp__sub_826C6630) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c66cc
	if (cr6.eq) goto loc_826C66CC;
	// bl 0x826c5e20
	sub_826C5E20(ctx, base);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x826c6674
	if (cr6.lt) goto loc_826C6674;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826c6678
	if (cr6.lt) goto loc_826C6678;
loc_826C6674:
	// li r11,0
	r11.s64 = 0;
loc_826C6678:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c66a0
	if (cr6.eq) goto loc_826C66A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826c76c0
	sub_826C76C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826C66A0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,22228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c66bc
	if (cr6.eq) goto loc_826C66BC;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
loc_826C66BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dec08
	sub_826DEC08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826ded28
	sub_826DED28(ctx, base);
loc_826C66CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826C66DC"))) PPC_WEAK_FUNC(sub_826C66DC);
PPC_FUNC_IMPL(__imp__sub_826C66DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C66E0"))) PPC_WEAK_FUNC(sub_826C66E0);
PPC_FUNC_IMPL(__imp__sub_826C66E0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c6730
	if (!cr6.eq) goto loc_826C6730;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C6730:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r31,13372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13372, r31.u32);
	// blt cr6,0x826c6758
	if (cr6.lt) goto loc_826C6758;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826c675c
	if (cr6.lt) goto loc_826C675C;
loc_826C6758:
	// li r11,0
	r11.s64 = 0;
loc_826C675C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c6778
	if (cr6.eq) goto loc_826C6778;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x826c76c0
	sub_826C76C0(ctx, base);
	// b 0x826c6780
	goto loc_826C6780;
loc_826C6778:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_826C6780:
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

__attribute__((alias("__imp__sub_826C6794"))) PPC_WEAK_FUNC(sub_826C6794);
PPC_FUNC_IMPL(__imp__sub_826C6794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6798"))) PPC_WEAK_FUNC(sub_826C6798);
PPC_FUNC_IMPL(__imp__sub_826C6798) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C6798"))) PPC_WEAK_FUNC(sub_826C6798);
PPC_FUNC_IMPL(__imp__sub_826C6798) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C679C"))) PPC_WEAK_FUNC(sub_826C679C);
PPC_FUNC_IMPL(__imp__sub_826C679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67A0"))) PPC_WEAK_FUNC(sub_826C67A0);
PPC_FUNC_IMPL(__imp__sub_826C67A0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67A0"))) PPC_WEAK_FUNC(sub_826C67A0);
PPC_FUNC_IMPL(__imp__sub_826C67A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67A4"))) PPC_WEAK_FUNC(sub_826C67A4);
PPC_FUNC_IMPL(__imp__sub_826C67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67A8"))) PPC_WEAK_FUNC(sub_826C67A8);
PPC_FUNC_IMPL(__imp__sub_826C67A8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67A8"))) PPC_WEAK_FUNC(sub_826C67A8);
PPC_FUNC_IMPL(__imp__sub_826C67A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67AC"))) PPC_WEAK_FUNC(sub_826C67AC);
PPC_FUNC_IMPL(__imp__sub_826C67AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67B0"))) PPC_WEAK_FUNC(sub_826C67B0);
PPC_FUNC_IMPL(__imp__sub_826C67B0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67B0"))) PPC_WEAK_FUNC(sub_826C67B0);
PPC_FUNC_IMPL(__imp__sub_826C67B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67B4"))) PPC_WEAK_FUNC(sub_826C67B4);
PPC_FUNC_IMPL(__imp__sub_826C67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67B8"))) PPC_WEAK_FUNC(sub_826C67B8);
PPC_FUNC_IMPL(__imp__sub_826C67B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67B8"))) PPC_WEAK_FUNC(sub_826C67B8);
PPC_FUNC_IMPL(__imp__sub_826C67B8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67BC"))) PPC_WEAK_FUNC(sub_826C67BC);
PPC_FUNC_IMPL(__imp__sub_826C67BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67C0"))) PPC_WEAK_FUNC(sub_826C67C0);
PPC_FUNC_IMPL(__imp__sub_826C67C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67C0"))) PPC_WEAK_FUNC(sub_826C67C0);
PPC_FUNC_IMPL(__imp__sub_826C67C0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67C4"))) PPC_WEAK_FUNC(sub_826C67C4);
PPC_FUNC_IMPL(__imp__sub_826C67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67C8"))) PPC_WEAK_FUNC(sub_826C67C8);
PPC_FUNC_IMPL(__imp__sub_826C67C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67C8"))) PPC_WEAK_FUNC(sub_826C67C8);
PPC_FUNC_IMPL(__imp__sub_826C67C8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67CC"))) PPC_WEAK_FUNC(sub_826C67CC);
PPC_FUNC_IMPL(__imp__sub_826C67CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67D0"))) PPC_WEAK_FUNC(sub_826C67D0);
PPC_FUNC_IMPL(__imp__sub_826C67D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67D0"))) PPC_WEAK_FUNC(sub_826C67D0);
PPC_FUNC_IMPL(__imp__sub_826C67D0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67D4"))) PPC_WEAK_FUNC(sub_826C67D4);
PPC_FUNC_IMPL(__imp__sub_826C67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67D8"))) PPC_WEAK_FUNC(sub_826C67D8);
PPC_FUNC_IMPL(__imp__sub_826C67D8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67D8"))) PPC_WEAK_FUNC(sub_826C67D8);
PPC_FUNC_IMPL(__imp__sub_826C67D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67DC"))) PPC_WEAK_FUNC(sub_826C67DC);
PPC_FUNC_IMPL(__imp__sub_826C67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67E0"))) PPC_WEAK_FUNC(sub_826C67E0);
PPC_FUNC_IMPL(__imp__sub_826C67E0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67E0"))) PPC_WEAK_FUNC(sub_826C67E0);
PPC_FUNC_IMPL(__imp__sub_826C67E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67E4"))) PPC_WEAK_FUNC(sub_826C67E4);
PPC_FUNC_IMPL(__imp__sub_826C67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67E8"))) PPC_WEAK_FUNC(sub_826C67E8);
PPC_FUNC_IMPL(__imp__sub_826C67E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c66e0
	sub_826C66E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67E8"))) PPC_WEAK_FUNC(sub_826C67E8);
PPC_FUNC_IMPL(__imp__sub_826C67E8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67EC"))) PPC_WEAK_FUNC(sub_826C67EC);
PPC_FUNC_IMPL(__imp__sub_826C67EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67F0"))) PPC_WEAK_FUNC(sub_826C67F0);
PPC_FUNC_IMPL(__imp__sub_826C67F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c66e0
	sub_826C66E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C67F0"))) PPC_WEAK_FUNC(sub_826C67F0);
PPC_FUNC_IMPL(__imp__sub_826C67F0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826C67F4"))) PPC_WEAK_FUNC(sub_826C67F4);
PPC_FUNC_IMPL(__imp__sub_826C67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C67F8"))) PPC_WEAK_FUNC(sub_826C67F8);
PPC_FUNC_IMPL(__imp__sub_826C67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826c6884
	if (!cr6.eq) goto loc_826C6884;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826c6884
	if (!cr6.eq) goto loc_826C6884;
	// bl 0x826c5e20
	sub_826C5E20(ctx, base);
	// lis r11,-31964
	r11.s64 = -2094792704;
	// addi r31,r3,96
	r31.s64 = ctx.r3.s64 + 96;
	// addi r10,r11,13416
	ctx.r10.s64 = r11.s64 + 13416;
	// lwz r11,68(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x826c6884
	if (!cr6.lt) goto loc_826C6884;
	// lbz r11,1100(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1100);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c687c
	if (cr6.eq) goto loc_826C687C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dff80
	sub_826DFF80(ctx, base);
	// mulli r11,r3,56
	r11.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x826c77d8
	sub_826C77D8(ctx, base);
loc_826C687C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c6968
	if (!cr6.eq) goto loc_826C6968;
loc_826C6884:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826C6894:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826c6894
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826C6894;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// lwz r11,22228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c68c0
	if (cr6.eq) goto loc_826C68C0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,22228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22228);
loc_826C68C0:
	// lwz r29,104(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x826c68e4
	if (!cr6.eq) goto loc_826C68E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c68e4
	if (cr6.eq) goto loc_826C68E4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826da5f0
	sub_826DA5F0(ctx, base);
	// lwz r11,22228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826C68E4:
	// lwz r31,108(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x826c6904
	if (!cr6.eq) goto loc_826C6904;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c6904
	if (cr6.eq) goto loc_826C6904;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826da6f8
	sub_826DA6F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826C6904:
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c6930
	if (!cr6.eq) goto loc_826C6930;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x826c6930
	if (cr6.eq) goto loc_826C6930;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c5e88
	sub_826C5E88(ctx, base);
loc_826C6930:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// clrlwi r8,r29,16
	ctx.r8.u64 = r29.u32 & 0xFFFF;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// bl 0x826dedd8
	sub_826DEDD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c6968
	if (!cr6.eq) goto loc_826C6968;
	// twi 31,r0,22
	if (r0.s32 < 22 || r0.s32 > 22 || r0.u32 == 22 || r0.u32 < 22 || r0.u32 > 22) __builtin_debugtrap();
loc_826C6968:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826C696C"))) PPC_WEAK_FUNC(sub_826C696C);
PPC_FUNC_IMPL(__imp__sub_826C696C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826C6970"))) PPC_WEAK_FUNC(sub_826C6970);
PPC_FUNC_IMPL(__imp__sub_826C6970) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,13384
	r31.s64 = r11.s64 + 13384;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,14584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826c69c0
	if (!cr6.eq) goto loc_826C69C0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, r11.u32);
	// bl 0x826df230
	sub_826DF230(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-17000
	ctx.r3.s64 = r11.s64 + -17000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_826C69C0:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lbz r9,1196(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1196);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,13372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13372, r31.u32);
	// beq cr6,0x826c69f4
	if (cr6.eq) goto loc_826C69F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dff80
	sub_826DFF80(ctx, base);
	// mulli r11,r3,56
	r11.s64 = ctx.r3.s64 * 56;
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826c77d8
	sub_826C77D8(ctx, base);
loc_826C69F4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826c6a3c
	if (!cr6.eq) goto loc_826C6A3C;
	// li r11,16
	r11.s64 = 16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
loc_826C6A3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826C6A40"))) PPC_WEAK_FUNC(sub_826C6A40);
PPC_FUNC_IMPL(__imp__sub_826C6A40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826C6A44"))) PPC_WEAK_FUNC(sub_826C6A44);
PPC_FUNC_IMPL(__imp__sub_826C6A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6A48"))) PPC_WEAK_FUNC(sub_826C6A48);
PPC_FUNC_IMPL(__imp__sub_826C6A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6A9C"))) PPC_WEAK_FUNC(sub_826C6A9C);
PPC_FUNC_IMPL(__imp__sub_826C6A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6AA0"))) PPC_WEAK_FUNC(sub_826C6AA0);
PPC_FUNC_IMPL(__imp__sub_826C6AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6AF4"))) PPC_WEAK_FUNC(sub_826C6AF4);
PPC_FUNC_IMPL(__imp__sub_826C6AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6AF8"))) PPC_WEAK_FUNC(sub_826C6AF8);
PPC_FUNC_IMPL(__imp__sub_826C6AF8) {
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
	// li r11,16
	r11.s64 = 16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r6,r9,7952
	ctx.r6.s64 = ctx.r9.s64 + 7952;
	// li r7,670
	ctx.r7.s64 = 670;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6B48"))) PPC_WEAK_FUNC(sub_826C6B48);
PPC_FUNC_IMPL(__imp__sub_826C6B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6B4C"))) PPC_WEAK_FUNC(sub_826C6B4C);
PPC_FUNC_IMPL(__imp__sub_826C6B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6B50"))) PPC_WEAK_FUNC(sub_826C6B50);
PPC_FUNC_IMPL(__imp__sub_826C6B50) {
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
	// li r11,16
	r11.s64 = 16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r6,r9,7952
	ctx.r6.s64 = ctx.r9.s64 + 7952;
	// li r7,676
	ctx.r7.s64 = 676;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6BA0"))) PPC_WEAK_FUNC(sub_826C6BA0);
PPC_FUNC_IMPL(__imp__sub_826C6BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6BA4"))) PPC_WEAK_FUNC(sub_826C6BA4);
PPC_FUNC_IMPL(__imp__sub_826C6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6BA8"))) PPC_WEAK_FUNC(sub_826C6BA8);
PPC_FUNC_IMPL(__imp__sub_826C6BA8) {
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
	// li r11,16
	r11.s64 = 16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6BF4"))) PPC_WEAK_FUNC(sub_826C6BF4);
PPC_FUNC_IMPL(__imp__sub_826C6BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6BF8"))) PPC_WEAK_FUNC(sub_826C6BF8);
PPC_FUNC_IMPL(__imp__sub_826C6BF8) {
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
	// li r11,16
	r11.s64 = 16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6C44"))) PPC_WEAK_FUNC(sub_826C6C44);
PPC_FUNC_IMPL(__imp__sub_826C6C44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6C48"))) PPC_WEAK_FUNC(sub_826C6C48);
PPC_FUNC_IMPL(__imp__sub_826C6C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6C94"))) PPC_WEAK_FUNC(sub_826C6C94);
PPC_FUNC_IMPL(__imp__sub_826C6C94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6C98"))) PPC_WEAK_FUNC(sub_826C6C98);
PPC_FUNC_IMPL(__imp__sub_826C6C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6CE4"))) PPC_WEAK_FUNC(sub_826C6CE4);
PPC_FUNC_IMPL(__imp__sub_826C6CE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6CE8"))) PPC_WEAK_FUNC(sub_826C6CE8);
PPC_FUNC_IMPL(__imp__sub_826C6CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6D28"))) PPC_WEAK_FUNC(sub_826C6D28);
PPC_FUNC_IMPL(__imp__sub_826C6D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6D2C"))) PPC_WEAK_FUNC(sub_826C6D2C);
PPC_FUNC_IMPL(__imp__sub_826C6D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6D30"))) PPC_WEAK_FUNC(sub_826C6D30);
PPC_FUNC_IMPL(__imp__sub_826C6D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6D70"))) PPC_WEAK_FUNC(sub_826C6D70);
PPC_FUNC_IMPL(__imp__sub_826C6D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6D74"))) PPC_WEAK_FUNC(sub_826C6D74);
PPC_FUNC_IMPL(__imp__sub_826C6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6D78"))) PPC_WEAK_FUNC(sub_826C6D78);
PPC_FUNC_IMPL(__imp__sub_826C6D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6DB8"))) PPC_WEAK_FUNC(sub_826C6DB8);
PPC_FUNC_IMPL(__imp__sub_826C6DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6DBC"))) PPC_WEAK_FUNC(sub_826C6DBC);
PPC_FUNC_IMPL(__imp__sub_826C6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6DC0"))) PPC_WEAK_FUNC(sub_826C6DC0);
PPC_FUNC_IMPL(__imp__sub_826C6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6E00"))) PPC_WEAK_FUNC(sub_826C6E00);
PPC_FUNC_IMPL(__imp__sub_826C6E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6E04"))) PPC_WEAK_FUNC(sub_826C6E04);
PPC_FUNC_IMPL(__imp__sub_826C6E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6E08"))) PPC_WEAK_FUNC(sub_826C6E08);
PPC_FUNC_IMPL(__imp__sub_826C6E08) {
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
	// li r11,16
	r11.s64 = 16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6E54"))) PPC_WEAK_FUNC(sub_826C6E54);
PPC_FUNC_IMPL(__imp__sub_826C6E54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6E58"))) PPC_WEAK_FUNC(sub_826C6E58);
PPC_FUNC_IMPL(__imp__sub_826C6E58) {
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
	// li r11,16
	r11.s64 = 16;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C6EA4"))) PPC_WEAK_FUNC(sub_826C6EA4);
PPC_FUNC_IMPL(__imp__sub_826C6EA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C6EA8"))) PPC_WEAK_FUNC(sub_826C6EA8);
PPC_FUNC_IMPL(__imp__sub_826C6EA8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x826c6970
	sub_826C6970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6EB4"))) PPC_WEAK_FUNC(sub_826C6EB4);
PPC_FUNC_IMPL(__imp__sub_826C6EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6EB8"))) PPC_WEAK_FUNC(sub_826C6EB8);
PPC_FUNC_IMPL(__imp__sub_826C6EB8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x826c6970
	sub_826C6970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6EC4"))) PPC_WEAK_FUNC(sub_826C6EC4);
PPC_FUNC_IMPL(__imp__sub_826C6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C6EC8"))) PPC_WEAK_FUNC(sub_826C6EC8);
PPC_FUNC_IMPL(__imp__sub_826C6EC8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x826c67f8
	sub_826C67F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826C6ED0"))) PPC_WEAK_FUNC(sub_826C6ED0);
PPC_FUNC_IMPL(__imp__sub_826C6ED0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c6fec
	if (cr6.eq) goto loc_826C6FEC;
	// bl 0x826c5e20
	sub_826C5E20(ctx, base);
	// addi r30,r3,96
	r30.s64 = ctx.r3.s64 + 96;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826c6f18
	if (cr6.lt) goto loc_826C6F18;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x826c6f1c
	if (cr6.lt) goto loc_826C6F1C;
loc_826C6F18:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_826C6F1C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826c6fa8
	if (cr6.eq) goto loc_826C6FA8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r6,r9,7952
	ctx.r6.s64 = ctx.r9.s64 + 7952;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r7,338
	ctx.r7.s64 = 338;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,1068(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 1068);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r7,r11,r31
	ctx.r7.s64 = r31.s64 - r11.s64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// divwu r6,r7,r8
	ctx.r6.u32 = ctx.r7.u32 / ctx.r8.u32;
	// mullw r10,r6,r8
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,24(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c76c0
	sub_826C76C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_826C6FA8:
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lwz r11,22228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c6fd4
	if (cr6.eq) goto loc_826C6FD4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,22228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22228);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
loc_826C6FD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dec08
	sub_826DEC08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826debe8
	sub_826DEBE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_826C6FEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826C6FF4"))) PPC_WEAK_FUNC(sub_826C6FF4);
PPC_FUNC_IMPL(__imp__sub_826C6FF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826C6FF8"))) PPC_WEAK_FUNC(sub_826C6FF8);
PPC_FUNC_IMPL(__imp__sub_826C6FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r6,r9,7952
	ctx.r6.s64 = ctx.r9.s64 + 7952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,622
	ctx.r7.s64 = 622;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C7050"))) PPC_WEAK_FUNC(sub_826C7050);
PPC_FUNC_IMPL(__imp__sub_826C7050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7054"))) PPC_WEAK_FUNC(sub_826C7054);
PPC_FUNC_IMPL(__imp__sub_826C7054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C7058"))) PPC_WEAK_FUNC(sub_826C7058);
PPC_FUNC_IMPL(__imp__sub_826C7058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r6,r9,7952
	ctx.r6.s64 = ctx.r9.s64 + 7952;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,628
	ctx.r7.s64 = 628;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C70B0"))) PPC_WEAK_FUNC(sub_826C70B0);
PPC_FUNC_IMPL(__imp__sub_826C70B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C70B4"))) PPC_WEAK_FUNC(sub_826C70B4);
PPC_FUNC_IMPL(__imp__sub_826C70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C70B8"))) PPC_WEAK_FUNC(sub_826C70B8);
PPC_FUNC_IMPL(__imp__sub_826C70B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r10,7952
	ctx.r6.s64 = ctx.r10.s64 + 7952;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r7,706
	ctx.r7.s64 = 706;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C7108"))) PPC_WEAK_FUNC(sub_826C7108);
PPC_FUNC_IMPL(__imp__sub_826C7108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C710C"))) PPC_WEAK_FUNC(sub_826C710C);
PPC_FUNC_IMPL(__imp__sub_826C710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C7110"))) PPC_WEAK_FUNC(sub_826C7110);
PPC_FUNC_IMPL(__imp__sub_826C7110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r6,r10,7952
	ctx.r6.s64 = ctx.r10.s64 + 7952;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r7,712
	ctx.r7.s64 = 712;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C7160"))) PPC_WEAK_FUNC(sub_826C7160);
PPC_FUNC_IMPL(__imp__sub_826C7160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7164"))) PPC_WEAK_FUNC(sub_826C7164);
PPC_FUNC_IMPL(__imp__sub_826C7164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C7168"))) PPC_WEAK_FUNC(sub_826C7168);
PPC_FUNC_IMPL(__imp__sub_826C7168) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r6,r11,7952
	ctx.r6.s64 = r11.s64 + 7952;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// li r7,742
	ctx.r7.s64 = 742;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C71AC"))) PPC_WEAK_FUNC(sub_826C71AC);
PPC_FUNC_IMPL(__imp__sub_826C71AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C71B0"))) PPC_WEAK_FUNC(sub_826C71B0);
PPC_FUNC_IMPL(__imp__sub_826C71B0) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// addi r6,r11,7952
	ctx.r6.s64 = r11.s64 + 7952;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// li r7,748
	ctx.r7.s64 = 748;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826C71F4"))) PPC_WEAK_FUNC(sub_826C71F4);
PPC_FUNC_IMPL(__imp__sub_826C71F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C71F8"))) PPC_WEAK_FUNC(sub_826C71F8);
PPC_FUNC_IMPL(__imp__sub_826C71F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x826c722c
	if (!cr0.eq) goto loc_826C722C;
	// bne cr6,0x826c7238
	if (!cr6.eq) goto loc_826C7238;
	// subfc r11,r3,r4
	xer.ca = ctx.r4.u32 >= ctx.r3.u32;
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_826C722C:
	// beq cr6,0x826c7244
	if (cr6.eq) goto loc_826C7244;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826c7244
	if (!cr6.gt) goto loc_826C7244;
loc_826C7238:
	// li r11,1
	r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_826C7244:
	// li r11,0
	r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7250"))) PPC_WEAK_FUNC(sub_826C7250);
PPC_FUNC_IMPL(__imp__sub_826C7250) {
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
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x826c72c8
	if (!cr6.lt) goto loc_826C72C8;
loc_826C7284:
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mtctr r25
	ctr.u64 = r25.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c72c8
	if (cr6.eq) goto loc_826C72C8;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(r27.s32, r31.s32, xer);
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r31.s64 = temp.s64;
	// blt cr6,0x826c7284
	if (cr6.lt) goto loc_826C7284;
loc_826C72C8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826C72D8"))) PPC_WEAK_FUNC(sub_826C72D8);
PPC_FUNC_IMPL(__imp__sub_826C72D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826C72DC"))) PPC_WEAK_FUNC(sub_826C72DC);
PPC_FUNC_IMPL(__imp__sub_826C72DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C72E0"))) PPC_WEAK_FUNC(sub_826C72E0);
PPC_FUNC_IMPL(__imp__sub_826C72E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// divwu r9,r10,r6
	ctx.r9.u32 = ctx.r10.u32 / ctx.r6.u32;
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r11,40
	r11.s64 = 40;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826c7318
	if (cr0.eq) goto loc_826C7318;
	// subf r11,r10,r6
	r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// addi r11,r11,40
	r11.s64 = r11.s64 + 40;
loc_826C7318:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// ble cr6,0x826c7338
	if (!cr6.gt) goto loc_826C7338;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// divwu r10,r11,r6
	ctx.r10.u32 = r11.u32 / ctx.r6.u32;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
loc_826C7338:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// ble cr6,0x826c7378
	if (!cr6.gt) goto loc_826C7378;
loc_826C7350:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x826c7350
	if (cr6.lt) goto loc_826C7350;
loc_826C7378:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_826C7380"))) PPC_WEAK_FUNC(sub_826C7380);
PPC_FUNC_IMPL(__imp__sub_826C7380) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826C7384"))) PPC_WEAK_FUNC(sub_826C7384);
PPC_FUNC_IMPL(__imp__sub_826C7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C7388"))) PPC_WEAK_FUNC(sub_826C7388);
PPC_FUNC_IMPL(__imp__sub_826C7388) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1060(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r5,20
	r30.s64 = ctx.r5.s64 + 20;
	// addi r28,r3,28
	r28.s64 = ctx.r3.s64 + 28;
	// li r27,18
	r27.s64 = 18;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,1064(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,1068(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r26.u32);
	// stw r26,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r26.u32);
	// stw r26,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r26.u32);
	// stw r26,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r26.u32);
	// stw r26,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r26.u32);
	// stw r26,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r26.u32);
loc_826C73D8:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// addi r29,r30,-20
	r29.s64 = r30.s64 + -20;
	// addi r25,r28,-20
	r25.s64 = r28.s64 + -20;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r10,-20(r30)
	PPC_STORE_U32(r30.u32 + -20, ctx.r10.u32);
	// lwz r9,-4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// stw r26,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, r26.u32);
	// stw r26,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, r26.u32);
	// stw r26,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r9,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, ctx.r9.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// lwz r8,-8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x826c7470
	if (!cr6.gt) goto loc_826C7470;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_826C7420:
	// lwz r7,-16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + -16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,-12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lwz r9,-4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r6,-12(r30)
	PPC_STORE_U32(r30.u32 + -12, ctx.r6.u32);
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r4,-8(r30)
	PPC_STORE_U32(r30.u32 + -8, ctx.r4.u32);
	// lwz r3,32(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r8,28(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// stw r8,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, ctx.r8.u32);
	// lwz r7,-8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x826c7420
	if (cr6.lt) goto loc_826C7420;
loc_826C7470:
	// addi r3,r25,24
	ctx.r3.s64 = r25.s64 + 24;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r28,r28,56
	r28.s64 = r28.s64 + 56;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// add r3,r11,r7
	ctx.r3.u64 = r11.u64 + ctx.r7.u64;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// bne 0x826c73d8
	if (!cr0.eq) goto loc_826C73D8;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826C7500"))) PPC_WEAK_FUNC(sub_826C7500);
PPC_FUNC_IMPL(__imp__sub_826C7500) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826C7504"))) PPC_WEAK_FUNC(sub_826C7504);
PPC_FUNC_IMPL(__imp__sub_826C7504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826C7508"))) PPC_WEAK_FUNC(sub_826C7508);
PPC_FUNC_IMPL(__imp__sub_826C7508) {
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
	// addi r28,r3,1072
	r28.s64 = ctx.r3.s64 + 1072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r11,1048(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826c75a4
	if (cr6.eq) goto loc_826C75A4;
	// lwz r8,1024(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1024);
	// addi r9,r31,1016
	ctx.r9.s64 = r31.s64 + 1016;
	// addi r11,r31,1060
	r11.s64 = r31.s64 + 1060;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// addi r10,r31,1064
	ctx.r10.s64 = r31.s64 + 1064;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r9,1048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// stw r3,1048(r31)
	PPC_STORE_U32(r31.u32 + 1048, ctx.r3.u32);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// stw r30,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r30.u32);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r9,1060(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1060);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,1060(r31)
	PPC_STORE_U32(r31.u32 + 1060, ctx.r9.u32);
	// lwz r8,1064(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1064);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x826c759c
	if (cr6.lt) goto loc_826C759C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826C759C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_826C75A4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826C75B4"))) PPC_WEAK_FUNC(sub_826C75B4);
PPC_FUNC_IMPL(__imp__sub_826C75B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

