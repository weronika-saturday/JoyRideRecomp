#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82515E74"))) PPC_WEAK_FUNC(sub_82515E74);
PPC_FUNC_IMPL(__imp__sub_82515E74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515E78"))) PPC_WEAK_FUNC(sub_82515E78);
PPC_FUNC_IMPL(__imp__sub_82515E78) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r9,212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82515eb8
	if (cr6.eq) goto loc_82515EB8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82515ebc
	if (!cr6.eq) goto loc_82515EBC;
loc_82515EB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82515EBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82514ce0
	sub_82514CE0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,17908
	ctx.r4.s64 = r11.s64 + 17908;
	// addi r3,r10,18452
	ctx.r3.s64 = ctx.r10.s64 + 18452;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82515EF8"))) PPC_WEAK_FUNC(sub_82515EF8);
PPC_FUNC_IMPL(__imp__sub_82515EF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515EFC"))) PPC_WEAK_FUNC(sub_82515EFC);
PPC_FUNC_IMPL(__imp__sub_82515EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F00"))) PPC_WEAK_FUNC(sub_82515F00);
PPC_FUNC_IMPL(__imp__sub_82515F00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515F04"))) PPC_WEAK_FUNC(sub_82515F04);
PPC_FUNC_IMPL(__imp__sub_82515F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F08"))) PPC_WEAK_FUNC(sub_82515F08);
PPC_FUNC_IMPL(__imp__sub_82515F08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515F0C"))) PPC_WEAK_FUNC(sub_82515F0C);
PPC_FUNC_IMPL(__imp__sub_82515F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F10"))) PPC_WEAK_FUNC(sub_82515F10);
PPC_FUNC_IMPL(__imp__sub_82515F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515F14"))) PPC_WEAK_FUNC(sub_82515F14);
PPC_FUNC_IMPL(__imp__sub_82515F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F18"))) PPC_WEAK_FUNC(sub_82515F18);
PPC_FUNC_IMPL(__imp__sub_82515F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515F1C"))) PPC_WEAK_FUNC(sub_82515F1C);
PPC_FUNC_IMPL(__imp__sub_82515F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F20"))) PPC_WEAK_FUNC(sub_82515F20);
PPC_FUNC_IMPL(__imp__sub_82515F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18492
	ctx.r3.s64 = ctx.r10.s64 + 18492;
}

__attribute__((alias("__imp__sub_82515F30"))) PPC_WEAK_FUNC(sub_82515F30);
PPC_FUNC_IMPL(__imp__sub_82515F30) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515F34"))) PPC_WEAK_FUNC(sub_82515F34);
PPC_FUNC_IMPL(__imp__sub_82515F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F38"))) PPC_WEAK_FUNC(sub_82515F38);
PPC_FUNC_IMPL(__imp__sub_82515F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18512
	ctx.r3.s64 = ctx.r10.s64 + 18512;
}

__attribute__((alias("__imp__sub_82515F48"))) PPC_WEAK_FUNC(sub_82515F48);
PPC_FUNC_IMPL(__imp__sub_82515F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515F4C"))) PPC_WEAK_FUNC(sub_82515F4C);
PPC_FUNC_IMPL(__imp__sub_82515F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F50"))) PPC_WEAK_FUNC(sub_82515F50);
PPC_FUNC_IMPL(__imp__sub_82515F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18536
	ctx.r3.s64 = ctx.r10.s64 + 18536;
}

__attribute__((alias("__imp__sub_82515F60"))) PPC_WEAK_FUNC(sub_82515F60);
PPC_FUNC_IMPL(__imp__sub_82515F60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515F64"))) PPC_WEAK_FUNC(sub_82515F64);
PPC_FUNC_IMPL(__imp__sub_82515F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F68"))) PPC_WEAK_FUNC(sub_82515F68);
PPC_FUNC_IMPL(__imp__sub_82515F68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515F6C"))) PPC_WEAK_FUNC(sub_82515F6C);
PPC_FUNC_IMPL(__imp__sub_82515F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F70"))) PPC_WEAK_FUNC(sub_82515F70);
PPC_FUNC_IMPL(__imp__sub_82515F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18512
	ctx.r3.s64 = ctx.r10.s64 + 18512;
}

__attribute__((alias("__imp__sub_82515F80"))) PPC_WEAK_FUNC(sub_82515F80);
PPC_FUNC_IMPL(__imp__sub_82515F80) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515F84"))) PPC_WEAK_FUNC(sub_82515F84);
PPC_FUNC_IMPL(__imp__sub_82515F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515F88"))) PPC_WEAK_FUNC(sub_82515F88);
PPC_FUNC_IMPL(__imp__sub_82515F88) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lbz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// bl 0x8250c298
	sub_8250C298(ctx, base);
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82515fd0
	if (cr6.eq) goto loc_82515FD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18572
	ctx.r3.s64 = ctx.r10.s64 + 18572;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_82515FD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82515FE0"))) PPC_WEAK_FUNC(sub_82515FE0);
PPC_FUNC_IMPL(__imp__sub_82515FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515FE4"))) PPC_WEAK_FUNC(sub_82515FE4);
PPC_FUNC_IMPL(__imp__sub_82515FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515FE8"))) PPC_WEAK_FUNC(sub_82515FE8);
PPC_FUNC_IMPL(__imp__sub_82515FE8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516010
	if (cr6.eq) goto loc_82516010;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516014
	if (!cr6.eq) goto loc_82516014;
loc_82516010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82516014:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250db50
	sub_8250DB50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82516028"))) PPC_WEAK_FUNC(sub_82516028);
PPC_FUNC_IMPL(__imp__sub_82516028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251602C"))) PPC_WEAK_FUNC(sub_8251602C);
PPC_FUNC_IMPL(__imp__sub_8251602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516030"))) PPC_WEAK_FUNC(sub_82516030);
PPC_FUNC_IMPL(__imp__sub_82516030) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-14756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82516070
	if (cr6.eq) goto loc_82516070;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-14756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516074
	if (!cr6.eq) goto loc_82516074;
loc_82516070:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82516074:
	// lwz r3,200(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82516098
	if (cr6.eq) goto loc_82516098;
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
	// lwz r11,-14756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -14756);
loc_82516098:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825160b4
	if (cr6.eq) goto loc_825160B4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825160b8
	if (!cr6.eq) goto loc_825160B8;
loc_825160B4:
	// li r11,0
	r11.s64 = 0;
loc_825160B8:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,200(r11)
	PPC_STORE_U32(r11.u32 + 200, ctx.r10.u32);
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// bl 0x8250c298
	sub_8250C298(ctx, base);
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

__attribute__((alias("__imp__sub_825160E8"))) PPC_WEAK_FUNC(sub_825160E8);
PPC_FUNC_IMPL(__imp__sub_825160E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825160EC"))) PPC_WEAK_FUNC(sub_825160EC);
PPC_FUNC_IMPL(__imp__sub_825160EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825160F0"))) PPC_WEAK_FUNC(sub_825160F0);
PPC_FUNC_IMPL(__imp__sub_825160F0) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516120
	if (cr6.eq) goto loc_82516120;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516124
	if (!cr6.eq) goto loc_82516124;
loc_82516120:
	// li r11,0
	r11.s64 = 0;
loc_82516124:
	// lwz r3,200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251616c
	if (cr6.eq) goto loc_8251616C;
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
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516160
	if (cr6.eq) goto loc_82516160;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516164
	if (!cr6.eq) goto loc_82516164;
loc_82516160:
	// li r11,0
	r11.s64 = 0;
loc_82516164:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,200(r11)
	PPC_STORE_U32(r11.u32 + 200, ctx.r10.u32);
loc_8251616C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251617C"))) PPC_WEAK_FUNC(sub_8251617C);
PPC_FUNC_IMPL(__imp__sub_8251617C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516180"))) PPC_WEAK_FUNC(sub_82516180);
PPC_FUNC_IMPL(__imp__sub_82516180) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825161a8
	if (cr6.eq) goto loc_825161A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825161ac
	if (!cr6.eq) goto loc_825161AC;
loc_825161A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825161AC:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250f918
	sub_8250F918(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,24348
	ctx.r4.s64 = r11.s64 + 24348;
	// addi r3,r10,18596
	ctx.r3.s64 = ctx.r10.s64 + 18596;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// bl 0x8250c298
	sub_8250C298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825161EC"))) PPC_WEAK_FUNC(sub_825161EC);
PPC_FUNC_IMPL(__imp__sub_825161EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825161F0"))) PPC_WEAK_FUNC(sub_825161F0);
PPC_FUNC_IMPL(__imp__sub_825161F0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516218
	if (cr6.eq) goto loc_82516218;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251621c
	if (!cr6.eq) goto loc_8251621C;
loc_82516218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251621C:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250faf0
	sub_8250FAF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,24348
	ctx.r4.s64 = r11.s64 + 24348;
	// addi r3,r10,18612
	ctx.r3.s64 = ctx.r10.s64 + 18612;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// bl 0x8250c298
	sub_8250C298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8251625C"))) PPC_WEAK_FUNC(sub_8251625C);
PPC_FUNC_IMPL(__imp__sub_8251625C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516260"))) PPC_WEAK_FUNC(sub_82516260);
PPC_FUNC_IMPL(__imp__sub_82516260) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516288
	if (cr6.eq) goto loc_82516288;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251628c
	if (!cr6.eq) goto loc_8251628C;
loc_82516288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251628C:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd38
	sub_8250DD38(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18636
	ctx.r3.s64 = ctx.r10.s64 + 18636;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825162B4"))) PPC_WEAK_FUNC(sub_825162B4);
PPC_FUNC_IMPL(__imp__sub_825162B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825162B8"))) PPC_WEAK_FUNC(sub_825162B8);
PPC_FUNC_IMPL(__imp__sub_825162B8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825162e0
	if (cr6.eq) goto loc_825162E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825162e4
	if (!cr6.eq) goto loc_825162E4;
loc_825162E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825162E4:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250e320
	sub_8250E320(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825162F8"))) PPC_WEAK_FUNC(sub_825162F8);
PPC_FUNC_IMPL(__imp__sub_825162F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825162FC"))) PPC_WEAK_FUNC(sub_825162FC);
PPC_FUNC_IMPL(__imp__sub_825162FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516300"))) PPC_WEAK_FUNC(sub_82516300);
PPC_FUNC_IMPL(__imp__sub_82516300) {
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
	// beq cr6,0x82516330
	if (cr6.eq) goto loc_82516330;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516334
	if (!cr6.eq) goto loc_82516334;
loc_82516330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82516334:
	// lbz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x82517ba0
	sub_82517BA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82516350"))) PPC_WEAK_FUNC(sub_82516350);
PPC_FUNC_IMPL(__imp__sub_82516350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516354"))) PPC_WEAK_FUNC(sub_82516354);
PPC_FUNC_IMPL(__imp__sub_82516354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516358"))) PPC_WEAK_FUNC(sub_82516358);
PPC_FUNC_IMPL(__imp__sub_82516358) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,13435
	r31.s64 = r11.s64 + 13435;
	// addi r3,r10,18688
	ctx.r3.s64 = ctx.r10.s64 + 18688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r9,18664
	ctx.r3.s64 = ctx.r9.s64 + 18664;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825163ac
	if (cr6.eq) goto loc_825163AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825163b0
	if (!cr6.eq) goto loc_825163B0;
loc_825163AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825163B0:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x825101d0
	sub_825101D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825163C8"))) PPC_WEAK_FUNC(sub_825163C8);
PPC_FUNC_IMPL(__imp__sub_825163C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825163CC"))) PPC_WEAK_FUNC(sub_825163CC);
PPC_FUNC_IMPL(__imp__sub_825163CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825163D0"))) PPC_WEAK_FUNC(sub_825163D0);
PPC_FUNC_IMPL(__imp__sub_825163D0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825163f8
	if (cr6.eq) goto loc_825163F8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825163fc
	if (!cr6.eq) goto loc_825163FC;
loc_825163F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825163FC:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250de58
	sub_8250DE58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82516410"))) PPC_WEAK_FUNC(sub_82516410);
PPC_FUNC_IMPL(__imp__sub_82516410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516414"))) PPC_WEAK_FUNC(sub_82516414);
PPC_FUNC_IMPL(__imp__sub_82516414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516418"))) PPC_WEAK_FUNC(sub_82516418);
PPC_FUNC_IMPL(__imp__sub_82516418) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516440
	if (cr6.eq) goto loc_82516440;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516444
	if (!cr6.eq) goto loc_82516444;
loc_82516440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82516444:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x82521560
	sub_82521560(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82516458"))) PPC_WEAK_FUNC(sub_82516458);
PPC_FUNC_IMPL(__imp__sub_82516458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251645C"))) PPC_WEAK_FUNC(sub_8251645C);
PPC_FUNC_IMPL(__imp__sub_8251645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516460"))) PPC_WEAK_FUNC(sub_82516460);
PPC_FUNC_IMPL(__imp__sub_82516460) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,18720
	ctx.r9.s64 = ctx.r10.s64 + 18720;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_8251648C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251648c
	if (!cr6.eq) goto loc_8251648C;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
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

__attribute__((alias("__imp__sub_825164D0"))) PPC_WEAK_FUNC(sub_825164D0);
PPC_FUNC_IMPL(__imp__sub_825164D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825164D4"))) PPC_WEAK_FUNC(sub_825164D4);
PPC_FUNC_IMPL(__imp__sub_825164D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825164D8"))) PPC_WEAK_FUNC(sub_825164D8);
PPC_FUNC_IMPL(__imp__sub_825164D8) {
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
	// beq cr6,0x82516508
	if (cr6.eq) goto loc_82516508;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251650c
	if (!cr6.eq) goto loc_8251650C;
loc_82516508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251650C:
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dcf0
	sub_8250DCF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251652C"))) PPC_WEAK_FUNC(sub_8251652C);
PPC_FUNC_IMPL(__imp__sub_8251652C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516530"))) PPC_WEAK_FUNC(sub_82516530);
PPC_FUNC_IMPL(__imp__sub_82516530) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516558
	if (cr6.eq) goto loc_82516558;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251655c
	if (!cr6.eq) goto loc_8251655C;
loc_82516558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251655C:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x825100c8
	sub_825100C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82516570"))) PPC_WEAK_FUNC(sub_82516570);
PPC_FUNC_IMPL(__imp__sub_82516570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516574"))) PPC_WEAK_FUNC(sub_82516574);
PPC_FUNC_IMPL(__imp__sub_82516574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516578"))) PPC_WEAK_FUNC(sub_82516578);
PPC_FUNC_IMPL(__imp__sub_82516578) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,18732
	ctx.r10.s64 = r11.s64 + 18732;
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,271(r31)
	PPC_STORE_U8(r31.u32 + 271, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825165C0"))) PPC_WEAK_FUNC(sub_825165C0);
PPC_FUNC_IMPL(__imp__sub_825165C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825165C4"))) PPC_WEAK_FUNC(sub_825165C4);
PPC_FUNC_IMPL(__imp__sub_825165C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825165C8"))) PPC_WEAK_FUNC(sub_825165C8);
PPC_FUNC_IMPL(__imp__sub_825165C8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516600
	if (cr6.eq) goto loc_82516600;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516604
	if (!cr6.eq) goto loc_82516604;
loc_82516600:
	// li r11,0
	r11.s64 = 0;
loc_82516604:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// addi r9,r10,-32652
	ctx.r9.s64 = ctx.r10.s64 + -32652;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82516620:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82516620
	if (!cr6.eq) goto loc_82516620;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82745188
	sub_82745188(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82516688"))) PPC_WEAK_FUNC(sub_82516688);
PPC_FUNC_IMPL(__imp__sub_82516688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251668C"))) PPC_WEAK_FUNC(sub_8251668C);
PPC_FUNC_IMPL(__imp__sub_8251668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516690"))) PPC_WEAK_FUNC(sub_82516690);
PPC_FUNC_IMPL(__imp__sub_82516690) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lis r27,-31965
	r27.s64 = -2094858240;
	// li r28,2
	r28.s64 = 2;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_825166B0:
	// lwz r11,-26248(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -26248);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82516734
	if (cr6.eq) goto loc_82516734;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82516734
	if (cr6.eq) goto loc_82516734;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x825166e4
	if (!cr6.eq) goto loc_825166E4;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82516784
	goto loc_82516784;
loc_825166E4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825166F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// beq cr6,0x82516710
	if (cr6.eq) goto loc_82516710;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x825166f0
	if (cr6.lt) goto loc_825166F0;
	// b 0x82516714
	goto loc_82516714;
loc_82516710:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82516714:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82516784
	goto loc_82516784;
loc_82516734:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82516740:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// beq cr6,0x82516760
	if (cr6.eq) goto loc_82516760;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x82516740
	if (cr6.lt) goto loc_82516740;
	// b 0x82516764
	goto loc_82516764;
loc_82516760:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82516764:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 & r28.u64;
	// lwz r6,140(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82516784:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x825166b0
	if (cr6.lt) goto loc_825166B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251679C"))) PPC_WEAK_FUNC(sub_8251679C);
PPC_FUNC_IMPL(__imp__sub_8251679C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825167A0"))) PPC_WEAK_FUNC(sub_825167A0);
PPC_FUNC_IMPL(__imp__sub_825167A0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_825167BC:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// and r10,r11,r29
	ctx.r10.u64 = r11.u64 & r29.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82516808
	if (!cr6.eq) goto loc_82516808;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,9
	ctx.r5.s64 = 9;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82516814
	goto loc_82516814;
loc_82516808:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82516814:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x825167bc
	if (cr6.lt) goto loc_825167BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251682C"))) PPC_WEAK_FUNC(sub_8251682C);
PPC_FUNC_IMPL(__imp__sub_8251682C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82516830"))) PPC_WEAK_FUNC(sub_82516830);
PPC_FUNC_IMPL(__imp__sub_82516830) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_8251684C:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// and r10,r11,r29
	ctx.r10.u64 = r11.u64 & r29.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82516898
	if (!cr6.eq) goto loc_82516898;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,9
	ctx.r5.s64 = 9;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x825168a4
	goto loc_825168A4;
loc_82516898:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825168A4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8251684c
	if (cr6.lt) goto loc_8251684C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825168BC"))) PPC_WEAK_FUNC(sub_825168BC);
PPC_FUNC_IMPL(__imp__sub_825168BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825168C0"))) PPC_WEAK_FUNC(sub_825168C0);
PPC_FUNC_IMPL(__imp__sub_825168C0) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82516690
	sub_82516690(ctx, base);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r10,-26264
	ctx.r9.s64 = ctx.r10.s64 + -26264;
	// stw r11,-26264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26264, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82516914"))) PPC_WEAK_FUNC(sub_82516914);
PPC_FUNC_IMPL(__imp__sub_82516914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516918"))) PPC_WEAK_FUNC(sub_82516918);
PPC_FUNC_IMPL(__imp__sub_82516918) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82516934:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82516934
	if (cr6.lt) goto loc_82516934;
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

__attribute__((alias("__imp__sub_82516970"))) PPC_WEAK_FUNC(sub_82516970);
PPC_FUNC_IMPL(__imp__sub_82516970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516974"))) PPC_WEAK_FUNC(sub_82516974);
PPC_FUNC_IMPL(__imp__sub_82516974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516978"))) PPC_WEAK_FUNC(sub_82516978);
PPC_FUNC_IMPL(__imp__sub_82516978) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825169b0
	if (cr6.eq) goto loc_825169B0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825169b4
	if (!cr6.eq) goto loc_825169B4;
loc_825169B0:
	// li r11,0
	r11.s64 = 0;
loc_825169B4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,18752
	ctx.r5.s64 = ctx.r9.s64 + 18752;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82516ab4
	if (!cr6.eq) goto loc_82516AB4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82516ab4
	if (!cr6.eq) goto loc_82516AB4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,18740
	ctx.r5.s64 = r11.s64 + 18740;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x82516a5c
	if (!cr6.eq) goto loc_82516A5C;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r10,-26264
	ctx.r9.s64 = ctx.r10.s64 + -26264;
	// stw r11,-26264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26264, r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// b 0x82516a64
	goto loc_82516A64;
loc_82516A5C:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82516ab4
	if (cr6.eq) goto loc_82516AB4;
loc_82516A64:
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82516A6C:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82516a6c
	if (cr6.lt) goto loc_82516A6C;
loc_82516AB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_82516AD0"))) PPC_WEAK_FUNC(sub_82516AD0);
PPC_FUNC_IMPL(__imp__sub_82516AD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516AD4"))) PPC_WEAK_FUNC(sub_82516AD4);
PPC_FUNC_IMPL(__imp__sub_82516AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516AD8"))) PPC_WEAK_FUNC(sub_82516AD8);
PPC_FUNC_IMPL(__imp__sub_82516AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r11,-26248
	r29.s64 = r11.s64 + -26248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
loc_82516AF8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82516b18
	if (!cr6.eq) goto loc_82516B18;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82516af8
	if (cr6.lt) goto loc_82516AF8;
	// b 0x82516b1c
	goto loc_82516B1C;
loc_82516B18:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82516B1C:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82516c1c
	if (cr6.eq) goto loc_82516C1C;
	// li r31,0
	r31.s64 = 0;
	// li r28,2
	r28.s64 = 2;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82516B34:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82516bb8
	if (cr6.eq) goto loc_82516BB8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82516bb8
	if (cr6.eq) goto loc_82516BB8;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82516b68
	if (!cr6.eq) goto loc_82516B68;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82516c08
	goto loc_82516C08;
loc_82516B68:
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82516B74:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// beq cr6,0x82516b94
	if (cr6.eq) goto loc_82516B94;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82516b74
	if (cr6.lt) goto loc_82516B74;
	// b 0x82516b98
	goto loc_82516B98;
loc_82516B94:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82516B98:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82516c08
	goto loc_82516C08;
loc_82516BB8:
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82516BC4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// beq cr6,0x82516be4
	if (cr6.eq) goto loc_82516BE4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82516bc4
	if (cr6.lt) goto loc_82516BC4;
	// b 0x82516be8
	goto loc_82516BE8;
loc_82516BE4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82516BE8:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 & r28.u64;
	// lwz r6,140(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82516C08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82516b34
	if (cr6.lt) goto loc_82516B34;
loc_82516C1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82516C20"))) PPC_WEAK_FUNC(sub_82516C20);
PPC_FUNC_IMPL(__imp__sub_82516C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82516C24"))) PPC_WEAK_FUNC(sub_82516C24);
PPC_FUNC_IMPL(__imp__sub_82516C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516C28"))) PPC_WEAK_FUNC(sub_82516C28);
PPC_FUNC_IMPL(__imp__sub_82516C28) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516c5c
	if (cr6.eq) goto loc_82516C5C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516c60
	if (!cr6.eq) goto loc_82516C60;
loc_82516C5C:
	// li r11,0
	r11.s64 = 0;
loc_82516C60:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r9,18824
	ctx.r5.s64 = ctx.r9.s64 + 18824;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82516ce0
	if (!cr6.eq) goto loc_82516CE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82516ce0
	if (!cr6.eq) goto loc_82516CE0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,18740
	ctx.r5.s64 = r11.s64 + 18740;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_82516CE0:
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82516CE8:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82516d10
	if (cr6.eq) goto loc_82516D10;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82516D10:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82516ce8
	if (cr6.lt) goto loc_82516CE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82516D28"))) PPC_WEAK_FUNC(sub_82516D28);
PPC_FUNC_IMPL(__imp__sub_82516D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82516D2C"))) PPC_WEAK_FUNC(sub_82516D2C);
PPC_FUNC_IMPL(__imp__sub_82516D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516D30"))) PPC_WEAK_FUNC(sub_82516D30);
PPC_FUNC_IMPL(__imp__sub_82516D30) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,-1
	r29.s64 = -1;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516d64
	if (cr6.eq) goto loc_82516D64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516d68
	if (!cr6.eq) goto loc_82516D68;
loc_82516D64:
	// li r11,0
	r11.s64 = 0;
loc_82516D68:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r9,18872
	ctx.r5.s64 = ctx.r9.s64 + 18872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82516de8
	if (!cr6.eq) goto loc_82516DE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82516de8
	if (!cr6.eq) goto loc_82516DE8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,18740
	ctx.r5.s64 = r11.s64 + 18740;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_82516DE8:
	// li r31,0
	r31.s64 = 0;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82516DF0:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82516e18
	if (cr6.eq) goto loc_82516E18;
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82516E18:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82516df0
	if (cr6.lt) goto loc_82516DF0;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,-26248(r11)
	PPC_STORE_U32(r11.u32 + -26248, r29.u32);
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82516E38"))) PPC_WEAK_FUNC(sub_82516E38);
PPC_FUNC_IMPL(__imp__sub_82516E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82516E3C"))) PPC_WEAK_FUNC(sub_82516E3C);
PPC_FUNC_IMPL(__imp__sub_82516E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516E40"))) PPC_WEAK_FUNC(sub_82516E40);
PPC_FUNC_IMPL(__imp__sub_82516E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,24348
	ctx.r4.s64 = r11.s64 + 24348;
	// addi r3,r10,18920
	ctx.r3.s64 = ctx.r10.s64 + 18920;
}

__attribute__((alias("__imp__sub_82516E54"))) PPC_WEAK_FUNC(sub_82516E54);
PPC_FUNC_IMPL(__imp__sub_82516E54) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82516E58"))) PPC_WEAK_FUNC(sub_82516E58);
PPC_FUNC_IMPL(__imp__sub_82516E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,18948
	ctx.r5.s64 = ctx.r10.s64 + 18948;
	// addi r4,r9,18944
	ctx.r4.s64 = ctx.r9.s64 + 18944;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
	// addi r7,r11,20
	ctx.r7.s64 = r11.s64 + 20;
}

__attribute__((alias("__imp__sub_82516E7C"))) PPC_WEAK_FUNC(sub_82516E7C);
PPC_FUNC_IMPL(__imp__sub_82516E7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82516E80"))) PPC_WEAK_FUNC(sub_82516E80);
PPC_FUNC_IMPL(__imp__sub_82516E80) {
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
	// beq cr6,0x82516eb4
	if (cr6.eq) goto loc_82516EB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516eb8
	if (!cr6.eq) goto loc_82516EB8;
loc_82516EB4:
	// li r11,0
	r11.s64 = 0;
loc_82516EB8:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516ee4
	if (cr6.eq) goto loc_82516EE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,24348
	ctx.r4.s64 = r11.s64 + 24348;
	// addi r3,r10,18972
	ctx.r3.s64 = ctx.r10.s64 + 18972;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_82516EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82516EF4"))) PPC_WEAK_FUNC(sub_82516EF4);
PPC_FUNC_IMPL(__imp__sub_82516EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516EF8"))) PPC_WEAK_FUNC(sub_82516EF8);
PPC_FUNC_IMPL(__imp__sub_82516EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,19000
	ctx.r10.s64 = r11.s64 + 19000;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516F18"))) PPC_WEAK_FUNC(sub_82516F18);
PPC_FUNC_IMPL(__imp__sub_82516F18) {
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
	// beq cr6,0x82516f4c
	if (cr6.eq) goto loc_82516F4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516f50
	if (!cr6.eq) goto loc_82516F50;
loc_82516F4C:
	// li r11,0
	r11.s64 = 0;
loc_82516F50:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82516f90
	if (cr6.eq) goto loc_82516F90;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r11,19036
	ctx.r5.s64 = r11.s64 + 19036;
	// addi r4,r10,19028
	ctx.r4.s64 = ctx.r10.s64 + 19028;
	// addi r3,r3,19008
	ctx.r3.s64 = ctx.r3.s64 + 19008;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_82516F90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82516FA0"))) PPC_WEAK_FUNC(sub_82516FA0);
PPC_FUNC_IMPL(__imp__sub_82516FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82516FA4"))) PPC_WEAK_FUNC(sub_82516FA4);
PPC_FUNC_IMPL(__imp__sub_82516FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82516FA8"))) PPC_WEAK_FUNC(sub_82516FA8);
PPC_FUNC_IMPL(__imp__sub_82516FA8) {
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
	// beq cr6,0x82516fdc
	if (cr6.eq) goto loc_82516FDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82516fe0
	if (!cr6.eq) goto loc_82516FE0;
loc_82516FDC:
	// li r11,0
	r11.s64 = 0;
loc_82516FE0:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517020
	if (cr6.eq) goto loc_82517020;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r7,r11,19084
	ctx.r7.s64 = r11.s64 + 19084;
	// addi r5,r10,19064
	ctx.r5.s64 = ctx.r10.s64 + 19064;
	// addi r4,r9,19056
	ctx.r4.s64 = ctx.r9.s64 + 19056;
	// addi r3,r3,19008
	ctx.r3.s64 = ctx.r3.s64 + 19008;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_82517020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517030"))) PPC_WEAK_FUNC(sub_82517030);
PPC_FUNC_IMPL(__imp__sub_82517030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517034"))) PPC_WEAK_FUNC(sub_82517034);
PPC_FUNC_IMPL(__imp__sub_82517034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517038"))) PPC_WEAK_FUNC(sub_82517038);
PPC_FUNC_IMPL(__imp__sub_82517038) {
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
	// beq cr6,0x8251706c
	if (cr6.eq) goto loc_8251706C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517070
	if (!cr6.eq) goto loc_82517070;
loc_8251706C:
	// li r11,0
	r11.s64 = 0;
loc_82517070:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825170b4
	if (cr6.eq) goto loc_825170B4;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r7,r11,19096
	ctx.r7.s64 = r11.s64 + 19096;
	// addi r5,r10,19064
	ctx.r5.s64 = ctx.r10.s64 + 19064;
	// addi r4,r4,19056
	ctx.r4.s64 = ctx.r4.s64 + 19056;
	// addi r3,r3,19008
	ctx.r3.s64 = ctx.r3.s64 + 19008;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
loc_825170B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825170C4"))) PPC_WEAK_FUNC(sub_825170C4);
PPC_FUNC_IMPL(__imp__sub_825170C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825170C8"))) PPC_WEAK_FUNC(sub_825170C8);
PPC_FUNC_IMPL(__imp__sub_825170C8) {
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
	// beq cr6,0x825170f8
	if (cr6.eq) goto loc_825170F8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825170fc
	if (!cr6.eq) goto loc_825170FC;
loc_825170F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825170FC:
	// lwz r4,1040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1040);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517118"))) PPC_WEAK_FUNC(sub_82517118);
PPC_FUNC_IMPL(__imp__sub_82517118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251711C"))) PPC_WEAK_FUNC(sub_8251711C);
PPC_FUNC_IMPL(__imp__sub_8251711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517120"))) PPC_WEAK_FUNC(sub_82517120);
PPC_FUNC_IMPL(__imp__sub_82517120) {
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
	// beq cr6,0x82517150
	if (cr6.eq) goto loc_82517150;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517154
	if (!cr6.eq) goto loc_82517154;
loc_82517150:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82517154:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517170"))) PPC_WEAK_FUNC(sub_82517170);
PPC_FUNC_IMPL(__imp__sub_82517170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517174"))) PPC_WEAK_FUNC(sub_82517174);
PPC_FUNC_IMPL(__imp__sub_82517174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517178"))) PPC_WEAK_FUNC(sub_82517178);
PPC_FUNC_IMPL(__imp__sub_82517178) {
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
	// beq cr6,0x825171a8
	if (cr6.eq) goto loc_825171A8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825171ac
	if (!cr6.eq) goto loc_825171AC;
loc_825171A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825171AC:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825171C8"))) PPC_WEAK_FUNC(sub_825171C8);
PPC_FUNC_IMPL(__imp__sub_825171C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825171CC"))) PPC_WEAK_FUNC(sub_825171CC);
PPC_FUNC_IMPL(__imp__sub_825171CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825171D0"))) PPC_WEAK_FUNC(sub_825171D0);
PPC_FUNC_IMPL(__imp__sub_825171D0) {
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
	// beq cr6,0x82517200
	if (cr6.eq) goto loc_82517200;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517204
	if (!cr6.eq) goto loc_82517204;
loc_82517200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82517204:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82422908
	sub_82422908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517228"))) PPC_WEAK_FUNC(sub_82517228);
PPC_FUNC_IMPL(__imp__sub_82517228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251722C"))) PPC_WEAK_FUNC(sub_8251722C);
PPC_FUNC_IMPL(__imp__sub_8251722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517230"))) PPC_WEAK_FUNC(sub_82517230);
PPC_FUNC_IMPL(__imp__sub_82517230) {
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
	// beq cr6,0x82517260
	if (cr6.eq) goto loc_82517260;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517264
	if (!cr6.eq) goto loc_82517264;
loc_82517260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82517264:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x824229a8
	sub_824229A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517288"))) PPC_WEAK_FUNC(sub_82517288);
PPC_FUNC_IMPL(__imp__sub_82517288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251728C"))) PPC_WEAK_FUNC(sub_8251728C);
PPC_FUNC_IMPL(__imp__sub_8251728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517290"))) PPC_WEAK_FUNC(sub_82517290);
PPC_FUNC_IMPL(__imp__sub_82517290) {
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
	// beq cr6,0x825172c0
	if (cr6.eq) goto loc_825172C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825172c4
	if (!cr6.eq) goto loc_825172C4;
loc_825172C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825172C4:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82422f88
	sub_82422F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825172E4"))) PPC_WEAK_FUNC(sub_825172E4);
PPC_FUNC_IMPL(__imp__sub_825172E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825172E8"))) PPC_WEAK_FUNC(sub_825172E8);
PPC_FUNC_IMPL(__imp__sub_825172E8) {
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
	// beq cr6,0x82517318
	if (cr6.eq) goto loc_82517318;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251731c
	if (!cr6.eq) goto loc_8251731C;
loc_82517318:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251731C:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82422c48
	sub_82422C48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251733C"))) PPC_WEAK_FUNC(sub_8251733C);
PPC_FUNC_IMPL(__imp__sub_8251733C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517340"))) PPC_WEAK_FUNC(sub_82517340);
PPC_FUNC_IMPL(__imp__sub_82517340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r30,4
	r30.s64 = 4;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
loc_82517360:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517370
	if (cr6.eq) goto loc_82517370;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
loc_82517370:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82517360
	if (!cr0.eq) goto loc_82517360;
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

__attribute__((alias("__imp__sub_8251738C"))) PPC_WEAK_FUNC(sub_8251738C);
PPC_FUNC_IMPL(__imp__sub_8251738C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517390"))) PPC_WEAK_FUNC(sub_82517390);
PPC_FUNC_IMPL(__imp__sub_82517390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517394"))) PPC_WEAK_FUNC(sub_82517394);
PPC_FUNC_IMPL(__imp__sub_82517394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517398"))) PPC_WEAK_FUNC(sub_82517398);
PPC_FUNC_IMPL(__imp__sub_82517398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251739C"))) PPC_WEAK_FUNC(sub_8251739C);
PPC_FUNC_IMPL(__imp__sub_8251739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825173A0"))) PPC_WEAK_FUNC(sub_825173A0);
PPC_FUNC_IMPL(__imp__sub_825173A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825173A4"))) PPC_WEAK_FUNC(sub_825173A4);
PPC_FUNC_IMPL(__imp__sub_825173A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825173A8"))) PPC_WEAK_FUNC(sub_825173A8);
PPC_FUNC_IMPL(__imp__sub_825173A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825173AC"))) PPC_WEAK_FUNC(sub_825173AC);
PPC_FUNC_IMPL(__imp__sub_825173AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825173B0"))) PPC_WEAK_FUNC(sub_825173B0);
PPC_FUNC_IMPL(__imp__sub_825173B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825173B4"))) PPC_WEAK_FUNC(sub_825173B4);
PPC_FUNC_IMPL(__imp__sub_825173B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825173B8"))) PPC_WEAK_FUNC(sub_825173B8);
PPC_FUNC_IMPL(__imp__sub_825173B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517400
	if (cr6.eq) goto loc_82517400;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517404
	if (!cr6.eq) goto loc_82517404;
loc_82517400:
	// li r11,0
	r11.s64 = 0;
loc_82517404:
	// lbz r29,852(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 852);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// lwz r9,844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r29.u8);
	// bl 0x82558b78
	sub_82558B78(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251744c
	if (cr6.eq) goto loc_8251744C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517450
	if (!cr6.eq) goto loc_82517450;
loc_8251744C:
	// li r11,0
	r11.s64 = 0;
loc_82517450:
	// addi r6,r31,856
	ctx.r6.s64 = r31.s64 + 856;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x824227c8
	sub_824227C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82517468"))) PPC_WEAK_FUNC(sub_82517468);
PPC_FUNC_IMPL(__imp__sub_82517468) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251746C"))) PPC_WEAK_FUNC(sub_8251746C);
PPC_FUNC_IMPL(__imp__sub_8251746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517470"))) PPC_WEAK_FUNC(sub_82517470);
PPC_FUNC_IMPL(__imp__sub_82517470) {
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
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825174c0
	if (cr6.eq) goto loc_825174C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825174c4
	if (!cr6.eq) goto loc_825174C4;
loc_825174C0:
	// li r11,0
	r11.s64 = 0;
loc_825174C4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82558c20
	sub_82558C20(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517500
	if (cr6.eq) goto loc_82517500;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517504
	if (!cr6.eq) goto loc_82517504;
loc_82517500:
	// li r11,0
	r11.s64 = 0;
loc_82517504:
	// addi r6,r31,44
	ctx.r6.s64 = r31.s64 + 44;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x824227c8
	sub_824227C8(ctx, base);
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

__attribute__((alias("__imp__sub_8251752C"))) PPC_WEAK_FUNC(sub_8251752C);
PPC_FUNC_IMPL(__imp__sub_8251752C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517530"))) PPC_WEAK_FUNC(sub_82517530);
PPC_FUNC_IMPL(__imp__sub_82517530) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// beq cr6,0x82517584
	if (cr6.eq) goto loc_82517584;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517588
	if (!cr6.eq) goto loc_82517588;
loc_82517584:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82517588:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82558ca8
	sub_82558CA8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r29.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// beq cr6,0x825175e4
	if (cr6.eq) goto loc_825175E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825175e8
	if (!cr6.eq) goto loc_825175E8;
loc_825175E4:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825175E8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x824227c8
	sub_824227C8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82517608"))) PPC_WEAK_FUNC(sub_82517608);
PPC_FUNC_IMPL(__imp__sub_82517608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251760C"))) PPC_WEAK_FUNC(sub_8251760C);
PPC_FUNC_IMPL(__imp__sub_8251760C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517610"))) PPC_WEAK_FUNC(sub_82517610);
PPC_FUNC_IMPL(__imp__sub_82517610) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517638
	if (cr6.eq) goto loc_82517638;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251763c
	if (!cr6.eq) goto loc_8251763C;
loc_82517638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251763C:
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x825565f8
	sub_825565F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82517650"))) PPC_WEAK_FUNC(sub_82517650);
PPC_FUNC_IMPL(__imp__sub_82517650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517654"))) PPC_WEAK_FUNC(sub_82517654);
PPC_FUNC_IMPL(__imp__sub_82517654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517658"))) PPC_WEAK_FUNC(sub_82517658);
PPC_FUNC_IMPL(__imp__sub_82517658) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517680
	if (cr6.eq) goto loc_82517680;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517684
	if (!cr6.eq) goto loc_82517684;
loc_82517680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82517684:
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82558d30
	sub_82558D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82517698"))) PPC_WEAK_FUNC(sub_82517698);
PPC_FUNC_IMPL(__imp__sub_82517698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251769C"))) PPC_WEAK_FUNC(sub_8251769C);
PPC_FUNC_IMPL(__imp__sub_8251769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825176A0"))) PPC_WEAK_FUNC(sub_825176A0);
PPC_FUNC_IMPL(__imp__sub_825176A0) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825176d4
	if (cr6.eq) goto loc_825176D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825176d8
	if (!cr6.eq) goto loc_825176D8;
loc_825176D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825176D8:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82517770
	if (cr6.eq) goto loc_82517770;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517708
	if (cr6.eq) goto loc_82517708;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251770c
	if (!cr6.eq) goto loc_8251770C;
loc_82517708:
	// li r11,0
	r11.s64 = 0;
loc_8251770C:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// stb r10,622(r11)
	PPC_STORE_U8(r11.u32 + 622, ctx.r10.u8);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517734
	if (cr6.eq) goto loc_82517734;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517738
	if (!cr6.eq) goto loc_82517738;
loc_82517734:
	// li r11,0
	r11.s64 = 0;
loc_82517738:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lbz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 18);
	// stb r10,624(r11)
	PPC_STORE_U8(r11.u32 + 624, ctx.r10.u8);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517760
	if (cr6.eq) goto loc_82517760;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517764
	if (!cr6.eq) goto loc_82517764;
loc_82517760:
	// li r11,0
	r11.s64 = 0;
loc_82517764:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lbz r10,17(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// stb r10,623(r11)
	PPC_STORE_U8(r11.u32 + 623, ctx.r10.u8);
loc_82517770:
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

__attribute__((alias("__imp__sub_82517784"))) PPC_WEAK_FUNC(sub_82517784);
PPC_FUNC_IMPL(__imp__sub_82517784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517788"))) PPC_WEAK_FUNC(sub_82517788);
PPC_FUNC_IMPL(__imp__sub_82517788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
loc_825177A0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x825177c0
	if (cr6.eq) goto loc_825177C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x825177a0
	if (cr6.lt) goto loc_825177A0;
	// blr 
	return;
loc_825177C0:
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825177C8"))) PPC_WEAK_FUNC(sub_825177C8);
PPC_FUNC_IMPL(__imp__sub_825177C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825177CC"))) PPC_WEAK_FUNC(sub_825177CC);
PPC_FUNC_IMPL(__imp__sub_825177CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825177D0"))) PPC_WEAK_FUNC(sub_825177D0);
PPC_FUNC_IMPL(__imp__sub_825177D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_825177D4"))) PPC_WEAK_FUNC(sub_825177D4);
PPC_FUNC_IMPL(__imp__sub_825177D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825177D8"))) PPC_WEAK_FUNC(sub_825177D8);
PPC_FUNC_IMPL(__imp__sub_825177D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,258(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825177ec
	if (cr6.eq) goto loc_825177EC;
	// lwz r3,612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// blr 
	return;
loc_825177EC:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_825177F0"))) PPC_WEAK_FUNC(sub_825177F0);
PPC_FUNC_IMPL(__imp__sub_825177F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825177F4"))) PPC_WEAK_FUNC(sub_825177F4);
PPC_FUNC_IMPL(__imp__sub_825177F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825177F8"))) PPC_WEAK_FUNC(sub_825177F8);
PPC_FUNC_IMPL(__imp__sub_825177F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,258(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 612);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251781C"))) PPC_WEAK_FUNC(sub_8251781C);
PPC_FUNC_IMPL(__imp__sub_8251781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517820"))) PPC_WEAK_FUNC(sub_82517820);
PPC_FUNC_IMPL(__imp__sub_82517820) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r31,556
	ctx.r5.s64 = r31.s64 + 556;
	// addi r4,r9,20016
	ctx.r4.s64 = ctx.r9.s64 + 20016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517890"))) PPC_WEAK_FUNC(sub_82517890);
PPC_FUNC_IMPL(__imp__sub_82517890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517894"))) PPC_WEAK_FUNC(sub_82517894);
PPC_FUNC_IMPL(__imp__sub_82517894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517898"))) PPC_WEAK_FUNC(sub_82517898);
PPC_FUNC_IMPL(__imp__sub_82517898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,19168
	ctx.r4.s64 = ctx.r9.s64 + 19168;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,19136
	ctx.r4.s64 = ctx.r8.s64 + 19136;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82517900"))) PPC_WEAK_FUNC(sub_82517900);
PPC_FUNC_IMPL(__imp__sub_82517900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517904"))) PPC_WEAK_FUNC(sub_82517904);
PPC_FUNC_IMPL(__imp__sub_82517904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517908"))) PPC_WEAK_FUNC(sub_82517908);
PPC_FUNC_IMPL(__imp__sub_82517908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517918"))) PPC_WEAK_FUNC(sub_82517918);
PPC_FUNC_IMPL(__imp__sub_82517918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517928"))) PPC_WEAK_FUNC(sub_82517928);
PPC_FUNC_IMPL(__imp__sub_82517928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,68(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517938"))) PPC_WEAK_FUNC(sub_82517938);
PPC_FUNC_IMPL(__imp__sub_82517938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517948"))) PPC_WEAK_FUNC(sub_82517948);
PPC_FUNC_IMPL(__imp__sub_82517948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517958"))) PPC_WEAK_FUNC(sub_82517958);
PPC_FUNC_IMPL(__imp__sub_82517958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,212(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517968"))) PPC_WEAK_FUNC(sub_82517968);
PPC_FUNC_IMPL(__imp__sub_82517968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,228(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517978"))) PPC_WEAK_FUNC(sub_82517978);
PPC_FUNC_IMPL(__imp__sub_82517978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,116(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517988"))) PPC_WEAK_FUNC(sub_82517988);
PPC_FUNC_IMPL(__imp__sub_82517988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,164(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517998"))) PPC_WEAK_FUNC(sub_82517998);
PPC_FUNC_IMPL(__imp__sub_82517998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,180(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825179A8"))) PPC_WEAK_FUNC(sub_825179A8);
PPC_FUNC_IMPL(__imp__sub_825179A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825179B8"))) PPC_WEAK_FUNC(sub_825179B8);
PPC_FUNC_IMPL(__imp__sub_825179B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825179C8"))) PPC_WEAK_FUNC(sub_825179C8);
PPC_FUNC_IMPL(__imp__sub_825179C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r3,212(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825179D8"))) PPC_WEAK_FUNC(sub_825179D8);
PPC_FUNC_IMPL(__imp__sub_825179D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,196(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825179F8"))) PPC_WEAK_FUNC(sub_825179F8);
PPC_FUNC_IMPL(__imp__sub_825179F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_82517A14"))) PPC_WEAK_FUNC(sub_82517A14);
PPC_FUNC_IMPL(__imp__sub_82517A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517A18"))) PPC_WEAK_FUNC(sub_82517A18);
PPC_FUNC_IMPL(__imp__sub_82517A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517A38"))) PPC_WEAK_FUNC(sub_82517A38);
PPC_FUNC_IMPL(__imp__sub_82517A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,180(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517A58"))) PPC_WEAK_FUNC(sub_82517A58);
PPC_FUNC_IMPL(__imp__sub_82517A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r10,r10,-26112
	ctx.r10.s64 = ctx.r10.s64 + -26112;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82517a98
	if (cr6.eq) goto loc_82517A98;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82517a98
	if (cr6.eq) goto loc_82517A98;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82517a98
	if (cr6.eq) goto loc_82517A98;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82517a9c
	if (!cr6.eq) goto loc_82517A9C;
loc_82517A98:
	// li r11,1
	r11.s64 = 1;
loc_82517A9C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
}

__attribute__((alias("__imp__sub_82517AA0"))) PPC_WEAK_FUNC(sub_82517AA0);
PPC_FUNC_IMPL(__imp__sub_82517AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517AA4"))) PPC_WEAK_FUNC(sub_82517AA4);
PPC_FUNC_IMPL(__imp__sub_82517AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517AA8"))) PPC_WEAK_FUNC(sub_82517AA8);
PPC_FUNC_IMPL(__imp__sub_82517AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,244(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_82517AC4"))) PPC_WEAK_FUNC(sub_82517AC4);
PPC_FUNC_IMPL(__imp__sub_82517AC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517AC8"))) PPC_WEAK_FUNC(sub_82517AC8);
PPC_FUNC_IMPL(__imp__sub_82517AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517AE8"))) PPC_WEAK_FUNC(sub_82517AE8);
PPC_FUNC_IMPL(__imp__sub_82517AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,212(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_82517B04"))) PPC_WEAK_FUNC(sub_82517B04);
PPC_FUNC_IMPL(__imp__sub_82517B04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517B08"))) PPC_WEAK_FUNC(sub_82517B08);
PPC_FUNC_IMPL(__imp__sub_82517B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,116(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
}

__attribute__((alias("__imp__sub_82517B24"))) PPC_WEAK_FUNC(sub_82517B24);
PPC_FUNC_IMPL(__imp__sub_82517B24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517B28"))) PPC_WEAK_FUNC(sub_82517B28);
PPC_FUNC_IMPL(__imp__sub_82517B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517B48"))) PPC_WEAK_FUNC(sub_82517B48);
PPC_FUNC_IMPL(__imp__sub_82517B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517B68"))) PPC_WEAK_FUNC(sub_82517B68);
PPC_FUNC_IMPL(__imp__sub_82517B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r10,r10,-26112
	ctx.r10.s64 = ctx.r10.s64 + -26112;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82517b90
	if (cr6.eq) goto loc_82517B90;
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82517b94
	if (!cr6.eq) goto loc_82517B94;
loc_82517B90:
	// li r11,1
	r11.s64 = 1;
loc_82517B94:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517B9C"))) PPC_WEAK_FUNC(sub_82517B9C);
PPC_FUNC_IMPL(__imp__sub_82517B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517BA0"))) PPC_WEAK_FUNC(sub_82517BA0);
PPC_FUNC_IMPL(__imp__sub_82517BA0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2080(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2080, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_82517BA4"))) PPC_WEAK_FUNC(sub_82517BA4);
PPC_FUNC_IMPL(__imp__sub_82517BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517BA8"))) PPC_WEAK_FUNC(sub_82517BA8);
PPC_FUNC_IMPL(__imp__sub_82517BA8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2080(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2080);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517BB0"))) PPC_WEAK_FUNC(sub_82517BB0);
PPC_FUNC_IMPL(__imp__sub_82517BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r10,r10,-26112
	ctx.r10.s64 = ctx.r10.s64 + -26112;
	// lwz r9,100(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82517bd8
	if (cr6.eq) goto loc_82517BD8;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82517be0
	if (!cr6.eq) goto loc_82517BE0;
loc_82517BD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82517BE0:
	// lwz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517BF4"))) PPC_WEAK_FUNC(sub_82517BF4);
PPC_FUNC_IMPL(__imp__sub_82517BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517BF8"))) PPC_WEAK_FUNC(sub_82517BF8);
PPC_FUNC_IMPL(__imp__sub_82517BF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517C00"))) PPC_WEAK_FUNC(sub_82517C00);
PPC_FUNC_IMPL(__imp__sub_82517C00) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517C08"))) PPC_WEAK_FUNC(sub_82517C08);
PPC_FUNC_IMPL(__imp__sub_82517C08) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517C10"))) PPC_WEAK_FUNC(sub_82517C10);
PPC_FUNC_IMPL(__imp__sub_82517C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
}

__attribute__((alias("__imp__sub_82517C14"))) PPC_WEAK_FUNC(sub_82517C14);
PPC_FUNC_IMPL(__imp__sub_82517C14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517C18"))) PPC_WEAK_FUNC(sub_82517C18);
PPC_FUNC_IMPL(__imp__sub_82517C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517C20"))) PPC_WEAK_FUNC(sub_82517C20);
PPC_FUNC_IMPL(__imp__sub_82517C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82517c50
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517C50;
	// bdzf 4*cr6+eq,0x82517c50
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517C50;
	// bdzf 4*cr6+eq,0x82517c58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517C58;
	// bne cr6,0x82517c60
	if (!cr6.eq) goto loc_82517C60;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82517C50:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82517C58:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82517C60:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517C68"))) PPC_WEAK_FUNC(sub_82517C68);
PPC_FUNC_IMPL(__imp__sub_82517C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82517c98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517C98;
	// bdzf 4*cr6+eq,0x82517c98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517C98;
	// bdzf 4*cr6+eq,0x82517ca0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517CA0;
	// bne cr6,0x82517ca8
	if (!cr6.eq) goto loc_82517CA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82517C98:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82517CA0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82517CA8:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517CB0"))) PPC_WEAK_FUNC(sub_82517CB0);
PPC_FUNC_IMPL(__imp__sub_82517CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,288(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82517cf8
	if (cr6.gt) goto loc_82517CF8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82517ce0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517CE0;
	// bdzf 4*cr6+eq,0x82517cec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517CEC;
	// bdzf 4*cr6+eq,0x82517cec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82517CEC;
	// bne cr6,0x82517cec
	if (!cr6.eq) goto loc_82517CEC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-1944
	ctx.r3.s64 = r11.s64 + -1944;
	// blr 
	return;
loc_82517CE0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,19220
	ctx.r3.s64 = r11.s64 + 19220;
	// blr 
	return;
loc_82517CEC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,19212
	ctx.r3.s64 = r11.s64 + 19212;
	// blr 
	return;
loc_82517CF8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,19204
	ctx.r3.s64 = r11.s64 + 19204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517D04"))) PPC_WEAK_FUNC(sub_82517D04);
PPC_FUNC_IMPL(__imp__sub_82517D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517D08"))) PPC_WEAK_FUNC(sub_82517D08);
PPC_FUNC_IMPL(__imp__sub_82517D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517D0C"))) PPC_WEAK_FUNC(sub_82517D0C);
PPC_FUNC_IMPL(__imp__sub_82517D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517D10"))) PPC_WEAK_FUNC(sub_82517D10);
PPC_FUNC_IMPL(__imp__sub_82517D10) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,257(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 257);
}

__attribute__((alias("__imp__sub_82517D14"))) PPC_WEAK_FUNC(sub_82517D14);
PPC_FUNC_IMPL(__imp__sub_82517D14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517D18"))) PPC_WEAK_FUNC(sub_82517D18);
PPC_FUNC_IMPL(__imp__sub_82517D18) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,258(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
}

__attribute__((alias("__imp__sub_82517D1C"))) PPC_WEAK_FUNC(sub_82517D1C);
PPC_FUNC_IMPL(__imp__sub_82517D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517D20"))) PPC_WEAK_FUNC(sub_82517D20);
PPC_FUNC_IMPL(__imp__sub_82517D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r8,r9,-26112
	ctx.r8.s64 = ctx.r9.s64 + -26112;
	// lwz r11,84(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwz r10,116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// lwz r30,100(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// beq cr6,0x82517d90
	if (cr6.eq) goto loc_82517D90;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82517d90
	if (cr6.eq) goto loc_82517D90;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82517dc0
	if (!cr6.eq) goto loc_82517DC0;
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// b 0x82517db8
	goto loc_82517DB8;
loc_82517D90:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
loc_82517DB8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
loc_82517DC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_82517DEC"))) PPC_WEAK_FUNC(sub_82517DEC);
PPC_FUNC_IMPL(__imp__sub_82517DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517DF0"))) PPC_WEAK_FUNC(sub_82517DF0);
PPC_FUNC_IMPL(__imp__sub_82517DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517DF4"))) PPC_WEAK_FUNC(sub_82517DF4);
PPC_FUNC_IMPL(__imp__sub_82517DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517DF8"))) PPC_WEAK_FUNC(sub_82517DF8);
PPC_FUNC_IMPL(__imp__sub_82517DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517E18"))) PPC_WEAK_FUNC(sub_82517E18);
PPC_FUNC_IMPL(__imp__sub_82517E18) {
	PPC_FUNC_PROLOGUE();
	// li r5,1824
	ctx.r5.s64 = 1824;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82517E24"))) PPC_WEAK_FUNC(sub_82517E24);
PPC_FUNC_IMPL(__imp__sub_82517E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517E28"))) PPC_WEAK_FUNC(sub_82517E28);
PPC_FUNC_IMPL(__imp__sub_82517E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r3,556
	ctx.r3.s64 = ctx.r3.s64 + 556;
}

__attribute__((alias("__imp__sub_82517E40"))) PPC_WEAK_FUNC(sub_82517E40);
PPC_FUNC_IMPL(__imp__sub_82517E40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb0e8
	sub_828EB0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82517E44"))) PPC_WEAK_FUNC(sub_82517E44);
PPC_FUNC_IMPL(__imp__sub_82517E44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517E48"))) PPC_WEAK_FUNC(sub_82517E48);
PPC_FUNC_IMPL(__imp__sub_82517E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r9,-26112
	r31.s64 = ctx.r9.s64 + -26112;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517ED0"))) PPC_WEAK_FUNC(sub_82517ED0);
PPC_FUNC_IMPL(__imp__sub_82517ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517ED4"))) PPC_WEAK_FUNC(sub_82517ED4);
PPC_FUNC_IMPL(__imp__sub_82517ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82517ED8"))) PPC_WEAK_FUNC(sub_82517ED8);
PPC_FUNC_IMPL(__imp__sub_82517ED8) {
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
	// beq cr6,0x82517f08
	if (cr6.eq) goto loc_82517F08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517f0c
	if (!cr6.eq) goto loc_82517F0C;
loc_82517F08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82517F0C:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f7e58
	sub_824F7E58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82517F2C"))) PPC_WEAK_FUNC(sub_82517F2C);
PPC_FUNC_IMPL(__imp__sub_82517F2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82517F30"))) PPC_WEAK_FUNC(sub_82517F30);
PPC_FUNC_IMPL(__imp__sub_82517F30) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82517f5c
	if (cr6.eq) goto loc_82517F5C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82517f60
	if (!cr6.eq) goto loc_82517F60;
loc_82517F5C:
	// li r11,0
	r11.s64 = 0;
loc_82517F60:
	// lwz r30,108(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82539298
	sub_82539298(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r28,21636(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 21636);
loc_82517F7C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82517fcc
	if (cr6.eq) goto loc_82517FCC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82539540
	sub_82539540(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82517fcc
	if (!cr6.eq) goto loc_82517FCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82539660
	sub_82539660(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82517FCC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82517f7c
	if (cr6.lt) goto loc_82517F7C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82517FDC"))) PPC_WEAK_FUNC(sub_82517FDC);
PPC_FUNC_IMPL(__imp__sub_82517FDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82517FE0"))) PPC_WEAK_FUNC(sub_82517FE0);
PPC_FUNC_IMPL(__imp__sub_82517FE0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// lwz r31,21636(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21636);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518020
	if (cr6.eq) goto loc_82518020;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518024
	if (!cr6.eq) goto loc_82518024;
loc_82518020:
	// li r11,0
	r11.s64 = 0;
loc_82518024:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82518068
	if (cr6.eq) goto loc_82518068;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82539540
	sub_82539540(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82539660
	sub_82539660(ctx, base);
loc_82518068:
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

__attribute__((alias("__imp__sub_8251807C"))) PPC_WEAK_FUNC(sub_8251807C);
PPC_FUNC_IMPL(__imp__sub_8251807C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82518080"))) PPC_WEAK_FUNC(sub_82518080);
PPC_FUNC_IMPL(__imp__sub_82518080) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825180bc
	if (cr6.eq) goto loc_825180BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825180c0
	if (!cr6.eq) goto loc_825180C0;
loc_825180BC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825180C0:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// lwz r11,244(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// stb r30,257(r31)
	PPC_STORE_U8(r31.u32 + 257, r30.u8);
	// stb r10,258(r31)
	PPC_STORE_U8(r31.u32 + 258, ctx.r10.u8);
	// stw r30,608(r31)
	PPC_STORE_U32(r31.u32 + 608, r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r30.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
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

__attribute__((alias("__imp__sub_82518100"))) PPC_WEAK_FUNC(sub_82518100);
PPC_FUNC_IMPL(__imp__sub_82518100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82518104"))) PPC_WEAK_FUNC(sub_82518104);
PPC_FUNC_IMPL(__imp__sub_82518104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82518108"))) PPC_WEAK_FUNC(sub_82518108);
PPC_FUNC_IMPL(__imp__sub_82518108) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518144
	if (cr6.eq) goto loc_82518144;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518148
	if (!cr6.eq) goto loc_82518148;
loc_82518144:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82518148:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r11,228(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// stb r30,257(r31)
	PPC_STORE_U8(r31.u32 + 257, r30.u8);
	// stb r30,258(r31)
	PPC_STORE_U8(r31.u32 + 258, r30.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
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

__attribute__((alias("__imp__sub_8251817C"))) PPC_WEAK_FUNC(sub_8251817C);
PPC_FUNC_IMPL(__imp__sub_8251817C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82518180"))) PPC_WEAK_FUNC(sub_82518180);
PPC_FUNC_IMPL(__imp__sub_82518180) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825181bc
	if (cr6.eq) goto loc_825181BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825181c0
	if (!cr6.eq) goto loc_825181C0;
loc_825181BC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825181C0:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r11,212(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// stb r30,257(r31)
	PPC_STORE_U8(r31.u32 + 257, r30.u8);
	// stb r30,258(r31)
	PPC_STORE_U8(r31.u32 + 258, r30.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
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

__attribute__((alias("__imp__sub_825181F4"))) PPC_WEAK_FUNC(sub_825181F4);
PPC_FUNC_IMPL(__imp__sub_825181F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825181F8"))) PPC_WEAK_FUNC(sub_825181F8);
PPC_FUNC_IMPL(__imp__sub_825181F8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518234
	if (cr6.eq) goto loc_82518234;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518238
	if (!cr6.eq) goto loc_82518238;
loc_82518234:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82518238:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r11,68(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// stb r30,257(r31)
	PPC_STORE_U8(r31.u32 + 257, r30.u8);
	// stb r30,258(r31)
	PPC_STORE_U8(r31.u32 + 258, r30.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
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

__attribute__((alias("__imp__sub_8251826C"))) PPC_WEAK_FUNC(sub_8251826C);
PPC_FUNC_IMPL(__imp__sub_8251826C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82518270"))) PPC_WEAK_FUNC(sub_82518270);
PPC_FUNC_IMPL(__imp__sub_82518270) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825182ac
	if (cr6.eq) goto loc_825182AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825182b0
	if (!cr6.eq) goto loc_825182B0;
loc_825182AC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825182B0:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,-26112
	ctx.r10.s64 = r11.s64 + -26112;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stb r30,257(r31)
	PPC_STORE_U8(r31.u32 + 257, r30.u8);
	// stb r30,258(r31)
	PPC_STORE_U8(r31.u32 + 258, r30.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
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

__attribute__((alias("__imp__sub_825182E4"))) PPC_WEAK_FUNC(sub_825182E4);
PPC_FUNC_IMPL(__imp__sub_825182E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

