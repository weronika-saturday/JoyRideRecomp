#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82580010"))) PPC_WEAK_FUNC(sub_82580010);
PPC_FUNC_IMPL(__imp__sub_82580010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580014"))) PPC_WEAK_FUNC(sub_82580014);
PPC_FUNC_IMPL(__imp__sub_82580014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580018"))) PPC_WEAK_FUNC(sub_82580018);
PPC_FUNC_IMPL(__imp__sub_82580018) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82580048
	if (cr6.eq) goto loc_82580048;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8258004c
	if (!cr6.eq) goto loc_8258004C;
loc_82580048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258004C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8257e710
	sub_8257E710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82580068"))) PPC_WEAK_FUNC(sub_82580068);
PPC_FUNC_IMPL(__imp__sub_82580068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258006C"))) PPC_WEAK_FUNC(sub_8258006C);
PPC_FUNC_IMPL(__imp__sub_8258006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580070"))) PPC_WEAK_FUNC(sub_82580070);
PPC_FUNC_IMPL(__imp__sub_82580070) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825800a8
	if (!cr6.gt) goto loc_825800A8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_825800A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257bf60
	sub_8257BF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x828883b0
	sub_828883B0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825800d8
	if (cr6.eq) goto loc_825800D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825800dc
	if (!cr6.eq) goto loc_825800DC;
loc_825800D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825800DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8257f160
	sub_8257F160(ctx, base);
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

__attribute__((alias("__imp__sub_825800FC"))) PPC_WEAK_FUNC(sub_825800FC);
PPC_FUNC_IMPL(__imp__sub_825800FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580100"))) PPC_WEAK_FUNC(sub_82580100);
PPC_FUNC_IMPL(__imp__sub_82580100) {
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
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,5120
	ctx.r5.s64 = 5120;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r4,r10,-18004
	ctx.r4.s64 = ctx.r10.s64 + -18004;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x8288a3a0
	sub_8288A3A0(ctx, base);
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

__attribute__((alias("__imp__sub_82580150"))) PPC_WEAK_FUNC(sub_82580150);
PPC_FUNC_IMPL(__imp__sub_82580150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580154"))) PPC_WEAK_FUNC(sub_82580154);
PPC_FUNC_IMPL(__imp__sub_82580154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580158"))) PPC_WEAK_FUNC(sub_82580158);
PPC_FUNC_IMPL(__imp__sub_82580158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258015C"))) PPC_WEAK_FUNC(sub_8258015C);
PPC_FUNC_IMPL(__imp__sub_8258015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580160"))) PPC_WEAK_FUNC(sub_82580160);
PPC_FUNC_IMPL(__imp__sub_82580160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,84(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	r11.s64 = 0;
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r11.u8);
}

__attribute__((alias("__imp__sub_82580174"))) PPC_WEAK_FUNC(sub_82580174);
PPC_FUNC_IMPL(__imp__sub_82580174) {
	PPC_FUNC_PROLOGUE();
	// b 0x8288bc20
	sub_8288BC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580178"))) PPC_WEAK_FUNC(sub_82580178);
PPC_FUNC_IMPL(__imp__sub_82580178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258017C"))) PPC_WEAK_FUNC(sub_8258017C);
PPC_FUNC_IMPL(__imp__sub_8258017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580180"))) PPC_WEAK_FUNC(sub_82580180);
PPC_FUNC_IMPL(__imp__sub_82580180) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
}

__attribute__((alias("__imp__sub_82580184"))) PPC_WEAK_FUNC(sub_82580184);
PPC_FUNC_IMPL(__imp__sub_82580184) {
	PPC_FUNC_PROLOGUE();
	// b 0x826c6630
	sub_826C6630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82580188"))) PPC_WEAK_FUNC(sub_82580188);
PPC_FUNC_IMPL(__imp__sub_82580188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258018C"))) PPC_WEAK_FUNC(sub_8258018C);
PPC_FUNC_IMPL(__imp__sub_8258018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580190"))) PPC_WEAK_FUNC(sub_82580190);
PPC_FUNC_IMPL(__imp__sub_82580190) {
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
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
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

__attribute__((alias("__imp__sub_825801EC"))) PPC_WEAK_FUNC(sub_825801EC);
PPC_FUNC_IMPL(__imp__sub_825801EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825801F0"))) PPC_WEAK_FUNC(sub_825801F0);
PPC_FUNC_IMPL(__imp__sub_825801F0) {
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
	// lbz r11,85(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82580240
	if (cr6.eq) goto loc_82580240;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r30,85(r31)
	PPC_STORE_U8(r31.u32 + 85, r30.u8);
	// beq cr6,0x82580240
	if (cr6.eq) goto loc_82580240;
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
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82580240:
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82580250
	if (cr6.eq) goto loc_82580250;
	// bl 0x8288bd10
	sub_8288BD10(ctx, base);
loc_82580250:
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

__attribute__((alias("__imp__sub_82580264"))) PPC_WEAK_FUNC(sub_82580264);
PPC_FUNC_IMPL(__imp__sub_82580264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580268"))) PPC_WEAK_FUNC(sub_82580268);
PPC_FUNC_IMPL(__imp__sub_82580268) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236f6e8
	sub_8236F6E8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825802a8
	if (!cr6.eq) goto loc_825802A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825802A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825802B8"))) PPC_WEAK_FUNC(sub_825802B8);
PPC_FUNC_IMPL(__imp__sub_825802B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825802BC"))) PPC_WEAK_FUNC(sub_825802BC);
PPC_FUNC_IMPL(__imp__sub_825802BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825802C0"))) PPC_WEAK_FUNC(sub_825802C0);
PPC_FUNC_IMPL(__imp__sub_825802C0) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82580318
	if (cr6.eq) goto loc_82580318;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82727be0
	sub_82727BE0(ctx, base);
loc_82580318:
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

__attribute__((alias("__imp__sub_8258032C"))) PPC_WEAK_FUNC(sub_8258032C);
PPC_FUNC_IMPL(__imp__sub_8258032C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580330"))) PPC_WEAK_FUNC(sub_82580330);
PPC_FUNC_IMPL(__imp__sub_82580330) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,36
	r30.s64 = ctx.r3.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x825803a0
	if (cr6.eq) goto loc_825803A0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82580390
	if (cr6.eq) goto loc_82580390;
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
loc_82580390:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82727be0
	sub_82727BE0(ctx, base);
loc_825803A0:
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

__attribute__((alias("__imp__sub_825803B4"))) PPC_WEAK_FUNC(sub_825803B4);
PPC_FUNC_IMPL(__imp__sub_825803B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825803B8"))) PPC_WEAK_FUNC(sub_825803B8);
PPC_FUNC_IMPL(__imp__sub_825803B8) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82580414
	if (cr6.eq) goto loc_82580414;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82727be0
	sub_82727BE0(ctx, base);
loc_82580414:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82580428"))) PPC_WEAK_FUNC(sub_82580428);
PPC_FUNC_IMPL(__imp__sub_82580428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258042C"))) PPC_WEAK_FUNC(sub_8258042C);
PPC_FUNC_IMPL(__imp__sub_8258042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580430"))) PPC_WEAK_FUNC(sub_82580430);
PPC_FUNC_IMPL(__imp__sub_82580430) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82580330
	sub_82580330(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_82580478"))) PPC_WEAK_FUNC(sub_82580478);
PPC_FUNC_IMPL(__imp__sub_82580478) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258047C"))) PPC_WEAK_FUNC(sub_8258047C);
PPC_FUNC_IMPL(__imp__sub_8258047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580480"))) PPC_WEAK_FUNC(sub_82580480);
PPC_FUNC_IMPL(__imp__sub_82580480) {
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
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r5,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,1240
	ctx.r9.s64 = ctx.r1.s64 + 1240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r8.u32);
	// bl 0x828eaf88
	sub_828EAF88(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r7,15
	cr6.compare<uint32_t>(ctx.r7.u32, 15, xer);
	// blt cr6,0x8258051c
	if (cr6.lt) goto loc_8258051C;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258051c
	if (cr6.eq) goto loc_8258051C;
	// bl 0x82581280
	sub_82581280(ctx, base);
loc_8258051C:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
loc_82580538:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82580538
	if (!cr6.eq) goto loc_82580538;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,2992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82581198
	sub_82581198(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82580590
	if (cr6.lt) goto loc_82580590;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82580590:
	// lwz r3,1168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825805AC"))) PPC_WEAK_FUNC(sub_825805AC);
PPC_FUNC_IMPL(__imp__sub_825805AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825805B0"))) PPC_WEAK_FUNC(sub_825805B0);
PPC_FUNC_IMPL(__imp__sub_825805B0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// beq cr6,0x82580710
	if (cr6.eq) goto loc_82580710;
	// li r31,0
	r31.s64 = 0;
	// li r30,15
	r30.s64 = 15;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// addi r4,r4,192
	ctx.r4.s64 = ctx.r4.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82580618
	if (!cr6.lt) goto loc_82580618;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82580618:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82580638
	if (cr6.lt) goto loc_82580638;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82580638:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236f6e8
	sub_8236F6E8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82580710
	if (cr6.eq) goto loc_82580710;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x825806a8
	if (cr6.eq) goto loc_825806A8;
loc_82580684:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// beq cr6,0x825806a0
	if (cr6.eq) goto loc_825806A0;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82580684
	if (!cr6.eq) goto loc_82580684;
	// b 0x825806a8
	goto loc_825806A8;
loc_825806A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580f78
	sub_82580F78(ctx, base);
loc_825806A8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82580710
	if (!cr6.eq) goto loc_82580710;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825815d0
	sub_825815D0(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82580704
	if (cr6.eq) goto loc_82580704;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82727be0
	sub_82727BE0(ctx, base);
loc_82580704:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82580330
	sub_82580330(ctx, base);
loc_82580710:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8258071C"))) PPC_WEAK_FUNC(sub_8258071C);
PPC_FUNC_IMPL(__imp__sub_8258071C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82580720"))) PPC_WEAK_FUNC(sub_82580720);
PPC_FUNC_IMPL(__imp__sub_82580720) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// ble cr6,0x825809bc
	if (!cr6.gt) goto loc_825809BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8236f6e8
	sub_8236F6E8(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258078c
	if (cr6.eq) goto loc_8258078C;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825807b4
	if (!cr6.eq) goto loc_825807B4;
loc_8258078C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-17876
	ctx.r5.s64 = r11.s64 + -17876;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82580480
	sub_82580480(ctx, base);
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x828e9458
	return;
loc_825807B4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-17888
	ctx.r5.s64 = r11.s64 + -17888;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82580480
	sub_82580480(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,329
	ctx.r6.s64 = 329;
	// addi r26,r10,-17952
	r26.s64 = ctx.r10.s64 + -17952;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82580190
	sub_82580190(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// li r6,18
	ctx.r6.s64 = 18;
	// li r31,0
	r31.s64 = 0;
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r8,333
	ctx.r8.s64 = 333;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// li r3,80
	ctx.r3.s64 = 80;
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
	// beq cr6,0x82580848
	if (cr6.eq) goto loc_82580848;
	// bl 0x8257cfc8
	sub_8257CFC8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8258084c
	goto loc_8258084C;
loc_82580848:
	// mr r26,r31
	r26.u64 = r31.u64;
loc_8258084C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8288bd90
	sub_8288BD90(ctx, base);
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// addi r11,r29,52
	r11.s64 = r29.s64 + 52;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8258086c
	if (cr6.lt) goto loc_8258086C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8258086C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822f1278
	sub_822F1278(ctx, base);
	// mr r11,r27
	r11.u64 = r27.u64;
loc_8258087C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258087c
	if (!cr6.eq) goto loc_8258087C;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x825808b8
	if (!cr6.lt) goto loc_825808B8;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_825808B8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8257d0a0
	sub_8257D0A0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8288bd98
	sub_8288BD98(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8257d5c8
	sub_8257D5C8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
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
	// beq cr6,0x82580924
	if (cr6.eq) goto loc_82580924;
loc_825808F8:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x8257c760
	sub_8257C760(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x825808f8
	if (!cr6.eq) goto loc_825808F8;
loc_82580924:
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82580968
	if (cr6.eq) goto loc_82580968;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82727be0
	sub_82727BE0(ctx, base);
loc_82580968:
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// bl 0x82580330
	sub_82580330(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x825809bc
	if (cr6.lt) goto loc_825809BC;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825809BC:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_825809C8"))) PPC_WEAK_FUNC(sub_825809C8);
PPC_FUNC_IMPL(__imp__sub_825809C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825809CC"))) PPC_WEAK_FUNC(sub_825809CC);
PPC_FUNC_IMPL(__imp__sub_825809CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825809D0"))) PPC_WEAK_FUNC(sub_825809D0);
PPC_FUNC_IMPL(__imp__sub_825809D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82580720
	sub_82580720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825809EC"))) PPC_WEAK_FUNC(sub_825809EC);
PPC_FUNC_IMPL(__imp__sub_825809EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825809F0"))) PPC_WEAK_FUNC(sub_825809F0);
PPC_FUNC_IMPL(__imp__sub_825809F0) {
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
	// lbz r11,84(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82580a38
	if (!cr6.eq) goto loc_82580A38;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x8288bf48
	sub_8288BF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82580a38
	if (cr6.lt) goto loc_82580A38;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stb r11,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r10,2512
	ctx.r3.s64 = ctx.r10.s64 + 2512;
	// bl 0x8288bcd8
	sub_8288BCD8(ctx, base);
loc_82580A38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82580A48"))) PPC_WEAK_FUNC(sub_82580A48);
PPC_FUNC_IMPL(__imp__sub_82580A48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580A4C"))) PPC_WEAK_FUNC(sub_82580A4C);
PPC_FUNC_IMPL(__imp__sub_82580A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580A50"))) PPC_WEAK_FUNC(sub_82580A50);
PPC_FUNC_IMPL(__imp__sub_82580A50) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// beq cr6,0x82580b7c
	if (cr6.eq) goto loc_82580B7C;
	// li r31,0
	r31.s64 = 0;
	// li r29,15
	r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r31.u8);
	// addi r4,r4,192
	ctx.r4.s64 = ctx.r4.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82580ab8
	if (!cr6.lt) goto loc_82580AB8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82580AB8:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82580ad8
	if (cr6.lt) goto loc_82580AD8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82580AD8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r31.u8);
	// lwz r11,-21052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21052);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82580b7c
	if (cr6.eq) goto loc_82580B7C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-21056(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21056);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82580b7c
	if (cr6.eq) goto loc_82580B7C;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8236f6e8
	sub_8236F6E8(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82580b68
	if (!cr6.eq) goto loc_82580B68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82580fd8
	sub_82580FD8(ctx, base);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82581df0
	sub_82581DF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9468
	return;
loc_82580B68:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82581df0
	sub_82581DF0(ctx, base);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_82580B7C:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82580B88"))) PPC_WEAK_FUNC(sub_82580B88);
PPC_FUNC_IMPL(__imp__sub_82580B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82580B8C"))) PPC_WEAK_FUNC(sub_82580B8C);
PPC_FUNC_IMPL(__imp__sub_82580B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580B90"))) PPC_WEAK_FUNC(sub_82580B90);
PPC_FUNC_IMPL(__imp__sub_82580B90) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8236f640
	sub_8236F640(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stb r30,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r30.u8);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r7,r11,20
	ctx.r7.s64 = r11.s64 + 20;
	// stb r30,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r30.u8);
	// addi r6,r9,-17964
	ctx.r6.s64 = ctx.r9.s64 + -17964;
	// stb r30,85(r31)
	PPC_STORE_U8(r31.u32 + 85, r30.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r11,r4,13435
	r11.s64 = ctx.r4.s64 + 13435;
	// stw r6,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r6.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// stw r5,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// addi r3,r3,-17868
	ctx.r3.s64 = ctx.r3.s64 + -17868;
	// stb r30,648(r31)
	PPC_STORE_U8(r31.u32 + 648, r30.u8);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,21644(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21644);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82580ca4
	if (cr6.eq) goto loc_82580CA4;
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
	// beq cr6,0x82580ca4
	if (cr6.eq) goto loc_82580CA4;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82580ca8
	if (!cr6.eq) goto loc_82580CA8;
loc_82580CA4:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_82580CA8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82580CB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82580cb0
	if (!cr6.eq) goto loc_82580CB0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82580CE4"))) PPC_WEAK_FUNC(sub_82580CE4);
PPC_FUNC_IMPL(__imp__sub_82580CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82580CE8"))) PPC_WEAK_FUNC(sub_82580CE8);
PPC_FUNC_IMPL(__imp__sub_82580CE8) {
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
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82580d44
	if (cr6.eq) goto loc_82580D44;
loc_82580D0C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82580d2c
	if (cr6.eq) goto loc_82580D2C;
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
loc_82580D2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82580d0c
	if (!cr6.eq) goto loc_82580D0C;
loc_82580D44:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r28,r29,36
	r28.s64 = r29.s64 + 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// li r26,0
	r26.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r26,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r26.u32);
	// lwz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82580dac
	if (cr6.eq) goto loc_82580DAC;
loc_82580D8C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82580d8c
	if (!cr6.eq) goto loc_82580D8C;
loc_82580DAC:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r26,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r26.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82581998
	sub_82581998(ctx, base);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r27,r29,88
	r27.s64 = r29.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// stw r26,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r26.u32);
	// bl 0x82581040
	sub_82581040(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82580e3c
	if (cr6.eq) goto loc_82580E3C;
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
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
loc_82580E3C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r10,r11,-17964
	ctx.r10.s64 = r11.s64 + -17964;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x82581040
	sub_82581040(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r8,r9,-17988
	ctx.r8.s64 = ctx.r9.s64 + -17988;
	// stw r8,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// bl 0x82581040
	sub_82581040(ctx, base);
	// addi r29,r29,52
	r29.s64 = r29.s64 + 52;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82580e7c
	if (cr6.lt) goto loc_82580E7C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82580E7C:
	// li r11,15
	r11.s64 = 15;
	// stw r26,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r26.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r26,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r26.u8);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82581ba8
	sub_82581BA8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82580EE4"))) PPC_WEAK_FUNC(sub_82580EE4);
PPC_FUNC_IMPL(__imp__sub_82580EE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82580EE8"))) PPC_WEAK_FUNC(sub_82580EE8);
PPC_FUNC_IMPL(__imp__sub_82580EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82580f34
	if (!cr6.eq) goto loc_82580F34;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82580f2c
	if (!cr6.eq) goto loc_82580F2C;
loc_82580F18:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82580f18
	if (cr6.eq) goto loc_82580F18;
loc_82580F2C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82580F34:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82580f6c
	if (!cr6.eq) goto loc_82580F6C;
loc_82580F44:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82580f6c
	if (!cr6.eq) goto loc_82580F6C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82580f44
	if (cr6.eq) goto loc_82580F44;
loc_82580F6C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_82580F70"))) PPC_WEAK_FUNC(sub_82580F70);
PPC_FUNC_IMPL(__imp__sub_82580F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580F74"))) PPC_WEAK_FUNC(sub_82580F74);
PPC_FUNC_IMPL(__imp__sub_82580F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82580F78"))) PPC_WEAK_FUNC(sub_82580F78);
PPC_FUNC_IMPL(__imp__sub_82580F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	r11.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82580fc4
	if (!cr6.lt) goto loc_82580FC4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82580F9C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82580f9c
	if (cr6.lt) goto loc_82580F9C;
loc_82580FC4:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_82580FD4"))) PPC_WEAK_FUNC(sub_82580FD4);
PPC_FUNC_IMPL(__imp__sub_82580FD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82580FD8"))) PPC_WEAK_FUNC(sub_82580FD8);
PPC_FUNC_IMPL(__imp__sub_82580FD8) {
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
	// addi r9,r10,-18136
	ctx.r9.s64 = ctx.r10.s64 + -18136;
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
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// addi r5,r7,-17976
	ctx.r5.s64 = ctx.r7.s64 + -17976;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8258103C"))) PPC_WEAK_FUNC(sub_8258103C);
PPC_FUNC_IMPL(__imp__sub_8258103C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581040"))) PPC_WEAK_FUNC(sub_82581040);
PPC_FUNC_IMPL(__imp__sub_82581040) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825810b8
	if (!cr6.gt) goto loc_825810B8;
	// li r28,15
	r28.s64 = 15;
	// li r29,0
	r29.s64 = 0;
loc_82581064:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,-36
	r31.s64 = r11.s64 + -36;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82581094
	if (cr6.lt) goto loc_82581094;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82581094:
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
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
	// bgt cr6,0x82581064
	if (cr6.gt) goto loc_82581064;
loc_825810B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825810BC"))) PPC_WEAK_FUNC(sub_825810BC);
PPC_FUNC_IMPL(__imp__sub_825810BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825810C0"))) PPC_WEAK_FUNC(sub_825810C0);
PPC_FUNC_IMPL(__imp__sub_825810C0) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stb r9,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82581124"))) PPC_WEAK_FUNC(sub_82581124);
PPC_FUNC_IMPL(__imp__sub_82581124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581128"))) PPC_WEAK_FUNC(sub_82581128);
PPC_FUNC_IMPL(__imp__sub_82581128) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,-18136
	ctx.r8.s64 = ctx.r9.s64 + -18136;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r7,-17976
	ctx.r6.s64 = ctx.r7.s64 + -17976;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82581190"))) PPC_WEAK_FUNC(sub_82581190);
PPC_FUNC_IMPL(__imp__sub_82581190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581194"))) PPC_WEAK_FUNC(sub_82581194);
PPC_FUNC_IMPL(__imp__sub_82581194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581198"))) PPC_WEAK_FUNC(sub_82581198);
PPC_FUNC_IMPL(__imp__sub_82581198) {
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
	// ble cr6,0x825811d8
	if (!cr6.gt) goto loc_825811D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825811D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82581204
	if (cr0.eq) goto loc_82581204;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825810c0
	sub_825810C0(ctx, base);
loc_82581204:
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

__attribute__((alias("__imp__sub_82581218"))) PPC_WEAK_FUNC(sub_82581218);
PPC_FUNC_IMPL(__imp__sub_82581218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258121C"))) PPC_WEAK_FUNC(sub_8258121C);
PPC_FUNC_IMPL(__imp__sub_8258121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581220"))) PPC_WEAK_FUNC(sub_82581220);
PPC_FUNC_IMPL(__imp__sub_82581220) {
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
	// addi r10,r11,-17988
	ctx.r10.s64 = r11.s64 + -17988;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82581040
	sub_82581040(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82581264
	if (cr6.eq) goto loc_82581264;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82581264:
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

__attribute__((alias("__imp__sub_82581278"))) PPC_WEAK_FUNC(sub_82581278);
PPC_FUNC_IMPL(__imp__sub_82581278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258127C"))) PPC_WEAK_FUNC(sub_8258127C);
PPC_FUNC_IMPL(__imp__sub_8258127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581280"))) PPC_WEAK_FUNC(sub_82581280);
PPC_FUNC_IMPL(__imp__sub_82581280) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// divw r29,r8,r9
	r29.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, xer);
	// bge cr6,0x82581308
	if (!cr6.lt) goto loc_82581308;
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r27,-1
	r27.s64 = -1;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_825812C4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r31,r28,r11
	r31.u64 = r28.u64 + r11.u64;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lbz r11,68(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// stb r11,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r11.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// addi r28,r28,36
	r28.s64 = r28.s64 + 36;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x825812c4
	if (cr6.lt) goto loc_825812C4;
loc_82581308:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,-36
	r31.s64 = r11.s64 + -36;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -16);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82581338
	if (cr6.lt) goto loc_82581338;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82581338:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82581360"))) PPC_WEAK_FUNC(sub_82581360);
PPC_FUNC_IMPL(__imp__sub_82581360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82581364"))) PPC_WEAK_FUNC(sub_82581364);
PPC_FUNC_IMPL(__imp__sub_82581364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581368"))) PPC_WEAK_FUNC(sub_82581368);
PPC_FUNC_IMPL(__imp__sub_82581368) {
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
	// addi r10,r11,-17964
	ctx.r10.s64 = r11.s64 + -17964;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82581040
	sub_82581040(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-17988
	ctx.r8.s64 = ctx.r9.s64 + -17988;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82581040
	sub_82581040(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825813c0
	if (cr6.eq) goto loc_825813C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825813C0:
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

__attribute__((alias("__imp__sub_825813D4"))) PPC_WEAK_FUNC(sub_825813D4);
PPC_FUNC_IMPL(__imp__sub_825813D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825813D8"))) PPC_WEAK_FUNC(sub_825813D8);
PPC_FUNC_IMPL(__imp__sub_825813D8) {
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
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r9,r10,37448
	ctx.r9.u64 = ctx.r10.u64 | 37448;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82581420
	if (cr6.lt) goto loc_82581420;
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5516
	ctx.r3.s64 = r11.s64 + 5516;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_82581420:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x82581450
	if (!cr6.eq) goto loc_82581450;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// b 0x82581490
	goto loc_82581490;
loc_82581450:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82581478
	if (cr6.eq) goto loc_82581478;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82581490
	if (!cr6.eq) goto loc_82581490;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// b 0x82581490
	goto loc_82581490;
loc_82581478:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82581490
	if (!cr6.eq) goto loc_82581490;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
loc_82581490:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825815b4
	if (!cr6.eq) goto loc_825815B4;
	// li r28,0
	r28.s64 = 0;
loc_825814AC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82581534
	if (!cr6.eq) goto loc_82581534;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825814f4
	if (!cr6.eq) goto loc_825814F4;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,40(r8)
	PPC_STORE_U8(ctx.r8.u32 + 40, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825815a4
	goto loc_825815A4;
loc_825814F4:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8258150c
	if (!cr6.eq) goto loc_8258150C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
loc_8258150C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8236f530
	sub_8236F530(ctx, base);
	// b 0x825815a4
	goto loc_825815A4;
loc_82581534:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581568
	if (!cr6.eq) goto loc_82581568;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,40(r8)
	PPC_STORE_U8(ctx.r8.u32 + 40, r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x825815a4
	goto loc_825815A4;
loc_82581568:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82581580
	if (!cr6.eq) goto loc_82581580;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8236f530
	sub_8236F530(ctx, base);
loc_82581580:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
loc_825815A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825814ac
	if (cr6.eq) goto loc_825814AC;
loc_825815B4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825815CC"))) PPC_WEAK_FUNC(sub_825815CC);
PPC_FUNC_IMPL(__imp__sub_825815CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825815D0"))) PPC_WEAK_FUNC(sub_825815D0);
PPC_FUNC_IMPL(__imp__sub_825815D0) {
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
	// lbz r11,41(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 41);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82581600
	if (cr6.eq) goto loc_82581600;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5488
	ctx.r3.s64 = r11.s64 + 5488;
	// bl 0x828e9160
	sub_828E9160(ctx, base);
loc_82581600:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x82580ee8
	sub_82580EE8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82581628
	if (cr6.eq) goto loc_82581628;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x8258164c
	goto loc_8258164C;
loc_82581628:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82581640
	if (cr6.eq) goto loc_82581640;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x8258164c
	goto loc_8258164C;
loc_82581640:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x82581738
	if (!cr6.eq) goto loc_82581738;
loc_8258164C:
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82581660
	if (!cr6.eq) goto loc_82581660;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82581660:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82581678
	if (!cr6.eq) goto loc_82581678;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x82581690
	goto loc_82581690;
loc_82581678:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x8258168c
	if (!cr6.eq) goto loc_8258168C;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82581690
	goto loc_82581690;
loc_8258168C:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82581690:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825816e0
	if (!cr6.eq) goto loc_825816E0;
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825816b4
	if (cr6.eq) goto loc_825816B4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x825816dc
	goto loc_825816DC;
loc_825816B4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825816dc
	if (!cr6.eq) goto loc_825816DC;
loc_825816C8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825816c8
	if (cr6.eq) goto loc_825816C8;
loc_825816DC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_825816E0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x825817cc
	if (!cr6.eq) goto loc_825817CC;
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82581708
	if (cr6.eq) goto loc_82581708;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// b 0x825817cc
	goto loc_825817CC;
loc_82581708:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82581730
	if (!cr6.eq) goto loc_82581730;
loc_8258171C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258171c
	if (cr6.eq) goto loc_8258171C;
loc_82581730:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x825817cc
	goto loc_825817CC;
loc_82581738:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82581758
	if (!cr6.eq) goto loc_82581758;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82581780
	goto loc_82581780;
loc_82581758:
	// lbz r11,41(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 41);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258176c
	if (!cr6.eq) goto loc_8258176C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_8258176C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r25.u32);
loc_82581780:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82581798
	if (!cr6.eq) goto loc_82581798;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x825817b4
	goto loc_825817B4;
loc_82581798:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x825817b0
	if (!cr6.eq) goto loc_825817B0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x825817b4
	goto loc_825817B4;
loc_825817B0:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_825817B4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r9,40(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 40);
	// lbz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 40);
	// stb r9,40(r25)
	PPC_STORE_U8(r25.u32 + 40, ctx.r9.u8);
	// stb r10,40(r26)
	PPC_STORE_U8(r26.u32 + 40, ctx.r10.u8);
loc_825817CC:
	// lbz r11,40(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82581964
	if (!cr6.eq) goto loc_82581964;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82581960
	if (cr6.eq) goto loc_82581960;
	// li r30,0
	r30.s64 = 0;
loc_825817F0:
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82581960
	if (!cr6.eq) goto loc_82581960;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x825818a8
	if (!cr6.eq) goto loc_825818A8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581830
	if (!cr6.eq) goto loc_82581830;
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82581830:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825818fc
	if (!cr6.eq) goto loc_825818FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8258185c
	if (!cr6.eq) goto loc_8258185C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x825818f8
	if (cr6.eq) goto loc_825818F8;
loc_8258185C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82581884
	if (!cr6.eq) goto loc_82581884;
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f530
	sub_8236F530(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82581884:
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// stb r29,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r29,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, r29.u8);
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
	// b 0x82581960
	goto loc_82581960;
loc_825818A8:
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825818cc
	if (!cr6.eq) goto loc_825818CC;
	// stb r29,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r29.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f530
	sub_8236F530(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_825818CC:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825818fc
	if (!cr6.eq) goto loc_825818FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82581918
	if (!cr6.eq) goto loc_82581918;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82581918
	if (!cr6.eq) goto loc_82581918;
loc_825818F8:
	// stb r30,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r30.u8);
loc_825818FC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x825817f0
	if (!cr6.eq) goto loc_825817F0;
	// b 0x82581960
	goto loc_82581960;
loc_82581918:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82581940
	if (!cr6.eq) goto loc_82581940;
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stb r30,40(r11)
	PPC_STORE_U8(r11.u32 + 40, r30.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8236f4b8
	sub_8236F4B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82581940:
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// stb r29,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, r29.u8);
	// bl 0x8236f530
	sub_8236F530(ctx, base);
loc_82581960:
	// stb r29,40(r28)
	PPC_STORE_U8(r28.u32 + 40, r29.u8);
loc_82581964:
	// addi r3,r26,16
	ctx.r3.s64 = r26.s64 + 16;
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82581988
	if (cr6.eq) goto loc_82581988;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_82581988:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82581994"))) PPC_WEAK_FUNC(sub_82581994);
PPC_FUNC_IMPL(__imp__sub_82581994) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82581998"))) PPC_WEAK_FUNC(sub_82581998);
PPC_FUNC_IMPL(__imp__sub_82581998) {
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
	// lbz r11,41(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 41);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825819ec
	if (!cr6.eq) goto loc_825819EC;
loc_825819BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82581998
	sub_82581998(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lbz r11,41(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 41);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825819bc
	if (cr6.eq) goto loc_825819BC;
loc_825819EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825819F0"))) PPC_WEAK_FUNC(sub_825819F0);
PPC_FUNC_IMPL(__imp__sub_825819F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825819F4"))) PPC_WEAK_FUNC(sub_825819F4);
PPC_FUNC_IMPL(__imp__sub_825819F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825819F8"))) PPC_WEAK_FUNC(sub_825819F8);
PPC_FUNC_IMPL(__imp__sub_825819F8) {
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
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581a84
	if (!cr6.eq) goto loc_82581A84;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82581A38:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82581a54
	if (cr6.eq) goto loc_82581A54;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u64 < xer.ca;
	r31.u64 = temp.u64;
	// b 0x82581a60
	goto loc_82581A60;
loc_82581A54:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	r31.u64 = ctx.r4.u32 & 0x1;
loc_82581A60:
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82581a74
	if (cr6.eq) goto loc_82581A74;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82581a78
	goto loc_82581A78;
loc_82581A74:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82581A78:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82581a38
	if (cr6.eq) goto loc_82581A38;
loc_82581A84:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82581ae4
	if (cr6.eq) goto loc_82581AE4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82581adc
	if (!cr6.eq) goto loc_82581ADC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r25.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581ADC:
	// bl 0x8236f410
	sub_8236F410(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82581AE4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82581b28
	if (!cr6.lt) goto loc_82581B28;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r25.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581B28:
	// addi r3,r27,16
	ctx.r3.s64 = r27.s64 + 16;
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82581B4C"))) PPC_WEAK_FUNC(sub_82581B4C);
PPC_FUNC_IMPL(__imp__sub_82581B4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82581B50"))) PPC_WEAK_FUNC(sub_82581B50);
PPC_FUNC_IMPL(__imp__sub_82581B50) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82581998
	sub_82581998(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82581BA0"))) PPC_WEAK_FUNC(sub_82581BA0);
PPC_FUNC_IMPL(__imp__sub_82581BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581BA4"))) PPC_WEAK_FUNC(sub_82581BA4);
PPC_FUNC_IMPL(__imp__sub_82581BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581BA8"))) PPC_WEAK_FUNC(sub_82581BA8);
PPC_FUNC_IMPL(__imp__sub_82581BA8) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82581bfc
	if (!cr6.eq) goto loc_82581BFC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x82581bfc
	if (!cr6.eq) goto loc_82581BFC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82581b50
	sub_82581B50(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82581BFC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x82581c2c
	if (cr6.eq) goto loc_82581C2C;
loc_82581C04:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82580ee8
	sub_82580EE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825815d0
	sub_825815D0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82581c04
	if (!cr6.eq) goto loc_82581C04;
loc_82581C2C:
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82581C38"))) PPC_WEAK_FUNC(sub_82581C38);
PPC_FUNC_IMPL(__imp__sub_82581C38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82581C3C"))) PPC_WEAK_FUNC(sub_82581C3C);
PPC_FUNC_IMPL(__imp__sub_82581C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581C40"))) PPC_WEAK_FUNC(sub_82581C40);
PPC_FUNC_IMPL(__imp__sub_82581C40) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82581c84
	if (!cr6.eq) goto loc_82581C84;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581C84:
	// lwz r25,4(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82581cc8
	if (!cr6.eq) goto loc_82581CC8;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82581dc4
	if (!cr6.lt) goto loc_82581DC4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581CC8:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x82581d04
	if (!cr6.eq) goto loc_82581D04;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82581dc4
	if (!cr6.lt) goto loc_82581DC4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581D04:
	// lwz r27,12(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x82581d68
	if (!cr6.gt) goto loc_82581D68;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8236f410
	sub_8236F410(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82581d64
	if (!cr6.lt) goto loc_82581D64;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581db0
	if (!cr6.eq) goto loc_82581DB0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82581D50:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581D64:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
loc_82581D68:
	// bge cr6,0x82581dc4
	if (!cr6.lt) goto loc_82581DC4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82580ee8
	sub_82580EE8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x82581d90
	if (cr6.eq) goto loc_82581D90;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x82581dc4
	if (!cr6.lt) goto loc_82581DC4;
loc_82581D90:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82581d50
	if (cr6.eq) goto loc_82581D50;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82581DB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825813d8
	sub_825813D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_82581DC4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825819f8
	sub_825819F8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82581DEC"))) PPC_WEAK_FUNC(sub_82581DEC);
PPC_FUNC_IMPL(__imp__sub_82581DEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82581DF0"))) PPC_WEAK_FUNC(sub_82581DF0);
PPC_FUNC_IMPL(__imp__sub_82581DF0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82581e44
	if (!cr6.eq) goto loc_82581E44;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82581E1C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82581e30
	if (!cr6.lt) goto loc_82581E30;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82581e38
	goto loc_82581E38;
loc_82581E30:
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82581E38:
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82581e1c
	if (cr6.eq) goto loc_82581E1C;
loc_82581E44:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82581e60
	if (cr6.eq) goto loc_82581E60;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82581f08
	if (!cr6.lt) goto loc_82581F08;
loc_82581E60:
	// li r31,0
	r31.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r28,r10,-17976
	r28.s64 = ctx.r10.s64 + -17976;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// addi r8,r9,-18136
	ctx.r8.s64 = ctx.r9.s64 + -18136;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8236f5a8
	sub_8236F5A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r3.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82581ed4
	if (cr0.eq) goto loc_82581ED4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82581128
	sub_82581128(ctx, base);
loc_82581ED4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82581c40
	sub_82581C40(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8257f970
	sub_8257F970(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9468
	return;
loc_82581F08:
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82581F10"))) PPC_WEAK_FUNC(sub_82581F10);
PPC_FUNC_IMPL(__imp__sub_82581F10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82581F14"))) PPC_WEAK_FUNC(sub_82581F14);
PPC_FUNC_IMPL(__imp__sub_82581F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581F18"))) PPC_WEAK_FUNC(sub_82581F18);
PPC_FUNC_IMPL(__imp__sub_82581F18) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17816
	ctx.r4.s64 = r11.s64 + -17816;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82581f5c
	if (cr6.eq) goto loc_82581F5C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// li r31,1
	r31.s64 = 1;
loc_82581F5C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17828
	ctx.r4.s64 = r11.s64 + -17828;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82581f8c
	if (cr6.eq) goto loc_82581F8C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_82581F8C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17840
	ctx.r4.s64 = r11.s64 + -17840;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82581fbc
	if (cr6.eq) goto loc_82581FBC;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_82581FBC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17844
	ctx.r4.s64 = r11.s64 + -17844;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82581ff4
	if (cr6.eq) goto loc_82581FF4;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// ori r3,r31,8
	ctx.r3.u64 = r31.u64 | 8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82581FF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82581FFC"))) PPC_WEAK_FUNC(sub_82581FFC);
PPC_FUNC_IMPL(__imp__sub_82581FFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82582000"))) PPC_WEAK_FUNC(sub_82582000);
PPC_FUNC_IMPL(__imp__sub_82582000) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17796
	ctx.r4.s64 = r11.s64 + -17796;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582044
	if (cr6.eq) goto loc_82582044;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// li r31,1
	r31.s64 = 1;
loc_82582044:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17804
	ctx.r4.s64 = r11.s64 + -17804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258207c
	if (cr6.eq) goto loc_8258207C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// ori r3,r31,2
	ctx.r3.u64 = r31.u64 | 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8258207C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82582084"))) PPC_WEAK_FUNC(sub_82582084);
PPC_FUNC_IMPL(__imp__sub_82582084) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82582088"))) PPC_WEAK_FUNC(sub_82582088);
PPC_FUNC_IMPL(__imp__sub_82582088) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17768
	ctx.r4.s64 = r11.s64 + -17768;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825820cc
	if (cr6.eq) goto loc_825820CC;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// li r31,1
	r31.s64 = 1;
loc_825820CC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17828
	ctx.r4.s64 = r11.s64 + -17828;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825820fc
	if (cr6.eq) goto loc_825820FC;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_825820FC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17816
	ctx.r4.s64 = r11.s64 + -17816;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258212c
	if (cr6.eq) goto loc_8258212C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_8258212C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17840
	ctx.r4.s64 = r11.s64 + -17840;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258215c
	if (cr6.eq) goto loc_8258215C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
loc_8258215C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17784
	ctx.r4.s64 = r11.s64 + -17784;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582194
	if (cr6.eq) goto loc_82582194;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// ori r3,r31,16
	ctx.r3.u64 = r31.u64 | 16;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82582194:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8258219C"))) PPC_WEAK_FUNC(sub_8258219C);
PPC_FUNC_IMPL(__imp__sub_8258219C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825821A0"))) PPC_WEAK_FUNC(sub_825821A0);
PPC_FUNC_IMPL(__imp__sub_825821A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17696
	ctx.r4.s64 = r11.s64 + -17696;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825821e4
	if (cr6.eq) goto loc_825821E4;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// li r31,1
	r31.s64 = 1;
loc_825821E4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17704
	ctx.r4.s64 = r11.s64 + -17704;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582214
	if (cr6.eq) goto loc_82582214;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_82582214:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17716
	ctx.r4.s64 = r11.s64 + -17716;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582244
	if (cr6.eq) goto loc_82582244;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_82582244:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17728
	ctx.r4.s64 = r11.s64 + -17728;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582274
	if (cr6.eq) goto loc_82582274;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
loc_82582274:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17740
	ctx.r4.s64 = r11.s64 + -17740;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825822a4
	if (cr6.eq) goto loc_825822A4;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
loc_825822A4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17752
	ctx.r4.s64 = r11.s64 + -17752;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825822dc
	if (cr6.eq) goto loc_825822DC;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// ori r3,r31,32
	ctx.r3.u64 = r31.u64 | 32;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825822DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825822E4"))) PPC_WEAK_FUNC(sub_825822E4);
PPC_FUNC_IMPL(__imp__sub_825822E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825822E8"))) PPC_WEAK_FUNC(sub_825822E8);
PPC_FUNC_IMPL(__imp__sub_825822E8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-7796
	ctx.r4.s64 = r11.s64 + -7796;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258232c
	if (cr6.eq) goto loc_8258232C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// li r30,1
	r30.s64 = 1;
loc_8258232C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17684
	ctx.r4.s64 = r11.s64 + -17684;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258235c
	if (cr6.eq) goto loc_8258235C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
loc_8258235C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-14656
	ctx.r4.s64 = r11.s64 + -14656;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258239c
	if (cr6.eq) goto loc_8258239C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r8,r31,36
	ctx.r8.s64 = r31.s64 + 36;
	// addi r4,r11,-30324
	ctx.r4.s64 = r11.s64 + -30324;
	// addi r7,r31,32
	ctx.r7.s64 = r31.s64 + 32;
	// addi r6,r31,28
	ctx.r6.s64 = r31.s64 + 28;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// bl 0x828eb4e8
	sub_828EB4E8(ctx, base);
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
loc_8258239C:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82581f18
	sub_82581F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825823B0"))) PPC_WEAK_FUNC(sub_825823B0);
PPC_FUNC_IMPL(__imp__sub_825823B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825823B4"))) PPC_WEAK_FUNC(sub_825823B4);
PPC_FUNC_IMPL(__imp__sub_825823B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825823B8"))) PPC_WEAK_FUNC(sub_825823B8);
PPC_FUNC_IMPL(__imp__sub_825823B8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-7796
	ctx.r4.s64 = r11.s64 + -7796;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825823fc
	if (cr6.eq) goto loc_825823FC;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// li r31,1
	r31.s64 = 1;
loc_825823FC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17684
	ctx.r4.s64 = r11.s64 + -17684;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258242c
	if (cr6.eq) goto loc_8258242C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_8258242C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17680
	ctx.r4.s64 = r11.s64 + -17680;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258245c
	if (cr6.eq) goto loc_8258245C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_8258245C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-29364
	ctx.r4.s64 = r11.s64 + -29364;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258248c
	if (cr6.eq) goto loc_8258248C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
loc_8258248C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-14656
	ctx.r4.s64 = r11.s64 + -14656;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825824d4
	if (cr6.eq) goto loc_825824D4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r8,r30,28
	ctx.r8.s64 = r30.s64 + 28;
	// addi r4,r11,-30324
	ctx.r4.s64 = r11.s64 + -30324;
	// addi r7,r30,24
	ctx.r7.s64 = r30.s64 + 24;
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// bl 0x828eb4e8
	sub_828EB4E8(ctx, base);
	// ori r3,r31,16
	ctx.r3.u64 = r31.u64 | 16;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825824D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825824DC"))) PPC_WEAK_FUNC(sub_825824DC);
PPC_FUNC_IMPL(__imp__sub_825824DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825824E0"))) PPC_WEAK_FUNC(sub_825824E0);
PPC_FUNC_IMPL(__imp__sub_825824E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82582818
	sub_82582818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825824E0"))) PPC_WEAK_FUNC(sub_825824E0);
PPC_FUNC_IMPL(__imp__sub_825824E0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825824E4"))) PPC_WEAK_FUNC(sub_825824E4);
PPC_FUNC_IMPL(__imp__sub_825824E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825824E8"))) PPC_WEAK_FUNC(sub_825824E8);
PPC_FUNC_IMPL(__imp__sub_825824E8) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-17668
	ctx.r9.s64 = r11.s64 + -17668;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8258251c
	if (cr6.eq) goto loc_8258251C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8258251C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8258252C"))) PPC_WEAK_FUNC(sub_8258252C);
PPC_FUNC_IMPL(__imp__sub_8258252C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582530"))) PPC_WEAK_FUNC(sub_82582530);
PPC_FUNC_IMPL(__imp__sub_82582530) {
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
	// addi r9,r11,-17644
	ctx.r9.s64 = r11.s64 + -17644;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82582574
	if (!cr6.gt) goto loc_82582574;
loc_8258255C:
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
	// bgt cr6,0x8258255c
	if (cr6.gt) goto loc_8258255C;
loc_82582574:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258258c
	if (cr6.eq) goto loc_8258258C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8258258C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8258259C"))) PPC_WEAK_FUNC(sub_8258259C);
PPC_FUNC_IMPL(__imp__sub_8258259C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825825A0"))) PPC_WEAK_FUNC(sub_825825A0);
PPC_FUNC_IMPL(__imp__sub_825825A0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,27456(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27456);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582608
	if (cr6.eq) goto loc_82582608;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82582608
	if (!cr6.eq) goto loc_82582608;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82582608:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82582628"))) PPC_WEAK_FUNC(sub_82582628);
PPC_FUNC_IMPL(__imp__sub_82582628) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258262C"))) PPC_WEAK_FUNC(sub_8258262C);
PPC_FUNC_IMPL(__imp__sub_8258262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582630"))) PPC_WEAK_FUNC(sub_82582630);
PPC_FUNC_IMPL(__imp__sub_82582630) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,27452(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27452);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825826b8
	if (cr6.eq) goto loc_825826B8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825826b8
	if (!cr6.eq) goto loc_825826B8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825826B8:
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

__attribute__((alias("__imp__sub_825826CC"))) PPC_WEAK_FUNC(sub_825826CC);
PPC_FUNC_IMPL(__imp__sub_825826CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825826D0"))) PPC_WEAK_FUNC(sub_825826D0);
PPC_FUNC_IMPL(__imp__sub_825826D0) {
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
	// addi r9,r10,-17632
	ctx.r9.s64 = ctx.r10.s64 + -17632;
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

__attribute__((alias("__imp__sub_82582728"))) PPC_WEAK_FUNC(sub_82582728);
PPC_FUNC_IMPL(__imp__sub_82582728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258272C"))) PPC_WEAK_FUNC(sub_8258272C);
PPC_FUNC_IMPL(__imp__sub_8258272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582730"))) PPC_WEAK_FUNC(sub_82582730);
PPC_FUNC_IMPL(__imp__sub_82582730) {
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
	// addi r9,r11,-17632
	ctx.r9.s64 = r11.s64 + -17632;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82582774
	if (!cr6.gt) goto loc_82582774;
loc_8258275C:
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
	// bgt cr6,0x8258275c
	if (cr6.gt) goto loc_8258275C;
loc_82582774:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582818
	sub_82582818(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-17644
	ctx.r10.s64 = r11.s64 + -17644;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825827b0
	if (!cr6.gt) goto loc_825827B0;
loc_82582798:
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
	// bgt cr6,0x82582798
	if (cr6.gt) goto loc_82582798;
loc_825827B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825827C0"))) PPC_WEAK_FUNC(sub_825827C0);
PPC_FUNC_IMPL(__imp__sub_825827C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825827C4"))) PPC_WEAK_FUNC(sub_825827C4);
PPC_FUNC_IMPL(__imp__sub_825827C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825827C8"))) PPC_WEAK_FUNC(sub_825827C8);
PPC_FUNC_IMPL(__imp__sub_825827C8) {
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
	// bl 0x82582730
	sub_82582730(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82582800
	if (cr6.eq) goto loc_82582800;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82582800:
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

__attribute__((alias("__imp__sub_82582814"))) PPC_WEAK_FUNC(sub_82582814);
PPC_FUNC_IMPL(__imp__sub_82582814) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582818"))) PPC_WEAK_FUNC(sub_82582818);
PPC_FUNC_IMPL(__imp__sub_82582818) {
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
	// beq cr6,0x825828fc
	if (cr6.eq) goto loc_825828FC;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8258288c
	if (!cr6.eq) goto loc_8258288C;
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
	// beq cr6,0x825828fc
	if (cr6.eq) goto loc_825828FC;
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
	// b 0x825828fc
	goto loc_825828FC;
loc_8258288C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825826d0
	sub_825826D0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825828b8
	if (!cr6.gt) goto loc_825828B8;
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
loc_825828B8:
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
	// bl 0x82582730
	sub_82582730(ctx, base);
loc_825828FC:
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

__attribute__((alias("__imp__sub_82582910"))) PPC_WEAK_FUNC(sub_82582910);
PPC_FUNC_IMPL(__imp__sub_82582910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582914"))) PPC_WEAK_FUNC(sub_82582914);
PPC_FUNC_IMPL(__imp__sub_82582914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582918"))) PPC_WEAK_FUNC(sub_82582918);
PPC_FUNC_IMPL(__imp__sub_82582918) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r10,r11,-17620
	ctx.r10.s64 = r11.s64 + -17620;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x823cf860
	sub_823CF860(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82582730
	sub_82582730(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82582730
	sub_82582730(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r9,-17668
	ctx.r8.s64 = ctx.r9.s64 + -17668;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8258296C"))) PPC_WEAK_FUNC(sub_8258296C);
PPC_FUNC_IMPL(__imp__sub_8258296C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582970"))) PPC_WEAK_FUNC(sub_82582970);
PPC_FUNC_IMPL(__imp__sub_82582970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r22,0
	r22.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825829a8
	if (cr6.eq) goto loc_825829A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825829ac
	if (!cr6.eq) goto loc_825829AC;
loc_825829A8:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825829AC:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stb r22,8(r21)
	PPC_STORE_U8(r21.u32 + 8, r22.u8);
	// addi r8,r10,-17620
	ctx.r8.s64 = ctx.r10.s64 + -17620;
	// stw r22,12(r21)
	PPC_STORE_U32(r21.u32 + 12, r22.u32);
	// addi r30,r9,-17632
	r30.s64 = ctx.r9.s64 + -17632;
	// stw r8,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r8.u32);
	// addi r31,r21,16
	r31.s64 = r21.s64 + 16;
	// stw r11,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r11.u32);
	// stw r30,16(r21)
	PPC_STORE_U32(r21.u32 + 16, r30.u32);
	// stw r22,20(r21)
	PPC_STORE_U32(r21.u32 + 20, r22.u32);
	// stw r22,28(r21)
	PPC_STORE_U32(r21.u32 + 28, r22.u32);
	// stw r22,24(r21)
	PPC_STORE_U32(r21.u32 + 24, r22.u32);
	// stw r22,32(r21)
	PPC_STORE_U32(r21.u32 + 32, r22.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,32(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + 32);
	// addi r29,r21,40
	r29.s64 = r21.s64 + 40;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stw r6,32(r21)
	PPC_STORE_U32(r21.u32 + 32, ctx.r6.u32);
	// stw r22,44(r21)
	PPC_STORE_U32(r21.u32 + 44, r22.u32);
	// stw r22,52(r21)
	PPC_STORE_U32(r21.u32 + 52, r22.u32);
	// stw r22,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r22.u32);
	// stw r22,56(r21)
	PPC_STORE_U32(r21.u32 + 56, r22.u32);
	// stw r30,40(r21)
	PPC_STORE_U32(r21.u32 + 40, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r5,56(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + 56);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// addi r11,r4,14228
	r11.s64 = ctx.r4.s64 + 14228;
	// stw r3,56(r21)
	PPC_STORE_U32(r21.u32 + 56, ctx.r3.u32);
	// addi r23,r21,64
	r23.s64 = r21.s64 + 64;
	// stw r11,64(r21)
	PPC_STORE_U32(r21.u32 + 64, r11.u32);
	// stw r22,68(r21)
	PPC_STORE_U32(r21.u32 + 68, r22.u32);
	// stw r22,76(r21)
	PPC_STORE_U32(r21.u32 + 76, r22.u32);
	// stw r22,72(r21)
	PPC_STORE_U32(r21.u32 + 72, r22.u32);
	// stw r22,80(r21)
	PPC_STORE_U32(r21.u32 + 80, r22.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r10,80(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// addi r7,r9,14276
	ctx.r7.s64 = ctx.r9.s64 + 14276;
	// stw r8,80(r21)
	PPC_STORE_U32(r21.u32 + 80, ctx.r8.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r7,64(r21)
	PPC_STORE_U32(r21.u32 + 64, ctx.r7.u32);
	// addi r30,r11,9448
	r30.s64 = r11.s64 + 9448;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r6,r28,24
	ctx.r6.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82582acc
	if (cr6.eq) goto loc_82582ACC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82583110
	sub_82583110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,12(r21)
	PPC_STORE_U32(r21.u32 + 12, r30.u32);
loc_82582ACC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-17564
	r30.s64 = r11.s64 + -17564;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r25,-31934
	r25.s64 = -2092826624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r26,r11,22584
	r26.s64 = r11.s64 + 22584;
	// beq cr6,0x82582c80
	if (cr6.eq) goto loc_82582C80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82582b70
	if (!cr6.gt) goto loc_82582B70;
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
loc_82582B70:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82582c80
	if (!cr6.gt) goto loc_82582C80;
loc_82582B90:
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82582bec
	if (cr6.eq) goto loc_82582BEC;
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
	// beq cr6,0x82582bec
	if (cr6.eq) goto loc_82582BEC;
	// bl 0x8231a678
	sub_8231A678(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582bec
	if (cr6.eq) goto loc_82582BEC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82582c1c
	goto loc_82582C1C;
loc_82582BEC:
	// lwz r11,22800(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 22800);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82582c18
	if (!cr6.eq) goto loc_82582C18;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,22800(r25)
	PPC_STORE_U32(r25.u32 + 22800, r11.u32);
	// bl 0x82583668
	sub_82583668(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-31632
	ctx.r3.s64 = r11.s64 + -31632;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_82582C18:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82582C1C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
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
	// ble cr6,0x82582c4c
	if (!cr6.gt) goto loc_82582C4C;
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
loc_82582C4C:
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
	// beq 0x82582c6c
	if (cr0.eq) goto loc_82582C6C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82582C6C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x82582b90
	if (cr6.lt) goto loc_82582B90;
loc_82582C80:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-17576
	ctx.r3.s64 = r11.s64 + -17576;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82582e28
	if (cr6.eq) goto loc_82582E28;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-17588
	ctx.r3.s64 = r11.s64 + -17588;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
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
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x82582d18
	if (!cr6.gt) goto loc_82582D18;
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
loc_82582D18:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82582e28
	if (!cr6.gt) goto loc_82582E28;
loc_82582D38:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82582d94
	if (cr6.eq) goto loc_82582D94;
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
	// beq cr6,0x82582d94
	if (cr6.eq) goto loc_82582D94;
	// bl 0x8231a678
	sub_8231A678(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582d94
	if (cr6.eq) goto loc_82582D94;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82582dc4
	goto loc_82582DC4;
loc_82582D94:
	// lwz r11,22800(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 22800);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82582dc0
	if (!cr6.eq) goto loc_82582DC0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,22800(r25)
	PPC_STORE_U32(r25.u32 + 22800, r11.u32);
	// bl 0x82583668
	sub_82583668(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-31632
	ctx.r3.s64 = r11.s64 + -31632;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_82582DC0:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82582DC4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82582df4
	if (!cr6.gt) goto loc_82582DF4;
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
loc_82582DF4:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82582e14
	if (cr0.eq) goto loc_82582E14;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_82582E14:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x82582d38
	if (cr6.lt) goto loc_82582D38;
loc_82582E28:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-17600
	r31.s64 = r11.s64 + -17600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82583084
	if (cr6.eq) goto loc_82583084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82582ec0
	if (!cr6.gt) goto loc_82582EC0;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82582EC0:
	// lwz r11,16(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r25,r22
	r25.u64 = r22.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r23)
	PPC_STORE_U32(r23.u32 + 16, ctx.r10.u32);
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82583084
	if (!cr6.gt) goto loc_82583084;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r8,-31969
	ctx.r8.s64 = -2095120384;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// addi r29,r11,22808
	r29.s64 = r11.s64 + 22808;
	// addi r27,r10,-13328
	r27.s64 = ctx.r10.s64 + -13328;
	// addi r30,r9,-13220
	r30.s64 = ctx.r9.s64 + -13220;
	// addi r26,r8,-14320
	r26.s64 = ctx.r8.s64 + -14320;
loc_82582F04:
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82582ff0
	if (cr6.eq) goto loc_82582FF0;
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
	// beq cr6,0x82582ff0
	if (cr6.eq) goto loc_82582FF0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
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
	// beq cr6,0x82582f74
	if (cr6.eq) goto loc_82582F74;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x82582fe0
	goto loc_82582FE0;
loc_82582F74:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
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
	// beq cr6,0x82582ff0
	if (cr6.eq) goto loc_82582FF0;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582fdc
	if (cr6.eq) goto loc_82582FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8230e8d0
	sub_8230E8D0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82582fdc
	if (cr6.eq) goto loc_82582FDC;
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
	// b 0x82582fe0
	goto loc_82582FE0;
loc_82582FDC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82582FE0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82582ff0
	if (cr6.eq) goto loc_82582FF0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82583020
	goto loc_82583020;
loc_82582FF0:
	// lwz r11,23040(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 23040);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8258301c
	if (!cr6.eq) goto loc_8258301C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,23040(r28)
	PPC_STORE_U32(r28.u32 + 23040, r11.u32);
	// bl 0x82583430
	sub_82583430(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-31640
	ctx.r3.s64 = r11.s64 + -31640;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8258301C:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82583020:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82583050
	if (!cr6.gt) goto loc_82583050;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82583050:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r23)
	PPC_STORE_U32(r23.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82583070
	if (cr0.eq) goto loc_82583070;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_82583070:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(r25.s32, ctx.r3.s32, xer);
	// blt cr6,0x82582f04
	if (cr6.lt) goto loc_82582F04;
loc_82583084:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8258308C"))) PPC_WEAK_FUNC(sub_8258308C);
PPC_FUNC_IMPL(__imp__sub_8258308C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82583090"))) PPC_WEAK_FUNC(sub_82583090);
PPC_FUNC_IMPL(__imp__sub_82583090) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r10,r11,-17620
	ctx.r10.s64 = r11.s64 + -17620;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x823cf860
	sub_823CF860(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82582730
	sub_82582730(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82582730
	sub_82582730(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,-17668
	ctx.r7.s64 = ctx.r9.s64 + -17668;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x825830f4
	if (cr6.eq) goto loc_825830F4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825830F4:
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

__attribute__((alias("__imp__sub_82583108"))) PPC_WEAK_FUNC(sub_82583108);
PPC_FUNC_IMPL(__imp__sub_82583108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258310C"))) PPC_WEAK_FUNC(sub_8258310C);
PPC_FUNC_IMPL(__imp__sub_8258310C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583110"))) PPC_WEAK_FUNC(sub_82583110);
PPC_FUNC_IMPL(__imp__sub_82583110) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258315c
	if (cr6.eq) goto loc_8258315C;
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
	// beq cr6,0x8258315c
	if (cr6.eq) goto loc_8258315C;
	// bl 0x8231a678
	sub_8231A678(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82583160
	if (!cr6.eq) goto loc_82583160;
loc_8258315C:
	// bl 0x82315f10
	sub_82315F10(ctx, base);
loc_82583160:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8258316C"))) PPC_WEAK_FUNC(sub_8258316C);
PPC_FUNC_IMPL(__imp__sub_8258316C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583170"))) PPC_WEAK_FUNC(sub_82583170);
PPC_FUNC_IMPL(__imp__sub_82583170) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583178"))) PPC_WEAK_FUNC(sub_82583178);
PPC_FUNC_IMPL(__imp__sub_82583178) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-9920
	ctx.r4.s64 = r11.s64 + -9920;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r10,-17436
	ctx.r4.s64 = ctx.r10.s64 + -17436;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82583420
	if (cr6.eq) goto loc_82583420;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583420
	if (cr6.eq) goto loc_82583420;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-20892
	ctx.r9.s64 = r11.s64 + -20892;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_825831E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// beq cr6,0x82583208
	if (cr6.eq) goto loc_82583208;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x825831e4
	if (cr6.lt) goto loc_825831E4;
	// b 0x8258320c
	goto loc_8258320C;
loc_82583208:
	// stw r10,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r10.u32);
loc_8258320C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lwz r11,216(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// stw r3,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82583420
	if (cr6.eq) goto loc_82583420;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17452
	ctx.r4.s64 = r11.s64 + -17452;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583250
	if (cr6.eq) goto loc_82583250;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
loc_82583250:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17468
	ctx.r4.s64 = r11.s64 + -17468;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258327c
	if (cr6.eq) goto loc_8258327C;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
loc_8258327C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17480
	ctx.r4.s64 = r11.s64 + -17480;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825832a8
	if (cr6.eq) goto loc_825832A8;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
loc_825832A8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// lfs f10,224(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// stfs f8,224(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f7,228(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(f0.f64 - ctx.f7.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// stfs f5,228(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258330c
	if (cr6.eq) goto loc_8258330C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82581f18
	sub_82581F18(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r3.u32);
loc_8258330C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17500
	ctx.r4.s64 = r11.s64 + -17500;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583338
	if (cr6.eq) goto loc_82583338;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x82582000
	sub_82582000(ctx, base);
	// stw r3,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r3.u32);
loc_82583338:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17508
	ctx.r4.s64 = r11.s64 + -17508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583364
	if (cr6.eq) goto loc_82583364;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x82582088
	sub_82582088(ctx, base);
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
loc_82583364:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17520
	ctx.r4.s64 = r11.s64 + -17520;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583390
	if (cr6.eq) goto loc_82583390;
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// bl 0x825821a0
	sub_825821A0(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r3.u32);
loc_82583390:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17532
	ctx.r4.s64 = r11.s64 + -17532;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825833bc
	if (cr6.eq) goto loc_825833BC;
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// bl 0x825822e8
	sub_825822E8(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r3.u32);
loc_825833BC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17544
	ctx.r4.s64 = r11.s64 + -17544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825833e8
	if (cr6.eq) goto loc_825833E8;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// bl 0x825822e8
	sub_825822E8(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r3.u32);
loc_825833E8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17556
	ctx.r4.s64 = r11.s64 + -17556;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583414
	if (cr6.eq) goto loc_82583414;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x825823b8
	sub_825823B8(ctx, base);
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
loc_82583414:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82583420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82583428"))) PPC_WEAK_FUNC(sub_82583428);
PPC_FUNC_IMPL(__imp__sub_82583428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8258342C"))) PPC_WEAK_FUNC(sub_8258342C);
PPC_FUNC_IMPL(__imp__sub_8258342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583430"))) PPC_WEAK_FUNC(sub_82583430);
PPC_FUNC_IMPL(__imp__sub_82583430) {
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
	// bl 0x82583668
	sub_82583668(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r10.u32);
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 224, temp.u32);
	// stfs f0,228(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82583480"))) PPC_WEAK_FUNC(sub_82583480);
PPC_FUNC_IMPL(__imp__sub_82583480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583484"))) PPC_WEAK_FUNC(sub_82583484);
PPC_FUNC_IMPL(__imp__sub_82583484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583488"))) PPC_WEAK_FUNC(sub_82583488);
PPC_FUNC_IMPL(__imp__sub_82583488) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583490"))) PPC_WEAK_FUNC(sub_82583490);
PPC_FUNC_IMPL(__imp__sub_82583490) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,14076
	ctx.r4.s64 = r11.s64 + 14076;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583650
	if (cr6.eq) goto loc_82583650;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17404
	ctx.r4.s64 = r11.s64 + -17404;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c2870
	sub_826C2870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583500
	if (cr6.eq) goto loc_82583500;
	// bl 0x828ecd40
	sub_828ECD40(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
loc_82583500:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,-17496
	ctx.r4.s64 = ctx.r10.s64 + -17496;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// stfs f11,184(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583544
	if (cr6.eq) goto loc_82583544;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82581f18
	sub_82581F18(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r3.u32);
loc_82583544:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17500
	ctx.r4.s64 = r11.s64 + -17500;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583570
	if (cr6.eq) goto loc_82583570;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x82582000
	sub_82582000(ctx, base);
	// stw r3,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r3.u32);
loc_82583570:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17508
	ctx.r4.s64 = r11.s64 + -17508;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258359c
	if (cr6.eq) goto loc_8258359C;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x82582088
	sub_82582088(ctx, base);
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
loc_8258359C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17520
	ctx.r4.s64 = r11.s64 + -17520;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825835c8
	if (cr6.eq) goto loc_825835C8;
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// bl 0x825821a0
	sub_825821A0(ctx, base);
	// stw r3,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r3.u32);
loc_825835C8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17532
	ctx.r4.s64 = r11.s64 + -17532;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825835f4
	if (cr6.eq) goto loc_825835F4;
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// bl 0x825822e8
	sub_825822E8(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r3.u32);
loc_825835F4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17544
	ctx.r4.s64 = r11.s64 + -17544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583620
	if (cr6.eq) goto loc_82583620;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// bl 0x825822e8
	sub_825822E8(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r3.u32);
loc_82583620:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17556
	ctx.r4.s64 = r11.s64 + -17556;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c3348
	sub_826C3348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258364c
	if (cr6.eq) goto loc_8258364C;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// bl 0x825823b8
	sub_825823B8(ctx, base);
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
loc_8258364C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82583650:
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

__attribute__((alias("__imp__sub_82583664"))) PPC_WEAK_FUNC(sub_82583664);
PPC_FUNC_IMPL(__imp__sub_82583664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583668"))) PPC_WEAK_FUNC(sub_82583668);
PPC_FUNC_IMPL(__imp__sub_82583668) {
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
	// bl 0x8236d3e0
	sub_8236D3E0(ctx, base);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825836CC"))) PPC_WEAK_FUNC(sub_825836CC);
PPC_FUNC_IMPL(__imp__sub_825836CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825836D0"))) PPC_WEAK_FUNC(sub_825836D0);
PPC_FUNC_IMPL(__imp__sub_825836D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,-17384
	ctx.r9.s64 = ctx.r10.s64 + -17384;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x826c78d0
	sub_826C78D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825836E8"))) PPC_WEAK_FUNC(sub_825836E8);
PPC_FUNC_IMPL(__imp__sub_825836E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825836EC"))) PPC_WEAK_FUNC(sub_825836EC);
PPC_FUNC_IMPL(__imp__sub_825836EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825836F0"))) PPC_WEAK_FUNC(sub_825836F0);
PPC_FUNC_IMPL(__imp__sub_825836F0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r28,r11,20536
	r28.s64 = r11.s64 + 20536;
	// lis r29,-31934
	r29.s64 = -2092826624;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// lis r26,-31934
	r26.s64 = -2092826624;
	// lwz r8,19404(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 19404);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8258380c
	if (!cr6.eq) goto loc_8258380C;
	// lwz r25,20(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r11,20572(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20572);
	// lwz r10,19404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 19404);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// lwz r23,224(r25)
	r23.u64 = PPC_LOAD_U32(r25.u32 + 224);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// subf r11,r5,r10
	r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r22,r10,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r25,r9,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x825837bc
	if (cr6.eq) goto loc_825837BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825837c0
	if (!cr6.eq) goto loc_825837C0;
loc_825837BC:
	// li r11,0
	r11.s64 = 0;
loc_825837C0:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r25,104(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583b28
	sub_82583B28(ctx, base);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8258380c
	if (cr6.eq) goto loc_8258380C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8258380C:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,19404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 19404);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825838f4
	if (!cr6.eq) goto loc_825838F4;
	// lwz r25,20(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,28(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,20572(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20572);
	// lwz r10,19404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 19404);
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// lwz r29,224(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 224);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// subf r11,r5,r10
	r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r27,r10,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r30,r9,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x825838a4
	if (cr6.eq) goto loc_825838A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825838a8
	if (!cr6.eq) goto loc_825838A8;
loc_825838A4:
	// li r11,0
	r11.s64 = 0;
loc_825838A8:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r30,104(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583b28
	sub_82583B28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825838f4
	if (cr6.eq) goto loc_825838F4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825838F4:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82583900"))) PPC_WEAK_FUNC(sub_82583900);
PPC_FUNC_IMPL(__imp__sub_82583900) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82583904"))) PPC_WEAK_FUNC(sub_82583904);
PPC_FUNC_IMPL(__imp__sub_82583904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583908"))) PPC_WEAK_FUNC(sub_82583908);
PPC_FUNC_IMPL(__imp__sub_82583908) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-17384
	ctx.r10.s64 = r11.s64 + -17384;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-17380
	ctx.r3.s64 = ctx.r9.s64 + -17380;
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,21540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21540);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8258397c
	if (cr6.eq) goto loc_8258397C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// b 0x82583980
	goto loc_82583980;
loc_8258397C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82583980:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_825839A4"))) PPC_WEAK_FUNC(sub_825839A4);
PPC_FUNC_IMPL(__imp__sub_825839A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825839A8"))) PPC_WEAK_FUNC(sub_825839A8);
PPC_FUNC_IMPL(__imp__sub_825839A8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825839d8
	if (cr6.eq) goto loc_825839D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825839dc
	if (!cr6.eq) goto loc_825839DC;
loc_825839D8:
	// li r11,0
	r11.s64 = 0;
loc_825839DC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,17608(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17608);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82583a30
	if (!cr6.eq) goto loc_82583A30;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82583a30
	if (!cr6.eq) goto loc_82583A30;
	// lwz r11,17608(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17608);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82583A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82583A34"))) PPC_WEAK_FUNC(sub_82583A34);
PPC_FUNC_IMPL(__imp__sub_82583A34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82583A38"))) PPC_WEAK_FUNC(sub_82583A38);
PPC_FUNC_IMPL(__imp__sub_82583A38) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32168
	r11.s64 = -2108162048;
	// addi r30,r11,14064
	r30.s64 = r11.s64 + 14064;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82583a70
	if (cr6.eq) goto loc_82583A70;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82583a74
	if (!cr6.eq) goto loc_82583A74;
loc_82583A70:
	// li r11,0
	r11.s64 = 0;
loc_82583A74:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,-14208
	ctx.r3.s64 = ctx.r9.s64 + -14208;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,17608(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17608);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82583AC4"))) PPC_WEAK_FUNC(sub_82583AC4);
PPC_FUNC_IMPL(__imp__sub_82583AC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82583AC8"))) PPC_WEAK_FUNC(sub_82583AC8);
PPC_FUNC_IMPL(__imp__sub_82583AC8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-17384
	ctx.r10.s64 = r11.s64 + -17384;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82583b10
	if (cr6.eq) goto loc_82583B10;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82583B10:
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

__attribute__((alias("__imp__sub_82583B24"))) PPC_WEAK_FUNC(sub_82583B24);
PPC_FUNC_IMPL(__imp__sub_82583B24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583B28"))) PPC_WEAK_FUNC(sub_82583B28);
PPC_FUNC_IMPL(__imp__sub_82583B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,23612(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 23612);
	// stb r6,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r6.u8);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stb r7,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r7.u8);
	// stb r8,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r8.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stb r9,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r9.u8);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f8,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f6,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f5,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f4,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,56(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
}

__attribute__((alias("__imp__sub_82583BCC"))) PPC_WEAK_FUNC(sub_82583BCC);
PPC_FUNC_IMPL(__imp__sub_82583BCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583BD0"))) PPC_WEAK_FUNC(sub_82583BD0);
PPC_FUNC_IMPL(__imp__sub_82583BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// addi r29,r11,-40
	r29.s64 = r11.s64 + -40;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f30.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// li r30,3
	r30.s64 = 3;
	// addi r28,r11,-29908
	r28.s64 = r11.s64 + -29908;
loc_82583C18:
	// stfsu f31,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	ea = 40 + r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f30,24(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stfsu f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	ea = 40 + r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82583c18
	if (!cr0.lt) goto loc_82583C18;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82583C60"))) PPC_WEAK_FUNC(sub_82583C60);
PPC_FUNC_IMPL(__imp__sub_82583C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82583C64"))) PPC_WEAK_FUNC(sub_82583C64);
PPC_FUNC_IMPL(__imp__sub_82583C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583C68"))) PPC_WEAK_FUNC(sub_82583C68);
PPC_FUNC_IMPL(__imp__sub_82583C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
}

__attribute__((alias("__imp__sub_82583CB0"))) PPC_WEAK_FUNC(sub_82583CB0);
PPC_FUNC_IMPL(__imp__sub_82583CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583CB4"))) PPC_WEAK_FUNC(sub_82583CB4);
PPC_FUNC_IMPL(__imp__sub_82583CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583CB8"))) PPC_WEAK_FUNC(sub_82583CB8);
PPC_FUNC_IMPL(__imp__sub_82583CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// beq cr6,0x82583d94
	if (cr6.eq) goto loc_82583D94;
	// lwz r11,220(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82583d94
	if (cr6.eq) goto loc_82583D94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x822cfc78
	sub_822CFC78(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82583d94
	if (cr6.eq) goto loc_82583D94;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583d94
	if (cr6.eq) goto loc_82583D94;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r9,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r9.u8);
loc_82583D94:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82583DA0"))) PPC_WEAK_FUNC(sub_82583DA0);
PPC_FUNC_IMPL(__imp__sub_82583DA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82583DA4"))) PPC_WEAK_FUNC(sub_82583DA4);
PPC_FUNC_IMPL(__imp__sub_82583DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583DA8"))) PPC_WEAK_FUNC(sub_82583DA8);
PPC_FUNC_IMPL(__imp__sub_82583DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r8,24192(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// beq cr6,0x82583e84
	if (cr6.eq) goto loc_82583E84;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82583e84
	if (cr6.eq) goto loc_82583E84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// bl 0x822cfc78
	sub_822CFC78(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82583e84
	if (cr6.eq) goto loc_82583E84;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82583e84
	if (cr6.eq) goto loc_82583E84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82700538
	sub_82700538(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stb r9,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r9.u8);
loc_82583E84:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82583E90"))) PPC_WEAK_FUNC(sub_82583E90);
PPC_FUNC_IMPL(__imp__sub_82583E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82583E94"))) PPC_WEAK_FUNC(sub_82583E94);
PPC_FUNC_IMPL(__imp__sub_82583E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583E98"))) PPC_WEAK_FUNC(sub_82583E98);
PPC_FUNC_IMPL(__imp__sub_82583E98) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,3368
	ctx.r9.s64 = r11.s64 + 3368;
	// addi r8,r10,-17336
	ctx.r8.s64 = ctx.r10.s64 + -17336;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,3368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3368);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r7,-31965
	ctx.r7.s64 = -2094858240;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r6,r7,3384
	ctx.r6.s64 = ctx.r7.s64 + 3384;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r3,r3,-17328
	ctx.r3.s64 = ctx.r3.s64 + -17328;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lfs f0,3384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3384);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r5,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r5.u8);
	// stb r11,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r11.u8);
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82583f88
	if (cr6.eq) goto loc_82583F88;
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
	// beq cr6,0x82583f88
	if (cr6.eq) goto loc_82583F88;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82583f8c
	if (!cr6.eq) goto loc_82583F8C;
loc_82583F88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82583F8C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82583FB4"))) PPC_WEAK_FUNC(sub_82583FB4);
PPC_FUNC_IMPL(__imp__sub_82583FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583FB8"))) PPC_WEAK_FUNC(sub_82583FB8);
PPC_FUNC_IMPL(__imp__sub_82583FB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82583e98
	sub_82583E98(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-17284
	ctx.r9.s64 = r11.s64 + -17284;
	// addi r3,r10,-17308
	ctx.r3.s64 = ctx.r10.s64 + -17308;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82584030
	if (cr6.eq) goto loc_82584030;
	// li r11,0
	r11.s64 = 0;
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
loc_82584030:
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

__attribute__((alias("__imp__sub_82584044"))) PPC_WEAK_FUNC(sub_82584044);
PPC_FUNC_IMPL(__imp__sub_82584044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584048"))) PPC_WEAK_FUNC(sub_82584048);
PPC_FUNC_IMPL(__imp__sub_82584048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82583e98
	sub_82583E98(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r10,-17256
	ctx.r9.s64 = ctx.r10.s64 + -17256;
	// addi r29,r11,-17276
	r29.s64 = r11.s64 + -17276;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// clrlwi r8,r27,24
	ctx.r8.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825842a8
	if (cr6.eq) goto loc_825842A8;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,72(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825842a8
	if (cr6.eq) goto loc_825842A8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r29,76(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// addi r30,r10,-12652
	r30.s64 = ctx.r10.s64 + -12652;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825842a8
	if (cr6.eq) goto loc_825842A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x826cae68
	sub_826CAE68(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825842a8
	if (cr6.eq) goto loc_825842A8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9468
	ctx.r3.s64 = r11.s64 + 9468;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82347978
	sub_82347978(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r9,9464
	ctx.r3.s64 = ctx.r9.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x8235bd08
	sub_8235BD08(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r7.u8);
loc_825842A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825842B0"))) PPC_WEAK_FUNC(sub_825842B0);
PPC_FUNC_IMPL(__imp__sub_825842B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825842B4"))) PPC_WEAK_FUNC(sub_825842B4);
PPC_FUNC_IMPL(__imp__sub_825842B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825842B8"))) PPC_WEAK_FUNC(sub_825842B8);
PPC_FUNC_IMPL(__imp__sub_825842B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82583e98
	sub_82583E98(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r9,r10,-17244
	ctx.r9.s64 = ctx.r10.s64 + -17244;
	// addi r30,r11,30916
	r30.s64 = r11.s64 + 30916;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258435c
	if (cr6.eq) goto loc_8258435C;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_8258435C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82584364"))) PPC_WEAK_FUNC(sub_82584364);
PPC_FUNC_IMPL(__imp__sub_82584364) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82584368"))) PPC_WEAK_FUNC(sub_82584368);
PPC_FUNC_IMPL(__imp__sub_82584368) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82583e98
	sub_82583E98(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r10,-17212
	ctx.r9.s64 = ctx.r10.s64 + -17212;
	// addi r30,r11,-17236
	r30.s64 = r11.s64 + -17236;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8258440c
	if (cr6.eq) goto loc_8258440C;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822d81c8
	sub_822D81C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_8258440C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82584414"))) PPC_WEAK_FUNC(sub_82584414);
PPC_FUNC_IMPL(__imp__sub_82584414) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82584418"))) PPC_WEAK_FUNC(sub_82584418);
PPC_FUNC_IMPL(__imp__sub_82584418) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-17336
	ctx.r9.s64 = r11.s64 + -17336;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8258444c
	if (cr6.eq) goto loc_8258444C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8258444C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8258445C"))) PPC_WEAK_FUNC(sub_8258445C);
PPC_FUNC_IMPL(__imp__sub_8258445C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584460"))) PPC_WEAK_FUNC(sub_82584460);
PPC_FUNC_IMPL(__imp__sub_82584460) {
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
	// addi r9,r11,-17200
	ctx.r9.s64 = r11.s64 + -17200;
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
	// stw r11,22276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22276, r11.u32);
	// beq cr6,0x825844a0
	if (cr6.eq) goto loc_825844A0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825844A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825844B0"))) PPC_WEAK_FUNC(sub_825844B0);
PPC_FUNC_IMPL(__imp__sub_825844B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825844B4"))) PPC_WEAK_FUNC(sub_825844B4);
PPC_FUNC_IMPL(__imp__sub_825844B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825844B8"))) PPC_WEAK_FUNC(sub_825844B8);
PPC_FUNC_IMPL(__imp__sub_825844B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r26,0
	r26.s64 = 0;
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
	// beq cr6,0x82584534
	if (cr6.eq) goto loc_82584534;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_82584534:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8258453C"))) PPC_WEAK_FUNC(sub_8258453C);
PPC_FUNC_IMPL(__imp__sub_8258453C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82584540"))) PPC_WEAK_FUNC(sub_82584540);
PPC_FUNC_IMPL(__imp__sub_82584540) {
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
	// beq cr6,0x82584588
	if (cr6.eq) goto loc_82584588;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e5cf0
	sub_826E5CF0(ctx, base);
loc_82584588:
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

__attribute__((alias("__imp__sub_8258459C"))) PPC_WEAK_FUNC(sub_8258459C);
PPC_FUNC_IMPL(__imp__sub_8258459C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825845A0"))) PPC_WEAK_FUNC(sub_825845A0);
PPC_FUNC_IMPL(__imp__sub_825845A0) {
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
	// beq 0x825845dc
	if (cr0.eq) goto loc_825845DC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_825845DC:
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

__attribute__((alias("__imp__sub_825845F0"))) PPC_WEAK_FUNC(sub_825845F0);
PPC_FUNC_IMPL(__imp__sub_825845F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825845F4"))) PPC_WEAK_FUNC(sub_825845F4);
PPC_FUNC_IMPL(__imp__sub_825845F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825845F8"))) PPC_WEAK_FUNC(sub_825845F8);
PPC_FUNC_IMPL(__imp__sub_825845F8) {
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
	// addi r9,r10,-17192
	ctx.r9.s64 = ctx.r10.s64 + -17192;
	// stw r31,22276(r11)
	PPC_STORE_U32(r11.u32 + 22276, r31.u32);
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

__attribute__((alias("__imp__sub_82584644"))) PPC_WEAK_FUNC(sub_82584644);
PPC_FUNC_IMPL(__imp__sub_82584644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584648"))) PPC_WEAK_FUNC(sub_82584648);
PPC_FUNC_IMPL(__imp__sub_82584648) {
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
	// addi r10,r11,-17192
	ctx.r10.s64 = r11.s64 + -17192;
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
	// addi r10,r4,-17200
	ctx.r10.s64 = ctx.r4.s64 + -17200;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,22276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22276, r11.u32);
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

__attribute__((alias("__imp__sub_825846E8"))) PPC_WEAK_FUNC(sub_825846E8);
PPC_FUNC_IMPL(__imp__sub_825846E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825846EC"))) PPC_WEAK_FUNC(sub_825846EC);
PPC_FUNC_IMPL(__imp__sub_825846EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825846F0"))) PPC_WEAK_FUNC(sub_825846F0);
PPC_FUNC_IMPL(__imp__sub_825846F0) {
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
	// bl 0x82584648
	sub_82584648(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82584728
	if (cr6.eq) goto loc_82584728;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82584728:
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

__attribute__((alias("__imp__sub_8258473C"))) PPC_WEAK_FUNC(sub_8258473C);
PPC_FUNC_IMPL(__imp__sub_8258473C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584740"))) PPC_WEAK_FUNC(sub_82584740);
PPC_FUNC_IMPL(__imp__sub_82584740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82584750"))) PPC_WEAK_FUNC(sub_82584750);
PPC_FUNC_IMPL(__imp__sub_82584750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584754"))) PPC_WEAK_FUNC(sub_82584754);
PPC_FUNC_IMPL(__imp__sub_82584754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584758"))) PPC_WEAK_FUNC(sub_82584758);
PPC_FUNC_IMPL(__imp__sub_82584758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17184
	ctx.r9.s64 = r11.s64 + -17184;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584770"))) PPC_WEAK_FUNC(sub_82584770);
PPC_FUNC_IMPL(__imp__sub_82584770) {
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
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825847cc
	if (cr6.eq) goto loc_825847CC;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x826e6440
	sub_826E6440(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825847CC:
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

__attribute__((alias("__imp__sub_825847E0"))) PPC_WEAK_FUNC(sub_825847E0);
PPC_FUNC_IMPL(__imp__sub_825847E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825847E4"))) PPC_WEAK_FUNC(sub_825847E4);
PPC_FUNC_IMPL(__imp__sub_825847E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825847E8"))) PPC_WEAK_FUNC(sub_825847E8);
PPC_FUNC_IMPL(__imp__sub_825847E8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82584820
	if (cr6.eq) goto loc_82584820;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82584824
	if (!cr6.eq) goto loc_82584824;
loc_82584820:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82584824:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r8,r10,-17160
	ctx.r8.s64 = ctx.r10.s64 + -17160;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82584854"))) PPC_WEAK_FUNC(sub_82584854);
PPC_FUNC_IMPL(__imp__sub_82584854) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82584858"))) PPC_WEAK_FUNC(sub_82584858);
PPC_FUNC_IMPL(__imp__sub_82584858) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825848f8
	if (!cr6.eq) goto loc_825848F8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bgt 0x825848f8
	if (cr0.gt) goto loc_825848F8;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x826e6440
	sub_826E6440(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r30,224(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// beq cr6,0x825848c4
	if (cr6.eq) goto loc_825848C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825848c8
	if (!cr6.eq) goto loc_825848C8;
loc_825848C4:
	// li r11,0
	r11.s64 = 0;
loc_825848C8:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825848f8
	if (cr6.eq) goto loc_825848F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e5698
	sub_826E5698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825848F8:
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

__attribute__((alias("__imp__sub_8258490C"))) PPC_WEAK_FUNC(sub_8258490C);
PPC_FUNC_IMPL(__imp__sub_8258490C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584910"))) PPC_WEAK_FUNC(sub_82584910);
PPC_FUNC_IMPL(__imp__sub_82584910) {
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
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-17184
	ctx.r9.s64 = r11.s64 + -17184;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82584944
	if (cr6.eq) goto loc_82584944;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82584944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82584954"))) PPC_WEAK_FUNC(sub_82584954);
PPC_FUNC_IMPL(__imp__sub_82584954) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584958"))) PPC_WEAK_FUNC(sub_82584958);
PPC_FUNC_IMPL(__imp__sub_82584958) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17184
	ctx.r9.s64 = r11.s64 + -17184;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82584994
	if (cr6.eq) goto loc_82584994;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82584994:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825849A4"))) PPC_WEAK_FUNC(sub_825849A4);
PPC_FUNC_IMPL(__imp__sub_825849A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825849A8"))) PPC_WEAK_FUNC(sub_825849A8);
PPC_FUNC_IMPL(__imp__sub_825849A8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,28652(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28652);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82584a10
	if (cr6.eq) goto loc_82584A10;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82584a10
	if (!cr6.eq) goto loc_82584A10;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82584A10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82584A30"))) PPC_WEAK_FUNC(sub_82584A30);
PPC_FUNC_IMPL(__imp__sub_82584A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82584A34"))) PPC_WEAK_FUNC(sub_82584A34);
PPC_FUNC_IMPL(__imp__sub_82584A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584A38"))) PPC_WEAK_FUNC(sub_82584A38);
PPC_FUNC_IMPL(__imp__sub_82584A38) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28648(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28648);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82584ac0
	if (cr6.eq) goto loc_82584AC0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82584ac0
	if (!cr6.eq) goto loc_82584AC0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82584AC0:
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

__attribute__((alias("__imp__sub_82584AD4"))) PPC_WEAK_FUNC(sub_82584AD4);
PPC_FUNC_IMPL(__imp__sub_82584AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584AD8"))) PPC_WEAK_FUNC(sub_82584AD8);
PPC_FUNC_IMPL(__imp__sub_82584AD8) {
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
	// addi r9,r11,-17136
	ctx.r9.s64 = r11.s64 + -17136;
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
	// stw r11,22284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22284, r11.u32);
	// beq cr6,0x82584b18
	if (cr6.eq) goto loc_82584B18;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82584B18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82584B28"))) PPC_WEAK_FUNC(sub_82584B28);
PPC_FUNC_IMPL(__imp__sub_82584B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584B2C"))) PPC_WEAK_FUNC(sub_82584B2C);
PPC_FUNC_IMPL(__imp__sub_82584B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584B30"))) PPC_WEAK_FUNC(sub_82584B30);
PPC_FUNC_IMPL(__imp__sub_82584B30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
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
	// beq cr6,0x82584ba4
	if (cr6.eq) goto loc_82584BA4;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_82584BA4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82584BAC"))) PPC_WEAK_FUNC(sub_82584BAC);
PPC_FUNC_IMPL(__imp__sub_82584BAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82584BB0"))) PPC_WEAK_FUNC(sub_82584BB0);
PPC_FUNC_IMPL(__imp__sub_82584BB0) {
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
	// beq cr6,0x82584bf8
	if (cr6.eq) goto loc_82584BF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e5cf0
	sub_826E5CF0(ctx, base);
loc_82584BF8:
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

__attribute__((alias("__imp__sub_82584C0C"))) PPC_WEAK_FUNC(sub_82584C0C);
PPC_FUNC_IMPL(__imp__sub_82584C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584C10"))) PPC_WEAK_FUNC(sub_82584C10);
PPC_FUNC_IMPL(__imp__sub_82584C10) {
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
	// beq 0x82584c4c
	if (cr0.eq) goto loc_82584C4C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_82584C4C:
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

__attribute__((alias("__imp__sub_82584C60"))) PPC_WEAK_FUNC(sub_82584C60);
PPC_FUNC_IMPL(__imp__sub_82584C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82584C64"))) PPC_WEAK_FUNC(sub_82584C64);
PPC_FUNC_IMPL(__imp__sub_82584C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584C68"))) PPC_WEAK_FUNC(sub_82584C68);
PPC_FUNC_IMPL(__imp__sub_82584C68) {
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
	// addi r9,r10,-17128
	ctx.r9.s64 = ctx.r10.s64 + -17128;
	// stw r31,22284(r11)
	PPC_STORE_U32(r11.u32 + 22284, r31.u32);
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

__attribute__((alias("__imp__sub_82584CB4"))) PPC_WEAK_FUNC(sub_82584CB4);
PPC_FUNC_IMPL(__imp__sub_82584CB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584CB8"))) PPC_WEAK_FUNC(sub_82584CB8);
PPC_FUNC_IMPL(__imp__sub_82584CB8) {
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
	// addi r10,r11,-17128
	ctx.r10.s64 = r11.s64 + -17128;
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
	// addi r10,r4,-17136
	ctx.r10.s64 = ctx.r4.s64 + -17136;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,22284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 22284, r11.u32);
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

__attribute__((alias("__imp__sub_82584D58"))) PPC_WEAK_FUNC(sub_82584D58);
PPC_FUNC_IMPL(__imp__sub_82584D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584D5C"))) PPC_WEAK_FUNC(sub_82584D5C);
PPC_FUNC_IMPL(__imp__sub_82584D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584D60"))) PPC_WEAK_FUNC(sub_82584D60);
PPC_FUNC_IMPL(__imp__sub_82584D60) {
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
	// bl 0x82584cb8
	sub_82584CB8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82584d98
	if (cr6.eq) goto loc_82584D98;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82584D98:
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

__attribute__((alias("__imp__sub_82584DAC"))) PPC_WEAK_FUNC(sub_82584DAC);
PPC_FUNC_IMPL(__imp__sub_82584DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584DB0"))) PPC_WEAK_FUNC(sub_82584DB0);
PPC_FUNC_IMPL(__imp__sub_82584DB0) {
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
	// addi r9,r11,-17120
	ctx.r9.s64 = r11.s64 + -17120;
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
	// stw r11,22280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22280, r11.u32);
	// beq cr6,0x82584df0
	if (cr6.eq) goto loc_82584DF0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82584DF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82584E00"))) PPC_WEAK_FUNC(sub_82584E00);
PPC_FUNC_IMPL(__imp__sub_82584E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82584E04"))) PPC_WEAK_FUNC(sub_82584E04);
PPC_FUNC_IMPL(__imp__sub_82584E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

