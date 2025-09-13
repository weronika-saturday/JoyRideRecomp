#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826335FC"))) PPC_WEAK_FUNC(sub_826335FC);
PPC_FUNC_IMPL(__imp__sub_826335FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633600"))) PPC_WEAK_FUNC(sub_82633600);
PPC_FUNC_IMPL(__imp__sub_82633600) {
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
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r30
	cr6.compare<int32_t>(ctx.r5.s32, r30.s32, xer);
	// ble cr6,0x8263367c
	if (!cr6.gt) goto loc_8263367C;
loc_82633630:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x82633570
	sub_82633570(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x826336ac
	if (!cr6.eq) goto loc_826336AC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bgt cr6,0x82633630
	if (cr6.gt) goto loc_82633630;
loc_8263367C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_826336AC:
	// subf r3,r29,r27
	ctx.r3.s64 = r27.s64 - r29.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826336B4"))) PPC_WEAK_FUNC(sub_826336B4);
PPC_FUNC_IMPL(__imp__sub_826336B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826336B8"))) PPC_WEAK_FUNC(sub_826336B8);
PPC_FUNC_IMPL(__imp__sub_826336B8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82633570
	sub_82633570(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826336f0
	if (cr6.eq) goto loc_826336F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826336F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82633700"))) PPC_WEAK_FUNC(sub_82633700);
PPC_FUNC_IMPL(__imp__sub_82633700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633704"))) PPC_WEAK_FUNC(sub_82633704);
PPC_FUNC_IMPL(__imp__sub_82633704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633708"))) PPC_WEAK_FUNC(sub_82633708);
PPC_FUNC_IMPL(__imp__sub_82633708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82633744
	if (cr6.eq) goto loc_82633744;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8263375c
	goto loc_8263375C;
loc_82633744:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
loc_8263375C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82633778"))) PPC_WEAK_FUNC(sub_82633778);
PPC_FUNC_IMPL(__imp__sub_82633778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263377C"))) PPC_WEAK_FUNC(sub_8263377C);
PPC_FUNC_IMPL(__imp__sub_8263377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633780"))) PPC_WEAK_FUNC(sub_82633780);
PPC_FUNC_IMPL(__imp__sub_82633780) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826337bc
	if (cr6.eq) goto loc_826337BC;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826337c4
	goto loc_826337C4;
loc_826337BC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
loc_826337C4:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826337E0"))) PPC_WEAK_FUNC(sub_826337E0);
PPC_FUNC_IMPL(__imp__sub_826337E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826337E4"))) PPC_WEAK_FUNC(sub_826337E4);
PPC_FUNC_IMPL(__imp__sub_826337E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826337E8"))) PPC_WEAK_FUNC(sub_826337E8);
PPC_FUNC_IMPL(__imp__sub_826337E8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82633834
	if (cr6.eq) goto loc_82633834;
	// bl 0x82633570
	sub_82633570(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82633834:
	// li r11,-1
	r11.s64 = -1;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x82633864
	if (cr6.lt) goto loc_82633864;
	// beq cr6,0x82633858
	if (cr6.eq) goto loc_82633858;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bge cr6,0x82633868
	if (!cr6.lt) goto loc_82633868;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// b 0x82633868
	goto loc_82633868;
loc_82633858:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x82633868
	goto loc_82633868;
loc_82633864:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82633868:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82633888
	if (!cr6.lt) goto loc_82633888;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82633888:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8263389c
	if (!cr6.gt) goto loc_8263389C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8263389C:
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826338A4"))) PPC_WEAK_FUNC(sub_826338A4);
PPC_FUNC_IMPL(__imp__sub_826338A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826338A8"))) PPC_WEAK_FUNC(sub_826338A8);
PPC_FUNC_IMPL(__imp__sub_826338A8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82633900
	if (cr6.eq) goto loc_82633900;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82633908
	if (cr6.lt) goto loc_82633908;
loc_826338E4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82633900:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826338e4
	goto loc_826338E4;
loc_82633908:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263391C"))) PPC_WEAK_FUNC(sub_8263391C);
PPC_FUNC_IMPL(__imp__sub_8263391C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633920"))) PPC_WEAK_FUNC(sub_82633920);
PPC_FUNC_IMPL(__imp__sub_82633920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,8680
	ctx.r5.s64 = ctx.r10.s64 + 8680;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r8,8672
	ctx.r4.s64 = ctx.r8.s64 + 8672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_826339A0"))) PPC_WEAK_FUNC(sub_826339A0);
PPC_FUNC_IMPL(__imp__sub_826339A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826339A4"))) PPC_WEAK_FUNC(sub_826339A4);
PPC_FUNC_IMPL(__imp__sub_826339A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826339A8"))) PPC_WEAK_FUNC(sub_826339A8);
PPC_FUNC_IMPL(__imp__sub_826339A8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,8692
	ctx.r8.s64 = r11.s64 + 8692;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x826339f8
	if (!cr6.eq) goto loc_826339F8;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_826339F8:
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// beq cr6,0x82633a10
	if (cr6.eq) goto loc_82633A10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
loc_82633A10:
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

__attribute__((alias("__imp__sub_82633A24"))) PPC_WEAK_FUNC(sub_82633A24);
PPC_FUNC_IMPL(__imp__sub_82633A24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633A28"))) PPC_WEAK_FUNC(sub_82633A28);
PPC_FUNC_IMPL(__imp__sub_82633A28) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,8692
	ctx.r9.s64 = ctx.r10.s64 + 8692;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82633a70
	if (cr6.eq) goto loc_82633A70;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82633A70:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82627d30
	sub_82627D30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
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

__attribute__((alias("__imp__sub_82633AAC"))) PPC_WEAK_FUNC(sub_82633AAC);
PPC_FUNC_IMPL(__imp__sub_82633AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633AB0"))) PPC_WEAK_FUNC(sub_82633AB0);
PPC_FUNC_IMPL(__imp__sub_82633AB0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,8692
	ctx.r10.s64 = r11.s64 + 8692;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82633570
	sub_82633570(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82633af4
	if (cr6.eq) goto loc_82633AF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82633AF4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82633b04
	if (cr6.eq) goto loc_82633B04;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82633B04:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82633b24
	if (cr6.eq) goto loc_82633B24;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82627d88
	sub_82627D88(ctx, base);
loc_82633B24:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82633B44"))) PPC_WEAK_FUNC(sub_82633B44);
PPC_FUNC_IMPL(__imp__sub_82633B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633B48"))) PPC_WEAK_FUNC(sub_82633B48);
PPC_FUNC_IMPL(__imp__sub_82633B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-12044
	ctx.r3.s64 = r11.s64 + -12044;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633B54"))) PPC_WEAK_FUNC(sub_82633B54);
PPC_FUNC_IMPL(__imp__sub_82633B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633B58"))) PPC_WEAK_FUNC(sub_82633B58);
PPC_FUNC_IMPL(__imp__sub_82633B58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82633ab0
	sub_82633AB0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82633ba4
	if (cr6.eq) goto loc_82633BA4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82633BA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82633BBC"))) PPC_WEAK_FUNC(sub_82633BBC);
PPC_FUNC_IMPL(__imp__sub_82633BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633BC0"))) PPC_WEAK_FUNC(sub_82633BC0);
PPC_FUNC_IMPL(__imp__sub_82633BC0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r11,r6,1
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// divw r28,r6,r10
	r28.s32 = ctx.r6.s32 / ctx.r10.s32;
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// mullw r7,r10,r28
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf r11,r7,r6
	r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82633c70
	if (!cr6.gt) goto loc_82633C70;
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82633C08:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// bge cr6,0x82633c20
	if (!cr6.lt) goto loc_82633C20;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// b 0x82633c24
	goto loc_82633C24;
loc_82633C20:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82633C24:
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r31,r11,r10
	r31.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// lwzx r10,r29,r9
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// ble cr6,0x82633c68
	if (!cr6.gt) goto loc_82633C68;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// subf. r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r27,r31,r27
	r27.u64 = r31.u64 + r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// bgt 0x82633c08
	if (cr0.gt) goto loc_82633C08;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82633C68:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
loc_82633C70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82633C74"))) PPC_WEAK_FUNC(sub_82633C74);
PPC_FUNC_IMPL(__imp__sub_82633C74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82633C78"))) PPC_WEAK_FUNC(sub_82633C78);
PPC_FUNC_IMPL(__imp__sub_82633C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r9,r11,8756
	ctx.r9.s64 = r11.s64 + 8756;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633CA0"))) PPC_WEAK_FUNC(sub_82633CA0);
PPC_FUNC_IMPL(__imp__sub_82633CA0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82633d30
	if (cr6.eq) goto loc_82633D30;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r11,r8,r9
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// subf r30,r6,r7
	r30.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bge cr6,0x82633d0c
	if (!cr6.lt) goto loc_82633D0C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82633D0C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82633bc0
	sub_82633BC0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82633D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82633D38"))) PPC_WEAK_FUNC(sub_82633D38);
PPC_FUNC_IMPL(__imp__sub_82633D38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82633D3C"))) PPC_WEAK_FUNC(sub_82633D3C);
PPC_FUNC_IMPL(__imp__sub_82633D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633D40"))) PPC_WEAK_FUNC(sub_82633D40);
PPC_FUNC_IMPL(__imp__sub_82633D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x82631098
	sub_82631098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82633D54"))) PPC_WEAK_FUNC(sub_82633D54);
PPC_FUNC_IMPL(__imp__sub_82633D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633D58"))) PPC_WEAK_FUNC(sub_82633D58);
PPC_FUNC_IMPL(__imp__sub_82633D58) {
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
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// ble cr6,0x82633de8
	if (!cr6.gt) goto loc_82633DE8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r27,r11,r5
	r27.u64 = r11.u64 + ctx.r5.u64;
	// addi r31,r27,1
	r31.s64 = r27.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82633dcc
	if (!cr6.lt) goto loc_82633DCC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82633dbc
	if (cr6.lt) goto loc_82633DBC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82633DBC:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82633DCC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stbx r10,r8,r27
	PPC_STORE_U8(ctx.r8.u32 + r27.u32, ctx.r10.u8);
	// b 0x82633e04
	goto loc_82633E04;
loc_82633DE8:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x82633e04
	if (!cr6.gt) goto loc_82633E04;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82633E04:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82633E34"))) PPC_WEAK_FUNC(sub_82633E34);
PPC_FUNC_IMPL(__imp__sub_82633E34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82633E38"))) PPC_WEAK_FUNC(sub_82633E38);
PPC_FUNC_IMPL(__imp__sub_82633E38) {
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
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82633ea4
	if (cr6.eq) goto loc_82633EA4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82633ea4
	if (!cr6.eq) goto loc_82633EA4;
	// clrlwi r4,r11,2
	ctx.r4.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r10,7696
	ctx.r5.s64 = ctx.r10.s64 + 7696;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82633EA4:
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

__attribute__((alias("__imp__sub_82633EB8"))) PPC_WEAK_FUNC(sub_82633EB8);
PPC_FUNC_IMPL(__imp__sub_82633EB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82633EBC"))) PPC_WEAK_FUNC(sub_82633EBC);
PPC_FUNC_IMPL(__imp__sub_82633EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82633EC0"))) PPC_WEAK_FUNC(sub_82633EC0);
PPC_FUNC_IMPL(__imp__sub_82633EC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ble cr6,0x82633fc8
	if (!cr6.gt) goto loc_82633FC8;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	r25.s64 = 0;
loc_82633EF0:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r11,r29
	r30.s64 = r29.s64 - r11.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82633f74
	if (!cr0.eq) goto loc_82633F74;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82633f4c
	if (!cr6.eq) goto loc_82633F4C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82633F4C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
loc_82633F74:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// ble cr6,0x82633fb4
	if (!cr6.gt) goto loc_82633FB4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r28,r30,r28
	r28.s64 = r28.s64 - r30.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r26,r30,r26
	r26.u64 = r30.u64 + r26.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bgt 0x82633ef0
	if (cr0.gt) goto loc_82633EF0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_82633FB4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82633FC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82633FCC"))) PPC_WEAK_FUNC(sub_82633FCC);
PPC_FUNC_IMPL(__imp__sub_82633FCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82633FD0"))) PPC_WEAK_FUNC(sub_82633FD0);
PPC_FUNC_IMPL(__imp__sub_82633FD0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82633ec0
	sub_82633EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82634000"))) PPC_WEAK_FUNC(sub_82634000);
PPC_FUNC_IMPL(__imp__sub_82634000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634004"))) PPC_WEAK_FUNC(sub_82634004);
PPC_FUNC_IMPL(__imp__sub_82634004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634008"))) PPC_WEAK_FUNC(sub_82634008);
PPC_FUNC_IMPL(__imp__sub_82634008) {
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
	// lwz r29,12(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82634048
	if (cr6.lt) goto loc_82634048;
	// beq cr6,0x82634040
	if (cr6.eq) goto loc_82634040;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x8263404c
	if (!cr6.lt) goto loc_8263404C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r29,r4,r10
	r29.s64 = ctx.r10.s64 - ctx.r4.s64;
	// b 0x8263404c
	goto loc_8263404C;
loc_82634040:
	// add r29,r29,r4
	r29.u64 = r29.u64 + ctx.r4.u64;
	// b 0x8263404c
	goto loc_8263404C;
loc_82634048:
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
loc_8263404C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x826340ec
	if (cr6.lt) goto loc_826340EC;
	// lwz r31,8(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x826340dc
	if (!cr6.gt) goto loc_826340DC;
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x826340a0
	if (!cr6.lt) goto loc_826340A0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82634090
	if (cr6.lt) goto loc_82634090;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82634090:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826340A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// ble 0x826340d0
	if (!cr0.gt) goto loc_826340D0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826340d0
	if (cr6.eq) goto loc_826340D0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826340C8:
	// stbu r9,1(r11)
	ea = 1 + r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	r11.u32 = ea;
	// bdnz 0x826340c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826340C8;
loc_826340D0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_826340DC:
	// stw r29,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_826340EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826340F4"))) PPC_WEAK_FUNC(sub_826340F4);
PPC_FUNC_IMPL(__imp__sub_826340F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826340F8"))) PPC_WEAK_FUNC(sub_826340F8);
PPC_FUNC_IMPL(__imp__sub_826340F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634118"))) PPC_WEAK_FUNC(sub_82634118);
PPC_FUNC_IMPL(__imp__sub_82634118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82634180
	if (!cr6.gt) goto loc_82634180;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82634140:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r26,r11,r30
	r26.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x82634140
	if (cr6.lt) goto loc_82634140;
loc_82634180:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826341bc
	if (!cr6.eq) goto loc_826341BC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826341BC:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826341D4"))) PPC_WEAK_FUNC(sub_826341D4);
PPC_FUNC_IMPL(__imp__sub_826341D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826341D8"))) PPC_WEAK_FUNC(sub_826341D8);
PPC_FUNC_IMPL(__imp__sub_826341D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r27,12(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// addic. r30,r27,-1
	xer.ca = r27.u32 > 0;
	r30.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82634248
	if (!cr0.gt) goto loc_82634248;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82634200:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r25,r11,r29
	r25.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82633ec0
	sub_82633EC0(ctx, base);
	// lwz r24,0(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82634200
	if (!cr0.eq) goto loc_82634200;
loc_82634248:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82634294
	if (cr6.eq) goto loc_82634294;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r30,-4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82633ec0
	sub_82633EC0(ctx, base);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82634294:
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826342d0
	if (!cr6.eq) goto loc_826342D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826342D0:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82634118
	sub_82634118(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826342E8"))) PPC_WEAK_FUNC(sub_826342E8);
PPC_FUNC_IMPL(__imp__sub_826342E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826342EC"))) PPC_WEAK_FUNC(sub_826342EC);
PPC_FUNC_IMPL(__imp__sub_826342EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826342F0"))) PPC_WEAK_FUNC(sub_826342F0);
PPC_FUNC_IMPL(__imp__sub_826342F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82634118
	sub_82634118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826342F8"))) PPC_WEAK_FUNC(sub_826342F8);
PPC_FUNC_IMPL(__imp__sub_826342F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82634118
	sub_82634118(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82634354
	if (!cr6.eq) goto loc_82634354;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82634354:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82634374"))) PPC_WEAK_FUNC(sub_82634374);
PPC_FUNC_IMPL(__imp__sub_82634374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634378"))) PPC_WEAK_FUNC(sub_82634378);
PPC_FUNC_IMPL(__imp__sub_82634378) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,8756
	ctx.r9.s64 = r11.s64 + 8756;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// bne cr6,0x826343dc
	if (!cr6.eq) goto loc_826343DC;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826343dc
	if (cr6.eq) goto loc_826343DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826342f8
	sub_826342F8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826343DC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826343FC"))) PPC_WEAK_FUNC(sub_826343FC);
PPC_FUNC_IMPL(__imp__sub_826343FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634400"))) PPC_WEAK_FUNC(sub_82634400);
PPC_FUNC_IMPL(__imp__sub_82634400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634418"))) PPC_WEAK_FUNC(sub_82634418);
PPC_FUNC_IMPL(__imp__sub_82634418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634424"))) PPC_WEAK_FUNC(sub_82634424);
PPC_FUNC_IMPL(__imp__sub_82634424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634428"))) PPC_WEAK_FUNC(sub_82634428);
PPC_FUNC_IMPL(__imp__sub_82634428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// srawi r5,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = r11.s32 >> 31;
	// subfc r4,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r4.s64 = r11.s64 - ctx.r9.s64;
	// adde r11,r8,r5
	temp.u8 = (ctx.r8.u32 + ctx.r5.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r8.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634460"))) PPC_WEAK_FUNC(sub_82634460);
PPC_FUNC_IMPL(__imp__sub_82634460) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82634378
	sub_82634378(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826344ac
	if (cr6.eq) goto loc_826344AC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826344AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_826344C4"))) PPC_WEAK_FUNC(sub_826344C4);
PPC_FUNC_IMPL(__imp__sub_826344C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826344C8"))) PPC_WEAK_FUNC(sub_826344C8);
PPC_FUNC_IMPL(__imp__sub_826344C8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826344C8"))) PPC_WEAK_FUNC(sub_826344C8);
PPC_FUNC_IMPL(__imp__sub_826344C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ea1b0
	sub_828EA1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826344CC"))) PPC_WEAK_FUNC(sub_826344CC);
PPC_FUNC_IMPL(__imp__sub_826344CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826344D0"))) PPC_WEAK_FUNC(sub_826344D0);
PPC_FUNC_IMPL(__imp__sub_826344D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ec890
	sub_828EC890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826344D0"))) PPC_WEAK_FUNC(sub_826344D0);
PPC_FUNC_IMPL(__imp__sub_826344D0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_826344D4"))) PPC_WEAK_FUNC(sub_826344D4);
PPC_FUNC_IMPL(__imp__sub_826344D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826344D8"))) PPC_WEAK_FUNC(sub_826344D8);
PPC_FUNC_IMPL(__imp__sub_826344D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// bltlr cr6
	if (cr6.lt) return;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_826344F8:
	// ldx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + r11.u32);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bdnz 0x826344f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826344F8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263450C"))) PPC_WEAK_FUNC(sub_8263450C);
PPC_FUNC_IMPL(__imp__sub_8263450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634510"))) PPC_WEAK_FUNC(sub_82634510);
PPC_FUNC_IMPL(__imp__sub_82634510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// bltlr cr6
	if (cr6.lt) return;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82634530:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bdnz 0x82634530
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82634530;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634544"))) PPC_WEAK_FUNC(sub_82634544);
PPC_FUNC_IMPL(__imp__sub_82634544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634548"))) PPC_WEAK_FUNC(sub_82634548);
PPC_FUNC_IMPL(__imp__sub_82634548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// bltlr cr6
	if (cr6.lt) return;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = r11.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82634568:
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// bdnz 0x82634568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82634568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263457C"))) PPC_WEAK_FUNC(sub_8263457C);
PPC_FUNC_IMPL(__imp__sub_8263457C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634580"))) PPC_WEAK_FUNC(sub_82634580);
PPC_FUNC_IMPL(__imp__sub_82634580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82634598:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bdnz 0x82634598
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82634598;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826345AC"))) PPC_WEAK_FUNC(sub_826345AC);
PPC_FUNC_IMPL(__imp__sub_826345AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826345B0"))) PPC_WEAK_FUNC(sub_826345B0);
PPC_FUNC_IMPL(__imp__sub_826345B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r9,r5,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8263461c
	if (cr6.eq) goto loc_8263461C;
	// clrlwi r11,r5,29
	r11.u64 = ctx.r5.u32 & 0x7;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263461c
	if (!cr6.eq) goto loc_8263461C;
	// clrlwi r11,r3,29
	r11.u64 = ctx.r3.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263461c
	if (!cr6.eq) goto loc_8263461C;
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263461c
	if (!cr6.eq) goto loc_8263461C;
	// rlwinm r10,r5,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// blt cr6,0x82634610
	if (cr6.lt) goto loc_82634610;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_82634600:
	// ldx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + r11.u32);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bdnz 0x82634600
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82634600;
loc_82634610:
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8263461C:
	// rlwinm r9,r5,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82634688
	if (cr6.eq) goto loc_82634688;
	// clrlwi r11,r5,30
	r11.u64 = ctx.r5.u32 & 0x3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82634688
	if (!cr6.eq) goto loc_82634688;
	// clrlwi r11,r3,30
	r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82634688
	if (!cr6.eq) goto loc_82634688;
	// clrlwi r11,r4,30
	r11.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82634688
	if (!cr6.eq) goto loc_82634688;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// blt cr6,0x8263467c
	if (cr6.lt) goto loc_8263467C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_8263466C:
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bdnz 0x8263466c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263466C;
loc_8263467C:
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82634688:
	// rlwinm r9,r5,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826346f4
	if (cr6.eq) goto loc_826346F4;
	// clrlwi r11,r5,31
	r11.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826346f4
	if (!cr6.eq) goto loc_826346F4;
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826346f4
	if (!cr6.eq) goto loc_826346F4;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826346f4
	if (!cr6.eq) goto loc_826346F4;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// blt cr6,0x826346e8
	if (cr6.lt) goto loc_826346E8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_826346D8:
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// bdnz 0x826346d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826346D8;
loc_826346E8:
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
loc_826346F4:
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_8263470C:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bdnz 0x8263470c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263470C;
}

__attribute__((alias("__imp__sub_8263471C"))) PPC_WEAK_FUNC(sub_8263471C);
PPC_FUNC_IMPL(__imp__sub_8263471C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634720"))) PPC_WEAK_FUNC(sub_82634720);
PPC_FUNC_IMPL(__imp__sub_82634720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// ble cr6,0x8263472c
	if (!cr6.gt) goto loc_8263472C;
	// b 0x826345b0
	sub_826345B0(ctx, base);
	return;
loc_8263472C:
	// bgelr cr6
	if (!cr6.lt) return;
}

__attribute__((alias("__imp__sub_82634730"))) PPC_WEAK_FUNC(sub_82634730);
PPC_FUNC_IMPL(__imp__sub_82634730) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ea1b0
	sub_828EA1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82634734"))) PPC_WEAK_FUNC(sub_82634734);
PPC_FUNC_IMPL(__imp__sub_82634734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634738"))) PPC_WEAK_FUNC(sub_82634738);
PPC_FUNC_IMPL(__imp__sub_82634738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82630458
	sub_82630458(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82635868
	sub_82635868(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x826356a8
	sub_826356A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// addi r8,r1,496
	ctx.r8.s64 = ctx.r1.s64 + 496;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r3,r11,3792
	ctx.r3.s64 = r11.s64 + 3792;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,0
	r30.s64 = 0;
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v10,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v127,v10,0
	_mm_store_si128((__m128i*)v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lfs f31,7832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	f31.f64 = double(temp.f32);
	// b 0x826347ec
	goto loc_826347EC;
loc_826347D4:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_826347EC:
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262a6d8
	sub_8262A6D8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8262a380
	sub_8262A380(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262a8b8
	sub_8262A8B8(ctx, base);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v127,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262a4e8
	sub_8262A4E8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// bge cr6,0x826348b0
	if (!cr6.lt) goto loc_826348B0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262a578
	sub_8262A578(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826347d4
	if (cr6.eq) goto loc_826347D4;
loc_826348B0:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// li r7,16
	ctx.r7.s64 = 16;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)v127.u8));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r5,224
	ctx.r5.s64 = 224;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v26,v0,v0
	_mm_store_si128((__m128i*)v26.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v13,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r10,7632
	r30.s64 = ctx.r10.s64 + 7632;
	// stvx128 v12,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,208
	ctx.r4.s64 = 208;
	// lvx128 v27,r31,r5
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((r31.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor128 v9,v127,v127
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v127.u8));
	// vmsum3fp128 v22,v26,v26
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v22.f32, _mm_dp_ps(_mm_load_ps(v26.f32), _mm_load_ps(v26.f32), 0xEF));
	// vor128 v10,v127,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v127.u8));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lvx128 v25,r31,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v24,v25,v25
	_mm_store_ps(v24.f32, _mm_dp_ps(_mm_load_ps(v25.f32), _mm_load_ps(v25.f32), 0xEF));
	// vmsum3fp128 v23,v27,v27
	_mm_store_ps(v23.f32, _mm_dp_ps(_mm_load_ps(v27.f32), _mm_load_ps(v27.f32), 0xEF));
	// vrsqrtefp v13,v24
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v24.f32))));
	// vrsqrtefp v11,v22
	_mm_store_ps(ctx.v11.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v22.f32))));
	// vmulfp128 v4,v24,v0
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v2,v22,v0
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v28,v127,v24
	_mm_store_ps(v28.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v24.f32)));
	// vcmpeqfp128 v31,v127,v22
	_mm_store_ps(v31.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v22.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v5,v11,v11
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vrsqrtefp v12,v23
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v23.f32))));
	// vmulfp128 v3,v23,v0
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v30,v127,v23
	_mm_store_ps(v30.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v23.f32)));
	// vnmsubfp v29,v4,v7,v0
	_mm_store_ps(v29.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v8,v2,v5,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v7,v12,v12
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v29,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v29.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v11,v8,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v29,v3,v7,v0
	_mm_store_ps(v29.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v7,v11,v11
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v12,v29,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v29.f32)), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v6,v4,v8,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v8,v12,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v3,v8,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v2,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v8,v13,v1,v28
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v1.u8))));
	// vmaddfp v13,v12,v6,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v12.f32)));
	// vspltw v21,v8,0
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vmaddfp v0,v11,v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v12,v25,v21
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(v21.f32)));
	// vsel v11,v13,v9,v30
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vsel v13,v0,v10,v31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vspltw v20,v11,0
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vpermwi128 v18,v12,135
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v17,v12,99
	_mm_store_si128((__m128i*)v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// vspltw v19,v13,0
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v27,v20
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v20.f32)));
	// vmulfp128 v13,v26,v19
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v19.f32)));
	// vpermwi128 v16,v0,99
	_mm_store_si128((__m128i*)v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vpermwi128 v15,v0,135
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v14,v18,v16
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(v16.f32)));
	// vmulfp128 v63,v17,v15
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v17.f32), _mm_load_ps(v15.f32)));
	// vsubfp128 v62,v63,v14
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(v14.f32)));
	// vmsum3fp128 v11,v13,v62
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v62.f32), 0xEF));
	// stvewx v11,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x826349fc
	if (!cr6.lt) goto loc_826349FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,6240
	ctx.r10.s64 = r11.s64 + 6240;
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v13,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)));
loc_826349FC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stvewx v11,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82634a18
	if (cr6.lt) goto loc_82634A18;
	// li r11,0
	r11.s64 = 0;
loc_82634A18:
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// stb r11,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r11.u8);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262b8e0
	sub_8262B8E0(ctx, base);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// vor128 v12,v127,v127
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v127.u8));
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v6,v0,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v5,v6,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v5,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v8,v127,v5
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r6,r1,704
	ctx.r6.s64 = ctx.r1.s64 + 704;
	// lvx128 v2,r0,r31
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826305c8
	sub_826305C8(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82635868
	sub_82635868(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x826356a8
	sub_826356A8(ctx, base);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826354b0
	sub_826354B0(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,-31496(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31496);
	f31.f64 = double(temp.f32);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lvx128 v31,r0,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,-25600(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r6,r8,5456
	ctx.r6.s64 = ctx.r8.s64 + 5456;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vspltisw v1,-1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v30,r0,r10
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v28,v31,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xFF));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r7,-12480
	ctx.r5.s64 = ctx.r7.s64 + -12480;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r4,224
	ctx.r4.s64 = 224;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v29,v30,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v30.u32), 0xFF));
	// vsubfp v27,v0,v29
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v29.f32)));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vand v26,v27,v0
	_mm_store_si128((__m128i*)v26.u8, _mm_and_si128(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpgefp v25,v28,v26
	_mm_store_ps(v25.f32, _mm_cmpge_ps(_mm_load_ps(v28.f32), _mm_load_ps(v26.f32)));
	// lvx128 v0,r5,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vor v24,v25,v0
	_mm_store_si128((__m128i*)v24.u8, _mm_or_si128(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v23,v24,v1
	_mm_store_si128((__m128i*)v23.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)v24.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	cr6.setFromMask(_mm_load_ps(v23.f32), 0xF);
	// mfocrf r3,2
	ctx.r3.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// not r11,r3
	r11.u64 = ~ctx.r3.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stb r9,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r9.u8);
	// lfs f9,32(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vxor v22,v0,v0
	_mm_store_si128((__m128i*)v22.u8, _mm_setzero_si128());
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// vxor v21,v0,v0
	_mm_store_si128((__m128i*)v21.u8, _mm_setzero_si128());
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// vxor v20,v0,v0
	_mm_store_si128((__m128i*)v20.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vxor v19,v0,v0
	_mm_store_si128((__m128i*)v19.u8, _mm_setzero_si128());
	// lfs f10,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v22,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f6,f0,f10
	ctx.f6.f64 = double(float(f0.f64 / ctx.f10.f64));
	// stvx128 v21,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(f0.f64 / ctx.f9.f64));
	// stvx128 v20,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(f0.f64 / ctx.f7.f64));
	// stvx128 v19,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f6,216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f0,236(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x826354b0
	sub_826354B0(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r10,-11936
	ctx.r5.s64 = ctx.r10.s64 + -11936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634f60
	sub_82634F60(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,49(r31)
	PPC_STORE_U8(r31.u32 + 49, ctx.r7.u8);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82634C40"))) PPC_WEAK_FUNC(sub_82634C40);
PPC_FUNC_IMPL(__imp__sub_82634C40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82634C44"))) PPC_WEAK_FUNC(sub_82634C44);
PPC_FUNC_IMPL(__imp__sub_82634C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634C48"))) PPC_WEAK_FUNC(sub_82634C48);
PPC_FUNC_IMPL(__imp__sub_82634C48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82634738
	sub_82634738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82634C4C"))) PPC_WEAK_FUNC(sub_82634C4C);
PPC_FUNC_IMPL(__imp__sub_82634C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634C50"))) PPC_WEAK_FUNC(sub_82634C50);
PPC_FUNC_IMPL(__imp__sub_82634C50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r11,-12816
	ctx.r8.s64 = r11.s64 + -12816;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r3,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826356a8
	sub_826356A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82634738
	sub_82634738(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82634CC8"))) PPC_WEAK_FUNC(sub_82634CC8);
PPC_FUNC_IMPL(__imp__sub_82634CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634CCC"))) PPC_WEAK_FUNC(sub_82634CCC);
PPC_FUNC_IMPL(__imp__sub_82634CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634CD0"))) PPC_WEAK_FUNC(sub_82634CD0);
PPC_FUNC_IMPL(__imp__sub_82634CD0) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82634d28
	if (cr6.eq) goto loc_82634D28;
loc_82634CF0:
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(r31.s32, 512, xer);
	// li r5,512
	ctx.r5.s64 = 512;
	// bgt cr6,0x82634d00
	if (cr6.gt) goto loc_82634D00;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82634D00:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82634d28
	if (cr6.eq) goto loc_82634D28;
	// subf. r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82634cf0
	if (!cr0.eq) goto loc_82634CF0;
loc_82634D28:
	// subf r3,r31,r29
	ctx.r3.s64 = r29.s64 - r31.s64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
}

__attribute__((alias("__imp__sub_82634D30"))) PPC_WEAK_FUNC(sub_82634D30);
PPC_FUNC_IMPL(__imp__sub_82634D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82634D34"))) PPC_WEAK_FUNC(sub_82634D34);
PPC_FUNC_IMPL(__imp__sub_82634D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634D38"))) PPC_WEAK_FUNC(sub_82634D38);
PPC_FUNC_IMPL(__imp__sub_82634D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82634d7c
	if (cr6.eq) goto loc_82634D7C;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82634D7C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82634D8C"))) PPC_WEAK_FUNC(sub_82634D8C);
PPC_FUNC_IMPL(__imp__sub_82634D8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634D90"))) PPC_WEAK_FUNC(sub_82634D90);
PPC_FUNC_IMPL(__imp__sub_82634D90) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634D98"))) PPC_WEAK_FUNC(sub_82634D98);
PPC_FUNC_IMPL(__imp__sub_82634D98) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634DA0"))) PPC_WEAK_FUNC(sub_82634DA0);
PPC_FUNC_IMPL(__imp__sub_82634DA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634DA8"))) PPC_WEAK_FUNC(sub_82634DA8);
PPC_FUNC_IMPL(__imp__sub_82634DA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634DB0"))) PPC_WEAK_FUNC(sub_82634DB0);
PPC_FUNC_IMPL(__imp__sub_82634DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634DBC"))) PPC_WEAK_FUNC(sub_82634DBC);
PPC_FUNC_IMPL(__imp__sub_82634DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634DC0"))) PPC_WEAK_FUNC(sub_82634DC0);
PPC_FUNC_IMPL(__imp__sub_82634DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634DCC"))) PPC_WEAK_FUNC(sub_82634DCC);
PPC_FUNC_IMPL(__imp__sub_82634DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634DD0"))) PPC_WEAK_FUNC(sub_82634DD0);
PPC_FUNC_IMPL(__imp__sub_82634DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82634DDC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r8,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82634e10
	if (cr6.eq) goto loc_82634E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x82634ddc
	if (cr6.lt) goto loc_82634DDC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82634E10:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634E1C"))) PPC_WEAK_FUNC(sub_82634E1C);
PPC_FUNC_IMPL(__imp__sub_82634E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634E20"))) PPC_WEAK_FUNC(sub_82634E20);
PPC_FUNC_IMPL(__imp__sub_82634E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,52(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f4,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634E84"))) PPC_WEAK_FUNC(sub_82634E84);
PPC_FUNC_IMPL(__imp__sub_82634E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634E88"))) PPC_WEAK_FUNC(sub_82634E88);
PPC_FUNC_IMPL(__imp__sub_82634E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f11,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f6,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f3,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f2,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f1,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634F0C"))) PPC_WEAK_FUNC(sub_82634F0C);
PPC_FUNC_IMPL(__imp__sub_82634F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82634F10"))) PPC_WEAK_FUNC(sub_82634F10);
PPC_FUNC_IMPL(__imp__sub_82634F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// vmulfp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// li r11,48
	r11.s64 = 48;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r5,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r5,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r5,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82634F60"))) PPC_WEAK_FUNC(sub_82634F60);
PPC_FUNC_IMPL(__imp__sub_82634F60) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r9,r11,5456
	ctx.r9.s64 = r11.s64 + 5456;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r7,240
	ctx.r7.s64 = 240;
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r6,r8,-12480
	ctx.r6.s64 = ctx.r8.s64 + -12480;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vand v9,v12,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvx128 v12,r6,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcmpgefp v8,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// vor v7,v8,v12
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v6.f32), 0xF);
	// bge cr6,0x82635050
	if (!cr6.lt) goto loc_82635050;
	// li r11,16
	r11.s64 = 16;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r5,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vand v6,v9,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpgefp v5,v7,v6
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v4,v5,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v3.f32), 0xF);
	// bge cr6,0x82635050
	if (!cr6.lt) goto loc_82635050;
	// li r11,32
	r11.s64 = 32;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r5,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vand v6,v9,v13
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpgefp v5,v7,v6
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vor v4,v5,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v3.f32), 0xF);
	// bge cr6,0x82635050
	if (!cr6.lt) goto loc_82635050;
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r11,48
	r11.s64 = 48;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v11,r5,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r4,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// li r11,1
	r11.s64 = 1;
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// vand v8,v9,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v6,v7,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vcmpgefp v5,v6,v8
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)));
	// vor v4,v5,v12
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vcmpequw. v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v3.f32), 0xF);
	// blt cr6,0x82635054
	if (cr6.lt) goto loc_82635054;
loc_82635050:
	// li r11,0
	r11.s64 = 0;
loc_82635054:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
}

__attribute__((alias("__imp__sub_82635058"))) PPC_WEAK_FUNC(sub_82635058);
PPC_FUNC_IMPL(__imp__sub_82635058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263505C"))) PPC_WEAK_FUNC(sub_8263505C);
PPC_FUNC_IMPL(__imp__sub_8263505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635060"))) PPC_WEAK_FUNC(sub_82635060);
PPC_FUNC_IMPL(__imp__sub_82635060) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
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
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaac0
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-296
	ctx.r6.s64 = ctx.r1.s64 + -296;
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f31,f12,f13
	f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f30,f9,f0
	f30.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f29,f0,f8
	f29.f64 = double(float(f0.f64 * ctx.f8.f64));
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f27,f12,f6
	f27.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f26,f9,f4
	f26.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f25,f12,f3
	f25.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f28,f5,f7,f31
	f28.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 - f31.f64));
	// lfs f31,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f31.f64 = double(temp.f32);
	// fmsubs f22,f10,f11,f30
	f22.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - f30.f64));
	// lfs f30,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f30.f64 = double(temp.f32);
	// fmuls f24,f31,f0
	f24.f64 = double(float(f31.f64 * f0.f64));
	// lfs f23,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	f23.f64 = double(temp.f32);
	// fmuls f20,f31,f4
	f20.f64 = double(float(f31.f64 * ctx.f4.f64));
	// lfs f18,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f18.f64 = double(temp.f32);
	// fmsubs f19,f11,f4,f29
	f19.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 - f29.f64));
	// stfs f19,-276(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// fmuls f17,f2,f3
	f17.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f28,-288(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// fmsubs f29,f5,f2,f27
	f29.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 - f27.f64));
	// stfs f22,-252(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmuls f21,f2,f13
	f21.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f29,-280(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmsubs f27,f10,f8,f26
	f27.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 - f26.f64));
	// stfs f27,-244(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// fmsubs f26,f5,f30,f25
	f26.f64 = double(float(ctx.f5.f64 * f30.f64 - f25.f64));
	// stfs f26,-304(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -304, temp.u32);
	// fmuls f16,f31,f10
	f16.f64 = double(float(f31.f64 * ctx.f10.f64));
	// fmuls f15,f28,f22
	f15.f64 = double(float(f28.f64 * f22.f64));
	// fmsubs f25,f23,f11,f24
	f25.f64 = double(float(f23.f64 * ctx.f11.f64 - f24.f64));
	// stfs f25,-264(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -264, temp.u32);
	// fmsubs f24,f23,f8,f20
	f24.f64 = double(float(f23.f64 * ctx.f8.f64 - f20.f64));
	// stfs f24,-260(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -260, temp.u32);
	// fmuls f14,f3,f7
	f14.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmsubs f20,f6,f30,f17
	f20.f64 = double(float(ctx.f6.f64 * f30.f64 - f17.f64));
	// stfs f20,-272(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fmsubs f21,f6,f7,f21
	f21.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - f21.f64));
	// stfs f21,-268(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + -268, temp.u32);
	// fmsubs f23,f23,f9,f16
	f23.f64 = double(float(f23.f64 * ctx.f9.f64 - f16.f64));
	// stfs f23,-256(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// fmsubs f17,f29,f19,f15
	f17.f64 = double(float(f29.f64 * f19.f64 - f15.f64));
	// fmsubs f19,f30,f13,f14
	f19.f64 = double(float(f30.f64 * ctx.f13.f64 - f14.f64));
	// stfs f19,-248(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// fmadds f17,f26,f27,f17
	f17.f64 = double(float(f26.f64 * f27.f64 + f17.f64));
	// fmadds f17,f21,f25,f17
	f17.f64 = double(float(f21.f64 * f25.f64 + f17.f64));
	// fnmsubs f17,f20,f24,f17
	f17.f64 = double(float(-(f20.f64 * f24.f64 - f17.f64)));
	// fmadds f19,f19,f23,f17
	f19.f64 = double(float(f19.f64 * f23.f64 + f17.f64));
	// fabs f17,f19
	f17.u64 = f19.u64 & ~0x8000000000000000;
	// fdivs f19,f18,f19
	f19.f64 = double(float(f18.f64 / f19.f64));
	// stfs f19,-296(r1)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -296, temp.u32);
	// lvlx v0,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// fcmpu cr6,f17,f1
	cr6.compare(f17.f64, ctx.f1.f64);
	// bgt cr6,0x826351a8
	if (cr6.gt) goto loc_826351A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab0c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826351A8:
	// lfs f14,-280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	f14.f64 = double(temp.f32);
	// fmuls f1,f8,f29
	ctx.f1.f64 = double(float(ctx.f8.f64 * f29.f64));
	// stfs f1,-280(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -280, temp.u32);
	// fmuls f17,f10,f28
	f17.f64 = double(float(ctx.f10.f64 * f28.f64));
	// lfs f18,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	f18.f64 = double(temp.f32);
	// fmuls f19,f11,f28
	f19.f64 = double(float(ctx.f11.f64 * f28.f64));
	// stfd f5,-304(r1)
	PPC_STORE_U64(ctx.r1.u32 + -304, ctx.f5.u64);
	// fmuls f5,f13,f25
	ctx.f5.f64 = double(float(ctx.f13.f64 * f25.f64));
	// lfs f1,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f16,f0,f29
	f16.f64 = double(float(f0.f64 * f29.f64));
	// stfd f12,-240(r1)
	PPC_STORE_U64(ctx.r1.u32 + -240, ctx.f12.u64);
	// fmuls f12,f4,f26
	ctx.f12.f64 = double(float(ctx.f4.f64 * f26.f64));
	// stfs f5,-276(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -276, temp.u32);
	// fmr f15,f18
	f15.f64 = f18.f64;
	// lfs f28,-288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -288);
	f28.f64 = double(temp.f32);
	// fmuls f21,f0,f21
	f21.f64 = double(float(f0.f64 * f21.f64));
	// stfd f1,-296(r1)
	PPC_STORE_U64(ctx.r1.u32 + -296, ctx.f1.u64);
	// fmuls f22,f7,f22
	f22.f64 = double(float(ctx.f7.f64 * f22.f64));
	// stfd f31,-288(r1)
	PPC_STORE_U64(ctx.r1.u32 + -288, f31.u64);
	// fmuls f20,f8,f20
	f20.f64 = double(float(ctx.f8.f64 * f20.f64));
	// fmuls f26,f9,f26
	f26.f64 = double(float(ctx.f9.f64 * f26.f64));
	// addi r5,r1,-224
	ctx.r5.s64 = ctx.r1.s64 + -224;
	// fmuls f1,f6,f24
	ctx.f1.f64 = double(float(ctx.f6.f64 * f24.f64));
	// addi r7,r1,-208
	ctx.r7.s64 = ctx.r1.s64 + -208;
	// fmuls f31,f3,f23
	f31.f64 = double(float(ctx.f3.f64 * f23.f64));
	// addi r4,r1,-176
	ctx.r4.s64 = ctx.r1.s64 + -176;
	// fmuls f24,f30,f24
	f24.f64 = double(float(f30.f64 * f24.f64));
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// fmuls f5,f3,f27
	ctx.f5.f64 = double(float(ctx.f3.f64 * f27.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f25,f2,f25
	f25.f64 = double(float(ctx.f2.f64 * f25.f64));
	// fmsubs f17,f4,f29,f17
	f17.f64 = double(float(ctx.f4.f64 * f29.f64 - f17.f64));
	// lfs f29,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	f29.f64 = double(temp.f32);
	// fmsubs f19,f8,f18,f19
	f19.f64 = double(float(ctx.f8.f64 * f18.f64 - f19.f64));
	// lfs f8,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f18,f0,f28,f12
	f18.f64 = double(float(f0.f64 * f28.f64 - ctx.f12.f64));
	// lfs f0,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	f0.f64 = double(temp.f32);
	// fmsubs f16,f10,f15,f16
	f16.f64 = double(float(ctx.f10.f64 * f15.f64 - f16.f64));
	// fmuls f23,f7,f23
	f23.f64 = double(float(ctx.f7.f64 * f23.f64));
	// lfs f12,-280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -280);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f21,f4,f29,f21
	f21.f64 = double(float(ctx.f4.f64 * f29.f64 - f21.f64));
	// fmsubs f12,f9,f28,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * f28.f64 - ctx.f12.f64));
	// lfs f28,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	f28.f64 = double(temp.f32);
	// fmsubs f27,f30,f27,f22
	f27.f64 = double(float(f30.f64 * f27.f64 - f22.f64));
	// lfs f4,-260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f20,f11,f8,f20
	f20.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - f20.f64));
	// fmsubs f26,f11,f14,f26
	f26.f64 = double(float(ctx.f11.f64 * f14.f64 - f26.f64));
	// lfs f11,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f14,f13,f28,f1
	f14.f64 = double(float(ctx.f13.f64 * f28.f64 - ctx.f1.f64));
	// fmsubs f15,f6,f0,f31
	f15.f64 = double(float(ctx.f6.f64 * f0.f64 - f31.f64));
	// fmsubs f7,f7,f0,f24
	ctx.f7.f64 = double(float(ctx.f7.f64 * f0.f64 - f24.f64));
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// fmsubs f13,f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f5.f64));
	// lfs f5,-276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -276);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f30,f30,f28,f25
	f30.f64 = double(float(f30.f64 * f28.f64 - f25.f64));
	// stfs f13,-252(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// fmadds f28,f0,f8,f17
	f28.f64 = double(float(f0.f64 * ctx.f8.f64 + f17.f64));
	// stfs f28,-224(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// lfs f13,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f28,f0,f29,f16
	f28.f64 = double(float(-(f0.f64 * f29.f64 - f16.f64)));
	// lfd f31,-288(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -288);
	// fmsubs f3,f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 - ctx.f5.f64));
	// lfd f1,-296(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -296);
	// fmsubs f4,f2,f4,f23
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - f23.f64));
	// stfs f28,-220(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmadds f28,f0,f13,f18
	f28.f64 = double(float(f0.f64 * ctx.f13.f64 + f18.f64));
	// fnmsubs f10,f10,f13,f21
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - f21.f64)));
	// lfs f0,-244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	f0.f64 = double(temp.f32);
	// fnmsubs f8,f31,f8,f12
	ctx.f8.f64 = double(float(-(f31.f64 * ctx.f8.f64 - ctx.f12.f64)));
	// lfd f5,-304(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -304);
	// fmadds f2,f2,f1,f27
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + f27.f64));
	// stfs f10,-212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// stfs f2,-164(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// fmadds f10,f31,f29,f26
	ctx.f10.f64 = double(float(f31.f64 * f29.f64 + f26.f64));
	// stfs f8,-208(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fnmsubs f8,f31,f13,f19
	ctx.f8.f64 = double(float(-(f31.f64 * ctx.f13.f64 - f19.f64)));
	// fmadds f2,f9,f13,f20
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + f20.f64));
	// stfs f28,-216(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// stfs f10,-204(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fmadds f13,f5,f0,f14
	ctx.f13.f64 = double(float(ctx.f5.f64 * f0.f64 + f14.f64));
	// stfs f8,-200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// lfs f26,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	f26.f64 = double(temp.f32);
	// fnmsubs f10,f5,f11,f15
	ctx.f10.f64 = double(float(-(ctx.f5.f64 * ctx.f11.f64 - f15.f64)));
	// lfd f12,-240(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -240);
	// fnmsubs f8,f6,f1,f26
	ctx.f8.f64 = double(float(-(ctx.f6.f64 * ctx.f1.f64 - f26.f64)));
	// fmadds f9,f5,f1,f3
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f2,-196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fnmsubs f6,f12,f0,f4
	ctx.f6.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f4.f64)));
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmadds f5,f12,f11,f30
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + f30.f64));
	// stfs f10,-188(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fnmsubs f4,f12,f1,f7
	ctx.f4.f64 = double(float(-(ctx.f12.f64 * ctx.f1.f64 - ctx.f7.f64)));
	// stfs f9,-184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// stfs f8,-180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f6,-176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f5,-172(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f4,-168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v7,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v9,v10,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v7,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v8,v11,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v6,v12,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab0c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8263536C"))) PPC_WEAK_FUNC(sub_8263536C);
PPC_FUNC_IMPL(__imp__sub_8263536C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635370"))) PPC_WEAK_FUNC(sub_82635370);
PPC_FUNC_IMPL(__imp__sub_82635370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	r11.s64 = 48;
	// lvx128 v13,r4,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8263539C"))) PPC_WEAK_FUNC(sub_8263539C);
PPC_FUNC_IMPL(__imp__sub_8263539C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82635060
	sub_82635060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826353A0"))) PPC_WEAK_FUNC(sub_826353A0);
PPC_FUNC_IMPL(__imp__sub_826353A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826353FC"))) PPC_WEAK_FUNC(sub_826353FC);
PPC_FUNC_IMPL(__imp__sub_826353FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635400"))) PPC_WEAK_FUNC(sub_82635400);
PPC_FUNC_IMPL(__imp__sub_82635400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// li r6,48
	ctx.r6.s64 = 48;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263545C"))) PPC_WEAK_FUNC(sub_8263545C);
PPC_FUNC_IMPL(__imp__sub_8263545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635460"))) PPC_WEAK_FUNC(sub_82635460);
PPC_FUNC_IMPL(__imp__sub_82635460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vmulfp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826354B0"))) PPC_WEAK_FUNC(sub_826354B0);
PPC_FUNC_IMPL(__imp__sub_826354B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lvx128 v13,r4,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// addi r3,r1,-32
	ctx.r3.s64 = ctx.r1.s64 + -32;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r4,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r6,r11,r5
	ctx.r6.s64 = ctx.r5.s64 - r11.s64;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,4
	ctx.r5.s64 = 4;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// lfs f10,-52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-16(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f3,-32(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f5,-48(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f9,-28(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f8,-12(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f7,-8(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f6,-60(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f4,-56(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f0,-52(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f12,-36(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// stfs f11,-20(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
loc_82635558:
	// li r9,4
	ctx.r9.s64 = 4;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + r11.u64;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8263556C:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vmsum4fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8263556c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263556C;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82635558
	if (!cr0.eq) goto loc_82635558;
}

__attribute__((alias("__imp__sub_82635598"))) PPC_WEAK_FUNC(sub_82635598);
PPC_FUNC_IMPL(__imp__sub_82635598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263559C"))) PPC_WEAK_FUNC(sub_8263559C);
PPC_FUNC_IMPL(__imp__sub_8263559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826355A0"))) PPC_WEAK_FUNC(sub_826355A0);
PPC_FUNC_IMPL(__imp__sub_826355A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826354b0
	sub_826354B0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82635610"))) PPC_WEAK_FUNC(sub_82635610);
PPC_FUNC_IMPL(__imp__sub_82635610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635614"))) PPC_WEAK_FUNC(sub_82635614);
PPC_FUNC_IMPL(__imp__sub_82635614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635618"))) PPC_WEAK_FUNC(sub_82635618);
PPC_FUNC_IMPL(__imp__sub_82635618) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r7,r9,3776
	ctx.r7.s64 = ctx.r9.s64 + 3776;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r4,r6,5456
	ctx.r4.s64 = ctx.r6.s64 + 5456;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// li r11,224
	r11.s64 = 224;
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// addi r3,r5,-12480
	ctx.r3.s64 = ctx.r5.s64 + -12480;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltisw v11,-1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// stfs f11,-20(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v13,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vand v7,v9,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vcmpgefp v6,v8,v7
	_mm_store_ps(ctx.v6.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vor v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v4,v5,v11
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v4.f32), 0xF);
	// mfocrf r10,2
	ctx.r10.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r3,r10,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826356A4"))) PPC_WEAK_FUNC(sub_826356A4);
PPC_FUNC_IMPL(__imp__sub_826356A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826356A8"))) PPC_WEAK_FUNC(sub_826356A8);
PPC_FUNC_IMPL(__imp__sub_826356A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
}

__attribute__((alias("__imp__sub_826356C8"))) PPC_WEAK_FUNC(sub_826356C8);
PPC_FUNC_IMPL(__imp__sub_826356C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826356CC"))) PPC_WEAK_FUNC(sub_826356CC);
PPC_FUNC_IMPL(__imp__sub_826356CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826356D0"))) PPC_WEAK_FUNC(sub_826356D0);
PPC_FUNC_IMPL(__imp__sub_826356D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,52(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,12(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,28(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635754"))) PPC_WEAK_FUNC(sub_82635754);
PPC_FUNC_IMPL(__imp__sub_82635754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635758"))) PPC_WEAK_FUNC(sub_82635758);
PPC_FUNC_IMPL(__imp__sub_82635758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826357DC"))) PPC_WEAK_FUNC(sub_826357DC);
PPC_FUNC_IMPL(__imp__sub_826357DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826357E0"))) PPC_WEAK_FUNC(sub_826357E0);
PPC_FUNC_IMPL(__imp__sub_826357E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635864"))) PPC_WEAK_FUNC(sub_82635864);
PPC_FUNC_IMPL(__imp__sub_82635864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635868"))) PPC_WEAK_FUNC(sub_82635868);
PPC_FUNC_IMPL(__imp__sub_82635868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
}

__attribute__((alias("__imp__sub_826358E8"))) PPC_WEAK_FUNC(sub_826358E8);
PPC_FUNC_IMPL(__imp__sub_826358E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826358EC"))) PPC_WEAK_FUNC(sub_826358EC);
PPC_FUNC_IMPL(__imp__sub_826358EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826358F0"))) PPC_WEAK_FUNC(sub_826358F0);
PPC_FUNC_IMPL(__imp__sub_826358F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,48
	r11.s64 = 48;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lvx128 v13,r4,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v11,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635940"))) PPC_WEAK_FUNC(sub_82635940);
PPC_FUNC_IMPL(__imp__sub_82635940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82630458
	sub_82630458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82635950"))) PPC_WEAK_FUNC(sub_82635950);
PPC_FUNC_IMPL(__imp__sub_82635950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,16
	r29.s64 = 16;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r30,32
	r30.s64 = 32;
	// li r31,48
	r31.s64 = 48;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r5,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r5,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r5,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + r31.u32) & ~0xF), VectorMaskL));
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,7832(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7832);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82635060
	sub_82635060(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v7,r0,r27
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r27,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r27,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32 + r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r27,r31
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r27.u32 + r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v29,v10,0
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v28,v12,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v9,r0,r3
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v27,v11,0
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vspltw v5,v10,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// vmulfp128 v4,v29,v7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw v26,v9,0
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v8,v10,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v2,v28,v7
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw v3,v12,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v31,v27,v7
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw v10,v12,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v6,v9,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xAA));
	// vmulfp128 v7,v26,v7
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw v12,v9,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x55));
	// vspltw v1,v11,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v11,v11,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// vmaddfp v9,v5,v0,v4
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v4,v3,v0,v2
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v5,v1,v0,v31
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v0,v6,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v9,v8,v13,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v10,v13,v4
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v11,v13,v5
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v25,v9,v30
	_mm_store_ps(v25.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v30.f32)));
	// stvx128 v10,r28,r29
	_mm_store_si128((__m128i*)(base + ((r28.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r28,r30
	_mm_store_si128((__m128i*)(base + ((r28.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v25,r28,r31
	_mm_store_si128((__m128i*)(base + ((r28.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82635A58"))) PPC_WEAK_FUNC(sub_82635A58);
PPC_FUNC_IMPL(__imp__sub_82635A58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82635A5C"))) PPC_WEAK_FUNC(sub_82635A5C);
PPC_FUNC_IMPL(__imp__sub_82635A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635A60"))) PPC_WEAK_FUNC(sub_82635A60);
PPC_FUNC_IMPL(__imp__sub_82635A60) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r5,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r5,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r5,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,7832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7832);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82635060
	sub_82635060(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826354b0
	sub_826354B0(ctx, base);
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

__attribute__((alias("__imp__sub_82635AEC"))) PPC_WEAK_FUNC(sub_82635AEC);
PPC_FUNC_IMPL(__imp__sub_82635AEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635AF0"))) PPC_WEAK_FUNC(sub_82635AF0);
PPC_FUNC_IMPL(__imp__sub_82635AF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635AF8"))) PPC_WEAK_FUNC(sub_82635AF8);
PPC_FUNC_IMPL(__imp__sub_82635AF8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82635b50
	if (cr6.eq) goto loc_82635B50;
loc_82635B2C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82635b2c
	if (!cr6.eq) goto loc_82635B2C;
loc_82635B50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82635B68"))) PPC_WEAK_FUNC(sub_82635B68);
PPC_FUNC_IMPL(__imp__sub_82635B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635B6C"))) PPC_WEAK_FUNC(sub_82635B6C);
PPC_FUNC_IMPL(__imp__sub_82635B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635B70"))) PPC_WEAK_FUNC(sub_82635B70);
PPC_FUNC_IMPL(__imp__sub_82635B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635B78"))) PPC_WEAK_FUNC(sub_82635B78);
PPC_FUNC_IMPL(__imp__sub_82635B78) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635B80"))) PPC_WEAK_FUNC(sub_82635B80);
PPC_FUNC_IMPL(__imp__sub_82635B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
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

__attribute__((alias("__imp__sub_82635BE8"))) PPC_WEAK_FUNC(sub_82635BE8);
PPC_FUNC_IMPL(__imp__sub_82635BE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635BEC"))) PPC_WEAK_FUNC(sub_82635BEC);
PPC_FUNC_IMPL(__imp__sub_82635BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635BF0"))) PPC_WEAK_FUNC(sub_82635BF0);
PPC_FUNC_IMPL(__imp__sub_82635BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-12160
	ctx.r4.s64 = ctx.r9.s64 + -12160;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lfs f1,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r5,3792
	ctx.r4.s64 = ctx.r5.s64 + 3792;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v12,v10
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82635C64"))) PPC_WEAK_FUNC(sub_82635C64);
PPC_FUNC_IMPL(__imp__sub_82635C64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635C68"))) PPC_WEAK_FUNC(sub_82635C68);
PPC_FUNC_IMPL(__imp__sub_82635C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82635d2c
	if (cr6.eq) goto loc_82635D2C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// vspltw v9,v0,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r10,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v13,r10,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmulfp128 v11,v11,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82635D2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82635D40"))) PPC_WEAK_FUNC(sub_82635D40);
PPC_FUNC_IMPL(__imp__sub_82635D40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635D44"))) PPC_WEAK_FUNC(sub_82635D44);
PPC_FUNC_IMPL(__imp__sub_82635D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635D48"))) PPC_WEAK_FUNC(sub_82635D48);
PPC_FUNC_IMPL(__imp__sub_82635D48) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r11,8876
	ctx.r9.s64 = r11.s64 + 8876;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r4,r10,21252
	ctx.r4.s64 = ctx.r10.s64 + 21252;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// bne cr6,0x82635da0
	if (!cr6.eq) goto loc_82635DA0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82635DA0:
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

__attribute__((alias("__imp__sub_82635DB4"))) PPC_WEAK_FUNC(sub_82635DB4);
PPC_FUNC_IMPL(__imp__sub_82635DB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635DB8"))) PPC_WEAK_FUNC(sub_82635DB8);
PPC_FUNC_IMPL(__imp__sub_82635DB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,21252
	ctx.r10.s64 = r11.s64 + 21252;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82635df0
	if (cr6.eq) goto loc_82635DF0;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82635DF0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21220
	ctx.r9.s64 = r11.s64 + 21220;
	// addi r8,r10,-13048
	ctx.r8.s64 = ctx.r10.s64 + -13048;
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82635e34
	if (cr6.eq) goto loc_82635E34;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82635E34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82635E4C"))) PPC_WEAK_FUNC(sub_82635E4C);
PPC_FUNC_IMPL(__imp__sub_82635E4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635E50"))) PPC_WEAK_FUNC(sub_82635E50);
PPC_FUNC_IMPL(__imp__sub_82635E50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r5,-48
	r30.s64 = ctx.r5.s64 + -48;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82635e94
	if (!cr6.lt) goto loc_82635E94;
loc_82635E8C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82635ec4
	goto loc_82635EC4;
loc_82635E94:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bgt cr6,0x82635e8c
	if (cr6.gt) goto loc_82635E8C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82635ebc
	if (!cr6.eq) goto loc_82635EBC;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x82635ec4
	goto loc_82635EC4;
loc_82635EBC:
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
loc_82635EC4:
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

__attribute__((alias("__imp__sub_82635ED8"))) PPC_WEAK_FUNC(sub_82635ED8);
PPC_FUNC_IMPL(__imp__sub_82635ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635EDC"))) PPC_WEAK_FUNC(sub_82635EDC);
PPC_FUNC_IMPL(__imp__sub_82635EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635EE0"))) PPC_WEAK_FUNC(sub_82635EE0);
PPC_FUNC_IMPL(__imp__sub_82635EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82635EF4"))) PPC_WEAK_FUNC(sub_82635EF4);
PPC_FUNC_IMPL(__imp__sub_82635EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635EF8"))) PPC_WEAK_FUNC(sub_82635EF8);
PPC_FUNC_IMPL(__imp__sub_82635EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,8948
	ctx.r4.s64 = ctx.r10.s64 + 8948;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r8,-11872
	ctx.r5.s64 = ctx.r8.s64 + -11872;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628308
	sub_82628308(ctx, base);
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

__attribute__((alias("__imp__sub_82635F60"))) PPC_WEAK_FUNC(sub_82635F60);
PPC_FUNC_IMPL(__imp__sub_82635F60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635F64"))) PPC_WEAK_FUNC(sub_82635F64);
PPC_FUNC_IMPL(__imp__sub_82635F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82635F68"))) PPC_WEAK_FUNC(sub_82635F68);
PPC_FUNC_IMPL(__imp__sub_82635F68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635F70"))) PPC_WEAK_FUNC(sub_82635F70);
PPC_FUNC_IMPL(__imp__sub_82635F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r31,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
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

__attribute__((alias("__imp__sub_82635FD4"))) PPC_WEAK_FUNC(sub_82635FD4);
PPC_FUNC_IMPL(__imp__sub_82635FD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82635FD8"))) PPC_WEAK_FUNC(sub_82635FD8);
PPC_FUNC_IMPL(__imp__sub_82635FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82636030"))) PPC_WEAK_FUNC(sub_82636030);
PPC_FUNC_IMPL(__imp__sub_82636030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636034"))) PPC_WEAK_FUNC(sub_82636034);
PPC_FUNC_IMPL(__imp__sub_82636034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636038"))) PPC_WEAK_FUNC(sub_82636038);
PPC_FUNC_IMPL(__imp__sub_82636038) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82636090
	if (!cr6.gt) goto loc_82636090;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mtctr r31
	ctr.u64 = r31.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82636078:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x82636078
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82636078;
loc_82636090:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82636094"))) PPC_WEAK_FUNC(sub_82636094);
PPC_FUNC_IMPL(__imp__sub_82636094) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82636098"))) PPC_WEAK_FUNC(sub_82636098);
PPC_FUNC_IMPL(__imp__sub_82636098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_826360F0"))) PPC_WEAK_FUNC(sub_826360F0);
PPC_FUNC_IMPL(__imp__sub_826360F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826360F4"))) PPC_WEAK_FUNC(sub_826360F4);
PPC_FUNC_IMPL(__imp__sub_826360F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826360F8"))) PPC_WEAK_FUNC(sub_826360F8);
PPC_FUNC_IMPL(__imp__sub_826360F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r31,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82636150"))) PPC_WEAK_FUNC(sub_82636150);
PPC_FUNC_IMPL(__imp__sub_82636150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636154"))) PPC_WEAK_FUNC(sub_82636154);
PPC_FUNC_IMPL(__imp__sub_82636154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636158"))) PPC_WEAK_FUNC(sub_82636158);
PPC_FUNC_IMPL(__imp__sub_82636158) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x826361c8
	if (!cr6.gt) goto loc_826361C8;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// subf r10,r31,r29
	ctx.r10.s64 = r29.s64 - r31.s64;
loc_826361B0:
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x826361b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826361B0;
loc_826361C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826361D0"))) PPC_WEAK_FUNC(sub_826361D0);
PPC_FUNC_IMPL(__imp__sub_826361D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826361D4"))) PPC_WEAK_FUNC(sub_826361D4);
PPC_FUNC_IMPL(__imp__sub_826361D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826361D8"))) PPC_WEAK_FUNC(sub_826361D8);
PPC_FUNC_IMPL(__imp__sub_826361D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v8,r0,r31
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r29,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r29,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r29.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v12,v12,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v10,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v7,v8,v0
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v7,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v5,v6,v0
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v5,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82636258"))) PPC_WEAK_FUNC(sub_82636258);
PPC_FUNC_IMPL(__imp__sub_82636258) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263625C"))) PPC_WEAK_FUNC(sub_8263625C);
PPC_FUNC_IMPL(__imp__sub_8263625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636260"))) PPC_WEAK_FUNC(sub_82636260);
PPC_FUNC_IMPL(__imp__sub_82636260) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,12
	r28.s64 = 12;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826362ac
	if (!cr6.lt) goto loc_826362AC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8960
	ctx.r8.s64 = ctx.r9.s64 + 8960;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_826362AC:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r11,r5,-8
	r11.s64 = ctx.r5.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826362BC:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x826362bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826362BC;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lvx128 v13,r4,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lvx128 v12,r5,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82636348
	if (cr6.eq) goto loc_82636348;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
loc_82636348:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82636378
	if (!cr6.lt) goto loc_82636378;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82636378:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82636380"))) PPC_WEAK_FUNC(sub_82636380);
PPC_FUNC_IMPL(__imp__sub_82636380) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82636384"))) PPC_WEAK_FUNC(sub_82636384);
PPC_FUNC_IMPL(__imp__sub_82636384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636388"))) PPC_WEAK_FUNC(sub_82636388);
PPC_FUNC_IMPL(__imp__sub_82636388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
loc_826363B4:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x826363b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826363B4;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r31,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r11,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v13,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v8,v10,v11
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lfs f0,-25600(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82630648
	sub_82630648(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82636470"))) PPC_WEAK_FUNC(sub_82636470);
PPC_FUNC_IMPL(__imp__sub_82636470) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82636474"))) PPC_WEAK_FUNC(sub_82636474);
PPC_FUNC_IMPL(__imp__sub_82636474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636478"))) PPC_WEAK_FUNC(sub_82636478);
PPC_FUNC_IMPL(__imp__sub_82636478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263647C"))) PPC_WEAK_FUNC(sub_8263647C);
PPC_FUNC_IMPL(__imp__sub_8263647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636480"))) PPC_WEAK_FUNC(sub_82636480);
PPC_FUNC_IMPL(__imp__sub_82636480) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636488"))) PPC_WEAK_FUNC(sub_82636488);
PPC_FUNC_IMPL(__imp__sub_82636488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// li r12,-160
	r12.s64 = -160;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,96(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,48
	ctx.r3.s64 = 48;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r31,64
	r31.s64 = 64;
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// li r11,80
	r11.s64 = 80;
	// vxor v12,v12,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lvx128 v11,r5,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lvx128 v10,r5,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lwz r7,100(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	// lvx128 v9,r5,r3
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmrghw v5,v11,v13
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// lvx128 v8,r5,r31
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r5.u32 + r31.u32) & ~0xF), VectorMaskL));
	// vmrghw v6,v0,v10
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvx128 v7,r5,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmrglw v4,v0,v10
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrglw v3,v11,v13
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// vmrghw v2,v9,v7
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// vmrghw v1,v8,v12
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// addi r24,r1,128
	r24.s64 = ctx.r1.s64 + 128;
	// vmrglw v31,v9,v7
	_mm_store_si128((__m128i*)v31.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vmrglw v30,v8,v12
	_mm_store_si128((__m128i*)v30.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vmrghw v29,v6,v5
	_mm_store_si128((__m128i*)v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// vmrglw v28,v6,v5
	_mm_store_si128((__m128i*)v28.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vmrghw v27,v4,v3
	_mm_store_si128((__m128i*)v27.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// vmrglw v26,v4,v3
	_mm_store_si128((__m128i*)v26.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vmrghw v25,v2,v1
	_mm_store_si128((__m128i*)v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// vmrglw v24,v2,v1
	_mm_store_si128((__m128i*)v24.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// addi r21,r1,160
	r21.s64 = ctx.r1.s64 + 160;
	// vmrghw v23,v31,v30
	_mm_store_si128((__m128i*)v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)v31.u32)));
	// addi r20,r1,112
	r20.s64 = ctx.r1.s64 + 112;
	// vmrglw v22,v31,v30
	_mm_store_si128((__m128i*)v22.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)v31.u32)));
	// addi r19,r1,176
	r19.s64 = ctx.r1.s64 + 176;
	// addi r18,r1,192
	r18.s64 = ctx.r1.s64 + 192;
	// stw r9,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r9.u32);
	// addi r17,r1,128
	r17.s64 = ctx.r1.s64 + 128;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// addi r16,r1,208
	r16.s64 = ctx.r1.s64 + 208;
	// stvx128 v10,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r15,r1,144
	r15.s64 = ctx.r1.s64 + 144;
	// stvx128 v8,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r11,7808
	r28.s64 = r11.s64 + 7808;
	// stvx128 v7,r0,r24
	_mm_store_si128((__m128i*)(base + ((r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r26,0
	r26.s64 = 0;
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r28
	r31.u64 = r28.u64;
	// stvx128 v9,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,0
	r30.s64 = 0;
	// stvx128 v29,r0,r21
	_mm_store_si128((__m128i*)(base + ((r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r24,r11,-12736
	r24.s64 = r11.s64 + -12736;
	// stvx128 v28,r0,r19
	_mm_store_si128((__m128i*)(base + ((r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r18
	_mm_store_si128((__m128i*)(base + ((r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r16
	_mm_store_si128((__m128i*)(base + ((r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r22
	_mm_store_si128((__m128i*)(base + ((r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r20
	_mm_store_si128((__m128i*)(base + ((r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r17
	_mm_store_si128((__m128i*)(base + ((r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r15
	_mm_store_si128((__m128i*)(base + ((r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826365E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v13,r10,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vand v12,v0,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpequw128. v11,v12,v127
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)v127.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v11.f32), 0xF);
	// mfocrf r9,2
	ctx.r9.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwinm r7,r8,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82636660
	if (cr6.eq) goto loc_82636660;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lvx128 v13,r30,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82636660
	if (cr6.eq) goto loc_82636660;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// or r26,r11,r26
	r26.u64 = r11.u64 | r26.u64;
loc_82636660:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r28,16
	r11.s64 = r28.s64 + 16;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,80
	r29.s64 = r29.s64 + 80;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826365e0
	if (cr6.lt) goto loc_826365E0;
	// rlwinm r11,r26,4,0,27
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lvx128 v0,r11,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r24.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r23
	_mm_store_si128((__m128i*)(base + ((r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// li r0,-160
	r0.s64 = -160;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_82636694"))) PPC_WEAK_FUNC(sub_82636694);
PPC_FUNC_IMPL(__imp__sub_82636694) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_82636698"))) PPC_WEAK_FUNC(sub_82636698);
PPC_FUNC_IMPL(__imp__sub_82636698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f1,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// addi r5,r7,7632
	ctx.r5.s64 = ctx.r7.s64 + 7632;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r6,8976
	ctx.r4.s64 = ctx.r6.s64 + 8976;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vsubfp v11,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v12,v12,v13
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v0,v11
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vand v8,v9,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor v13,v10,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v7,v0,v9
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// stvewx v7,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v7.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263677C"))) PPC_WEAK_FUNC(sub_8263677C);
PPC_FUNC_IMPL(__imp__sub_8263677C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636780"))) PPC_WEAK_FUNC(sub_82636780);
PPC_FUNC_IMPL(__imp__sub_82636780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r7,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// andc r11,r5,r6
	r11.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// lhz r11,38(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826367BC"))) PPC_WEAK_FUNC(sub_826367BC);
PPC_FUNC_IMPL(__imp__sub_826367BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826367C0"))) PPC_WEAK_FUNC(sub_826367C0);
PPC_FUNC_IMPL(__imp__sub_826367C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r6,r7,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r6,r5
	r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// lhz r11,38(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// addis r10,r11,1
	ctx.r10.s64 = r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636800"))) PPC_WEAK_FUNC(sub_82636800);
PPC_FUNC_IMPL(__imp__sub_82636800) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82636854
	if (!cr6.gt) goto loc_82636854;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
loc_82636834:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// stwx r6,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r6.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x82636834
	if (cr6.lt) goto loc_82636834;
loc_82636854:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82bf5e80
	sub_82BF5E80(ctx, base);
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// sth r11,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r11.u16);
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

__attribute__((alias("__imp__sub_8263687C"))) PPC_WEAK_FUNC(sub_8263687C);
PPC_FUNC_IMPL(__imp__sub_8263687C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636880"))) PPC_WEAK_FUNC(sub_82636880);
PPC_FUNC_IMPL(__imp__sub_82636880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r26,r11,-12160
	r26.s64 = r11.s64 + -12160;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// ble cr6,0x82636944
	if (!cr6.gt) goto loc_82636944;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// li r29,16
	r29.s64 = 16;
loc_826368E4:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vminfp v10,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v9,v13,v11
	_mm_store_ps(ctx.v9.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r28,r6
	cr6.compare<int32_t>(r28.s32, ctx.r6.s32, xer);
	// blt cr6,0x826368e4
	if (cr6.lt) goto loc_826368E4;
loc_82636944:
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r8,r10,7632
	ctx.r8.s64 = ctx.r10.s64 + 7632;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v0,v12
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r30,r9
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r31
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v9,v10
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v7,v0,v8
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r30,r7
	_mm_store_si128((__m128i*)(base + ((r30.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_82636990"))) PPC_WEAK_FUNC(sub_82636990);
PPC_FUNC_IMPL(__imp__sub_82636990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82636994"))) PPC_WEAK_FUNC(sub_82636994);
PPC_FUNC_IMPL(__imp__sub_82636994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636998"))) PPC_WEAK_FUNC(sub_82636998);
PPC_FUNC_IMPL(__imp__sub_82636998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826369A8"))) PPC_WEAK_FUNC(sub_826369A8);
PPC_FUNC_IMPL(__imp__sub_826369A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826369BC"))) PPC_WEAK_FUNC(sub_826369BC);
PPC_FUNC_IMPL(__imp__sub_826369BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826369C0"))) PPC_WEAK_FUNC(sub_826369C0);
PPC_FUNC_IMPL(__imp__sub_826369C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_826369D0"))) PPC_WEAK_FUNC(sub_826369D0);
PPC_FUNC_IMPL(__imp__sub_826369D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826369D4"))) PPC_WEAK_FUNC(sub_826369D4);
PPC_FUNC_IMPL(__imp__sub_826369D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826369D8"))) PPC_WEAK_FUNC(sub_826369D8);
PPC_FUNC_IMPL(__imp__sub_826369D8) {
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
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82636a10
	if (cr6.eq) goto loc_82636A10;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,252
	cr6.compare<int32_t>(r11.s32, 252, xer);
	// ble cr6,0x82636a10
	if (!cr6.gt) goto loc_82636A10;
loc_82636A04:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82636A10:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,4095
	cr6.compare<int32_t>(r11.s32, 4095, xer);
	// bge cr6,0x82636a04
	if (!cr6.lt) goto loc_82636A04;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82636a8c
	if (!cr6.gt) goto loc_82636A8C;
	// li r30,0
	r30.s64 = 0;
loc_82636A2C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r7,r11,r30
	ctx.r7.u64 = r11.u64 + r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x82636a04
	if (cr6.eq) goto loc_82636A04;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82636a2c
	if (cr6.lt) goto loc_82636A2C;
loc_82636A8C:
	// li r3,112
	ctx.r3.s64 = 112;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82636A94"))) PPC_WEAK_FUNC(sub_82636A94);
PPC_FUNC_IMPL(__imp__sub_82636A94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82636A98"))) PPC_WEAK_FUNC(sub_82636A98);
PPC_FUNC_IMPL(__imp__sub_82636A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82636aec
	if (!cr6.lt) goto loc_82636AEC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9080
	ctx.r8.s64 = ctx.r9.s64 + 9080;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82636AEC:
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// li r22,-1
	r22.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r25,r22
	r25.u64 = r22.u64;
	// stw r11,64(r27)
	PPC_STORE_U32(r27.u32 + 64, r11.u32);
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bne cr6,0x82636b9c
	if (!cr6.eq) goto loc_82636B9C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82636c54
	if (!cr6.gt) goto loc_82636C54;
	// li r29,0
	r29.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_82636B24:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// bge cr6,0x82636b50
	if (!cr6.lt) goto loc_82636B50;
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// slw r8,r26,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82636b84
	if (cr6.eq) goto loc_82636B84;
loc_82636B50:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82636b84
	if (cr6.eq) goto loc_82636B84;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_82636B84:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82636b24
	if (cr6.lt) goto loc_82636B24;
	// b 0x82636c54
	goto loc_82636C54;
loc_82636B9C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82636c54
	if (!cr6.gt) goto loc_82636C54;
	// li r29,0
	r29.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_82636BAC:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// bge cr6,0x82636bd8
	if (!cr6.lt) goto loc_82636BD8;
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// slw r8,r26,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82636c40
	if (cr6.eq) goto loc_82636C40;
loc_82636BD8:
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82636c40
	if (cr6.eq) goto loc_82636C40;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82636c40
	if (cr6.eq) goto loc_82636C40;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_82636C40:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82636bac
	if (cr6.lt) goto loc_82636BAC;
loc_82636C54:
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r27)
	PPC_STORE_U32(r27.u32 + 64, r11.u32);
	// beq cr6,0x82636c74
	if (cr6.eq) goto loc_82636C74;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, r25.u32);
loc_82636C74:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82636ca4
	if (!cr6.lt) goto loc_82636CA4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82636CA4:
	// subf r11,r25,r22
	r11.s64 = r22.s64 - r25.s64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r21)
	PPC_STORE_U8(r21.u32 + 0, ctx.r9.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82636CBC"))) PPC_WEAK_FUNC(sub_82636CBC);
PPC_FUNC_IMPL(__imp__sub_82636CBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82636CC0"))) PPC_WEAK_FUNC(sub_82636CC0);
PPC_FUNC_IMPL(__imp__sub_82636CC0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82636d14
	if (!cr6.lt) goto loc_82636D14;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,9080
	ctx.r8.s64 = ctx.r9.s64 + 9080;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82636D14:
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bne cr6,0x82636db4
	if (!cr6.eq) goto loc_82636DB4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82636e70
	if (!cr6.gt) goto loc_82636E70;
	// li r29,0
	r29.s64 = 0;
	// li r25,1
	r25.s64 = 1;
loc_82636D38:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// bge cr6,0x82636d64
	if (!cr6.lt) goto loc_82636D64;
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82636d9c
	if (cr6.eq) goto loc_82636D9C;
loc_82636D64:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82636D9C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82636d38
	if (cr6.lt) goto loc_82636D38;
	// b 0x82636e70
	goto loc_82636E70;
loc_82636DB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82636e70
	if (!cr6.gt) goto loc_82636E70;
	// li r29,0
	r29.s64 = 0;
	// li r25,1
	r25.s64 = 1;
loc_82636DC4:
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(r30.u32, 256, xer);
	// bge cr6,0x82636df0
	if (!cr6.lt) goto loc_82636DF0;
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + r31.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82636e5c
	if (cr6.eq) goto loc_82636E5C;
loc_82636DF0:
	// lwz r4,36(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82636e5c
	if (cr6.eq) goto loc_82636E5C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82636E5C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82636dc4
	if (cr6.lt) goto loc_82636DC4;
loc_82636E70:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82636ea0
	if (!cr6.lt) goto loc_82636EA0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,8956
	ctx.r8.s64 = ctx.r9.s64 + 8956;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82636EA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82636EA4"))) PPC_WEAK_FUNC(sub_82636EA4);
PPC_FUNC_IMPL(__imp__sub_82636EA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82636EA8"))) PPC_WEAK_FUNC(sub_82636EA8);
PPC_FUNC_IMPL(__imp__sub_82636EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82636880
	sub_82636880(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82636EC8"))) PPC_WEAK_FUNC(sub_82636EC8);
PPC_FUNC_IMPL(__imp__sub_82636EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82636ECC"))) PPC_WEAK_FUNC(sub_82636ECC);
PPC_FUNC_IMPL(__imp__sub_82636ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82636ED0"))) PPC_WEAK_FUNC(sub_82636ED0);
PPC_FUNC_IMPL(__imp__sub_82636ED0) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82636f30
	if (!cr6.eq) goto loc_82636F30;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r9,9092
	ctx.r5.s64 = ctx.r9.s64 + 9092;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82636F30:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82636f84
	if (!cr6.gt) goto loc_82636F84;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r11,8948
	r27.s64 = r11.s64 + 8948;
loc_82636F4C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x82636f4c
	if (cr6.lt) goto loc_82636F4C;
loc_82636F84:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r11,-11776
	ctx.r5.s64 = r11.s64 + -11776;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638860
	sub_82638860(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82636F9C"))) PPC_WEAK_FUNC(sub_82636F9C);
PPC_FUNC_IMPL(__imp__sub_82636F9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82636FA0"))) PPC_WEAK_FUNC(sub_82636FA0);
PPC_FUNC_IMPL(__imp__sub_82636FA0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82636ffc
	if (!cr6.lt) goto loc_82636FFC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82636fec
	if (cr6.lt) goto loc_82636FEC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82636FEC:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82636FFC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf. r10,r30,r9
	ctx.r10.s64 = ctx.r9.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// ble 0x82637024
	if (!cr0.gt) goto loc_82637024;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
loc_82637018:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82637018
	if (cr6.lt) goto loc_82637018;
loc_82637024:
	// subf. r10,r9,r30
	ctx.r10.s64 = r30.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// ble 0x82637044
	if (!cr0.gt) goto loc_82637044;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
loc_82637038:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82637038
	if (cr6.lt) goto loc_82637038;
loc_82637044:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x826370b8
	if (!cr6.gt) goto loc_826370B8;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// subf r6,r29,r28
	ctx.r6.s64 = r28.s64 - r29.s64;
loc_82637060:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826370ac
	if (cr6.eq) goto loc_826370AC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// beq cr6,0x82637084
	if (cr6.eq) goto loc_82637084;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// b 0x82637088
	goto loc_82637088;
loc_82637084:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82637088:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
loc_826370AC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bdnz 0x82637060
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82637060;
loc_826370B8:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x826370d0
	if (!cr6.eq) goto loc_826370D0;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826286e8
	sub_826286E8(ctx, base);
loc_826370D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82636880
	sub_82636880(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_826370E0"))) PPC_WEAK_FUNC(sub_826370E0);
PPC_FUNC_IMPL(__imp__sub_826370E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826370E4"))) PPC_WEAK_FUNC(sub_826370E4);
PPC_FUNC_IMPL(__imp__sub_826370E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826370E8"))) PPC_WEAK_FUNC(sub_826370E8);
PPC_FUNC_IMPL(__imp__sub_826370E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// vspltisw v13,-1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,48
	ctx.r10.s64 = 48;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r9,r11,-12816
	ctx.r9.s64 = r11.s64 + -12816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcmpgefp v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpequw. v10,v11,v13
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	cr6.setFromMask(_mm_load_ps(ctx.v10.f32), 0xF);
	// bge cr6,0x82637134
	if (!cr6.lt) goto loc_82637134;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82636880
	sub_82636880(ctx, base);
loc_82637134:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// addi r9,r10,8976
	ctx.r9.s64 = ctx.r10.s64 + 8976;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9104);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x826371d8
	if (!cr6.gt) goto loc_826371D8;
	// li r29,0
	r29.s64 = 0;
loc_82637178:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vminfp v10,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaxfp v9,v13,v11
	_mm_store_ps(ctx.v9.f32, _mm_max_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v10,r0,r31
	_mm_store_si128((__m128i*)(base + ((r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(r30.s32, ctx.r6.s32, xer);
	// blt cr6,0x82637178
	if (cr6.lt) goto loc_82637178;
loc_826371D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_826371E0"))) PPC_WEAK_FUNC(sub_826371E0);
PPC_FUNC_IMPL(__imp__sub_826371E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826371E4"))) PPC_WEAK_FUNC(sub_826371E4);
PPC_FUNC_IMPL(__imp__sub_826371E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826371E8"))) PPC_WEAK_FUNC(sub_826371E8);
PPC_FUNC_IMPL(__imp__sub_826371E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82638880
	sub_82638880(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r9,r11,9144
	ctx.r9.s64 = r11.s64 + 9144;
	// addi r8,r10,9112
	ctx.r8.s64 = ctx.r10.s64 + 9112;
	// li r26,0
	r26.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r6,2
	r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bge cr6,0x82637274
	if (!cr6.lt) goto loc_82637274;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bgt cr6,0x82637268
	if (cr6.gt) goto loc_82637268;
	// li r5,4
	ctx.r5.s64 = 4;
loc_82637268:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82637274:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82636fa0
	sub_82636FA0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826372A0:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x826372a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826372A0;
	// sth r26,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r26.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r26,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r26.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826372B8"))) PPC_WEAK_FUNC(sub_826372B8);
PPC_FUNC_IMPL(__imp__sub_826372B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826372BC"))) PPC_WEAK_FUNC(sub_826372BC);
PPC_FUNC_IMPL(__imp__sub_826372BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826372C0"))) PPC_WEAK_FUNC(sub_826372C0);
PPC_FUNC_IMPL(__imp__sub_826372C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,8828
	ctx.r9.s64 = ctx.r10.s64 + 8828;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826372dc
	if (cr6.eq) goto loc_826372DC;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_826372DC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r10,21220
	ctx.r7.s64 = ctx.r10.s64 + 21220;
	// addi r6,r9,9028
	ctx.r6.s64 = ctx.r9.s64 + 9028;
	// addi r5,r8,8996
	ctx.r5.s64 = ctx.r8.s64 + 8996;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// beq cr6,0x82637318
	if (cr6.eq) goto loc_82637318;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stb r9,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r9.u8);
loc_82637318:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,9144
	ctx.r8.s64 = ctx.r10.s64 + 9144;
	// addi r7,r9,9112
	ctx.r7.s64 = ctx.r9.s64 + 9112;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82637344"))) PPC_WEAK_FUNC(sub_82637344);
PPC_FUNC_IMPL(__imp__sub_82637344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637348"))) PPC_WEAK_FUNC(sub_82637348);
PPC_FUNC_IMPL(__imp__sub_82637348) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r28,0
	r28.s64 = 0;
	// addi r8,r11,9144
	ctx.r8.s64 = r11.s64 + 9144;
	// addi r7,r9,9112
	ctx.r7.s64 = ctx.r9.s64 + 9112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826373a8
	if (!cr6.gt) goto loc_826373A8;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82637388:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x82637388
	if (cr6.lt) goto loc_82637388;
loc_826373A8:
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826373d4
	if (!cr6.gt) goto loc_826373D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826373C8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x826373c8
	if (cr6.lt) goto loc_826373C8;
loc_826373D4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82637404
	if (!cr6.eq) goto loc_82637404;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82637404:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r8,r11,21220
	ctx.r8.s64 = r11.s64 + 21220;
	// addi r7,r10,-13048
	ctx.r7.s64 = ctx.r10.s64 + -13048;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r8.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263742C"))) PPC_WEAK_FUNC(sub_8263742C);
PPC_FUNC_IMPL(__imp__sub_8263742C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82637430"))) PPC_WEAK_FUNC(sub_82637430);
PPC_FUNC_IMPL(__imp__sub_82637430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637440"))) PPC_WEAK_FUNC(sub_82637440);
PPC_FUNC_IMPL(__imp__sub_82637440) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_82637444"))) PPC_WEAK_FUNC(sub_82637444);
PPC_FUNC_IMPL(__imp__sub_82637444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x82637448
	goto loc_82637448;
loc_82637448:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21220
	ctx.r9.s64 = r11.s64 + 21220;
	// addi r8,r10,-13048
	ctx.r8.s64 = ctx.r10.s64 + -13048;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826374a0
	if (cr6.eq) goto loc_826374A0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826374A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82637448"))) PPC_WEAK_FUNC(sub_82637448);
PPC_FUNC_IMPL(__imp__sub_82637448) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,21220
	ctx.r9.s64 = r11.s64 + 21220;
	// addi r8,r10,-13048
	ctx.r8.s64 = ctx.r10.s64 + -13048;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x826374a0
	if (cr6.eq) goto loc_826374A0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826374A0:
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

__attribute__((alias("__imp__sub_826374B8"))) PPC_WEAK_FUNC(sub_826374B8);
PPC_FUNC_IMPL(__imp__sub_826374B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_826374BC"))) PPC_WEAK_FUNC(sub_826374BC);
PPC_FUNC_IMPL(__imp__sub_826374BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82637538
	sub_82637538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826374C0"))) PPC_WEAK_FUNC(sub_826374C0);
PPC_FUNC_IMPL(__imp__sub_826374C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,22(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
}

