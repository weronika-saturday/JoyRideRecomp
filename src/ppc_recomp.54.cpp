#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823A47A0"))) PPC_WEAK_FUNC(sub_823A47A0);
PPC_FUNC_IMPL(__imp__sub_823A47A0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,9060
	ctx.r9.s64 = r11.s64 + 9060;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823a47e4
	if (!cr6.gt) goto loc_823A47E4;
loc_823A47CC:
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
	// bgt cr6,0x823a47cc
	if (cr6.gt) goto loc_823A47CC;
loc_823A47E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,9036
	ctx.r10.s64 = r11.s64 + 9036;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823a4820
	if (!cr6.gt) goto loc_823A4820;
loc_823A4808:
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
	// bgt cr6,0x823a4808
	if (cr6.gt) goto loc_823A4808;
loc_823A4820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A4830"))) PPC_WEAK_FUNC(sub_823A4830);
PPC_FUNC_IMPL(__imp__sub_823A4830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4834"))) PPC_WEAK_FUNC(sub_823A4834);
PPC_FUNC_IMPL(__imp__sub_823A4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4838"))) PPC_WEAK_FUNC(sub_823A4838);
PPC_FUNC_IMPL(__imp__sub_823A4838) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,9048
	ctx.r10.s64 = r11.s64 + 9048;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823a43e0
	sub_823A43E0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a487c
	if (cr6.eq) goto loc_823A487C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A487C:
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

__attribute__((alias("__imp__sub_823A4890"))) PPC_WEAK_FUNC(sub_823A4890);
PPC_FUNC_IMPL(__imp__sub_823A4890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4894"))) PPC_WEAK_FUNC(sub_823A4894);
PPC_FUNC_IMPL(__imp__sub_823A4894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4898"))) PPC_WEAK_FUNC(sub_823A4898);
PPC_FUNC_IMPL(__imp__sub_823A4898) {
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
	// beq cr6,0x823a497c
	if (cr6.eq) goto loc_823A497C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a490c
	if (!cr6.eq) goto loc_823A490C;
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
	// beq cr6,0x823a497c
	if (cr6.eq) goto loc_823A497C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823a4050
	sub_823A4050(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823a497c
	goto loc_823A497C;
loc_823A490C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a44c0
	sub_823A44C0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823a4938
	if (!cr6.gt) goto loc_823A4938;
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
loc_823A4938:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a40b8
	sub_823A40B8(ctx, base);
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
	// bl 0x823a47a0
	sub_823A47A0(ctx, base);
loc_823A497C:
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

__attribute__((alias("__imp__sub_823A4990"))) PPC_WEAK_FUNC(sub_823A4990);
PPC_FUNC_IMPL(__imp__sub_823A4990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4994"))) PPC_WEAK_FUNC(sub_823A4994);
PPC_FUNC_IMPL(__imp__sub_823A4994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4998"))) PPC_WEAK_FUNC(sub_823A4998);
PPC_FUNC_IMPL(__imp__sub_823A4998) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,9072
	ctx.r9.s64 = ctx.r10.s64 + 9072;
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

__attribute__((alias("__imp__sub_823A49F0"))) PPC_WEAK_FUNC(sub_823A49F0);
PPC_FUNC_IMPL(__imp__sub_823A49F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A49F4"))) PPC_WEAK_FUNC(sub_823A49F4);
PPC_FUNC_IMPL(__imp__sub_823A49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A49F8"))) PPC_WEAK_FUNC(sub_823A49F8);
PPC_FUNC_IMPL(__imp__sub_823A49F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// ble cr6,0x823a4aa0
	if (!cr6.gt) goto loc_823A4AA0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r7,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823a4700
	sub_823A4700(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = r31.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = r30.s64 - r31.s64;
	// bl 0x823a4700
	sub_823A4700(ctx, base);
	// subf r31,r31,r28
	r31.s64 = r28.s64 - r31.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = r28.s64 - r26.s64;
	// bl 0x823a4700
	sub_823A4700(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a4700
	sub_823A4700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_823A4AA0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a4700
	sub_823A4700(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823A4AB0"))) PPC_WEAK_FUNC(sub_823A4AB0);
PPC_FUNC_IMPL(__imp__sub_823A4AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823A4AB4"))) PPC_WEAK_FUNC(sub_823A4AB4);
PPC_FUNC_IMPL(__imp__sub_823A4AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4AB8"))) PPC_WEAK_FUNC(sub_823A4AB8);
PPC_FUNC_IMPL(__imp__sub_823A4AB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x823a4c2c
	if (cr6.eq) goto loc_823A4C2C;
	// addi r29,r3,36
	r29.s64 = ctx.r3.s64 + 36;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x823a4c2c
	if (cr6.eq) goto loc_823A4C2C;
loc_823A4AE4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lhz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r8,26(r29)
	ctx.r8.u64 = PPC_LOAD_U16(r29.u32 + 26);
	// mtctr r27
	ctr.u64 = r27.u64;
	// lhz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U16(r29.u32 + 28);
	// lhz r6,30(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 30);
	// lhz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U16(r29.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// sth r8,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r8.u16);
	// sth r7,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r7.u16);
	// sth r6,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r6.u16);
	// sth r5,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r5.u16);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a4b9c
	if (cr6.eq) goto loc_823A4B9C;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x823a4b7c
	if (cr6.eq) goto loc_823A4B7C;
loc_823A4B54:
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r11,-36
	r11.s64 = r11.s64 + -36;
	// addi r9,r11,32
	ctx.r9.s64 = r11.s64 + 32;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_823A4B68:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823a4b68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A4B68;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823a4b54
	if (!cr6.eq) goto loc_823A4B54;
loc_823A4B7C:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,76
	r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A4B8C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a4b8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A4B8C;
	// b 0x823a4c18
	goto loc_823A4C18;
loc_823A4B9C:
	// addi r4,r29,-36
	ctx.r4.s64 = r29.s64 + -36;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4bfc
	if (cr6.eq) goto loc_823A4BFC;
loc_823A4BBC:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A4BCC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a4bcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A4BCC;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r31,r31,-36
	r31.s64 = r31.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4bbc
	if (!cr6.eq) goto loc_823A4BBC;
loc_823A4BFC:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,76
	r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A4C0C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a4c0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A4C0C;
loc_823A4C18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395160
	sub_82395160(ctx, base);
	// addi r29,r29,36
	r29.s64 = r29.s64 + 36;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bne cr6,0x823a4ae4
	if (!cr6.eq) goto loc_823A4AE4;
loc_823A4C2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_823A4C30"))) PPC_WEAK_FUNC(sub_823A4C30);
PPC_FUNC_IMPL(__imp__sub_823A4C30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823A4C34"))) PPC_WEAK_FUNC(sub_823A4C34);
PPC_FUNC_IMPL(__imp__sub_823A4C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4C38"))) PPC_WEAK_FUNC(sub_823A4C38);
PPC_FUNC_IMPL(__imp__sub_823A4C38) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,9072
	ctx.r10.s64 = r11.s64 + 9072;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823a43e0
	sub_823A43E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a4ce0
	sub_823A4CE0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,9048
	ctx.r8.s64 = ctx.r9.s64 + 9048;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x823a43e0
	sub_823A43E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A4C8C"))) PPC_WEAK_FUNC(sub_823A4C8C);
PPC_FUNC_IMPL(__imp__sub_823A4C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4C90"))) PPC_WEAK_FUNC(sub_823A4C90);
PPC_FUNC_IMPL(__imp__sub_823A4C90) {
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
	// bl 0x823a47a0
	sub_823A47A0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4cc8
	if (cr6.eq) goto loc_823A4CC8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A4CC8:
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

__attribute__((alias("__imp__sub_823A4CDC"))) PPC_WEAK_FUNC(sub_823A4CDC);
PPC_FUNC_IMPL(__imp__sub_823A4CDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4CE0"))) PPC_WEAK_FUNC(sub_823A4CE0);
PPC_FUNC_IMPL(__imp__sub_823A4CE0) {
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
	// beq cr6,0x823a4dc4
	if (cr6.eq) goto loc_823A4DC4;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4d54
	if (!cr6.eq) goto loc_823A4D54;
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
	// beq cr6,0x823a4dc4
	if (cr6.eq) goto loc_823A4DC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824bd098
	sub_824BD098(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823a4dc4
	goto loc_823A4DC4;
loc_823A4D54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4998
	sub_823A4998(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823a4d80
	if (!cr6.gt) goto loc_823A4D80;
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
loc_823A4D80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4520
	sub_823A4520(ctx, base);
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
	// bl 0x823a4c38
	sub_823A4C38(ctx, base);
loc_823A4DC4:
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

__attribute__((alias("__imp__sub_823A4DD8"))) PPC_WEAK_FUNC(sub_823A4DD8);
PPC_FUNC_IMPL(__imp__sub_823A4DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4DDC"))) PPC_WEAK_FUNC(sub_823A4DDC);
PPC_FUNC_IMPL(__imp__sub_823A4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4DE0"))) PPC_WEAK_FUNC(sub_823A4DE0);
PPC_FUNC_IMPL(__imp__sub_823A4DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = r11.s32 / ctx.r10.s32;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r5,-36
	ctx.r5.s64 = ctx.r5.s64 + -36;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r4
	r31.u64 = r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823a49f8
	sub_823A49F8(ctx, base);
	// addi r27,r31,36
	r27.s64 = r31.s64 + 36;
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(r24.u32, r31.u32, xer);
	// bge cr6,0x823a4e84
	if (!cr6.lt) goto loc_823A4E84;
loc_823A4E3C:
	// addi r30,r31,-36
	r30.s64 = r31.s64 + -36;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4e84
	if (!cr6.eq) goto loc_823A4E84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4e84
	if (!cr6.eq) goto loc_823A4E84;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r24,r30
	cr6.compare<uint32_t>(r24.u32, r30.u32, xer);
	// blt cr6,0x823a4e3c
	if (cr6.lt) goto loc_823A4E3C;
loc_823A4E84:
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// bge cr6,0x823a4ed0
	if (!cr6.lt) goto loc_823A4ED0;
loc_823A4E8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4ed0
	if (!cr6.eq) goto loc_823A4ED0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4ed0
	if (!cr6.eq) goto loc_823A4ED0;
	// addi r27,r27,36
	r27.s64 = r27.s64 + 36;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// blt cr6,0x823a4e8c
	if (cr6.lt) goto loc_823A4E8C;
loc_823A4ED0:
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_823A4ED8:
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bge cr6,0x823a4fb0
	if (!cr6.lt) goto loc_823A4FB0;
loc_823A4EE0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4fa4
	if (!cr6.eq) goto loc_823A4FA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a4fb0
	if (!cr6.eq) goto loc_823A4FB0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r27,r27,36
	r27.s64 = r27.s64 + 36;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// addi r11,r28,-4
	r11.s64 = r28.s64 + -4;
	// lhz r6,26(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 26);
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// lhz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// lhz r4,30(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 30);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// sth r7,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r7.u16);
	// sth r6,154(r1)
	PPC_STORE_U16(ctx.r1.u32 + 154, ctx.r6.u16);
	// sth r5,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r5.u16);
	// sth r4,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r4.u16);
	// sth r3,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r3.u16);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
loc_823A4F74:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a4f74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A4F74;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A4F90:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a4f90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A4F90;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82395160
	sub_82395160(ctx, base);
loc_823A4FA4:
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// blt cr6,0x823a4ee0
	if (cr6.lt) goto loc_823A4EE0;
loc_823A4FB0:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// ble cr6,0x823a5094
	if (!cr6.gt) goto loc_823A5094;
	// addi r30,r26,-36
	r30.s64 = r26.s64 + -36;
loc_823A4FBC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a507c
	if (!cr6.eq) goto loc_823A507C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a5090
	if (!cr6.eq) goto loc_823A5090;
	// addi r31,r31,-36
	r31.s64 = r31.s64 + -36;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// lhz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// lhz r6,26(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 26);
	// lhz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 30);
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// stw r8,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r8.u32);
	// sth r7,344(r1)
	PPC_STORE_U16(ctx.r1.u32 + 344, ctx.r7.u16);
	// sth r6,346(r1)
	PPC_STORE_U16(ctx.r1.u32 + 346, ctx.r6.u16);
	// sth r5,348(r1)
	PPC_STORE_U16(ctx.r1.u32 + 348, ctx.r5.u16);
	// sth r4,350(r1)
	PPC_STORE_U16(ctx.r1.u32 + 350, ctx.r4.u16);
	// sth r3,352(r1)
	PPC_STORE_U16(ctx.r1.u32 + 352, ctx.r3.u16);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
loc_823A504C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a504c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A504C;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,316
	r11.s64 = ctx.r1.s64 + 316;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A5068:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a5068
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5068;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82395160
	sub_82395160(ctx, base);
loc_823A507C:
	// addi r11,r26,-36
	r11.s64 = r26.s64 + -36;
	// addi r30,r30,-36
	r30.s64 = r30.s64 + -36;
	// mr r26,r11
	r26.u64 = r11.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x823a4fbc
	if (cr6.lt) goto loc_823A4FBC;
loc_823A5090:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
loc_823A5094:
	// bne cr6,0x823a51c8
	if (!cr6.eq) goto loc_823A51C8;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// beq cr6,0x823a5388
	if (cr6.eq) goto loc_823A5388;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// beq cr6,0x823a512c
	if (cr6.eq) goto loc_823A512C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r27,-4
	r11.s64 = r27.s64 + -4;
	// lhz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// lhz r6,26(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 26);
	// lhz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 30);
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// sth r7,248(r1)
	PPC_STORE_U16(ctx.r1.u32 + 248, ctx.r7.u16);
	// sth r6,250(r1)
	PPC_STORE_U16(ctx.r1.u32 + 250, ctx.r6.u16);
	// sth r5,252(r1)
	PPC_STORE_U16(ctx.r1.u32 + 252, ctx.r5.u16);
	// sth r4,254(r1)
	PPC_STORE_U16(ctx.r1.u32 + 254, ctx.r4.u16);
	// sth r3,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r3.u16);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
loc_823A50FC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a50fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A50FC;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,220
	r11.s64 = ctx.r1.s64 + 220;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A5118:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a5118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5118;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82395160
	sub_82395160(ctx, base);
loc_823A512C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r27,r27,36
	r27.s64 = r27.s64 + 36;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lhz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lhz r6,26(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 26);
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// lhz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// lhz r4,30(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 30);
	// mtctr r11
	ctr.u64 = r11.u64;
	// lhz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// sth r6,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r6.u16);
	// sth r5,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r5.u16);
	// sth r4,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r4.u16);
	// sth r3,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r3.u16);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_823A5194:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823a5194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5194;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,76
	r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A51B0:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a51b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A51B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395160
	sub_82395160(ctx, base);
	// b 0x823a4ed8
	goto loc_823A4ED8;
loc_823A51C8:
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bne cr6,0x823a52f4
	if (!cr6.eq) goto loc_823A52F4;
	// addi r11,r26,-36
	r11.s64 = r26.s64 + -36;
	// addi r31,r31,-36
	r31.s64 = r31.s64 + -36;
	// mr r26,r11
	r26.u64 = r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x823a5268
	if (cr6.eq) goto loc_823A5268;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lhz r7,24(r26)
	ctx.r7.u64 = PPC_LOAD_U16(r26.u32 + 24);
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// lhz r6,26(r26)
	ctx.r6.u64 = PPC_LOAD_U16(r26.u32 + 26);
	// lhz r5,28(r26)
	ctx.r5.u64 = PPC_LOAD_U16(r26.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r4,30(r26)
	ctx.r4.u64 = PPC_LOAD_U16(r26.u32 + 30);
	// lhz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U16(r26.u32 + 32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// sth r7,200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 200, ctx.r7.u16);
	// sth r6,202(r1)
	PPC_STORE_U16(ctx.r1.u32 + 202, ctx.r6.u16);
	// sth r5,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r5.u16);
	// sth r4,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r4.u16);
	// sth r3,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r3.u16);
	// lwz r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
loc_823A5238:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a5238
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5238;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,172
	r11.s64 = ctx.r1.s64 + 172;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A5254:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a5254
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5254;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82395160
	sub_82395160(ctx, base);
loc_823A5268:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r27,r27,-36
	r27.s64 = r27.s64 + -36;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r27,-4
	r11.s64 = r27.s64 + -4;
	// lhz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 24);
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// lhz r6,26(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 26);
	// lhz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 30);
	// lhz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// sth r7,296(r1)
	PPC_STORE_U16(ctx.r1.u32 + 296, ctx.r7.u16);
	// sth r6,298(r1)
	PPC_STORE_U16(ctx.r1.u32 + 298, ctx.r6.u16);
	// sth r5,300(r1)
	PPC_STORE_U16(ctx.r1.u32 + 300, ctx.r5.u16);
	// sth r4,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, ctx.r4.u16);
	// sth r3,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r3.u16);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r9,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
loc_823A52C0:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a52c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A52C0;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,268
	r11.s64 = ctx.r1.s64 + 268;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A52DC:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a52dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A52DC;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82395160
	sub_82395160(ctx, base);
	// b 0x823a4ed8
	goto loc_823A4ED8;
loc_823A52F4:
	// addi r30,r26,-36
	r30.s64 = r26.s64 + -36;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r26,r30
	r26.u64 = r30.u64;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// lhz r7,24(r28)
	ctx.r7.u64 = PPC_LOAD_U16(r28.u32 + 24);
	// addi r10,r28,-4
	ctx.r10.s64 = r28.s64 + -4;
	// lhz r6,26(r28)
	ctx.r6.u64 = PPC_LOAD_U16(r28.u32 + 26);
	// lhz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U16(r28.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r4,30(r28)
	ctx.r4.u64 = PPC_LOAD_U16(r28.u32 + 30);
	// lhz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U16(r28.u32 + 32);
	// stw r8,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r8.u32);
	// sth r7,392(r1)
	PPC_STORE_U16(ctx.r1.u32 + 392, ctx.r7.u16);
	// sth r6,394(r1)
	PPC_STORE_U16(ctx.r1.u32 + 394, ctx.r6.u16);
	// sth r5,396(r1)
	PPC_STORE_U16(ctx.r1.u32 + 396, ctx.r5.u16);
	// sth r4,398(r1)
	PPC_STORE_U16(ctx.r1.u32 + 398, ctx.r4.u16);
	// sth r3,400(r1)
	PPC_STORE_U16(ctx.r1.u32 + 400, ctx.r3.u16);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
loc_823A5350:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a5350
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5350;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A536C:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a536c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A536C;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82395160
	sub_82395160(ctx, base);
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// b 0x823a4ed8
	goto loc_823A4ED8;
loc_823A5388:
	// stw r31,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r31.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r27,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r27.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
}

__attribute__((alias("__imp__sub_823A5398"))) PPC_WEAK_FUNC(sub_823A5398);
PPC_FUNC_IMPL(__imp__sub_823A5398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_823A539C"))) PPC_WEAK_FUNC(sub_823A539C);
PPC_FUNC_IMPL(__imp__sub_823A539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A53A0"))) PPC_WEAK_FUNC(sub_823A53A0);
PPC_FUNC_IMPL(__imp__sub_823A53A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,36
	r27.s64 = 36;
	// subf r28,r3,r4
	r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// divw r11,r28,r27
	r11.s32 = r28.s32 / r27.s32;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a5470
	if (!cr6.gt) goto loc_823A5470;
	// addi r31,r4,-16
	r31.s64 = ctx.r4.s64 + -16;
loc_823A53CC:
	// addi r30,r31,-20
	r30.s64 = r31.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82395138
	sub_82395138(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// lhz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// lhz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// sth r6,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r6.u16);
	// sth r5,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r5.u16);
	// sth r4,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r4.u16);
	// sth r3,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r3.u16);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_823A5424:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823a5424
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A5424;
	// addi r11,r28,-36
	r11.s64 = r28.s64 + -36;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r11,r27
	ctx.r5.s32 = r11.s32 / r27.s32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a4228
	sub_823A4228(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82395160
	sub_82395160(ctx, base);
	// addi r31,r31,-36
	r31.s64 = r31.s64 + -36;
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// divw r10,r11,r27
	ctx.r10.s32 = r11.s32 / r27.s32;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bgt cr6,0x823a53cc
	if (cr6.gt) goto loc_823A53CC;
loc_823A5470:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_823A5474"))) PPC_WEAK_FUNC(sub_823A5474);
PPC_FUNC_IMPL(__imp__sub_823A5474) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823A5478"))) PPC_WEAK_FUNC(sub_823A5478);
PPC_FUNC_IMPL(__imp__sub_823A5478) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,9072
	ctx.r10.s64 = r11.s64 + 9072;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x823a43e0
	sub_823A43E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a4ce0
	sub_823A4CE0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,9048
	ctx.r8.s64 = ctx.r9.s64 + 9048;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x823a43e0
	sub_823A43E0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a54dc
	if (cr6.eq) goto loc_823A54DC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A54DC:
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

__attribute__((alias("__imp__sub_823A54F0"))) PPC_WEAK_FUNC(sub_823A54F0);
PPC_FUNC_IMPL(__imp__sub_823A54F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A54F4"))) PPC_WEAK_FUNC(sub_823A54F4);
PPC_FUNC_IMPL(__imp__sub_823A54F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A54F8"))) PPC_WEAK_FUNC(sub_823A54F8);
PPC_FUNC_IMPL(__imp__sub_823A54F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,36
	r25.s64 = 36;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x823a55b4
	if (!cr6.gt) goto loc_823A55B4;
loc_823A5528:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823a55d8
	if (!cr6.gt) goto loc_823A55D8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4de0
	sub_823A4DE0(ctx, base);
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = r31.s64 - r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = r26.s64 - r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = ctx.r9.s32 / r25.s32;
	// divw r6,r8,r25
	ctx.r6.s32 = ctx.r8.s32 / r25.s32;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bge cr6,0x823a5594
	if (!cr6.lt) goto loc_823A5594;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a54f8
	sub_823A54F8(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x823a55a4
	goto loc_823A55A4;
loc_823A5594:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823a54f8
	sub_823A54F8(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_823A55A4:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x823a5528
	if (cr6.gt) goto loc_823A5528;
loc_823A55B4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a55d0
	if (!cr6.gt) goto loc_823A55D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4ab8
	sub_823A4AB8(ctx, base);
loc_823A55D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_823A55D8:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x823a55b4
	if (!cr6.gt) goto loc_823A55B4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a5600
	if (!cr6.gt) goto loc_823A5600;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4640
	sub_823A4640(ctx, base);
loc_823A5600:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a53a0
	sub_823A53A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_823A5614"))) PPC_WEAK_FUNC(sub_823A5614);
PPC_FUNC_IMPL(__imp__sub_823A5614) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823A5618"))) PPC_WEAK_FUNC(sub_823A5618);
PPC_FUNC_IMPL(__imp__sub_823A5618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_823A5634"))) PPC_WEAK_FUNC(sub_823A5634);
PPC_FUNC_IMPL(__imp__sub_823A5634) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A5638"))) PPC_WEAK_FUNC(sub_823A5638);
PPC_FUNC_IMPL(__imp__sub_823A5638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A563C"))) PPC_WEAK_FUNC(sub_823A563C);
PPC_FUNC_IMPL(__imp__sub_823A563C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5640"))) PPC_WEAK_FUNC(sub_823A5640);
PPC_FUNC_IMPL(__imp__sub_823A5640) {
	PPC_FUNC_PROLOGUE();
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,632(r31)
	PPC_STORE_U8(r31.u32 + 632, r11.u8);
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823A5678"))) PPC_WEAK_FUNC(sub_823A5678);
PPC_FUNC_IMPL(__imp__sub_823A5678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823A567C"))) PPC_WEAK_FUNC(sub_823A567C);
PPC_FUNC_IMPL(__imp__sub_823A567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5680"))) PPC_WEAK_FUNC(sub_823A5680);
PPC_FUNC_IMPL(__imp__sub_823A5680) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// stb r10,632(r31)
	PPC_STORE_U8(r31.u32 + 632, ctx.r10.u8);
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
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

__attribute__((alias("__imp__sub_823A56D4"))) PPC_WEAK_FUNC(sub_823A56D4);
PPC_FUNC_IMPL(__imp__sub_823A56D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A56D8"))) PPC_WEAK_FUNC(sub_823A56D8);
PPC_FUNC_IMPL(__imp__sub_823A56D8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 724, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A56E0"))) PPC_WEAK_FUNC(sub_823A56E0);
PPC_FUNC_IMPL(__imp__sub_823A56E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// stb r4,729(r3)
	PPC_STORE_U8(ctx.r3.u32 + 729, ctx.r4.u8);
	// stb r5,730(r3)
	PPC_STORE_U8(ctx.r3.u32 + 730, ctx.r5.u8);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,23
	ctx.r4.s64 = r11.s64 + 23;
}

__attribute__((alias("__imp__sub_823A56FC"))) PPC_WEAK_FUNC(sub_823A56FC);
PPC_FUNC_IMPL(__imp__sub_823A56FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238dc10
	sub_8238DC10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5700"))) PPC_WEAK_FUNC(sub_823A5700);
PPC_FUNC_IMPL(__imp__sub_823A5700) {
	PPC_FUNC_PROLOGUE();
	// stw r4,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_823A5704"))) PPC_WEAK_FUNC(sub_823A5704);
PPC_FUNC_IMPL(__imp__sub_823A5704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5708"))) PPC_WEAK_FUNC(sub_823A5708);
PPC_FUNC_IMPL(__imp__sub_823A5708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
}

__attribute__((alias("__imp__sub_823A570C"))) PPC_WEAK_FUNC(sub_823A570C);
PPC_FUNC_IMPL(__imp__sub_823A570C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5710"))) PPC_WEAK_FUNC(sub_823A5710);
PPC_FUNC_IMPL(__imp__sub_823A5710) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r11,1092
	r27.s64 = r11.s64 + 1092;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a580c
	if (!cr6.gt) goto loc_823A580C;
	// addi r28,r31,7000
	r28.s64 = r31.s64 + 7000;
	// addi r29,r31,6220
	r29.s64 = r31.s64 + 6220;
loc_823A5750:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827238b8
	sub_827238B8(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a57f0
	if (cr6.eq) goto loc_823A57F0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825fed50
	sub_825FED50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r29,-780
	ctx.r3.s64 = r29.s64 + -780;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82715730
	sub_82715730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715880
	sub_82715880(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825fede8
	sub_825FEDE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8271b848
	sub_8271B848(ctx, base);
loc_823A57F0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x823a5750
	if (cr6.lt) goto loc_823A5750;
loc_823A580C:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_823A5818"))) PPC_WEAK_FUNC(sub_823A5818);
PPC_FUNC_IMPL(__imp__sub_823A5818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823A581C"))) PPC_WEAK_FUNC(sub_823A581C);
PPC_FUNC_IMPL(__imp__sub_823A581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5820"))) PPC_WEAK_FUNC(sub_823A5820);
PPC_FUNC_IMPL(__imp__sub_823A5820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,8171(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8171);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a583c
	if (cr6.eq) goto loc_823A583C;
	// lbz r10,8172(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_823A583C:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,8171(r11)
	PPC_STORE_U8(r11.u32 + 8171, ctx.r10.u8);
	// addi r3,r11,8064
	ctx.r3.s64 = r11.s64 + 8064;
	// stb r9,8172(r11)
	PPC_STORE_U8(r11.u32 + 8172, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_823A5850"))) PPC_WEAK_FUNC(sub_823A5850);
PPC_FUNC_IMPL(__imp__sub_823A5850) {
	PPC_FUNC_PROLOGUE();
	// b 0x82613c78
	sub_82613C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5854"))) PPC_WEAK_FUNC(sub_823A5854);
PPC_FUNC_IMPL(__imp__sub_823A5854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5858"))) PPC_WEAK_FUNC(sub_823A5858);
PPC_FUNC_IMPL(__imp__sub_823A5858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,8171(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8171);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,8172(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r3,8064
	ctx.r3.s64 = ctx.r3.s64 + 8064;
	// stb r10,8172(r11)
	PPC_STORE_U8(r11.u32 + 8172, ctx.r10.u8);
	// b 0x82613c90
	sub_82613C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5884"))) PPC_WEAK_FUNC(sub_823A5884);
PPC_FUNC_IMPL(__imp__sub_823A5884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5888"))) PPC_WEAK_FUNC(sub_823A5888);
PPC_FUNC_IMPL(__imp__sub_823A5888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a589c
	if (cr6.eq) goto loc_823A589C;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// blr 
	return;
loc_823A589C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58A4"))) PPC_WEAK_FUNC(sub_823A58A4);
PPC_FUNC_IMPL(__imp__sub_823A58A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A58A8"))) PPC_WEAK_FUNC(sub_823A58A8);
PPC_FUNC_IMPL(__imp__sub_823A58A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a58bc
	if (cr6.eq) goto loc_823A58BC;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// blr 
	return;
loc_823A58BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58C4"))) PPC_WEAK_FUNC(sub_823A58C4);
PPC_FUNC_IMPL(__imp__sub_823A58C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A58C8"))) PPC_WEAK_FUNC(sub_823A58C8);
PPC_FUNC_IMPL(__imp__sub_823A58C8) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58D0"))) PPC_WEAK_FUNC(sub_823A58D0);
PPC_FUNC_IMPL(__imp__sub_823A58D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58D8"))) PPC_WEAK_FUNC(sub_823A58D8);
PPC_FUNC_IMPL(__imp__sub_823A58D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58E0"))) PPC_WEAK_FUNC(sub_823A58E0);
PPC_FUNC_IMPL(__imp__sub_823A58E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58E8"))) PPC_WEAK_FUNC(sub_823A58E8);
PPC_FUNC_IMPL(__imp__sub_823A58E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58F0"))) PPC_WEAK_FUNC(sub_823A58F0);
PPC_FUNC_IMPL(__imp__sub_823A58F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r3,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A58F8"))) PPC_WEAK_FUNC(sub_823A58F8);
PPC_FUNC_IMPL(__imp__sub_823A58F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5920"))) PPC_WEAK_FUNC(sub_823A5920);
PPC_FUNC_IMPL(__imp__sub_823A5920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r3,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r3.s64 = ctx.r5.s64 >> temp.u64;
	// srd r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r10.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A594C"))) PPC_WEAK_FUNC(sub_823A594C);
PPC_FUNC_IMPL(__imp__sub_823A594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5950"))) PPC_WEAK_FUNC(sub_823A5950);
PPC_FUNC_IMPL(__imp__sub_823A5950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r3,r8,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5968"))) PPC_WEAK_FUNC(sub_823A5968);
PPC_FUNC_IMPL(__imp__sub_823A5968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A597C"))) PPC_WEAK_FUNC(sub_823A597C);
PPC_FUNC_IMPL(__imp__sub_823A597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5980"))) PPC_WEAK_FUNC(sub_823A5980);
PPC_FUNC_IMPL(__imp__sub_823A5980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A59C0"))) PPC_WEAK_FUNC(sub_823A59C0);
PPC_FUNC_IMPL(__imp__sub_823A59C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5A00"))) PPC_WEAK_FUNC(sub_823A5A00);
PPC_FUNC_IMPL(__imp__sub_823A5A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5A40"))) PPC_WEAK_FUNC(sub_823A5A40);
PPC_FUNC_IMPL(__imp__sub_823A5A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1164
	ctx.r10.s64 = r11.s64 + 1164;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// rlwimi r10,r5,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1164(r11)
	PPC_STORE_U32(r11.u32 + 1164, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5A84"))) PPC_WEAK_FUNC(sub_823A5A84);
PPC_FUNC_IMPL(__imp__sub_823A5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5A88"))) PPC_WEAK_FUNC(sub_823A5A88);
PPC_FUNC_IMPL(__imp__sub_823A5A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subfe r7,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r5,r8,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// lwz r4,1172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// srd r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r6.u8 & 0x7F));
	// rlwimi r7,r4,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r7.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5AD4"))) PPC_WEAK_FUNC(sub_823A5AD4);
PPC_FUNC_IMPL(__imp__sub_823A5AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5AD8"))) PPC_WEAK_FUNC(sub_823A5AD8);
PPC_FUNC_IMPL(__imp__sub_823A5AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwimi r10,r5,3,27,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r10,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B1C"))) PPC_WEAK_FUNC(sub_823A5B1C);
PPC_FUNC_IMPL(__imp__sub_823A5B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B20"))) PPC_WEAK_FUNC(sub_823A5B20);
PPC_FUNC_IMPL(__imp__sub_823A5B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// rlwimi r10,r5,22,5,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r10.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B64"))) PPC_WEAK_FUNC(sub_823A5B64);
PPC_FUNC_IMPL(__imp__sub_823A5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B68"))) PPC_WEAK_FUNC(sub_823A5B68);
PPC_FUNC_IMPL(__imp__sub_823A5B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// rlwimi r10,r5,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BAC"))) PPC_WEAK_FUNC(sub_823A5BAC);
PPC_FUNC_IMPL(__imp__sub_823A5BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BB0"))) PPC_WEAK_FUNC(sub_823A5BB0);
PPC_FUNC_IMPL(__imp__sub_823A5BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwimi r10,r5,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5BF4"))) PPC_WEAK_FUNC(sub_823A5BF4);
PPC_FUNC_IMPL(__imp__sub_823A5BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5BF8"))) PPC_WEAK_FUNC(sub_823A5BF8);
PPC_FUNC_IMPL(__imp__sub_823A5BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,1156
	ctx.r10.s64 = r11.s64 + 1156;
	// clrldi r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1156);
	// srd r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// rlwimi r10,r6,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r10.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5C44"))) PPC_WEAK_FUNC(sub_823A5C44);
PPC_FUNC_IMPL(__imp__sub_823A5C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C48"))) PPC_WEAK_FUNC(sub_823A5C48);
PPC_FUNC_IMPL(__imp__sub_823A5C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// subfic r11,r4,95
	xer.ca = ctx.r4.u32 <= 95;
	r11.s64 = 95 - ctx.r4.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r9,r11,21846
	ctx.r9.s64 = r11.s64 * 21846;
	// rlwinm r11,r9,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825decb8
	sub_825DECB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5C6C"))) PPC_WEAK_FUNC(sub_823A5C6C);
PPC_FUNC_IMPL(__imp__sub_823A5C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C70"))) PPC_WEAK_FUNC(sub_823A5C70);
PPC_FUNC_IMPL(__imp__sub_823A5C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A5C84"))) PPC_WEAK_FUNC(sub_823A5C84);
PPC_FUNC_IMPL(__imp__sub_823A5C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C88"))) PPC_WEAK_FUNC(sub_823A5C88);
PPC_FUNC_IMPL(__imp__sub_823A5C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 548);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_823A5CC0"))) PPC_WEAK_FUNC(sub_823A5CC0);
PPC_FUNC_IMPL(__imp__sub_823A5CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5CC4"))) PPC_WEAK_FUNC(sub_823A5CC4);
PPC_FUNC_IMPL(__imp__sub_823A5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CC8"))) PPC_WEAK_FUNC(sub_823A5CC8);
PPC_FUNC_IMPL(__imp__sub_823A5CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// add r11,r3,r5
	r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A5CDC"))) PPC_WEAK_FUNC(sub_823A5CDC);
PPC_FUNC_IMPL(__imp__sub_823A5CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CE0"))) PPC_WEAK_FUNC(sub_823A5CE0);
PPC_FUNC_IMPL(__imp__sub_823A5CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// add r11,r3,r5
	r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r10,952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 952);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_823A5D18"))) PPC_WEAK_FUNC(sub_823A5D18);
PPC_FUNC_IMPL(__imp__sub_823A5D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D1C"))) PPC_WEAK_FUNC(sub_823A5D1C);
PPC_FUNC_IMPL(__imp__sub_823A5D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5D20"))) PPC_WEAK_FUNC(sub_823A5D20);
PPC_FUNC_IMPL(__imp__sub_823A5D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 1932, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 1924, temp.u32);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfsx f0,r9,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 1928, temp.u32);
	// srd r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5D70"))) PPC_WEAK_FUNC(sub_823A5D70);
PPC_FUNC_IMPL(__imp__sub_823A5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 6028, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,6020(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 6020, temp.u32);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfsx f0,r9,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f12,6024(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 6024, temp.u32);
	// srd r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5DC0"))) PPC_WEAK_FUNC(sub_823A5DC0);
PPC_FUNC_IMPL(__imp__sub_823A5DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825d7180
	sub_825D7180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5DEC"))) PPC_WEAK_FUNC(sub_823A5DEC);
PPC_FUNC_IMPL(__imp__sub_823A5DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5DF0"))) PPC_WEAK_FUNC(sub_823A5DF0);
PPC_FUNC_IMPL(__imp__sub_823A5DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825d7258
	sub_825D7258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A5E1C"))) PPC_WEAK_FUNC(sub_823A5E1C);
PPC_FUNC_IMPL(__imp__sub_823A5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5E20"))) PPC_WEAK_FUNC(sub_823A5E20);
PPC_FUNC_IMPL(__imp__sub_823A5E20) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r3,7000
	r30.s64 = ctx.r3.s64 + 7000;
	// addi r31,r3,5440
	r31.s64 = ctx.r3.s64 + 5440;
	// li r29,13
	r29.s64 = 13;
loc_823A5E3C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a5e54
	if (cr6.eq) goto loc_823A5E54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82715928
	sub_82715928(ctx, base);
loc_823A5E54:
	// lwz r11,824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 824);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a5e6c
	if (cr6.eq) goto loc_823A5E6C;
	// addi r3,r31,780
	ctx.r3.s64 = r31.s64 + 780;
	// bl 0x82715928
	sub_82715928(ctx, base);
loc_823A5E6C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a5e84
	if (cr6.eq) goto loc_823A5E84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271b918
	sub_8271B918(ctx, base);
loc_823A5E84:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// bne 0x823a5e3c
	if (!cr0.eq) goto loc_823A5E3C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,8080(r28)
	PPC_STORE_U32(r28.u32 + 8080, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A5EA0"))) PPC_WEAK_FUNC(sub_823A5EA0);
PPC_FUNC_IMPL(__imp__sub_823A5EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823A5EA4"))) PPC_WEAK_FUNC(sub_823A5EA4);
PPC_FUNC_IMPL(__imp__sub_823A5EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5EA8"))) PPC_WEAK_FUNC(sub_823A5EA8);
PPC_FUNC_IMPL(__imp__sub_823A5EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// addi r31,r5,16
	r31.s64 = ctx.r5.s64 + 16;
	// lwz r29,25320(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// li r11,1
	r11.s64 = 1;
	// li r20,20
	r20.s64 = 20;
	// li r25,0
	r25.s64 = 0;
	// rldicr r24,r11,63,63
	r24.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r23,21
	r23.s64 = 21;
loc_823A5EE0:
	// lwz r11,-16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x823a5fc4
	if (cr6.eq) goto loc_823A5FC4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a5f60
	if (cr6.eq) goto loc_823A5F60;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x823a611c
	if (!cr6.eq) goto loc_823A611C;
	// add r11,r22,r30
	r11.u64 = r22.u64 + r30.u64;
	// lbz r10,8101(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8101);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x823a611c
	if (cr6.eq) goto loc_823A611C;
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	f0.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// addi r9,r11,376
	ctx.r9.s64 = r11.s64 + 376;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r8,r29
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, temp.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r6,r24,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (r24.u64 >> (ctx.r7.u8 & 0x7F));
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6020(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6024(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r4.u64);
	// b 0x823a611c
	goto loc_823A611C;
loc_823A5F60:
	// add r11,r22,r30
	r11.u64 = r22.u64 + r30.u64;
	// lbz r10,8096(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8096);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x823a611c
	if (cr6.eq) goto loc_823A611C;
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	f0.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// addi r9,r11,120
	ctx.r9.s64 = r11.s64 + 120;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r8,r29
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, temp.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r6,r24,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (r24.u64 >> (ctx.r7.u8 & 0x7F));
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1924(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1928(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// b 0x823a611c
	goto loc_823A611C;
loc_823A5FC4:
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// mulli r10,r22,13
	ctx.r10.s64 = r22.s64 * 13;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lbz r26,8106(r10)
	r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8106);
	// cmplwi cr6,r26,255
	cr6.compare<uint32_t>(r26.u32, 255, xer);
	// beq cr6,0x823a611c
	if (cr6.eq) goto loc_823A611C;
	// lhz r7,-8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + -8);
	// addi r9,r11,-7
	ctx.r9.s64 = r11.s64 + -7;
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mulli r8,r7,44
	ctx.r8.s64 = ctx.r7.s64 * 44;
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// bgt cr6,0x823a6054
	if (cr6.gt) goto loc_823A6054;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x823a601c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_823A601C;
	// bdzf 4*cr6+eq,0x823a6024
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_823A6024;
	// bdzf 4*cr6+eq,0x823a602c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_823A602C;
	// bdzf 4*cr6+eq,0x823a6054
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_823A6054;
	// bne cr6,0x823a6050
	if (!cr6.eq) goto loc_823A6050;
loc_823A601C:
	// lwz r10,8084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8084);
	// b 0x823a6054
	goto loc_823A6054;
loc_823A6024:
	// lwz r10,8088(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8088);
	// b 0x823a6054
	goto loc_823A6054;
loc_823A602C:
	// lwz r10,8088(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8088);
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// beq cr6,0x823a6048
	if (cr6.eq) goto loc_823A6048;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// bne cr6,0x823a6054
	if (!cr6.eq) goto loc_823A6054;
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x823a6054
	goto loc_823A6054;
loc_823A6048:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x823a6054
	goto loc_823A6054;
loc_823A6050:
	// lwz r10,8092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8092);
loc_823A6054:
	// addi r28,r30,7832
	r28.s64 = r30.s64 + 7832;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r19,24(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// subfc r7,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r18,20(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r27,36(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r17,r4,r10
	r17.u64 = ctx.r4.u64 & ctx.r10.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mullw r10,r19,r17
	ctx.r10.s64 = int64_t(r19.s32) * int64_t(r17.s32);
	// mullw r11,r18,r17
	r11.s64 = int64_t(r18.s32) * int64_t(r17.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// li r11,128
	r11.s64 = 128;
	// lwz r8,7860(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 7860);
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// not r6,r9
	ctx.r6.u64 = ~ctx.r9.u64;
	// rlwinm r9,r7,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// rlwinm r7,r6,1,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x2;
	// rlwimi r11,r9,3,26,28
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0x38) | (r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// rlwinm r6,r8,0,22,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFE03FF;
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// rlwinm r6,r6,0,14,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// rlwinm r9,r11,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// li r10,3
	ctx.r10.s64 = 3;
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r8,7860(r30)
	PPC_STORE_U32(r30.u32 + 7860, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r7,7872(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 7872);
	// lwz r6,7876(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 7876);
	// rlwimi r6,r10,0,30,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFC);
	// rlwimi r6,r10,0,20,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwimi r7,r23,19,4,12
	ctx.r7.u64 = (__builtin_rotateleft32(r23.u32, 19) & 0xFF80000) | (ctx.r7.u64 & 0xFFFFFFFFF007FFFF);
	// stw r6,7876(r30)
	PPC_STORE_U32(r30.u32 + 7876, ctx.r6.u32);
	// stw r7,7872(r30)
	PPC_STORE_U32(r30.u32 + 7872, ctx.r7.u32);
	// bl 0x825df118
	sub_825DF118(ctx, base);
loc_823A611C:
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// bne 0x823a5ee0
	if (!cr0.eq) goto loc_823A5EE0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_823A612C"))) PPC_WEAK_FUNC(sub_823A612C);
PPC_FUNC_IMPL(__imp__sub_823A612C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_823A6130"))) PPC_WEAK_FUNC(sub_823A6130);
PPC_FUNC_IMPL(__imp__sub_823A6130) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,144(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,148(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,152(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,156(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,160(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,164(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,168(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,172(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,176(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,180(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// bl 0x8238d838
	sub_8238D838(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A61E4"))) PPC_WEAK_FUNC(sub_823A61E4);
PPC_FUNC_IMPL(__imp__sub_823A61E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A61E8"))) PPC_WEAK_FUNC(sub_823A61E8);
PPC_FUNC_IMPL(__imp__sub_823A61E8) {
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
	// bl 0x8238d8f0
	sub_8238D8F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5e20
	sub_823A5E20(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,8171(r31)
	PPC_STORE_U8(r31.u32 + 8171, r11.u8);
	// stb r11,8172(r31)
	PPC_STORE_U8(r31.u32 + 8172, r11.u8);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A622C"))) PPC_WEAK_FUNC(sub_823A622C);
PPC_FUNC_IMPL(__imp__sub_823A622C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A6230"))) PPC_WEAK_FUNC(sub_823A6230);
PPC_FUNC_IMPL(__imp__sub_823A6230) {
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
	// addi r19,r3,100
	r19.s64 = ctx.r3.s64 + 100;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r11,232(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6430
	if (cr6.eq) goto loc_823A6430;
	// lbz r11,729(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 729);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6430
	if (!cr6.eq) goto loc_823A6430;
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lwz r3,18224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a6284
	if (cr6.eq) goto loc_823A6284;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a6288
	if (!cr6.eq) goto loc_823A6288;
loc_823A6284:
	// li r11,0
	r11.s64 = 0;
loc_823A6288:
	// lwz r10,732(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 732);
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a6430
	if (cr6.eq) goto loc_823A6430;
	// lwz r11,8080(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8080);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// addi r4,r11,7884
	ctx.r4.s64 = r11.s64 + 7884;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r20,0
	r20.s64 = 0;
	// addi r21,r11,9244
	r21.s64 = r11.s64 + 9244;
loc_823A62C4:
	// lwz r24,0(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r11,r24,1350
	r11.s64 = r24.s64 + 1350;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r22
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a6430
	if (cr6.eq) goto loc_823A6430;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// lwz r11,232(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 232);
	// li r26,0
	r26.s64 = 0;
	// addi r23,r11,1092
	r23.s64 = r11.s64 + 1092;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a63f4
	if (!cr6.gt) goto loc_823A63F4;
	// addi r27,r22,5440
	r27.s64 = r22.s64 + 5440;
	// addi r25,r22,7000
	r25.s64 = r22.s64 + 7000;
loc_823A6338:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827238b8
	sub_827238B8(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a63d8
	if (cr6.eq) goto loc_823A63D8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823a63d8
	if (!cr6.gt) goto loc_823A63D8;
	// li r29,0
	r29.s64 = 0;
loc_823A6370:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bne cr6,0x823a63c4
	if (!cr6.eq) goto loc_823A63C4;
	// lwz r11,504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 496);
	// subf r6,r10,r11
	ctx.r6.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8270e5c8
	sub_8270E5C8(ctx, base);
	// lwz r11,484(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// srawi r4,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// bl 0x827100d8
	sub_827100D8(ctx, base);
loc_823A63C4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,512
	r29.s64 = r29.s64 + 512;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823a6370
	if (cr6.lt) goto loc_823A6370;
loc_823A63D8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,64
	r25.s64 = r25.s64 + 64;
	// addi r27,r27,60
	r27.s64 = r27.s64 + 60;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x823a6338
	if (cr6.lt) goto loc_823A6338;
loc_823A63F4:
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplwi cr6,r20,12
	cr6.compare<uint32_t>(r20.u32, 12, xer);
	// blt cr6,0x823a62c4
	if (cr6.lt) goto loc_823A62C4;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dee60
	sub_825DEE60(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825decb8
	sub_825DECB8(ctx, base);
loc_823A6430:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_823A643C"))) PPC_WEAK_FUNC(sub_823A643C);
PPC_FUNC_IMPL(__imp__sub_823A643C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_823A6440"))) PPC_WEAK_FUNC(sub_823A6440);
PPC_FUNC_IMPL(__imp__sub_823A6440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaae4
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// addi r28,r3,100
	r28.s64 = ctx.r3.s64 + 100;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r9,232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a67d0
	if (cr6.eq) goto loc_823A67D0;
	// lwz r11,8080(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8080);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,7884
	ctx.r4.s64 = r11.s64 + 7884;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// rldicr r7,r7,43,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r30,128
	ctx.r5.s64 = r30.s64 + 128;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r14,r11,1092
	r14.s64 = r11.s64 + 1092;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r17,0
	r17.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// addi r20,r30,5420
	r20.s64 = r30.s64 + 5420;
	// rldicr r29,r10,38,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// lfs f31,8892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8892);
	f31.f64 = double(temp.f32);
loc_823A64E8:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a67d0
	if (cr6.eq) goto loc_823A67D0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// li r15,0
	r15.s64 = 0;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a67a4
	if (!cr6.gt) goto loc_823A67A4;
	// addi r23,r30,6220
	r23.s64 = r30.s64 + 6220;
loc_823A650C:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x827238b8
	sub_827238B8(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6788
	if (cr6.eq) goto loc_823A6788;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r21,r23,-780
	r21.s64 = r23.s64 + -780;
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823a6788
	if (!cr6.gt) goto loc_823A6788;
	// li r19,0
	r19.s64 = 0;
loc_823A6540:
	// lwz r11,44(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 44);
	// add r25,r11,r19
	r25.u64 = r11.u64 + r19.u64;
	// lwzx r11,r11,r19
	r11.u64 = PPC_LOAD_U32(r11.u32 + r19.u32);
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(r11.u32, r16.u32, xer);
	// bne cr6,0x823a6774
	if (!cr6.eq) goto loc_823A6774;
	// cmplw cr6,r17,r21
	cr6.compare<uint32_t>(r17.u32, r21.u32, xer);
	// beq cr6,0x823a6590
	if (cr6.eq) goto loc_823A6590;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x823a6578
	if (cr6.eq) goto loc_823A6578;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// addi r5,r17,8
	ctx.r5.s64 = r17.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5b30
	sub_825E5B30(ctx, base);
loc_823A6578:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// addi r5,r21,8
	ctx.r5.s64 = r21.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5a38
	sub_825E5A38(ctx, base);
	// mr r17,r21
	r17.u64 = r21.u64;
loc_823A6590:
	// lwz r10,504(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 504);
	// lwz r9,36(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 36);
	// lwz r30,0(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// subf r26,r9,r10
	r26.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r24,r11,r26
	r24.u64 = r11.u64 + r26.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r28,496(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 496);
	// lwz r27,488(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 488);
	// beq cr6,0x823a65fc
	if (cr6.eq) goto loc_823A65FC;
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
loc_823A65E0:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823a67f0
	if (cr6.eq) goto loc_823A67F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823a65e0
	if (cr6.lt) goto loc_823A65E0;
loc_823A65FC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823A6600:
	// lwz r7,68(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823a6630
	if (cr6.eq) goto loc_823A6630;
	// addi r9,r10,80
	ctx.r9.s64 = ctx.r10.s64 + 80;
loc_823A6614:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x823a6808
	if (cr6.eq) goto loc_823A6808;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x823a6614
	if (cr6.lt) goto loc_823A6614;
loc_823A6630:
	// li r11,0
	r11.s64 = 0;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrldi r10,r26,32
	ctx.r10.u64 = r26.u64 & 0xFFFFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrldi r8,r28,32
	ctx.r8.u64 = r28.u64 & 0xFFFFFFFF;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// fcfid f6,f0
	ctx.f6.f64 = double(f0.s64);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// fmuls f28,f7,f31
	f28.f64 = double(float(ctx.f7.f64 * f31.f64));
	// frsp f27,f6
	f27.f64 = double(float(ctx.f6.f64));
	// fmuls f30,f5,f31
	f30.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmuls f29,f4,f31
	f29.f64 = double(float(ctx.f4.f64 * f31.f64));
	// bl 0x8271aae0
	sub_8271AAE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f26,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f26.f64 = double(temp.f32);
	// lfs f25,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f25.f64 = double(temp.f32);
	// lfs f24,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f24.f64 = double(temp.f32);
	// lfs f23,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f23.f64 = double(temp.f32);
	// bl 0x8271aae0
	sub_8271AAE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f3,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f26,3520(r11)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r11.u32 + 3520, temp.u32);
	// stfs f25,3524(r11)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r11.u32 + 3524, temp.u32);
	// stfs f24,3528(r11)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r11.u32 + 3528, temp.u32);
	// stfs f23,3532(r11)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r11.u32 + 3532, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 | r29.u64;
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// stfs f3,3536(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 3536, temp.u32);
	// stfs f2,3540(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 3540, temp.u32);
	// stfs f1,3544(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 3544, temp.u32);
	// stfs f0,3548(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3548, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r5,r7,r29
	ctx.r5.u64 = ctx.r7.u64 | r29.u64;
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// stfs f28,3552(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 3552, temp.u32);
	// stfs f29,3556(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 3556, temp.u32);
	// stfs f30,3560(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 3560, temp.u32);
	// stfs f27,3564(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 3564, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | r29.u64;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// lwz r5,496(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 496);
	// bl 0x8270e5c8
	sub_8270E5C8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// lwz r30,372(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
loc_823A6774:
	// lwz r11,20(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 20);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,512
	r19.s64 = r19.s64 + 512;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// blt cr6,0x823a6540
	if (cr6.lt) goto loc_823A6540;
loc_823A6788:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r23,r23,60
	r23.s64 = r23.s64 + 60;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpw cr6,r15,r3
	cr6.compare<int32_t>(r15.s32, ctx.r3.s32, xer);
	// blt cr6,0x823a650c
	if (cr6.lt) goto loc_823A650C;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823A67A4:
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(r16.u32, 5, xer);
	// blt cr6,0x823a64e8
	if (cr6.lt) goto loc_823A64E8;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x823a67d0
	if (cr6.eq) goto loc_823A67D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// addi r5,r17,8
	ctx.r5.s64 = r17.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5b30
	sub_825E5B30(ctx, base);
loc_823A67D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab30
	// b 0x828e9430
	return;
loc_823A67F0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r8,r11,72
	ctx.r8.s64 = r11.s64 + 72;
	// b 0x823a6600
	goto loc_823A6600;
loc_823A6808:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,72
	r11.s64 = r11.s64 + 72;
}

__attribute__((alias("__imp__sub_823A681C"))) PPC_WEAK_FUNC(sub_823A681C);
PPC_FUNC_IMPL(__imp__sub_823A681C) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a6634
	// ERROR 823A6634
	return;
}

__attribute__((alias("__imp__sub_823A6820"))) PPC_WEAK_FUNC(sub_823A6820);
PPC_FUNC_IMPL(__imp__sub_823A6820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1345
	r11.s64 = ctx.r4.s64 + 1345;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lwzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// beq cr6,0x823a7010
	if (cr6.eq) goto loc_823A7010;
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// addi r20,r11,1092
	r20.s64 = r11.s64 + 1092;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823a7010
	if (cr6.eq) goto loc_823A7010;
	// lwzx r3,r31,r22
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r22.u32);
	// bl 0x8238d7c8
	sub_8238D7C8(ctx, base);
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lwz r3,18224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a6894
	if (cr6.eq) goto loc_823A6894;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a6898
	if (!cr6.eq) goto loc_823A6898;
loc_823A6894:
	// li r11,0
	r11.s64 = 0;
loc_823A6898:
	// lwz r10,732(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 732);
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823a68f8
	if (!cr6.eq) goto loc_823A68F8;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825dca10
	sub_825DCA10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a68f8
	if (!cr6.eq) goto loc_823A68F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825dc990
	sub_825DC990(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825dcd20
	sub_825DCD20(ctx, base);
loc_823A68F8:
	// lwz r31,25320(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_823A6904:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de948
	sub_825DE948(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwx r3,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825de998
	sub_825DE998(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r3,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// blt cr6,0x823a6904
	if (cr6.lt) goto loc_823A6904;
	// add r29,r21,r22
	r29.u64 = r21.u64 + r22.u64;
	// lfs f0,192(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 192);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,25320(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// rldicr r30,r11,63,63
	r30.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lbz r11,8101(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// addi r8,r11,376
	ctx.r8.s64 = r11.s64 + 376;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r7,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srd r5,r30,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r6.u8 & 0x7F));
	// lfs f13,196(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6020(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 6020, temp.u32);
	// lfs f12,200(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,6024(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 6024, temp.u32);
	// lfs f11,204(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 6028, temp.u32);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// lbz r11,729(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 729);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6dc8
	if (cr6.eq) goto loc_823A6DC8;
	// lbz r10,8096(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 8096);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,32396
	r11.s64 = r11.s64 + 32396;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x823a6b58
	if (cr6.eq) goto loc_823A6B58;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A69C4:
	// lbz r9,8096(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8096);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,120
	ctx.r7.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1924, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1928, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1932, temp.u32);
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8096(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8096);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r9,120
	ctx.r7.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1924, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1928, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1932, temp.u32);
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8096(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8096);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r7,r9,120
	ctx.r7.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1924, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1928, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1932, temp.u32);
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8096(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8096);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r7,r9,120
	ctx.r7.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1924, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1928, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1932, temp.u32);
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8096(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8096);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r9,120
	ctx.r7.s64 = ctx.r9.s64 + 120;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1924, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1928, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 1932, temp.u32);
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// bdnz 0x823a69c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A69C4;
loc_823A6B58:
	// lbz r10,8101(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x823a6d04
	if (cr6.eq) goto loc_823A6D04;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823A6B70:
	// lbz r9,8101(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,376
	ctx.r7.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6020, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6024, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6028, temp.u32);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8101(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r9,376
	ctx.r7.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6020, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6024, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6028, temp.u32);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8101(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r7,r9,376
	ctx.r7.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6020, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6024, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6028, temp.u32);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8101(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r7,r9,376
	ctx.r7.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6020, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6024, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6028, temp.u32);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r9,8101(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r9,376
	ctx.r7.s64 = ctx.r9.s64 + 376;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f0,r6,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r4,r30,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r5.u8 & 0x7F));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6020, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6024, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 6028, temp.u32);
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// bdnz 0x823a6b70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A6B70;
loc_823A6D04:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a6d24
	if (cr6.eq) goto loc_823A6D24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a6d28
	if (!cr6.eq) goto loc_823A6D28;
loc_823A6D24:
	// li r11,0
	r11.s64 = 0;
loc_823A6D28:
	// addi r27,r11,88
	r27.s64 = r11.s64 + 88;
	// li r28,0
	r28.s64 = 0;
loc_823A6D30:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(r28.u32, 6, xer);
	// blt cr6,0x823a6d30
	if (cr6.lt) goto loc_823A6D30;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lbz r10,730(r22)
	ctx.r10.u64 = PPC_LOAD_U8(r22.u32 + 730);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,9196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9196);
	f0.f64 = double(temp.f32);
	// lfs f13,9188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9188);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// lfs f11,9200(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9200);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x823a6d8c
	if (cr6.eq) goto loc_823A6D8C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f12,9208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9208);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// lfs f11,9216(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9216);
	ctx.f11.f64 = double(temp.f32);
loc_823A6D8C:
	// lbz r11,8101(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8101);
	// addi r11,r11,14
	r11.s64 = r11.s64 + 14;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,376
	ctx.r9.s64 = r11.s64 + 376;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stfsx f13,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, temp.u32);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// srd r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r7.u8 & 0x7F));
	// stfs f11,6028(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// stfs f12,6020(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// stfs f0,6024(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r4,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r4.u64);
loc_823A6DC8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a6ec4
	if (!cr6.gt) goto loc_823A6EC4;
	// addi r24,r22,5440
	r24.s64 = r22.s64 + 5440;
	// addi r23,r22,7000
	r23.s64 = r22.s64 + 7000;
loc_823A6DE4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x827238b8
	sub_827238B8(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6ea8
	if (cr6.eq) goto loc_823A6EA8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823a6ea8
	if (!cr6.gt) goto loc_823A6EA8;
	// li r27,0
	r27.s64 = 0;
loc_823A6E1C:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// add r29,r27,r11
	r29.u64 = r27.u64 + r11.u64;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(r11.s32, r21.s32, xer);
	// bne cr6,0x823a6e94
	if (!cr6.eq) goto loc_823A6E94;
	// lbz r11,729(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 729);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6e54
	if (!cr6.eq) goto loc_823A6E54;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823a5ea8
	sub_823A5EA8(ctx, base);
loc_823A6E54:
	// lwz r11,504(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 504);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,496(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 496);
	// subf r6,r10,r11
	ctx.r6.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8270e5c8
	sub_8270E5C8(ctx, base);
	// lwz r11,484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 484);
	// lwz r9,508(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 508);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,40(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// srawi r4,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// bl 0x827100d8
	sub_827100D8(ctx, base);
loc_823A6E94:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,512
	r27.s64 = r27.s64 + 512;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x823a6e1c
	if (cr6.lt) goto loc_823A6E1C;
loc_823A6EA8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r23,r23,64
	r23.s64 = r23.s64 + 64;
	// addi r24,r24,60
	r24.s64 = r24.s64 + 60;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x823a6de4
	if (cr6.lt) goto loc_823A6DE4;
loc_823A6EC4:
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,34
	ctx.r9.s64 = 34;
	// addi r11,r31,1128
	r11.s64 = r31.s64 + 1128;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
loc_823A6EDC:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r6,r9,-2
	ctx.r6.s64 = ctx.r9.s64 + -2;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// clrldi r3,r6,32
	ctx.r3.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rlwimi r7,r5,10,19,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// srd r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r3.u8 & 0x7F));
	// stw r7,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r7.u32);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lwzx r5,r10,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// srd r3,r30,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x40 ? 0 : (r30.u64 >> (ctx.r3.u8 & 0x7F));
	// ld r28,24(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// clrldi r27,r9,32
	r27.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// or r28,r6,r28
	r28.u64 = ctx.r6.u64 | r28.u64;
	// lwzx r7,r10,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r26,r1,120
	r26.s64 = ctx.r1.s64 + 120;
	// std r28,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r28.u64);
	// srd r27,r30,r27
	r27.u64 = r27.u8 & 0x40 ? 0 : (r30.u64 >> (r27.u8 & 0x7F));
	// lwzx r29,r10,r29
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// addi r28,r1,92
	r28.s64 = ctx.r1.s64 + 92;
	// lwzx r26,r10,r26
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// addi r25,r9,1
	r25.s64 = ctx.r9.s64 + 1;
	// addi r24,r1,124
	r24.s64 = ctx.r1.s64 + 124;
	// clrldi r25,r25,32
	r25.u64 = r25.u64 & 0xFFFFFFFF;
	// lwz r23,24(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r28,r10,r28
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// srd r25,r30,r25
	r25.u64 = r25.u8 & 0x40 ? 0 : (r30.u64 >> (r25.u8 & 0x7F));
	// rlwimi r23,r5,13,16,18
	r23.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (r23.u64 & 0xFFFFFFFFFFFF1FFF);
	// lwzx r24,r10,r24
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r23,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r23.u32);
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwimi r5,r4,10,19,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x1C00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r5,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r5.u32);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwimi r5,r7,13,16,18
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 13) & 0xE000) | (ctx.r5.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r5,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r5.u32);
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r3,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r3.u64);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rlwimi r7,r29,10,19,21
	ctx.r7.u64 = (__builtin_rotateleft32(r29.u32, 10) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r7,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r7.u32);
	// ld r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r5,r27,r6
	ctx.r5.u64 = r27.u64 | ctx.r6.u64;
	// std r5,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r5.u64);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// rlwimi r4,r26,13,16,18
	ctx.r4.u64 = (__builtin_rotateleft32(r26.u32, 13) & 0xE000) | (ctx.r4.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r4,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r4.u32);
	// ld r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r7,r27,r3
	ctx.r7.u64 = r27.u64 | ctx.r3.u64;
	// std r7,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r7.u64);
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// rlwimi r6,r28,10,19,21
	ctx.r6.u64 = (__builtin_rotateleft32(r28.u32, 10) & 0x1C00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r6,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r6.u32);
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r4,r25,r5
	ctx.r4.u64 = r25.u64 | ctx.r5.u64;
	// std r4,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r4.u64);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// rlwimi r3,r24,13,16,18
	ctx.r3.u64 = (__builtin_rotateleft32(r24.u32, 13) & 0xE000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwu r3,96(r11)
	ea = 96 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r6,r25,r7
	ctx.r6.u64 = r25.u64 | ctx.r7.u64;
	// std r6,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r6.u64);
	// bdnz 0x823a6edc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A6EDC;
loc_823A7010:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_823A701C"))) PPC_WEAK_FUNC(sub_823A701C);
PPC_FUNC_IMPL(__imp__sub_823A701C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_823A7020"))) PPC_WEAK_FUNC(sub_823A7020);
PPC_FUNC_IMPL(__imp__sub_823A7020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e9410
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r9.u32);
	// bne cr6,0x823a706c
	if (!cr6.eq) goto loc_823A706C;
	// lbz r11,8171(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8171);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a706c
	if (!cr6.eq) goto loc_823A706C;
	// li r11,1
	r11.s64 = 1;
	// stb r26,8172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8172, r26.u8);
	// addi r3,r3,8064
	ctx.r3.s64 = ctx.r3.s64 + 8064;
	// stb r11,8171(r31)
	PPC_STORE_U8(r31.u32 + 8171, r11.u8);
	// bl 0x82613c78
	sub_82613C78(ctx, base);
loc_823A706C:
	// lbz r11,8171(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8171);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7228
	if (cr6.eq) goto loc_823A7228;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,25320(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7350
	sub_825D7350(ctx, base);
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7330
	sub_825D7330(ctx, base);
	// lis r29,-31968
	r29.s64 = -2095054848;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r10,22000
	ctx.r9.s64 = ctx.r10.s64 + 22000;
	// lwz r3,18224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r28,432(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// lwz r27,368(r9)
	r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// beq cr6,0x823a70dc
	if (cr6.eq) goto loc_823A70DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,18224(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 18224);
	// bne cr6,0x823a70e0
	if (!cr6.eq) goto loc_823A70E0;
loc_823A70DC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823A70E0:
	// addi r29,r11,32
	r29.s64 = r11.s64 + 32;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a70fc
	if (cr6.eq) goto loc_823A70FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a7100
	if (!cr6.eq) goto loc_823A7100;
loc_823A70FC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823A7100:
	// addi r4,r11,96
	ctx.r4.s64 = r11.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,8064
	ctx.r3.s64 = r31.s64 + 8064;
	// ld r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 128);
	// ld r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 136);
	// ld r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 144);
	// ld r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 152);
	// ld r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 160);
	// ld r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 168);
	// bl 0x82615310
	sub_82615310(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,6016(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 6016, temp.u32);
	// li r7,31
	ctx.r7.s64 = 31;
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,63,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfs f13,6020(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 6020, temp.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// rldicr r7,r7,59,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 59) & 0xF800000000000000;
	// stfs f12,6024(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 6024, temp.u32);
	// li r6,18
	ctx.r6.s64 = 18;
	// lfs f11,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stfs f11,6028(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 6028, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// or r10,r11,r12
	ctx.r10.u64 = r11.u64 | r12.u64;
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f298
	sub_8270F298(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f298
	sub_8270F298(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lbz r9,8172(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 8172);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a7228
	if (cr6.eq) goto loc_823A7228;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x823a7228
	if (!cr6.eq) goto loc_823A7228;
	// stb r26,8171(r31)
	PPC_STORE_U8(r31.u32 + 8171, r26.u8);
	// stb r26,8172(r31)
	PPC_STORE_U8(r31.u32 + 8172, r26.u8);
loc_823A7228:
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
}

__attribute__((alias("__imp__sub_823A7234"))) PPC_WEAK_FUNC(sub_823A7234);
PPC_FUNC_IMPL(__imp__sub_823A7234) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823A7238"))) PPC_WEAK_FUNC(sub_823A7238);
PPC_FUNC_IMPL(__imp__sub_823A7238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r8,r11,9272
	ctx.r8.s64 = r11.s64 + 9272;
	// addi r7,r9,9260
	ctx.r7.s64 = ctx.r9.s64 + 9260;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r28,r3,96
	r28.s64 = ctx.r3.s64 + 96;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// addi r11,r3,5356
	r11.s64 = ctx.r3.s64 + 5356;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r27,0
	r27.s64 = 0;
loc_823A7274:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a729c
	if (cr6.eq) goto loc_823A729C;
loc_823A7280:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a7280
	if (!cr0.eq) goto loc_823A7280;
loc_823A729C:
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// bdnz 0x823a7274
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A7274;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r11,21920
	ctx.r10.s64 = r11.s64 + 21920;
	// lwz r30,16(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a72d0
	if (cr6.eq) goto loc_823A72D0;
	// addi r29,r31,7884
	r29.s64 = r31.s64 + 7884;
loc_823A72BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715928
	sub_82715928(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// bne 0x823a72bc
	if (!cr0.eq) goto loc_823A72BC;
loc_823A72D0:
	// stw r27,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r27,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r27.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// bl 0x82723748
	sub_82723748(ctx, base);
	// addi r30,r31,8064
	r30.s64 = r31.s64 + 8064;
	// li r29,2
	r29.s64 = 2;
loc_823A72EC:
	// addi r30,r30,-60
	r30.s64 = r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x823a72ec
	if (!cr0.lt) goto loc_823A72EC;
	// addi r30,r31,7832
	r30.s64 = r31.s64 + 7832;
	// li r29,12
	r29.s64 = 12;
loc_823A7308:
	// addi r30,r30,-64
	r30.s64 = r30.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271bab8
	sub_8271BAB8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x823a7308
	if (!cr0.lt) goto loc_823A7308;
	// addi r28,r31,780
	r28.s64 = r31.s64 + 780;
	// li r29,12
	r29.s64 = 12;
	// addi r30,r28,6220
	r30.s64 = r28.s64 + 6220;
loc_823A7328:
	// addi r30,r30,-60
	r30.s64 = r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x823a7328
	if (!cr0.lt) goto loc_823A7328;
	// addi r30,r28,5440
	r30.s64 = r28.s64 + 5440;
	// li r29,12
	r29.s64 = 12;
loc_823A7344:
	// addi r30,r30,-60
	r30.s64 = r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x823a7344
	if (!cr0.lt) goto loc_823A7344;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r31,5380
	r11.s64 = r31.s64 + 5380;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823A7364:
	// lwzu r10,-4(r11)
	ea = -4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a738c
	if (cr6.eq) goto loc_823A738C;
loc_823A7370:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a7370
	if (!cr0.eq) goto loc_823A7370;
loc_823A738C:
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// bdnz 0x823a7364
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823A7364;
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x82392328
	sub_82392328(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = r31.s64 + 484;
	// bl 0x82392328
	sub_82392328(ctx, base);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x82392328
	sub_82392328(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x82392328
	sub_82392328(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82712098
	sub_82712098(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238df28
	sub_8238DF28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A73D0"))) PPC_WEAK_FUNC(sub_823A73D0);
PPC_FUNC_IMPL(__imp__sub_823A73D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823A73D4"))) PPC_WEAK_FUNC(sub_823A73D4);
PPC_FUNC_IMPL(__imp__sub_823A73D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A73D8"))) PPC_WEAK_FUNC(sub_823A73D8);
PPC_FUNC_IMPL(__imp__sub_823A73D8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,736(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 736);
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a7480
	if (cr6.eq) goto loc_823A7480;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a7420
	if (cr6.eq) goto loc_823A7420;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a7424
	if (!cr6.eq) goto loc_823A7424;
loc_823A7420:
	// li r11,0
	r11.s64 = 0;
loc_823A7424:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,740(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 740);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stb r29,736(r30)
	PPC_STORE_U8(r30.u32 + 736, r29.u8);
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsel f11,f12,f12,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// lfs f0,9200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9200);
	f0.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// fsubs f31,f0,f9
	f31.f64 = double(float(f0.f64 - ctx.f9.f64));
	// beq cr6,0x823a7470
	if (cr6.eq) goto loc_823A7470;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a7474
	if (!cr6.eq) goto loc_823A7474;
loc_823A7470:
	// li r11,0
	r11.s64 = 0;
loc_823A7474:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// stfs f13,740(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 740, temp.u32);
loc_823A7480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_823A7488"))) PPC_WEAK_FUNC(sub_823A7488);
PPC_FUNC_IMPL(__imp__sub_823A7488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823A748C"))) PPC_WEAK_FUNC(sub_823A748C);
PPC_FUNC_IMPL(__imp__sub_823A748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7490"))) PPC_WEAK_FUNC(sub_823A7490);
PPC_FUNC_IMPL(__imp__sub_823A7490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v32{};
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// addi r12,r1,-160
	r12.s64 = ctx.r1.s64 + -160;
	// bl 0x828ebcc4
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// addi r21,r3,100
	r21.s64 = ctx.r3.s64 + 100;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r21.u32);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lbz r9,728(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 728);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823a756c
	if (!cr6.eq) goto loc_823A756C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5e20
	sub_823A5E20(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// lbz r11,8171(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8171);
	// beq cr6,0x823a7540
	if (cr6.eq) goto loc_823A7540;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7534
	if (cr6.eq) goto loc_823A7534;
	// lbz r11,8172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a7534
	if (!cr6.eq) goto loc_823A7534;
	// li r11,1
	r11.s64 = 1;
	// addi r3,r31,8064
	ctx.r3.s64 = r31.s64 + 8064;
	// stb r11,8172(r31)
	PPC_STORE_U8(r31.u32 + 8172, r11.u8);
	// bl 0x82613c90
	sub_82613C90(ctx, base);
loc_823A7534:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5710
	sub_823A5710(ctx, base);
	// b 0x823a7568
	goto loc_823A7568;
loc_823A7540:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7554
	if (cr6.eq) goto loc_823A7554;
	// lbz r11,8172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7568
	if (cr6.eq) goto loc_823A7568;
loc_823A7554:
	// li r11,1
	r11.s64 = 1;
	// stb r23,8172(r31)
	PPC_STORE_U8(r31.u32 + 8172, r23.u8);
	// addi r3,r31,8064
	ctx.r3.s64 = r31.s64 + 8064;
	// stb r11,8171(r31)
	PPC_STORE_U8(r31.u32 + 8171, r11.u8);
	// bl 0x82613c78
	sub_82613C78(ctx, base);
loc_823A7568:
	// stb r23,728(r31)
	PPC_STORE_U8(r31.u32 + 728, r23.u8);
loc_823A756C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f29,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f29.f64 = double(temp.f32);
	// lfs f30,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f30.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f29,236(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,228(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,232(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,128(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// stfs f7,132(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f6,136(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// stfs f5,140(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// lfs f4,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// addi r27,r30,48
	r27.s64 = r30.s64 + 48;
	// stfs f4,144(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f3,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,148(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f2,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,152(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f1,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,156(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f13,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f12,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f11,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,172(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f10,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,176(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f9,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f8,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,184(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f7,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,188(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// bl 0x823a95d8
	sub_823A95D8(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lwz r8,232(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a7eb4
	if (cr6.eq) goto loc_823A7EB4;
	// addi r26,r31,208
	r26.s64 = r31.s64 + 208;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82712070
	sub_82712070(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f7,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f3,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f2,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f1,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// lfs f13,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// bl 0x82712088
	sub_82712088(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r29,r25,-4
	r29.s64 = r25.s64 + -4;
	// addi r28,r31,8080
	r28.s64 = r31.s64 + 8080;
	// li r30,3
	r30.s64 = 3;
	// lfs f31,9200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9200);
	f31.f64 = double(temp.f32);
loc_823A77A4:
	// lfsu f0,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.f13.u64);
	// lwz r11,244(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	PPC_STORE_U32(ea, r11.u32);
	r28.u32 = ea;
	// bne 0x823a77a4
	if (!cr0.eq) goto loc_823A77A4;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,8080(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8080);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r10,21920
	ctx.r9.s64 = ctx.r10.s64 + 21920;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r10,r31,8080
	ctx.r10.s64 = r31.s64 + 8080;
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / r11.u32;
	// mullw r3,r7,r11
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// subf r11,r3,r8
	r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// stw r11,8080(r31)
	PPC_STORE_U32(r31.u32 + 8080, r11.u32);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,7884
	ctx.r3.s64 = r11.s64 + 7884;
	// bl 0x827159a8
	sub_827159A8(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,1092
	ctx.r3.s64 = r11.s64 + 1092;
	// bl 0x827238d0
	sub_827238D0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x823a7e9c
	if (!cr6.gt) goto loc_823A7E9C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vspltisw128 v122,0
	_mm_store_si128((__m128i*)v122.u32, _mm_set1_epi32(int(0x0)));
	// addi r27,r30,32
	r27.s64 = r30.s64 + 32;
	// lbz r20,743(r1)
	r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 743);
	// addi r29,r24,16
	r29.s64 = r24.s64 + 16;
	// addi r21,r22,4
	r21.s64 = r22.s64 + 4;
	// mr r26,r23
	r26.u64 = r23.u64;
	// vupkd3d128 v123,v122,4
	temp.f32 = 3.0f;
	temp.s32 += v122.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v122.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v123 = vTemp;
	// lfs f31,2992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f31.f64 = double(temp.f32);
	// addi r28,r31,784
	r28.s64 = r31.s64 + 784;
	// li r25,8
	r25.s64 = 8;
	// li r30,16
	r30.s64 = 16;
	// li r24,48
	r24.s64 = 48;
	// li r19,-16
	r19.s64 = -16;
loc_823A7870:
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// lvlx128 v52,r0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r29,-8
	ctx.r10.s64 = r29.s64 + -8;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// vsldoi128 v48,v52,v52,8
	_mm_store_si128((__m128i*)v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v52.u8), 8));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v63,v123,234
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x15));
	// lvrx128 v51,r25,r29
	temp.u32 = r25.u32 + r29.u32;
	_mm_store_si128((__m128i*)v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vpermwi128 v62,v123,186
	_mm_store_si128((__m128i*)v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x45));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvlx128 v59,r0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpermwi128 v61,v123,174
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x51));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vpermwi128 v60,v123,171
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x54));
	// vsldoi128 v57,v59,v59,8
	_mm_store_si128((__m128i*)v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v59.u8), 8));
	// lvrx128 v58,r25,r11
	temp.u32 = r25.u32 + r11.u32;
	_mm_store_si128((__m128i*)v58.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsldoi128 v54,v56,v56,8
	_mm_store_si128((__m128i*)v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v56.u8), 8));
	// lvrx128 v55,r25,r10
	temp.u32 = r25.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r11,r26,r9
	r11.u64 = r26.u64 + ctx.r9.u64;
	// vor128 v46,v48,v51
	_mm_store_si128((__m128i*)v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v51.u8)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r26,r9
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + ctx.r9.u32);
	// vor128 v53,v57,v58
	_mm_store_si128((__m128i*)v53.u8, _mm_or_si128(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v58.u8)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vor128 v50,v54,v55
	_mm_store_si128((__m128i*)v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)v55.u8)));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r18,4(r11)
	r18.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkd3d128 v49,v53,20
	__builtin_trap();
	// lwz r17,8(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// vupkd3d128 v47,v50,20
	__builtin_trap();
	// li r10,0
	ctx.r10.s64 = 0;
	// vupkd3d128 v44,v46,20
	__builtin_trap();
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// stvx128 v60,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stw r10,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r18.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r17,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r17.u32);
	// stvlx128 v49,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v49.u8[15 - i]);
	// stvrx128 v49,r3,r30
	ea = ctx.r3.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v49.u8[i]);
	// vpermwi128 v45,v123,254
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x1));
	// stvlx128 v47,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v47.u8[15 - i]);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// stvrx128 v47,r7,r30
	ea = ctx.r7.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v47.u8[i]);
	// stvlx128 v44,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v44.u8[15 - i]);
	// stvrx128 v44,r5,r30
	ea = ctx.r5.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v44.u8[i]);
	// lfs f11,380(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	f0.f64 = double(temp.f32);
	// lfs f12,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f6,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f2,f0,f11
	ctx.f2.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f0,f11,f12
	f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f9,f4,f1
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fadds f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f12,f7,f8
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f11,f7,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f8,f0,f5
	ctx.f8.f64 = double(float(f0.f64 + ctx.f5.f64));
	// fsubs f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 - f0.f64));
	// fadds f5,f1,f4
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f10,f2,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f4,f3,f2
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lvx128 v43,r11,r24
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((r11.u32 + r24.u32) & ~0xF), VectorMaskL));
	// fnmsubs f2,f12,f31,f29
	ctx.f2.f64 = double(float(-(ctx.f12.f64 * f31.f64 - f29.f64)));
	// vaddfp128 v42,v43,v43
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v42.f32, _mm_add_ps(_mm_load_ps(v43.f32), _mm_load_ps(v43.f32)));
	// fnmsubs f1,f11,f31,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * f31.f64 - f29.f64)));
	// vpermwi128 v41,v43,7
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v43.u32), 0xF8));
	// fnmsubs f0,f13,f31,f29
	f0.f64 = double(float(-(ctx.f13.f64 * f31.f64 - f29.f64)));
	// vspltw128 v40,v43,3
	_mm_store_si128((__m128i*)v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v43.u32), 0x0));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// fmuls f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f3,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f8,f31
	ctx.f11.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f10,f7,f31
	ctx.f10.f64 = double(float(ctx.f7.f64 * f31.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f9,f5,f31
	ctx.f9.f64 = double(float(ctx.f5.f64 * f31.f64));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f8,f4,f31
	ctx.f8.f64 = double(float(ctx.f4.f64 * f31.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vpermwi128 v12,v123,171
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x54));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r10,752
	ctx.r10.s64 = ctx.r10.s64 + 752;
	// vmulfp128 v39,v43,v42
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v39.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v42.f32)));
	// vpermwi128 v38,v42,155
	_mm_store_si128((__m128i*)v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0x64));
	// vpermwi128 v37,v42,99
	_mm_store_si128((__m128i*)v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v42.u32), 0x9C));
	// stfs f9,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// vmulfp128 v36,v41,v38
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v36.f32, _mm_mul_ps(_mm_load_ps(v41.f32), _mm_load_ps(v38.f32)));
	// stfs f29,156(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// vmulfp128 v35,v40,v37
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v35.f32, _mm_mul_ps(_mm_load_ps(v40.f32), _mm_load_ps(v37.f32)));
	// vpermwi128 v34,v39,64
	_mm_store_si128((__m128i*)v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v39.u32), 0xBF));
	// vpermwi128 v33,v39,164
	_mm_store_si128((__m128i*)v33.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v39.u32), 0x5B));
	// vsubfp128 v32,v45,v34
	_mm_store_ps(v32.f32, _mm_sub_ps(_mm_load_ps(v45.f32), _mm_load_ps(v34.f32)));
	// vaddfp128 v63,v36,v35
	_mm_store_ps(v63.f32, _mm_add_ps(_mm_load_ps(v36.f32), _mm_load_ps(v35.f32)));
	// vsubfp128 v62,v36,v35
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v36.f32), _mm_load_ps(v35.f32)));
	// vsubfp128 v61,v32,v33
	_mm_store_ps(v61.f32, _mm_sub_ps(_mm_load_ps(v32.f32), _mm_load_ps(v33.f32)));
	// vpermwi128 v60,v63,66
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xBD));
	// vsldoi128 v59,v62,v63,8
	_mm_store_si128((__m128i*)v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8), 8));
	// vrlimi128 v60,v62,6,3
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 57), 6));
	// vpermwi128 v0,v59,136
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x77));
	// vrlimi128 v61,v123,1,3
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v123.f32), 57), 1));
	// vor128 v63,v61,v61
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)v61.u8));
	// vpermwi128 v58,v61,7
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xF8));
	// vrlimi128 v0,v61,3,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 228), 3));
	// vrlimi128 v63,v60,6,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 6));
	// vmrglw128 v13,v60,v58
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v58.u32), _mm_load_si128((__m128i*)v60.u32)));
	// beq cr6,0x823a7b2c
	if (cr6.eq) goto loc_823A7B2C;
	// li r9,64
	ctx.r9.s64 = 64;
	// vor128 v57,v122,v122
	_mm_store_si128((__m128i*)v57.u8, _mm_load_si128((__m128i*)v122.u8));
	// vspltw128 v56,v63,0
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// vor128 v11,v122,v122
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v122.u8));
	// vspltw128 v55,v13,0
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vor128 v10,v122,v122
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v122.u8));
	// vspltw128 v54,v0,0
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v53,v12,0
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v52,r11,r9
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v6,v13,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vrlimi128 v57,v52,8,0
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 228), 8));
	// vspltw v31,v13,2
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v27,v13,3
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vrlimi128 v11,v52,4,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 228), 4));
	// vspltw128 v8,v63,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vrlimi128 v10,v52,2,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(v52.f32), 228), 2));
	// vspltw v5,v0,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v7,v56,v57
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v56.f32), _mm_load_ps(v57.f32)));
	// vspltw v3,v12,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vmulfp128 v13,v55,v57
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v57.f32)));
	// vspltw v30,v0,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v4,v54,v57
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v57.f32)));
	// vspltw v26,v0,3
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v2,v53,v57
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v53.f32), _mm_load_ps(v57.f32)));
	// vspltw v29,v12,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v25,v12,3
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vspltw128 v1,v63,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vpermwi128 v9,v123,171
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x54));
	// vspltw128 v28,v63,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vor128 v63,v9,v9
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmaddfp v0,v8,v11,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v6,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v5,v11,v4
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v3,v11,v2
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v0,v1,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v31,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v30,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v11,v29,v10,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v63,v28,v63,v0
	_mm_store_ps(v63.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v63.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v27,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v26,v9,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v25,v9,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v11.f32)));
loc_823A7B2C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vor128 v127,v12,v12
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vor128 v126,v12,v12
	_mm_store_si128((__m128i*)v126.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// vor128 v125,v12,v12
	_mm_store_si128((__m128i*)v125.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// vor128 v124,v12,v12
	_mm_store_si128((__m128i*)v124.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r0,r8
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v60,r0,r7
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw128 v51,v62,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// lvx128 v59,r0,r6
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw128 v50,v61,0
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// vspltw128 v49,v60,0
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vspltw128 v48,v59,0
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xFF));
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// vmulfp128 v10,v51,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v11,v62,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vmulfp128 v8,v50,v63
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v9,v61,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vmulfp128 v6,v49,v63
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v7,v60,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vmulfp128 v4,v48,v63
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v63.f32)));
	// vspltw128 v5,v59,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xAA));
	// vspltw128 v3,v62,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// li r17,32
	r17.s64 = 32;
	// vspltw128 v2,v61,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vspltw128 v1,v60,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vspltw128 v31,v59,2
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x55));
	// vspltw128 v30,v62,3
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vspltw128 v29,v61,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vspltw128 v28,v60,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// vspltw128 v27,v59,3
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0x0));
	// vmaddfp v11,v11,v13,v10
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v9,v13,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v9,v7,v13,v6
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v5,v13,v4
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v3,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v2,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v9,v1,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v31,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddcfp128 v127,v30,v127,v11
	_mm_store_ps(v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v127.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddcfp128 v126,v29,v126,v10
	_mm_store_ps(v126.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddcfp128 v125,v28,v125,v9
	_mm_store_ps(v125.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v125.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddcfp128 v124,v27,v124,v0
	_mm_store_ps(v124.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v124.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v127,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x823a7cc8
	if (cr6.eq) goto loc_823A7CC8;
	// vspltw128 v47,v127,0
	_mm_store_si128((__m128i*)v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0xFF));
	// lvx128 v46,r0,r10
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v45,v126,0
	_mm_store_si128((__m128i*)v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v126.u32), 0xFF));
	// lvx128 v0,r10,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r30.u32) & ~0xF), VectorMaskL));
	// vspltw128 v44,v125,0
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v125.u32), 0xFF));
	// lvx128 v13,r10,r17
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + r17.u32) & ~0xF), VectorMaskL));
	// vspltw128 v43,v124,0
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0xFF));
	// lvx128 v12,r10,r24
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v31,v47,v46
	_mm_store_ps(v31.f32, _mm_mul_ps(_mm_load_ps(v47.f32), _mm_load_ps(v46.f32)));
	// vspltw128 v1,v127,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0xAA));
	// vmulfp128 v29,v45,v46
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v45.f32), _mm_load_ps(v46.f32)));
	// vspltw128 v30,v126,1
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v126.u32), 0xAA));
	// vmulfp128 v27,v44,v46
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v44.f32), _mm_load_ps(v46.f32)));
	// vspltw128 v28,v125,1
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v125.u32), 0xAA));
	// vmulfp128 v3,v43,v46
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v46.f32)));
	// vspltw128 v2,v124,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0xAA));
	// vspltw128 v4,v127,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x55));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltw128 v5,v126,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v126.u32), 0x55));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vspltw128 v6,v125,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v125.u32), 0x55));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vspltw128 v7,v124,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x55));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// vspltw128 v8,v127,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x0));
	// vor128 v127,v12,v12
	_mm_store_si128((__m128i*)v127.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vspltw128 v9,v126,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v126.u32), 0x0));
	// vor128 v126,v12,v12
	_mm_store_si128((__m128i*)v126.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vspltw128 v10,v125,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v125.u32), 0x0));
	// vor128 v125,v12,v12
	_mm_store_si128((__m128i*)v125.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vspltw128 v11,v124,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v124.u32), 0x0));
	// vor128 v124,v12,v12
	_mm_store_si128((__m128i*)v124.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vmaddfp v1,v1,v0,v31
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v31,v30,v0,v29
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v29.f32)));
	// vmaddfp v30,v28,v0,v27
	_mm_store_ps(v30.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(v27.f32)));
	// vmaddfp v0,v2,v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddfp v4,v4,v13,v1
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v5,v5,v13,v31
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v6,v6,v13,v30
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(v30.f32)));
	// vmaddfp v0,v7,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddcfp128 v127,v8,v127,v4
	_mm_store_ps(v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v127.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddcfp128 v126,v9,v126,v5
	_mm_store_ps(v126.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddcfp128 v125,v10,v125,v6
	_mm_store_ps(v125.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v125.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddcfp128 v124,v11,v124,v0
	_mm_store_ps(v124.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v124.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_823A7CC8:
	// li r18,-32
	r18.s64 = -32;
	// stvx128 v125,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r28,r30
	_mm_store_si128((__m128i*)(base + ((r28.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v42,v123,254
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v123.u32), 0x1));
	// stvx128 v126,r28,r19
	_mm_store_si128((__m128i*)(base + ((r28.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stvx128 v127,r28,r18
	_mm_store_si128((__m128i*)(base + ((r28.u32 + r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,16
	ctx.r5.s64 = 16;
	// lvx128 v36,r0,r11
	simd::store_shuffled(v36, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v41,r11,r30
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((r11.u32 + r30.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v40,v41,v41
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v40.f32, _mm_add_ps(_mm_load_ps(v41.f32), _mm_load_ps(v41.f32)));
	// vmulfp128 v39,v41,v40
	_mm_store_ps(v39.f32, _mm_mul_ps(_mm_load_ps(v41.f32), _mm_load_ps(v40.f32)));
	// vpermwi128 v38,v41,7
	_mm_store_si128((__m128i*)v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v41.u32), 0xF8));
	// vspltw128 v37,v41,3
	_mm_store_si128((__m128i*)v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v41.u32), 0x0));
	// stvx128 v36,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v35,v40,155
	_mm_store_si128((__m128i*)v35.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0x64));
	// vpermwi128 v34,v40,99
	_mm_store_si128((__m128i*)v34.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v40.u32), 0x9C));
	// vmulfp128 v33,v38,v35
	_mm_store_ps(v33.f32, _mm_mul_ps(_mm_load_ps(v38.f32), _mm_load_ps(v35.f32)));
	// vmulfp128 v62,v37,v34
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v37.f32), _mm_load_ps(v34.f32)));
	// vpermwi128 v32,v39,64
	_mm_store_si128((__m128i*)v32.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v39.u32), 0xBF));
	// vpermwi128 v63,v39,164
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v39.u32), 0x5B));
	// vsubfp128 v61,v42,v32
	_mm_store_ps(v61.f32, _mm_sub_ps(_mm_load_ps(v42.f32), _mm_load_ps(v32.f32)));
	// vaddfp128 v60,v33,v62
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(v33.f32), _mm_load_ps(v62.f32)));
	// vsubfp128 v58,v33,v62
	_mm_store_ps(v58.f32, _mm_sub_ps(_mm_load_ps(v33.f32), _mm_load_ps(v62.f32)));
	// vsubfp128 v59,v61,v63
	_mm_store_ps(v59.f32, _mm_sub_ps(_mm_load_ps(v61.f32), _mm_load_ps(v63.f32)));
	// vpermwi128 v57,v60,66
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xBD));
	// vsldoi128 v56,v58,v60,8
	_mm_store_si128((__m128i*)v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v60.u8), 8));
	// vrlimi128 v57,v58,6,3
	_mm_store_ps(v57.f32, _mm_blend_ps(_mm_load_ps(v57.f32), _mm_permute_ps(_mm_load_ps(v58.f32), 57), 6));
	// vpermwi128 v55,v56,136
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x77));
	// vrlimi128 v59,v123,1,3
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v123.f32), 57), 1));
	// vpermwi128 v53,v59,7
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v59.u32), 0xF8));
	// vor128 v54,v59,v59
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)v59.u8));
	// vrlimi128 v55,v59,3,0
	_mm_store_ps(v55.f32, _mm_blend_ps(_mm_load_ps(v55.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 228), 3));
	// vmrglw128 v52,v57,v53
	_mm_store_si128((__m128i*)v52.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v53.u32), _mm_load_si128((__m128i*)v57.u32)));
	// vrlimi128 v54,v57,6,3
	_mm_store_ps(v54.f32, _mm_blend_ps(_mm_load_ps(v54.f32), _mm_permute_ps(_mm_load_ps(v57.f32), 57), 6));
	// stvx128 v55,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ld r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// bl 0x823a9198
	sub_823A9198(ctx, base);
	// lvx128 v62,r3,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r3.u32 + r30.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r3
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// vspltw128 v50,v62,0
	_mm_store_si128((__m128i*)v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xFF));
	// lvx128 v61,r3,r17
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + r17.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// vspltw128 v51,v63,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// vspltw128 v1,v62,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0xAA));
	// vspltw128 v49,v61,0
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// lvx128 v60,r3,r24
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r3.u32 + r24.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v2,v50,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v50.f32), _mm_load_ps(v127.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v13,v63,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v3,v63,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// stvx128 v61,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v0,v51,v127
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v127.f32)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v9,v63,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// vmulfp128 v5,v49,v127
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v49.f32), _mm_load_ps(v127.f32)));
	// vspltw128 v8,v62,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x55));
	// vor128 v31,v126,v126
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)v126.u8));
	// vspltw128 v48,v60,0
	_mm_store_si128((__m128i*)v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v4,v61,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vspltw128 v6,v60,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// vmaddfp128 v2,v1,v126,v2
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v7,v48,v127
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v127.f32)));
	// vspltw128 v10,v61,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// vmaddcfp128 v31,v13,v31,v0
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v11,v60,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vmaddfp128 v5,v4,v126,v5
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v5.f32)));
	// vspltw128 v12,v62,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x0));
	// vmaddcfp128 v8,v125,v8,v2
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v125.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v2.f32)));
	// vspltw128 v13,v61,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// vspltw128 v0,v60,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,96
	r26.s64 = r26.s64 + 96;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// vmaddfp128 v7,v6,v126,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddcfp128 v3,v125,v3,v31
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v125.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(v31.f32)));
	// vmaddcfp128 v10,v125,v10,v5
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v125.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddcfp128 v12,v124,v12,v8
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v124.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddcfp128 v11,v125,v11,v7
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v125.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddcfp128 v9,v124,v9,v3
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v124.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmaddcfp128 v13,v124,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v124.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddcfp128 v0,v124,v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v124.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmrghw128 v47,v9,v13
	_mm_store_si128((__m128i*)v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw128 v46,v9,v13
	_mm_store_si128((__m128i*)v46.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw128 v45,v12,v0
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw128 v44,v12,v0
	_mm_store_si128((__m128i*)v44.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw128 v43,v47,v45
	_mm_store_si128((__m128i*)v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v47.u32)));
	// vmrglw128 v42,v47,v45
	_mm_store_si128((__m128i*)v42.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v47.u32)));
	// vmrghw128 v41,v46,v44
	_mm_store_si128((__m128i*)v41.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v44.u32), _mm_load_si128((__m128i*)v46.u32)));
	// stvx128 v43,r27,r18
	_mm_store_si128((__m128i*)(base + ((r27.u32 + r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r27,r19
	_mm_store_si128((__m128i*)(base + ((r27.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r27,r27,48
	r27.s64 = r27.s64 + 48;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, xer);
	// blt cr6,0x823a7870
	if (cr6.lt) goto loc_823A7870;
	// lwz r21,160(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_823A7E9C:
	// lwz r10,8080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8080);
	// addi r11,r31,8080
	r11.s64 = r31.s64 + 8080;
	// mulli r11,r10,60
	r11.s64 = ctx.r10.s64 * 60;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,7884
	ctx.r3.s64 = r11.s64 + 7884;
	// bl 0x82715a18
	sub_82715A18(ctx, base);
loc_823A7EB4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-160
	r12.s64 = ctx.r1.s64 + -160;
	// bl 0x828ebf5c
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
}

__attribute__((alias("__imp__sub_823A7EDC"))) PPC_WEAK_FUNC(sub_823A7EDC);
PPC_FUNC_IMPL(__imp__sub_823A7EDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_823A7EE0"))) PPC_WEAK_FUNC(sub_823A7EE0);
PPC_FUNC_IMPL(__imp__sub_823A7EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,100
	r27.s64 = ctx.r3.s64 + 100;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8000
	if (cr6.eq) goto loc_823A8000;
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lwz r3,18224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a7f24
	if (cr6.eq) goto loc_823A7F24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a7f28
	if (!cr6.eq) goto loc_823A7F28;
loc_823A7F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A7F28:
	// lwz r11,732(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 732);
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a8000
	if (cr6.eq) goto loc_823A8000;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r4,724(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 724);
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dd2e0
	sub_825DD2E0(ctx, base);
	// lwz r11,8080(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8080);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,7884
	ctx.r4.s64 = r11.s64 + 7884;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r11,r10,9244
	r11.s64 = ctx.r10.s64 + 9244;
	// addi r8,r9,24172
	ctx.r8.s64 = ctx.r9.s64 + 24172;
	// addi r28,r11,-4
	r28.s64 = r11.s64 + -4;
	// li r12,1
	r12.s64 = 1;
	// lfs f0,24172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24172);
	f0.f64 = double(temp.f32);
	// li r29,3
	r29.s64 = 3;
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// stfs f0,3520(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3520, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,3524(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3524, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,3528(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3528, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,3532(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3532, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 | r12.u64;
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
loc_823A7FB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzu r4,4(r28)
	ea = 4 + r28.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// bl 0x823a6820
	sub_823A6820(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x823a7fb8
	if (!cr0.eq) goto loc_823A7FB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dee60
	sub_825DEE60(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825decb8
	sub_825DECB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dd2e0
	sub_825DD2E0(ctx, base);
loc_823A8000:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A800C"))) PPC_WEAK_FUNC(sub_823A800C);
PPC_FUNC_IMPL(__imp__sub_823A800C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823A8010"))) PPC_WEAK_FUNC(sub_823A8010);
PPC_FUNC_IMPL(__imp__sub_823A8010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r16,r3,100
	r16.s64 = ctx.r3.s64 + 100;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823a7020
	sub_823A7020(ctx, base);
	// lwz r8,232(r22)
	ctx.r8.u64 = PPC_LOAD_U32(r22.u32 + 232);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a8430
	if (cr6.eq) goto loc_823A8430;
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lwz r3,18224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a8070
	if (cr6.eq) goto loc_823A8070;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a8074
	if (!cr6.eq) goto loc_823A8074;
loc_823A8070:
	// li r11,0
	r11.s64 = 0;
loc_823A8074:
	// lwz r11,224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,732(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 732);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a809c
	if (!cr6.eq) goto loc_823A809C;
	// lwz r4,724(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 724);
loc_823A809C:
	// lis r21,-31933
	r21.s64 = -2092761088;
	// lwz r3,25320(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 25320);
	// bl 0x825dd2e0
	sub_825DD2E0(ctx, base);
	// lwz r11,8080(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8080);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// addi r4,r11,7884
	ctx.r4.s64 = r11.s64 + 7884;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a8398
	if (cr6.eq) goto loc_823A8398;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823a80f0
	if (cr6.eq) goto loc_823A80F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a80f4
	if (!cr6.eq) goto loc_823A80F4;
loc_823A80F0:
	// li r11,0
	r11.s64 = 0;
loc_823A80F4:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,740(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 740);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lbz r11,736(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 736);
	// lfs f0,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fsel f9,f10,f10,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f0,f8,f13,f9
	f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// bne cr6,0x823a8144
	if (!cr6.eq) goto loc_823A8144;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x823a8430
	if (!cr6.lt) goto loc_823A8430;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8164
	if (cr6.eq) goto loc_823A8164;
loc_823A8144:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r8,r10,24188
	ctx.r8.s64 = ctx.r10.s64 + 24188;
	// addi r7,r9,24204
	ctx.r7.s64 = ctx.r9.s64 + 24204;
	// lfs f13,24188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24204);
	ctx.f11.f64 = double(temp.f32);
	// b 0x823a8180
	goto loc_823A8180;
loc_823A8164:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r8,r10,24204
	ctx.r8.s64 = ctx.r10.s64 + 24204;
	// addi r7,r9,24188
	ctx.r7.s64 = ctx.r9.s64 + 24188;
	// lfs f13,24204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24188);
	ctx.f11.f64 = double(temp.f32);
loc_823A8180:
	// fmuls f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * f0.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lwz r10,25320(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 25320);
	// li r12,1
	r12.s64 = 1;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// addi r7,r9,22000
	ctx.r7.s64 = ctx.r9.s64 + 22000;
	// fadds f0,f4,f8
	f0.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,0(r11)
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
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stfs f0,3520(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3520, temp.u32);
	// stfs f13,3524(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3524, temp.u32);
	// stfs f12,3528(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3528, temp.u32);
	// stfs f11,3532(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3532, temp.u32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// or r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 | r12.u64;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r17,456(r7)
	r17.u64 = PPC_LOAD_U32(ctx.r7.u32 + 456);
	// beq cr6,0x823a8244
	if (cr6.eq) goto loc_823A8244;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823a8248
	if (!cr6.eq) goto loc_823A8248;
loc_823A8244:
	// li r11,0
	r11.s64 = 0;
loc_823A8248:
	// addi r4,r11,88
	ctx.r4.s64 = r11.s64 + 88;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r19,3
	r19.s64 = 3;
	// addi r18,r11,9244
	r18.s64 = r11.s64 + 9244;
	// mr r20,r18
	r20.u64 = r18.u64;
loc_823A8264:
	// lwz r24,0(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r11,r24,1350
	r11.s64 = r24.s64 + 1350;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r22
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a8360
	if (cr6.eq) goto loc_823A8360;
	// bl 0x8238d7c8
	sub_8238D7C8(ctx, base);
	// lwz r11,232(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 232);
	// li r26,0
	r26.s64 = 0;
	// addi r23,r11,1092
	r23.s64 = r11.s64 + 1092;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823a8360
	if (!cr6.gt) goto loc_823A8360;
	// addi r27,r22,5440
	r27.s64 = r22.s64 + 5440;
	// addi r25,r22,7000
	r25.s64 = r22.s64 + 7000;
loc_823A82A4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827238b8
	sub_827238B8(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8344
	if (cr6.eq) goto loc_823A8344;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823a8344
	if (!cr6.gt) goto loc_823A8344;
	// li r29,0
	r29.s64 = 0;
loc_823A82DC:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r31,r29,r11
	r31.u64 = r29.u64 + r11.u64;
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// bne cr6,0x823a8330
	if (!cr6.eq) goto loc_823A8330;
	// lwz r11,504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 496);
	// subf r6,r10,r11
	ctx.r6.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8270e5c8
	sub_8270E5C8(ctx, base);
	// lwz r11,484(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 508);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// srawi r4,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// bl 0x827100d8
	sub_827100D8(ctx, base);
loc_823A8330:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,512
	r29.s64 = r29.s64 + 512;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823a82dc
	if (cr6.lt) goto loc_823A82DC;
loc_823A8344:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,64
	r25.s64 = r25.s64 + 64;
	// addi r27,r27,60
	r27.s64 = r27.s64 + 60;
	// bl 0x82723890
	sub_82723890(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// blt cr6,0x823a82a4
	if (cr6.lt) goto loc_823A82A4;
loc_823A8360:
	// addic. r19,r19,-1
	xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// bne 0x823a8264
	if (!cr0.eq) goto loc_823A8264;
	// li r31,3
	r31.s64 = 3;
	// addi r30,r18,-4
	r30.s64 = r18.s64 + -4;
loc_823A8374:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x823a6820
	sub_823A6820(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823a8374
	if (!cr0.eq) goto loc_823A8374;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// b 0x823a83d8
	goto loc_823A83D8;
loc_823A8398:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r11,25320(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 25320);
	// li r12,1
	r12.s64 = 1;
	// addi r9,r10,24172
	ctx.r9.s64 = ctx.r10.s64 + 24172;
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,24172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24172);
	f0.f64 = double(temp.f32);
	// stfs f0,3520(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3520, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,3524(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3524, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,3528(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3528, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,3532(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3532, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 | r12.u64;
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
loc_823A83D8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r31,2
	r31.s64 = 2;
	// addi r11,r11,9284
	r11.s64 = r11.s64 + 9284;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
loc_823A83E8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x823a6820
	sub_823A6820(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823a83e8
	if (!cr0.eq) goto loc_823A83E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 25320);
	// bl 0x825dee60
	sub_825DEE60(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,25320(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 25320);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825decb8
	sub_825DECB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 25320);
	// bl 0x825dd2e0
	sub_825DD2E0(ctx, base);
loc_823A8430:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_823A8444"))) PPC_WEAK_FUNC(sub_823A8444);
PPC_FUNC_IMPL(__imp__sub_823A8444) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_823A8448"))) PPC_WEAK_FUNC(sub_823A8448);
PPC_FUNC_IMPL(__imp__sub_823A8448) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,9308
	ctx.r8.s64 = ctx.r10.s64 + 9308;
	// li r30,0
	r30.s64 = 0;
	// addi r7,r9,9296
	ctx.r7.s64 = ctx.r9.s64 + 9296;
	// stw r3,22260(r11)
	PPC_STORE_U32(r11.u32 + 22260, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
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

__attribute__((alias("__imp__sub_823A84D0"))) PPC_WEAK_FUNC(sub_823A84D0);
PPC_FUNC_IMPL(__imp__sub_823A84D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A84D4"))) PPC_WEAK_FUNC(sub_823A84D4);
PPC_FUNC_IMPL(__imp__sub_823A84D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A84D8"))) PPC_WEAK_FUNC(sub_823A84D8);
PPC_FUNC_IMPL(__imp__sub_823A84D8) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,9308
	ctx.r10.s64 = r11.s64 + 9308;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823a8510
	if (cr6.eq) goto loc_823A8510;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_823A8510:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x823a9838
	sub_823A9838(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,9240
	ctx.r9.s64 = r11.s64 + 9240;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,22260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22260, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A8540"))) PPC_WEAK_FUNC(sub_823A8540);
PPC_FUNC_IMPL(__imp__sub_823A8540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8544"))) PPC_WEAK_FUNC(sub_823A8544);
PPC_FUNC_IMPL(__imp__sub_823A8544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8548"))) PPC_WEAK_FUNC(sub_823A8548);
PPC_FUNC_IMPL(__imp__sub_823A8548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaaf8
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8238df78
	sub_8238DF78(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r11,9228
	ctx.r8.s64 = r11.s64 + 9228;
	// addi r7,r10,9272
	ctx.r7.s64 = ctx.r10.s64 + 9272;
	// addi r6,r9,9260
	ctx.r6.s64 = ctx.r9.s64 + 9260;
	// stw r8,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r6,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r6.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// addi r30,r31,208
	r30.s64 = r31.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f29,-25600(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f29.f64 = double(temp.f32);
	// lfs f28,21036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f28.f64 = double(temp.f32);
	// stfs f29,192(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// stfs f28,196(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// stfs f28,200(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f28,204(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// bl 0x82711ff8
	sub_82711FF8(ctx, base);
	// li r18,0
	r18.s64 = 0;
	// stw r28,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r28.u32);
	// addi r15,r31,244
	r15.s64 = r31.s64 + 244;
	// stw r18,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r18.u32);
	// stw r18,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r18.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r29,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r29.u32);
	// bl 0x82392278
	sub_82392278(ctx, base);
	// addi r14,r31,364
	r14.s64 = r31.s64 + 364;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82392278
	sub_82392278(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = r31.s64 + 484;
	// bl 0x82392278
	sub_82392278(ctx, base);
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// bl 0x82392278
	sub_82392278(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stfs f28,740(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 740, temp.u32);
	// stw r18,724(r31)
	PPC_STORE_U32(r31.u32 + 724, r18.u32);
	// stb r18,728(r31)
	PPC_STORE_U8(r31.u32 + 728, r18.u8);
	// addi r22,r31,5360
	r22.s64 = r31.s64 + 5360;
	// stb r18,729(r31)
	PPC_STORE_U8(r31.u32 + 729, r18.u8);
	// addi r28,r31,5440
	r28.s64 = r31.s64 + 5440;
	// stb r18,730(r31)
	PPC_STORE_U8(r31.u32 + 730, r18.u8);
	// li r29,12
	r29.s64 = 12;
	// stw r3,732(r31)
	PPC_STORE_U32(r31.u32 + 732, ctx.r3.u32);
	// stb r18,736(r31)
	PPC_STORE_U8(r31.u32 + 736, r18.u8);
	// stw r18,5360(r31)
	PPC_STORE_U32(r31.u32 + 5360, r18.u32);
	// stw r18,5364(r31)
	PPC_STORE_U32(r31.u32 + 5364, r18.u32);
	// stw r18,5368(r31)
	PPC_STORE_U32(r31.u32 + 5368, r18.u32);
	// stw r18,5372(r31)
	PPC_STORE_U32(r31.u32 + 5372, r18.u32);
	// stw r18,5376(r31)
	PPC_STORE_U32(r31.u32 + 5376, r18.u32);
loc_823A8654:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,60
	r28.s64 = r28.s64 + 60;
	// bge 0x823a8654
	if (!cr0.lt) goto loc_823A8654;
	// addi r28,r31,6220
	r28.s64 = r31.s64 + 6220;
	// li r29,12
	r29.s64 = 12;
loc_823A8670:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,60
	r28.s64 = r28.s64 + 60;
	// bge 0x823a8670
	if (!cr0.lt) goto loc_823A8670;
	// addi r28,r31,7000
	r28.s64 = r31.s64 + 7000;
	// li r29,12
	r29.s64 = 12;
loc_823A868C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8271b6c0
	sub_8271B6C0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// bge 0x823a868c
	if (!cr0.lt) goto loc_823A868C;
	// addi r28,r31,7884
	r28.s64 = r31.s64 + 7884;
	// li r29,2
	r29.s64 = 2;
loc_823A86A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,60
	r28.s64 = r28.s64 + 60;
	// bge 0x823a86a8
	if (!cr0.lt) goto loc_823A86A8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r29,29820(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,9436
	ctx.r3.s64 = ctx.r10.s64 + 9436;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8720
	if (cr6.eq) goto loc_823A8720;
loc_823A8704:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a8704
	if (!cr0.eq) goto loc_823A8704;
loc_823A8720:
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a8748
	if (cr6.eq) goto loc_823A8748;
loc_823A872C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a872c
	if (!cr0.eq) goto loc_823A872C;
loc_823A8748:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8770
	if (cr6.eq) goto loc_823A8770;
loc_823A8754:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a8754
	if (!cr0.eq) goto loc_823A8754;
loc_823A8770:
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,9412
	ctx.r3.s64 = r11.s64 + 9412;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,5364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5364);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r16,r31,5364
	r16.s64 = r31.s64 + 5364;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a87c4
	if (cr6.eq) goto loc_823A87C4;
loc_823A87A8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a87a8
	if (!cr0.eq) goto loc_823A87A8;
loc_823A87C4:
	// stw r10,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a87ec
	if (cr6.eq) goto loc_823A87EC;
loc_823A87D0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a87d0
	if (!cr0.eq) goto loc_823A87D0;
loc_823A87EC:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8814
	if (cr6.eq) goto loc_823A8814;
loc_823A87F8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a87f8
	if (!cr0.eq) goto loc_823A87F8;
loc_823A8814:
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,9384
	ctx.r3.s64 = r11.s64 + 9384;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,5368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5368);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8864
	if (cr6.eq) goto loc_823A8864;
loc_823A8848:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a8848
	if (!cr0.eq) goto loc_823A8848;
loc_823A8864:
	// stw r10,5368(r31)
	PPC_STORE_U32(r31.u32 + 5368, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a888c
	if (cr6.eq) goto loc_823A888C;
loc_823A8870:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a8870
	if (!cr0.eq) goto loc_823A8870;
loc_823A888C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a88b4
	if (cr6.eq) goto loc_823A88B4;
loc_823A8898:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a8898
	if (!cr0.eq) goto loc_823A8898;
loc_823A88B4:
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,9352
	ctx.r3.s64 = r11.s64 + 9352;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,5372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5372);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8904
	if (cr6.eq) goto loc_823A8904;
loc_823A88E8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a88e8
	if (!cr0.eq) goto loc_823A88E8;
loc_823A8904:
	// stw r10,5372(r31)
	PPC_STORE_U32(r31.u32 + 5372, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a892c
	if (cr6.eq) goto loc_823A892C;
loc_823A8910:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a8910
	if (!cr0.eq) goto loc_823A8910;
loc_823A892C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8954
	if (cr6.eq) goto loc_823A8954;
loc_823A8938:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a8938
	if (!cr0.eq) goto loc_823A8938;
loc_823A8954:
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,9332
	ctx.r3.s64 = r11.s64 + 9332;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,5376(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 5376);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a89a4
	if (cr6.eq) goto loc_823A89A4;
loc_823A8988:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823a8988
	if (!cr0.eq) goto loc_823A8988;
loc_823A89A4:
	// stw r10,5376(r31)
	PPC_STORE_U32(r31.u32 + 5376, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a89cc
	if (cr6.eq) goto loc_823A89CC;
loc_823A89B0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a89b0
	if (!cr0.eq) goto loc_823A89B0;
loc_823A89CC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a89f4
	if (cr6.eq) goto loc_823A89F4;
loc_823A89D8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823a89d8
	if (!cr0.eq) goto loc_823A89D8;
loc_823A89F4:
	// lis r11,-31968
	r11.s64 = -2095054848;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r23,r31,8101
	r23.s64 = r31.s64 + 8101;
	// addi r25,r31,8106
	r25.s64 = r31.s64 + 8106;
	// mr r27,r22
	r27.u64 = r22.u64;
	// li r19,5
	r19.s64 = 5;
	// li r21,255
	r21.s64 = 255;
	// addi r17,r11,24524
	r17.s64 = r11.s64 + 24524;
	// addi r20,r10,9312
	r20.s64 = ctx.r10.s64 + 9312;
	// addi r28,r9,9448
	r28.s64 = ctx.r9.s64 + 9448;
loc_823A8A24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,40(r27)
	PPC_STORE_U32(r27.u32 + 40, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,60(r27)
	PPC_STORE_U32(r27.u32 + 60, ctx.r3.u32);
	// stb r21,-5(r23)
	PPC_STORE_U8(r23.u32 + -5, r21.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r21,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r21.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8b48
	if (cr6.eq) goto loc_823A8B48;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8ad8
	if (cr6.eq) goto loc_823A8AD8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x823a94b8
	sub_823A94B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a8ad8
	if (cr6.eq) goto loc_823A8AD8;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// stb r11,-5(r23)
	PPC_STORE_U8(r23.u32 + -5, r11.u8);
loc_823A8AD8:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8b48
	if (cr6.eq) goto loc_823A8B48;
	// addi r24,r11,20
	r24.s64 = r11.s64 + 20;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823a94b8
	sub_823A94B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a8b08
	if (cr6.eq) goto loc_823A8B08;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
loc_823A8B08:
	// mr r26,r17
	r26.u64 = r17.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_823A8B10:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x823a9540
	sub_823A9540(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a8b34
	if (cr6.eq) goto loc_823A8B34;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// stbx r10,r25,r29
	PPC_STORE_U8(r25.u32 + r29.u32, ctx.r10.u8);
	// b 0x823a8b38
	goto loc_823A8B38;
loc_823A8B34:
	// stbx r21,r25,r29
	PPC_STORE_U8(r25.u32 + r29.u32, r21.u8);
loc_823A8B38:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(r29.u32, 13, xer);
	// blt cr6,0x823a8b10
	if (cr6.lt) goto loc_823A8B10;
loc_823A8B48:
	// addic. r19,r19,-1
	xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,13
	r25.s64 = r25.s64 + 13;
	// bne 0x823a8a24
	if (!cr0.eq) goto loc_823A8A24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82712108
	sub_82712108(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82712070
	sub_82712070(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r29.u32 + 24, temp.u32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r29.u32 + 32, temp.u32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r29.u32 + 36, temp.u32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r29.u32 + 40, temp.u32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r29.u32 + 44, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r29.u32 + 48, temp.u32);
	// lfs f1,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r29.u32 + 52, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 56, temp.u32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 60, temp.u32);
	// bl 0x82712088
	sub_82712088(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823920a0
	sub_823920A0(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// stw r31,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,32480
	r11.s64 = r11.s64 + 32480;
	// addi r29,r10,-20864
	r29.s64 = ctx.r10.s64 + -20864;
	// stw r11,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82391d10
	sub_82391D10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82391d78
	sub_82391D78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823920a0
	sub_823920A0(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// stw r31,476(r31)
	PPC_STORE_U32(r31.u32 + 476, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,-32752
	r11.s64 = r11.s64 + -32752;
	// stw r11,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82391d10
	sub_82391D10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82391d78
	sub_82391D78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r27,r31,484
	r27.s64 = r31.s64 + 484;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823920a0
	sub_823920A0(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// stw r31,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,25136
	r11.s64 = r11.s64 + 25136;
	// stw r11,600(r31)
	PPC_STORE_U32(r31.u32 + 600, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x82391d10
	sub_82391D10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82391d78
	sub_82391D78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r26,r31,604
	r26.s64 = r31.s64 + 604;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823920a0
	sub_823920A0(ctx, base);
	// lis r11,-32198
	r11.s64 = -2110128128;
	// stw r31,716(r31)
	PPC_STORE_U32(r31.u32 + 716, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,25664
	r11.s64 = r11.s64 + 25664;
	// stw r11,720(r31)
	PPC_STORE_U32(r31.u32 + 720, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x82391d10
	sub_82391D10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82391d78
	sub_82391D78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x823a8e0c
	if (!cr6.gt) goto loc_823A8E0C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A8E0C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8e2c
	if (cr0.eq) goto loc_823A8E2C;
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
loc_823A8E2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823a8e60
	if (!cr6.gt) goto loc_823A8E60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A8E60:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8e80
	if (cr0.eq) goto loc_823A8E80;
	// stw r14,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r14.u32);
loc_823A8E80:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823a8ec8
	if (!cr6.gt) goto loc_823A8EC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A8EC8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8ee8
	if (cr0.eq) goto loc_823A8EE8;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
loc_823A8EE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823a8f30
	if (!cr6.gt) goto loc_823A8F30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A8F30:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8f50
	if (cr0.eq) goto loc_823A8F50;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_823A8F50:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f29,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f31,3644(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3644);
	f31.f64 = double(temp.f32);
	// lfs f30,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f30.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f10,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lfs f9,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// lfs f8,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f6,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// addi r8,r9,21920
	ctx.r8.s64 = ctx.r9.s64 + 21920;
	// lfs f5,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f3.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f2,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	f0.f64 = double(temp.f32);
	// lfs f13,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lwz r30,16(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a908c
	if (cr6.eq) goto loc_823A908C;
	// addi r29,r31,7884
	r29.s64 = r31.s64 + 7884;
loc_823A9068:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715730
	sub_82715730(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// bne 0x823a9068
	if (!cr0.eq) goto loc_823A9068;
loc_823A908C:
	// stb r18,8171(r31)
	PPC_STORE_U8(r31.u32 + 8171, r18.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stb r18,8172(r31)
	PPC_STORE_U8(r31.u32 + 8172, r18.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238d830
	sub_8238D830(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// bl 0x82723728
	sub_82723728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_823A90BC"))) PPC_WEAK_FUNC(sub_823A90BC);
PPC_FUNC_IMPL(__imp__sub_823A90BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_823A90C0"))) PPC_WEAK_FUNC(sub_823A90C0);
PPC_FUNC_IMPL(__imp__sub_823A90C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,9648
	ctx.r7.s64 = ctx.r10.s64 + 9648;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,8176
	ctx.r3.s64 = 8176;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a9128
	if (cr6.eq) goto loc_823A9128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a8548
	sub_823A8548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_823A9128:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823A9130"))) PPC_WEAK_FUNC(sub_823A9130);
PPC_FUNC_IMPL(__imp__sub_823A9130) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823A9134"))) PPC_WEAK_FUNC(sub_823A9134);
PPC_FUNC_IMPL(__imp__sub_823A9134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9138"))) PPC_WEAK_FUNC(sub_823A9138);
PPC_FUNC_IMPL(__imp__sub_823A9138) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823A9138"))) PPC_WEAK_FUNC(sub_823A9138);
PPC_FUNC_IMPL(__imp__sub_823A9138) {
	PPC_FUNC_PROLOGUE();
	// b 0x823a9920
	sub_823A9920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A913C"))) PPC_WEAK_FUNC(sub_823A913C);
PPC_FUNC_IMPL(__imp__sub_823A913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9140"))) PPC_WEAK_FUNC(sub_823A9140);
PPC_FUNC_IMPL(__imp__sub_823A9140) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,9240
	ctx.r9.s64 = r11.s64 + 9240;
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
	// stw r11,22260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22260, r11.u32);
	// beq cr6,0x823a9180
	if (cr6.eq) goto loc_823A9180;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A9180:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A9190"))) PPC_WEAK_FUNC(sub_823A9190);
PPC_FUNC_IMPL(__imp__sub_823A9190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9194"))) PPC_WEAK_FUNC(sub_823A9194);
PPC_FUNC_IMPL(__imp__sub_823A9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9198"))) PPC_WEAK_FUNC(sub_823A9198);
PPC_FUNC_IMPL(__imp__sub_823A9198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v31{};
	PPCVRegister v32{};
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r11,r1,32
	r11.s64 = ctx.r1.s64 + 32;
	// addi r10,r1,64
	ctx.r10.s64 = ctx.r1.s64 + 64;
	// vspltisw128 v63,-1
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// vspltisw128 v59,0
	_mm_store_si128((__m128i*)v59.u32, _mm_set1_epi32(int(0x0)));
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// vslw128 v58,v63,v63
	v58.u32[0] = v63.u32[0] << (v63.u8[0] & 0x1F);
	v58.u32[1] = v63.u32[1] << (v63.u8[4] & 0x1F);
	v58.u32[2] = v63.u32[2] << (v63.u8[8] & 0x1F);
	v58.u32[3] = v63.u32[3] << (v63.u8[12] & 0x1F);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
	// vupkd3d128 v57,v59,4
	temp.f32 = 3.0f;
	temp.s32 += v59.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v59.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v57 = vTemp;
	// lvx128 v60,r0,r8
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmrghw128 v52,v59,v58
	_mm_store_si128((__m128i*)v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v58.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vmrghw128 v50,v58,v59
	_mm_store_si128((__m128i*)v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v59.u32), _mm_load_si128((__m128i*)v58.u32)));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrghw128 v54,v61,v60
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v61.u32)));
	// vmrghw128 v56,v63,v62
	_mm_store_si128((__m128i*)v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vor128 v48,v54,v54
	_mm_store_si128((__m128i*)v48.u8, _mm_load_si128((__m128i*)v54.u8));
	// vmrglw128 v55,v63,v62
	_mm_store_si128((__m128i*)v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v62.u32), _mm_load_si128((__m128i*)v63.u32)));
	// vmrglw128 v53,v61,v60
	_mm_store_si128((__m128i*)v53.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v60.u32), _mm_load_si128((__m128i*)v61.u32)));
	// vmrglw128 v49,v56,v54
	_mm_store_si128((__m128i*)v49.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vor128 v13,v56,v56
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v56.u8));
	// vmrghw128 v47,v56,v54
	_mm_store_si128((__m128i*)v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vor128 v51,v55,v55
	_mm_store_si128((__m128i*)v51.u8, _mm_load_si128((__m128i*)v55.u8));
	// vmrghw128 v46,v55,v53
	_mm_store_si128((__m128i*)v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v53.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vrlimi128 v48,v53,12,2
	_mm_store_ps(v48.f32, _mm_blend_ps(_mm_load_ps(v48.f32), _mm_permute_ps(_mm_load_ps(v53.f32), 78), 12));
	// vmrglw128 v45,v55,v53
	_mm_store_si128((__m128i*)v45.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v53.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vor128 v0,v53,v53
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)v53.u8));
	// vpermwi128 v44,v49,187
	_mm_store_si128((__m128i*)v44.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x44));
	// vrlimi128 v13,v55,12,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v55.f32), 78), 12));
	// vpermwi128 v43,v47,5
	_mm_store_si128((__m128i*)v43.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0xFA));
	// vrlimi128 v51,v56,3,2
	_mm_store_ps(v51.f32, _mm_blend_ps(_mm_load_ps(v51.f32), _mm_permute_ps(_mm_load_ps(v56.f32), 78), 3));
	// vpermwi128 v42,v46,5
	_mm_store_si128((__m128i*)v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0xFA));
	// vpermwi128 v41,v45,187
	_mm_store_si128((__m128i*)v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x44));
	// vrlimi128 v0,v54,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v54.f32), 78), 3));
	// vpermwi128 v12,v47,187
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x44));
	// vmulfp128 v5,v43,v44
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(v43.f32), _mm_load_ps(v44.f32)));
	// vpermwi128 v11,v49,5
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0xFA));
	// vmulfp128 v4,v51,v48
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v48.f32)));
	// vpermwi128 v10,v46,187
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x44));
	// vmulfp128 v3,v42,v41
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v42.f32), _mm_load_ps(v41.f32)));
	// vpermwi128 v9,v45,5
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0xFA));
	// vpermwi128 v37,v49,97
	_mm_store_si128((__m128i*)v37.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x9E));
	// vpermwi128 v40,v45,97
	_mm_store_si128((__m128i*)v40.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x9E));
	// vpermwi128 v39,v46,132
	_mm_store_si128((__m128i*)v39.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x7B));
	// vpermwi128 v38,v47,132
	_mm_store_si128((__m128i*)v38.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x7B));
	// vpermwi128 v8,v49,182
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x49));
	// vpermwi128 v7,v47,237
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x12));
	// vpermwi128 v6,v45,182
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x49));
	// vpermwi128 v36,v49,204
	_mm_store_si128((__m128i*)v36.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v49.u32), 0x33));
	// vnmsubfp v2,v12,v11,v5
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v5,v46,237
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x12));
	// vnmsubfp v12,v0,v13,v4
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v10,v9,v3
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v35,v2,v2
	_mm_store_si128((__m128i*)v35.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vor128 v34,v12,v12
	_mm_store_si128((__m128i*)v34.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor128 v33,v0,v0
	_mm_store_si128((__m128i*)v33.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vpermwi128 v12,v35,198
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v35.u32), 0x39));
	// vpermwi128 v11,v35,156
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v35.u32), 0x63));
	// vpermwi128 v13,v33,156
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v33.u32), 0x63));
	// vpermwi128 v0,v33,198
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v33.u32), 0x39));
	// vor128 v32,v12,v12
	_mm_store_si128((__m128i*)v32.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor128 v63,v11,v11
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v62,v13,v13
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor128 v61,v0,v0
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v32,v34,4,2
	_mm_store_ps(v32.f32, _mm_blend_ps(_mm_load_ps(v32.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 78), 4));
	// vrlimi128 v63,v34,8,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 57), 8));
	// vrlimi128 v62,v34,8,1
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 147), 8));
	// vrlimi128 v61,v34,4,0
	_mm_store_ps(v61.f32, _mm_blend_ps(_mm_load_ps(v61.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 228), 4));
	// vrlimi128 v0,v34,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 147), 1));
	// vmulfp128 v3,v39,v32
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(v39.f32), _mm_load_ps(v32.f32)));
	// vmulfp128 v4,v40,v63
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v40.f32), _mm_load_ps(v63.f32)));
	// vrlimi128 v13,v34,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 78), 2));
	// vmulfp128 v2,v37,v62
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(v37.f32), _mm_load_ps(v62.f32)));
	// vmulfp128 v1,v38,v61
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(v38.f32), _mm_load_ps(v61.f32)));
	// vnmsubfp v31,v8,v0,v2
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v2.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsldoi128 v60,v33,v34,8
	_mm_store_si128((__m128i*)v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v33.u8), _mm_load_si128((__m128i*)v34.u8), 8));
	// vxor128 v2,v36,v52
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vrlimi128 v12,v34,1,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 57), 1));
	// vpermwi128 v0,v35,78
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v35.u32), 0xB1));
	// vrlimi128 v11,v34,2,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 228), 2));
	// vpermwi128 v59,v46,114
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v46.u32), 0x8D));
	// vspltw128 v9,v57,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v57.u32), 0x0));
	// vnmsubfp v1,v7,v13,v1
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v1.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v8,v60,56
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xC7));
	// li r7,16
	ctx.r7.s64 = 16;
	// vnmsubfp v4,v6,v12,v4
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v0,v34,9,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 57), 9));
	// vnmsubfp v6,v5,v11,v3
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor128 v11,v59,v50
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vpermwi128 v10,v33,78
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v33.u32), 0xB1));
	// li r6,32
	ctx.r6.s64 = 32;
	// vmaddfp v8,v2,v8,v31
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v31.f32)));
	// vpermwi128 v58,v47,114
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v47.u32), 0x8D));
	// vpermwi128 v56,v45,204
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v45.u32), 0x33));
	// li r5,48
	ctx.r5.s64 = 48;
	// vmrglw128 v55,v35,v34
	_mm_store_si128((__m128i*)v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v34.u32), _mm_load_si128((__m128i*)v35.u32)));
	// vrlimi128 v10,v34,9,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(v34.f32), 147), 9));
	// vxor128 v13,v58,v50
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v50.u8)));
	// vxor128 v12,v56,v52
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v52.u8)));
	// vpermwi128 v7,v55,52
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xCB));
	// vmaddfp v5,v13,v10,v1
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v6,v11,v0,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v7,v12,v7,v4
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v4.f32)));
	// vor128 v54,v8,v8
	_mm_store_si128((__m128i*)v54.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vmsum4fp128 v11,v54,v47
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(v54.f32), _mm_load_ps(v47.f32), 0xFF));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v8,v11,v0,v9
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v11,v0,v9
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v10,v0,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v53,v54,v13
	_mm_store_ps(v53.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v52,v5,v13
	_mm_store_ps(v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v51,v7,v13
	_mm_store_ps(v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v50,v6,v13
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v53,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_823A9398"))) PPC_WEAK_FUNC(sub_823A9398);
PPC_FUNC_IMPL(__imp__sub_823A9398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A939C"))) PPC_WEAK_FUNC(sub_823A939C);
PPC_FUNC_IMPL(__imp__sub_823A939C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A93A0"))) PPC_WEAK_FUNC(sub_823A93A0);
PPC_FUNC_IMPL(__imp__sub_823A93A0) {
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
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r6,r7,4776
	ctx.r6.s64 = ctx.r7.s64 + 4776;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_823A9400"))) PPC_WEAK_FUNC(sub_823A9400);
PPC_FUNC_IMPL(__imp__sub_823A9400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9404"))) PPC_WEAK_FUNC(sub_823A9404);
PPC_FUNC_IMPL(__imp__sub_823A9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9408"))) PPC_WEAK_FUNC(sub_823A9408);
PPC_FUNC_IMPL(__imp__sub_823A9408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f3,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f3,f13,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f9,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f8.f64));
	// lfs f13,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f1,f4,f6
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f6.f64));
	// lfs f8,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f6,f12,f4,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f5.f64));
	// lfs f1,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	f31.f64 = double(temp.f32);
	// fmadds f9,f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f7,f3,f0,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f2.f64));
	// fmadds f3,f13,f0,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f10.f64));
	// fmadds f2,f8,f0,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f6.f64));
	// fmadds f0,f4,f5,f9
	f0.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f13,f1,f11,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f12,f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f11,f31,f11,f2
	ctx.f11.f64 = double(float(f31.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_823A94B0"))) PPC_WEAK_FUNC(sub_823A94B0);
PPC_FUNC_IMPL(__imp__sub_823A94B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A94B4"))) PPC_WEAK_FUNC(sub_823A94B4);
PPC_FUNC_IMPL(__imp__sub_823A94B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A94B8"))) PPC_WEAK_FUNC(sub_823A94B8);
PPC_FUNC_IMPL(__imp__sub_823A94B8) {
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
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a950c
	if (cr6.eq) goto loc_823A950C;
loc_823A94F4:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a9524
	if (cr6.eq) goto loc_823A9524;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a94f4
	if (!cr6.eq) goto loc_823A94F4;
loc_823A950C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A9524:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A9538"))) PPC_WEAK_FUNC(sub_823A9538);
PPC_FUNC_IMPL(__imp__sub_823A9538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A953C"))) PPC_WEAK_FUNC(sub_823A953C);
PPC_FUNC_IMPL(__imp__sub_823A953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9540"))) PPC_WEAK_FUNC(sub_823A9540);
PPC_FUNC_IMPL(__imp__sub_823A9540) {
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
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// mulli r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 * 60;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a95a4
	if (cr6.eq) goto loc_823A95A4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_823A958C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a95bc
	if (cr6.eq) goto loc_823A95BC;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823a958c
	if (!cr6.eq) goto loc_823A958C;
loc_823A95A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A95BC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A95D0"))) PPC_WEAK_FUNC(sub_823A95D0);
PPC_FUNC_IMPL(__imp__sub_823A95D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A95D4"))) PPC_WEAK_FUNC(sub_823A95D4);
PPC_FUNC_IMPL(__imp__sub_823A95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A95D8"))) PPC_WEAK_FUNC(sub_823A95D8);
PPC_FUNC_IMPL(__imp__sub_823A95D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f4,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f8,f6
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fadds f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// lfs f0,9200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9200);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f31,f9,f0
	f31.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f30,f5,f0
	f30.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f29,f1,f0
	f29.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x823a9408
	sub_823A9408(ctx, base);
	// lfs f8,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f31
	ctx.f4.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * f30.f64));
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * f31.f64));
	// lfs f8,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f8,f29
	ctx.f5.f64 = double(float(ctx.f8.f64 * f29.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f3,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f0,f29
	ctx.f11.f64 = double(float(f0.f64 * f29.f64));
	// fmuls f10,f3,f29
	ctx.f10.f64 = double(float(ctx.f3.f64 * f29.f64));
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fabs f8,f6
	ctx.f8.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fabs f6,f4
	ctx.f6.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fabs f4,f2
	ctx.f4.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fabs f3,f1
	ctx.f3.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f1,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// fabs f2,f11
	ctx.f2.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f11,f7
	ctx.f11.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// fabs f7,f10
	ctx.f7.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fabs f0,f9
	f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f9,f5
	ctx.f9.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fadds f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fadds f4,f0,f11
	ctx.f4.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fadds f3,f6,f2
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f9,f13,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f8,f12,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fsubs f7,f12,f2
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fadds f6,f0,f11
	ctx.f6.f64 = double(float(f0.f64 + ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f5,f0,f11
	ctx.f5.f64 = double(float(f0.f64 - ctx.f11.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A9784"))) PPC_WEAK_FUNC(sub_823A9784);
PPC_FUNC_IMPL(__imp__sub_823A9784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9788"))) PPC_WEAK_FUNC(sub_823A9788);
PPC_FUNC_IMPL(__imp__sub_823A9788) {
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
	// bl 0x823a7238
	sub_823A7238(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a97c0
	if (cr6.eq) goto loc_823A97C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A97C0:
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

__attribute__((alias("__imp__sub_823A97D4"))) PPC_WEAK_FUNC(sub_823A97D4);
PPC_FUNC_IMPL(__imp__sub_823A97D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A97D8"))) PPC_WEAK_FUNC(sub_823A97D8);
PPC_FUNC_IMPL(__imp__sub_823A97D8) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,9296
	ctx.r9.s64 = ctx.r10.s64 + 9296;
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

__attribute__((alias("__imp__sub_823A9830"))) PPC_WEAK_FUNC(sub_823A9830);
PPC_FUNC_IMPL(__imp__sub_823A9830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9834"))) PPC_WEAK_FUNC(sub_823A9834);
PPC_FUNC_IMPL(__imp__sub_823A9834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9838"))) PPC_WEAK_FUNC(sub_823A9838);
PPC_FUNC_IMPL(__imp__sub_823A9838) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,9296
	ctx.r9.s64 = r11.s64 + 9296;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823a987c
	if (!cr6.gt) goto loc_823A987C;
loc_823A9864:
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
	// bgt cr6,0x823a9864
	if (cr6.gt) goto loc_823A9864;
loc_823A987C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a9920
	sub_823A9920(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-28068
	ctx.r10.s64 = r11.s64 + -28068;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823a98b8
	if (!cr6.gt) goto loc_823A98B8;
loc_823A98A0:
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
	// bgt cr6,0x823a98a0
	if (cr6.gt) goto loc_823A98A0;
loc_823A98B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823A98C8"))) PPC_WEAK_FUNC(sub_823A98C8);
PPC_FUNC_IMPL(__imp__sub_823A98C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A98CC"))) PPC_WEAK_FUNC(sub_823A98CC);
PPC_FUNC_IMPL(__imp__sub_823A98CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A98D0"))) PPC_WEAK_FUNC(sub_823A98D0);
PPC_FUNC_IMPL(__imp__sub_823A98D0) {
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
	// bl 0x823a9838
	sub_823A9838(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9908
	if (cr6.eq) goto loc_823A9908;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A9908:
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

__attribute__((alias("__imp__sub_823A991C"))) PPC_WEAK_FUNC(sub_823A991C);
PPC_FUNC_IMPL(__imp__sub_823A991C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9920"))) PPC_WEAK_FUNC(sub_823A9920);
PPC_FUNC_IMPL(__imp__sub_823A9920) {
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
	// beq cr6,0x823a9a04
	if (cr6.eq) goto loc_823A9A04;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a9994
	if (!cr6.eq) goto loc_823A9994;
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
	// beq cr6,0x823a9a04
	if (cr6.eq) goto loc_823A9A04;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823a93a0
	sub_823A93A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823a9a04
	goto loc_823A9A04;
loc_823A9994:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a97d8
	sub_823A97D8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823a99c0
	if (!cr6.gt) goto loc_823A99C0;
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
loc_823A99C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82736d48
	sub_82736D48(ctx, base);
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
	// bl 0x823a9838
	sub_823A9838(ctx, base);
loc_823A9A04:
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

__attribute__((alias("__imp__sub_823A9A18"))) PPC_WEAK_FUNC(sub_823A9A18);
PPC_FUNC_IMPL(__imp__sub_823A9A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9A1C"))) PPC_WEAK_FUNC(sub_823A9A1C);
PPC_FUNC_IMPL(__imp__sub_823A9A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9A20"))) PPC_WEAK_FUNC(sub_823A9A20);
PPC_FUNC_IMPL(__imp__sub_823A9A20) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,9308
	ctx.r10.s64 = r11.s64 + 9308;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823a9a60
	if (cr6.eq) goto loc_823A9A60;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_823A9A60:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x823a9838
	sub_823A9838(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,9240
	ctx.r9.s64 = r11.s64 + 9240;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,22260(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22260, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823a9a98
	if (cr6.eq) goto loc_823A9A98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823A9A98:
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

__attribute__((alias("__imp__sub_823A9AAC"))) PPC_WEAK_FUNC(sub_823A9AAC);
PPC_FUNC_IMPL(__imp__sub_823A9AAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AB0"))) PPC_WEAK_FUNC(sub_823A9AB0);
PPC_FUNC_IMPL(__imp__sub_823A9AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238d838
	sub_8238D838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A9AB0"))) PPC_WEAK_FUNC(sub_823A9AB0);
PPC_FUNC_IMPL(__imp__sub_823A9AB0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823A9AB4"))) PPC_WEAK_FUNC(sub_823A9AB4);
PPC_FUNC_IMPL(__imp__sub_823A9AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9AB8"))) PPC_WEAK_FUNC(sub_823A9AB8);
PPC_FUNC_IMPL(__imp__sub_823A9AB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238d8f0
	sub_8238D8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A9ABC"))) PPC_WEAK_FUNC(sub_823A9ABC);
PPC_FUNC_IMPL(__imp__sub_823A9ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9AC0"))) PPC_WEAK_FUNC(sub_823A9AC0);
PPC_FUNC_IMPL(__imp__sub_823A9AC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AC8"))) PPC_WEAK_FUNC(sub_823A9AC8);
PPC_FUNC_IMPL(__imp__sub_823A9AC8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_823A9ACC"))) PPC_WEAK_FUNC(sub_823A9ACC);
PPC_FUNC_IMPL(__imp__sub_823A9ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AD0"))) PPC_WEAK_FUNC(sub_823A9AD0);
PPC_FUNC_IMPL(__imp__sub_823A9AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AD8"))) PPC_WEAK_FUNC(sub_823A9AD8);
PPC_FUNC_IMPL(__imp__sub_823A9AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AE0"))) PPC_WEAK_FUNC(sub_823A9AE0);
PPC_FUNC_IMPL(__imp__sub_823A9AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AE8"))) PPC_WEAK_FUNC(sub_823A9AE8);
PPC_FUNC_IMPL(__imp__sub_823A9AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AF0"))) PPC_WEAK_FUNC(sub_823A9AF0);
PPC_FUNC_IMPL(__imp__sub_823A9AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r3,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9AF8"))) PPC_WEAK_FUNC(sub_823A9AF8);
PPC_FUNC_IMPL(__imp__sub_823A9AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9B20"))) PPC_WEAK_FUNC(sub_823A9B20);
PPC_FUNC_IMPL(__imp__sub_823A9B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r3,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r3.s64 = ctx.r5.s64 >> temp.u64;
	// srd r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r10.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9B4C"))) PPC_WEAK_FUNC(sub_823A9B4C);
PPC_FUNC_IMPL(__imp__sub_823A9B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9B50"))) PPC_WEAK_FUNC(sub_823A9B50);
PPC_FUNC_IMPL(__imp__sub_823A9B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9B64"))) PPC_WEAK_FUNC(sub_823A9B64);
PPC_FUNC_IMPL(__imp__sub_823A9B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9B68"))) PPC_WEAK_FUNC(sub_823A9B68);
PPC_FUNC_IMPL(__imp__sub_823A9B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823A9B7C"))) PPC_WEAK_FUNC(sub_823A9B7C);
PPC_FUNC_IMPL(__imp__sub_823A9B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9B80"))) PPC_WEAK_FUNC(sub_823A9B80);
PPC_FUNC_IMPL(__imp__sub_823A9B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 548);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_823A9BB8"))) PPC_WEAK_FUNC(sub_823A9BB8);
PPC_FUNC_IMPL(__imp__sub_823A9BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9BBC"))) PPC_WEAK_FUNC(sub_823A9BBC);
PPC_FUNC_IMPL(__imp__sub_823A9BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9BC0"))) PPC_WEAK_FUNC(sub_823A9BC0);
PPC_FUNC_IMPL(__imp__sub_823A9BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 1932, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 1924, temp.u32);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfsx f0,r9,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 1928, temp.u32);
	// srd r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9C10"))) PPC_WEAK_FUNC(sub_823A9C10);
PPC_FUNC_IMPL(__imp__sub_823A9C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825d7180
	sub_825D7180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823A9C3C"))) PPC_WEAK_FUNC(sub_823A9C3C);
PPC_FUNC_IMPL(__imp__sub_823A9C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9C40"))) PPC_WEAK_FUNC(sub_823A9C40);
PPC_FUNC_IMPL(__imp__sub_823A9C40) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d828
	sub_8270D828(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d8f8
	sub_8270D8F8(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270ea58
	sub_8270EA58(ctx, base);
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

__attribute__((alias("__imp__sub_823A9CF8"))) PPC_WEAK_FUNC(sub_823A9CF8);
PPC_FUNC_IMPL(__imp__sub_823A9CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9CFC"))) PPC_WEAK_FUNC(sub_823A9CFC);
PPC_FUNC_IMPL(__imp__sub_823A9CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9D00"))) PPC_WEAK_FUNC(sub_823A9D00);
PPC_FUNC_IMPL(__imp__sub_823A9D00) {
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
	// lwz r11,136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,124
	r30.s64 = ctx.r3.s64 + 124;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a9d60
	if (cr6.eq) goto loc_823A9D60;
loc_823A9D34:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391de0
	sub_82391DE0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,124
	r31.s64 = r31.s64 + 124;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a9d34
	if (!cr6.eq) goto loc_823A9D34;
loc_823A9D60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A9D64"))) PPC_WEAK_FUNC(sub_823A9D64);
PPC_FUNC_IMPL(__imp__sub_823A9D64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823A9D68"))) PPC_WEAK_FUNC(sub_823A9D68);
PPC_FUNC_IMPL(__imp__sub_823A9D68) {
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
	// lwz r11,136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,124
	r30.s64 = ctx.r3.s64 + 124;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a9dd8
	if (cr6.eq) goto loc_823A9DD8;
loc_823A9D9C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391d10
	sub_82391D10(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391d78
	sub_82391D78(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,124
	r31.s64 = r31.s64 + 124;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a9d9c
	if (!cr6.eq) goto loc_823A9D9C;
loc_823A9DD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A9DDC"))) PPC_WEAK_FUNC(sub_823A9DDC);
PPC_FUNC_IMPL(__imp__sub_823A9DDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823A9DE0"))) PPC_WEAK_FUNC(sub_823A9DE0);
PPC_FUNC_IMPL(__imp__sub_823A9DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = r11.s64 - ctx.r7.s64;
	// mulli r11,r6,60
	r11.s64 = ctx.r6.s64 * 60;
	// stw r6,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r6.u32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,308
	ctx.r3.s64 = r11.s64 + 308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9E18"))) PPC_WEAK_FUNC(sub_823A9E18);
PPC_FUNC_IMPL(__imp__sub_823A9E18) {
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
	// lwz r11,136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r3,124
	r30.s64 = ctx.r3.s64 + 124;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a9ef8
	if (cr6.eq) goto loc_823A9EF8;
	// lis r27,-31934
	r27.s64 = -2092826624;
loc_823A9E50:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9edc
	if (cr6.eq) goto loc_823A9EDC;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mulli r9,r7,60
	ctx.r9.s64 = ctx.r7.s64 * 60;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9edc
	if (cr6.eq) goto loc_823A9EDC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_823A9E94:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,32496(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 32496);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x823a9eb4
	if (cr6.eq) goto loc_823A9EB4;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823a9e94
	if (!cr6.eq) goto loc_823A9E94;
	// b 0x823a9edc
	goto loc_823A9EDC;
loc_823A9EB4:
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r11,284(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 284);
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x823a9edc
	if (!cr6.eq) goto loc_823A9EDC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391b08
	sub_82391B08(ctx, base);
loc_823A9EDC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,124
	r31.s64 = r31.s64 + 124;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a9e50
	if (!cr6.eq) goto loc_823A9E50;
loc_823A9EF8:
	// stw r28,284(r29)
	PPC_STORE_U32(r29.u32 + 284, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A9F00"))) PPC_WEAK_FUNC(sub_823A9F00);
PPC_FUNC_IMPL(__imp__sub_823A9F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823A9F04"))) PPC_WEAK_FUNC(sub_823A9F04);
PPC_FUNC_IMPL(__imp__sub_823A9F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9F08"))) PPC_WEAK_FUNC(sub_823A9F08);
PPC_FUNC_IMPL(__imp__sub_823A9F08) {
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
	// lwz r11,136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r30,r3,124
	r30.s64 = ctx.r3.s64 + 124;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823a9fec
	if (cr6.eq) goto loc_823A9FEC;
loc_823A9F40:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9fd0
	if (cr6.eq) goto loc_823A9FD0;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// lwz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mulli r9,r7,60
	ctx.r9.s64 = ctx.r7.s64 * 60;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x823a9fd0
	if (cr6.eq) goto loc_823A9FD0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_823A9F88:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x823a9fa4
	if (cr6.eq) goto loc_823A9FA4;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823a9f88
	if (!cr6.eq) goto loc_823A9F88;
	// b 0x823a9fd0
	goto loc_823A9FD0;
loc_823A9FA4:
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x823a9fd0
	if (cr6.lt) goto loc_823A9FD0;
	// addi r11,r4,20
	r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x823a9fd0
	if (!cr6.eq) goto loc_823A9FD0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391b08
	sub_82391B08(ctx, base);
loc_823A9FD0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,124
	r31.s64 = r31.s64 + 124;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823a9f40
	if (!cr6.eq) goto loc_823A9F40;
loc_823A9FEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823A9FF0"))) PPC_WEAK_FUNC(sub_823A9FF0);
PPC_FUNC_IMPL(__imp__sub_823A9FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823A9FF4"))) PPC_WEAK_FUNC(sub_823A9FF4);
PPC_FUNC_IMPL(__imp__sub_823A9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9FF8"))) PPC_WEAK_FUNC(sub_823A9FF8);
PPC_FUNC_IMPL(__imp__sub_823A9FF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lis r11,-31968
	r11.s64 = -2095054848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,18224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823aa028
	if (cr6.eq) goto loc_823AA028;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aa02c
	if (!cr6.eq) goto loc_823AA02C;
loc_823AA028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA02C:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823aa0c8
	if (cr6.eq) goto loc_823AA0C8;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// lwz r3,25320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 25320);
	// bl 0x825dd2e0
	sub_825DD2E0(ctx, base);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r11,25320(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 25320);
	// li r12,1
	r12.s64 = 1;
	// addi r9,r10,24680
	ctx.r9.s64 = ctx.r10.s64 + 24680;
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,24680(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24680);
	f0.f64 = double(temp.f32);
	// stfs f0,3520(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3520, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,3524(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3524, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,3528(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3528, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,3532(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 3532, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 | r12.u64;
	// std r7,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r7.u64);
	// lwz r6,304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// mulli r11,r6,60
	r11.s64 = ctx.r6.s64 * 60;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,308
	ctx.r4.s64 = r11.s64 + 308;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 120);
	// lhz r3,122(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 122);
	// bl 0x827100d8
	sub_827100D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 25320);
	// bl 0x825dd2e0
	sub_825DD2E0(ctx, base);
loc_823AA0C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823AA0CC"))) PPC_WEAK_FUNC(sub_823AA0CC);
PPC_FUNC_IMPL(__imp__sub_823AA0CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823AA0D0"))) PPC_WEAK_FUNC(sub_823AA0D0);
PPC_FUNC_IMPL(__imp__sub_823AA0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828e9408
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x828eaae8
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r30,488(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x823aa2d8
	if (cr6.eq) goto loc_823AA2D8;
	// lwz r28,8(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r27,12(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r25,48(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r24,52(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x823a1188
	sub_823A1188(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f31,8892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8892);
	f31.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f31
	f30.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x823a1188
	sub_823A1188(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r25.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// rotlwi r3,r27,0
	ctx.r3.u64 = __builtin_rotateleft32(r27.u32, 0);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f29,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f29.f64 = double(temp.f32);
	// fmuls f28,f7,f31
	f28.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fmuls f31,f6,f31
	f31.f64 = double(float(ctx.f6.f64 * f31.f64));
	// bl 0x8271aae0
	sub_8271AAE0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f27,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f27.f64 = double(temp.f32);
	// lfs f26,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f24,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f24.f64 = double(temp.f32);
	// bl 0x8271aae0
	sub_8271AAE0(ctx, base);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// rldicr r11,r8,38,63
	r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,25320(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stfs f27,3520(r10)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3520, temp.u32);
	// stfs f26,3524(r10)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3524, temp.u32);
	// stfs f25,3528(r10)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3528, temp.u32);
	// stfs f24,3532(r10)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3532, temp.u32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// or r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 | r11.u64;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// lwz r10,25320(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stfs f5,3536(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3536, temp.u32);
	// stfs f4,3540(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3540, temp.u32);
	// stfs f2,3548(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3548, temp.u32);
	// stfs f3,3544(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 3544, temp.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r11,25320(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// stfs f31,3552(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 3552, temp.u32);
	// stfs f28,3556(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 3556, temp.u32);
	// stfs f30,3560(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 3560, temp.u32);
	// stfs f29,3564(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 3564, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5a38
	sub_825E5A38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// lwz r7,304(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 304);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r7,60
	r11.s64 = ctx.r7.s64 * 60;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,308
	ctx.r4.s64 = r11.s64 + 308;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e5b30
	sub_825E5B30(ctx, base);
loc_823AA2D8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x828eab34
}

__attribute__((alias("__imp__sub_823AA2EC"))) PPC_WEAK_FUNC(sub_823AA2EC);
PPC_FUNC_IMPL(__imp__sub_823AA2EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_823AA2F0"))) PPC_WEAK_FUNC(sub_823AA2F0);
PPC_FUNC_IMPL(__imp__sub_823AA2F0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r4.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823aa334
	if (!cr6.eq) goto loc_823AA334;
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x828e9458
	return;
loc_823AA334:
	// lwz r11,304(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 304);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r24,r11,308
	r24.s64 = r11.s64 + 308;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x827159a8
	sub_827159A8(ctx, base);
	// lwz r10,292(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823aa474
	if (!cr6.gt) goto loc_823AA474;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
loc_823AA37C:
	// lwz r3,288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aa458
	if (cr6.eq) goto loc_823AA458;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,300(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 300);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// stbx r9,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + r28.u32, ctx.r9.u8);
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,296(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 296);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,-24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
	// stfs f10,-20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + -20, temp.u32);
	// stfs f9,-16(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + -16, temp.u32);
	// stfs f8,-12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// stfs f7,-8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// stfs f6,-4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_823AA458:
	// lwz r11,292(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 292);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,176
	r26.s64 = r26.s64 + 176;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823aa37c
	if (cr6.lt) goto loc_823AA37C;
loc_823AA474:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82715a18
	sub_82715A18(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
}

__attribute__((alias("__imp__sub_823AA484"))) PPC_WEAK_FUNC(sub_823AA484);
PPC_FUNC_IMPL(__imp__sub_823AA484) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_823AA488"))) PPC_WEAK_FUNC(sub_823AA488);
PPC_FUNC_IMPL(__imp__sub_823AA488) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa6b0
	if (cr6.eq) goto loc_823AA6B0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,40
	ctx.r4.s64 = ctx.r3.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a95d8
	sub_823A95D8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-21846
	r11.s64 = -1431699456;
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ori r10,r11,43691
	ctx.r10.u64 = r11.u64 | 43691;
	// stfs f12,16(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// lwz r11,304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulhwu r9,r11,r10
	ctx.r9.u64 = (uint64_t(r11.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r7,r8,r11
	ctx.r7.s64 = r11.s64 - ctx.r8.s64;
	// stw r7,304(r30)
	PPC_STORE_U32(r30.u32 + 304, ctx.r7.u32);
	// mulli r11,r7,60
	r11.s64 = ctx.r7.s64 * 60;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r23,r11,308
	r23.s64 = r11.s64 + 308;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827159a8
	sub_827159A8(ctx, base);
	// lwz r6,292(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ble cr6,0x823aa6a8
	if (!cr6.gt) goto loc_823AA6A8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r3,-4
	r31.s64 = ctx.r3.s64 + -4;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f30,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f30.f64 = double(temp.f32);
loc_823AA578:
	// lwz r10,300(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// add r26,r27,r11
	r26.u64 = r27.u64 + r11.u64;
	// lbzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + ctx.r10.u32);
	// mulli r11,r9,52
	r11.s64 = ctx.r9.s64 * 52;
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x82339888
	sub_82339888(ctx, base);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f30,268(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82347210
	sub_82347210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x82347210
	sub_82347210(ctx, base);
	// lfs f8,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// lfs f6,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f3,24(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f2,28(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f0.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfsu f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	ea = 48 + r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// lwz r8,292(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x823aa578
	if (cr6.lt) goto loc_823AA578;
loc_823AA6A8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82715a18
	sub_82715A18(ctx, base);
loc_823AA6B0:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_823AA6BC"))) PPC_WEAK_FUNC(sub_823AA6BC);
PPC_FUNC_IMPL(__imp__sub_823AA6BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_823AA6C0"))) PPC_WEAK_FUNC(sub_823AA6C0);
PPC_FUNC_IMPL(__imp__sub_823AA6C0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 272);
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823aa768
	if (cr6.eq) goto loc_823AA768;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823aa708
	if (cr6.eq) goto loc_823AA708;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aa70c
	if (!cr6.eq) goto loc_823AA70C;
loc_823AA708:
	// li r11,0
	r11.s64 = 0;
loc_823AA70C:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,276(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stb r29,272(r30)
	PPC_STORE_U8(r30.u32 + 272, r29.u8);
	// lwz r3,-14368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsel f11,f12,f12,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// fsubs f31,f0,f9
	f31.f64 = double(float(f0.f64 - ctx.f9.f64));
	// beq cr6,0x823aa758
	if (cr6.eq) goto loc_823AA758;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aa75c
	if (!cr6.eq) goto loc_823AA75C;
loc_823AA758:
	// li r11,0
	r11.s64 = 0;
loc_823AA75C:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 - f31.f64));
	// stfs f13,276(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
loc_823AA768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_823AA770"))) PPC_WEAK_FUNC(sub_823AA770);
PPC_FUNC_IMPL(__imp__sub_823AA770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823AA774"))) PPC_WEAK_FUNC(sub_823AA774);
PPC_FUNC_IMPL(__imp__sub_823AA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AA778"))) PPC_WEAK_FUNC(sub_823AA778);
PPC_FUNC_IMPL(__imp__sub_823AA778) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,18224(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18224);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// beq cr6,0x823aa7c0
	if (cr6.eq) goto loc_823AA7C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aa7c4
	if (!cr6.eq) goto loc_823AA7C4;
loc_823AA7C0:
	// li r11,0
	r11.s64 = 0;
loc_823AA7C4:
	// lwz r10,268(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 268);
	// lwz r9,224(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823aabac
	if (!cr6.eq) goto loc_823AABAC;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823aa7f4
	if (cr6.eq) goto loc_823AA7F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aa7f8
	if (!cr6.eq) goto loc_823AA7F8;
loc_823AA7F4:
	// li r11,0
	r11.s64 = 0;
loc_823AA7F8:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,276(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lbz r11,272(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 272);
	// lfs f0,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f12,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fsel f9,f10,f10,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f0,f8,f13,f9
	f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// bne cr6,0x823aa848
	if (!cr6.eq) goto loc_823AA848;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x823aabac
	if (!cr6.lt) goto loc_823AABAC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa868
	if (cr6.eq) goto loc_823AA868;
loc_823AA848:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r8,r10,24696
	ctx.r8.s64 = ctx.r10.s64 + 24696;
	// addi r7,r9,24712
	ctx.r7.s64 = ctx.r9.s64 + 24712;
	// lfs f13,24696(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24696);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24712(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24712);
	ctx.f11.f64 = double(temp.f32);
	// b 0x823aa884
	goto loc_823AA884;
loc_823AA868:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// addi r8,r10,24712
	ctx.r8.s64 = ctx.r10.s64 + 24712;
	// addi r7,r9,24696
	ctx.r7.s64 = ctx.r9.s64 + 24696;
	// lfs f13,24712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24712);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24696);
	ctx.f11.f64 = double(temp.f32);
loc_823AA884:
	// fmuls f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * f0.f64));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fadds f0,f4,f8
	f0.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f1,f5,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// bl 0x822c1c50
	sub_822C1C50(ctx, base);
	// lwz r11,304(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 304);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// addi r4,r11,308
	ctx.r4.s64 = r11.s64 + 308;
	// bl 0x8270f0d8
	sub_8270F0D8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r11,9448
	r27.s64 = r11.s64 + 9448;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r26,r25,76
	r26.s64 = r25.s64 + 76;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ac5b0
	sub_823AC5B0(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x823aaa04
	if (cr6.eq) goto loc_823AAA04;
loc_823AA958:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d828
	sub_8270D828(ctx, base);
	// addi r5,r30,36
	ctx.r5.s64 = r30.s64 + 36;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d8f8
	sub_8270D8F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 120);
	// lhz r3,122(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 122);
	// bl 0x827100d8
	sub_827100D8(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x823aa958
	if (!cr6.eq) goto loc_823AA958;
loc_823AAA04:
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r12,1
	r12.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// stfs f31,3520(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 3520, temp.u32);
	// stfs f30,3524(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 3524, temp.u32);
	// stfs f29,3528(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 3528, temp.u32);
	// stfs f28,3532(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 3532, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | r12.u64;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ac5b0
	sub_823AC5B0(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r6,r8,22000
	ctx.r6.s64 = ctx.r8.s64 + 22000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14756);
	// lwz r27,456(r6)
	r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 456);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823aaa7c
	if (cr6.eq) goto loc_823AAA7C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aaa80
	if (!cr6.eq) goto loc_823AAA80;
loc_823AAA7C:
	// li r11,0
	r11.s64 = 0;
loc_823AAA80:
	// addi r4,r11,88
	ctx.r4.s64 = r11.s64 + 88;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r11
	r29.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823aab38
	if (cr6.eq) goto loc_823AAB38;
loc_823AAAA8:
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x823aab1c
	if (!cr6.lt) goto loc_823AAB1C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a9c40
	sub_823A9C40(ctx, base);
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dca10
	sub_825DCA10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aab0c
	if (!cr6.eq) goto loc_823AAB0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dc990
	sub_825DC990(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dcd20
	sub_825DCD20(ctx, base);
loc_823AAB0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U16(r28.u32 + 120);
	// lhz r3,122(r28)
	ctx.r3.u64 = PPC_LOAD_U16(r28.u32 + 122);
	// bl 0x827100d8
	sub_827100D8(ctx, base);
loc_823AAB1C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x823aaaa8
	if (!cr6.eq) goto loc_823AAAA8;
loc_823AAB38:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823aabac
	if (cr6.eq) goto loc_823AABAC;
loc_823AAB5C:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x823aab90
	if (cr6.lt) goto loc_823AAB90;
	// addi r11,r25,148
	r11.s64 = r25.s64 + 148;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x823aab90
	if (cr6.eq) goto loc_823AAB90;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a9c40
	sub_823A9C40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,120(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 120);
	// lhz r3,122(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 122);
	// bl 0x827100d8
	sub_827100D8(ctx, base);
loc_823AAB90:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x823aab5c
	if (!cr6.eq) goto loc_823AAB5C;
loc_823AABAC:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_823AABC0"))) PPC_WEAK_FUNC(sub_823AABC0);
PPC_FUNC_IMPL(__imp__sub_823AABC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823AABC4"))) PPC_WEAK_FUNC(sub_823AABC4);
PPC_FUNC_IMPL(__imp__sub_823AABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AABC8"))) PPC_WEAK_FUNC(sub_823AABC8);
PPC_FUNC_IMPL(__imp__sub_823AABC8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r30,96(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,9820
	ctx.r10.s64 = r11.s64 + 9820;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823aac08
	if (cr6.eq) goto loc_823AAC08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239e920
	sub_8239E920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
loc_823AAC08:
	// lwz r30,488(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 488);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823aac28
	if (cr6.eq) goto loc_823AAC28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,488(r31)
	PPC_STORE_U32(r31.u32 + 488, r28.u32);
loc_823AAC28:
	// addi r29,r31,308
	r29.s64 = r31.s64 + 308;
	// li r30,3
	r30.s64 = 3;
loc_823AAC30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715928
	sub_82715928(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// bne 0x823aac30
	if (!cr0.eq) goto loc_823AAC30;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aac5c
	if (cr6.eq) goto loc_823AAC5C;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r28,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r28.u32);
loc_823AAC5C:
	// lwz r3,300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aac70
	if (cr6.eq) goto loc_823AAC70;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// stw r28,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r28.u32);
loc_823AAC70:
	// addi r30,r31,488
	r30.s64 = r31.s64 + 488;
	// li r29,2
	r29.s64 = 2;
loc_823AAC78:
	// addi r30,r30,-60
	r30.s64 = r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x823aac78
	if (!cr0.lt) goto loc_823AAC78;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x82392328
	sub_82392328(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// addi r10,r11,9808
	ctx.r10.s64 = r11.s64 + 9808;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// bl 0x823ac548
	sub_823AC548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823acbd8
	sub_823ACBD8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,9796
	ctx.r8.s64 = ctx.r9.s64 + 9796;
	// stw r8,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r8.u32);
	// bl 0x823ac548
	sub_823AC548(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x823d57d0
	sub_823D57D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238df28
	sub_8238DF28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823AACE0"))) PPC_WEAK_FUNC(sub_823AACE0);
PPC_FUNC_IMPL(__imp__sub_823AACE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823AACE4"))) PPC_WEAK_FUNC(sub_823AACE4);
PPC_FUNC_IMPL(__imp__sub_823AACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AACE8"))) PPC_WEAK_FUNC(sub_823AACE8);
PPC_FUNC_IMPL(__imp__sub_823AACE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r4,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r4.u32);
	// li r23,0
	r23.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8238df78
	sub_8238DF78(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r23,96(r24)
	PPC_STORE_U32(r24.u32 + 96, r23.u32);
	// addi r28,r24,100
	r28.s64 = r24.s64 + 100;
	// addi r10,r11,9820
	ctx.r10.s64 = r11.s64 + 9820;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// bl 0x823d5690
	sub_823D5690(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r23,128(r24)
	PPC_STORE_U32(r24.u32 + 128, r23.u32);
	// addi r31,r24,124
	r31.s64 = r24.s64 + 124;
	// addi r8,r9,9808
	ctx.r8.s64 = ctx.r9.s64 + 9808;
	// stw r23,136(r24)
	PPC_STORE_U32(r24.u32 + 136, r23.u32);
	// stw r23,132(r24)
	PPC_STORE_U32(r24.u32 + 132, r23.u32);
	// stw r23,140(r24)
	PPC_STORE_U32(r24.u32 + 140, r23.u32);
	// stw r8,124(r24)
	PPC_STORE_U32(r24.u32 + 124, ctx.r8.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,140(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 140);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// addi r4,r6,9836
	ctx.r4.s64 = ctx.r6.s64 + 9836;
	// stw r5,140(r24)
	PPC_STORE_U32(r24.u32 + 140, ctx.r5.u32);
	// addi r3,r24,148
	ctx.r3.s64 = r24.s64 + 148;
	// stw r4,124(r24)
	PPC_STORE_U32(r24.u32 + 124, ctx.r4.u32);
	// bl 0x82392278
	sub_82392278(ctx, base);
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// li r11,-1
	r11.s64 = -1;
	// stb r23,272(r24)
	PPC_STORE_U8(r24.u32 + 272, r23.u8);
	// addi r30,r24,308
	r30.s64 = r24.s64 + 308;
	// stw r23,280(r24)
	PPC_STORE_U32(r24.u32 + 280, r23.u32);
	// stw r11,268(r24)
	PPC_STORE_U32(r24.u32 + 268, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r23,284(r24)
	PPC_STORE_U32(r24.u32 + 284, r23.u32);
	// lfs f0,21036(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r23,288(r24)
	PPC_STORE_U32(r24.u32 + 288, r23.u32);
	// stfs f0,276(r24)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + 276, temp.u32);
	// stw r23,292(r24)
	PPC_STORE_U32(r24.u32 + 292, r23.u32);
	// stw r23,296(r24)
	PPC_STORE_U32(r24.u32 + 296, r23.u32);
	// stw r23,300(r24)
	PPC_STORE_U32(r24.u32 + 300, r23.u32);
	// stw r23,304(r24)
	PPC_STORE_U32(r24.u32 + 304, r23.u32);
loc_823AADB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// bge 0x823aadb0
	if (!cr0.lt) goto loc_823AADB0;
	// stw r23,492(r24)
	PPC_STORE_U32(r24.u32 + 492, r23.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r23,488(r24)
	PPC_STORE_U32(r24.u32 + 488, r23.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823a2b68
	sub_823A2B68(ctx, base);
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// li r29,2
	r29.s64 = 2;
loc_823AADE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aae74
	if (cr6.eq) goto loc_823AAE74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aae74
	if (cr6.eq) goto loc_823AAE74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822b27c0
	sub_822B27C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aae74
	if (cr6.eq) goto loc_823AAE74;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aae74
	if (cr6.eq) goto loc_823AAE74;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82395b90
	sub_82395B90(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82395230
	sub_82395230(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823aae6c
	if (cr6.eq) goto loc_823AAE6C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823a2258
	sub_823A2258(ctx, base);
loc_823AAE6C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82395228
	sub_82395228(ctx, base);
loc_823AAE74:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x823aade4
	if (!cr0.eq) goto loc_823AADE4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r23.u32);
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r23.u32);
	// addi r11,r11,9848
	r11.s64 = r11.s64 + 9848;
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r23.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r23.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | r11.u64;
	// addi r8,r10,9764
	ctx.r8.s64 = ctx.r10.s64 + 9764;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823a2c50
	sub_823A2C50(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// stw r3,96(r24)
	PPC_STORE_U32(r24.u32 + 96, ctx.r3.u32);
	// addi r30,r11,10032
	r30.s64 = r11.s64 + 10032;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r30.u32);
	// bne cr6,0x823aaf60
	if (!cr6.eq) goto loc_823AAF60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r4,29820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 29820);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r31,30248(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 30248);
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r9,24664
	ctx.r6.s64 = ctx.r9.s64 + 24664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f1,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823a1628
	sub_823A1628(ctx, base);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,96(r24)
	PPC_STORE_U32(r24.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaf5c
	if (cr6.eq) goto loc_823AAF5C;
loc_823AAF40:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823aaf40
	if (!cr0.eq) goto loc_823AAF40;
loc_823AAF5C:
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r23.u32);
loc_823AAF60:
	// lwz r11,96(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// addi r10,r24,40
	ctx.r10.s64 = r24.s64 + 40;
	// addi r9,r24,8
	ctx.r9.s64 = r24.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r24)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + 40, temp.u32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r24.u32 + 44, temp.u32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r24.u32 + 48, temp.u32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r24.u32 + 52, temp.u32);
	// lfs f10,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,56(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r24.u32 + 56, temp.u32);
	// lfs f9,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,60(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r24.u32 + 60, temp.u32);
	// lfs f8,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r24)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r24.u32 + 64, temp.u32);
	// lfs f7,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r24)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r24.u32 + 68, temp.u32);
	// lfs f6,40(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r24)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r24.u32 + 8, temp.u32);
	// lfs f5,44(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,12(r24)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r24.u32 + 12, temp.u32);
	// lfs f4,48(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,16(r24)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r24.u32 + 16, temp.u32);
	// lfs f3,52(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,20(r24)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r24.u32 + 20, temp.u32);
	// lfs f2,56(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,24(r24)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r24.u32 + 24, temp.u32);
	// lfs f1,60(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,28(r24)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r24.u32 + 28, temp.u32);
	// lfs f0,64(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r24)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + 32, temp.u32);
	// lfs f13,68(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r24.u32 + 36, temp.u32);
	// lwz r3,96(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// bl 0x8239e740
	sub_8239E740(ctx, base);
	// lwz r11,96(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x823ab084
	if (!cr6.gt) goto loc_823AB084;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_823AB014:
	// lwz r11,96(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r11,68(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab048
	if (cr6.eq) goto loc_823AB048;
loc_823AB02C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823ab02c
	if (!cr0.eq) goto loc_823AB02C;
loc_823AB048:
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
loc_823AB050:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r7,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r7.u64 = __builtin_bswap32(reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x823ab050
	if (!cr0.eq) goto loc_823AB050;
	// lwz r5,96(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r3,128(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x823ab014
	if (cr6.lt) goto loc_823AB014;
loc_823AB084:
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// addi r3,r24,124
	ctx.r3.s64 = r24.s64 + 124;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823ab0a4
	if (!cr6.gt) goto loc_823AB0A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823AB0A4:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r23.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r9,10016
	r31.s64 = ctx.r9.s64 + 10016;
	// lwz r8,30252(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30252);
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r11,176
	ctx.r7.s64 = r11.s64 + 176;
	// addi r6,r11,284
	ctx.r6.s64 = r11.s64 + 284;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// stw r6,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,9996
	ctx.r3.s64 = ctx.r5.s64 + 9996;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// lis r29,-31934
	r29.s64 = -2092826624;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r11,21644(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21644);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,9976
	ctx.r3.s64 = ctx.r4.s64 + 9976;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lwz r11,21644(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21644);
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,29820(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lis r11,-31932
	r11.s64 = -2092695552;
	// mr r16,r23
	r16.u64 = r23.u64;
	// addi r3,r11,-3784
	ctx.r3.s64 = r11.s64 + -3784;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lwz r11,96(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// lwz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823abb64
	if (!cr6.gt) goto loc_823ABB64;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r11,r11,16780
	r11.s64 = r11.s64 + 16780;
	// addi r10,r10,-13328
	ctx.r10.s64 = ctx.r10.s64 + -13328;
	// addi r8,r8,16844
	ctx.r8.s64 = ctx.r8.s64 + 16844;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// addi r5,r5,-15212
	ctx.r5.s64 = ctx.r5.s64 + -15212;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r4,r4,32496
	ctx.r4.s64 = ctx.r4.s64 + 32496;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r3,r3,32500
	ctx.r3.s64 = ctx.r3.s64 + 32500;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// rlwinm r31,r23,2,0,29
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lis r18,-31934
	r18.s64 = -2092826624;
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// lis r17,-31934
	r17.s64 = -2092826624;
	// lis r22,-31934
	r22.s64 = -2092826624;
	// addi r19,r9,-13220
	r19.s64 = ctx.r9.s64 + -13220;
	// addi r15,r7,9968
	r15.s64 = ctx.r7.s64 + 9968;
	// addi r14,r6,9948
	r14.s64 = ctx.r6.s64 + 9948;
loc_823AB23C:
	// lwz r11,96(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwzx r21,r10,r31
	r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// lwz r11,68(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x823ab27c
	if (cr6.eq) goto loc_823AB27C;
loc_823AB25C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823ab25c
	if (!cr0.eq) goto loc_823AB25C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823AB27C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mr r20,r23
	r20.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823abb2c
	if (!cr6.gt) goto loc_823ABB2C;
loc_823AB28C:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab2b4
	if (cr6.eq) goto loc_823AB2B4;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mulli r9,r20,456
	ctx.r9.s64 = r20.s64 * 456;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823abb1c
	if (!cr6.eq) goto loc_823ABB1C;
loc_823AB2B4:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ab2dc
	if (cr6.eq) goto loc_823AB2DC;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mulli r9,r20,456
	ctx.r9.s64 = r20.s64 * 456;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823abb1c
	if (!cr6.eq) goto loc_823ABB1C;
loc_823AB2DC:
	// lwz r11,136(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// addi r30,r24,124
	r30.s64 = r24.s64 + 124;
	// lwz r10,132(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823ab308
	if (!cr6.gt) goto loc_823AB308;
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
loc_823AB308:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r9,r11,124
	ctx.r9.s64 = r11.s64 * 124;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq 0x823ab334
	if (cr0.eq) goto loc_823AB334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82392278
	sub_82392278(ctx, base);
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x823ab338
	goto loc_823AB338;
loc_823AB334:
	// mr r26,r23
	r26.u64 = r23.u64;
loc_823AB338:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823921a0
	sub_823921A0(ctx, base);
	// lwz r10,84(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 84);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// lwz r25,8(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r29,12(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// beq cr6,0x823ab380
	if (cr6.eq) goto loc_823AB380;
loc_823AB364:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823ab364
	if (!cr0.eq) goto loc_823AB364;
loc_823AB380:
	// lwz r28,60(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 60);
loc_823AB384:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823ab384
	if (!cr0.eq) goto loc_823AB384;
	// mr r31,r23
	r31.u64 = r23.u64;
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// addi r27,r29,4
	r27.s64 = r29.s64 + 4;
loc_823AB3AC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab3e0
	if (cr6.eq) goto loc_823AB3E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82398dd0
	sub_82398DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82398f08
	sub_82398F08(ctx, base);
	// addi r11,r3,22
	r11.s64 = ctx.r3.s64 + 22;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r21.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_823AB3E0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// blt cr6,0x823ab3ac
	if (cr6.lt) goto loc_823AB3AC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r27,r20,456
	r27.s64 = r20.s64 * 456;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r24,112(r26)
	PPC_STORE_U32(r26.u32 + 112, r24.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823ab424
	if (!cr6.eq) goto loc_823AB424;
	// lis r11,-32197
	r11.s64 = -2110062592;
	// addi r11,r11,-24584
	r11.s64 = r11.s64 + -24584;
	// b 0x823ab42c
	goto loc_823AB42C;
loc_823AB424:
	// lis r11,-32197
	r11.s64 = -2110062592;
	// addi r11,r11,-24368
	r11.s64 = r11.s64 + -24368;
loc_823AB42C:
	// stw r11,116(r26)
	PPC_STORE_U32(r26.u32 + 116, r11.u32);
	// lwz r11,80(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 80);
	// sth r11,122(r26)
	PPC_STORE_U16(r26.u32 + 122, r11.u16);
	// lwz r9,76(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 76);
	// sth r9,120(r26)
	PPC_STORE_U16(r26.u32 + 120, ctx.r9.u16);
	// lwz r29,72(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 72);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823ab7d4
	if (cr6.eq) goto loc_823AB7D4;
loc_823AB44C:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823ab44c
	if (!cr0.eq) goto loc_823AB44C;
loc_823AB468:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823ab468
	if (!cr0.eq) goto loc_823AB468;
	// lwz r7,636(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// mr r28,r23
	r28.u64 = r23.u64;
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823ab7bc
	if (cr6.eq) goto loc_823AB7BC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x823ab7bc
	if (!cr6.eq) goto loc_823AB7BC;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab5e4
	if (cr6.eq) goto loc_823AB5E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
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
	// beq cr6,0x823ab5e4
	if (cr6.eq) goto loc_823AB5E4;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab524
	if (cr6.eq) goto loc_823AB524;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x823ab5d8
	goto loc_823AB5D8;
loc_823AB524:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
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
	// beq cr6,0x823ab5e4
	if (cr6.eq) goto loc_823AB5E4;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab5d4
	if (cr6.eq) goto loc_823AB5D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823AB590:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823ab5b4
	if (cr6.eq) goto loc_823AB5B4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823ab590
	if (cr6.eq) goto loc_823AB590;
loc_823AB5B4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823ab5d4
	if (!cr6.eq) goto loc_823AB5D4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823ab5d8
	goto loc_823AB5D8;
loc_823AB5D4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823AB5D8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x823ab5e8
	if (!cr6.eq) goto loc_823AB5E8;
loc_823AB5E4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_823AB5E8:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ab7bc
	if (cr6.eq) goto loc_823AB7BC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823d38b8
	sub_823D38B8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab734
	if (cr6.eq) goto loc_823AB734;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// bl 0x826ca0f8
	sub_826CA0F8(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// ori r30,r11,1
	r30.u64 = r11.u64 | 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab71c
	if (cr6.eq) goto loc_823AB71C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
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
	// beq cr6,0x823ab71c
	if (cr6.eq) goto loc_823AB71C;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab6a8
	if (cr6.eq) goto loc_823AB6A8;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x823ab714
	goto loc_823AB714;
loc_823AB6A8:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
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
	// beq cr6,0x823ab71c
	if (cr6.eq) goto loc_823AB71C;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab710
	if (cr6.eq) goto loc_823AB710;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822c8398
	sub_822C8398(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab710
	if (cr6.eq) goto loc_823AB710;
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
	// b 0x823ab714
	goto loc_823AB714;
loc_823AB710:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823AB714:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823ab720
	if (!cr6.eq) goto loc_823AB720;
loc_823AB71C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_823AB720:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab738
	if (cr6.eq) goto loc_823AB738;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x823ab73c
	goto loc_823AB73C;
loc_823AB734:
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823AB738:
	// li r11,1
	r11.s64 = 1;
loc_823AB73C:
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823ab75c
	if (cr6.eq) goto loc_823AB75C;
	// rlwinm r11,r30,0,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_823AB75C:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab7b4
	if (cr6.eq) goto loc_823AB7B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82391f88
	sub_82391F88(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x823ab7a4
	if (!cr6.eq) goto loc_823AB7A4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823d3868
	sub_823D3868(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab7b4
	if (cr6.eq) goto loc_823AB7B4;
loc_823AB7A4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82391de0
	sub_82391DE0(ctx, base);
loc_823AB7B4:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_823AB7BC:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ab7d4
	if (!cr6.eq) goto loc_823AB7D4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d3718
	sub_823D3718(ctx, base);
loc_823AB7D4:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab8e0
	if (cr6.eq) goto loc_823AB8E0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r29,r11,20
	r29.s64 = r11.s64 + 20;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823ab8e0
	if (!cr6.gt) goto loc_823AB8E0;
	// lwz r9,32448(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 32448);
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823AB800:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823ab8cc
	if (!cr6.eq) goto loc_823AB8CC;
	// clrlwi r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ab844
	if (!cr6.eq) goto loc_823AB844;
	// ori r11,r9,1
	r11.u64 = ctx.r9.u64 | 1;
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r11,32448(r22)
	PPC_STORE_U32(r22.u32 + 32448, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r9,32448(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 32448);
	// stw r3,32452(r17)
	PPC_STORE_U32(r17.u32 + 32452, ctx.r3.u32);
loc_823AB844:
	// rlwinm r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ab868
	if (!cr6.eq) goto loc_823AB868;
	// ori r11,r9,2
	r11.u64 = ctx.r9.u64 | 2;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,32448(r22)
	PPC_STORE_U32(r22.u32 + 32448, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r9,32448(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 32448);
	// stw r3,32456(r18)
	PPC_STORE_U32(r18.u32 + 32456, ctx.r3.u32);
loc_823AB868:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,32456(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 32456);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ab880
	if (!cr6.eq) goto loc_823AB880;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x823ab8bc
	goto loc_823AB8BC;
loc_823AB880:
	// lwz r10,32452(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 32452);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ab8a8
	if (!cr6.eq) goto loc_823AB8A8;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,21956(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21956);
	// stwx r11,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + r26.u32, r11.u32);
	// b 0x823ab8cc
	goto loc_823AB8CC;
loc_823AB8A8:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x823ab8cc
	if (cr6.eq) goto loc_823AB8CC;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_823AB8BC:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r26
	PPC_STORE_U32(ctx.r7.u32 + r26.u32, ctx.r10.u32);
loc_823AB8CC:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823ab800
	if (cr6.lt) goto loc_823AB800;
loc_823AB8E0:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab958
	if (cr6.eq) goto loc_823AB958;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r29,r11,20
	r29.s64 = r11.s64 + 20;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823ab958
	if (!cr6.gt) goto loc_823AB958;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823AB908:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823ab944
	if (!cr6.eq) goto loc_823AB944;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x823c1f40
	sub_823C1F40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82391ae8
	sub_82391AE8(ctx, base);
loc_823AB944:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823ab908
	if (cr6.lt) goto loc_823AB908;
loc_823AB958:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab9d0
	if (cr6.eq) goto loc_823AB9D0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r29,r11,20
	r29.s64 = r11.s64 + 20;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823ab9d0
	if (!cr6.gt) goto loc_823AB9D0;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823AB980:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r31,r30,r11
	r31.u64 = r30.u64 + r11.u64;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823ab9bc
	if (!cr6.eq) goto loc_823AB9BC;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x823c1f40
	sub_823C1F40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82391af8
	sub_82391AF8(ctx, base);
loc_823AB9BC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823ab980
	if (cr6.lt) goto loc_823AB980;
loc_823AB9D0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823aba1c
	if (cr6.eq) goto loc_823ABA1C;
	// sth r23,120(r26)
	PPC_STORE_U16(r26.u32 + 120, r23.u16);
	// rlwinm r10,r16,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aba18
	if (cr6.eq) goto loc_823ABA18;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823ABA18:
	// sth r10,122(r26)
	PPC_STORE_U16(r26.u32 + 122, ctx.r10.u16);
loc_823ABA1C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823abab4
	if (cr6.eq) goto loc_823ABAB4;
	// sth r23,120(r26)
	PPC_STORE_U16(r26.u32 + 120, r23.u16);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// sth r9,122(r26)
	PPC_STORE_U16(r26.u32 + 122, ctx.r9.u16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r24,76
	ctx.r3.s64 = r24.s64 + 76;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// ble cr6,0x823aba94
	if (!cr6.gt) goto loc_823ABA94;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823ABA94:
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
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823abab4
	if (cr0.eq) goto loc_823ABAB4;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_823ABAB4:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// addi r3,r24,76
	ctx.r3.s64 = r24.s64 + 76;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x823abaf8
	if (!cr6.gt) goto loc_823ABAF8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823ABAF8:
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
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823abb18
	if (cr0.eq) goto loc_823ABB18;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
loc_823ABB18:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823ABB1C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, xer);
	// blt cr6,0x823ab28c
	if (cr6.lt) goto loc_823AB28C;
loc_823ABB2C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823abb2c
	if (!cr0.eq) goto loc_823ABB2C;
	// lwz r8,96(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// rlwinm r31,r16,2,0,29
	r31.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// cmplw cr6,r16,r7
	cr6.compare<uint32_t>(r16.u32, ctx.r7.u32, xer);
	// blt cr6,0x823ab23c
	if (cr6.lt) goto loc_823AB23C;
loc_823ABB64:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,9920
	ctx.r3.s64 = r11.s64 + 9920;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,29820(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// addi r30,r24,148
	r30.s64 = r24.s64 + 148;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82391f88
	sub_82391F88(ctx, base);
	// lis r11,-32197
	r11.s64 = -2110062592;
	// stw r24,260(r24)
	PPC_STORE_U32(r24.u32 + 260, r24.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-22664
	r11.s64 = r11.s64 + -22664;
	// addi r3,r10,9448
	ctx.r3.s64 = ctx.r10.s64 + 9448;
	// stw r11,264(r24)
	PPC_STORE_U32(r24.u32 + 264, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// addi r3,r24,76
	ctx.r3.s64 = r24.s64 + 76;
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// ble cr6,0x823abbf4
	if (!cr6.gt) goto loc_823ABBF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823ABBF4:
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
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823abc14
	if (cr0.eq) goto loc_823ABC14;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_823ABC14:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823abc3c
	if (cr6.eq) goto loc_823ABC3C;
loc_823ABC20:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823abc20
	if (!cr0.eq) goto loc_823ABC20;
loc_823ABC3C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r25,22
	r25.s64 = 22;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r23.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r26,r11,9856
	r26.s64 = r11.s64 + 9856;
	// beq cr6,0x823abcc0
	if (cr6.eq) goto loc_823ABCC0;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// li r8,321
	ctx.r8.s64 = 321;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// rldicr r6,r23,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r23.u64, 32) & 0xFFFFFFFF00000000;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823abca4
	if (cr6.eq) goto loc_823ABCA4;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// b 0x823abca8
	goto loc_823ABCA8;
loc_823ABCA4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823ABCA8:
	// stw r3,488(r24)
	PPC_STORE_U32(r24.u32 + 488, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82715730
	sub_82715730(ctx, base);
loc_823ABCC0:
	// stw r23,304(r24)
	PPC_STORE_U32(r24.u32 + 304, r23.u32);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// lwz r11,96(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// addi r28,r24,308
	r28.s64 = r24.s64 + 308;
	// li r27,3
	r27.s64 = 3;
	// addi r31,r9,24648
	r31.s64 = ctx.r9.s64 + 24648;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lis r11,-31968
	r11.s64 = -2095054848;
	// addi r29,r11,24616
	r29.s64 = r11.s64 + 24616;
	// stw r10,292(r24)
	PPC_STORE_U32(r24.u32 + 292, ctx.r10.u32);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r30,r10,24632
	r30.s64 = ctx.r10.s64 + 24632;
loc_823ABCF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,292(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715730
	sub_82715730(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827159a8
	sub_827159A8(ctx, base);
	// lwz r10,292(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823abdb4
	if (!cr6.gt) goto loc_823ABDB4;
loc_823ABD2C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,292(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x823abd2c
	if (cr6.lt) goto loc_823ABD2C;
loc_823ABDB4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715a18
	sub_82715A18(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,60
	r28.s64 = r28.s64 + 60;
	// bne 0x823abcf0
	if (!cr0.eq) goto loc_823ABCF0;
	// lis r11,1023
	r11.s64 = 67043328;
	// lwz r31,292(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823abdf0
	if (cr6.gt) goto loc_823ABDF0;
	// rlwinm r11,r31,6,0,25
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823abdf4
	if (!cr6.gt) goto loc_823ABDF4;
loc_823ABDF0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823ABDF4:
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// li r8,344
	ctx.r8.s64 = 344;
	// rldicr r6,r23,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r23.u64, 32) & 0xFFFFFFFF00000000;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823abe30
	if (cr6.eq) goto loc_823ABE30;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// b 0x823abe34
	goto loc_823ABE34;
loc_823ABE30:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_823ABE34:
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// li r8,345
	ctx.r8.s64 = 345;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// rldicr r6,r23,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r23.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,296(r24)
	PPC_STORE_U32(r24.u32 + 296, r11.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// lwz r3,292(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6bf8
	sub_826C6BF8(ctx, base);
	// lwz r11,292(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// stw r3,300(r24)
	PPC_STORE_U32(r24.u32 + 300, ctx.r3.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823abf38
	if (!cr6.gt) goto loc_823ABF38;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_823ABE80:
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 96);
	// lwz r11,296(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 296);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r7,176
	ctx.r7.s64 = ctx.r7.s64 + 176;
	// addi r6,r10,112
	ctx.r6.s64 = ctx.r10.s64 + 112;
	// lfs f0,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f10,128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f9,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f8,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f7,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f6,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f5,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f4,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f3,156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f2,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f1,164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f0,168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// lfs f13,172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// lwz r6,300(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 300);
	// stbx r23,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, r23.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,292(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 292);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// blt cr6,0x823abe80
	if (cr6.lt) goto loc_823ABE80;
loc_823ABF38:
	// lwz r11,636(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ac078
	if (cr6.eq) goto loc_823AC078;
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lwz r3,24612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24612);
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,21540(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21540);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ac070
	if (cr6.eq) goto loc_823AC070;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-20832
	ctx.r3.s64 = r11.s64 + -20832;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ac020
	if (cr6.eq) goto loc_823AC020;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// lis r11,-31969
	r11.s64 = -2095120384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r11,-17400
	ctx.r3.s64 = r11.s64 + -17400;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823ABFD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x823abffc
	if (cr6.eq) goto loc_823ABFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823abfd8
	if (cr6.eq) goto loc_823ABFD8;
loc_823ABFFC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823ac020
	if (!cr6.eq) goto loc_823AC020;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823ac024
	goto loc_823AC024;
loc_823AC020:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823AC024:
	// lwz r11,136(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// addi r29,r24,124
	r29.s64 = r24.s64 + 124;
	// lwz r10,128(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 128);
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823ac070
	if (cr6.eq) goto loc_823AC070;
loc_823AC044:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82391de0
	sub_82391DE0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,124
	r31.s64 = r31.s64 + 124;
	// mulli r11,r11,124
	r11.s64 = r11.s64 * 124;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ac044
	if (!cr6.eq) goto loc_823AC044;
loc_823AC070:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_823AC078:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ac0a0
	if (cr6.eq) goto loc_823AC0A0;
loc_823AC084:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823ac084
	if (!cr0.eq) goto loc_823AC084;
loc_823AC0A0:
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// bl 0x823ac738
	sub_823AC738(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823accd8
	sub_823ACCD8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r9,r10,9784
	ctx.r9.s64 = ctx.r10.s64 + 9784;
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// bl 0x823ac738
	sub_823AC738(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823a2af8
	sub_823A2AF8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
}

__attribute__((alias("__imp__sub_823AC0E4"))) PPC_WEAK_FUNC(sub_823AC0E4);
PPC_FUNC_IMPL(__imp__sub_823AC0E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_823AC0E8"))) PPC_WEAK_FUNC(sub_823AC0E8);
PPC_FUNC_IMPL(__imp__sub_823AC0E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// addi r8,r9,4244
	ctx.r8.s64 = ctx.r9.s64 + 4244;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823AC154:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823ac248
	if (cr6.eq) goto loc_823AC248;
loc_823AC168:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x823ac234
	if (!cr6.eq) goto loc_823AC234;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,28(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// addi r5,r31,28
	ctx.r5.s64 = r31.s64 + 28;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8270d828
	sub_8270D828(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = r31.s64 + 40;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8270d8f8
	sub_8270D8F8(ctx, base);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270ea58
	sub_8270EA58(ctx, base);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_823AC234:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823ac168
	if (!cr6.eq) goto loc_823AC168;
loc_823AC248:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(r29.u32, 7, xer);
	// blt cr6,0x823ac154
	if (cr6.lt) goto loc_823AC154;
	// bl 0x8270d108
	sub_8270D108(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8238e630
	sub_8238E630(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_823AC264"))) PPC_WEAK_FUNC(sub_823AC264);
PPC_FUNC_IMPL(__imp__sub_823AC264) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823AC268"))) PPC_WEAK_FUNC(sub_823AC268);
PPC_FUNC_IMPL(__imp__sub_823AC268) {
	PPC_FUNC_PROLOGUE();
	// b 0x823acbd8
	sub_823ACBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AC268"))) PPC_WEAK_FUNC(sub_823AC268);
PPC_FUNC_IMPL(__imp__sub_823AC268) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823AC26C"))) PPC_WEAK_FUNC(sub_823AC26C);
PPC_FUNC_IMPL(__imp__sub_823AC26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC270"))) PPC_WEAK_FUNC(sub_823AC270);
PPC_FUNC_IMPL(__imp__sub_823AC270) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823AC270"))) PPC_WEAK_FUNC(sub_823AC270);
PPC_FUNC_IMPL(__imp__sub_823AC270) {
	PPC_FUNC_PROLOGUE();
	// b 0x823accd8
	sub_823ACCD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AC274"))) PPC_WEAK_FUNC(sub_823AC274);
PPC_FUNC_IMPL(__imp__sub_823AC274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AC278"))) PPC_WEAK_FUNC(sub_823AC278);
PPC_FUNC_IMPL(__imp__sub_823AC278) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,28(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

