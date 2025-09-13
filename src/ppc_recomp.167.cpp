#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825C6C38"))) PPC_WEAK_FUNC(sub_825C6C38);
PPC_FUNC_IMPL(__imp__sub_825C6C38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C6C3C"))) PPC_WEAK_FUNC(sub_825C6C3C);
PPC_FUNC_IMPL(__imp__sub_825C6C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6C40"))) PPC_WEAK_FUNC(sub_825C6C40);
PPC_FUNC_IMPL(__imp__sub_825C6C40) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6c8c
	if (cr6.eq) goto loc_825C6C8C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1878
	sub_825C1878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6C8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6C90"))) PPC_WEAK_FUNC(sub_825C6C90);
PPC_FUNC_IMPL(__imp__sub_825C6C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6C94"))) PPC_WEAK_FUNC(sub_825C6C94);
PPC_FUNC_IMPL(__imp__sub_825C6C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6C98"))) PPC_WEAK_FUNC(sub_825C6C98);
PPC_FUNC_IMPL(__imp__sub_825C6C98) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6ce4
	if (cr6.eq) goto loc_825C6CE4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1890
	sub_825C1890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6CE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6CE8"))) PPC_WEAK_FUNC(sub_825C6CE8);
PPC_FUNC_IMPL(__imp__sub_825C6CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6CEC"))) PPC_WEAK_FUNC(sub_825C6CEC);
PPC_FUNC_IMPL(__imp__sub_825C6CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6CF0"))) PPC_WEAK_FUNC(sub_825C6CF0);
PPC_FUNC_IMPL(__imp__sub_825C6CF0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6d3c
	if (cr6.eq) goto loc_825C6D3C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1358
	sub_825C1358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6D3C:
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

__attribute__((alias("__imp__sub_825C6D50"))) PPC_WEAK_FUNC(sub_825C6D50);
PPC_FUNC_IMPL(__imp__sub_825C6D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6D54"))) PPC_WEAK_FUNC(sub_825C6D54);
PPC_FUNC_IMPL(__imp__sub_825C6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6D58"))) PPC_WEAK_FUNC(sub_825C6D58);
PPC_FUNC_IMPL(__imp__sub_825C6D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6db0
	if (cr6.eq) goto loc_825C6DB0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1930
	sub_825C1930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6DB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825C6DB8"))) PPC_WEAK_FUNC(sub_825C6DB8);
PPC_FUNC_IMPL(__imp__sub_825C6DB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6DBC"))) PPC_WEAK_FUNC(sub_825C6DBC);
PPC_FUNC_IMPL(__imp__sub_825C6DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6DC0"))) PPC_WEAK_FUNC(sub_825C6DC0);
PPC_FUNC_IMPL(__imp__sub_825C6DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6e18
	if (cr6.eq) goto loc_825C6E18;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1950
	sub_825C1950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6E18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825C6E20"))) PPC_WEAK_FUNC(sub_825C6E20);
PPC_FUNC_IMPL(__imp__sub_825C6E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6E24"))) PPC_WEAK_FUNC(sub_825C6E24);
PPC_FUNC_IMPL(__imp__sub_825C6E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6E28"))) PPC_WEAK_FUNC(sub_825C6E28);
PPC_FUNC_IMPL(__imp__sub_825C6E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,480(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x825c6b90
	sub_825C6B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C6E38"))) PPC_WEAK_FUNC(sub_825C6E38);
PPC_FUNC_IMPL(__imp__sub_825C6E38) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6e84
	if (cr6.eq) goto loc_825C6E84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1028
	sub_825C1028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6E84:
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

__attribute__((alias("__imp__sub_825C6E98"))) PPC_WEAK_FUNC(sub_825C6E98);
PPC_FUNC_IMPL(__imp__sub_825C6E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6E9C"))) PPC_WEAK_FUNC(sub_825C6E9C);
PPC_FUNC_IMPL(__imp__sub_825C6E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6EA0"))) PPC_WEAK_FUNC(sub_825C6EA0);
PPC_FUNC_IMPL(__imp__sub_825C6EA0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6eec
	if (cr6.eq) goto loc_825C6EEC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c1098
	sub_825C1098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6EEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C6EF0"))) PPC_WEAK_FUNC(sub_825C6EF0);
PPC_FUNC_IMPL(__imp__sub_825C6EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C6EF4"))) PPC_WEAK_FUNC(sub_825C6EF4);
PPC_FUNC_IMPL(__imp__sub_825C6EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6EF8"))) PPC_WEAK_FUNC(sub_825C6EF8);
PPC_FUNC_IMPL(__imp__sub_825C6EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r8,r4,56
	ctx.r8.s64 = ctx.r4.s64 + 56;
	// addi r7,r4,40
	ctx.r7.s64 = ctx.r4.s64 + 40;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
}

__attribute__((alias("__imp__sub_825C6F10"))) PPC_WEAK_FUNC(sub_825C6F10);
PPC_FUNC_IMPL(__imp__sub_825C6F10) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c64f0
	sub_825C64F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C6F14"))) PPC_WEAK_FUNC(sub_825C6F14);
PPC_FUNC_IMPL(__imp__sub_825C6F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6F18"))) PPC_WEAK_FUNC(sub_825C6F18);
PPC_FUNC_IMPL(__imp__sub_825C6F18) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6f68
	if (cr6.eq) goto loc_825C6F68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1278
	sub_825C1278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6F68:
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

__attribute__((alias("__imp__sub_825C6F7C"))) PPC_WEAK_FUNC(sub_825C6F7C);
PPC_FUNC_IMPL(__imp__sub_825C6F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6F80"))) PPC_WEAK_FUNC(sub_825C6F80);
PPC_FUNC_IMPL(__imp__sub_825C6F80) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c6fcc
	if (cr6.eq) goto loc_825C6FCC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c12e8
	sub_825C12E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C6FCC:
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

__attribute__((alias("__imp__sub_825C6FE0"))) PPC_WEAK_FUNC(sub_825C6FE0);
PPC_FUNC_IMPL(__imp__sub_825C6FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6FE4"))) PPC_WEAK_FUNC(sub_825C6FE4);
PPC_FUNC_IMPL(__imp__sub_825C6FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6FE8"))) PPC_WEAK_FUNC(sub_825C6FE8);
PPC_FUNC_IMPL(__imp__sub_825C6FE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// addi r6,r4,24
	ctx.r6.s64 = ctx.r4.s64 + 24;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x825c6770
	sub_825C6770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C6FFC"))) PPC_WEAK_FUNC(sub_825C6FFC);
PPC_FUNC_IMPL(__imp__sub_825C6FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7000"))) PPC_WEAK_FUNC(sub_825C7000);
PPC_FUNC_IMPL(__imp__sub_825C7000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r6,r4,24
	ctx.r6.s64 = ctx.r4.s64 + 24;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
}

__attribute__((alias("__imp__sub_825C7010"))) PPC_WEAK_FUNC(sub_825C7010);
PPC_FUNC_IMPL(__imp__sub_825C7010) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c6810
	sub_825C6810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C7014"))) PPC_WEAK_FUNC(sub_825C7014);
PPC_FUNC_IMPL(__imp__sub_825C7014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7018"))) PPC_WEAK_FUNC(sub_825C7018);
PPC_FUNC_IMPL(__imp__sub_825C7018) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r30,12(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r29,8(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,-19428(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c7070
	if (cr6.eq) goto loc_825C7070;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825c1538
	sub_825C1538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C7070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C7074"))) PPC_WEAK_FUNC(sub_825C7074);
PPC_FUNC_IMPL(__imp__sub_825C7074) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C7078"))) PPC_WEAK_FUNC(sub_825C7078);
PPC_FUNC_IMPL(__imp__sub_825C7078) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c70c4
	if (cr6.eq) goto loc_825C70C4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c1618
	sub_825C1618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C70C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C70C8"))) PPC_WEAK_FUNC(sub_825C70C8);
PPC_FUNC_IMPL(__imp__sub_825C70C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C70CC"))) PPC_WEAK_FUNC(sub_825C70CC);
PPC_FUNC_IMPL(__imp__sub_825C70CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C70D0"))) PPC_WEAK_FUNC(sub_825C70D0);
PPC_FUNC_IMPL(__imp__sub_825C70D0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c711c
	if (cr6.eq) goto loc_825C711C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c17c0
	sub_825C17C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C711C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C7120"))) PPC_WEAK_FUNC(sub_825C7120);
PPC_FUNC_IMPL(__imp__sub_825C7120) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C7124"))) PPC_WEAK_FUNC(sub_825C7124);
PPC_FUNC_IMPL(__imp__sub_825C7124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7128"))) PPC_WEAK_FUNC(sub_825C7128);
PPC_FUNC_IMPL(__imp__sub_825C7128) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c7174
	if (cr6.eq) goto loc_825C7174;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c16e8
	sub_825C16E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C7174:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C7178"))) PPC_WEAK_FUNC(sub_825C7178);
PPC_FUNC_IMPL(__imp__sub_825C7178) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C717C"))) PPC_WEAK_FUNC(sub_825C717C);
PPC_FUNC_IMPL(__imp__sub_825C717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7180"))) PPC_WEAK_FUNC(sub_825C7180);
PPC_FUNC_IMPL(__imp__sub_825C7180) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c71cc
	if (cr6.eq) goto loc_825C71CC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c1878
	sub_825C1878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C71CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C71D0"))) PPC_WEAK_FUNC(sub_825C71D0);
PPC_FUNC_IMPL(__imp__sub_825C71D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C71D4"))) PPC_WEAK_FUNC(sub_825C71D4);
PPC_FUNC_IMPL(__imp__sub_825C71D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C71D8"))) PPC_WEAK_FUNC(sub_825C71D8);
PPC_FUNC_IMPL(__imp__sub_825C71D8) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c7224
	if (cr6.eq) goto loc_825C7224;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1358
	sub_825C1358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C7224:
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

__attribute__((alias("__imp__sub_825C7238"))) PPC_WEAK_FUNC(sub_825C7238);
PPC_FUNC_IMPL(__imp__sub_825C7238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C723C"))) PPC_WEAK_FUNC(sub_825C723C);
PPC_FUNC_IMPL(__imp__sub_825C723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7240"))) PPC_WEAK_FUNC(sub_825C7240);
PPC_FUNC_IMPL(__imp__sub_825C7240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f31,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f31.f64 = double(temp.f32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,-19428(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c729c
	if (cr6.eq) goto loc_825C729C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c1930
	sub_825C1930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C729C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825C72A4"))) PPC_WEAK_FUNC(sub_825C72A4);
PPC_FUNC_IMPL(__imp__sub_825C72A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C72A8"))) PPC_WEAK_FUNC(sub_825C72A8);
PPC_FUNC_IMPL(__imp__sub_825C72A8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,480(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lbz r30,8(r4)
	r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,-19428(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// lwz r28,4(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c7310
	if (cr6.eq) goto loc_825C7310;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-2484
	ctx.r9.s64 = ctx.r10.s64 + -2484;
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C7310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C7314"))) PPC_WEAK_FUNC(sub_825C7314);
PPC_FUNC_IMPL(__imp__sub_825C7314) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C7318"))) PPC_WEAK_FUNC(sub_825C7318);
PPC_FUNC_IMPL(__imp__sub_825C7318) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,480(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c735c
	if (cr6.eq) goto loc_825C735C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7360
	if (!cr6.eq) goto loc_825C7360;
loc_825C735C:
	// li r11,0
	r11.s64 = 0;
loc_825C7360:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20020(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20020);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,452
	ctx.r4.s64 = r28.s64 + 452;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c73b4
	if (!cr6.eq) goto loc_825C73B4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c73b4
	if (!cr6.eq) goto loc_825C73B4;
	// lwz r11,20020(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20020);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C73B4:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c73d0
	if (cr6.eq) goto loc_825C73D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c73d4
	if (!cr6.eq) goto loc_825C73D4;
loc_825C73D0:
	// li r11,0
	r11.s64 = 0;
loc_825C73D4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20024(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,424
	ctx.r4.s64 = r28.s64 + 424;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7428
	if (!cr6.eq) goto loc_825C7428;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7428
	if (!cr6.eq) goto loc_825C7428;
	// lwz r11,20024(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7428:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7444
	if (cr6.eq) goto loc_825C7444;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7448
	if (!cr6.eq) goto loc_825C7448;
loc_825C7444:
	// li r11,0
	r11.s64 = 0;
loc_825C7448:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20044);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,396
	ctx.r4.s64 = r28.s64 + 396;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c749c
	if (!cr6.eq) goto loc_825C749C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c749c
	if (!cr6.eq) goto loc_825C749C;
	// lwz r11,20044(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20044);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C749C:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c74b8
	if (cr6.eq) goto loc_825C74B8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c74bc
	if (!cr6.eq) goto loc_825C74BC;
loc_825C74B8:
	// li r11,0
	r11.s64 = 0;
loc_825C74BC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20040(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20040);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,368
	ctx.r4.s64 = r28.s64 + 368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7510
	if (!cr6.eq) goto loc_825C7510;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7510
	if (!cr6.eq) goto loc_825C7510;
	// lwz r11,20040(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20040);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7510:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c752c
	if (cr6.eq) goto loc_825C752C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7530
	if (!cr6.eq) goto loc_825C7530;
loc_825C752C:
	// li r11,0
	r11.s64 = 0;
loc_825C7530:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20048(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20048);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,312
	ctx.r4.s64 = r28.s64 + 312;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7584
	if (!cr6.eq) goto loc_825C7584;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7584
	if (!cr6.eq) goto loc_825C7584;
	// lwz r11,20048(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20048);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7584:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c75a0
	if (cr6.eq) goto loc_825C75A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c75a4
	if (!cr6.eq) goto loc_825C75A4;
loc_825C75A0:
	// li r11,0
	r11.s64 = 0;
loc_825C75A4:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20028);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,340
	ctx.r4.s64 = r28.s64 + 340;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c75f8
	if (!cr6.eq) goto loc_825C75F8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c75f8
	if (!cr6.eq) goto loc_825C75F8;
	// lwz r11,20028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20028);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C75F8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7614
	if (cr6.eq) goto loc_825C7614;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7618
	if (!cr6.eq) goto loc_825C7618;
loc_825C7614:
	// li r11,0
	r11.s64 = 0;
loc_825C7618:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20052(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20052);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,284
	ctx.r4.s64 = r28.s64 + 284;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c766c
	if (!cr6.eq) goto loc_825C766C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c766c
	if (!cr6.eq) goto loc_825C766C;
	// lwz r11,20052(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20052);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C766C:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7688
	if (cr6.eq) goto loc_825C7688;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c768c
	if (!cr6.eq) goto loc_825C768C;
loc_825C7688:
	// li r11,0
	r11.s64 = 0;
loc_825C768C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20056(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20056);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,256
	ctx.r4.s64 = r28.s64 + 256;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c76e0
	if (!cr6.eq) goto loc_825C76E0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c76e0
	if (!cr6.eq) goto loc_825C76E0;
	// lwz r11,20056(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20056);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C76E0:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c76fc
	if (cr6.eq) goto loc_825C76FC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7700
	if (!cr6.eq) goto loc_825C7700;
loc_825C76FC:
	// li r11,0
	r11.s64 = 0;
loc_825C7700:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20032(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20032);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,228
	ctx.r4.s64 = r28.s64 + 228;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7754
	if (!cr6.eq) goto loc_825C7754;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7754
	if (!cr6.eq) goto loc_825C7754;
	// lwz r11,20032(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20032);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7754:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7770
	if (cr6.eq) goto loc_825C7770;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7774
	if (!cr6.eq) goto loc_825C7774;
loc_825C7770:
	// li r11,0
	r11.s64 = 0;
loc_825C7774:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20036(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20036);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,200
	ctx.r4.s64 = r28.s64 + 200;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c77c8
	if (!cr6.eq) goto loc_825C77C8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c77c8
	if (!cr6.eq) goto loc_825C77C8;
	// lwz r11,20036(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20036);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C77C8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c77e4
	if (cr6.eq) goto loc_825C77E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c77e8
	if (!cr6.eq) goto loc_825C77E8;
loc_825C77E4:
	// li r11,0
	r11.s64 = 0;
loc_825C77E8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20060(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20060);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,172
	ctx.r4.s64 = r28.s64 + 172;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c783c
	if (!cr6.eq) goto loc_825C783C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c783c
	if (!cr6.eq) goto loc_825C783C;
	// lwz r11,20060(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20060);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C783C:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7858
	if (cr6.eq) goto loc_825C7858;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c785c
	if (!cr6.eq) goto loc_825C785C;
loc_825C7858:
	// li r11,0
	r11.s64 = 0;
loc_825C785C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20064(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20064);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,144
	ctx.r4.s64 = r28.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c78b0
	if (!cr6.eq) goto loc_825C78B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c78b0
	if (!cr6.eq) goto loc_825C78B0;
	// lwz r11,20064(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20064);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C78B0:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c78cc
	if (cr6.eq) goto loc_825C78CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c78d0
	if (!cr6.eq) goto loc_825C78D0;
loc_825C78CC:
	// li r11,0
	r11.s64 = 0;
loc_825C78D0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20068(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20068);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,116
	ctx.r4.s64 = r28.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7924
	if (!cr6.eq) goto loc_825C7924;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7924
	if (!cr6.eq) goto loc_825C7924;
	// lwz r11,20068(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20068);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7924:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7940
	if (cr6.eq) goto loc_825C7940;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7944
	if (!cr6.eq) goto loc_825C7944;
loc_825C7940:
	// li r11,0
	r11.s64 = 0;
loc_825C7944:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20076(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20076);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,88
	ctx.r4.s64 = r28.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7998
	if (!cr6.eq) goto loc_825C7998;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7998
	if (!cr6.eq) goto loc_825C7998;
	// lwz r11,20076(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20076);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7998:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c79b4
	if (cr6.eq) goto loc_825C79B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c79b8
	if (!cr6.eq) goto loc_825C79B8;
loc_825C79B4:
	// li r11,0
	r11.s64 = 0;
loc_825C79B8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20080(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20080);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,60
	ctx.r4.s64 = r28.s64 + 60;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7a0c
	if (!cr6.eq) goto loc_825C7A0C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7a0c
	if (!cr6.eq) goto loc_825C7A0C;
	// lwz r11,20080(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20080);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7A0C:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7a28
	if (cr6.eq) goto loc_825C7A28;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7a2c
	if (!cr6.eq) goto loc_825C7A2C;
loc_825C7A28:
	// li r11,0
	r11.s64 = 0;
loc_825C7A2C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7a80
	if (!cr6.eq) goto loc_825C7A80;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7a80
	if (!cr6.eq) goto loc_825C7A80;
	// lwz r11,20072(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20072);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7A80:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7a9c
	if (cr6.eq) goto loc_825C7A9C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7aa0
	if (!cr6.eq) goto loc_825C7AA0;
loc_825C7A9C:
	// li r11,0
	r11.s64 = 0;
loc_825C7AA0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20084(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20084);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7af4
	if (!cr6.eq) goto loc_825C7AF4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c7af4
	if (!cr6.eq) goto loc_825C7AF4;
	// lwz r11,20084(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20084);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C7AF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C7AF8"))) PPC_WEAK_FUNC(sub_825C7AF8);
PPC_FUNC_IMPL(__imp__sub_825C7AF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C7AFC"))) PPC_WEAK_FUNC(sub_825C7AFC);
PPC_FUNC_IMPL(__imp__sub_825C7AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7B00"))) PPC_WEAK_FUNC(sub_825C7B00);
PPC_FUNC_IMPL(__imp__sub_825C7B00) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,6684
	ctx.r9.s64 = ctx.r10.s64 + 6684;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x822c33f0
	sub_822C33F0(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// addi r6,r8,-4908
	ctx.r6.s64 = ctx.r8.s64 + -4908;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,-19428(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19428);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c7b8c
	if (cr6.eq) goto loc_825C7B8C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c83e0
	sub_825C83E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C7B8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c3aa0
	sub_822C3AA0(ctx, base);
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

__attribute__((alias("__imp__sub_825C7BA8"))) PPC_WEAK_FUNC(sub_825C7BA8);
PPC_FUNC_IMPL(__imp__sub_825C7BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C7BAC"))) PPC_WEAK_FUNC(sub_825C7BAC);
PPC_FUNC_IMPL(__imp__sub_825C7BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C7BB0"))) PPC_WEAK_FUNC(sub_825C7BB0);
PPC_FUNC_IMPL(__imp__sub_825C7BB0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32164
	r11.s64 = -2107899904;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r11,25632
	r28.s64 = r11.s64 + 25632;
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c7bec
	if (cr6.eq) goto loc_825C7BEC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7bf0
	if (!cr6.eq) goto loc_825C7BF0;
loc_825C7BEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825C7BF0:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r26,12(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,8604
	ctx.r3.s64 = ctx.r10.s64 + 8604;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20084(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20084);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28408
	r28.s64 = r11.s64 + 28408;
	// beq cr6,0x825c7c64
	if (cr6.eq) goto loc_825C7C64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7c68
	if (!cr6.eq) goto loc_825C7C68;
loc_825C7C64:
	// li r11,0
	r11.s64 = 0;
loc_825C7C68:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8764
	ctx.r3.s64 = ctx.r10.s64 + 8764;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20072(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20072);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28216
	r28.s64 = r11.s64 + 28216;
	// beq cr6,0x825c7cd4
	if (cr6.eq) goto loc_825C7CD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7cd8
	if (!cr6.eq) goto loc_825C7CD8;
loc_825C7CD4:
	// li r11,0
	r11.s64 = 0;
loc_825C7CD8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8652
	ctx.r3.s64 = ctx.r10.s64 + 8652;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20080(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20080);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28320
	r28.s64 = r11.s64 + 28320;
	// beq cr6,0x825c7d44
	if (cr6.eq) goto loc_825C7D44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7d48
	if (!cr6.eq) goto loc_825C7D48;
loc_825C7D44:
	// li r11,0
	r11.s64 = 0;
loc_825C7D48:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8708
	ctx.r3.s64 = ctx.r10.s64 + 8708;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20076(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20076);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28440
	r28.s64 = r11.s64 + 28440;
	// beq cr6,0x825c7db4
	if (cr6.eq) goto loc_825C7DB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7db8
	if (!cr6.eq) goto loc_825C7DB8;
loc_825C7DB4:
	// li r11,0
	r11.s64 = 0;
loc_825C7DB8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8812
	ctx.r3.s64 = ctx.r10.s64 + 8812;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20068(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20068);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28544
	r28.s64 = r11.s64 + 28544;
	// beq cr6,0x825c7e24
	if (cr6.eq) goto loc_825C7E24;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7e28
	if (!cr6.eq) goto loc_825C7E28;
loc_825C7E24:
	// li r11,0
	r11.s64 = 0;
loc_825C7E28:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8868
	ctx.r3.s64 = ctx.r10.s64 + 8868;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20064(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20064);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,29144
	r28.s64 = r11.s64 + 29144;
	// beq cr6,0x825c7e94
	if (cr6.eq) goto loc_825C7E94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7e98
	if (!cr6.eq) goto loc_825C7E98;
loc_825C7E94:
	// li r11,0
	r11.s64 = 0;
loc_825C7E98:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8924
	ctx.r3.s64 = ctx.r10.s64 + 8924;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20060(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20060);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,172
	ctx.r4.s64 = r31.s64 + 172;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28968
	r28.s64 = r11.s64 + 28968;
	// beq cr6,0x825c7f04
	if (cr6.eq) goto loc_825C7F04;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7f08
	if (!cr6.eq) goto loc_825C7F08;
loc_825C7F04:
	// li r11,0
	r11.s64 = 0;
loc_825C7F08:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9228
	ctx.r3.s64 = ctx.r10.s64 + 9228;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20036(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20036);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,29056
	r28.s64 = r11.s64 + 29056;
	// beq cr6,0x825c7f74
	if (cr6.eq) goto loc_825C7F74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7f78
	if (!cr6.eq) goto loc_825C7F78;
loc_825C7F74:
	// li r11,0
	r11.s64 = 0;
loc_825C7F78:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9276
	ctx.r3.s64 = ctx.r10.s64 + 9276;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20032(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20032);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,228
	ctx.r4.s64 = r31.s64 + 228;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28648
	r28.s64 = r11.s64 + 28648;
	// beq cr6,0x825c7fe4
	if (cr6.eq) goto loc_825C7FE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c7fe8
	if (!cr6.eq) goto loc_825C7FE8;
loc_825C7FE4:
	// li r11,0
	r11.s64 = 0;
loc_825C7FE8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,8976
	ctx.r3.s64 = ctx.r10.s64 + 8976;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20056(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28672
	r28.s64 = r11.s64 + 28672;
	// beq cr6,0x825c8054
	if (cr6.eq) goto loc_825C8054;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c8058
	if (!cr6.eq) goto loc_825C8058;
loc_825C8054:
	// li r11,0
	r11.s64 = 0;
loc_825C8058:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9024
	ctx.r3.s64 = ctx.r10.s64 + 9024;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20052(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20052);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,284
	ctx.r4.s64 = r31.s64 + 284;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28880
	r28.s64 = r11.s64 + 28880;
	// beq cr6,0x825c80c4
	if (cr6.eq) goto loc_825C80C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c80c8
	if (!cr6.eq) goto loc_825C80C8;
loc_825C80C4:
	// li r11,0
	r11.s64 = 0;
loc_825C80C8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9084
	ctx.r3.s64 = ctx.r10.s64 + 9084;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20048(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20048);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,312
	ctx.r4.s64 = r31.s64 + 312;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,29248
	r28.s64 = r11.s64 + 29248;
	// beq cr6,0x825c8134
	if (cr6.eq) goto loc_825C8134;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c8138
	if (!cr6.eq) goto loc_825C8138;
loc_825C8134:
	// li r11,0
	r11.s64 = 0;
loc_825C8138:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9324
	ctx.r3.s64 = ctx.r10.s64 + 9324;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20028(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20028);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,340
	ctx.r4.s64 = r31.s64 + 340;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28792
	r28.s64 = r11.s64 + 28792;
	// beq cr6,0x825c81a4
	if (cr6.eq) goto loc_825C81A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c81a8
	if (!cr6.eq) goto loc_825C81A8;
loc_825C81A4:
	// li r11,0
	r11.s64 = 0;
loc_825C81A8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9184
	ctx.r3.s64 = ctx.r10.s64 + 9184;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20040(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20040);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,28696
	r28.s64 = r11.s64 + 28696;
	// beq cr6,0x825c8214
	if (cr6.eq) goto loc_825C8214;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c8218
	if (!cr6.eq) goto loc_825C8218;
loc_825C8214:
	// li r11,0
	r11.s64 = 0;
loc_825C8218:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9136
	ctx.r3.s64 = ctx.r10.s64 + 9136;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20044(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20044);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,396
	ctx.r4.s64 = r31.s64 + 396;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,29352
	r28.s64 = r11.s64 + 29352;
	// beq cr6,0x825c8284
	if (cr6.eq) goto loc_825C8284;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c8288
	if (!cr6.eq) goto loc_825C8288;
loc_825C8284:
	// li r11,0
	r11.s64 = 0;
loc_825C8288:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9368
	ctx.r3.s64 = ctx.r10.s64 + 9368;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20024(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20024);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,424
	ctx.r4.s64 = r31.s64 + 424;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14756);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,31488
	r28.s64 = r11.s64 + 31488;
	// beq cr6,0x825c82f4
	if (cr6.eq) goto loc_825C82F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c82f8
	if (!cr6.eq) goto loc_825C82F8;
loc_825C82F4:
	// li r11,0
	r11.s64 = 0;
loc_825C82F8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,9412
	ctx.r3.s64 = ctx.r10.s64 + 9412;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20020(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20020);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,452
	ctx.r4.s64 = r31.s64 + 452;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825c8350
	if (cr6.eq) goto loc_825C8350;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x825c8358
	goto loc_825C8358;
loc_825C8350:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2440
	ctx.r4.s64 = r11.s64 + -2440;
loc_825C8358:
	// lwz r3,480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r3,480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 480);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r8,15868
	ctx.r4.s64 = ctx.r8.s64 + 15868;
	// lfs f1,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825c2740
	sub_825C2740(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C8388"))) PPC_WEAK_FUNC(sub_825C8388);
PPC_FUNC_IMPL(__imp__sub_825C8388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825C838C"))) PPC_WEAK_FUNC(sub_825C838C);
PPC_FUNC_IMPL(__imp__sub_825C838C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8390"))) PPC_WEAK_FUNC(sub_825C8390);
PPC_FUNC_IMPL(__imp__sub_825C8390) {
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
	// bl 0x825c61f8
	sub_825C61F8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c83c8
	if (cr6.eq) goto loc_825C83C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C83C8:
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

__attribute__((alias("__imp__sub_825C83DC"))) PPC_WEAK_FUNC(sub_825C83DC);
PPC_FUNC_IMPL(__imp__sub_825C83DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C83E0"))) PPC_WEAK_FUNC(sub_825C83E0);
PPC_FUNC_IMPL(__imp__sub_825C83E0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-2448
	ctx.r9.s64 = r11.s64 + -2448;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,6684
	ctx.r8.s64 = ctx.r10.s64 + 6684;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x822c33f0
	sub_822C33F0(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r7,-4908
	ctx.r6.s64 = ctx.r7.s64 + -4908;
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C8450"))) PPC_WEAK_FUNC(sub_825C8450);
PPC_FUNC_IMPL(__imp__sub_825C8450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8454"))) PPC_WEAK_FUNC(sub_825C8454);
PPC_FUNC_IMPL(__imp__sub_825C8454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8458"))) PPC_WEAK_FUNC(sub_825C8458);
PPC_FUNC_IMPL(__imp__sub_825C8458) {
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
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-2448
	ctx.r10.s64 = r11.s64 + -2448;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822c3aa0
	sub_822C3AA0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,4764
	ctx.r7.s64 = ctx.r9.s64 + 4764;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x825c84ac
	if (cr6.eq) goto loc_825C84AC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C84AC:
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

__attribute__((alias("__imp__sub_825C84C0"))) PPC_WEAK_FUNC(sub_825C84C0);
PPC_FUNC_IMPL(__imp__sub_825C84C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C84C4"))) PPC_WEAK_FUNC(sub_825C84C4);
PPC_FUNC_IMPL(__imp__sub_825C84C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C84C8"))) PPC_WEAK_FUNC(sub_825C84C8);
PPC_FUNC_IMPL(__imp__sub_825C84C8) {
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
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c850c
	if (!cr6.eq) goto loc_825C850C;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r8.u8);
loc_825C850C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C851C"))) PPC_WEAK_FUNC(sub_825C851C);
PPC_FUNC_IMPL(__imp__sub_825C851C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8520"))) PPC_WEAK_FUNC(sub_825C8520);
PPC_FUNC_IMPL(__imp__sub_825C8520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8540"))) PPC_WEAK_FUNC(sub_825C8540);
PPC_FUNC_IMPL(__imp__sub_825C8540) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x825c8558
	if (!cr6.gt) goto loc_825C8558;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_825C8558:
	// lfs f13,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x825c8568
	if (!cr6.gt) goto loc_825C8568;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_825C8568:
	// lfs f13,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x825c8578
	if (!cr6.gt) goto loc_825C8578;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_825C8578:
	// lfs f1,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C858C"))) PPC_WEAK_FUNC(sub_825C858C);
PPC_FUNC_IMPL(__imp__sub_825C858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8590"))) PPC_WEAK_FUNC(sub_825C8590);
PPC_FUNC_IMPL(__imp__sub_825C8590) {
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
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c85d4
	if (!cr6.eq) goto loc_825C85D4;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r8.u8);
loc_825C85D4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	f0.f64 = double(temp.f32);
	// lfs f1,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x825c85ec
	if (!cr6.gt) goto loc_825C85EC;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_825C85EC:
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 176);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x825c85fc
	if (!cr6.gt) goto loc_825C85FC;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_825C85FC:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x825c860c
	if (!cr6.gt) goto loc_825C860C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_825C860C:
	// lfs f0,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 184);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x825c861c
	if (!cr6.gt) goto loc_825C861C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_825C861C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r4,r11,-2408
	ctx.r4.s64 = r11.s64 + -2408;
	// bl 0x825c3020
	sub_825C3020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C863C"))) PPC_WEAK_FUNC(sub_825C863C);
PPC_FUNC_IMPL(__imp__sub_825C863C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8640"))) PPC_WEAK_FUNC(sub_825C8640);
PPC_FUNC_IMPL(__imp__sub_825C8640) {
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
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c868c
	if (!cr6.eq) goto loc_825C868C;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r8.u8);
loc_825C868C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x825c2508
	sub_825C2508(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r11.u8);
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

__attribute__((alias("__imp__sub_825C86B4"))) PPC_WEAK_FUNC(sub_825C86B4);
PPC_FUNC_IMPL(__imp__sub_825C86B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C86B8"))) PPC_WEAK_FUNC(sub_825C86B8);
PPC_FUNC_IMPL(__imp__sub_825C86B8) {
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
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c8700
	if (!cr6.eq) goto loc_825C8700;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r8.u8);
loc_825C8700:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x825c2508
	sub_825C2508(ctx, base);
	// addi r11,r29,0
	r11.s64 = r29.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,152(r31)
	PPC_STORE_U8(r31.u32 + 152, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C8728"))) PPC_WEAK_FUNC(sub_825C8728);
PPC_FUNC_IMPL(__imp__sub_825C8728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C872C"))) PPC_WEAK_FUNC(sub_825C872C);
PPC_FUNC_IMPL(__imp__sub_825C872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8730"))) PPC_WEAK_FUNC(sub_825C8730);
PPC_FUNC_IMPL(__imp__sub_825C8730) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x825c2ed8
	sub_825C2ED8(ctx, base);
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c8788
	if (!cr6.eq) goto loc_825C8788;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r8.u8);
loc_825C8788:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x825c2508
	sub_825C2508(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r11.u8);
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

__attribute__((alias("__imp__sub_825C87B0"))) PPC_WEAK_FUNC(sub_825C87B0);
PPC_FUNC_IMPL(__imp__sub_825C87B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C87B4"))) PPC_WEAK_FUNC(sub_825C87B4);
PPC_FUNC_IMPL(__imp__sub_825C87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C87B8"))) PPC_WEAK_FUNC(sub_825C87B8);
PPC_FUNC_IMPL(__imp__sub_825C87B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c887c
	if (cr0.eq) goto loc_825C887C;
	// bne cr6,0x825c88e0
	if (!cr6.eq) goto loc_825C88E0;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - f0.f64));
	// lfs f12,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x825c88e0
	if (cr6.lt) goto loc_825C88E0;
	// lbz r11,200(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c88e0
	if (!cr6.eq) goto loc_825C88E0;
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c8850
	if (!cr6.eq) goto loc_825C8850;
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,144(r31)
	PPC_STORE_U8(r31.u32 + 144, r30.u8);
loc_825C8850:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-2340
	ctx.r3.s64 = r11.s64 + -2340;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x825c2508
	sub_825C2508(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// stb r30,200(r31)
	PPC_STORE_U8(r31.u32 + 200, r30.u8);
	// stb r10,152(r31)
	PPC_STORE_U8(r31.u32 + 152, ctx.r10.u8);
	// b 0x825c88e0
	goto loc_825C88E0;
loc_825C887C:
	// beq cr6,0x825c88e0
	if (cr6.eq) goto loc_825C88E0;
	// lbz r11,200(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c88e0
	if (cr6.eq) goto loc_825C88E0;
	// lbz r11,144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c88bc
	if (!cr6.eq) goto loc_825C88BC;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-2424
	ctx.r4.s64 = r11.s64 + -2424;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r8.u8);
loc_825C88BC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-2364
	ctx.r3.s64 = r11.s64 + -2364;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x825c2508
	sub_825C2508(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r11.u8);
	// stb r11,200(r31)
	PPC_STORE_U8(r31.u32 + 200, r11.u8);
loc_825C88E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C88F8"))) PPC_WEAK_FUNC(sub_825C88F8);
PPC_FUNC_IMPL(__imp__sub_825C88F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C88FC"))) PPC_WEAK_FUNC(sub_825C88FC);
PPC_FUNC_IMPL(__imp__sub_825C88FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8900"))) PPC_WEAK_FUNC(sub_825C8900);
PPC_FUNC_IMPL(__imp__sub_825C8900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,43
	r11.s64 = ctx.r4.s64 + 43;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
}

__attribute__((alias("__imp__sub_825C890C"))) PPC_WEAK_FUNC(sub_825C890C);
PPC_FUNC_IMPL(__imp__sub_825C890C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c8590
	sub_825C8590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C8910"))) PPC_WEAK_FUNC(sub_825C8910);
PPC_FUNC_IMPL(__imp__sub_825C8910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c8950
	if (cr6.eq) goto loc_825C8950;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// li r11,0
	r11.s64 = 0;
loc_825C892C:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c8954
	if (cr6.eq) goto loc_825C8954;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x825c8958
	if (cr6.eq) goto loc_825C8958;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// blt cr6,0x825c892c
	if (cr6.lt) goto loc_825C892C;
loc_825C8950:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825C8954:
	// blr 
	return;
loc_825C8958:
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_825C8960"))) PPC_WEAK_FUNC(sub_825C8960);
PPC_FUNC_IMPL(__imp__sub_825C8960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8964"))) PPC_WEAK_FUNC(sub_825C8964);
PPC_FUNC_IMPL(__imp__sub_825C8964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8968"))) PPC_WEAK_FUNC(sub_825C8968);
PPC_FUNC_IMPL(__imp__sub_825C8968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r8,168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// stw r30,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r30.u32);
	// stw r30,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r30.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r30,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r30.u32);
	// lfs f31,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stw r30,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r30.u32);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r11,r3,156
	r11.s64 = ctx.r3.s64 + 156;
	// bl 0x825c87b8
	sub_825C87B8(ctx, base);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 196);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// stb r30,200(r31)
	PPC_STORE_U8(r31.u32 + 200, r30.u8);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// addi r4,r6,-2408
	ctx.r4.s64 = ctx.r6.s64 + -2408;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// addi r11,r31,172
	r11.s64 = r31.s64 + 172;
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x825c3020
	sub_825C3020(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C8A18"))) PPC_WEAK_FUNC(sub_825C8A18);
PPC_FUNC_IMPL(__imp__sub_825C8A18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8A1C"))) PPC_WEAK_FUNC(sub_825C8A1C);
PPC_FUNC_IMPL(__imp__sub_825C8A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8A20"))) PPC_WEAK_FUNC(sub_825C8A20);
PPC_FUNC_IMPL(__imp__sub_825C8A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r8,39
	r11.s64 = ctx.r8.s64 + 39;
	// beq cr6,0x825c8a64
	if (cr6.eq) goto loc_825C8A64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x825c8a7c
	sub_825C8A7C(ctx, base);
	return;
loc_825C8A64:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825c8a7c
	if (!cr6.gt) {
		sub_825C8A7C(ctx, base);
		return;
	}
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
}

__attribute__((alias("__imp__sub_825C8A7C"))) PPC_WEAK_FUNC(sub_825C8A7C);
PPC_FUNC_IMPL(__imp__sub_825C8A7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c87b8
	sub_825C87B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C8A80"))) PPC_WEAK_FUNC(sub_825C8A80);
PPC_FUNC_IMPL(__imp__sub_825C8A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c8ab8
	if (cr6.eq) goto loc_825C8AB8;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_825C8A9C:
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x825c8ac0
	if (cr6.eq) goto loc_825C8AC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x825c8a9c
	if (cr6.lt) goto loc_825C8A9C;
loc_825C8AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825C8AC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8AC8"))) PPC_WEAK_FUNC(sub_825C8AC8);
PPC_FUNC_IMPL(__imp__sub_825C8AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// divwu r5,r6,r7
	ctx.r5.u32 = ctx.r6.u32 / ctx.r7.u32;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r11,r4,r6
	r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8AFC"))) PPC_WEAK_FUNC(sub_825C8AFC);
PPC_FUNC_IMPL(__imp__sub_825C8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C8B00"))) PPC_WEAK_FUNC(sub_825C8B00);
PPC_FUNC_IMPL(__imp__sub_825C8B00) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825C8B34"))) PPC_WEAK_FUNC(sub_825C8B34);
PPC_FUNC_IMPL(__imp__sub_825C8B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8B38"))) PPC_WEAK_FUNC(sub_825C8B38);
PPC_FUNC_IMPL(__imp__sub_825C8B38) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825C8B64"))) PPC_WEAK_FUNC(sub_825C8B64);
PPC_FUNC_IMPL(__imp__sub_825C8B64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8B68"))) PPC_WEAK_FUNC(sub_825C8B68);
PPC_FUNC_IMPL(__imp__sub_825C8B68) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// lwz r10,80(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825C8B94"))) PPC_WEAK_FUNC(sub_825C8B94);
PPC_FUNC_IMPL(__imp__sub_825C8B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8B98"))) PPC_WEAK_FUNC(sub_825C8B98);
PPC_FUNC_IMPL(__imp__sub_825C8B98) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x825c8bbc
	if (!cr6.eq) goto loc_825C8BBC;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 136);
loc_825C8BBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r9
	r27.u64 = r11.u64 + ctx.r9.u64;
	// lwz r26,12(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,56(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// lwzx r25,r9,r10
	r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ble cr6,0x825c8ce8
	if (!cr6.gt) goto loc_825C8CE8;
	// li r23,10
	r23.s64 = 10;
	// addi r24,r31,124
	r24.s64 = r31.s64 + 124;
loc_825C8C14:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r30,r8,r25
	r30.s64 = r25.s64 - ctx.r8.s64;
	// bl 0x826cc010
	sub_826CC010(ctx, base);
	// addi r7,r30,-1
	ctx.r7.s64 = r30.s64 + -1;
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// divw r6,r3,r7
	ctx.r6.s32 = ctx.r3.s32 / ctx.r7.s32;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r4,r5,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r5.s64;
	// addic. r10,r4,1
	xer.ca = ctx.r4.u32 > 4294967294;
	ctx.r10.s64 = ctx.r4.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x825c8c78
	if (!cr0.gt) goto loc_825C8C78;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 4);
loc_825C8C54:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// divwu r9,r11,r26
	ctx.r9.u32 = r11.u32 / r26.u32;
	// mullw r7,r9,r26
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf. r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x825c8c54
	if (cr0.gt) goto loc_825C8C54;
loc_825C8C78:
	// stwx r11,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, r11.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// beq cr6,0x825c8cc0
	if (cr6.eq) goto loc_825C8CC0;
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r11,0
	r11.s64 = 0;
loc_825C8CA0:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x825c8ce0
	if (cr6.eq) goto loc_825C8CE0;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x825c8ca0
	if (cr6.lt) goto loc_825C8CA0;
loc_825C8CC0:
	// li r11,0
	r11.s64 = 0;
loc_825C8CC4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c8cf4
	if (cr6.eq) goto loc_825C8CF4;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// bne cr6,0x825c8c14
	if (!cr6.eq) goto loc_825C8C14;
	// b 0x825c8cf4
	goto loc_825C8CF4;
loc_825C8CE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x825c8cc4
	goto loc_825C8CC4;
loc_825C8CE8:
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r11,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, r11.u32);
loc_825C8CF4:
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// divwu r10,r11,r26
	ctx.r10.u32 = r11.u32 / r26.u32;
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// stwx r8,r28,r29
	PPC_STORE_U32(r28.u32 + r29.u32, ctx.r8.u32);
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r4,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// divwu r8,r9,r10
	ctx.r8.u32 = ctx.r9.u32 / ctx.r10.u32;
	// stw r4,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r4.u32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825C8D4C"))) PPC_WEAK_FUNC(sub_825C8D4C);
PPC_FUNC_IMPL(__imp__sub_825C8D4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825C8D50"))) PPC_WEAK_FUNC(sub_825C8D50);
PPC_FUNC_IMPL(__imp__sub_825C8D50) {
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
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,-2276
	ctx.r10.s64 = r11.s64 + -2276;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825c8dc0
	if (cr6.eq) goto loc_825C8DC0;
	// bl 0x825c2078
	sub_825C2078(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c8db8
	if (cr6.eq) goto loc_825C8DB8;
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
loc_825C8DB8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_825C8DC0:
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82458d00
	sub_82458D00(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r10,r11,-2312
	ctx.r10.s64 = r11.s64 + -2312;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c9fb8
	sub_825C9FB8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r9,-2384
	ctx.r8.s64 = ctx.r9.s64 + -2384;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r5,r7,-2392
	ctx.r5.s64 = ctx.r7.s64 + -2392;
	// li r11,0
	r11.s64 = 0;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r11,19956(r6)
	PPC_STORE_U32(ctx.r6.u32 + 19956, r11.u32);
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

__attribute__((alias("__imp__sub_825C8E44"))) PPC_WEAK_FUNC(sub_825C8E44);
PPC_FUNC_IMPL(__imp__sub_825C8E44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C8E48"))) PPC_WEAK_FUNC(sub_825C8E48);
PPC_FUNC_IMPL(__imp__sub_825C8E48) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825c8910
	sub_825C8910(ctx, base);
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c8fd8
	if (!cr6.eq) goto loc_825C8FD8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c8fd8
	if (cr6.eq) goto loc_825C8FD8;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r9,20600
	r26.s64 = ctx.r9.s64 + 20600;
	// addi r28,r10,-2260
	r28.s64 = ctx.r10.s64 + -2260;
	// addi r27,r11,13852
	r27.s64 = r11.s64 + 13852;
loc_825C8EC8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// bl 0x825c9d38
	sub_825C9D38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c8f60
	if (cr6.eq) goto loc_825C8F60;
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
	// beq cr6,0x825c8f60
	if (cr6.eq) goto loc_825C8F60;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c8f64
	if (!cr6.eq) goto loc_825C8F64;
loc_825C8F60:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_825C8F64:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825c8f9c
	if (!cr6.gt) goto loc_825C8F9C;
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
loc_825C8F9C:
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
	// beq 0x825c8fc0
	if (cr0.eq) goto loc_825C8FC0;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_825C8FC0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x825c8ec8
	if (!cr6.eq) goto loc_825C8EC8;
loc_825C8FD8:
	// lwz r7,128(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c9014
	if (cr6.eq) goto loc_825C9014;
	// lwz r8,32(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// li r11,0
	r11.s64 = 0;
loc_825C8FF0:
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r23,r9
	cr6.compare<uint32_t>(r23.u32, ctx.r9.u32, xer);
	// beq cr6,0x825c9018
	if (cr6.eq) goto loc_825C9018;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x825c902c
	if (cr6.eq) goto loc_825C902C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x825c8ff0
	if (cr6.lt) goto loc_825C8FF0;
loc_825C9014:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_825C9018:
	// lwz r11,80(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r25.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9454
	return;
loc_825C902C:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r23.u32);
	// lwz r11,80(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 80);
	// stwx r25,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r25.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825C9044"))) PPC_WEAK_FUNC(sub_825C9044);
PPC_FUNC_IMPL(__imp__sub_825C9044) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_825C9048"))) PPC_WEAK_FUNC(sub_825C9048);
PPC_FUNC_IMPL(__imp__sub_825C9048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r10,-2276
	ctx.r8.s64 = ctx.r10.s64 + -2276;
	// li r30,0
	r30.s64 = 0;
	// addi r7,r9,-2312
	ctx.r7.s64 = ctx.r9.s64 + -2312;
	// stw r3,19956(r11)
	PPC_STORE_U32(r11.u32 + 19956, ctx.r3.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,20(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r11,r5,-2300
	r11.s64 = ctx.r5.s64 + -2300;
	// addi r31,r4,23372
	r31.s64 = ctx.r4.s64 + 23372;
	// stw r3,20(r25)
	PPC_STORE_U32(r25.u32 + 20, ctx.r3.u32);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// addi r28,r25,28
	r28.s64 = r25.s64 + 28;
	// stw r31,28(r25)
	PPC_STORE_U32(r25.u32 + 28, r31.u32);
	// stw r30,32(r25)
	PPC_STORE_U32(r25.u32 + 32, r30.u32);
	// stw r30,40(r25)
	PPC_STORE_U32(r25.u32 + 40, r30.u32);
	// stw r30,36(r25)
	PPC_STORE_U32(r25.u32 + 36, r30.u32);
	// stw r30,44(r25)
	PPC_STORE_U32(r25.u32 + 44, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// addi r23,r9,23492
	r23.s64 = ctx.r9.s64 + 23492;
	// stw r8,44(r25)
	PPC_STORE_U32(r25.u32 + 44, ctx.r8.u32);
	// addi r27,r25,52
	r27.s64 = r25.s64 + 52;
	// stw r23,28(r25)
	PPC_STORE_U32(r25.u32 + 28, r23.u32);
	// stw r30,56(r25)
	PPC_STORE_U32(r25.u32 + 56, r30.u32);
	// stw r30,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r30.u32);
	// stw r30,60(r25)
	PPC_STORE_U32(r25.u32 + 60, r30.u32);
	// stw r30,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r30.u32);
	// stw r31,52(r25)
	PPC_STORE_U32(r25.u32 + 52, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,68(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stw r23,52(r25)
	PPC_STORE_U32(r25.u32 + 52, r23.u32);
	// or r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 | ctx.r7.u64;
	// addi r4,r6,-21492
	ctx.r4.s64 = ctx.r6.s64 + -21492;
	// stw r5,68(r25)
	PPC_STORE_U32(r25.u32 + 68, ctx.r5.u32);
	// addi r26,r25,76
	r26.s64 = r25.s64 + 76;
	// stw r30,80(r25)
	PPC_STORE_U32(r25.u32 + 80, r30.u32);
	// stw r4,76(r25)
	PPC_STORE_U32(r25.u32 + 76, ctx.r4.u32);
	// stw r30,88(r25)
	PPC_STORE_U32(r25.u32 + 88, r30.u32);
	// stw r30,84(r25)
	PPC_STORE_U32(r25.u32 + 84, r30.u32);
	// stw r30,92(r25)
	PPC_STORE_U32(r25.u32 + 92, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,92(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 92);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// or r9,r11,r3
	ctx.r9.u64 = r11.u64 | ctx.r3.u64;
	// addi r8,r10,27132
	ctx.r8.s64 = ctx.r10.s64 + 27132;
	// stw r9,92(r25)
	PPC_STORE_U32(r25.u32 + 92, ctx.r9.u32);
	// addi r24,r25,100
	r24.s64 = r25.s64 + 100;
	// stw r8,76(r25)
	PPC_STORE_U32(r25.u32 + 76, ctx.r8.u32);
	// stw r30,104(r25)
	PPC_STORE_U32(r25.u32 + 104, r30.u32);
	// stw r30,112(r25)
	PPC_STORE_U32(r25.u32 + 112, r30.u32);
	// stw r30,108(r25)
	PPC_STORE_U32(r25.u32 + 108, r30.u32);
	// stw r30,116(r25)
	PPC_STORE_U32(r25.u32 + 116, r30.u32);
	// stw r31,100(r25)
	PPC_STORE_U32(r25.u32 + 100, r31.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,116(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 116);
	// stw r23,100(r25)
	PPC_STORE_U32(r25.u32 + 100, r23.u32);
	// addi r31,r25,124
	r31.s64 = r25.s64 + 124;
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,116(r25)
	PPC_STORE_U32(r25.u32 + 116, ctx.r6.u32);
	// bl 0x826cc140
	sub_826CC140(ctx, base);
	// stw r30,136(r25)
	PPC_STORE_U32(r25.u32 + 136, r30.u32);
	// stb r30,144(r25)
	PPC_STORE_U8(r25.u32 + 144, r30.u8);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r3,r5,-2152
	ctx.r3.s64 = ctx.r5.s64 + -2152;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c91fc
	if (cr6.eq) goto loc_825C91FC;
	// rotlwi r11,r4,0
	r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
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
	// beq cr6,0x825c91fc
	if (cr6.eq) goto loc_825C91FC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c9200
	if (!cr6.eq) goto loc_825C9200;
loc_825C91FC:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825C9200:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,128(r25)
	PPC_STORE_U32(r25.u32 + 128, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r10,-2176
	ctx.r3.s64 = ctx.r10.s64 + -2176;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c9278
	if (cr6.eq) goto loc_825C9278;
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
	// beq cr6,0x825c9278
	if (cr6.eq) goto loc_825C9278;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c927c
	if (!cr6.eq) goto loc_825C927C;
loc_825C9278:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825C927C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r10,-2188
	ctx.r3.s64 = ctx.r10.s64 + -2188;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825c92f8
	if (cr6.eq) goto loc_825C92F8;
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
	// beq cr6,0x825c92f8
	if (cr6.eq) goto loc_825C92F8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c92fc
	if (!cr6.eq) goto loc_825C92FC;
loc_825C92F8:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825C92FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r19,0(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cbfd8
	sub_826CBFD8(ctx, base);
	// lwz r4,128(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825c9334
	if (!cr6.gt) goto loc_825C9334;
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
loc_825C9334:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// lwz r4,128(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x825c9364
	if (!cr6.gt) goto loc_825C9364;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C9364:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r10.u32);
	// lwz r4,128(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x825c9394
	if (!cr6.gt) goto loc_825C9394;
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
loc_825C9394:
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r27)
	PPC_STORE_U32(r27.u32 + 16, ctx.r10.u32);
	// lwz r4,128(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x825c93c4
	if (!cr6.gt) goto loc_825C93C4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C93C4:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r26)
	PPC_STORE_U32(r26.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r19,r9
	cr6.compare<uint32_t>(r19.u32, ctx.r9.u32, xer);
	// ble cr6,0x825c93f4
	if (!cr6.gt) goto loc_825C93F4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C93F4:
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// mr r21,r30
	r21.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r24)
	PPC_STORE_U32(r24.u32 + 16, ctx.r10.u32);
	// stw r30,148(r25)
	PPC_STORE_U32(r25.u32 + 148, r30.u32);
	// lwz r9,128(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x825c95bc
	if (!cr6.gt) goto loc_825C95BC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r20,-1
	r20.s64 = -1;
	// addi r23,r11,-2288
	r23.s64 = r11.s64 + -2288;
	// addi r22,r10,-2268
	r22.s64 = ctx.r10.s64 + -2268;
loc_825C9428:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825c9450
	if (!cr6.gt) goto loc_825C9450;
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
loc_825C9450:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x825c94a0
	if (cr0.eq) goto loc_825C94A0;
	// stw r23,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r23.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// b 0x825c94a4
	goto loc_825C94A4;
loc_825C94A0:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825C94A4:
	// lwz r4,132(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825c94c8
	if (!cr6.gt) goto loc_825C94C8;
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
loc_825C94C8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// ble cr6,0x825c94fc
	if (!cr6.gt) goto loc_825C94FC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C94FC:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c951c
	if (cr0.eq) goto loc_825C951C;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
loc_825C951C:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825c9544
	if (!cr6.gt) goto loc_825C9544;
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
loc_825C9544:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r27)
	PPC_STORE_U32(r27.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c9564
	if (cr0.eq) goto loc_825C9564;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825C9564:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825c958c
	if (!cr6.gt) goto loc_825C958C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C958C:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c95ac
	if (cr0.eq) goto loc_825C95AC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825C95AC:
	// lwz r11,128(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x825c9428
	if (cr6.lt) goto loc_825C9428;
loc_825C95BC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x825c9618
	if (cr6.eq) goto loc_825C9618;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_825C95C8:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825c95f0
	if (!cr6.gt) goto loc_825C95F0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C95F0:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r24)
	PPC_STORE_U32(r24.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825c9610
	if (cr0.eq) goto loc_825C9610;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_825C9610:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825c95c8
	if (!cr0.eq) goto loc_825C95C8;
loc_825C9618:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r31,r11,-2196
	r31.s64 = r11.s64 + -2196;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c9690
	if (cr6.eq) goto loc_825C9690;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c8e48
	sub_825C8E48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825C9690:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-25292
	ctx.r3.s64 = ctx.r10.s64 + -25292;
	// lfs f0,3648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3648);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c97a0
	if (cr6.eq) goto loc_825C97A0;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c97a0
	if (cr6.eq) goto loc_825C97A0;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r31,r11,-13220
	r31.s64 = r11.s64 + -13220;
	// addi r6,r10,-13188
	ctx.r6.s64 = ctx.r10.s64 + -13188;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c9724
	if (cr6.eq) goto loc_825C9724;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// b 0x825c9798
	goto loc_825C9798;
loc_825C9724:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r6,r11,-13328
	ctx.r6.s64 = r11.s64 + -13328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c97a0
	if (cr6.eq) goto loc_825C97A0;
	// addi r31,r3,60
	r31.s64 = ctx.r3.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c9790
	if (cr6.eq) goto loc_825C9790;
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
	// beq cr6,0x825c9790
	if (cr6.eq) goto loc_825C9790;
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
	// b 0x825c9794
	goto loc_825C9794;
loc_825C9790:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825C9794:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825C9798:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c97a4
	if (!cr6.eq) goto loc_825C97A4;
loc_825C97A0:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_825C97A4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,192(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 192, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,5840
	ctx.r3.s64 = r11.s64 + 5840;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r7,r10,-2252
	ctx.r7.s64 = ctx.r10.s64 + -2252;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r3,120
	ctx.r3.s64 = 120;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c983c
	if (cr6.eq) goto loc_825C983C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c3e08
	sub_825C3E08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,140(r25)
	PPC_STORE_U32(r25.u32 + 140, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9440
	return;
loc_825C983C:
	// stw r30,140(r25)
	PPC_STORE_U32(r25.u32 + 140, r30.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825C9848"))) PPC_WEAK_FUNC(sub_825C9848);
PPC_FUNC_IMPL(__imp__sub_825C9848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_825C984C"))) PPC_WEAK_FUNC(sub_825C984C);
PPC_FUNC_IMPL(__imp__sub_825C984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9850"))) PPC_WEAK_FUNC(sub_825C9850);
PPC_FUNC_IMPL(__imp__sub_825C9850) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825C9850"))) PPC_WEAK_FUNC(sub_825C9850);
PPC_FUNC_IMPL(__imp__sub_825C9850) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c9fb8
	sub_825C9FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C9854"))) PPC_WEAK_FUNC(sub_825C9854);
PPC_FUNC_IMPL(__imp__sub_825C9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9858"))) PPC_WEAK_FUNC(sub_825C9858);
PPC_FUNC_IMPL(__imp__sub_825C9858) {
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
	// addi r9,r11,-2392
	ctx.r9.s64 = r11.s64 + -2392;
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
	// stw r11,19956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19956, r11.u32);
	// beq cr6,0x825c9898
	if (cr6.eq) goto loc_825C9898;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C9898:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C98A8"))) PPC_WEAK_FUNC(sub_825C98A8);
PPC_FUNC_IMPL(__imp__sub_825C98A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C98AC"))) PPC_WEAK_FUNC(sub_825C98AC);
PPC_FUNC_IMPL(__imp__sub_825C98AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C98B0"))) PPC_WEAK_FUNC(sub_825C98B0);
PPC_FUNC_IMPL(__imp__sub_825C98B0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825c9918
	if (!cr6.gt) goto loc_825C9918;
loc_825C98D0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = r11.s64 + -24;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -24);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bgt cr6,0x825c98d0
	if (cr6.gt) goto loc_825C98D0;
loc_825C9918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C9928"))) PPC_WEAK_FUNC(sub_825C9928);
PPC_FUNC_IMPL(__imp__sub_825C9928) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C992C"))) PPC_WEAK_FUNC(sub_825C992C);
PPC_FUNC_IMPL(__imp__sub_825C992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9930"))) PPC_WEAK_FUNC(sub_825C9930);
PPC_FUNC_IMPL(__imp__sub_825C9930) {
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
	// addi r10,r11,-2384
	ctx.r10.s64 = r11.s64 + -2384;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c9974
	if (cr6.eq) goto loc_825C9974;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C9974:
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

__attribute__((alias("__imp__sub_825C9988"))) PPC_WEAK_FUNC(sub_825C9988);
PPC_FUNC_IMPL(__imp__sub_825C9988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C998C"))) PPC_WEAK_FUNC(sub_825C998C);
PPC_FUNC_IMPL(__imp__sub_825C998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9990"))) PPC_WEAK_FUNC(sub_825C9990);
PPC_FUNC_IMPL(__imp__sub_825C9990) {
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
	// addi r9,r10,-2312
	ctx.r9.s64 = ctx.r10.s64 + -2312;
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

__attribute__((alias("__imp__sub_825C99E8"))) PPC_WEAK_FUNC(sub_825C99E8);
PPC_FUNC_IMPL(__imp__sub_825C99E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C99EC"))) PPC_WEAK_FUNC(sub_825C99EC);
PPC_FUNC_IMPL(__imp__sub_825C99EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C99F0"))) PPC_WEAK_FUNC(sub_825C99F0);
PPC_FUNC_IMPL(__imp__sub_825C99F0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2312
	ctx.r10.s64 = r11.s64 + -2312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c9fb8
	sub_825C9FB8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-2384
	ctx.r8.s64 = ctx.r9.s64 + -2384;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C9A44"))) PPC_WEAK_FUNC(sub_825C9A44);
PPC_FUNC_IMPL(__imp__sub_825C9A44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9A48"))) PPC_WEAK_FUNC(sub_825C9A48);
PPC_FUNC_IMPL(__imp__sub_825C9A48) {
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
	// addi r10,r11,-2312
	ctx.r10.s64 = r11.s64 + -2312;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825c9fb8
	sub_825C9FB8(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-2384
	ctx.r8.s64 = ctx.r9.s64 + -2384;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c9aac
	if (cr6.eq) goto loc_825C9AAC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C9AAC:
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

__attribute__((alias("__imp__sub_825C9AC0"))) PPC_WEAK_FUNC(sub_825C9AC0);
PPC_FUNC_IMPL(__imp__sub_825C9AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9AC4"))) PPC_WEAK_FUNC(sub_825C9AC4);
PPC_FUNC_IMPL(__imp__sub_825C9AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9AC8"))) PPC_WEAK_FUNC(sub_825C9AC8);
PPC_FUNC_IMPL(__imp__sub_825C9AC8) {
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
	// addi r9,r11,-2372
	ctx.r9.s64 = r11.s64 + -2372;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825c9b0c
	if (!cr6.gt) goto loc_825C9B0C;
loc_825C9AF4:
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
	// bgt cr6,0x825c9af4
	if (cr6.gt) goto loc_825C9AF4;
loc_825C9B0C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c9b24
	if (cr6.eq) goto loc_825C9B24;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C9B24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C9B34"))) PPC_WEAK_FUNC(sub_825C9B34);
PPC_FUNC_IMPL(__imp__sub_825C9B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9B38"))) PPC_WEAK_FUNC(sub_825C9B38);
PPC_FUNC_IMPL(__imp__sub_825C9B38) {
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
	// addi r9,r10,-2288
	ctx.r9.s64 = ctx.r10.s64 + -2288;
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

__attribute__((alias("__imp__sub_825C9B90"))) PPC_WEAK_FUNC(sub_825C9B90);
PPC_FUNC_IMPL(__imp__sub_825C9B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9B94"))) PPC_WEAK_FUNC(sub_825C9B94);
PPC_FUNC_IMPL(__imp__sub_825C9B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9B98"))) PPC_WEAK_FUNC(sub_825C9B98);
PPC_FUNC_IMPL(__imp__sub_825C9B98) {
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
	// beq cr6,0x825c9c7c
	if (cr6.eq) goto loc_825C9C7C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c9c0c
	if (!cr6.eq) goto loc_825C9C0C;
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
	// beq cr6,0x825c9c7c
	if (cr6.eq) goto loc_825C9C7C;
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
	// b 0x825c9c7c
	goto loc_825C9C7C;
loc_825C9C0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c9b38
	sub_825C9B38(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825c9c38
	if (!cr6.gt) goto loc_825C9C38;
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
loc_825C9C38:
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
	// bl 0x825c9ca0
	sub_825C9CA0(ctx, base);
loc_825C9C7C:
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

__attribute__((alias("__imp__sub_825C9C90"))) PPC_WEAK_FUNC(sub_825C9C90);
PPC_FUNC_IMPL(__imp__sub_825C9C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9C94"))) PPC_WEAK_FUNC(sub_825C9C94);
PPC_FUNC_IMPL(__imp__sub_825C9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9C98"))) PPC_WEAK_FUNC(sub_825C9C98);
PPC_FUNC_IMPL(__imp__sub_825C9C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c9b98
	sub_825C9B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C9C98"))) PPC_WEAK_FUNC(sub_825C9C98);
PPC_FUNC_IMPL(__imp__sub_825C9C98) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825C9C9C"))) PPC_WEAK_FUNC(sub_825C9C9C);
PPC_FUNC_IMPL(__imp__sub_825C9C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9CA0"))) PPC_WEAK_FUNC(sub_825C9CA0);
PPC_FUNC_IMPL(__imp__sub_825C9CA0) {
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
	// addi r9,r11,-2288
	ctx.r9.s64 = r11.s64 + -2288;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825c9ce4
	if (!cr6.gt) goto loc_825C9CE4;
loc_825C9CCC:
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
	// bgt cr6,0x825c9ccc
	if (cr6.gt) goto loc_825C9CCC;
loc_825C9CE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c9b98
	sub_825C9B98(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-2372
	ctx.r10.s64 = r11.s64 + -2372;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825c9d20
	if (!cr6.gt) goto loc_825C9D20;
loc_825C9D08:
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
	// bgt cr6,0x825c9d08
	if (cr6.gt) goto loc_825C9D08;
loc_825C9D20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C9D30"))) PPC_WEAK_FUNC(sub_825C9D30);
PPC_FUNC_IMPL(__imp__sub_825C9D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9D34"))) PPC_WEAK_FUNC(sub_825C9D34);
PPC_FUNC_IMPL(__imp__sub_825C9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9D38"))) PPC_WEAK_FUNC(sub_825C9D38);
PPC_FUNC_IMPL(__imp__sub_825C9D38) {
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
	// beq cr6,0x825c9d84
	if (cr6.eq) goto loc_825C9D84;
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
	// beq cr6,0x825c9d84
	if (cr6.eq) goto loc_825C9D84;
	// bl 0x8231a840
	sub_8231A840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c9db4
	if (!cr6.eq) goto loc_825C9DB4;
loc_825C9D84:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,22392(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22392);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c9dac
	if (!cr6.eq) goto loc_825C9DAC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-31979
	ctx.r9.s64 = -2095775744;
	// stw r11,22392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22392, r11.u32);
	// addi r3,r9,-31968
	ctx.r3.s64 = ctx.r9.s64 + -31968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_825C9DAC:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,22388
	ctx.r3.s64 = r11.s64 + 22388;
loc_825C9DB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825C9DC0"))) PPC_WEAK_FUNC(sub_825C9DC0);
PPC_FUNC_IMPL(__imp__sub_825C9DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9DC4"))) PPC_WEAK_FUNC(sub_825C9DC4);
PPC_FUNC_IMPL(__imp__sub_825C9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9DC8"))) PPC_WEAK_FUNC(sub_825C9DC8);
PPC_FUNC_IMPL(__imp__sub_825C9DC8) {
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
	// bl 0x825c8d50
	sub_825C8D50(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c9e00
	if (cr6.eq) goto loc_825C9E00;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C9E00:
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

__attribute__((alias("__imp__sub_825C9E14"))) PPC_WEAK_FUNC(sub_825C9E14);
PPC_FUNC_IMPL(__imp__sub_825C9E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9E18"))) PPC_WEAK_FUNC(sub_825C9E18);
PPC_FUNC_IMPL(__imp__sub_825C9E18) {
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
	// bl 0x825c9ca0
	sub_825C9CA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825c9e50
	if (cr6.eq) goto loc_825C9E50;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C9E50:
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

__attribute__((alias("__imp__sub_825C9E64"))) PPC_WEAK_FUNC(sub_825C9E64);
PPC_FUNC_IMPL(__imp__sub_825C9E64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9E68"))) PPC_WEAK_FUNC(sub_825C9E68);
PPC_FUNC_IMPL(__imp__sub_825C9E68) {
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
	// ble cr6,0x825c9ea8
	if (!cr6.gt) goto loc_825C9EA8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C9EA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r31,r11,r9
	r31.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x825c9f04
	if (cr0.eq) goto loc_825C9F04;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2288
	ctx.r9.s64 = ctx.r10.s64 + -2288;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8259fea0
	sub_8259FEA0(ctx, base);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r7,r8,-2268
	ctx.r7.s64 = ctx.r8.s64 + -2268;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
loc_825C9F04:
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

__attribute__((alias("__imp__sub_825C9F18"))) PPC_WEAK_FUNC(sub_825C9F18);
PPC_FUNC_IMPL(__imp__sub_825C9F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C9F1C"))) PPC_WEAK_FUNC(sub_825C9F1C);
PPC_FUNC_IMPL(__imp__sub_825C9F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9F20"))) PPC_WEAK_FUNC(sub_825C9F20);
PPC_FUNC_IMPL(__imp__sub_825C9F20) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825c98b0
	sub_825C98B0(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825c9f5c
	if (!cr6.gt) goto loc_825C9F5C;
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
loc_825C9F5C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x825c9fac
	if (cr6.eq) goto loc_825C9FAC;
loc_825C9F7C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825c9e68
	sub_825C9E68(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x825c9f7c
	if (!cr6.eq) goto loc_825C9F7C;
loc_825C9FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825C9FB0"))) PPC_WEAK_FUNC(sub_825C9FB0);
PPC_FUNC_IMPL(__imp__sub_825C9FB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C9FB4"))) PPC_WEAK_FUNC(sub_825C9FB4);
PPC_FUNC_IMPL(__imp__sub_825C9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C9FB8"))) PPC_WEAK_FUNC(sub_825C9FB8);
PPC_FUNC_IMPL(__imp__sub_825C9FB8) {
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
	// beq cr6,0x825ca09c
	if (cr6.eq) goto loc_825CA09C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825ca02c
	if (!cr6.eq) goto loc_825CA02C;
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
	// beq cr6,0x825ca09c
	if (cr6.eq) goto loc_825CA09C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82307020
	sub_82307020(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825ca09c
	goto loc_825CA09C;
loc_825CA02C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c9990
	sub_825C9990(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825ca058
	if (!cr6.gt) goto loc_825CA058;
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
loc_825CA058:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825c9f20
	sub_825C9F20(ctx, base);
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
	// bl 0x825c99f0
	sub_825C99F0(ctx, base);
loc_825CA09C:
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

__attribute__((alias("__imp__sub_825CA0B0"))) PPC_WEAK_FUNC(sub_825CA0B0);
PPC_FUNC_IMPL(__imp__sub_825CA0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA0B4"))) PPC_WEAK_FUNC(sub_825CA0B4);
PPC_FUNC_IMPL(__imp__sub_825CA0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA0B8"))) PPC_WEAK_FUNC(sub_825CA0B8);
PPC_FUNC_IMPL(__imp__sub_825CA0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA0BC"))) PPC_WEAK_FUNC(sub_825CA0BC);
PPC_FUNC_IMPL(__imp__sub_825CA0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA0C0"))) PPC_WEAK_FUNC(sub_825CA0C0);
PPC_FUNC_IMPL(__imp__sub_825CA0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA0C4"))) PPC_WEAK_FUNC(sub_825CA0C4);
PPC_FUNC_IMPL(__imp__sub_825CA0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA0C8"))) PPC_WEAK_FUNC(sub_825CA0C8);
PPC_FUNC_IMPL(__imp__sub_825CA0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_825CA0D4"))) PPC_WEAK_FUNC(sub_825CA0D4);
PPC_FUNC_IMPL(__imp__sub_825CA0D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA0D8"))) PPC_WEAK_FUNC(sub_825CA0D8);
PPC_FUNC_IMPL(__imp__sub_825CA0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_825CA0E4"))) PPC_WEAK_FUNC(sub_825CA0E4);
PPC_FUNC_IMPL(__imp__sub_825CA0E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA0E8"))) PPC_WEAK_FUNC(sub_825CA0E8);
PPC_FUNC_IMPL(__imp__sub_825CA0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_825CA0FC"))) PPC_WEAK_FUNC(sub_825CA0FC);
PPC_FUNC_IMPL(__imp__sub_825CA0FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA100"))) PPC_WEAK_FUNC(sub_825CA100);
PPC_FUNC_IMPL(__imp__sub_825CA100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
loc_825CA110:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x825ca130
	if (cr6.eq) goto loc_825CA130;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x825ca110
	if (cr6.lt) goto loc_825CA110;
	// blr 
	return;
loc_825CA130:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA138"))) PPC_WEAK_FUNC(sub_825CA138);
PPC_FUNC_IMPL(__imp__sub_825CA138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,132
	r11.s64 = r11.s64 + 132;
loc_825CA148:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beq cr6,0x825ca168
	if (cr6.eq) goto loc_825CA168;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x825ca148
	if (cr6.lt) goto loc_825CA148;
	// blr 
	return;
loc_825CA168:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_825CA16C"))) PPC_WEAK_FUNC(sub_825CA16C);
PPC_FUNC_IMPL(__imp__sub_825CA16C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA170"))) PPC_WEAK_FUNC(sub_825CA170);
PPC_FUNC_IMPL(__imp__sub_825CA170) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
}

__attribute__((alias("__imp__sub_825CA174"))) PPC_WEAK_FUNC(sub_825CA174);
PPC_FUNC_IMPL(__imp__sub_825CA174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA178"))) PPC_WEAK_FUNC(sub_825CA178);
PPC_FUNC_IMPL(__imp__sub_825CA178) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
}

__attribute__((alias("__imp__sub_825CA17C"))) PPC_WEAK_FUNC(sub_825CA17C);
PPC_FUNC_IMPL(__imp__sub_825CA17C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA180"))) PPC_WEAK_FUNC(sub_825CA180);
PPC_FUNC_IMPL(__imp__sub_825CA180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_825CA18C"))) PPC_WEAK_FUNC(sub_825CA18C);
PPC_FUNC_IMPL(__imp__sub_825CA18C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA190"))) PPC_WEAK_FUNC(sub_825CA190);
PPC_FUNC_IMPL(__imp__sub_825CA190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,128
	r11.s64 = ctx.r9.s64 + 128;
loc_825CA1A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x825ca1c0
	if (cr6.eq) goto loc_825CA1C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x825ca1a0
	if (cr6.lt) goto loc_825CA1A0;
	// blr 
	return;
loc_825CA1C0:
	// addi r11,r10,29
	r11.s64 = ctx.r10.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825CA1CC"))) PPC_WEAK_FUNC(sub_825CA1CC);
PPC_FUNC_IMPL(__imp__sub_825CA1CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA1D0"))) PPC_WEAK_FUNC(sub_825CA1D0);
PPC_FUNC_IMPL(__imp__sub_825CA1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,132
	r11.s64 = ctx.r9.s64 + 132;
loc_825CA1E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// beq cr6,0x825ca200
	if (cr6.eq) goto loc_825CA200;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x825ca1e0
	if (cr6.lt) goto loc_825CA1E0;
	// blr 
	return;
loc_825CA200:
	// addi r11,r10,29
	r11.s64 = ctx.r10.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA210"))) PPC_WEAK_FUNC(sub_825CA210);
PPC_FUNC_IMPL(__imp__sub_825CA210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA21C"))) PPC_WEAK_FUNC(sub_825CA21C);
PPC_FUNC_IMPL(__imp__sub_825CA21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA220"))) PPC_WEAK_FUNC(sub_825CA220);
PPC_FUNC_IMPL(__imp__sub_825CA220) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_825CA224"))) PPC_WEAK_FUNC(sub_825CA224);
PPC_FUNC_IMPL(__imp__sub_825CA224) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA228"))) PPC_WEAK_FUNC(sub_825CA228);
PPC_FUNC_IMPL(__imp__sub_825CA228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_825CA234"))) PPC_WEAK_FUNC(sub_825CA234);
PPC_FUNC_IMPL(__imp__sub_825CA234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA238"))) PPC_WEAK_FUNC(sub_825CA238);
PPC_FUNC_IMPL(__imp__sub_825CA238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
}

__attribute__((alias("__imp__sub_825CA244"))) PPC_WEAK_FUNC(sub_825CA244);
PPC_FUNC_IMPL(__imp__sub_825CA244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA248"))) PPC_WEAK_FUNC(sub_825CA248);
PPC_FUNC_IMPL(__imp__sub_825CA248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca268
	if (cr6.eq) goto loc_825CA268;
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
loc_825CA268:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca278
	if (cr6.eq) goto loc_825CA278;
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
loc_825CA278:
	// addi r31,r29,116
	r31.s64 = r29.s64 + 116;
	// li r30,3
	r30.s64 = 3;
loc_825CA280:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca290
	if (cr6.eq) goto loc_825CA290;
	// bl 0x826e66a0
	sub_826E66A0(ctx, base);
loc_825CA290:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825ca280
	if (!cr0.eq) goto loc_825CA280;
	// lwz r3,152(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// bl 0x825cf2d8
	sub_825CF2D8(ctx, base);
	// lwz r3,156(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 156);
	// bl 0x825ceb48
	sub_825CEB48(ctx, base);
	// lwz r3,160(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 160);
	// bl 0x825cdde8
	sub_825CDDE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825CA2B8"))) PPC_WEAK_FUNC(sub_825CA2B8);
PPC_FUNC_IMPL(__imp__sub_825CA2B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825CA2BC"))) PPC_WEAK_FUNC(sub_825CA2BC);
PPC_FUNC_IMPL(__imp__sub_825CA2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA2C0"))) PPC_WEAK_FUNC(sub_825CA2C0);
PPC_FUNC_IMPL(__imp__sub_825CA2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// bl 0x825cd3c0
	sub_825CD3C0(ctx, base);
	// lwz r3,156(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 156);
	// bl 0x825ceaa0
	sub_825CEAA0(ctx, base);
	// lwz r3,152(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// bl 0x825cf238
	sub_825CF238(ctx, base);
	// addi r31,r29,116
	r31.s64 = r29.s64 + 116;
	// li r30,3
	r30.s64 = 3;
loc_825CA2F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca300
	if (cr6.eq) goto loc_825CA300;
	// bl 0x826e6440
	sub_826E6440(ctx, base);
loc_825CA300:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825ca2f0
	if (!cr0.eq) goto loc_825CA2F0;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca31c
	if (cr6.eq) goto loc_825CA31C;
	// bl 0x826e6440
	sub_826E6440(ctx, base);
loc_825CA31C:
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca32c
	if (cr6.eq) goto loc_825CA32C;
	// bl 0x826e6440
	sub_826E6440(ctx, base);
loc_825CA32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825CA330"))) PPC_WEAK_FUNC(sub_825CA330);
PPC_FUNC_IMPL(__imp__sub_825CA330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825CA334"))) PPC_WEAK_FUNC(sub_825CA334);
PPC_FUNC_IMPL(__imp__sub_825CA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA338"))) PPC_WEAK_FUNC(sub_825CA338);
PPC_FUNC_IMPL(__imp__sub_825CA338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA344"))) PPC_WEAK_FUNC(sub_825CA344);
PPC_FUNC_IMPL(__imp__sub_825CA344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA348"))) PPC_WEAK_FUNC(sub_825CA348);
PPC_FUNC_IMPL(__imp__sub_825CA348) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
}

__attribute__((alias("__imp__sub_825CA34C"))) PPC_WEAK_FUNC(sub_825CA34C);
PPC_FUNC_IMPL(__imp__sub_825CA34C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825cd518
	sub_825CD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA350"))) PPC_WEAK_FUNC(sub_825CA350);
PPC_FUNC_IMPL(__imp__sub_825CA350) {
	PPC_FUNC_PROLOGUE();
	// stb r4,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA358"))) PPC_WEAK_FUNC(sub_825CA358);
PPC_FUNC_IMPL(__imp__sub_825CA358) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
}

__attribute__((alias("__imp__sub_825CA35C"))) PPC_WEAK_FUNC(sub_825CA35C);
PPC_FUNC_IMPL(__imp__sub_825CA35C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA360"))) PPC_WEAK_FUNC(sub_825CA360);
PPC_FUNC_IMPL(__imp__sub_825CA360) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA368"))) PPC_WEAK_FUNC(sub_825CA368);
PPC_FUNC_IMPL(__imp__sub_825CA368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825CA378"))) PPC_WEAK_FUNC(sub_825CA378);
PPC_FUNC_IMPL(__imp__sub_825CA378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825CA37C"))) PPC_WEAK_FUNC(sub_825CA37C);
PPC_FUNC_IMPL(__imp__sub_825CA37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA380"))) PPC_WEAK_FUNC(sub_825CA380);
PPC_FUNC_IMPL(__imp__sub_825CA380) {
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
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r31,-1
	r31.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca3ec
	if (cr6.eq) goto loc_825CA3EC;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,23608
	ctx.r4.s64 = ctx.r8.s64 + 23608;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca3ec
	if (cr6.eq) goto loc_825CA3EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825CA3EC:
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

__attribute__((alias("__imp__sub_825CA400"))) PPC_WEAK_FUNC(sub_825CA400);
PPC_FUNC_IMPL(__imp__sub_825CA400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA404"))) PPC_WEAK_FUNC(sub_825CA404);
PPC_FUNC_IMPL(__imp__sub_825CA404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA408"))) PPC_WEAK_FUNC(sub_825CA408);
PPC_FUNC_IMPL(__imp__sub_825CA408) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca4d4
	if (cr6.eq) goto loc_825CA4D4;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8242ded0
	sub_8242DED0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r30,r11,19796
	r30.s64 = r11.s64 + 19796;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca490
	if (cr6.eq) goto loc_825CA490;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca490
	if (cr6.eq) goto loc_825CA490;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825CA490:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca4d4
	if (cr6.eq) goto loc_825CA4D4;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca4d4
	if (cr6.eq) goto loc_825CA4D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825CA4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825CA4D8"))) PPC_WEAK_FUNC(sub_825CA4D8);
PPC_FUNC_IMPL(__imp__sub_825CA4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825CA4DC"))) PPC_WEAK_FUNC(sub_825CA4DC);
PPC_FUNC_IMPL(__imp__sub_825CA4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA4E0"))) PPC_WEAK_FUNC(sub_825CA4E0);
PPC_FUNC_IMPL(__imp__sub_825CA4E0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// lwz r3,160(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
}

__attribute__((alias("__imp__sub_825CA4E8"))) PPC_WEAK_FUNC(sub_825CA4E8);
PPC_FUNC_IMPL(__imp__sub_825CA4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825cd518
	sub_825CD518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825CA4EC"))) PPC_WEAK_FUNC(sub_825CA4EC);
PPC_FUNC_IMPL(__imp__sub_825CA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA4F0"))) PPC_WEAK_FUNC(sub_825CA4F0);
PPC_FUNC_IMPL(__imp__sub_825CA4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,164(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
}

__attribute__((alias("__imp__sub_825CA4F8"))) PPC_WEAK_FUNC(sub_825CA4F8);
PPC_FUNC_IMPL(__imp__sub_825CA4F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA4FC"))) PPC_WEAK_FUNC(sub_825CA4FC);
PPC_FUNC_IMPL(__imp__sub_825CA4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA500"))) PPC_WEAK_FUNC(sub_825CA500);
PPC_FUNC_IMPL(__imp__sub_825CA500) {
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
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r4,r7,19796
	ctx.r4.s64 = ctx.r7.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca588
	if (cr6.eq) goto loc_825CA588;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r29,16
	ctx.r9.s64 = r29.s64 + 16;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r3,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + r30.u32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,48(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// stw r3,132(r5)
	PPC_STORE_U32(ctx.r5.u32 + 132, ctx.r3.u32);
loc_825CA588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825CA58C"))) PPC_WEAK_FUNC(sub_825CA58C);
PPC_FUNC_IMPL(__imp__sub_825CA58C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825CA590"))) PPC_WEAK_FUNC(sub_825CA590);
PPC_FUNC_IMPL(__imp__sub_825CA590) {
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
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,19796
	ctx.r4.s64 = ctx.r9.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca5e4
	if (cr6.eq) goto loc_825CA5E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_825CA5E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CA5F4"))) PPC_WEAK_FUNC(sub_825CA5F4);
PPC_FUNC_IMPL(__imp__sub_825CA5F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA5F8"))) PPC_WEAK_FUNC(sub_825CA5F8);
PPC_FUNC_IMPL(__imp__sub_825CA5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// stw r10,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA610"))) PPC_WEAK_FUNC(sub_825CA610);
PPC_FUNC_IMPL(__imp__sub_825CA610) {
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
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca674
	if (cr6.eq) goto loc_825CA674;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19796
	ctx.r4.s64 = ctx.r8.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca674
	if (cr6.eq) goto loc_825CA674;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825CA674:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CA684"))) PPC_WEAK_FUNC(sub_825CA684);
PPC_FUNC_IMPL(__imp__sub_825CA684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA688"))) PPC_WEAK_FUNC(sub_825CA688);
PPC_FUNC_IMPL(__imp__sub_825CA688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,164(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA6AC"))) PPC_WEAK_FUNC(sub_825CA6AC);
PPC_FUNC_IMPL(__imp__sub_825CA6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA6B0"))) PPC_WEAK_FUNC(sub_825CA6B0);
PPC_FUNC_IMPL(__imp__sub_825CA6B0) {
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
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca714
	if (cr6.eq) goto loc_825CA714;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19796
	ctx.r4.s64 = ctx.r8.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca714
	if (cr6.eq) goto loc_825CA714;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825CA714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CA724"))) PPC_WEAK_FUNC(sub_825CA724);
PPC_FUNC_IMPL(__imp__sub_825CA724) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA728"))) PPC_WEAK_FUNC(sub_825CA728);
PPC_FUNC_IMPL(__imp__sub_825CA728) {
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
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca79c
	if (cr6.eq) goto loc_825CA79C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19796
	ctx.r4.s64 = ctx.r8.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca79c
	if (cr6.eq) goto loc_825CA79C;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = r11.u64 + r31.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
	// stw r10,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
loc_825CA79C:
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

__attribute__((alias("__imp__sub_825CA7B0"))) PPC_WEAK_FUNC(sub_825CA7B0);
PPC_FUNC_IMPL(__imp__sub_825CA7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA7B4"))) PPC_WEAK_FUNC(sub_825CA7B4);
PPC_FUNC_IMPL(__imp__sub_825CA7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA7B8"))) PPC_WEAK_FUNC(sub_825CA7B8);
PPC_FUNC_IMPL(__imp__sub_825CA7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA7D0"))) PPC_WEAK_FUNC(sub_825CA7D0);
PPC_FUNC_IMPL(__imp__sub_825CA7D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA7F0"))) PPC_WEAK_FUNC(sub_825CA7F0);
PPC_FUNC_IMPL(__imp__sub_825CA7F0) {
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
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca854
	if (cr6.eq) goto loc_825CA854;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r4,r8,19796
	ctx.r4.s64 = ctx.r8.s64 + 19796;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca854
	if (cr6.eq) goto loc_825CA854;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825CA854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825CA864"))) PPC_WEAK_FUNC(sub_825CA864);
PPC_FUNC_IMPL(__imp__sub_825CA864) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825CA868"))) PPC_WEAK_FUNC(sub_825CA868);
PPC_FUNC_IMPL(__imp__sub_825CA868) {
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
	// addi r11,r4,29
	r11.s64 = ctx.r4.s64 + 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stwx r5,r29,r3
	PPC_STORE_U32(r29.u32 + ctx.r3.u32, ctx.r5.u32);
	// bl 0x825ca610
	sub_825CA610(ctx, base);
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca8a4
	if (cr6.eq) goto loc_825CA8A4;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r9.u32);
loc_825CA8A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca500
	sub_825CA500(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825ca8d4
	if (!cr6.eq) goto loc_825CA8D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca590
	sub_825CA590(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca8d4
	if (cr6.eq) goto loc_825CA8D4;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r10,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r10.u32);
loc_825CA8D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca6b0
	sub_825CA6B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825CA8E4"))) PPC_WEAK_FUNC(sub_825CA8E4);
PPC_FUNC_IMPL(__imp__sub_825CA8E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825CA8E8"))) PPC_WEAK_FUNC(sub_825CA8E8);
PPC_FUNC_IMPL(__imp__sub_825CA8E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825ca7f0
	sub_825CA7F0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825ca924
	if (!cr6.eq) goto loc_825CA924;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x825ca924
	if (cr6.eq) goto loc_825CA924;
	// stw r29,220(r11)
	PPC_STORE_U32(r11.u32 + 220, r29.u32);
loc_825CA924:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ca728
	sub_825CA728(ctx, base);
	// addi r11,r30,29
	r11.s64 = r30.s64 + 29;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825ca948
	if (cr6.eq) goto loc_825CA948;
	// stw r29,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, r29.u32);
loc_825CA948:
	// stwx r29,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825CA950"))) PPC_WEAK_FUNC(sub_825CA950);
PPC_FUNC_IMPL(__imp__sub_825CA950) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825CA954"))) PPC_WEAK_FUNC(sub_825CA954);
PPC_FUNC_IMPL(__imp__sub_825CA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825CA958"))) PPC_WEAK_FUNC(sub_825CA958);
PPC_FUNC_IMPL(__imp__sub_825CA958) {
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
	// li r26,0
	r26.s64 = 0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// li r28,-1
	r28.s64 = -1;
	// addi r27,r11,19796
	r27.s64 = r11.s64 + 19796;
loc_825CA97C:
	// addi r11,r30,29
	r11.s64 = r30.s64 + 29;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca9c8
	if (cr6.eq) goto loc_825CA9C8;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825ca9c8
	if (cr6.eq) goto loc_825CA9C8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825CA9C8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x825ca9e4
	if (!cr6.eq) goto loc_825CA9E4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825ca9e4
	if (cr6.eq) goto loc_825CA9E4;
	// stw r26,220(r11)
	PPC_STORE_U32(r11.u32 + 220, r26.u32);
loc_825CA9E4:
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825caa2c
	if (cr6.eq) goto loc_825CAA2C;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// addi r3,r11,100
	ctx.r3.s64 = r11.s64 + 100;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825caa2c
	if (cr6.eq) goto loc_825CAA2C;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r31
	ctx.r8.u64 = r11.u64 + r31.u64;
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, r28.u32);
	// stw r28,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, r28.u32);
loc_825CAA2C:
	// lwzx r11,r29,r31
	r11.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825caa3c
	if (cr6.eq) goto loc_825CAA3C;
	// stw r26,220(r11)
	PPC_STORE_U32(r11.u32 + 220, r26.u32);
loc_825CAA3C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r26,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, r26.u32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// blt cr6,0x825ca97c
	if (cr6.lt) goto loc_825CA97C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825CAA50"))) PPC_WEAK_FUNC(sub_825CAA50);
PPC_FUNC_IMPL(__imp__sub_825CAA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825CAA54"))) PPC_WEAK_FUNC(sub_825CAA54);
PPC_FUNC_IMPL(__imp__sub_825CAA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

