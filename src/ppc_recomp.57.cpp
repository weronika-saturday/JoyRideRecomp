#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823B93F4"))) PPC_WEAK_FUNC(sub_823B93F4);
PPC_FUNC_IMPL(__imp__sub_823B93F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B93F8"))) PPC_WEAK_FUNC(sub_823B93F8);
PPC_FUNC_IMPL(__imp__sub_823B93F8) {
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
	// addi r9,r10,11296
	ctx.r9.s64 = ctx.r10.s64 + 11296;
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

__attribute__((alias("__imp__sub_823B9450"))) PPC_WEAK_FUNC(sub_823B9450);
PPC_FUNC_IMPL(__imp__sub_823B9450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9454"))) PPC_WEAK_FUNC(sub_823B9454);
PPC_FUNC_IMPL(__imp__sub_823B9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9458"))) PPC_WEAK_FUNC(sub_823B9458);
PPC_FUNC_IMPL(__imp__sub_823B9458) {
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
	// addi r9,r11,11296
	ctx.r9.s64 = r11.s64 + 11296;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823b949c
	if (!cr6.gt) goto loc_823B949C;
loc_823B9484:
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
	// bgt cr6,0x823b9484
	if (cr6.gt) goto loc_823B9484;
loc_823B949C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b9688
	sub_823B9688(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,11120
	ctx.r10.s64 = r11.s64 + 11120;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823b94d8
	if (!cr6.gt) goto loc_823B94D8;
loc_823B94C0:
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
	// bgt cr6,0x823b94c0
	if (cr6.gt) goto loc_823B94C0;
loc_823B94D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823B94E8"))) PPC_WEAK_FUNC(sub_823B94E8);
PPC_FUNC_IMPL(__imp__sub_823B94E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B94EC"))) PPC_WEAK_FUNC(sub_823B94EC);
PPC_FUNC_IMPL(__imp__sub_823B94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B94F0"))) PPC_WEAK_FUNC(sub_823B94F0);
PPC_FUNC_IMPL(__imp__sub_823B94F0) {
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
	// addi r9,r10,11308
	ctx.r9.s64 = ctx.r10.s64 + 11308;
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

__attribute__((alias("__imp__sub_823B9548"))) PPC_WEAK_FUNC(sub_823B9548);
PPC_FUNC_IMPL(__imp__sub_823B9548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B954C"))) PPC_WEAK_FUNC(sub_823B954C);
PPC_FUNC_IMPL(__imp__sub_823B954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9550"))) PPC_WEAK_FUNC(sub_823B9550);
PPC_FUNC_IMPL(__imp__sub_823B9550) {
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
	// addi r9,r11,11308
	ctx.r9.s64 = r11.s64 + 11308;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823b9594
	if (!cr6.gt) goto loc_823B9594;
loc_823B957C:
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
	// bgt cr6,0x823b957c
	if (cr6.gt) goto loc_823B957C;
loc_823B9594:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b9788
	sub_823B9788(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,11132
	ctx.r10.s64 = r11.s64 + 11132;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823b95d0
	if (!cr6.gt) goto loc_823B95D0;
loc_823B95B8:
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
	// bgt cr6,0x823b95b8
	if (cr6.gt) goto loc_823B95B8;
loc_823B95D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823B95E0"))) PPC_WEAK_FUNC(sub_823B95E0);
PPC_FUNC_IMPL(__imp__sub_823B95E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B95E4"))) PPC_WEAK_FUNC(sub_823B95E4);
PPC_FUNC_IMPL(__imp__sub_823B95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B95E8"))) PPC_WEAK_FUNC(sub_823B95E8);
PPC_FUNC_IMPL(__imp__sub_823B95E8) {
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
	// bl 0x823b9458
	sub_823B9458(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b9620
	if (cr6.eq) goto loc_823B9620;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823B9620:
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

__attribute__((alias("__imp__sub_823B9634"))) PPC_WEAK_FUNC(sub_823B9634);
PPC_FUNC_IMPL(__imp__sub_823B9634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9638"))) PPC_WEAK_FUNC(sub_823B9638);
PPC_FUNC_IMPL(__imp__sub_823B9638) {
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
	// bl 0x823b9550
	sub_823B9550(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b9670
	if (cr6.eq) goto loc_823B9670;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823B9670:
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

__attribute__((alias("__imp__sub_823B9684"))) PPC_WEAK_FUNC(sub_823B9684);
PPC_FUNC_IMPL(__imp__sub_823B9684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9688"))) PPC_WEAK_FUNC(sub_823B9688);
PPC_FUNC_IMPL(__imp__sub_823B9688) {
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
	// beq cr6,0x823b976c
	if (cr6.eq) goto loc_823B976C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b96fc
	if (!cr6.eq) goto loc_823B96FC;
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
	// beq cr6,0x823b976c
	if (cr6.eq) goto loc_823B976C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823b5b98
	sub_823B5B98(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823b976c
	goto loc_823B976C;
loc_823B96FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b93f8
	sub_823B93F8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823b9728
	if (!cr6.gt) goto loc_823B9728;
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
loc_823B9728:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c480
	sub_8254C480(ctx, base);
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
	// bl 0x823b9458
	sub_823B9458(ctx, base);
loc_823B976C:
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

__attribute__((alias("__imp__sub_823B9780"))) PPC_WEAK_FUNC(sub_823B9780);
PPC_FUNC_IMPL(__imp__sub_823B9780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9784"))) PPC_WEAK_FUNC(sub_823B9784);
PPC_FUNC_IMPL(__imp__sub_823B9784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9788"))) PPC_WEAK_FUNC(sub_823B9788);
PPC_FUNC_IMPL(__imp__sub_823B9788) {
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
	// beq cr6,0x823b986c
	if (cr6.eq) goto loc_823B986C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b97fc
	if (!cr6.eq) goto loc_823B97FC;
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
	// beq cr6,0x823b986c
	if (cr6.eq) goto loc_823B986C;
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
	// b 0x823b986c
	goto loc_823B986C;
loc_823B97FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b94f0
	sub_823B94F0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823b9828
	if (!cr6.gt) goto loc_823B9828;
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
loc_823B9828:
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
	// bl 0x823b9550
	sub_823B9550(ctx, base);
loc_823B986C:
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

__attribute__((alias("__imp__sub_823B9880"))) PPC_WEAK_FUNC(sub_823B9880);
PPC_FUNC_IMPL(__imp__sub_823B9880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9884"))) PPC_WEAK_FUNC(sub_823B9884);
PPC_FUNC_IMPL(__imp__sub_823B9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9888"))) PPC_WEAK_FUNC(sub_823B9888);
PPC_FUNC_IMPL(__imp__sub_823B9888) {
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
	// bl 0x823b7ff0
	sub_823B7FF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b98c0
	if (cr6.eq) goto loc_823B98C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823B98C0:
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

__attribute__((alias("__imp__sub_823B98D4"))) PPC_WEAK_FUNC(sub_823B98D4);
PPC_FUNC_IMPL(__imp__sub_823B98D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B98D8"))) PPC_WEAK_FUNC(sub_823B98D8);
PPC_FUNC_IMPL(__imp__sub_823B98D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x823b98f0
	if (cr6.lt) goto loc_823B98F0;
	// li r11,0
	r11.s64 = 0;
loc_823B98F0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B98F8"))) PPC_WEAK_FUNC(sub_823B98F8);
PPC_FUNC_IMPL(__imp__sub_823B98F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b9920
	if (cr6.eq) goto loc_823B9920;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_823B9920:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x823b9940
	if (cr6.gt) goto loc_823B9940;
	// li r11,0
	r11.s64 = 0;
loc_823B9940:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9948"))) PPC_WEAK_FUNC(sub_823B9948);
PPC_FUNC_IMPL(__imp__sub_823B9948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,-16
	r12.s64 = -16;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rotldi r10,r11,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 30);
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// rldicr r6,r10,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rldicr r7,r8,0,61
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rldicr r11,r5,28,35
	r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 28) & 0xFFFFFFFFF0000000;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rldicl r8,r9,62,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | r11.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B999C"))) PPC_WEAK_FUNC(sub_823B999C);
PPC_FUNC_IMPL(__imp__sub_823B999C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B99A0"))) PPC_WEAK_FUNC(sub_823B99A0);
PPC_FUNC_IMPL(__imp__sub_823B99A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B99A4"))) PPC_WEAK_FUNC(sub_823B99A4);
PPC_FUNC_IMPL(__imp__sub_823B99A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B99A8"))) PPC_WEAK_FUNC(sub_823B99A8);
PPC_FUNC_IMPL(__imp__sub_823B99A8) {
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

__attribute__((alias("__imp__sub_823B9A60"))) PPC_WEAK_FUNC(sub_823B9A60);
PPC_FUNC_IMPL(__imp__sub_823B9A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B9A64"))) PPC_WEAK_FUNC(sub_823B9A64);
PPC_FUNC_IMPL(__imp__sub_823B9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9A68"))) PPC_WEAK_FUNC(sub_823B9A68);
PPC_FUNC_IMPL(__imp__sub_823B9A68) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,1
	r11.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// slw r4,r11,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r5.u8 & 0x3F));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x823947c8
	sub_823947C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823948c8
	sub_823948C8(ctx, base);
	// stw r29,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r29.u32);
	// stw r28,640(r31)
	PPC_STORE_U32(r31.u32 + 640, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823B9AA8"))) PPC_WEAK_FUNC(sub_823B9AA8);
PPC_FUNC_IMPL(__imp__sub_823B9AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823B9AAC"))) PPC_WEAK_FUNC(sub_823B9AAC);
PPC_FUNC_IMPL(__imp__sub_823B9AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9AB0"))) PPC_WEAK_FUNC(sub_823B9AB0);
PPC_FUNC_IMPL(__imp__sub_823B9AB0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r29,0
	r29.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stb r29,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r29.u8);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,56(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,64(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,68(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,72(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,76(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,80(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,84(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r6,r7,0,21,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r6,1024
	cr6.compare<uint32_t>(ctx.r6.u32, 1024, xer);
	// bne cr6,0x823b9bbc
	if (!cr6.eq) goto loc_823B9BBC;
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r6,r11,26740
	ctx.r6.s64 = r11.s64 + 26740;
	// addi r5,r10,-932
	ctx.r5.s64 = ctx.r10.s64 + -932;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b9bbc
	if (cr6.eq) goto loc_823B9BBC;
	// li r29,1
	r29.s64 = 1;
loc_823B9BBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823B9BC8"))) PPC_WEAK_FUNC(sub_823B9BC8);
PPC_FUNC_IMPL(__imp__sub_823B9BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823B9BCC"))) PPC_WEAK_FUNC(sub_823B9BCC);
PPC_FUNC_IMPL(__imp__sub_823B9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9BD0"))) PPC_WEAK_FUNC(sub_823B9BD0);
PPC_FUNC_IMPL(__imp__sub_823B9BD0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82394830
	sub_82394830(ctx, base);
	// lwz r11,436(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 436);
	// addi r28,r27,424
	r28.s64 = r27.s64 + 424;
	// lwz r10,428(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 428);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b9c30
	if (cr6.eq) goto loc_823B9C30;
loc_823B9C04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b9c14
	if (cr6.eq) goto loc_823B9C14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_823B9C14:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b9c04
	if (!cr6.eq) goto loc_823B9C04;
loc_823B9C30:
	// lwz r11,460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 460);
	// addi r29,r27,448
	r29.s64 = r27.s64 + 448;
	// lwz r10,452(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 452);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b9c7c
	if (cr6.eq) goto loc_823B9C7C;
loc_823B9C50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b9c60
	if (cr6.eq) goto loc_823B9C60;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_823B9C60:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823b9c50
	if (!cr6.eq) goto loc_823B9C50;
loc_823B9C7C:
	// lwz r11,484(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 484);
	// addi r30,r27,472
	r30.s64 = r27.s64 + 472;
	// lwz r10,476(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 476);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823b9cc8
	if (cr6.eq) goto loc_823B9CC8;
loc_823B9C9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b9cac
	if (cr6.eq) goto loc_823B9CAC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_823B9CAC:
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
	// bne cr6,0x823b9c9c
	if (!cr6.eq) goto loc_823B9C9C;
loc_823B9CC8:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823b9cec
	if (!cr6.gt) goto loc_823B9CEC;
loc_823B9CD4:
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
	// bgt cr6,0x823b9cd4
	if (cr6.gt) goto loc_823B9CD4;
loc_823B9CEC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823b9d10
	if (!cr6.gt) goto loc_823B9D10;
loc_823B9CF8:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x823b9cf8
	if (cr6.gt) goto loc_823B9CF8;
loc_823B9D10:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823b9d34
	if (!cr6.gt) goto loc_823B9D34;
loc_823B9D1C:
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
	// bgt cr6,0x823b9d1c
	if (cr6.gt) goto loc_823B9D1C;
loc_823B9D34:
	// li r11,0
	r11.s64 = 0;
	// stw r11,640(r27)
	PPC_STORE_U32(r27.u32 + 640, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823B9D40"))) PPC_WEAK_FUNC(sub_823B9D40);
PPC_FUNC_IMPL(__imp__sub_823B9D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823B9D44"))) PPC_WEAK_FUNC(sub_823B9D44);
PPC_FUNC_IMPL(__imp__sub_823B9D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B9D48"))) PPC_WEAK_FUNC(sub_823B9D48);
PPC_FUNC_IMPL(__imp__sub_823B9D48) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31970
	r24.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b9d7c
	if (cr6.eq) goto loc_823B9D7C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// bne cr6,0x823b9d80
	if (!cr6.eq) goto loc_823B9D80;
loc_823B9D7C:
	// li r11,0
	r11.s64 = 0;
loc_823B9D80:
	// lwz r20,64(r11)
	r20.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b9d9c
	if (cr6.eq) goto loc_823B9D9C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b9da0
	if (!cr6.eq) goto loc_823B9DA0;
loc_823B9D9C:
	// li r11,0
	r11.s64 = 0;
loc_823B9DA0:
	// addi r21,r11,196
	r21.s64 = r11.s64 + 196;
	// li r31,0
	r31.s64 = 0;
loc_823B9DA8:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x823b9da8
	if (cr6.lt) goto loc_823B9DA8;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r23,r11,144
	r23.s64 = r11.s64 + 144;
	// beq cr6,0x823b9de8
	if (cr6.eq) goto loc_823B9DE8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b9dec
	if (!cr6.eq) goto loc_823B9DEC;
loc_823B9DE8:
	// li r11,0
	r11.s64 = 0;
loc_823B9DEC:
	// addi r4,r11,88
	ctx.r4.s64 = r11.s64 + 88;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,452(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 452);
	// lis r22,-31933
	r22.s64 = -2092761088;
	// addi r25,r11,10552
	r25.s64 = r11.s64 + 10552;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r11,460(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 460);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r10
	r26.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// beq cr6,0x823b9f68
	if (cr6.eq) goto loc_823B9F68;
loc_823B9E20:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r20
	cr6.compare<uint32_t>(ctx.r9.u32, r20.u32, xer);
	// bne cr6,0x823b9f5c
	if (!cr6.eq) goto loc_823B9F5C;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x823b9f5c
	if (cr6.eq) goto loc_823B9F5C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_823B9E7C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x823b9e98
	if (cr6.eq) goto loc_823B9E98;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823b9e7c
	if (!cr6.eq) goto loc_823B9E7C;
	// b 0x823b9f5c
	goto loc_823B9F5C;
loc_823B9E98:
	// lwz r29,52(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x823b9f5c
	if (cr6.lt) goto loc_823B9F5C;
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
	// addi r11,r29,20
	r11.s64 = r29.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r4,r23
	cr6.compare<uint32_t>(ctx.r4.u32, r23.u32, xer);
	// bne cr6,0x823b9f34
	if (!cr6.eq) goto loc_823B9F34;
	// lwz r4,21956(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 21956);
loc_823B9F34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
loc_823B9F5C:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// bne cr6,0x823b9e20
	if (!cr6.eq) goto loc_823B9E20;
loc_823B9F68:
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b9f84
	if (cr6.eq) goto loc_823B9F84;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b9f88
	if (!cr6.eq) goto loc_823B9F88;
loc_823B9F84:
	// li r11,0
	r11.s64 = 0;
loc_823B9F88:
	// addi r4,r11,196
	ctx.r4.s64 = r11.s64 + 196;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r11,484(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 484);
	// lwz r10,476(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 476);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// beq cr6,0x823ba0f8
	if (cr6.eq) goto loc_823BA0F8;
loc_823B9FB0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r20
	cr6.compare<uint32_t>(ctx.r9.u32, r20.u32, xer);
	// bne cr6,0x823ba0ec
	if (!cr6.eq) goto loc_823BA0EC;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x823ba0ec
	if (cr6.eq) goto loc_823BA0EC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r11,r8,60
	r11.s64 = ctx.r8.s64 * 60;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_823BA00C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x823ba028
	if (cr6.eq) goto loc_823BA028;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823ba00c
	if (!cr6.eq) goto loc_823BA00C;
	// b 0x823ba0ec
	goto loc_823BA0EC;
loc_823BA028:
	// lwz r29,52(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x823ba0ec
	if (cr6.lt) goto loc_823BA0EC;
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
	// addi r11,r29,20
	r11.s64 = r29.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r4,r23
	cr6.compare<uint32_t>(ctx.r4.u32, r23.u32, xer);
	// bne cr6,0x823ba0c4
	if (!cr6.eq) goto loc_823BA0C4;
	// lwz r4,21956(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 21956);
loc_823BA0C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
loc_823BA0EC:
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bne cr6,0x823b9fb0
	if (!cr6.eq) goto loc_823B9FB0;
loc_823BA0F8:
	// li r31,0
	r31.s64 = 0;
loc_823BA0FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x823ba0fc
	if (cr6.lt) goto loc_823BA0FC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_823BA118"))) PPC_WEAK_FUNC(sub_823BA118);
PPC_FUNC_IMPL(__imp__sub_823BA118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_823BA11C"))) PPC_WEAK_FUNC(sub_823BA11C);
PPC_FUNC_IMPL(__imp__sub_823BA11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA120"))) PPC_WEAK_FUNC(sub_823BA120);
PPC_FUNC_IMPL(__imp__sub_823BA120) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,496(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,508(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// bl 0x823b5d50
	sub_823B5D50(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ba1a0
	if (cr6.eq) goto loc_823BA1A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ba1a0
	if (cr6.eq) goto loc_823BA1A0;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,656(r31)
	PPC_STORE_U32(r31.u32 + 656, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823BA1A0:
	// lwz r10,64(0)
	ctx.r10.u64 = PPC_LOAD_U32(64);
	// li r11,0
	r11.s64 = 0;
	// stw r10,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BA1BC"))) PPC_WEAK_FUNC(sub_823BA1BC);
PPC_FUNC_IMPL(__imp__sub_823BA1BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA1C0"))) PPC_WEAK_FUNC(sub_823BA1C0);
PPC_FUNC_IMPL(__imp__sub_823BA1C0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r27,r3,512
	r27.s64 = ctx.r3.s64 + 512;
	// lwz r26,400(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mulli r11,r26,180
	r11.s64 = r26.s64 * 180;
	// lwz r10,92(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r29,80(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// bl 0x82712070
	sub_82712070(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r30,208
	r11.s64 = r30.s64 + 208;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r30,272
	r11.s64 = r30.s64 + 272;
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,11424(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11424);
	f0.f64 = double(temp.f32);
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// addi r10,r30,336
	ctx.r10.s64 = r30.s64 + 336;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// addi r9,r31,144
	ctx.r9.s64 = r31.s64 + 144;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f6,208(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f5,212(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f4,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f3,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f2,224(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f1,228(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,232(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 232);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f11,244(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f9,252(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f8,256(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f7,260(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 260);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f6,264(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f5,268(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 268);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,76(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f4,272(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 272);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,80(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f3,276(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 276);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,84(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f2,280(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,88(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f1,284(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,92(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f0,288(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 288);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f13,292(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lfs f12,296(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f11,300(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 300);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f10,304(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 304);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,112(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f9,308(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f8,312(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 312);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f7,316(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 316);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,124(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lfs f6,320(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 320);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,128(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f5,324(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 324);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,132(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f4,328(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,136(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f3,332(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 332);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,140(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f2,336(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,144(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f1,340(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 340);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,148(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f0,344(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 344);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f13,348(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f12,352(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f11,356(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 356);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f10,360(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 360);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f9,364(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 364);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,172(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f8,368(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,176(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f7,372(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 372);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,180(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f6,376(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,184(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f5,380(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 380);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,188(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f4,384(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 384);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,192(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f3,388(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 388);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,196(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f2,392(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,200(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f1,396(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 396);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,204(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,496(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 496);
	f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f13,500(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f12,504(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 504);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,216(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f11,508(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 508);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,220(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,224(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,228(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,232(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 232, temp.u32);
	// lfs f7,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,236(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f6,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,240(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// lfs f5,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,244(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f4,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,248(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// lfs f3,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,252(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f2,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,44(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 44);
	f0.f64 = double(temp.f32);
	// fneg f11,f1
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 268, temp.u32);
	// fneg f9,f2
	ctx.f9.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f11,256(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// stfs f10,260(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// addi r6,r8,-32404
	ctx.r6.s64 = ctx.r8.s64 + -32404;
	// stfs f9,264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// lfs f8,80(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,272(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 272, temp.u32);
	// lfs f7,84(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,276(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 276, temp.u32);
	// lfs f6,88(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,280(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// lfs f5,92(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,284(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,132(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,140(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,128(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-32404(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32404);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f12,136(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fadds f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f9,368(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 368, temp.u32);
	// fadds f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f8,372(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 372, temp.u32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f7,376(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 376, temp.u32);
	// fadds f6,f10,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f6,380(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 380, temp.u32);
	// lwz r11,640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ba508
	if (cr6.eq) goto loc_823BA508;
	// addi r4,r11,1664
	ctx.r4.s64 = r11.s64 + 1664;
	// b 0x823ba510
	goto loc_823BA510;
loc_823BA508:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-32256
	ctx.r4.s64 = r11.s64 + -32256;
loc_823BA510:
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x823b59f0
	sub_823B59F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cac50
	sub_823CAC50(ctx, base);
	// lfs f12,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,592(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 592, temp.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f11,68(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,3384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3384);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,72(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : f0.f64;
	// fdivs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// stfs f6,596(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 596, temp.u32);
	// lfs f5,108(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,600(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 600, temp.u32);
	// lfs f4,112(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - f0.f64));
	// fsel f0,f1,f2,f0
	f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f2.f64 : f0.f64;
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f13,604(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 604, temp.u32);
	// lfs f12,92(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,608(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 608, temp.u32);
	// lfs f11,96(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,612(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 612, temp.u32);
	// lfs f10,100(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,616(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 616, temp.u32);
	// lfs f9,104(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,620(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 620, temp.u32);
	// lfs f8,132(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,624(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 624, temp.u32);
	// lfs f7,136(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,628(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 628, temp.u32);
	// lfs f6,140(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,632(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 632, temp.u32);
	// lfs f5,144(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,636(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 636, temp.u32);
	// bl 0x82712088
	sub_82712088(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d7d8
	sub_8270D7D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d8a8
	sub_8270D8A8(ctx, base);
	// lwz r11,640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ba5fc
	if (cr6.eq) goto loc_823BA5FC;
	// lwz r4,1892(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1892);
	// b 0x823ba620
	goto loc_823BA620;
loc_823BA5FC:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ba618
	if (cr6.eq) goto loc_823BA618;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823ba61c
	if (!cr6.eq) goto loc_823BA61C;
loc_823BA618:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823BA61C:
	// addi r4,r11,196
	ctx.r4.s64 = r11.s64 + 196;
loc_823BA620:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825d7bf8
	sub_825D7BF8(ctx, base);
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// lwz r31,660(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 660);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ba7fc
	if (cr6.eq) goto loc_823BA7FC;
loc_823BA66C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f10,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lfs f9,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f8,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f7,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f6,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f5,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f4,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f3,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f2,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,60(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f1,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,64(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f11,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f9,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f8,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f7,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 * ctx.f10.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f0,f10
	f0.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f7,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f7,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f7,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x823b0ef8
	sub_823B0EF8(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823ba66c
	if (!cr6.eq) goto loc_823BA66C;
loc_823BA7FC:
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ba818
	if (cr6.eq) goto loc_823BA818;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823ba81c
	if (!cr6.eq) goto loc_823BA81C;
loc_823BA818:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_823BA81C:
	// lwz r10,460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 460);
	// lwz r11,452(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 452);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,64(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mr r31,r11
	r31.u64 = r11.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x823ba87c
	if (cr6.eq) goto loc_823BA87C;
loc_823BA83C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x823ba870
	if (!cr6.eq) goto loc_823BA870;
	// lwz r25,12(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823b99a8
	sub_823B99A8(ctx, base);
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 116);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,112(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA870:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x823ba83c
	if (!cr6.eq) goto loc_823BA83C;
loc_823BA87C:
	// lwz r10,484(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 484);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	r31.u64 = r11.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x823ba8d8
	if (cr6.eq) goto loc_823BA8D8;
loc_823BA898:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bne cr6,0x823ba8cc
	if (!cr6.eq) goto loc_823BA8CC;
	// lwz r25,12(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823b99a8
	sub_823B99A8(ctx, base);
	// lwz r11,116(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 116);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,112(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BA8CC:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x823ba898
	if (!cr6.eq) goto loc_823BA898;
loc_823BA8D8:
	// lwz r31,660(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 660);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823ba8fc
	if (cr6.eq) goto loc_823BA8FC;
loc_823BA8E4:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823b0ef8
	sub_823B0EF8(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823ba8e4
	if (!cr6.eq) goto loc_823BA8E4;
loc_823BA8FC:
	// stw r26,660(r30)
	PPC_STORE_U32(r30.u32 + 660, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d7d8
	sub_8270D7D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d8a8
	sub_8270D8A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825d7b10
	sub_825D7B10(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_823BA93C"))) PPC_WEAK_FUNC(sub_823BA93C);
PPC_FUNC_IMPL(__imp__sub_823BA93C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823BA940"))) PPC_WEAK_FUNC(sub_823BA940);
PPC_FUNC_IMPL(__imp__sub_823BA940) {
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
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x828eaaf0
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,544
	r25.s64 = ctx.r3.s64 + 544;
	// lwz r26,656(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,336
	ctx.r4.s64 = ctx.r3.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82388f78
	sub_82388F78(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// bl 0x823c7398
	sub_823C7398(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,224(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	f0.f64 = double(temp.f32);
	// lfs f28,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// ble cr6,0x823ba998
	if (!cr6.gt) goto loc_823BA998;
	// fmr f27,f0
	f27.f64 = f0.f64;
	// b 0x823ba99c
	goto loc_823BA99C;
loc_823BA998:
	// lfs f27,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 644);
	f27.f64 = double(temp.f32);
loc_823BA99C:
	// li r11,0
	r11.s64 = 0;
	// lwz r29,428(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// lfs f26,652(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 652);
	f26.f64 = double(temp.f32);
	// addi r28,r31,424
	r28.s64 = r31.s64 + 424;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// rotlwi r11,r29,0
	r11.u64 = __builtin_rotateleft32(r29.u32, 0);
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x823bab1c
	if (cr6.eq) goto loc_823BAB1C;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r27,-32255
	r27.s64 = -2113863680;
	// lfs f30,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f30.f64 = double(temp.f32);
	// lfs f29,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f29.f64 = double(temp.f32);
loc_823BA9DC:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823bab00
	if (cr6.eq) goto loc_823BAB00;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lfs f0,11452(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 11452);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f13,612(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,616(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 616);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r11,r10,24,8,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f1,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f4,608(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 608);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f1,f9
	f0.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f2,f29
	ctx.f8.f64 = double(float(ctx.f2.f64 * f29.f64));
	// fadds f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f6,f10,f29
	ctx.f6.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmuls f7,f0,f29
	ctx.f7.f64 = double(float(f0.f64 * f29.f64));
	// fmuls f3,f13,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f5,f9,f29
	ctx.f5.f64 = double(float(ctx.f9.f64 * f29.f64));
	// fmadds f2,f12,f7,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f1,f11,f6,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fmadds f31,f5,f4,f1
	f31.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f1.f64));
	// beq cr6,0x823baa84
	if (cr6.eq) goto loc_823BAA84;
	// fcmpu cr6,f31,f27
	cr6.compare(f31.f64, f27.f64);
	// bgt cr6,0x823bab00
	if (cr6.gt) goto loc_823BAB00;
loc_823BAA84:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823baa98
	if (cr6.eq) goto loc_823BAA98;
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f26.f64);
	// bgt cr6,0x823bab00
	if (cr6.gt) goto loc_823BAB00;
loc_823BAA98:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823890f8
	sub_823890F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bab00
	if (cr6.eq) goto loc_823BAB00;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,92(r11)
	PPC_STORE_U32(r11.u32 + 92, r26.u32);
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823bab00
	if (cr6.eq) goto loc_823BAB00;
	// lfs f0,644(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 644);
	f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// lfs f12,648(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 648);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f10,f28
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : f28.f64;
	// fsubs f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 - f30.f64));
	// fsel f7,f8,f30,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? f30.f64 : ctx.f9.f64;
	// stfs f7,20(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// fcmpu cr6,f7,f30
	cr6.compare(ctx.f7.f64, f30.f64);
	// bge cr6,0x823bab00
	if (!cr6.lt) goto loc_823BAB00;
	// lwz r11,660(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r30.u32);
loc_823BAB00:
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
	// bne cr6,0x823ba9dc
	if (!cr6.eq) goto loc_823BA9DC;
loc_823BAB1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab3c
}

__attribute__((alias("__imp__sub_823BAB28"))) PPC_WEAK_FUNC(sub_823BAB28);
PPC_FUNC_IMPL(__imp__sub_823BAB28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823BAB2C"))) PPC_WEAK_FUNC(sub_823BAB2C);
PPC_FUNC_IMPL(__imp__sub_823BAB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAB30"))) PPC_WEAK_FUNC(sub_823BAB30);
PPC_FUNC_IMPL(__imp__sub_823BAB30) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,176
	r30.s64 = ctx.r3.s64 + 176;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82393e38
	sub_82393E38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,11512
	ctx.r10.s64 = r11.s64 + 11512;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82394f00
	sub_82394F00(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,10856
	ctx.r7.s64 = ctx.r9.s64 + 10856;
	// li r30,0
	r30.s64 = 0;
	// addi r6,r8,11484
	ctx.r6.s64 = ctx.r8.s64 + 11484;
	// stw r7,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r7.u32);
	// stw r29,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r29.u32);
	// addi r29,r31,424
	r29.s64 = r31.s64 + 424;
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(r31.u32 + 440, r30.u32);
	// stw r6,424(r31)
	PPC_STORE_U32(r31.u32 + 424, ctx.r6.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,440(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// addi r26,r4,11496
	r26.s64 = ctx.r4.s64 + 11496;
	// stw r3,440(r31)
	PPC_STORE_U32(r31.u32 + 440, ctx.r3.u32);
	// addi r28,r31,448
	r28.s64 = r31.s64 + 448;
	// stw r26,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r26.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(r31.u32 + 464, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,464(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// addi r27,r31,472
	r27.s64 = r31.s64 + 472;
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// stw r10,464(r31)
	PPC_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(r31.u32 + 476, r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(r31.u32 + 484, r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(r31.u32 + 480, r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(r31.u32 + 488, r30.u32);
	// stw r26,472(r31)
	PPC_STORE_U32(r31.u32 + 472, r26.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 488);
	// addi r26,r31,512
	r26.s64 = r31.s64 + 512;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r8,488(r31)
	PPC_STORE_U32(r31.u32 + 488, ctx.r8.u32);
	// bl 0x82711ff8
	sub_82711FF8(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = r31.s64 + 544;
	// bl 0x82388f88
	sub_82388F88(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r30,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stb r30,420(r31)
	PPC_STORE_U8(r31.u32 + 420, r30.u8);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,-24324(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24324);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-32404
	ctx.r10.s64 = r11.s64 + -32404;
	// lfs f12,4028(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4028);
	ctx.f12.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f0,11504(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11504);
	f0.f64 = double(temp.f32);
	// li r4,640
	ctx.r4.s64 = 640;
	// stfs f0,644(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 644, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stfs f13,648(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 648, temp.u32);
	// stfs f12,652(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 652, temp.u32);
	// lfs f0,-32404(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32404);
	f0.f64 = double(temp.f32);
	// stfs f0,496(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 496, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,500(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,504(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,508(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// bl 0x82712108
	sub_82712108(ctx, base);
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmplwi cr6,r9,10000
	cr6.compare<uint32_t>(ctx.r9.u32, 10000, xer);
	// bge cr6,0x823bacac
	if (!cr6.lt) goto loc_823BACAC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BACAC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r9,20000
	cr6.compare<uint32_t>(ctx.r9.u32, 20000, xer);
	// bge cr6,0x823bacdc
	if (!cr6.lt) goto loc_823BACDC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BACDC:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stw r10,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r9,3000
	cr6.compare<uint32_t>(ctx.r9.u32, 3000, xer);
	// bge cr6,0x823bad0c
	if (!cr6.lt) goto loc_823BAD0C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,3000
	ctx.r4.s64 = 3000;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BAD0C:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BAD20"))) PPC_WEAK_FUNC(sub_823BAD20);
PPC_FUNC_IMPL(__imp__sub_823BAD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823BAD24"))) PPC_WEAK_FUNC(sub_823BAD24);
PPC_FUNC_IMPL(__imp__sub_823BAD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAD28"))) PPC_WEAK_FUNC(sub_823BAD28);
PPC_FUNC_IMPL(__imp__sub_823BAD28) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r3,512
	r30.s64 = ctx.r3.s64 + 512;
	// addi r10,r11,11512
	ctx.r10.s64 = r11.s64 + 11512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82712010
	sub_82712010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82712098
	sub_82712098(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x823bb620
	sub_823BB620(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = r31.s64 + 448;
	// bl 0x823bb620
	sub_823BB620(ctx, base);
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x823bb528
	sub_823BB528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82393eb8
	sub_82393EB8(ctx, base);
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

__attribute__((alias("__imp__sub_823BAD94"))) PPC_WEAK_FUNC(sub_823BAD94);
PPC_FUNC_IMPL(__imp__sub_823BAD94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BAD98"))) PPC_WEAK_FUNC(sub_823BAD98);
PPC_FUNC_IMPL(__imp__sub_823BAD98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lwz r5,416(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 416);
	// bl 0x823ac5b0
	sub_823AC5B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823baf60
	if (cr6.eq) goto loc_823BAF60;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r10,11564
	r25.s64 = ctx.r10.s64 + 11564;
	// li r29,22
	r29.s64 = 22;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// li r8,224
	ctx.r8.s64 = 224;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rldicr r6,r27,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823bae1c
	if (cr6.eq) goto loc_823BAE1C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823b9ab0
	sub_823B9AB0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x823bae20
	goto loc_823BAE20;
loc_823BAE1C:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_823BAE20:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823bae44
	if (cr6.eq) goto loc_823BAE44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823bae48
	if (!cr6.eq) goto loc_823BAE48;
loc_823BAE44:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823BAE48:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r22,424
	ctx.r3.s64 = r22.s64 + 424;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823baf60
	if (cr6.eq) goto loc_823BAF60;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r23,1
	r23.s64 = 1;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// ld r29,104(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r28,96(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_823BAE98:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r8,234
	ctx.r8.s64 = 234;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rldicr r6,r27,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823baf18
	if (cr6.eq) goto loc_823BAF18;
	// li r12,-16
	r12.s64 = -16;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rotldi r10,r11,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 30);
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// rldicr r6,r10,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rldicr r8,r9,0,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rldicr r4,r5,28,35
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 28) & 0xFFFFFFFFF0000000;
	// std r4,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r4.u64);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rldicl r9,r10,62,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// b 0x823baf1c
	goto loc_823BAF1C;
loc_823BAF18:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_823BAF1C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x823baf38
	if (cr6.lt) goto loc_823BAF38;
	// addi r3,r22,472
	ctx.r3.s64 = r22.s64 + 472;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// b 0x823baf44
	goto loc_823BAF44;
loc_823BAF38:
	// addi r3,r22,448
	ctx.r3.s64 = r22.s64 + 448;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// stb r23,420(r22)
	PPC_STORE_U8(r22.u32 + 420, r23.u8);
loc_823BAF44:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x823bae98
	if (!cr6.eq) goto loc_823BAE98;
loc_823BAF60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_823BAF64"))) PPC_WEAK_FUNC(sub_823BAF64);
PPC_FUNC_IMPL(__imp__sub_823BAF64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_823BAF68"))) PPC_WEAK_FUNC(sub_823BAF68);
PPC_FUNC_IMPL(__imp__sub_823BAF68) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// lwz r5,416(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 416);
	// bl 0x823ac5b0
	sub_823AC5B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823bb18c
	if (cr6.eq) goto loc_823BB18C;
	// lwz r11,436(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 436);
	// addi r10,r29,424
	ctx.r10.s64 = r29.s64 + 424;
	// lwz r8,428(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x823bafd0
	if (cr6.eq) goto loc_823BAFD0;
loc_823BAFB4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// beq cr6,0x823bafd0
	if (cr6.eq) goto loc_823BAFD0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x823bafb4
	if (!cr6.eq) goto loc_823BAFB4;
loc_823BAFD0:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r7,r9,r11
	ctx.r7.s64 = r11.s64 - ctx.r9.s64;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	r11.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x823bb004
	if (!cr6.lt) goto loc_823BB004;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,-4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r7,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_823BB004:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r31,r29,448
	r31.s64 = r29.s64 + 448;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// lwz r10,452(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 452);
	// lwz r9,460(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 460);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x823bb0c8
	if (cr6.eq) goto loc_823BB0C8;
loc_823BB034:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x823bb0ac
	if (!cr6.eq) goto loc_823BB0AC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823bb054
	if (cr6.eq) goto loc_823BB054;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
loc_823BB054:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r30
	ctx.r9.s64 = r30.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x823bb09c
	if (!cr6.lt) goto loc_823BB09C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BB074:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x823bb074
	if (cr6.lt) goto loc_823BB074;
loc_823BB09C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x823bb0b0
	goto loc_823BB0B0;
loc_823BB0AC:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_823BB0B0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x823bb034
	if (!cr6.eq) goto loc_823BB034;
loc_823BB0C8:
	// lwz r11,484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 484);
	// addi r31,r29,472
	r31.s64 = r29.s64 + 472;
	// lwz r10,476(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 476);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bb17c
	if (cr6.eq) goto loc_823BB17C;
loc_823BB0E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x823bb160
	if (!cr6.eq) goto loc_823BB160;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823bb108
	if (cr6.eq) goto loc_823BB108;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
loc_823BB108:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r30
	ctx.r9.s64 = r30.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x823bb150
	if (!cr6.lt) goto loc_823BB150;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823BB128:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x823bb128
	if (cr6.lt) goto loc_823BB128;
loc_823BB150:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x823bb164
	goto loc_823BB164;
loc_823BB160:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_823BB164:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x823bb0e8
	if (!cr6.eq) goto loc_823BB0E8;
loc_823BB17C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823bb18c
	if (cr6.eq) goto loc_823BB18C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_823BB18C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823BB190"))) PPC_WEAK_FUNC(sub_823BB190);
PPC_FUNC_IMPL(__imp__sub_823BB190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823BB194"))) PPC_WEAK_FUNC(sub_823BB194);
PPC_FUNC_IMPL(__imp__sub_823BB194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB198"))) PPC_WEAK_FUNC(sub_823BB198);
PPC_FUNC_IMPL(__imp__sub_823BB198) {
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
	// lbz r10,420(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 420);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-31934
	r30.s64 = -2092826624;
	// addi r31,r11,20544
	r31.s64 = r11.s64 + 20544;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823bb224
	if (cr6.eq) goto loc_823BB224;
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bb1f4
	if (!cr6.eq) goto loc_823BB1F4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_823BB1F4:
	// lwz r11,460(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 460);
	// lis r9,-32196
	ctx.r9.s64 = -2109997056;
	// lwz r10,452(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 452);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r6,r9,-26408
	ctx.r6.s64 = ctx.r9.s64 + -26408;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// bl 0x823bb9a8
	sub_823BB9A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,420(r29)
	PPC_STORE_U8(r29.u32 + 420, ctx.r7.u8);
loc_823BB224:
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bb258
	if (!cr6.eq) goto loc_823BB258;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_823BB258:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ba940
	sub_823BA940(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bb294
	if (!cr6.eq) goto loc_823BB294;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_823BB294:
	// lwz r11,484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 484);
	// lis r9,-32196
	ctx.r9.s64 = -2109997056;
	// lwz r10,476(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 476);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r6,r9,-26376
	ctx.r6.s64 = ctx.r9.s64 + -26376;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// bl 0x823bb9a8
	sub_823BB9A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823BB2C0"))) PPC_WEAK_FUNC(sub_823BB2C0);
PPC_FUNC_IMPL(__imp__sub_823BB2C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823BB2C4"))) PPC_WEAK_FUNC(sub_823BB2C4);
PPC_FUNC_IMPL(__imp__sub_823BB2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB2C8"))) PPC_WEAK_FUNC(sub_823BB2C8);
PPC_FUNC_IMPL(__imp__sub_823BB2C8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823BB2C8"))) PPC_WEAK_FUNC(sub_823BB2C8);
PPC_FUNC_IMPL(__imp__sub_823BB2C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bb758
	sub_823BB758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB2CC"))) PPC_WEAK_FUNC(sub_823BB2CC);
PPC_FUNC_IMPL(__imp__sub_823BB2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB2D0"))) PPC_WEAK_FUNC(sub_823BB2D0);
PPC_FUNC_IMPL(__imp__sub_823BB2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bb858
	sub_823BB858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB2D0"))) PPC_WEAK_FUNC(sub_823BB2D0);
PPC_FUNC_IMPL(__imp__sub_823BB2D0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823BB2D4"))) PPC_WEAK_FUNC(sub_823BB2D4);
PPC_FUNC_IMPL(__imp__sub_823BB2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB2D8"))) PPC_WEAK_FUNC(sub_823BB2D8);
PPC_FUNC_IMPL(__imp__sub_823BB2D8) {
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
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x823bb35c
	if (!cr6.lt) goto loc_823BB35C;
loc_823BB30C:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = r27.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb334
	if (cr6.eq) goto loc_823BB334;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_823BB334:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
	// blt cr6,0x823bb30c
	if (cr6.lt) goto loc_823BB30C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
loc_823BB35C:
	// bne cr6,0x823bb378
	if (!cr6.eq) goto loc_823BB378;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
loc_823BB378:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(r26.s32, r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x823bb3d4
	if (!cr6.lt) goto loc_823BB3D4;
loc_823BB390:
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mtctr r27
	ctr.u64 = r27.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb3d4
	if (cr6.eq) goto loc_823BB3D4;
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// mr r28,r31
	r28.u64 = r31.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r31.s64 = temp.s64;
	// blt cr6,0x823bb390
	if (cr6.lt) goto loc_823BB390;
loc_823BB3D4:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BB3E4"))) PPC_WEAK_FUNC(sub_823BB3E4);
PPC_FUNC_IMPL(__imp__sub_823BB3E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823BB3E8"))) PPC_WEAK_FUNC(sub_823BB3E8);
PPC_FUNC_IMPL(__imp__sub_823BB3E8) {
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
	// addi r9,r11,11460
	ctx.r9.s64 = r11.s64 + 11460;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bb42c
	if (!cr6.gt) goto loc_823BB42C;
loc_823BB414:
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
	// bgt cr6,0x823bb414
	if (cr6.gt) goto loc_823BB414;
loc_823BB42C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb444
	if (cr6.eq) goto loc_823BB444;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BB444:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BB454"))) PPC_WEAK_FUNC(sub_823BB454);
PPC_FUNC_IMPL(__imp__sub_823BB454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB458"))) PPC_WEAK_FUNC(sub_823BB458);
PPC_FUNC_IMPL(__imp__sub_823BB458) {
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
	// addi r9,r11,11472
	ctx.r9.s64 = r11.s64 + 11472;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bb49c
	if (!cr6.gt) goto loc_823BB49C;
loc_823BB484:
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
	// bgt cr6,0x823bb484
	if (cr6.gt) goto loc_823BB484;
loc_823BB49C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb4b4
	if (cr6.eq) goto loc_823BB4B4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BB4B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BB4C4"))) PPC_WEAK_FUNC(sub_823BB4C4);
PPC_FUNC_IMPL(__imp__sub_823BB4C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB4C8"))) PPC_WEAK_FUNC(sub_823BB4C8);
PPC_FUNC_IMPL(__imp__sub_823BB4C8) {
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
	// addi r9,r10,11484
	ctx.r9.s64 = ctx.r10.s64 + 11484;
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

__attribute__((alias("__imp__sub_823BB520"))) PPC_WEAK_FUNC(sub_823BB520);
PPC_FUNC_IMPL(__imp__sub_823BB520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB524"))) PPC_WEAK_FUNC(sub_823BB524);
PPC_FUNC_IMPL(__imp__sub_823BB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB528"))) PPC_WEAK_FUNC(sub_823BB528);
PPC_FUNC_IMPL(__imp__sub_823BB528) {
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
	// addi r9,r11,11484
	ctx.r9.s64 = r11.s64 + 11484;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bb56c
	if (!cr6.gt) goto loc_823BB56C;
loc_823BB554:
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
	// bgt cr6,0x823bb554
	if (cr6.gt) goto loc_823BB554;
loc_823BB56C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bb758
	sub_823BB758(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,11460
	ctx.r10.s64 = r11.s64 + 11460;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823bb5a8
	if (!cr6.gt) goto loc_823BB5A8;
loc_823BB590:
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
	// bgt cr6,0x823bb590
	if (cr6.gt) goto loc_823BB590;
loc_823BB5A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BB5B8"))) PPC_WEAK_FUNC(sub_823BB5B8);
PPC_FUNC_IMPL(__imp__sub_823BB5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB5BC"))) PPC_WEAK_FUNC(sub_823BB5BC);
PPC_FUNC_IMPL(__imp__sub_823BB5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB5C0"))) PPC_WEAK_FUNC(sub_823BB5C0);
PPC_FUNC_IMPL(__imp__sub_823BB5C0) {
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
	// addi r9,r10,11496
	ctx.r9.s64 = ctx.r10.s64 + 11496;
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

__attribute__((alias("__imp__sub_823BB618"))) PPC_WEAK_FUNC(sub_823BB618);
PPC_FUNC_IMPL(__imp__sub_823BB618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB61C"))) PPC_WEAK_FUNC(sub_823BB61C);
PPC_FUNC_IMPL(__imp__sub_823BB61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB620"))) PPC_WEAK_FUNC(sub_823BB620);
PPC_FUNC_IMPL(__imp__sub_823BB620) {
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
	// addi r9,r11,11496
	ctx.r9.s64 = r11.s64 + 11496;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bb664
	if (!cr6.gt) goto loc_823BB664;
loc_823BB64C:
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
	// bgt cr6,0x823bb64c
	if (cr6.gt) goto loc_823BB64C;
loc_823BB664:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bb858
	sub_823BB858(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,11472
	ctx.r10.s64 = r11.s64 + 11472;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823bb6a0
	if (!cr6.gt) goto loc_823BB6A0;
loc_823BB688:
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
	// bgt cr6,0x823bb688
	if (cr6.gt) goto loc_823BB688;
loc_823BB6A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BB6B0"))) PPC_WEAK_FUNC(sub_823BB6B0);
PPC_FUNC_IMPL(__imp__sub_823BB6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB6B4"))) PPC_WEAK_FUNC(sub_823BB6B4);
PPC_FUNC_IMPL(__imp__sub_823BB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB6B8"))) PPC_WEAK_FUNC(sub_823BB6B8);
PPC_FUNC_IMPL(__imp__sub_823BB6B8) {
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
	// bl 0x823bb528
	sub_823BB528(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb6f0
	if (cr6.eq) goto loc_823BB6F0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BB6F0:
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

__attribute__((alias("__imp__sub_823BB704"))) PPC_WEAK_FUNC(sub_823BB704);
PPC_FUNC_IMPL(__imp__sub_823BB704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB708"))) PPC_WEAK_FUNC(sub_823BB708);
PPC_FUNC_IMPL(__imp__sub_823BB708) {
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
	// bl 0x823bb620
	sub_823BB620(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb740
	if (cr6.eq) goto loc_823BB740;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BB740:
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

__attribute__((alias("__imp__sub_823BB754"))) PPC_WEAK_FUNC(sub_823BB754);
PPC_FUNC_IMPL(__imp__sub_823BB754) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB758"))) PPC_WEAK_FUNC(sub_823BB758);
PPC_FUNC_IMPL(__imp__sub_823BB758) {
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
	// beq cr6,0x823bb83c
	if (cr6.eq) goto loc_823BB83C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823bb7cc
	if (!cr6.eq) goto loc_823BB7CC;
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
	// beq cr6,0x823bb83c
	if (cr6.eq) goto loc_823BB83C;
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
	// b 0x823bb83c
	goto loc_823BB83C;
loc_823BB7CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bb4c8
	sub_823BB4C8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823bb7f8
	if (!cr6.gt) goto loc_823BB7F8;
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
loc_823BB7F8:
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
	// bl 0x823bb528
	sub_823BB528(ctx, base);
loc_823BB83C:
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

__attribute__((alias("__imp__sub_823BB850"))) PPC_WEAK_FUNC(sub_823BB850);
PPC_FUNC_IMPL(__imp__sub_823BB850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB854"))) PPC_WEAK_FUNC(sub_823BB854);
PPC_FUNC_IMPL(__imp__sub_823BB854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB858"))) PPC_WEAK_FUNC(sub_823BB858);
PPC_FUNC_IMPL(__imp__sub_823BB858) {
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
	// beq cr6,0x823bb93c
	if (cr6.eq) goto loc_823BB93C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823bb8cc
	if (!cr6.eq) goto loc_823BB8CC;
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
	// beq cr6,0x823bb93c
	if (cr6.eq) goto loc_823BB93C;
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
	// b 0x823bb93c
	goto loc_823BB93C;
loc_823BB8CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bb5c0
	sub_823BB5C0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823bb8f8
	if (!cr6.gt) goto loc_823BB8F8;
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
loc_823BB8F8:
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
	// bl 0x823bb620
	sub_823BB620(ctx, base);
loc_823BB93C:
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

__attribute__((alias("__imp__sub_823BB950"))) PPC_WEAK_FUNC(sub_823BB950);
PPC_FUNC_IMPL(__imp__sub_823BB950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB954"))) PPC_WEAK_FUNC(sub_823BB954);
PPC_FUNC_IMPL(__imp__sub_823BB954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB958"))) PPC_WEAK_FUNC(sub_823BB958);
PPC_FUNC_IMPL(__imp__sub_823BB958) {
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
	// bl 0x823bad28
	sub_823BAD28(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bb990
	if (cr6.eq) goto loc_823BB990;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BB990:
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

__attribute__((alias("__imp__sub_823BB9A4"))) PPC_WEAK_FUNC(sub_823BB9A4);
PPC_FUNC_IMPL(__imp__sub_823BB9A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB9A8"))) PPC_WEAK_FUNC(sub_823BB9A8);
PPC_FUNC_IMPL(__imp__sub_823BB9A8) {
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
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x823bba60
	if (!cr6.gt) goto loc_823BBA60;
loc_823BB9D4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823bba84
	if (!cr6.gt) goto loc_823BBA84;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b5f28
	sub_822B5F28(ctx, base);
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
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bge cr6,0x823bba40
	if (!cr6.lt) goto loc_823BBA40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bb9a8
	sub_823BB9A8(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x823bba50
	goto loc_823BBA50;
loc_823BBA40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823bb9a8
	sub_823BB9A8(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_823BBA50:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x823bb9d4
	if (cr6.gt) goto loc_823BB9D4;
loc_823BBA60:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823bba7c
	if (!cr6.gt) goto loc_823BBA7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b5c48
	sub_822B5C48(ctx, base);
loc_823BBA7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_823BBA84:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x823bba60
	if (!cr6.gt) goto loc_823BBA60;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823bbaac
	if (!cr6.gt) goto loc_823BBAAC;
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
	// bl 0x822b5b58
	sub_822B5B58(ctx, base);
loc_823BBAAC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b6198
	sub_822B6198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BBAC0"))) PPC_WEAK_FUNC(sub_823BBAC0);
PPC_FUNC_IMPL(__imp__sub_823BBAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823BBAC4"))) PPC_WEAK_FUNC(sub_823BBAC4);
PPC_FUNC_IMPL(__imp__sub_823BBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBAC8"))) PPC_WEAK_FUNC(sub_823BBAC8);
PPC_FUNC_IMPL(__imp__sub_823BBAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,-16
	r12.s64 = -16;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotldi r10,r11,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 30);
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// rldicr r4,r10,2,61
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rldicr r6,r7,0,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// or r11,r6,r4
	r11.u64 = ctx.r6.u64 | ctx.r4.u64;
	// rldicr r10,r11,28,35
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 28) & 0xFFFFFFFFF0000000;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// lwz r9,28(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// rldicl r8,r9,62,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBB1C"))) PPC_WEAK_FUNC(sub_823BBB1C);
PPC_FUNC_IMPL(__imp__sub_823BBB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBB20"))) PPC_WEAK_FUNC(sub_823BBB20);
PPC_FUNC_IMPL(__imp__sub_823BBB20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBB2C"))) PPC_WEAK_FUNC(sub_823BBB2C);
PPC_FUNC_IMPL(__imp__sub_823BBB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBB30"))) PPC_WEAK_FUNC(sub_823BBB30);
PPC_FUNC_IMPL(__imp__sub_823BBB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x823bbb48
	if (cr6.lt) goto loc_823BBB48;
	// li r11,0
	r11.s64 = 0;
loc_823BBB48:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBB50"))) PPC_WEAK_FUNC(sub_823BBB50);
PPC_FUNC_IMPL(__imp__sub_823BBB50) {
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

__attribute__((alias("__imp__sub_823BBB64"))) PPC_WEAK_FUNC(sub_823BBB64);
PPC_FUNC_IMPL(__imp__sub_823BBB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBB68"))) PPC_WEAK_FUNC(sub_823BBB68);
PPC_FUNC_IMPL(__imp__sub_823BBB68) {
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
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// li r4,1
	ctx.r4.s64 = 1;
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
	// li r4,1
	ctx.r4.s64 = 1;
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

__attribute__((alias("__imp__sub_823BBC18"))) PPC_WEAK_FUNC(sub_823BBC18);
PPC_FUNC_IMPL(__imp__sub_823BBC18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBC1C"))) PPC_WEAK_FUNC(sub_823BBC1C);
PPC_FUNC_IMPL(__imp__sub_823BBC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBC20"))) PPC_WEAK_FUNC(sub_823BBC20);
PPC_FUNC_IMPL(__imp__sub_823BBC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f12,-9652(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9652);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,11812(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11812);
	f0.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f13,4436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4436);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,4580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4580);
	ctx.f11.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// lfs f10,-13388(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13388);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,11808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11808);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lfs f8,3640(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3640);
	ctx.f8.f64 = double(temp.f32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// lfs f7,11804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11804);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8892);
	ctx.f6.f64 = double(temp.f32);
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
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
}

__attribute__((alias("__imp__sub_823BBCA4"))) PPC_WEAK_FUNC(sub_823BBCA4);
PPC_FUNC_IMPL(__imp__sub_823BBCA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBCA8"))) PPC_WEAK_FUNC(sub_823BBCA8);
PPC_FUNC_IMPL(__imp__sub_823BBCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// bl 0x828eaaec
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1916(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1916);
	// lfs f31,476(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	f31.f64 = double(temp.f32);
	// lfs f26,480(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	f26.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// beq cr6,0x823bbd04
	if (cr6.eq) goto loc_823BBD04;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x823bbd90
	if (!cr6.gt) goto loc_823BBD90;
	// addi r11,r3,756
	r11.s64 = ctx.r3.s64 + 756;
loc_823BBCE8:
	// lfs f0,1168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 1168);
	f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsu f0,4(r11)
	temp.f32 = float(f0.f64);
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// lwz r9,720(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x823bbce8
	if (cr6.lt) goto loc_823BBCE8;
	// b 0x823bbd90
	goto loc_823BBD90;
loc_823BBD04:
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// li r30,1
	r30.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// ble cr6,0x823bbd90
	if (!cr6.gt) goto loc_823BBD90;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fdivs f28,f26,f31
	f28.f64 = double(float(f26.f64 / f31.f64));
	// fsubs f27,f26,f31
	f27.f64 = double(float(f26.f64 - f31.f64));
	// addi r29,r31,756
	r29.s64 = r31.s64 + 756;
	// lfs f30,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f30.f64 = double(temp.f32);
	// fdivs f29,f30,f0
	f29.f64 = double(float(f30.f64 / f0.f64));
loc_823BBD3C:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f25,f12,f29
	f25.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmr f2,f25
	ctx.f2.f64 = f25.f64;
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,484(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 484);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(f30.f64 - ctx.f10.f64));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmadds f8,f27,f25,f31
	ctx.f8.f64 = double(float(f27.f64 * f25.f64 + f31.f64));
	// fmuls f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f5,f8,f10,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfsu f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x823bbd3c
	if (cr6.lt) goto loc_823BBD3C;
loc_823BBD90:
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// stfs f31,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 756, temp.u32);
	// addi r11,r11,189
	r11.s64 = r11.s64 + 189;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f26,r10,r31
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab38
}

__attribute__((alias("__imp__sub_823BBDB0"))) PPC_WEAK_FUNC(sub_823BBDB0);
PPC_FUNC_IMPL(__imp__sub_823BBDB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823BBDB4"))) PPC_WEAK_FUNC(sub_823BBDB4);
PPC_FUNC_IMPL(__imp__sub_823BBDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBDB8"))) PPC_WEAK_FUNC(sub_823BBDB8);
PPC_FUNC_IMPL(__imp__sub_823BBDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eaaf4
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f30,724(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f0.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f31,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f31.f64 = double(temp.f32);
	// fmuls f29,f13,f31
	f29.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f28,f11,f31
	f28.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fadds f1,f29,f31
	ctx.f1.f64 = double(float(f29.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(ctx.f1.f64));
	// fmuls f30,f30,f31
	f30.f64 = double(float(f30.f64 * f31.f64));
	// fadds f1,f28,f31
	ctx.f1.f64 = double(float(f28.f64 + f31.f64));
	// bl 0x828eaf98
	sub_828EAF98(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f27,f29
	ctx.f8.f64 = double(float(f27.f64 - f29.f64));
	// fsubs f7,f10,f28
	ctx.f7.f64 = double(float(ctx.f10.f64 - f28.f64));
	// fdivs f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 / f30.f64));
	// fdivs f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 / f30.f64));
	// fadds f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f3,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f2,52(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x828eab40
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BBE54"))) PPC_WEAK_FUNC(sub_823BBE54);
PPC_FUNC_IMPL(__imp__sub_823BBE54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBE58"))) PPC_WEAK_FUNC(sub_823BBE58);
PPC_FUNC_IMPL(__imp__sub_823BBE58) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addi r27,r3,420
	r27.s64 = ctx.r3.s64 + 420;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,752(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
	// extsw r31,r9
	r31.s64 = ctx.r9.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bbf74
	if (cr6.eq) goto loc_823BBF74;
	// li r23,0
	r23.s64 = 0;
	// li r24,1
	r24.s64 = 1;
loc_823BBE9C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r23
	r30.u64 = r23.u64;
	// stw r23,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r23.u32);
	// lwz r10,720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823bbf50
	if (!cr6.gt) goto loc_823BBF50;
	// addi r28,r29,1376
	r28.s64 = r29.s64 + 1376;
loc_823BBEBC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823bbf3c
	if (cr6.eq) goto loc_823BBF3C;
	// rlwinm r10,r11,24,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x8;
	// rlwinm r11,r11,24,8,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823bbef4
	if (cr6.eq) goto loc_823BBEF4;
	// lwz r10,1908(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 1908);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x823bbf3c
	if (!cr6.lt) goto loc_823BBF3C;
loc_823BBEF4:
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bbf0c
	if (cr6.eq) goto loc_823BBF0C;
	// lwz r11,1912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1912);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x823bbf3c
	if (!cr6.lt) goto loc_823BBF3C;
loc_823BBF0C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823890f8
	sub_823890F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bbf3c
	if (cr6.eq) goto loc_823BBF3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// slw r10,r24,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r24.u32 << (r30.u8 & 0x3F));
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r25,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, r25.u32);
loc_823BBF3C:
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,96
	r28.s64 = r28.s64 + 96;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823bbebc
	if (cr6.lt) goto loc_823BBEBC;
loc_823BBF50:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x823bbe9c
	if (!cr6.eq) goto loc_823BBE9C;
loc_823BBF74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_823BBF78"))) PPC_WEAK_FUNC(sub_823BBF78);
PPC_FUNC_IMPL(__imp__sub_823BBF78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_823BBF7C"))) PPC_WEAK_FUNC(sub_823BBF7C);
PPC_FUNC_IMPL(__imp__sub_823BBF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBF80"))) PPC_WEAK_FUNC(sub_823BBF80);
PPC_FUNC_IMPL(__imp__sub_823BBF80) {
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
	// bl 0x82394830
	sub_82394830(ctx, base);
	// lwz r10,432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// addi r11,r31,420
	r11.s64 = r31.s64 + 420;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823bbfc0
	if (!cr6.gt) goto loc_823BBFC0;
loc_823BBFA8:
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
	// bgt cr6,0x823bbfa8
	if (cr6.gt) goto loc_823BBFA8;
loc_823BBFC0:
	// lwz r10,456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 456);
	// addi r11,r31,444
	r11.s64 = r31.s64 + 444;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823bbfe8
	if (!cr6.gt) goto loc_823BBFE8;
loc_823BBFD0:
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
	// bgt cr6,0x823bbfd0
	if (cr6.gt) goto loc_823BBFD0;
loc_823BBFE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BBFF8"))) PPC_WEAK_FUNC(sub_823BBFF8);
PPC_FUNC_IMPL(__imp__sub_823BBFF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBFFC"))) PPC_WEAK_FUNC(sub_823BBFFC);
PPC_FUNC_IMPL(__imp__sub_823BBFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC000"))) PPC_WEAK_FUNC(sub_823BC000);
PPC_FUNC_IMPL(__imp__sub_823BC000) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,496(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stfs f13,500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,508(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// bl 0x82388a08
	sub_82388A08(ctx, base);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r31,528
	ctx.r4.s64 = r31.s64 + 528;
	// addi r5,r31,592
	ctx.r5.s64 = r31.s64 + 592;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f10,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// stfs f4,524(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 524, temp.u32);
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fmadds f3,f8,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f2,f7,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f13,512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 512, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f12,516(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 516, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f11,520(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 520, temp.u32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,528(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 528, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,532(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 532, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,536(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 536, temp.u32);
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,540(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 540, temp.u32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,544(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 544, temp.u32);
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,548(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 548, temp.u32);
	// lfs f4,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,552(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 552, temp.u32);
	// lfs f3,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,556(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 556, temp.u32);
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,560(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 560, temp.u32);
	// lfs f1,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,564(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 564, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,568(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 568, temp.u32);
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 572, temp.u32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,576(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 576, temp.u32);
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,580(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 580, temp.u32);
	// lfs f10,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,584(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 584, temp.u32);
	// lfs f9,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,588(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 588, temp.u32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,592(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 592, temp.u32);
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,596(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 596, temp.u32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,600(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 600, temp.u32);
	// lfs f5,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,604(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 604, temp.u32);
	// lfs f4,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,608(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 608, temp.u32);
	// lfs f3,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,612(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 612, temp.u32);
	// lfs f2,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,616(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 616, temp.u32);
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,620(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 620, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,624(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 624, temp.u32);
	// lfs f13,36(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,628(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 628, temp.u32);
	// lfs f12,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,632(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 632, temp.u32);
	// lfs f11,44(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,636(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 636, temp.u32);
	// lfs f10,48(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,640(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 640, temp.u32);
	// lfs f9,52(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,644(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 644, temp.u32);
	// lfs f8,56(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,648(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 648, temp.u32);
	// lfs f7,60(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,652(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 652, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,656(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 656, temp.u32);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,656
	r11.s64 = r31.s64 + 656;
	// stfs f5,660(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 660, temp.u32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,664(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 664, temp.u32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,668(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 668, temp.u32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,672(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 672, temp.u32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,676(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 676, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,680(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 680, temp.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,684(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 684, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,688(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,692(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 692, temp.u32);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,696(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 696, temp.u32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,700(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 700, temp.u32);
	// lfs f8,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,704(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 704, temp.u32);
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,708(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 708, temp.u32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,712(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 712, temp.u32);
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,716(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 716, temp.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823bc250
	if (cr6.eq) goto loc_823BC250;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823bc254
	if (!cr6.eq) goto loc_823BC254;
loc_823BC250:
	// li r11,0
	r11.s64 = 0;
loc_823BC254:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r10,13904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 13904);
	// stw r10,720(r31)
	PPC_STORE_U32(r31.u32 + 720, ctx.r10.u32);
	// lwz r9,13900(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 13900);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,724(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 724, temp.u32);
	// lfs f11,13908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13908);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,728(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 728, temp.u32);
	// lfs f10,13912(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13912);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,732(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 732, temp.u32);
	// lfs f9,13916(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13916);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,736(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 736, temp.u32);
	// lfs f8,13920(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13920);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,740(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 740, temp.u32);
	// lfs f7,13924(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13924);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,744(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 744, temp.u32);
	// lfs f6,13928(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13928);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,748(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 748, temp.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823bc2d4
	if (cr6.eq) goto loc_823BC2D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823bc2d4
	if (cr6.eq) goto loc_823BC2D4;
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r11,752(r31)
	PPC_STORE_U32(r31.u32 + 752, r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e946c
	return;
loc_823BC2D4:
	// lwz r10,64(0)
	ctx.r10.u64 = PPC_LOAD_U32(64);
	// li r11,0
	r11.s64 = 0;
	// stw r10,752(r31)
	PPC_STORE_U32(r31.u32 + 752, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_823BC2E4"))) PPC_WEAK_FUNC(sub_823BC2E4);
PPC_FUNC_IMPL(__imp__sub_823BC2E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823BC2E8"))) PPC_WEAK_FUNC(sub_823BC2E8);
PPC_FUNC_IMPL(__imp__sub_823BC2E8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r18,-31934
	r18.s64 = -2092826624;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r25,r11,20544
	r25.s64 = r11.s64 + 20544;
	// lwz r11,20548(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bc33c
	if (!cr6.eq) goto loc_823BC33C;
	// li r10,255
	ctx.r10.s64 = 255;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r10,3(r25)
	PPC_STORE_U8(r25.u32 + 3, ctx.r10.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stw r11,20548(r18)
	PPC_STORE_U32(r18.u32 + 20548, r11.u32);
	// stb r9,2(r25)
	PPC_STORE_U8(r25.u32 + 2, ctx.r9.u8);
	// stb r8,1(r25)
	PPC_STORE_U8(r25.u32 + 1, ctx.r8.u8);
	// stb r10,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r10.u8);
loc_823BC33C:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bc36c
	if (!cr6.eq) goto loc_823BC36C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r18)
	PPC_STORE_U32(r18.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r25)
	PPC_STORE_U8(r25.u32 + 3, ctx.r10.u8);
	// stb r9,2(r25)
	PPC_STORE_U8(r25.u32 + 2, ctx.r9.u8);
	// stb r11,1(r25)
	PPC_STORE_U8(r25.u32 + 1, r11.u8);
	// stb r10,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r10.u8);
loc_823BC36C:
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r24,0
	r24.s64 = 0;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823bc390
	if (cr6.eq) goto loc_823BC390;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823bc394
	if (!cr6.eq) goto loc_823BC394;
loc_823BC390:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823BC394:
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x8238ac88
	sub_8238AC88(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823bc3b8
	if (cr6.eq) goto loc_823BC3B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823bc3bc
	if (!cr6.eq) goto loc_823BC3BC;
loc_823BC3B8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823BC3BC:
	// lwz r10,720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823bc720
	if (!cr6.gt) goto loc_823BC720;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r22,r11,14040
	r22.s64 = r11.s64 + 14040;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r27,r29,444
	r27.s64 = r29.s64 + 444;
	// addi r28,r29,1872
	r28.s64 = r29.s64 + 1872;
	// lfs f31,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// addi r23,r29,1896
	r23.s64 = r29.s64 + 1896;
	// addi r30,r29,1016
	r30.s64 = r29.s64 + 1016;
	// li r19,1
	r19.s64 = 1;
	// lis r20,-32255
	r20.s64 = -2113863680;
	// addi r21,r11,22584
	r21.s64 = r11.s64 + 22584;
loc_823BC3F8:
	// lwz r11,20548(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bc42c
	if (!cr6.eq) goto loc_823BC42C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r18)
	PPC_STORE_U32(r18.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r25)
	PPC_STORE_U8(r25.u32 + 3, ctx.r10.u8);
	// stb r9,2(r25)
	PPC_STORE_U8(r25.u32 + 2, ctx.r9.u8);
	// stb r11,1(r25)
	PPC_STORE_U8(r25.u32 + 1, r11.u8);
	// stb r10,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r10.u8);
loc_823BC42C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82712070
	sub_82712070(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lfs f0,11656(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + 11656);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f6,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f9,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,60(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f8,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,76(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f4,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,80(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stfs f3,84(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// addi r11,r31,144
	r11.s64 = r31.s64 + 144;
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,88(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,92(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f10,112(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f9,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f8,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f7,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,124(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lfs f6,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,128(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,132(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f4,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,136(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f3,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,140(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f2,-24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,144(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f1,-20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,148(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f0,-16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f13,-12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f12,-8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lfs f11,-4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,164(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,172(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,176(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,180(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,184(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,188(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f4,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,192(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f3,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,196(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,200(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f1,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,204(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// bl 0x82712088
	sub_82712088(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8270f518
	sub_8270F518(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d7d8
	sub_8270D7D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d8a8
	sub_8270D8A8(ctx, base);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// slw r26,r19,r24
	r26.u64 = r24.u8 & 0x20 ? 0 : (r19.u32 << (r24.u8 & 0x3F));
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,448(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 448);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x823bc6e8
	if (cr6.eq) goto loc_823BC6E8;
loc_823BC688:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,424(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 424);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// and r5,r6,r26
	ctx.r5.u64 = ctx.r6.u64 & r26.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823bc6cc
	if (cr6.eq) goto loc_823BC6CC;
	// lwz r17,12(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823bbb68
	sub_823BBB68(ctx, base);
	// lwz r11,116(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,112(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BC6CC:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x823bc688
	if (!cr6.eq) goto loc_823BC688;
loc_823BC6E8:
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d7d8
	sub_8270D7D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8270d8a8
	sub_8270D8A8(ctx, base);
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r22,r22,1136
	r22.s64 = r22.s64 + 1136;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x823bc3f8
	if (cr6.lt) goto loc_823BC3F8;
loc_823BC720:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
}

__attribute__((alias("__imp__sub_823BC728"))) PPC_WEAK_FUNC(sub_823BC728);
PPC_FUNC_IMPL(__imp__sub_823BC728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_823BC72C"))) PPC_WEAK_FUNC(sub_823BC72C);
PPC_FUNC_IMPL(__imp__sub_823BC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC730"))) PPC_WEAK_FUNC(sub_823BC730);
PPC_FUNC_IMPL(__imp__sub_823BC730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eaac0
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r30,r3,592
	r30.s64 = ctx.r3.s64 + 592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r10,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r10.u32);
	// bl 0x82388470
	sub_82388470(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82388470
	sub_82388470(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r31,656
	ctx.r3.s64 = r31.s64 + 656;
	// lfs f30,364(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	f30.f64 = double(temp.f32);
	// lfs f31,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	f31.f64 = double(temp.f32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82388610
	sub_82388610(ctx, base);
	// lwz r9,720(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x823bd21c
	if (!cr6.gt) goto loc_823BD21C;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lis r26,-32255
	r26.s64 = -2113863680;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fdivs f31,f1,f31
	f31.f64 = double(float(ctx.f1.f64 / f31.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f2,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x823bc7d0
	goto loc_823BC7D0;
loc_823BC7C8:
	// lfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	f31.f64 = double(temp.f32);
	// lfs f30,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f30.f64 = double(temp.f32);
loc_823BC7D0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823bc7dc
	if (cr6.eq) goto loc_823BC7DC;
	// lfs f2,492(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 492);
	ctx.f2.f64 = double(temp.f32);
loc_823BC7DC:
	// addi r11,r28,189
	r11.s64 = r28.s64 + 189;
	// lfs f29,468(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	f29.f64 = double(temp.f32);
	// addi r10,r28,190
	ctx.r10.s64 = r28.s64 + 190;
	// lfs f28,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	f28.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f27,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	f27.f64 = double(temp.f32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f26,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	f26.f64 = double(temp.f32);
	// lfs f25,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	f25.f64 = double(temp.f32);
	// lfs f24,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	f24.f64 = double(temp.f32);
	// lfs f22,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	f22.f64 = double(temp.f32);
	// lfsx f0,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 + f30.f64));
	// lfsx f12,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f30
	f0.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f21,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	f21.f64 = double(temp.f32);
	// lfs f20,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	f20.f64 = double(temp.f32);
	// lfs f19,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	f19.f64 = double(temp.f32);
	// lfs f18,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	f18.f64 = double(temp.f32);
	// lfs f30,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	f30.f64 = double(temp.f32);
	// lfs f8,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f17,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	f17.f64 = double(temp.f32);
	// fsubs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f13,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f23,f0,f31
	f23.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	f0.f64 = double(temp.f32);
	// lfs f14,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	f14.f64 = double(temp.f32);
	// lfs f10,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// stfd f11,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f11.u64);
	// fmuls f31,f12,f31
	f31.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f12,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f15,f1,f23
	f15.f64 = double(float(ctx.f1.f64 - f23.f64));
	// stfs f0,524(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, f0.u64);
	// fmuls f11,f11,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 * f23.f64));
	// stfs f13,540(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// fmuls f0,f10,f23
	f0.f64 = double(float(ctx.f10.f64 * f23.f64));
	// stfd f13,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f13.u64);
	// fmuls f13,f9,f23
	ctx.f13.f64 = double(float(ctx.f9.f64 * f23.f64));
	// stfs f12,556(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 556, temp.u32);
	// stfd f12,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.f12.u64);
	// fmuls f12,f8,f23
	ctx.f12.f64 = double(float(ctx.f8.f64 * f23.f64));
	// stfs f14,572(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 572, temp.u32);
	// fmuls f14,f7,f23
	f14.f64 = double(float(ctx.f7.f64 * f23.f64));
	// lfs f3,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f3.f64 = double(temp.f32);
	// lfs f16,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	f16.f64 = double(temp.f32);
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmuls f29,f29,f31
	f29.f64 = double(float(f29.f64 * f31.f64));
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f29,f28,f31
	f29.f64 = double(float(f28.f64 * f31.f64));
	// stfs f29,232(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f28,f27,f31
	f28.f64 = double(float(f27.f64 * f31.f64));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f27,f26,f31
	f27.f64 = double(float(f26.f64 * f31.f64));
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmuls f30,f30,f31
	f30.f64 = double(float(f30.f64 * f31.f64));
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f14,224(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fmuls f30,f6,f31
	f30.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmuls f29,f5,f31
	f29.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmuls f26,f25,f1
	f26.f64 = double(float(f25.f64 * ctx.f1.f64));
	// fmuls f25,f24,f1
	f25.f64 = double(float(f24.f64 * ctx.f1.f64));
	// fmuls f24,f22,f1
	f24.f64 = double(float(f22.f64 * ctx.f1.f64));
	// fmuls f22,f21,f1
	f22.f64 = double(float(f21.f64 * ctx.f1.f64));
	// fmuls f21,f20,f1
	f21.f64 = double(float(f20.f64 * ctx.f1.f64));
	// fmuls f20,f19,f1
	f20.f64 = double(float(f19.f64 * ctx.f1.f64));
	// fmuls f19,f18,f1
	f19.f64 = double(float(f18.f64 * ctx.f1.f64));
	// fmuls f18,f17,f1
	f18.f64 = double(float(f17.f64 * ctx.f1.f64));
	// fmuls f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// fmuls f17,f15,f4
	f17.f64 = double(float(f15.f64 * ctx.f4.f64));
	// lfd f0,200(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rlwinm r11,r28,6,0,25
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// stfs f0,588(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 588, temp.u32);
	// fmuls f14,f15,f3
	f14.f64 = double(float(f15.f64 * ctx.f3.f64));
	// lfs f0,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	f0.f64 = double(temp.f32);
	// fmuls f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// add r27,r11,r31
	r27.u64 = r11.u64 + r31.u64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f0,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	f0.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfd f13,184(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f13,604(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// fmuls f5,f5,f23
	ctx.f5.f64 = double(float(ctx.f5.f64 * f23.f64));
	// lfs f13,800(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f25,f7
	ctx.f7.f64 = double(float(f25.f64 + ctx.f7.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f2,f30
	ctx.f2.f64 = double(float(ctx.f2.f64 + f30.f64));
	// lfd f11,216(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fadds f30,f24,f29
	f30.f64 = double(float(f24.f64 + f29.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f0,816(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 816);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f8,f26,f8
	ctx.f8.f64 = double(float(f26.f64 + ctx.f8.f64));
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f16,f15,f16
	f16.f64 = double(float(f15.f64 * f16.f64));
	// lfs f31,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	f31.f64 = double(temp.f32);
	// fmuls f6,f6,f23
	ctx.f6.f64 = double(float(ctx.f6.f64 * f23.f64));
	// fadds f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// lfs f10,468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f23
	ctx.f10.f64 = double(float(ctx.f10.f64 * f23.f64));
	// lfs f29,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	f29.f64 = double(temp.f32);
	// fadds f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// lfs f9,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f9.f64 = double(temp.f32);
	// lfs f24,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	f24.f64 = double(temp.f32);
	// fmuls f31,f31,f15
	f31.f64 = double(float(f31.f64 * f15.f64));
	// lfs f12,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f29,f29,f15
	f29.f64 = double(float(f29.f64 * f15.f64));
	// lfs f5,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * f23.f64));
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfs f4,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f23
	ctx.f4.f64 = double(float(ctx.f4.f64 * f23.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f10,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f5,f23
	ctx.f5.f64 = double(float(ctx.f5.f64 * f23.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f9,f9,f15
	ctx.f9.f64 = double(float(ctx.f9.f64 * f15.f64));
	// lfs f25,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f25.f64 = double(temp.f32);
	// fmuls f0,f0,f3
	f0.f64 = double(float(f0.f64 * ctx.f3.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f25,f25,f15
	f25.f64 = double(float(f25.f64 * f15.f64));
	// lfs f0,820(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 820);
	f0.f64 = double(temp.f32);
	// fmuls f24,f24,f15
	f24.f64 = double(float(f24.f64 * f15.f64));
	// lfs f26,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	f26.f64 = double(temp.f32);
	// fmuls f23,f10,f23
	f23.f64 = double(float(ctx.f10.f64 * f23.f64));
	// lfs f13,824(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 824);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r27,800
	r30.s64 = r27.s64 + 800;
	// lfs f4,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f26,f15
	f26.f64 = double(float(f26.f64 * f15.f64));
	// stfs f25,236(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmuls f25,f0,f3
	f25.f64 = double(float(f0.f64 * ctx.f3.f64));
	// stfs f31,244(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f16,248(r1)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmuls f4,f4,f15
	ctx.f4.f64 = double(float(ctx.f4.f64 * f15.f64));
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f31,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	f31.f64 = double(temp.f32);
	// lfs f16,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	f16.f64 = double(temp.f32);
	// lfs f29,804(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 804);
	f29.f64 = double(temp.f32);
	// lfs f9,808(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 808);
	ctx.f9.f64 = double(temp.f32);
	// lfs f24,832(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 832);
	f24.f64 = double(temp.f32);
	// lfs f12,836(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 836);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,840(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 840);
	ctx.f10.f64 = double(temp.f32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f31,f31,f15
	f31.f64 = double(float(f31.f64 * f15.f64));
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f16,f16,f15
	f16.f64 = double(float(f16.f64 * f15.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f5,f11,f5,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmr f10,f24
	ctx.f10.f64 = f24.f64;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f4,852(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 852);
	ctx.f4.f64 = double(temp.f32);
	// lfs f31,856(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 856);
	f31.f64 = double(temp.f32);
	// stfs f7,516(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// lfs f7,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f31,f21,f7
	f31.f64 = double(float(f21.f64 + ctx.f7.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfd f12,256(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f24,f1,f5
	ctx.f4.f64 = double(float(f24.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f23,176(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f0,f19,f28
	f0.f64 = double(float(f19.f64 + f28.f64));
	// lfs f23,848(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 848);
	f23.f64 = double(temp.f32);
	// fadds f28,f14,f7
	f28.f64 = double(float(f14.f64 + ctx.f7.f64));
	// stfs f12,620(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// fmadds f12,f11,f29,f25
	ctx.f12.f64 = double(float(ctx.f11.f64 * f29.f64 + f25.f64));
	// stfs f2,520(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// fmadds f11,f11,f9,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f23,156(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f7,f23
	ctx.f7.f64 = f23.f64;
	// stfs f24,228(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lfs f23,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f23.f64 = double(temp.f32);
	// fadds f3,f18,f27
	ctx.f3.f64 = double(float(f18.f64 + f27.f64));
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f24,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	f24.f64 = double(temp.f32);
	// fadds f2,f22,f2
	ctx.f2.f64 = double(float(f22.f64 + ctx.f2.f64));
	// fadds f24,f23,f24
	f24.f64 = double(float(f23.f64 + f24.f64));
	// lfs f22,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f22.f64 = double(temp.f32);
	// lfs f23,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f23.f64 = double(temp.f32);
	// fadds f23,f22,f23
	f23.f64 = double(float(f22.f64 + f23.f64));
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f2,532(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// lfs f22,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f22.f64 = double(temp.f32);
	// fadds f13,f26,f6
	ctx.f13.f64 = double(float(f26.f64 + ctx.f6.f64));
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f2,f22,f2
	ctx.f2.f64 = double(float(f22.f64 + ctx.f2.f64));
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stfs f8,512(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// fmadds f12,f9,f1,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f12.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// stfs f31,536(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// fmadds f1,f8,f1,f11
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f11.f64));
	// lfs f22,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f22.f64 = double(temp.f32);
	// lfs f31,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f31.f64 = double(temp.f32);
	// stfs f30,528(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// fadds f30,f20,f6
	f30.f64 = double(float(f20.f64 + ctx.f6.f64));
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f29,f17,f5
	f29.f64 = double(float(f17.f64 + ctx.f5.f64));
	// lfs f6,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// fadds f31,f22,f31
	f31.f64 = double(float(f22.f64 + f31.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f25,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	f25.f64 = double(temp.f32);
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f27,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	f27.f64 = double(temp.f32);
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(f25.f64 + ctx.f11.f64));
	// lfs f26,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	f26.f64 = double(temp.f32);
	// fadds f27,f27,f6
	f27.f64 = double(float(f27.f64 + ctx.f6.f64));
	// stfs f30,544(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// fadds f26,f26,f5
	f26.f64 = double(float(f26.f64 + ctx.f5.f64));
	// lfs f30,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f30.f64 = double(temp.f32);
	// lfs f22,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	f22.f64 = double(temp.f32);
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// fadds f30,f22,f30
	f30.f64 = double(float(f22.f64 + f30.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f25,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	f25.f64 = double(temp.f32);
	// stfs f0,548(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// lfs f22,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f22.f64 = double(temp.f32);
	// fadds f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f3,552(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// fadds f0,f16,f22
	f0.f64 = double(float(f16.f64 + f22.f64));
	// stfs f29,560(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// fadds f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f28,564(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// fadds f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f27,568(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f2,600(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// stfs f31,608(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// addi r8,r1,504
	ctx.r8.s64 = ctx.r1.s64 + 504;
	// stfs f30,612(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// addi r6,r1,516
	ctx.r6.s64 = ctx.r1.s64 + 516;
	// stfs f1,504(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// lfs f27,11772(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 11772);
	f27.f64 = double(temp.f32);
	// lfs f31,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f31.f64 = double(temp.f32);
	// lfs f28,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f28.f64 = double(temp.f32);
	// lfs f1,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// lfs f2,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// stfs f26,576(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stfs f11,580(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stfs f13,584(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stfs f25,508(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// stfs f24,592(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// stfs f23,596(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// stfs f0,616(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stfs f4,496(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f3,500(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
loc_823BCC30:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * f29.f64));
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f26,f8,f0
	f26.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// fmadds f12,f13,f30,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64 + ctx.f12.f64));
	// fmadds f11,f9,f0,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f28,f13,f26
	f0.f64 = double(float(f28.f64 * ctx.f13.f64 + f26.f64));
	// fmadds f13,f2,f3,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmadds f12,f1,f3,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f11,f31,f3,f0
	ctx.f11.f64 = double(float(f31.f64 * ctx.f3.f64 + f0.f64));
	// fadds f0,f13,f7
	f0.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f3,f11,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// beq cr6,0x823bcd2c
	if (cr6.eq) goto loc_823BCD2C;
	// addi r11,r1,496
	r11.s64 = ctx.r1.s64 + 496;
loc_823BCC80:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f26,f12,f0
	f26.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f25,f11,f13
	f25.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f26,f26,f26
	f26.f64 = double(float(f26.f64 * f26.f64));
	// fmadds f26,f25,f25,f26
	f26.f64 = double(float(f25.f64 * f25.f64 + f26.f64));
	// fcmpu cr6,f26,f27
	cr6.compare(f26.f64, f27.f64);
	// ble cr6,0x823bcd2c
	if (!cr6.gt) goto loc_823BCD2C;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x823bcccc
	if (cr6.gt) goto loc_823BCCCC;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x823bccb8
	if (!cr6.eq) goto loc_823BCCB8;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823bcccc
	if (cr6.gt) goto loc_823BCCCC;
loc_823BCCB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x823bcc80
	if (cr6.lt) goto loc_823BCC80;
	// b 0x823bcd2c
	goto loc_823BCD2C;
loc_823BCCCC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823bcd04
	if (!cr6.gt) goto loc_823BCD04;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r11,r8,36
	r11.s64 = ctx.r8.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823BCCE0:
	// lfs f12,-44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -28, temp.u32);
	// lfs f11,-40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + -24, temp.u32);
	// lfs f12,-36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -20, temp.u32);
	// lfs f11,-32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,-16(r11)
	temp.f32 = float(ctx.f11.f64);
	ea = -16 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x823bcce0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BCCE0;
loc_823BCD04:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,496
	r11.s64 = ctx.r1.s64 + 496;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_823BCD2C:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x823bcd54
	if (!cr6.eq) goto loc_823BCD54;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_823BCD54:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bne 0x823bcc30
	if (!cr0.eq) goto loc_823BCC30;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x823bef78
	sub_823BEF78(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// ble cr6,0x823bcda0
	if (!cr6.gt) goto loc_823BCDA0;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r27,992
	ctx.r4.s64 = r27.s64 + 992;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,1376
	ctx.r3.s64 = r11.s64 + 1376;
	// bl 0x82388f78
	sub_82388F78(ctx, base);
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823bd20c
	goto loc_823BD20C;
loc_823BCDA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82388a08
	sub_82388A08(ctx, base);
	// lfs f0,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	f0.f64 = double(temp.f32);
	// lfs f13,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// lfs f11,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// blt cr6,0x823bcf50
	if (cr6.lt) goto loc_823BCF50;
	// addi r11,r1,620
	r11.s64 = ctx.r1.s64 + 620;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_823BCDF4:
	// stfs f2,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f27,f2,f10
	f27.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f31.f64 = double(temp.f32);
	// lfs f30,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f6
	f29.f64 = double(float(f30.f64 * ctx.f6.f64));
	// fmuls f28,f30,f7
	f28.f64 = double(float(f30.f64 * ctx.f7.f64));
	// fmuls f30,f30,f8
	f30.f64 = double(float(f30.f64 * ctx.f8.f64));
	// fmadds f29,f1,f3,f29
	f29.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + f29.f64));
	// fmadds f28,f1,f4,f28
	f28.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + f28.f64));
	// fmadds f1,f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + f30.f64));
	// fmadds f30,f2,f9,f29
	f30.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + f29.f64));
	// fmadds f29,f2,f10,f28
	f29.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + f28.f64));
	// fmadds f1,f2,f11,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f30,f30,f12
	f30.f64 = double(float(f30.f64 + ctx.f12.f64));
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fmuls f28,f2,f9
	f28.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fadds f30,f29,f13
	f30.f64 = double(float(f29.f64 + ctx.f13.f64));
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f31,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f31.f64 = double(temp.f32);
	// lfs f30,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f30.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f28,f1,f3,f28
	f28.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + f28.f64));
	// fmuls f29,f29,f11
	f29.f64 = double(float(f29.f64 * ctx.f11.f64));
	// fmadds f27,f1,f4,f27
	f27.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + f27.f64));
	// fmadds f1,f1,f5,f29
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + f29.f64));
	// fmadds f29,f31,f6,f28
	f29.f64 = double(float(f31.f64 * ctx.f6.f64 + f28.f64));
	// fmadds f28,f31,f7,f27
	f28.f64 = double(float(f31.f64 * ctx.f7.f64 + f27.f64));
	// fmuls f27,f2,f10
	f27.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f1,f31,f8,f1
	ctx.f1.f64 = double(float(f31.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fadds f31,f29,f12
	f31.f64 = double(float(f29.f64 + ctx.f12.f64));
	// stfs f31,20(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fadds f31,f28,f13
	f31.f64 = double(float(f28.f64 + ctx.f13.f64));
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// fmuls f28,f2,f9
	f28.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f1,28(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f30,32(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f31,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f31.f64 = double(temp.f32);
	// fmuls f29,f29,f11
	f29.f64 = double(float(f29.f64 * ctx.f11.f64));
	// lfs f30,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f30.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f28,f1,f3,f28
	f28.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + f28.f64));
	// fmadds f27,f1,f4,f27
	f27.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + f27.f64));
	// fmadds f1,f1,f5,f29
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + f29.f64));
	// fmadds f29,f31,f6,f28
	f29.f64 = double(float(f31.f64 * ctx.f6.f64 + f28.f64));
	// fmadds f28,f31,f7,f27
	f28.f64 = double(float(f31.f64 * ctx.f7.f64 + f27.f64));
	// fmadds f1,f31,f8,f1
	ctx.f1.f64 = double(float(f31.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fadds f31,f29,f12
	f31.f64 = double(float(f29.f64 + ctx.f12.f64));
	// stfs f31,36(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// fmuls f29,f2,f9
	f29.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fadds f31,f28,f13
	f31.f64 = double(float(f28.f64 + ctx.f13.f64));
	// stfs f31,40(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// stfs f30,48(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// fmuls f28,f2,f10
	f28.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f31.f64 = double(temp.f32);
	// lfs f1,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f29,f1,f3,f29
	f29.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + f29.f64));
	// fmuls f30,f30,f11
	f30.f64 = double(float(f30.f64 * ctx.f11.f64));
	// lfs f27,64(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f27.f64 = double(temp.f32);
	// fmadds f28,f1,f4,f28
	f28.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + f28.f64));
	// fmadds f1,f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + f30.f64));
	// fmadds f30,f31,f6,f29
	f30.f64 = double(float(f31.f64 * ctx.f6.f64 + f29.f64));
	// fmadds f29,f31,f7,f28
	f29.f64 = double(float(f31.f64 * ctx.f7.f64 + f28.f64));
	// fmadds f1,f31,f8,f1
	ctx.f1.f64 = double(float(f31.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fadds f31,f30,f12
	f31.f64 = double(float(f30.f64 + ctx.f12.f64));
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// fadds f31,f29,f13
	f31.f64 = double(float(f29.f64 + ctx.f13.f64));
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
	// stfs f1,60(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 60, temp.u32);
	// stfsu f27,64(r11)
	temp.f32 = float(f27.f64);
	ea = 64 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x823bcdf4
	if (cr6.lt) goto loc_823BCDF4;
loc_823BCF50:
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bge cr6,0x823bcfc8
	if (!cr6.lt) goto loc_823BCFC8;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,632
	r11.s64 = ctx.r1.s64 + 632;
	// subf r10,r10,r29
	ctx.r10.s64 = r29.s64 - ctx.r10.s64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823BCF70:
	// stfs f2,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f27.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f1,f6
	f31.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f29,f1,f7
	f29.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmadds f31,f30,f3,f31
	f31.f64 = double(float(f30.f64 * ctx.f3.f64 + f31.f64));
	// fmadds f29,f30,f4,f29
	f29.f64 = double(float(f30.f64 * ctx.f4.f64 + f29.f64));
	// fmadds f1,f30,f5,f1
	ctx.f1.f64 = double(float(f30.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f31,f2,f9,f31
	f31.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + f31.f64));
	// fmadds f30,f2,f10,f29
	f30.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + f29.f64));
	// fmadds f1,f2,f11,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f31,f31,f12
	f31.f64 = double(float(f31.f64 + ctx.f12.f64));
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fadds f31,f30,f13
	f31.f64 = double(float(f30.f64 + ctx.f13.f64));
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfsu f27,16(r11)
	temp.f32 = float(f27.f64);
	ea = 16 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x823bcf70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BCF70;
loc_823BCFC8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addic. r11,r29,-1
	xer.ca = r29.u32 > 0;
	r11.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// beq 0x823bd0a0
	if (cr0.eq) goto loc_823BD0A0;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r1,632
	r11.s64 = ctx.r1.s64 + 632;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r9,86
	ctx.r7.s64 = ctx.r9.s64 + 86;
loc_823BCFFC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f9,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f7,f6,f6,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fsqrts f13,f7
	ctx.f13.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f9,f13,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmsubs f4,f13,f4,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 - ctx.f10.f64));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmsubs f13,f5,f12,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmsubs f12,f3,f7,f6
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f6.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f10,f8,f4
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f9,f11,f12,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fnmadds f8,f0,f13,f9
	ctx.f8.f64 = double(float(-(f0.f64 * ctx.f13.f64 + ctx.f9.f64)));
	// stfs f8,12(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x823bcffc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BCFFC;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x823bd20c
	if (!cr6.lt) goto loc_823BD20C;
loc_823BD0A0:
	// subfic r11,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	r11.s64 = 6 - ctx.r10.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x823bd1a4
	if (cr6.lt) goto loc_823BD1A4;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r10,2
	xer.ca = ctx.r10.u32 <= 2;
	ctx.r8.s64 = 2 - ctx.r10.s64;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r28,r11
	ctx.r7.u64 = r28.u64 + r11.u64;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r28,r9
	ctx.r6.u64 = r28.u64 + ctx.r9.u64;
	// rlwinm r11,r7,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1376
	r11.s64 = r11.s64 + 1376;
	// addi r4,r7,89
	ctx.r4.s64 = ctx.r7.s64 + 89;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823BD0E0:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r9,86
	ctx.r9.s64 = ctx.r9.s64 + 86;
	// addi r8,r8,87
	ctx.r8.s64 = ctx.r8.s64 + 87;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r3,r6,88
	ctx.r3.s64 = ctx.r6.s64 + 88;
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r3,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + r31.u64;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,12(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f6,r6,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,4(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + r31.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfsx f0,r5,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + r31.u32, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x823bd0e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BD0E0;
loc_823BD1A4:
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x823bd20c
	if (!cr6.lt) goto loc_823BD20C;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// add r8,r28,r9
	ctx.r8.u64 = r28.u64 + ctx.r9.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r11,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	r11.s64 = 6 - ctx.r10.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1376
	ctx.r9.s64 = ctx.r9.s64 + 1376;
	// addi r8,r8,86
	ctx.r8.s64 = ctx.r8.s64 + 86;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823BD1D8:
	// add r11,r10,r8
	r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bdnz 0x823bd1d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BD1D8;
loc_823BD20C:
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823bc7c8
	if (cr6.lt) goto loc_823BC7C8;
loc_823BD21C:
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_823BD230"))) PPC_WEAK_FUNC(sub_823BD230);
PPC_FUNC_IMPL(__imp__sub_823BD230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823BD234"))) PPC_WEAK_FUNC(sub_823BD234);
PPC_FUNC_IMPL(__imp__sub_823BD234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD238"))) PPC_WEAK_FUNC(sub_823BD238);
PPC_FUNC_IMPL(__imp__sub_823BD238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaac0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x823beb10
	sub_823BEB10(ctx, base);
	// lfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f30,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f28,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f28.f64 = double(temp.f32);
	// bl 0x823beb10
	sub_823BEB10(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// fneg f10,f0
	ctx.f10.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f9,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f9.f64 = double(temp.f32);
	// fneg f12,f8
	ctx.f12.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x823bd3ac
	if (cr6.eq) goto loc_823BD3AC;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r28,-16
	r11.s64 = r28.s64 + -16;
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r30
	ctr.u64 = r30.u64;
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f27.f64 = double(temp.f32);
	// lfs f26,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f26.f64 = double(temp.f32);
	// lfs f25,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f25.f64 = double(temp.f32);
	// lfs f24,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f24.f64 = double(temp.f32);
	// lfs f23,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f23.f64 = double(temp.f32);
	// lfs f22,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f22.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_823BD2F4:
	// lfs f21,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f21.f64 = double(temp.f32);
	// fmuls f20,f21,f8
	f20.f64 = double(float(f21.f64 * ctx.f8.f64));
	// lfs f19,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f19.f64 = double(temp.f32);
	// lfs f18,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f18.f64 = double(temp.f32);
	// fmuls f17,f19,f26
	f17.f64 = double(float(f19.f64 * f26.f64));
	// lfsu f0,16(r11)
	ea = 16 + r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	f0.f64 = double(temp.f32);
	// fmuls f16,f19,f22
	f16.f64 = double(float(f19.f64 * f22.f64));
	// fmuls f15,f0,f2
	f15.f64 = double(float(f0.f64 * ctx.f2.f64));
	// lfs f14,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f14.f64 = double(temp.f32);
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f20,f18,f9,f20
	f20.f64 = double(float(f18.f64 * ctx.f9.f64 + f20.f64));
	// fmadds f17,f0,f25,f17
	f17.f64 = double(float(f0.f64 * f25.f64 + f17.f64));
	// fmadds f16,f0,f14,f16
	f16.f64 = double(float(f0.f64 * f14.f64 + f16.f64));
	// fmadds f15,f21,f4,f15
	f15.f64 = double(float(f21.f64 * ctx.f4.f64 + f15.f64));
	// fmadds f0,f0,f6,f20
	f0.f64 = double(float(f0.f64 * ctx.f6.f64 + f20.f64));
	// fmadds f20,f18,f1,f17
	f20.f64 = double(float(f18.f64 * ctx.f1.f64 + f17.f64));
	// fmadds f17,f18,f24,f16
	f17.f64 = double(float(f18.f64 * f24.f64 + f16.f64));
	// fmadds f16,f19,f3,f15
	f16.f64 = double(float(f19.f64 * ctx.f3.f64 + f15.f64));
	// fmadds f0,f19,f7,f0
	f0.f64 = double(float(f19.f64 * ctx.f7.f64 + f0.f64));
	// fmadds f20,f21,f27,f20
	f20.f64 = double(float(f21.f64 * f27.f64 + f20.f64));
	// fmadds f21,f21,f23,f17
	f21.f64 = double(float(f21.f64 * f23.f64 + f17.f64));
	// fmadds f19,f18,f5,f16
	f19.f64 = double(float(f18.f64 * ctx.f5.f64 + f16.f64));
	// fdivs f18,f8,f0
	f18.f64 = double(float(ctx.f8.f64 / f0.f64));
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fsubs f17,f28,f0
	f17.f64 = double(float(f28.f64 - f0.f64));
	// fsubs f16,f10,f0
	f16.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fmuls f19,f18,f19
	f19.f64 = double(float(f18.f64 * f19.f64));
	// fmuls f21,f21,f18
	f21.f64 = double(float(f21.f64 * f18.f64));
	// fmuls f20,f18,f20
	f20.f64 = double(float(f18.f64 * f20.f64));
	// fsel f28,f17,f0,f28
	f28.f64 = f17.f64 >= 0.0 ? f0.f64 : f28.f64;
	// fsel f10,f16,f10,f0
	ctx.f10.f64 = f16.f64 >= 0.0 ? ctx.f10.f64 : f0.f64;
	// fsubs f0,f31,f19
	f0.f64 = double(float(f31.f64 - f19.f64));
	// fsubs f17,f11,f19
	f17.f64 = double(float(ctx.f11.f64 - f19.f64));
	// fsubs f18,f30,f20
	f18.f64 = double(float(f30.f64 - f20.f64));
	// fsubs f16,f13,f20
	f16.f64 = double(float(ctx.f13.f64 - f20.f64));
	// fsubs f15,f29,f21
	f15.f64 = double(float(f29.f64 - f21.f64));
	// fsubs f14,f12,f21
	f14.f64 = double(float(ctx.f12.f64 - f21.f64));
	// fsel f31,f0,f19,f31
	f31.f64 = f0.f64 >= 0.0 ? f19.f64 : f31.f64;
	// fsel f11,f17,f11,f19
	ctx.f11.f64 = f17.f64 >= 0.0 ? ctx.f11.f64 : f19.f64;
	// fsel f30,f18,f20,f30
	f30.f64 = f18.f64 >= 0.0 ? f20.f64 : f30.f64;
	// fsel f13,f16,f13,f20
	ctx.f13.f64 = f16.f64 >= 0.0 ? ctx.f13.f64 : f20.f64;
	// fsel f29,f15,f21,f29
	f29.f64 = f15.f64 >= 0.0 ? f21.f64 : f29.f64;
	// fsel f12,f14,f12,f21
	ctx.f12.f64 = f14.f64 >= 0.0 ? ctx.f12.f64 : f21.f64;
	// bdnz 0x823bd2f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BD2F4;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
loc_823BD3AC:
	// fsubs f10,f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - f29.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// fsubs f7,f11,f31
	ctx.f7.f64 = double(float(ctx.f11.f64 - f31.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f6,f30,f13
	ctx.f6.f64 = double(float(f30.f64 + ctx.f13.f64));
	// stfs f9,60(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r29.u32 + 60, temp.u32);
	// fadds f5,f29,f12
	ctx.f5.f64 = double(float(f29.f64 + ctx.f12.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f0,12(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// fdivs f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// fdivs f3,f13,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// stfs f0,24(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 24, temp.u32);
	// fdivs f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// stfs f0,28(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// stfs f0,32(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f0,36(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f0,44(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 44, temp.u32);
	// lfs f12,8740(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8740);
	ctx.f12.f64 = double(temp.f32);
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f3,20(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f2,40(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r29.u32 + 40, temp.u32);
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f0,f6,f3
	f0.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f13,f31,f2
	ctx.f13.f64 = double(float(f31.f64 * ctx.f2.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f11,48(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 48, temp.u32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f10,52(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r29.u32 + 52, temp.u32);
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f9,56(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r29.u32 + 56, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab0c
}

__attribute__((alias("__imp__sub_823BD44C"))) PPC_WEAK_FUNC(sub_823BD44C);
PPC_FUNC_IMPL(__imp__sub_823BD44C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823BD450"))) PPC_WEAK_FUNC(sub_823BD450);
PPC_FUNC_IMPL(__imp__sub_823BD450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x823be920
	sub_823BE920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_823BD4A8"))) PPC_WEAK_FUNC(sub_823BD4A8);
PPC_FUNC_IMPL(__imp__sub_823BD4A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823BD4AC"))) PPC_WEAK_FUNC(sub_823BD4AC);
PPC_FUNC_IMPL(__imp__sub_823BD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD4B0"))) PPC_WEAK_FUNC(sub_823BD4B0);
PPC_FUNC_IMPL(__imp__sub_823BD4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,724(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 724);
	f0.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f13,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / f0.f64));
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f11,8740(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8740);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f9,52(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BD520"))) PPC_WEAK_FUNC(sub_823BD520);
PPC_FUNC_IMPL(__imp__sub_823BD520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lfs f0,1184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	f0.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f0,1664(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1664, temp.u32);
	// addi r11,r3,1184
	r11.s64 = ctx.r3.s64 + 1184;
	// lfs f13,1188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,1664
	r11.s64 = ctx.r3.s64 + 1664;
	// stfs f13,1668(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1668, temp.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfs f12,1192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r9,-32320
	ctx.r8.s64 = ctx.r9.s64 + -32320;
	// stfs f12,1672(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1672, temp.u32);
	// lis r5,-31968
	ctx.r5.s64 = -2095054848;
	// lfs f11,1196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1676(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1676, temp.u32);
	// lfs f10,1200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,1680(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1680, temp.u32);
	// lfs f9,1204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,1684(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1684, temp.u32);
	// lfs f8,1208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1208);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,1688(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1688, temp.u32);
	// lfs f7,1212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1212);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1692(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1692, temp.u32);
	// lfs f6,1216(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1696(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1696, temp.u32);
	// lfs f5,1220(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1700(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1700, temp.u32);
	// lfs f4,1224(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1704(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1704, temp.u32);
	// lfs f3,1228(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1228);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1708(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1708, temp.u32);
	// lfs f2,1232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,1712(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1712, temp.u32);
	// lfs f1,1236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1236);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,1716(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1716, temp.u32);
	// lfs f0,1240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	f0.f64 = double(temp.f32);
	// stfs f0,1720(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1720, temp.u32);
	// lfs f13,1244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1724(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1724, temp.u32);
	// lfs f12,744(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,748(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,1728(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1728, temp.u32);
	// stfs f11,1732(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1732, temp.u32);
	// lfs f10,756(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,772(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,1760(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1760, temp.u32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1764(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1764, temp.u32);
	// stfs f0,1768(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1768, temp.u32);
	// stfs f0,1772(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1772, temp.u32);
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// addi r7,r11,189
	ctx.r7.s64 = r11.s64 + 189;
	// lfs f9,760(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r6,r3
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,1776(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1776, temp.u32);
	// stfs f8,1780(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1780, temp.u32);
	// stfs f8,1784(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1784, temp.u32);
	// stfs f8,1788(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1788, temp.u32);
	// lfs f0,-32320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32320);
	f0.f64 = double(temp.f32);
	// stfs f0,1792(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1792, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1796(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1796, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1800(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1800, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1804(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1804, temp.u32);
	// lfs f0,-32320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32320);
	f0.f64 = double(temp.f32);
	// stfs f0,1808(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1808, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1812(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1812, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1816(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1816, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1820(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1820, temp.u32);
	// lfs f0,-32320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32320);
	f0.f64 = double(temp.f32);
	// stfs f0,1824(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1824, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1828(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1828, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1832(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1832, temp.u32);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1836(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1836, temp.u32);
	// addi r4,r5,29472
	ctx.r4.s64 = ctx.r5.s64 + 29472;
	// lfs f0,29472(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 29472);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,1840(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1840, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1844(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1844, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1848(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1848, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1852(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1852, temp.u32);
	// lfs f7,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,1856(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1856, temp.u32);
	// lfs f6,732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1860(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1860, temp.u32);
	// lfs f5,736(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1864(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1864, temp.u32);
	// lfs f4,740(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1868(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1868, temp.u32);
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r3,1240
	ctx.r10.s64 = ctx.r3.s64 + 1240;
	// addi r11,r3,1840
	r11.s64 = ctx.r3.s64 + 1840;
loc_823BD6C4:
	// lfs f0,-1076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1076);
	f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,-60(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -60, temp.u32);
	// lfs f12,-1064(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1064);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f10,-1080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1080);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-76(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + -76, temp.u32);
	// lfs f8,1232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f7,f11,f8,f9
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f9.f64)));
	// stfs f7,-44(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + -44, temp.u32);
	// lfs f6,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,1236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1236);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f4,f5,f11,f6
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f11.f64 - ctx.f6.f64)));
	// stfs f4,-28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + -28, temp.u32);
	// lfsu f0,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	f0.f64 = double(temp.f32);
	// lfs f3,1240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f0,f3
	ctx.f2.f64 = double(float(f0.f64 - ctx.f3.f64));
	// stfs f2,-12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// stfsu f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// lwz r8,720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x823bd6c4
	if (cr6.lt) goto loc_823BD6C4;
}

__attribute__((alias("__imp__sub_823BD720"))) PPC_WEAK_FUNC(sub_823BD720);
PPC_FUNC_IMPL(__imp__sub_823BD720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BD724"))) PPC_WEAK_FUNC(sub_823BD724);
PPC_FUNC_IMPL(__imp__sub_823BD724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD728"))) PPC_WEAK_FUNC(sub_823BD728);
PPC_FUNC_IMPL(__imp__sub_823BD728) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,720(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// lfs f31,468(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	f31.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f30,472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	f30.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// ble cr6,0x823bd7b4
	if (!cr6.gt) goto loc_823BD7B4;
	// addi r31,r3,780
	r31.s64 = ctx.r3.s64 + 780;
loc_823BD768:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f3,-24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82388818
	sub_82388818(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bf9e0
	sub_823BF9E0(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfs f0,-8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// stfsu f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823bd768
	if (cr6.lt) goto loc_823BD768;
loc_823BD7B4:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_823BD7C8"))) PPC_WEAK_FUNC(sub_823BD7C8);
PPC_FUNC_IMPL(__imp__sub_823BD7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823BD7CC"))) PPC_WEAK_FUNC(sub_823BD7CC);
PPC_FUNC_IMPL(__imp__sub_823BD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD7D0"))) PPC_WEAK_FUNC(sub_823BD7D0);
PPC_FUNC_IMPL(__imp__sub_823BD7D0) {
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
	// bl 0x828e940c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eaae0
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r6,24192(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f30,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f30.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f7,f13
	ctx.f7.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,36(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fabs f6,f13
	ctx.f6.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,40(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r6,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r6.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f0,f12
	f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f7
	cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bne cr6,0x823bd85c
	if (!cr6.eq) goto loc_823BD85C;
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// bne cr6,0x823bd85c
	if (!cr6.eq) goto loc_823BD85C;
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x823bd860
	if (cr6.eq) goto loc_823BD860;
loc_823BD85C:
	// li r11,0
	r11.s64 = 0;
loc_823BD860:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bd884
	if (cr6.eq) goto loc_823BD884;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_823BD884:
	// lwz r11,720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 720);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r30,496
	r29.s64 = r30.s64 + 496;
	// addi r9,r11,192
	ctx.r9.s64 = r11.s64 + 192;
	// addi r26,r30,512
	r26.s64 = r30.s64 + 512;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,3656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3656);
	f0.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfsx f10,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// beq cr6,0x823bdbf0
	if (cr6.eq) goto loc_823BDBF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f25,f13,f0
	f25.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f26,f12,f0
	f26.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f27,f11,f0
	f27.f64 = double(float(ctx.f11.f64 * f0.f64));
	// addi r28,r30,780
	r28.s64 = r30.s64 + 780;
	// addi r31,r30,824
	r31.s64 = r30.s64 + 824;
	// lfs f28,2992(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2992);
	f28.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// lfs f0,11816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11816);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f22,8740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8740);
	f22.f64 = double(temp.f32);
	// lfs f29,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f29.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdivs f24,f30,f13
	f24.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fdivs f23,f0,f12
	f23.f64 = double(float(f0.f64 / ctx.f12.f64));
loc_823BD8F8:
	// lfs f13,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r28)
	ea = 4 + r28.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f8,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f31,260(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f31,264(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fsubs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f31,272(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f31,280(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fadds f12,f5,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fadds f11,f4,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f31,288(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fadds f10,f9,f3
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f31,292(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f24,296(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f23,312(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f30,316(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fdivs f9,f28,f1
	ctx.f9.f64 = double(float(f28.f64 / ctx.f1.f64));
	// stfs f9,256(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fdivs f8,f28,f0
	ctx.f8.f64 = double(float(f28.f64 / f0.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f5,f12,f27
	ctx.f5.f64 = double(float(ctx.f12.f64 - f27.f64));
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f4,f11,f26
	ctx.f4.f64 = double(float(ctx.f11.f64 - f26.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f10,f25
	ctx.f3.f64 = double(float(ctx.f10.f64 - f25.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,276(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,304(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f6,308(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8234dc60
	sub_8234DC60(ctx, base);
	// lfs f2,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f2,-24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + -24, temp.u32);
	// stfs f1,-20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + -20, temp.u32);
	// stfs f0,-16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -16, temp.u32);
	// stfs f13,-12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,-8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + -8, temp.u32);
	// stfs f11,-4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f5,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f1,36(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r25,r31,168
	r25.s64 = r31.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,180(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,184(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,188(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,192(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,196(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,200(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,204(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,208(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,212(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,216(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lfs f1,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,220(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,228(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// bl 0x823bbdb8
	sub_823BBDB8(ctx, base);
	// lfs f12,724(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 724);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f29,f12
	ctx.f11.f64 = double(float(f29.f64 / ctx.f12.f64));
	// stfs f29,192(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f22,212(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 + f29.f64));
	// stfs f30,232(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f30,252(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f10,240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// bl 0x82347210
	sub_82347210(ctx, base);
	// lfs f9,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,360(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 360, temp.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,364(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 364, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,368(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 368, temp.u32);
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,372(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 372, temp.u32);
	// lfs f5,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,376(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 376, temp.u32);
	// lfs f4,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,380(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 380, temp.u32);
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,384(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 384, temp.u32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,388(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 388, temp.u32);
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,392(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 392, temp.u32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,396(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 396, temp.u32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 400, temp.u32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,404(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 404, temp.u32);
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,408(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 408, temp.u32);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,412(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 412, temp.u32);
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,416(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 416, temp.u32);
	// lfs f8,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,420(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 420, temp.u32);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// lwz r10,720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 720);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x823bd8f8
	if (cr6.lt) goto loc_823BD8F8;
loc_823BDBF0:
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x828eab2c
}

__attribute__((alias("__imp__sub_823BDC04"))) PPC_WEAK_FUNC(sub_823BDC04);
PPC_FUNC_IMPL(__imp__sub_823BDC04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823BDC08"))) PPC_WEAK_FUNC(sub_823BDC08);
PPC_FUNC_IMPL(__imp__sub_823BDC08) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	r30.s64 = ctx.r3.s64 + 176;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82393e38
	sub_82393E38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,11848
	ctx.r10.s64 = r11.s64 + 11848;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82394f00
	sub_82394F00(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,10856
	ctx.r7.s64 = ctx.r9.s64 + 10856;
	// li r30,0
	r30.s64 = 0;
	// addi r6,r8,11824
	ctx.r6.s64 = ctx.r8.s64 + 11824;
	// stw r7,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r7.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r30.u32);
	// addi r29,r31,420
	r29.s64 = r31.s64 + 420;
	// stw r6,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r6.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,436(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// or r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 | ctx.r5.u64;
	// addi r11,r4,11836
	r11.s64 = ctx.r4.s64 + 11836;
	// stw r3,436(r31)
	PPC_STORE_U32(r31.u32 + 436, ctx.r3.u32);
	// addi r28,r31,444
	r28.s64 = r31.s64 + 444;
	// stw r11,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r11.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 460);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// addi r26,r27,-32320
	r26.s64 = r27.s64 + -32320;
	// stw r8,460(r31)
	PPC_STORE_U32(r31.u32 + 460, ctx.r8.u32);
	// lfs f31,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,468(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// stfs f31,476(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 476, temp.u32);
	// stfs f31,480(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// stfs f31,484(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 484, temp.u32);
	// stfs f31,488(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// stfs f31,492(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 492, temp.u32);
	// lfs f0,-32320(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + -32320);
	f0.f64 = double(temp.f32);
	// stfs f0,496(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 496, temp.u32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,500(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,504(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,508(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// lfs f0,-32320(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + -32320);
	f0.f64 = double(temp.f32);
	// stfs f0,512(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 512, temp.u32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,516(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 516, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,520(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 520, temp.u32);
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,524(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 524, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,528(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 528, temp.u32);
	// addi r11,r31,528
	r11.s64 = r31.s64 + 528;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,532(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 532, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,536(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 536, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,540(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 540, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,544(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 544, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,548(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 548, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,552(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 552, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,556(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 556, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,560(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 560, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,564(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 564, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,568(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 568, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,572(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 572, temp.u32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,576(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 576, temp.u32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,580(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 580, temp.u32);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,584(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 584, temp.u32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 588, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,592(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 592, temp.u32);
	// addi r11,r31,592
	r11.s64 = r31.s64 + 592;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,596(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 596, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,600(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 600, temp.u32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,604(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 604, temp.u32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,608(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 608, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,612(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 612, temp.u32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,616(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 616, temp.u32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,620(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 620, temp.u32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,624(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 624, temp.u32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,628(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 628, temp.u32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,632(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 632, temp.u32);
	// lfs f1,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,636(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 636, temp.u32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,640(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 640, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 644, temp.u32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,648(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 648, temp.u32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,652(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 652, temp.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,656(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 656, temp.u32);
	// addi r11,r31,656
	r11.s64 = r31.s64 + 656;
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,660(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 660, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,664(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 664, temp.u32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,668(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 668, temp.u32);
	// lfs f6,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,672(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 672, temp.u32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,676(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 676, temp.u32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,680(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 680, temp.u32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,684(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 684, temp.u32);
	// lfs f2,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,688(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 688, temp.u32);
	// lfs f1,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,692(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 692, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,696(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 696, temp.u32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 700, temp.u32);
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,704(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 704, temp.u32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,708(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 708, temp.u32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,712(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 712, temp.u32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,716(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 716, temp.u32);
	// stw r30,720(r31)
	PPC_STORE_U32(r31.u32 + 720, r30.u32);
	// stfs f31,724(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 724, temp.u32);
	// lfs f0,-32320(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + -32320);
	f0.f64 = double(temp.f32);
	// stfs f0,728(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 728, temp.u32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,732(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 732, temp.u32);
	// lfs f0,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,736(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 736, temp.u32);
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,740(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 740, temp.u32);
	// bl 0x82393db0
	sub_82393DB0(ctx, base);
	// lfs f8,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,744(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 744, temp.u32);
	// addi r26,r31,1376
	r26.s64 = r31.s64 + 1376;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// li r27,2
	r27.s64 = 2;
	// stfs f7,748(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 748, temp.u32);
loc_823BDF00:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82388f88
	sub_82388F88(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r26,r26,96
	r26.s64 = r26.s64 + 96;
	// bge 0x823bdf00
	if (!cr0.lt) goto loc_823BDF00;
	// addi r27,r31,1872
	r27.s64 = r31.s64 + 1872;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82711ff8
	sub_82711FF8(ctx, base);
	// stw r30,1904(r31)
	PPC_STORE_U32(r31.u32 + 1904, r30.u32);
	// stw r30,1896(r31)
	PPC_STORE_U32(r31.u32 + 1896, r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(r31.u32 + 1900, r30.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,10000
	cr6.compare<uint32_t>(r11.u32, 10000, xer);
	// bge cr6,0x823bdf50
	if (!cr6.lt) goto loc_823BDF50;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BDF50:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r9,10000
	cr6.compare<uint32_t>(ctx.r9.u32, 10000, xer);
	// bge cr6,0x823bdf80
	if (!cr6.lt) goto loc_823BDF80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823BDF80:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r11,2
	ctx.r10.u64 = r11.u64 | 2;
	// addi r3,r31,756
	ctx.r3.s64 = r31.s64 + 756;
	// stw r10,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r10.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,772
	ctx.r3.s64 = r31.s64 + 772;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,784
	ctx.r3.s64 = r31.s64 + 784;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,800
	ctx.r3.s64 = r31.s64 + 800;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,992
	ctx.r3.s64 = r31.s64 + 992;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1664
	ctx.r3.s64 = r31.s64 + 1664;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82712108
	sub_82712108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_823BE01C"))) PPC_WEAK_FUNC(sub_823BE01C);
PPC_FUNC_IMPL(__imp__sub_823BE01C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823BE020"))) PPC_WEAK_FUNC(sub_823BE020);
PPC_FUNC_IMPL(__imp__sub_823BE020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r30,r3,1872
	r30.s64 = ctx.r3.s64 + 1872;
	// addi r10,r11,11848
	ctx.r10.s64 = r11.s64 + 11848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82712010
	sub_82712010(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,1908
	r11.s64 = r31.s64 + 1908;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823BE060:
	// lwzu r10,-4(r11)
	ea = -4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823be088
	if (cr6.eq) goto loc_823BE088;
loc_823BE06C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823be06c
	if (!cr0.eq) goto loc_823BE06C;
loc_823BE088:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bdnz 0x823be060
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BE060;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82712098
	sub_82712098(ctx, base);
	// addi r3,r31,444
	ctx.r3.s64 = r31.s64 + 444;
	// bl 0x823bfd30
	sub_823BFD30(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = r31.s64 + 420;
	// bl 0x823bfc38
	sub_823BFC38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82393eb8
	sub_82393EB8(ctx, base);
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

__attribute__((alias("__imp__sub_823BE0C4"))) PPC_WEAK_FUNC(sub_823BE0C4);
PPC_FUNC_IMPL(__imp__sub_823BE0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE0C8"))) PPC_WEAK_FUNC(sub_823BE0C8);
PPC_FUNC_IMPL(__imp__sub_823BE0C8) {
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r3,r3,1920
	ctx.r3.s64 = ctx.r3.s64 + 1920;
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f12,1736(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1736, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1740(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 1740, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f9,1744(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 1744, temp.u32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(f0.f64 / ctx.f8.f64));
	// stfs f7,1748(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 1748, temp.u32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,1752(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 1752, temp.u32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,1756(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 1756, temp.u32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,468(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,472(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,476(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 476, temp.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,480(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,484(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 484, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,492(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 492, temp.u32);
	// lbz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 36);
	// stb r9,1916(r31)
	PPC_STORE_U8(r31.u32 + 1916, ctx.r9.u8);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bbca8
	sub_823BBCA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bd728
	sub_823BD728(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BE194"))) PPC_WEAK_FUNC(sub_823BE194);
PPC_FUNC_IMPL(__imp__sub_823BE194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE198"))) PPC_WEAK_FUNC(sub_823BE198);
PPC_FUNC_IMPL(__imp__sub_823BE198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x823ac5b0
	sub_823AC5B0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823be2c0
	if (cr6.eq) goto loc_823BE2C0;
	// lwz r29,432(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 432);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r3,r27,420
	ctx.r3.s64 = r27.s64 + 420;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x8245fc58
	sub_8245FC58(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823be2b8
	if (cr6.eq) goto loc_823BE2B8;
	// addi r31,r27,444
	r31.s64 = r27.s64 + 444;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
loc_823BE204:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r12,-16
	r12.s64 = -16;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rldicr r12,r12,36,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// rotldi r10,r7,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 32);
	// rldicl r3,r6,62,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// rldicr r9,r11,0,61
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFFFFC;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rldicr r7,r8,28,35
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 28) & 0xFFFFFFFFF0000000;
	// or r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 | ctx.r7.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// ble cr6,0x823be26c
	if (!cr6.gt) goto loc_823BE26C;
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
loc_823BE26C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823be29c
	if (cr0.eq) goto loc_823BE29C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r8.u64);
loc_823BE29C:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x823be204
	if (!cr6.eq) goto loc_823BE204;
loc_823BE2B8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,416(r27)
	PPC_STORE_U8(r27.u32 + 416, r11.u8);
loc_823BE2C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BE2C4"))) PPC_WEAK_FUNC(sub_823BE2C4);
PPC_FUNC_IMPL(__imp__sub_823BE2C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_823BE2C8"))) PPC_WEAK_FUNC(sub_823BE2C8);
PPC_FUNC_IMPL(__imp__sub_823BE2C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r4,72
	ctx.r4.s64 = ctx.r4.s64 + 72;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x823ac5b0
	sub_823AC5B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823be408
	if (cr6.eq) goto loc_823BE408;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// addi r3,r31,420
	ctx.r3.s64 = r31.s64 + 420;
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// li r29,-1
	r29.s64 = -1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823be350
	if (cr6.eq) goto loc_823BE350;
loc_823BE324:
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x823be340
	if (cr6.eq) goto loc_823BE340;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x823be324
	if (!cr6.eq) goto loc_823BE324;
	// b 0x823be350
	goto loc_823BE350;
loc_823BE340:
	// subf r11,r10,r4
	r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// divw r29,r11,r10
	r29.s32 = r11.s32 / ctx.r10.s32;
	// bl 0x823b87f0
	sub_823B87F0(ctx, base);
loc_823BE350:
	// lwz r11,456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 456);
	// addi r9,r31,444
	ctx.r9.s64 = r31.s64 + 444;
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// beq cr6,0x823be408
	if (cr6.eq) goto loc_823BE408;
loc_823BE370:
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x823be3e0
	if (!cr6.eq) goto loc_823BE3E0;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x823be3d0
	if (!cr6.lt) goto loc_823BE3D0;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_823BE39C:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r4,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r4.u64);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x823be39c
	if (cr6.lt) goto loc_823BE39C;
loc_823BE3D0:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// b 0x823be3f0
	goto loc_823BE3F0;
loc_823BE3E0:
	// ble cr6,0x823be3ec
	if (!cr6.gt) goto loc_823BE3EC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
loc_823BE3EC:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
loc_823BE3F0:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x823be370
	if (!cr6.eq) goto loc_823BE370;
loc_823BE408:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_823BE40C"))) PPC_WEAK_FUNC(sub_823BE40C);
PPC_FUNC_IMPL(__imp__sub_823BE40C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823BE410"))) PPC_WEAK_FUNC(sub_823BE410);
PPC_FUNC_IMPL(__imp__sub_823BE410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// slw r4,r10,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x823947c8
	sub_823947C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823948c8
	sub_823948C8(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// li r27,0
	r27.s64 = 0;
	// stw r30,400(r29)
	PPC_STORE_U32(r29.u32 + 400, r30.u32);
	// stb r27,416(r29)
	PPC_STORE_U8(r29.u32 + 416, r27.u8);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823be478
	if (cr6.eq) goto loc_823BE478;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823be47c
	if (!cr6.eq) goto loc_823BE47C;
loc_823BE478:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823BE47C:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// addi r11,r11,13932
	r11.s64 = r11.s64 + 13932;
	// stw r11,1892(r29)
	PPC_STORE_U32(r29.u32 + 1892, r11.u32);
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d3720
	sub_822D3720(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-32320
	ctx.r4.s64 = ctx.r10.s64 + -32320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x823bc000
	sub_823BC000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,11916
	ctx.r3.s64 = ctx.r8.s64 + 11916;
	// lwz r26,30236(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30236);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,11908
	ctx.r3.s64 = ctx.r7.s64 + 11908;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,11900
	ctx.r3.s64 = ctx.r6.s64 + 11900;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,3356
	ctx.r3.s64 = ctx.r5.s64 + 3356;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r4,720(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ble cr6,0x823be5b4
	if (!cr6.gt) goto loc_823BE5B4;
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// addi r31,r29,1896
	r31.s64 = r29.s64 + 1896;
loc_823BE50C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827162e8
	sub_827162E8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823be548
	if (cr6.eq) goto loc_823BE548;
loc_823BE52C:
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
	// bne 0x823be52c
	if (!cr0.eq) goto loc_823BE52C;
loc_823BE548:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823be570
	if (cr6.eq) goto loc_823BE570;
loc_823BE554:
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
	// bne 0x823be554
	if (!cr0.eq) goto loc_823BE554;
loc_823BE570:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823be598
	if (cr6.eq) goto loc_823BE598;
loc_823BE57C:
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
	// bne 0x823be57c
	if (!cr0.eq) goto loc_823BE57C;
loc_823BE598:
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823be50c
	if (cr6.lt) goto loc_823BE50C;
loc_823BE5B4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stb r27,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r27.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,11812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11812);
	f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,4436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4436);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,-9652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9652);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,4580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4580);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// lfs f10,-13388(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -13388);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,11808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11808);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f8,3640(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3640);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f7,11804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11804);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8892);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r27.u32);
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r27.u32);
	// bl 0x823be0c8
	sub_823BE0C8(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_823BE64C"))) PPC_WEAK_FUNC(sub_823BE64C);
PPC_FUNC_IMPL(__imp__sub_823BE64C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823BE650"))) PPC_WEAK_FUNC(sub_823BE650);
PPC_FUNC_IMPL(__imp__sub_823BE650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,416(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,448(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// lis r8,-32196
	ctx.r8.s64 = -2109997056;
	// stb r11,416(r3)
	PPC_STORE_U8(ctx.r3.u32 + 416, r11.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r7,456(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 456);
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// addi r6,r8,-17616
	ctx.r6.s64 = ctx.r8.s64 + -17616;
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// srawi r5,r5,4
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// b 0x823c06a8
	sub_823C06A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BE690"))) PPC_WEAK_FUNC(sub_823BE690);
PPC_FUNC_IMPL(__imp__sub_823BE690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE694"))) PPC_WEAK_FUNC(sub_823BE694);
PPC_FUNC_IMPL(__imp__sub_823BE694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE698"))) PPC_WEAK_FUNC(sub_823BE698);
PPC_FUNC_IMPL(__imp__sub_823BE698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eaaf8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f13,612(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x828ea6e0
	sub_828EA6E0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,11936(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11936);
	f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// lfs f11,612(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 612);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,592(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 592);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f31,11932(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11932);
	f31.f64 = double(temp.f32);
	// lfs f0,11928(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11928);
	f0.f64 = double(temp.f32);
	// fmuls f30,f10,f31
	f30.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * f0.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r30,-32253
	r30.s64 = -2113732608;
	// lfs f6,468(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 468);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,11924(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11924);
	f0.f64 = double(temp.f32);
	// lfs f13,-13388(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -13388);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f29,f7,f13
	f29.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f5,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 472);
	ctx.f5.f64 = double(temp.f32);
	// frsp f28,f1
	f28.f64 = double(float(ctx.f1.f64));
	// lfs f0,4580(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4580);
	f0.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * f0.f64));
	// bl 0x828ebf90
	sub_828EBF90(ctx, base);
	// fnmsubs f4,f28,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(-(f28.f64 * f31.f64 - f30.f64)));
	// lfs f0,-13388(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -13388);
	f0.f64 = double(temp.f32);
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// li r11,1
	r11.s64 = 1;
	// fabs f2,f4
	ctx.f2.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, f31.f64);
	// blt cr6,0x823be778
	if (cr6.lt) goto loc_823BE778;
	// li r11,0
	r11.s64 = 0;
loc_823BE778:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823be7a8
	if (cr6.eq) goto loc_823BE7A8;
	// fsubs f13,f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 - ctx.f13.f64));
	// li r11,1
	r11.s64 = 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// blt cr6,0x823be79c
	if (cr6.lt) goto loc_823BE79C;
	// li r11,0
	r11.s64 = 0;
loc_823BE79C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be7c0
	if (!cr6.eq) goto loc_823BE7C0;
loc_823BE7A8:
	// stfs f30,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f29,472(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// bl 0x823bbca8
	sub_823BBCA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bd728
	sub_823BD728(ctx, base);
loc_823BE7C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bd7d0
	sub_823BD7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bc730
	sub_823BC730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bbe58
	sub_823BBE58(ctx, base);
	// lbz r11,416(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823be814
	if (cr6.eq) goto loc_823BE814;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// lis r10,-32196
	ctx.r10.s64 = -2109997056;
	// stb r11,416(r31)
	PPC_STORE_U8(r31.u32 + 416, r11.u8);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 456);
	// addi r6,r10,-17616
	ctx.r6.s64 = ctx.r10.s64 + -17616;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// bl 0x823c06a8
	sub_823C06A8(ctx, base);
loc_823BE814:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bd520
	sub_823BD520(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eab44
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BE840"))) PPC_WEAK_FUNC(sub_823BE840);
PPC_FUNC_IMPL(__imp__sub_823BE840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE844"))) PPC_WEAK_FUNC(sub_823BE844);
PPC_FUNC_IMPL(__imp__sub_823BE844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE848"))) PPC_WEAK_FUNC(sub_823BE848);
PPC_FUNC_IMPL(__imp__sub_823BE848) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bfe68
	sub_823BFE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BE848"))) PPC_WEAK_FUNC(sub_823BE848);
PPC_FUNC_IMPL(__imp__sub_823BE848) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823BE84C"))) PPC_WEAK_FUNC(sub_823BE84C);
PPC_FUNC_IMPL(__imp__sub_823BE84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE850"))) PPC_WEAK_FUNC(sub_823BE850);
PPC_FUNC_IMPL(__imp__sub_823BE850) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_823BE850"))) PPC_WEAK_FUNC(sub_823BE850);
PPC_FUNC_IMPL(__imp__sub_823BE850) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bff68
	sub_823BFF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BE854"))) PPC_WEAK_FUNC(sub_823BE854);
PPC_FUNC_IMPL(__imp__sub_823BE854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE858"))) PPC_WEAK_FUNC(sub_823BE858);
PPC_FUNC_IMPL(__imp__sub_823BE858) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x823be8e0
	if (!cr6.lt) goto loc_823BE8E0;
loc_823BE88C:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r25
	ctr.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r30,r11,r28
	r30.u64 = r11.u64 + r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823be8e0
	if (cr6.eq) goto loc_823BE8E0;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// add r8,r11,r28
	ctx.r8.u64 = r11.u64 + r28.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r29,r31
	r29.u64 = r31.u64;
	// stdx r10,r11,r28
	PPC_STORE_U64(r11.u32 + r28.u32, ctx.r10.u64);
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// blt cr6,0x823be88c
	if (cr6.lt) goto loc_823BE88C;
loc_823BE8E0:
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// add r9,r11,r28
	ctx.r9.u64 = r11.u64 + r28.u64;
	// stdx r10,r11,r28
	PPC_STORE_U64(r11.u32 + r28.u32, ctx.r10.u64);
	// ld r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U64(r27.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BE8FC"))) PPC_WEAK_FUNC(sub_823BE8FC);
PPC_FUNC_IMPL(__imp__sub_823BE8FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823BE900"))) PPC_WEAK_FUNC(sub_823BE900);
PPC_FUNC_IMPL(__imp__sub_823BE900) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// li r11,1
	r11.s64 = 1;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f3
	cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// blt cr6,0x823be918
	if (cr6.lt) goto loc_823BE918;
	// li r11,0
	r11.s64 = 0;
loc_823BE918:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_823BE91C"))) PPC_WEAK_FUNC(sub_823BE91C);
PPC_FUNC_IMPL(__imp__sub_823BE91C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE920"))) PPC_WEAK_FUNC(sub_823BE920);
PPC_FUNC_IMPL(__imp__sub_823BE920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// stfs f0,28(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f13,32(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f9,36(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f11,40(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f0,44(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f13,48(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f9,52(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f8,56(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f0,60(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// stfs f10,64(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// stfs f12,68(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f11,72(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f0,76(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f10,80(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f12,84(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f8,88(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stfs f0,92(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// stfs f10,96(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// stfs f9,100(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// stfs f11,104(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// stfs f0,108(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// stfs f10,112(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// stfs f9,116(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// stfs f8,120(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// stfs f0,124(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
}

__attribute__((alias("__imp__sub_823BE9C0"))) PPC_WEAK_FUNC(sub_823BE9C0);
PPC_FUNC_IMPL(__imp__sub_823BE9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE9C4"))) PPC_WEAK_FUNC(sub_823BE9C4);
PPC_FUNC_IMPL(__imp__sub_823BE9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE9C8"))) PPC_WEAK_FUNC(sub_823BE9C8);
PPC_FUNC_IMPL(__imp__sub_823BE9C8) {
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
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x823bea58
	if (!cr6.lt) goto loc_823BEA58;
loc_823BE9FC:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r27
	ctr.u64 = r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bea20
	if (cr6.eq) goto loc_823BEA20;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_823BEA20:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
	// ldx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + r30.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stdx r6,r11,r30
	PPC_STORE_U64(r11.u32 + r30.u32, ctx.r6.u64);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// blt cr6,0x823be9fc
	if (cr6.lt) goto loc_823BE9FC;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
loc_823BEA58:
	// bne cr6,0x823bea84
	if (!cr6.eq) goto loc_823BEA84;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
	// ld r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// stdx r7,r10,r30
	PPC_STORE_U64(ctx.r10.u32 + r30.u32, ctx.r7.u64);
	// ld r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
loc_823BEA84:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x823beaf0
	if (!cr6.lt) goto loc_823BEAF0;
loc_823BEA9C:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r27
	ctr.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823beaf0
	if (cr6.eq) goto loc_823BEAF0;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stdx r10,r11,r30
	PPC_STORE_U64(r11.u32 + r30.u32, ctx.r10.u64);
	// cmpw cr6,r25,r31
	cr6.compare<int32_t>(r25.s32, r31.s32, xer);
	// ld r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// blt cr6,0x823bea9c
	if (cr6.lt) goto loc_823BEA9C;
loc_823BEAF0:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// stdx r10,r11,r30
	PPC_STORE_U64(r11.u32 + r30.u32, ctx.r10.u64);
	// ld r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U64(r26.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BEB0C"))) PPC_WEAK_FUNC(sub_823BEB0C);
PPC_FUNC_IMPL(__imp__sub_823BEB0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823BEB10"))) PPC_WEAK_FUNC(sub_823BEB10);
PPC_FUNC_IMPL(__imp__sub_823BEB10) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-32324(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32324);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823beb80
	if (!cr6.eq) goto loc_823BEB80;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r9,-32340
	r31.s64 = ctx.r9.s64 + -32340;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r7,-31979
	ctx.r7.s64 = -2095775744;
	// stw r11,-32324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32324, r11.u32);
	// lfs f0,11768(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11768);
	f0.f64 = double(temp.f32);
	// addi r3,r7,-26712
	ctx.r3.s64 = ctx.r7.s64 + -26712;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,-32340(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -32340, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
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
loc_823BEB80:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-32340
	ctx.r3.s64 = r11.s64 + -32340;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BEB98"))) PPC_WEAK_FUNC(sub_823BEB98);
PPC_FUNC_IMPL(__imp__sub_823BEB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB9C"))) PPC_WEAK_FUNC(sub_823BEB9C);
PPC_FUNC_IMPL(__imp__sub_823BEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBA0"))) PPC_WEAK_FUNC(sub_823BEBA0);
PPC_FUNC_IMPL(__imp__sub_823BEBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f9,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f5,f13,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f9,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f4,f6,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f8.f64));
	// lfs f5,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f3,f6,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f2,f6,f2,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f1,f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f8.f64));
	// fmadds f0,f12,f0,f4
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f4.f64));
	// fadds f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(f0.f64 + ctx.f5.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEC24"))) PPC_WEAK_FUNC(sub_823BEC24);
PPC_FUNC_IMPL(__imp__sub_823BEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEC28"))) PPC_WEAK_FUNC(sub_823BEC28);
PPC_FUNC_IMPL(__imp__sub_823BEC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
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
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaad4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f5,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,24192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24192);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsubs f9,f0,f2
	ctx.f9.f64 = double(float(f0.f64 - ctx.f2.f64));
	// lfs f0,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f5,f4,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f31,f3,f10
	f31.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f30,f9,f6
	f30.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f28,f9,f8
	f28.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f29,f4,f10
	f29.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f27,f9,f9
	f27.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f7,f6,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fsubs f26,f1,f5
	f26.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fsubs f25,f1,f5
	f25.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(f30.f64 - f31.f64));
	// fsubs f24,f30,f31
	f24.f64 = double(float(f30.f64 - f31.f64));
	// fsubs f22,f29,f28
	f22.f64 = double(float(f29.f64 - f28.f64));
	// fsubs f31,f30,f31
	f31.f64 = double(float(f30.f64 - f31.f64));
	// fsubs f23,f29,f28
	f23.f64 = double(float(f29.f64 - f28.f64));
	// fsubs f29,f29,f28
	f29.f64 = double(float(f29.f64 - f28.f64));
	// fmadds f27,f3,f3,f27
	f27.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + f27.f64));
	// fmuls f30,f26,f26
	f30.f64 = double(float(f26.f64 * f26.f64));
	// fmuls f26,f25,f4
	f26.f64 = double(float(f25.f64 * ctx.f4.f64));
	// fmuls f20,f5,f6
	f20.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f28,f1,f10
	f28.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f21,f3,f24
	f21.f64 = double(float(ctx.f3.f64 * f24.f64));
	// fmuls f19,f22,f8
	f19.f64 = double(float(f22.f64 * ctx.f8.f64));
	// fmadds f7,f10,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f27,f4,f4,f27
	f27.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + f27.f64));
	// fmadds f30,f23,f23,f30
	f30.f64 = double(float(f23.f64 * f23.f64 + f30.f64));
	// fmsubs f26,f9,f24,f26
	f26.f64 = double(float(ctx.f9.f64 * f24.f64 - f26.f64));
	// fmuls f9,f29,f9
	ctx.f9.f64 = double(float(f29.f64 * ctx.f9.f64));
	// fmsubs f8,f5,f8,f28
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - f28.f64));
	// fmsubs f5,f29,f4,f21
	ctx.f5.f64 = double(float(f29.f64 * ctx.f4.f64 - f21.f64));
	// fmsubs f4,f22,f10,f20
	ctx.f4.f64 = double(float(f22.f64 * ctx.f10.f64 - f20.f64));
	// fmsubs f1,f1,f6,f19
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 - f19.f64));
	// fmadds f10,f31,f31,f30
	ctx.f10.f64 = double(float(f31.f64 * f31.f64 + f30.f64));
	// fmuls f6,f26,f7
	ctx.f6.f64 = double(float(f26.f64 * ctx.f7.f64));
	// fmsubs f3,f25,f3,f9
	ctx.f3.f64 = double(float(f25.f64 * ctx.f3.f64 - ctx.f9.f64));
	// fmuls f9,f8,f27
	ctx.f9.f64 = double(float(ctx.f8.f64 * f27.f64));
	// fmuls f8,f5,f7
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f5,f4,f27
	ctx.f5.f64 = double(float(ctx.f4.f64 * f27.f64));
	// fmuls f4,f1,f27
	ctx.f4.f64 = double(float(ctx.f1.f64 * f27.f64));
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f0,f3,f7
	f0.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fadds f10,f9,f6
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f4,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fdivs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fadds f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 + f0.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f3,f6,f6
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fadds f1,f6,f11
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f4,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f0,f5,f2
	f0.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f12,f5,f5,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f11,f4,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,11776(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11776);
	f0.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab20
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_823BEDB4"))) PPC_WEAK_FUNC(sub_823BEDB4);
PPC_FUNC_IMPL(__imp__sub_823BEDB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEDB8"))) PPC_WEAK_FUNC(sub_823BEDB8);
PPC_FUNC_IMPL(__imp__sub_823BEDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
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
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaad8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - f0.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f2,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsubs f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// lfs f0,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,24192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24192);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f30,f9,f1
	f30.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f29,f5,f10
	f29.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f31,f3,f3
	f31.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fmuls f28,f10,f3
	f28.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f20,f5,f3
	f20.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f27,f2,f2
	f27.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f26,f1,f11
	f26.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f25,f2,f6
	f25.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fsubs f24,f12,f7
	f24.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmadds f4,f6,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f22,f12,f30
	f22.f64 = double(float(ctx.f12.f64 - f30.f64));
	// fnmsubs f7,f12,f2,f7
	ctx.f7.f64 = double(float(-(ctx.f12.f64 * ctx.f2.f64 - ctx.f7.f64)));
	// fmadds f31,f9,f9,f31
	f31.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + f31.f64));
	// fmsubs f28,f12,f11,f28
	f28.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - f28.f64));
	// fmuls f23,f9,f11
	f23.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f27,f10,f10,f27
	f27.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + f27.f64));
	// fmsubs f10,f10,f6,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 - f26.f64));
	// fmsubs f21,f1,f2,f29
	f21.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - f29.f64));
	// fmuls f26,f24,f6
	f26.f64 = double(float(f24.f64 * ctx.f6.f64));
	// fmuls f24,f12,f6
	f24.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmadds f4,f1,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fsubs f29,f1,f29
	f29.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fmadds f31,f12,f12,f31
	f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f31.f64));
	// fmsubs f12,f5,f12,f30
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 - f30.f64));
	// fmsubs f5,f5,f11,f25
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - f25.f64));
	// fmadds f30,f11,f11,f27
	f30.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + f27.f64));
	// fmsubs f2,f3,f2,f23
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - f23.f64));
	// fmsubs f9,f9,f6,f20
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 - f20.f64));
	// fmsubs f11,f22,f11,f26
	ctx.f11.f64 = double(float(f22.f64 * ctx.f11.f64 - f26.f64));
	// fmsubs f1,f1,f3,f24
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 - f24.f64));
	// fmuls f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f28,f28,f4
	f28.f64 = double(float(f28.f64 * ctx.f4.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f27,f21,f31
	f27.f64 = double(float(f21.f64 * f31.f64));
	// fmuls f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmadds f12,f29,f3,f11
	ctx.f12.f64 = double(float(f29.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmuls f11,f1,f30
	ctx.f11.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fadds f5,f10,f28
	ctx.f5.f64 = double(float(ctx.f10.f64 + f28.f64));
	// fadds f7,f27,f7
	ctx.f7.f64 = double(float(f27.f64 + ctx.f7.f64));
	// fadds f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fadds f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f0,f7,f6
	f0.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f11,f2,f3
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fdivs f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 * ctx.f10.f64));
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,11776(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11776);
	f0.f64 = double(temp.f32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fadds f13,f3,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fmadds f12,f6,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f11,f9,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + f0.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab24
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_823BEF70"))) PPC_WEAK_FUNC(sub_823BEF70);
PPC_FUNC_IMPL(__imp__sub_823BEF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF74"))) PPC_WEAK_FUNC(sub_823BEF74);
PPC_FUNC_IMPL(__imp__sub_823BEF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEF78"))) PPC_WEAK_FUNC(sub_823BEF78);
PPC_FUNC_IMPL(__imp__sub_823BEF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x823bf02c
	if (!cr6.gt) goto loc_823BF02C;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x823befe8
	if (cr6.lt) goto loc_823BEFE8;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
loc_823BEFA4:
	// lfs f0,-32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf02c
	if (!cr6.eq) goto loc_823BF02C;
	// lfs f0,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf018
	if (!cr6.eq) goto loc_823BF018;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf020
	if (!cr6.eq) goto loc_823BF020;
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf028
	if (!cr6.eq) goto loc_823BF028;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r4,-3
	ctx.r9.s64 = ctx.r4.s64 + -3;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x823befa4
	if (cr6.lt) goto loc_823BEFA4;
loc_823BEFE8:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bge cr6,0x823bf02c
	if (!cr6.lt) goto loc_823BF02C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_823BEFF8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf02c
	if (!cr6.eq) goto loc_823BF02C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x823beff8
	if (cr6.lt) goto loc_823BEFF8;
	// b 0x823bf02c
	goto loc_823BF02C;
loc_823BF018:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x823bf02c
	goto loc_823BF02C;
loc_823BF020:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x823bf02c
	goto loc_823BF02C;
loc_823BF028:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
loc_823BF02C:
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x823bf0d4
	if (!cr6.eq) goto loc_823BF0D4;
	// stfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x823bf098
	if (cr6.eq) goto loc_823BF098;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,16(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
loc_823BF098:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// add r11,r10,r5
	r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfsx f0,r10,r5
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823BF0D4:
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r4,-2
	r11.s64 = ctx.r4.s64 + -2;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lfs f0,-16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	f0.f64 = double(temp.f32);
	// blt cr6,0x823bf184
	if (cr6.lt) goto loc_823BF184;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x823bf144
	if (cr6.lt) goto loc_823BF144;
	// addi r10,r11,-2
	ctx.r10.s64 = r11.s64 + -2;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_823BF104:
	// lfs f12,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x823bf184
	if (!cr6.eq) goto loc_823BF184;
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x823bf170
	if (!cr6.eq) goto loc_823BF170;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x823bf178
	if (!cr6.eq) goto loc_823BF178;
	// lfs f12,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x823bf180
	if (!cr6.eq) goto loc_823BF180;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x823bf104
	if (!cr6.lt) goto loc_823BF104;
loc_823BF144:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x823bf184
	if (cr6.lt) goto loc_823BF184;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_823BF154:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x823bf184
	if (!cr6.eq) goto loc_823BF184;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bge 0x823bf154
	if (!cr0.lt) goto loc_823BF154;
	// b 0x823bf184
	goto loc_823BF184;
loc_823BF170:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823bf184
	goto loc_823BF184;
loc_823BF178:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// b 0x823bf184
	goto loc_823BF184;
loc_823BF180:
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
loc_823BF184:
	// stfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r8,r30,1
	ctx.r8.s64 = r30.s64 + 1;
	// li r11,0
	r11.s64 = 0;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f12,12(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// bgt cr6,0x823bf394
	if (cr6.gt) goto loc_823BF394;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_823BF1D0:
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmsubs f2,f4,f5,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// blt cr6,0x823bf210
	if (cr6.lt) goto loc_823BF210;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x823bf384
	if (cr6.lt) goto loc_823BF384;
loc_823BF210:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x823bf2f4
	if (cr6.lt) goto loc_823BF2F4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
loc_823BF224:
	// lfs f9,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f6,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f11,f3,f2,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x823bf35c
	if (cr6.gt) goto loc_823BF35C;
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f9,f3,f2,f1
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// bgt cr6,0x823bf348
	if (cr6.gt) goto loc_823BF348;
	// lfs f9,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f11,f3,f2,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x823bf350
	if (cr6.gt) goto loc_823BF350;
	// lfs f11,-36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmsubs f2,f5,f4,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x823bf358
	if (cr6.gt) goto loc_823BF358;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bgt cr6,0x823bf224
	if (cr6.gt) goto loc_823BF224;
loc_823BF2F4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x823bf35c
	if (!cr6.gt) goto loc_823BF35C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823BF308:
	// lfs f11,-20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f5,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmuls f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmsubs f2,f7,f4,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x823bf35c
	if (cr6.gt) goto loc_823BF35C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bgt 0x823bf308
	if (cr0.gt) goto loc_823BF308;
	// b 0x823bf35c
	goto loc_823BF35C;
loc_823BF348:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823bf35c
	goto loc_823BF35C;
loc_823BF350:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// b 0x823bf35c
	goto loc_823BF35C;
loc_823BF358:
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
loc_823BF35C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_823BF384:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ble cr6,0x823bf1d0
	if (!cr6.gt) goto loc_823BF1D0;
loc_823BF394:
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x823bf3d0
	if (cr6.eq) goto loc_823BF3D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
loc_823BF3D0:
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// blt cr6,0x823bf5d4
	if (cr6.lt) goto loc_823BF5D4;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + r31.u64;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_823BF3FC:
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f10
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmsubs f2,f4,f5,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// blt cr6,0x823bf43c
	if (cr6.lt) goto loc_823BF43C;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// bgt cr6,0x823bf5c4
	if (cr6.gt) goto loc_823BF5C4;
loc_823BF43C:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// ble cr6,0x823bf59c
	if (!cr6.gt) goto loc_823BF59C;
	// subf r10,r7,r11
	ctx.r10.s64 = r11.s64 - ctx.r7.s64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x823bf530
	if (cr6.lt) goto loc_823BF530;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
loc_823BF45C:
	// lfs f9,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f6,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmsubs f11,f3,f2,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x823bf59c
	if (cr6.gt) goto loc_823BF59C;
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f3,f12,f10
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmsubs f9,f2,f3,f1
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 - ctx.f1.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, f0.f64);
	// bgt cr6,0x823bf588
	if (cr6.gt) goto loc_823BF588;
	// lfs f9,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f2,f11,f9
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmsubs f11,f2,f3,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 - ctx.f1.f64));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bgt cr6,0x823bf590
	if (cr6.gt) goto loc_823BF590;
	// lfs f11,-36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmsubs f2,f5,f4,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x823bf598
	if (cr6.gt) goto loc_823BF598;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x823bf45c
	if (cr6.gt) goto loc_823BF45C;
loc_823BF530:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// ble cr6,0x823bf59c
	if (!cr6.gt) goto loc_823BF59C;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823BF544:
	// lfs f11,-20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f5,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmuls f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmsubs f2,f4,f7,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 - ctx.f3.f64));
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x823bf59c
	if (cr6.gt) goto loc_823BF59C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bgt cr6,0x823bf544
	if (cr6.gt) goto loc_823BF544;
	// b 0x823bf59c
	goto loc_823BF59C;
loc_823BF588:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823bf59c
	goto loc_823BF59C;
loc_823BF590:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// b 0x823bf59c
	goto loc_823BF59C;
loc_823BF598:
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
loc_823BF59C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_823BF5C4:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// cmpw cr6,r6,r30
	cr6.compare<int32_t>(ctx.r6.s32, r30.s32, xer);
	// bge cr6,0x823bf3fc
	if (!cr6.lt) goto loc_823BF3FC;
loc_823BF5D4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823bf608
	if (cr6.eq) goto loc_823BF608;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
loc_823BF608:
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_823BF614"))) PPC_WEAK_FUNC(sub_823BF614);
PPC_FUNC_IMPL(__imp__sub_823BF614) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF618"))) PPC_WEAK_FUNC(sub_823BF618);
PPC_FUNC_IMPL(__imp__sub_823BF618) {
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
	// addi r9,r11,11784
	ctx.r9.s64 = r11.s64 + 11784;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bf65c
	if (!cr6.gt) goto loc_823BF65C;
loc_823BF644:
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
	// bgt cr6,0x823bf644
	if (cr6.gt) goto loc_823BF644;
loc_823BF65C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bf674
	if (cr6.eq) goto loc_823BF674;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BF674:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BF684"))) PPC_WEAK_FUNC(sub_823BF684);
PPC_FUNC_IMPL(__imp__sub_823BF684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF688"))) PPC_WEAK_FUNC(sub_823BF688);
PPC_FUNC_IMPL(__imp__sub_823BF688) {
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
	// addi r9,r11,11796
	ctx.r9.s64 = r11.s64 + 11796;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bf6cc
	if (!cr6.gt) goto loc_823BF6CC;
loc_823BF6B4:
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
	// bgt cr6,0x823bf6b4
	if (cr6.gt) goto loc_823BF6B4;
loc_823BF6CC:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bf6e4
	if (cr6.eq) goto loc_823BF6E4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BF6E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BF6F4"))) PPC_WEAK_FUNC(sub_823BF6F4);
PPC_FUNC_IMPL(__imp__sub_823BF6F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF6F8"))) PPC_WEAK_FUNC(sub_823BF6F8);
PPC_FUNC_IMPL(__imp__sub_823BF6F8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r28,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r28.s64 = r11.s32 >> 4;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// srawi r10,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// addze. r27,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r27.s64 = temp.s64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x823bf808
	if (!cr0.gt) goto loc_823BF808;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// rlwinm r11,r27,4,0,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r3
	r26.u64 = r11.u64 + ctx.r3.u64;
loc_823BF730:
	// addi r26,r26,-16
	r26.s64 = r26.s64 + -16;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r25,r25,-2
	r25.s64 = r25.s64 + -2;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(r26.u32 + 0);
	// mr r29,r27
	r29.u64 = r27.u64;
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(r26.u32 + 8);
	// cmpw cr6,r25,r28
	cr6.compare<int32_t>(r25.s32, r28.s32, xer);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// bge cr6,0x823bf7b8
	if (!cr6.lt) goto loc_823BF7B8;
loc_823BF760:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r24
	ctr.u64 = r24.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// addi r4,r3,-16
	ctx.r4.s64 = ctx.r3.s64 + -16;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bf784
	if (cr6.eq) goto loc_823BF784;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_823BF784:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
	// ldx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + r30.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stdx r6,r11,r30
	PPC_STORE_U64(r11.u32 + r30.u32, ctx.r6.u64);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// blt cr6,0x823bf760
	if (cr6.lt) goto loc_823BF760;
loc_823BF7B8:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// bne cr6,0x823bf7e8
	if (!cr6.eq) goto loc_823BF7E8;
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
	// ld r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// stdx r7,r10,r30
	PPC_STORE_U64(ctx.r10.u32 + r30.u32, ctx.r7.u64);
	// ld r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
loc_823BF7E8:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823be858
	sub_823BE858(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x823bf730
	if (cr6.gt) goto loc_823BF730;
loc_823BF808:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_823BF80C"))) PPC_WEAK_FUNC(sub_823BF80C);
PPC_FUNC_IMPL(__imp__sub_823BF80C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_823BF810"))) PPC_WEAK_FUNC(sub_823BF810);
PPC_FUNC_IMPL(__imp__sub_823BF810) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bf880
	if (cr6.eq) goto loc_823BF880;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r4,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r4.u64);
	// std r6,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r6.u64);
	// std r5,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r5.u64);
loc_823BF880:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bf8d4
	if (cr6.eq) goto loc_823BF8D4;
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r7.u64);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r4.u64);
	// std r6,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r6.u64);
	// std r5,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r5.u64);
loc_823BF8D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bf928
	if (cr6.eq) goto loc_823BF928;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r6.u64);
	// std r5,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r5.u64);
	// std r4,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r4.u64);
loc_823BF928:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823BF92C"))) PPC_WEAK_FUNC(sub_823BF92C);
PPC_FUNC_IMPL(__imp__sub_823BF92C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_823BF930"))) PPC_WEAK_FUNC(sub_823BF930);
PPC_FUNC_IMPL(__imp__sub_823BF930) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lfs f13,11776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11776);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmuls f0,f3,f3
	f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fadds f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f11,f9,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f10,f6,f1
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmadds f9,f2,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + f0.f64));
	// fmadds f8,f1,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fadds f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_823BF9DC"))) PPC_WEAK_FUNC(sub_823BF9DC);
PPC_FUNC_IMPL(__imp__sub_823BF9DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF9E0"))) PPC_WEAK_FUNC(sub_823BF9E0);
PPC_FUNC_IMPL(__imp__sub_823BF9E0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r11,11776
	ctx.r10.s64 = r11.s64 + 11776;
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// lwz r7,24192(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,6240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6240);
	f0.f64 = double(temp.f32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f13,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// bgt cr6,0x823bfa58
	if (cr6.gt) goto loc_823BFA58;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x823bfb50
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_823BFB50;
	// bdzf 4*cr6+eq,0x823bfb74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_823BFB74;
	// bne cr6,0x823bfb9c
	if (!cr6.eq) goto loc_823BFB9C;
	// lfs f13,-16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
loc_823BFA58:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823bfb28
	if (cr6.eq) goto loc_823BFB28;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_823BFA70:
	// lfs f10,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f6,-8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fnmsubs f1,f0,f0,f2
	ctx.f1.f64 = double(float(-(f0.f64 * f0.f64 - ctx.f2.f64)));
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x823bfb18
	if (!cr6.gt) goto loc_823BFB18;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823bfaf4
	if (cr6.eq) goto loc_823BFAF4;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_823BFAB0:
	// lfs f0,-28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28);
	f0.f64 = double(temp.f32);
	// lfs f13,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f13,-28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -28, temp.u32);
	// stfs f12,-24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -24, temp.u32);
	// stfs f10,-20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + -20, temp.u32);
	// stfsu f8,-16(r11)
	temp.f32 = float(ctx.f8.f64);
	ea = -16 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x823bfab0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823BFAB0;
loc_823BFAF4:
	// addi r6,r27,1
	ctx.r6.s64 = r27.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823bf9e0
	sub_823BF9E0(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
loc_823BFB18:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// blt cr6,0x823bfa70
	if (cr6.lt) goto loc_823BFA70;
loc_823BFB28:
	// stfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f0,12(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_823BFB50:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// addi r5,r30,-32
	ctx.r5.s64 = r30.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823bf930
	sub_823BF930(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x823bfa58
	goto loc_823BFA58;
loc_823BFB74:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// addi r6,r30,-48
	ctx.r6.s64 = r30.s64 + -48;
	// addi r5,r30,-32
	ctx.r5.s64 = r30.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bec28
	sub_823BEC28(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f0.f64 = double(temp.f32);
	// b 0x823bfa58
	goto loc_823BFA58;
loc_823BFB9C:
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// addi r7,r30,-64
	ctx.r7.s64 = r30.s64 + -64;
	// addi r6,r30,-48
	ctx.r6.s64 = r30.s64 + -48;
	// addi r5,r30,-32
	ctx.r5.s64 = r30.s64 + -32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bedb8
	sub_823BEDB8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f11,12(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r28.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_823BFBD4"))) PPC_WEAK_FUNC(sub_823BFBD4);
PPC_FUNC_IMPL(__imp__sub_823BFBD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bfb38
	// ERROR 823BFB38
	return;
}

__attribute__((alias("__imp__sub_823BFBD8"))) PPC_WEAK_FUNC(sub_823BFBD8);
PPC_FUNC_IMPL(__imp__sub_823BFBD8) {
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
	// addi r9,r10,11824
	ctx.r9.s64 = ctx.r10.s64 + 11824;
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

__attribute__((alias("__imp__sub_823BFC30"))) PPC_WEAK_FUNC(sub_823BFC30);
PPC_FUNC_IMPL(__imp__sub_823BFC30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFC34"))) PPC_WEAK_FUNC(sub_823BFC34);
PPC_FUNC_IMPL(__imp__sub_823BFC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFC38"))) PPC_WEAK_FUNC(sub_823BFC38);
PPC_FUNC_IMPL(__imp__sub_823BFC38) {
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
	// addi r9,r11,11824
	ctx.r9.s64 = r11.s64 + 11824;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bfc7c
	if (!cr6.gt) goto loc_823BFC7C;
loc_823BFC64:
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
	// bgt cr6,0x823bfc64
	if (cr6.gt) goto loc_823BFC64;
loc_823BFC7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bfe68
	sub_823BFE68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,11784
	ctx.r10.s64 = r11.s64 + 11784;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823bfcb8
	if (!cr6.gt) goto loc_823BFCB8;
loc_823BFCA0:
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
	// bgt cr6,0x823bfca0
	if (cr6.gt) goto loc_823BFCA0;
loc_823BFCB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BFCC8"))) PPC_WEAK_FUNC(sub_823BFCC8);
PPC_FUNC_IMPL(__imp__sub_823BFCC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFCCC"))) PPC_WEAK_FUNC(sub_823BFCCC);
PPC_FUNC_IMPL(__imp__sub_823BFCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFCD0"))) PPC_WEAK_FUNC(sub_823BFCD0);
PPC_FUNC_IMPL(__imp__sub_823BFCD0) {
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
	// addi r9,r10,11836
	ctx.r9.s64 = ctx.r10.s64 + 11836;
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

__attribute__((alias("__imp__sub_823BFD28"))) PPC_WEAK_FUNC(sub_823BFD28);
PPC_FUNC_IMPL(__imp__sub_823BFD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFD2C"))) PPC_WEAK_FUNC(sub_823BFD2C);
PPC_FUNC_IMPL(__imp__sub_823BFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFD30"))) PPC_WEAK_FUNC(sub_823BFD30);
PPC_FUNC_IMPL(__imp__sub_823BFD30) {
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
	// addi r9,r11,11836
	ctx.r9.s64 = r11.s64 + 11836;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x823bfd74
	if (!cr6.gt) goto loc_823BFD74;
loc_823BFD5C:
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
	// bgt cr6,0x823bfd5c
	if (cr6.gt) goto loc_823BFD5C;
loc_823BFD74:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bff68
	sub_823BFF68(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,11796
	ctx.r10.s64 = r11.s64 + 11796;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x823bfdb0
	if (!cr6.gt) goto loc_823BFDB0;
loc_823BFD98:
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
	// bgt cr6,0x823bfd98
	if (cr6.gt) goto loc_823BFD98;
loc_823BFDB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_823BFDC0"))) PPC_WEAK_FUNC(sub_823BFDC0);
PPC_FUNC_IMPL(__imp__sub_823BFDC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFDC4"))) PPC_WEAK_FUNC(sub_823BFDC4);
PPC_FUNC_IMPL(__imp__sub_823BFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFDC8"))) PPC_WEAK_FUNC(sub_823BFDC8);
PPC_FUNC_IMPL(__imp__sub_823BFDC8) {
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
	// bl 0x823bfc38
	sub_823BFC38(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bfe00
	if (cr6.eq) goto loc_823BFE00;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BFE00:
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

__attribute__((alias("__imp__sub_823BFE14"))) PPC_WEAK_FUNC(sub_823BFE14);
PPC_FUNC_IMPL(__imp__sub_823BFE14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFE18"))) PPC_WEAK_FUNC(sub_823BFE18);
PPC_FUNC_IMPL(__imp__sub_823BFE18) {
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
	// bl 0x823bfd30
	sub_823BFD30(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823bfe50
	if (cr6.eq) goto loc_823BFE50;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BFE50:
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

__attribute__((alias("__imp__sub_823BFE64"))) PPC_WEAK_FUNC(sub_823BFE64);
PPC_FUNC_IMPL(__imp__sub_823BFE64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFE68"))) PPC_WEAK_FUNC(sub_823BFE68);
PPC_FUNC_IMPL(__imp__sub_823BFE68) {
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
	// beq cr6,0x823bff4c
	if (cr6.eq) goto loc_823BFF4C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823bfedc
	if (!cr6.eq) goto loc_823BFEDC;
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
	// beq cr6,0x823bff4c
	if (cr6.eq) goto loc_823BFF4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823b5b98
	sub_823B5B98(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823bff4c
	goto loc_823BFF4C;
loc_823BFEDC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bfbd8
	sub_823BFBD8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823bff08
	if (!cr6.gt) goto loc_823BFF08;
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
loc_823BFF08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c480
	sub_8254C480(ctx, base);
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
	// bl 0x823bfc38
	sub_823BFC38(ctx, base);
loc_823BFF4C:
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

__attribute__((alias("__imp__sub_823BFF60"))) PPC_WEAK_FUNC(sub_823BFF60);
PPC_FUNC_IMPL(__imp__sub_823BFF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFF64"))) PPC_WEAK_FUNC(sub_823BFF64);
PPC_FUNC_IMPL(__imp__sub_823BFF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFF68"))) PPC_WEAK_FUNC(sub_823BFF68);
PPC_FUNC_IMPL(__imp__sub_823BFF68) {
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
	// beq cr6,0x823c004c
	if (cr6.eq) goto loc_823C004C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823bffdc
	if (!cr6.eq) goto loc_823BFFDC;
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
	// beq cr6,0x823c004c
	if (cr6.eq) goto loc_823C004C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x824a7330
	sub_824A7330(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x823c004c
	goto loc_823C004C;
loc_823BFFDC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bfcd0
	sub_823BFCD0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823c0008
	if (!cr6.gt) goto loc_823C0008;
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
loc_823C0008:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82573340
	sub_82573340(ctx, base);
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
	// bl 0x823bfd30
	sub_823BFD30(ctx, base);
loc_823C004C:
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

__attribute__((alias("__imp__sub_823C0060"))) PPC_WEAK_FUNC(sub_823C0060);
PPC_FUNC_IMPL(__imp__sub_823C0060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C0064"))) PPC_WEAK_FUNC(sub_823C0064);
PPC_FUNC_IMPL(__imp__sub_823C0064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0068"))) PPC_WEAK_FUNC(sub_823C0068);
PPC_FUNC_IMPL(__imp__sub_823C0068) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// ble cr6,0x823c00fc
	if (!cr6.gt) goto loc_823C00FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// rlwinm r29,r11,4,0,27
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r26,r11,5,0,26
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r27,r29,r3
	r27.u64 = r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823bf810
	sub_823BF810(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = r31.s64 - r29.s64;
	// bl 0x823bf810
	sub_823BF810(ctx, base);
	// subf r29,r29,r28
	r29.s64 = r28.s64 - r29.s64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = r28.s64 - r26.s64;
	// bl 0x823bf810
	sub_823BF810(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823bf810
	sub_823BF810(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_823C00FC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823bf810
	sub_823BF810(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823C010C"))) PPC_WEAK_FUNC(sub_823C010C);
PPC_FUNC_IMPL(__imp__sub_823C010C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823C0110"))) PPC_WEAK_FUNC(sub_823C0110);
PPC_FUNC_IMPL(__imp__sub_823C0110) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x823c022c
	if (cr6.eq) goto loc_823C022C;
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x823c022c
	if (cr6.eq) goto loc_823C022C;
	// addi r26,r29,-16
	r26.s64 = r29.s64 + -16;
loc_823C0140:
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = r27.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823c01b4
	if (cr6.eq) goto loc_823C01B4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x823c019c
	if (cr6.eq) goto loc_823C019C;
loc_823C0180:
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r9,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r9.u64);
	// bne cr6,0x823c0180
	if (!cr6.eq) goto loc_823C0180;
loc_823C019C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// std r9,8(r28)
	PPC_STORE_U64(r28.u32 + 8, ctx.r9.u64);
	// b 0x823c021c
	goto loc_823C021C;
loc_823C01B4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	r31.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823c0208
	if (cr6.eq) goto loc_823C0208;
loc_823C01D4:
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = r27.u64;
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823c01d4
	if (!cr6.eq) goto loc_823C01D4;
loc_823C0208:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// std r9,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r9.u64);
loc_823C021C:
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// bne cr6,0x823c0140
	if (!cr6.eq) goto loc_823C0140;
loc_823C022C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_823C0230"))) PPC_WEAK_FUNC(sub_823C0230);
PPC_FUNC_IMPL(__imp__sub_823C0230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_823C0234"))) PPC_WEAK_FUNC(sub_823C0234);
PPC_FUNC_IMPL(__imp__sub_823C0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0238"))) PPC_WEAK_FUNC(sub_823C0238);
PPC_FUNC_IMPL(__imp__sub_823C0238) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// srawi r10,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r10.s64 = r11.s32 >> 4;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r5,-16
	ctx.r5.s64 = ctx.r5.s64 + -16;
	// add r31,r11,r4
	r31.u64 = r11.u64 + ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823c0068
	sub_823C0068(ctx, base);
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(r25.u32, r31.u32, xer);
	// bge cr6,0x823c02d0
	if (!cr6.lt) goto loc_823C02D0;
loc_823C0288:
	// addi r30,r31,-16
	r30.s64 = r31.s64 + -16;
	// mtctr r26
	ctr.u64 = r26.u64;
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
	// bne cr6,0x823c02d0
	if (!cr6.eq) goto loc_823C02D0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c02d0
	if (!cr6.eq) goto loc_823C02D0;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// blt cr6,0x823c0288
	if (cr6.lt) goto loc_823C0288;
loc_823C02D0:
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bge cr6,0x823c031c
	if (!cr6.lt) goto loc_823C031C;
loc_823C02D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c031c
	if (!cr6.eq) goto loc_823C031C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c031c
	if (!cr6.eq) goto loc_823C031C;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// blt cr6,0x823c02d8
	if (cr6.lt) goto loc_823C02D8;
loc_823C031C:
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_823C0324:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// bge cr6,0x823c03b0
	if (!cr6.lt) goto loc_823C03B0;
loc_823C032C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c03a4
	if (!cr6.eq) goto loc_823C03A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c03b0
	if (!cr6.eq) goto loc_823C03B0;
	// mr r11,r27
	r11.u64 = r27.u64;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r4.u64);
	// std r3,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r3.u64);
loc_823C03A4:
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// blt cr6,0x823c032c
	if (cr6.lt) goto loc_823C032C;
loc_823C03B0:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(r28.u32, r25.u32, xer);
	// ble cr6,0x823c0448
	if (!cr6.gt) goto loc_823C0448;
	// addi r30,r28,-16
	r30.s64 = r28.s64 + -16;
loc_823C03BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0430
	if (!cr6.eq) goto loc_823C0430;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0444
	if (!cr6.eq) goto loc_823C0444;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r6,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r6.u64);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r5.u64);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r4.u64);
loc_823C0430:
	// addi r11,r28,-16
	r11.s64 = r28.s64 + -16;
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x823c03bc
	if (cr6.lt) goto loc_823C03BC;
loc_823C0444:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(r28.u32, r25.u32, xer);
loc_823C0448:
	// bne cr6,0x823c04e4
	if (!cr6.eq) goto loc_823C04E4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// beq cr6,0x823c05b8
	if (cr6.eq) goto loc_823C05B8;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// beq cr6,0x823c0494
	if (cr6.eq) goto loc_823C0494;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// ld r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U64(r27.u32 + 8);
	// std r5,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r5.u64);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,8(r27)
	PPC_STORE_U64(r27.u32 + 8, ctx.r6.u64);
	// std r4,0(r27)
	PPC_STORE_U64(r27.u32 + 0, ctx.r4.u64);
loc_823C0494:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// b 0x823c0324
	goto loc_823C0324;
loc_823C04E4:
	// addi r11,r28,-16
	r11.s64 = r28.s64 + -16;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// bne cr6,0x823c0578
	if (!cr6.eq) goto loc_823C0578;
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x823c0538
	if (cr6.eq) goto loc_823C0538;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U64(r28.u32 + 8);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r9.u64);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r5,8(r28)
	PPC_STORE_U64(r28.u32 + 8, ctx.r5.u64);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r4,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r4.u64);
	// std r6,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r6.u64);
loc_823C0538:
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// ld r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r7,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U64(r27.u32 + 8);
	// std r4,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r4.u64);
	// std r5,0(r27)
	PPC_STORE_U64(r27.u32 + 0, ctx.r5.u64);
	// std r6,8(r27)
	PPC_STORE_U64(r27.u32 + 8, ctx.r6.u64);
	// b 0x823c0324
	goto loc_823C0324;
loc_823C0578:
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// ld r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U64(r29.u32 + 8);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r6,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r6.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r3,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r3.u64);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r4.u64);
	// b 0x823c0324
	goto loc_823C0324;
loc_823C05B8:
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r27,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r27.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_823C05C8"))) PPC_WEAK_FUNC(sub_823C05C8);
PPC_FUNC_IMPL(__imp__sub_823C05C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_823C05CC"))) PPC_WEAK_FUNC(sub_823C05CC);
PPC_FUNC_IMPL(__imp__sub_823C05CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C05D0"))) PPC_WEAK_FUNC(sub_823C05D0);
PPC_FUNC_IMPL(__imp__sub_823C05D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// ble cr6,0x823c0650
	if (!cr6.gt) goto loc_823C0650;
	// addi r31,r4,-16
	r31.s64 = ctx.r4.s64 + -16;
loc_823C05F8:
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r5,r11,-16
	ctx.r5.s64 = r11.s64 + -16;
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r5,r5,4
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, r11.u64);
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// bl 0x823be9c8
	sub_823BE9C8(ctx, base);
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// bgt cr6,0x823c05f8
	if (cr6.gt) goto loc_823C05F8;
loc_823C0650:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_823C0654"))) PPC_WEAK_FUNC(sub_823C0654);
PPC_FUNC_IMPL(__imp__sub_823C0654) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823C0658"))) PPC_WEAK_FUNC(sub_823C0658);
PPC_FUNC_IMPL(__imp__sub_823C0658) {
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
	// bl 0x823be020
	sub_823BE020(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823c0690
	if (cr6.eq) goto loc_823C0690;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823C0690:
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

__attribute__((alias("__imp__sub_823C06A4"))) PPC_WEAK_FUNC(sub_823C06A4);
PPC_FUNC_IMPL(__imp__sub_823C06A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C06A8"))) PPC_WEAK_FUNC(sub_823C06A8);
PPC_FUNC_IMPL(__imp__sub_823C06A8) {
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
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x823c0760
	if (!cr6.gt) goto loc_823C0760;
loc_823C06D4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823c0784
	if (!cr6.gt) goto loc_823C0784;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c0238
	sub_823C0238(ctx, base);
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
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r6,r8,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bge cr6,0x823c0740
	if (!cr6.lt) goto loc_823C0740;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c06a8
	sub_823C06A8(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x823c0750
	goto loc_823C0750;
loc_823C0740:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823c06a8
	sub_823C06A8(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_823C0750:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x823c06d4
	if (cr6.gt) goto loc_823C06D4;
loc_823C0760:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823c077c
	if (!cr6.gt) goto loc_823C077C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c0110
	sub_823C0110(ctx, base);
loc_823C077C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_823C0784:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x823c0760
	if (!cr6.gt) goto loc_823C0760;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823c07ac
	if (!cr6.gt) goto loc_823C07AC;
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
	// bl 0x823bf6f8
	sub_823BF6F8(ctx, base);
loc_823C07AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c05d0
	sub_823C05D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_823C07C0"))) PPC_WEAK_FUNC(sub_823C07C0);
PPC_FUNC_IMPL(__imp__sub_823C07C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_823C07C4"))) PPC_WEAK_FUNC(sub_823C07C4);
PPC_FUNC_IMPL(__imp__sub_823C07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C07C8"))) PPC_WEAK_FUNC(sub_823C07C8);
PPC_FUNC_IMPL(__imp__sub_823C07C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C07CC"))) PPC_WEAK_FUNC(sub_823C07CC);
PPC_FUNC_IMPL(__imp__sub_823C07CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C07D0"))) PPC_WEAK_FUNC(sub_823C07D0);
PPC_FUNC_IMPL(__imp__sub_823C07D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C07D8"))) PPC_WEAK_FUNC(sub_823C07D8);
PPC_FUNC_IMPL(__imp__sub_823C07D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C07E0"))) PPC_WEAK_FUNC(sub_823C07E0);
PPC_FUNC_IMPL(__imp__sub_823C07E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C07E8"))) PPC_WEAK_FUNC(sub_823C07E8);
PPC_FUNC_IMPL(__imp__sub_823C07E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C07F0"))) PPC_WEAK_FUNC(sub_823C07F0);
PPC_FUNC_IMPL(__imp__sub_823C07F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r3,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C07F8"))) PPC_WEAK_FUNC(sub_823C07F8);
PPC_FUNC_IMPL(__imp__sub_823C07F8) {
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

__attribute__((alias("__imp__sub_823C0820"))) PPC_WEAK_FUNC(sub_823C0820);
PPC_FUNC_IMPL(__imp__sub_823C0820) {
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

__attribute__((alias("__imp__sub_823C084C"))) PPC_WEAK_FUNC(sub_823C084C);
PPC_FUNC_IMPL(__imp__sub_823C084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0850"))) PPC_WEAK_FUNC(sub_823C0850);
PPC_FUNC_IMPL(__imp__sub_823C0850) {
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

__attribute__((alias("__imp__sub_823C0864"))) PPC_WEAK_FUNC(sub_823C0864);
PPC_FUNC_IMPL(__imp__sub_823C0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

