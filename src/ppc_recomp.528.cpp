#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F41C94"))) PPC_WEAK_FUNC(sub_82F41C94);
PPC_FUNC_IMPL(__imp__sub_82F41C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41C98"))) PPC_WEAK_FUNC(sub_82F41C98);
PPC_FUNC_IMPL(__imp__sub_82F41C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18544
	ctx.r3.s64 = r11.s64 + -18544;
}

__attribute__((alias("__imp__sub_82F41CA0"))) PPC_WEAK_FUNC(sub_82F41CA0);
PPC_FUNC_IMPL(__imp__sub_82F41CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41CA4"))) PPC_WEAK_FUNC(sub_82F41CA4);
PPC_FUNC_IMPL(__imp__sub_82F41CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41CA8"))) PPC_WEAK_FUNC(sub_82F41CA8);
PPC_FUNC_IMPL(__imp__sub_82F41CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18536
	ctx.r3.s64 = r11.s64 + -18536;
}

__attribute__((alias("__imp__sub_82F41CB0"))) PPC_WEAK_FUNC(sub_82F41CB0);
PPC_FUNC_IMPL(__imp__sub_82F41CB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41CB4"))) PPC_WEAK_FUNC(sub_82F41CB4);
PPC_FUNC_IMPL(__imp__sub_82F41CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41CB8"))) PPC_WEAK_FUNC(sub_82F41CB8);
PPC_FUNC_IMPL(__imp__sub_82F41CB8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19700, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41CE0"))) PPC_WEAK_FUNC(sub_82F41CE0);
PPC_FUNC_IMPL(__imp__sub_82F41CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41CE4"))) PPC_WEAK_FUNC(sub_82F41CE4);
PPC_FUNC_IMPL(__imp__sub_82F41CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41CE8"))) PPC_WEAK_FUNC(sub_82F41CE8);
PPC_FUNC_IMPL(__imp__sub_82F41CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18528
	ctx.r3.s64 = r11.s64 + -18528;
}

__attribute__((alias("__imp__sub_82F41CF0"))) PPC_WEAK_FUNC(sub_82F41CF0);
PPC_FUNC_IMPL(__imp__sub_82F41CF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41CF4"))) PPC_WEAK_FUNC(sub_82F41CF4);
PPC_FUNC_IMPL(__imp__sub_82F41CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41CF8"))) PPC_WEAK_FUNC(sub_82F41CF8);
PPC_FUNC_IMPL(__imp__sub_82F41CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18520
	ctx.r3.s64 = r11.s64 + -18520;
}

__attribute__((alias("__imp__sub_82F41D00"))) PPC_WEAK_FUNC(sub_82F41D00);
PPC_FUNC_IMPL(__imp__sub_82F41D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41D04"))) PPC_WEAK_FUNC(sub_82F41D04);
PPC_FUNC_IMPL(__imp__sub_82F41D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41D08"))) PPC_WEAK_FUNC(sub_82F41D08);
PPC_FUNC_IMPL(__imp__sub_82F41D08) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19680, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41D30"))) PPC_WEAK_FUNC(sub_82F41D30);
PPC_FUNC_IMPL(__imp__sub_82F41D30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41D34"))) PPC_WEAK_FUNC(sub_82F41D34);
PPC_FUNC_IMPL(__imp__sub_82F41D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41D38"))) PPC_WEAK_FUNC(sub_82F41D38);
PPC_FUNC_IMPL(__imp__sub_82F41D38) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41D64"))) PPC_WEAK_FUNC(sub_82F41D64);
PPC_FUNC_IMPL(__imp__sub_82F41D64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41D68"))) PPC_WEAK_FUNC(sub_82F41D68);
PPC_FUNC_IMPL(__imp__sub_82F41D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18512
	ctx.r3.s64 = r11.s64 + -18512;
}

__attribute__((alias("__imp__sub_82F41D70"))) PPC_WEAK_FUNC(sub_82F41D70);
PPC_FUNC_IMPL(__imp__sub_82F41D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41D74"))) PPC_WEAK_FUNC(sub_82F41D74);
PPC_FUNC_IMPL(__imp__sub_82F41D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41D78"))) PPC_WEAK_FUNC(sub_82F41D78);
PPC_FUNC_IMPL(__imp__sub_82F41D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18504
	ctx.r3.s64 = r11.s64 + -18504;
}

__attribute__((alias("__imp__sub_82F41D80"))) PPC_WEAK_FUNC(sub_82F41D80);
PPC_FUNC_IMPL(__imp__sub_82F41D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41D84"))) PPC_WEAK_FUNC(sub_82F41D84);
PPC_FUNC_IMPL(__imp__sub_82F41D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41D88"))) PPC_WEAK_FUNC(sub_82F41D88);
PPC_FUNC_IMPL(__imp__sub_82F41D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18496
	ctx.r3.s64 = r11.s64 + -18496;
}

__attribute__((alias("__imp__sub_82F41D90"))) PPC_WEAK_FUNC(sub_82F41D90);
PPC_FUNC_IMPL(__imp__sub_82F41D90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41D94"))) PPC_WEAK_FUNC(sub_82F41D94);
PPC_FUNC_IMPL(__imp__sub_82F41D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41D98"))) PPC_WEAK_FUNC(sub_82F41D98);
PPC_FUNC_IMPL(__imp__sub_82F41D98) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19656, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41DC4"))) PPC_WEAK_FUNC(sub_82F41DC4);
PPC_FUNC_IMPL(__imp__sub_82F41DC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41DC8"))) PPC_WEAK_FUNC(sub_82F41DC8);
PPC_FUNC_IMPL(__imp__sub_82F41DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18488
	ctx.r3.s64 = r11.s64 + -18488;
}

__attribute__((alias("__imp__sub_82F41DD0"))) PPC_WEAK_FUNC(sub_82F41DD0);
PPC_FUNC_IMPL(__imp__sub_82F41DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41DD4"))) PPC_WEAK_FUNC(sub_82F41DD4);
PPC_FUNC_IMPL(__imp__sub_82F41DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41DD8"))) PPC_WEAK_FUNC(sub_82F41DD8);
PPC_FUNC_IMPL(__imp__sub_82F41DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18480
	ctx.r3.s64 = r11.s64 + -18480;
}

__attribute__((alias("__imp__sub_82F41DE0"))) PPC_WEAK_FUNC(sub_82F41DE0);
PPC_FUNC_IMPL(__imp__sub_82F41DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41DE4"))) PPC_WEAK_FUNC(sub_82F41DE4);
PPC_FUNC_IMPL(__imp__sub_82F41DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41DE8"))) PPC_WEAK_FUNC(sub_82F41DE8);
PPC_FUNC_IMPL(__imp__sub_82F41DE8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19636, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41E10"))) PPC_WEAK_FUNC(sub_82F41E10);
PPC_FUNC_IMPL(__imp__sub_82F41E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41E14"))) PPC_WEAK_FUNC(sub_82F41E14);
PPC_FUNC_IMPL(__imp__sub_82F41E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E18"))) PPC_WEAK_FUNC(sub_82F41E18);
PPC_FUNC_IMPL(__imp__sub_82F41E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18472
	ctx.r3.s64 = r11.s64 + -18472;
}

__attribute__((alias("__imp__sub_82F41E20"))) PPC_WEAK_FUNC(sub_82F41E20);
PPC_FUNC_IMPL(__imp__sub_82F41E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41E24"))) PPC_WEAK_FUNC(sub_82F41E24);
PPC_FUNC_IMPL(__imp__sub_82F41E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E28"))) PPC_WEAK_FUNC(sub_82F41E28);
PPC_FUNC_IMPL(__imp__sub_82F41E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18464
	ctx.r3.s64 = r11.s64 + -18464;
}

__attribute__((alias("__imp__sub_82F41E30"))) PPC_WEAK_FUNC(sub_82F41E30);
PPC_FUNC_IMPL(__imp__sub_82F41E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41E34"))) PPC_WEAK_FUNC(sub_82F41E34);
PPC_FUNC_IMPL(__imp__sub_82F41E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E38"))) PPC_WEAK_FUNC(sub_82F41E38);
PPC_FUNC_IMPL(__imp__sub_82F41E38) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19616, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41E60"))) PPC_WEAK_FUNC(sub_82F41E60);
PPC_FUNC_IMPL(__imp__sub_82F41E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41E64"))) PPC_WEAK_FUNC(sub_82F41E64);
PPC_FUNC_IMPL(__imp__sub_82F41E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E68"))) PPC_WEAK_FUNC(sub_82F41E68);
PPC_FUNC_IMPL(__imp__sub_82F41E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18456
	ctx.r3.s64 = r11.s64 + -18456;
}

__attribute__((alias("__imp__sub_82F41E70"))) PPC_WEAK_FUNC(sub_82F41E70);
PPC_FUNC_IMPL(__imp__sub_82F41E70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41E74"))) PPC_WEAK_FUNC(sub_82F41E74);
PPC_FUNC_IMPL(__imp__sub_82F41E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E78"))) PPC_WEAK_FUNC(sub_82F41E78);
PPC_FUNC_IMPL(__imp__sub_82F41E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18448
	ctx.r3.s64 = r11.s64 + -18448;
}

__attribute__((alias("__imp__sub_82F41E80"))) PPC_WEAK_FUNC(sub_82F41E80);
PPC_FUNC_IMPL(__imp__sub_82F41E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41E84"))) PPC_WEAK_FUNC(sub_82F41E84);
PPC_FUNC_IMPL(__imp__sub_82F41E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E88"))) PPC_WEAK_FUNC(sub_82F41E88);
PPC_FUNC_IMPL(__imp__sub_82F41E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18440
	ctx.r3.s64 = r11.s64 + -18440;
}

__attribute__((alias("__imp__sub_82F41E90"))) PPC_WEAK_FUNC(sub_82F41E90);
PPC_FUNC_IMPL(__imp__sub_82F41E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41E94"))) PPC_WEAK_FUNC(sub_82F41E94);
PPC_FUNC_IMPL(__imp__sub_82F41E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41E98"))) PPC_WEAK_FUNC(sub_82F41E98);
PPC_FUNC_IMPL(__imp__sub_82F41E98) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41EC4"))) PPC_WEAK_FUNC(sub_82F41EC4);
PPC_FUNC_IMPL(__imp__sub_82F41EC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41EC8"))) PPC_WEAK_FUNC(sub_82F41EC8);
PPC_FUNC_IMPL(__imp__sub_82F41EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18432
	ctx.r3.s64 = r11.s64 + -18432;
}

__attribute__((alias("__imp__sub_82F41ED0"))) PPC_WEAK_FUNC(sub_82F41ED0);
PPC_FUNC_IMPL(__imp__sub_82F41ED0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41ED4"))) PPC_WEAK_FUNC(sub_82F41ED4);
PPC_FUNC_IMPL(__imp__sub_82F41ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41ED8"))) PPC_WEAK_FUNC(sub_82F41ED8);
PPC_FUNC_IMPL(__imp__sub_82F41ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18424
	ctx.r3.s64 = r11.s64 + -18424;
}

__attribute__((alias("__imp__sub_82F41EE0"))) PPC_WEAK_FUNC(sub_82F41EE0);
PPC_FUNC_IMPL(__imp__sub_82F41EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41EE4"))) PPC_WEAK_FUNC(sub_82F41EE4);
PPC_FUNC_IMPL(__imp__sub_82F41EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41EE8"))) PPC_WEAK_FUNC(sub_82F41EE8);
PPC_FUNC_IMPL(__imp__sub_82F41EE8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,32700
	ctx.r3.s64 = r11.s64 + 32700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41F14"))) PPC_WEAK_FUNC(sub_82F41F14);
PPC_FUNC_IMPL(__imp__sub_82F41F14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41F18"))) PPC_WEAK_FUNC(sub_82F41F18);
PPC_FUNC_IMPL(__imp__sub_82F41F18) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19572, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F41F40"))) PPC_WEAK_FUNC(sub_82F41F40);
PPC_FUNC_IMPL(__imp__sub_82F41F40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41F44"))) PPC_WEAK_FUNC(sub_82F41F44);
PPC_FUNC_IMPL(__imp__sub_82F41F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41F48"))) PPC_WEAK_FUNC(sub_82F41F48);
PPC_FUNC_IMPL(__imp__sub_82F41F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18416
	ctx.r3.s64 = r11.s64 + -18416;
}

__attribute__((alias("__imp__sub_82F41F50"))) PPC_WEAK_FUNC(sub_82F41F50);
PPC_FUNC_IMPL(__imp__sub_82F41F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41F54"))) PPC_WEAK_FUNC(sub_82F41F54);
PPC_FUNC_IMPL(__imp__sub_82F41F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41F58"))) PPC_WEAK_FUNC(sub_82F41F58);
PPC_FUNC_IMPL(__imp__sub_82F41F58) {
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
	// addi r3,r11,-5008
	ctx.r3.s64 = r11.s64 + -5008;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r31,r10,-19552
	r31.s64 = ctx.r10.s64 + -19552;
	// addi r3,r9,-5016
	ctx.r3.s64 = ctx.r9.s64 + -5016;
	// stw r11,-19552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19552, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r3,r8,-5024
	ctx.r3.s64 = ctx.r8.s64 + -5024;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r7,32024
	ctx.r3.s64 = ctx.r7.s64 + 32024;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F41FC4"))) PPC_WEAK_FUNC(sub_82F41FC4);
PPC_FUNC_IMPL(__imp__sub_82F41FC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F41FC8"))) PPC_WEAK_FUNC(sub_82F41FC8);
PPC_FUNC_IMPL(__imp__sub_82F41FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18408
	ctx.r3.s64 = r11.s64 + -18408;
}

__attribute__((alias("__imp__sub_82F41FD0"))) PPC_WEAK_FUNC(sub_82F41FD0);
PPC_FUNC_IMPL(__imp__sub_82F41FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F41FD4"))) PPC_WEAK_FUNC(sub_82F41FD4);
PPC_FUNC_IMPL(__imp__sub_82F41FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F41FD8"))) PPC_WEAK_FUNC(sub_82F41FD8);
PPC_FUNC_IMPL(__imp__sub_82F41FD8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19520, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42000"))) PPC_WEAK_FUNC(sub_82F42000);
PPC_FUNC_IMPL(__imp__sub_82F42000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42004"))) PPC_WEAK_FUNC(sub_82F42004);
PPC_FUNC_IMPL(__imp__sub_82F42004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42008"))) PPC_WEAK_FUNC(sub_82F42008);
PPC_FUNC_IMPL(__imp__sub_82F42008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21264
	ctx.r9.s64 = ctx.r10.s64 + -21264;
	// li r10,69
	ctx.r10.s64 = 69;
loc_82F42018:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f42018
	if (!cr6.eq) goto loc_82F42018;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19516, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42040"))) PPC_WEAK_FUNC(sub_82F42040);
PPC_FUNC_IMPL(__imp__sub_82F42040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21272
	ctx.r9.s64 = ctx.r10.s64 + -21272;
	// li r10,65
	ctx.r10.s64 = 65;
loc_82F42050:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f42050
	if (!cr6.eq) goto loc_82F42050;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19512, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42078"))) PPC_WEAK_FUNC(sub_82F42078);
PPC_FUNC_IMPL(__imp__sub_82F42078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-21280
	ctx.r9.s64 = ctx.r10.s64 + -21280;
	// li r10,65
	ctx.r10.s64 = 65;
loc_82F42088:
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82f42088
	if (!cr6.eq) goto loc_82F42088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19508, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F420B0"))) PPC_WEAK_FUNC(sub_82F420B0);
PPC_FUNC_IMPL(__imp__sub_82F420B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18400
	ctx.r3.s64 = r11.s64 + -18400;
}

__attribute__((alias("__imp__sub_82F420B8"))) PPC_WEAK_FUNC(sub_82F420B8);
PPC_FUNC_IMPL(__imp__sub_82F420B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F420BC"))) PPC_WEAK_FUNC(sub_82F420BC);
PPC_FUNC_IMPL(__imp__sub_82F420BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F420C0"))) PPC_WEAK_FUNC(sub_82F420C0);
PPC_FUNC_IMPL(__imp__sub_82F420C0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19484, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F420E8"))) PPC_WEAK_FUNC(sub_82F420E8);
PPC_FUNC_IMPL(__imp__sub_82F420E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F420EC"))) PPC_WEAK_FUNC(sub_82F420EC);
PPC_FUNC_IMPL(__imp__sub_82F420EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F420F0"))) PPC_WEAK_FUNC(sub_82F420F0);
PPC_FUNC_IMPL(__imp__sub_82F420F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18392
	ctx.r3.s64 = r11.s64 + -18392;
}

__attribute__((alias("__imp__sub_82F420F8"))) PPC_WEAK_FUNC(sub_82F420F8);
PPC_FUNC_IMPL(__imp__sub_82F420F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F420FC"))) PPC_WEAK_FUNC(sub_82F420FC);
PPC_FUNC_IMPL(__imp__sub_82F420FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42100"))) PPC_WEAK_FUNC(sub_82F42100);
PPC_FUNC_IMPL(__imp__sub_82F42100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18384
	ctx.r3.s64 = r11.s64 + -18384;
}

__attribute__((alias("__imp__sub_82F42108"))) PPC_WEAK_FUNC(sub_82F42108);
PPC_FUNC_IMPL(__imp__sub_82F42108) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4210C"))) PPC_WEAK_FUNC(sub_82F4210C);
PPC_FUNC_IMPL(__imp__sub_82F4210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42110"))) PPC_WEAK_FUNC(sub_82F42110);
PPC_FUNC_IMPL(__imp__sub_82F42110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18376
	ctx.r3.s64 = r11.s64 + -18376;
}

__attribute__((alias("__imp__sub_82F42118"))) PPC_WEAK_FUNC(sub_82F42118);
PPC_FUNC_IMPL(__imp__sub_82F42118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4211C"))) PPC_WEAK_FUNC(sub_82F4211C);
PPC_FUNC_IMPL(__imp__sub_82F4211C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42120"))) PPC_WEAK_FUNC(sub_82F42120);
PPC_FUNC_IMPL(__imp__sub_82F42120) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19464, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42148"))) PPC_WEAK_FUNC(sub_82F42148);
PPC_FUNC_IMPL(__imp__sub_82F42148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4214C"))) PPC_WEAK_FUNC(sub_82F4214C);
PPC_FUNC_IMPL(__imp__sub_82F4214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42150"))) PPC_WEAK_FUNC(sub_82F42150);
PPC_FUNC_IMPL(__imp__sub_82F42150) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,13500
	ctx.r3.s64 = ctx.r10.s64 + 13500;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19432(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42188"))) PPC_WEAK_FUNC(sub_82F42188);
PPC_FUNC_IMPL(__imp__sub_82F42188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4218C"))) PPC_WEAK_FUNC(sub_82F4218C);
PPC_FUNC_IMPL(__imp__sub_82F4218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42190"))) PPC_WEAK_FUNC(sub_82F42190);
PPC_FUNC_IMPL(__imp__sub_82F42190) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14524
	ctx.r3.s64 = ctx.r10.s64 + 14524;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19436(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F421C8"))) PPC_WEAK_FUNC(sub_82F421C8);
PPC_FUNC_IMPL(__imp__sub_82F421C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F421CC"))) PPC_WEAK_FUNC(sub_82F421CC);
PPC_FUNC_IMPL(__imp__sub_82F421CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F421D0"))) PPC_WEAK_FUNC(sub_82F421D0);
PPC_FUNC_IMPL(__imp__sub_82F421D0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14616
	ctx.r3.s64 = ctx.r10.s64 + 14616;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19440(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42208"))) PPC_WEAK_FUNC(sub_82F42208);
PPC_FUNC_IMPL(__imp__sub_82F42208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4220C"))) PPC_WEAK_FUNC(sub_82F4220C);
PPC_FUNC_IMPL(__imp__sub_82F4220C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42210"))) PPC_WEAK_FUNC(sub_82F42210);
PPC_FUNC_IMPL(__imp__sub_82F42210) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14928
	ctx.r3.s64 = ctx.r10.s64 + 14928;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19444(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42248"))) PPC_WEAK_FUNC(sub_82F42248);
PPC_FUNC_IMPL(__imp__sub_82F42248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4224C"))) PPC_WEAK_FUNC(sub_82F4224C);
PPC_FUNC_IMPL(__imp__sub_82F4224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42250"))) PPC_WEAK_FUNC(sub_82F42250);
PPC_FUNC_IMPL(__imp__sub_82F42250) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14572
	ctx.r3.s64 = ctx.r10.s64 + 14572;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19448(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42288"))) PPC_WEAK_FUNC(sub_82F42288);
PPC_FUNC_IMPL(__imp__sub_82F42288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4228C"))) PPC_WEAK_FUNC(sub_82F4228C);
PPC_FUNC_IMPL(__imp__sub_82F4228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42290"))) PPC_WEAK_FUNC(sub_82F42290);
PPC_FUNC_IMPL(__imp__sub_82F42290) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,13876
	ctx.r3.s64 = ctx.r10.s64 + 13876;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19452(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19452, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F422C8"))) PPC_WEAK_FUNC(sub_82F422C8);
PPC_FUNC_IMPL(__imp__sub_82F422C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F422CC"))) PPC_WEAK_FUNC(sub_82F422CC);
PPC_FUNC_IMPL(__imp__sub_82F422CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F422D0"))) PPC_WEAK_FUNC(sub_82F422D0);
PPC_FUNC_IMPL(__imp__sub_82F422D0) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14976
	ctx.r3.s64 = ctx.r10.s64 + 14976;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19456(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19456, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42308"))) PPC_WEAK_FUNC(sub_82F42308);
PPC_FUNC_IMPL(__imp__sub_82F42308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4230C"))) PPC_WEAK_FUNC(sub_82F4230C);
PPC_FUNC_IMPL(__imp__sub_82F4230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42310"))) PPC_WEAK_FUNC(sub_82F42310);
PPC_FUNC_IMPL(__imp__sub_82F42310) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,14208
	ctx.r3.s64 = ctx.r10.s64 + 14208;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-19460(r9)
	PPC_STORE_U32(ctx.r9.u32 + -19460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42348"))) PPC_WEAK_FUNC(sub_82F42348);
PPC_FUNC_IMPL(__imp__sub_82F42348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4234C"))) PPC_WEAK_FUNC(sub_82F4234C);
PPC_FUNC_IMPL(__imp__sub_82F4234C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42350"))) PPC_WEAK_FUNC(sub_82F42350);
PPC_FUNC_IMPL(__imp__sub_82F42350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18368
	ctx.r3.s64 = r11.s64 + -18368;
}

__attribute__((alias("__imp__sub_82F42358"))) PPC_WEAK_FUNC(sub_82F42358);
PPC_FUNC_IMPL(__imp__sub_82F42358) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4235C"))) PPC_WEAK_FUNC(sub_82F4235C);
PPC_FUNC_IMPL(__imp__sub_82F4235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42360"))) PPC_WEAK_FUNC(sub_82F42360);
PPC_FUNC_IMPL(__imp__sub_82F42360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18360
	ctx.r3.s64 = r11.s64 + -18360;
}

__attribute__((alias("__imp__sub_82F42368"))) PPC_WEAK_FUNC(sub_82F42368);
PPC_FUNC_IMPL(__imp__sub_82F42368) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4236C"))) PPC_WEAK_FUNC(sub_82F4236C);
PPC_FUNC_IMPL(__imp__sub_82F4236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42370"))) PPC_WEAK_FUNC(sub_82F42370);
PPC_FUNC_IMPL(__imp__sub_82F42370) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9448
	ctx.r3.s64 = r11.s64 + 9448;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4239C"))) PPC_WEAK_FUNC(sub_82F4239C);
PPC_FUNC_IMPL(__imp__sub_82F4239C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F423A0"))) PPC_WEAK_FUNC(sub_82F423A0);
PPC_FUNC_IMPL(__imp__sub_82F423A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-19404
	ctx.r3.s64 = ctx.r7.s64 + -19404;
	// lfs f13,9456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9456);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f1,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d10a0
	sub_822D10A0(ctx, base);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// addi r3,r6,-18352
	ctx.r3.s64 = ctx.r6.s64 + -18352;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42418"))) PPC_WEAK_FUNC(sub_82F42418);
PPC_FUNC_IMPL(__imp__sub_82F42418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4241C"))) PPC_WEAK_FUNC(sub_82F4241C);
PPC_FUNC_IMPL(__imp__sub_82F4241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42420"))) PPC_WEAK_FUNC(sub_82F42420);
PPC_FUNC_IMPL(__imp__sub_82F42420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18344
	ctx.r3.s64 = r11.s64 + -18344;
}

__attribute__((alias("__imp__sub_82F42428"))) PPC_WEAK_FUNC(sub_82F42428);
PPC_FUNC_IMPL(__imp__sub_82F42428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4242C"))) PPC_WEAK_FUNC(sub_82F4242C);
PPC_FUNC_IMPL(__imp__sub_82F4242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42430"))) PPC_WEAK_FUNC(sub_82F42430);
PPC_FUNC_IMPL(__imp__sub_82F42430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18336
	ctx.r3.s64 = r11.s64 + -18336;
}

__attribute__((alias("__imp__sub_82F42438"))) PPC_WEAK_FUNC(sub_82F42438);
PPC_FUNC_IMPL(__imp__sub_82F42438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4243C"))) PPC_WEAK_FUNC(sub_82F4243C);
PPC_FUNC_IMPL(__imp__sub_82F4243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42440"))) PPC_WEAK_FUNC(sub_82F42440);
PPC_FUNC_IMPL(__imp__sub_82F42440) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19340, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42468"))) PPC_WEAK_FUNC(sub_82F42468);
PPC_FUNC_IMPL(__imp__sub_82F42468) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4246C"))) PPC_WEAK_FUNC(sub_82F4246C);
PPC_FUNC_IMPL(__imp__sub_82F4246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42470"))) PPC_WEAK_FUNC(sub_82F42470);
PPC_FUNC_IMPL(__imp__sub_82F42470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18328
	ctx.r3.s64 = r11.s64 + -18328;
}

__attribute__((alias("__imp__sub_82F42478"))) PPC_WEAK_FUNC(sub_82F42478);
PPC_FUNC_IMPL(__imp__sub_82F42478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4247C"))) PPC_WEAK_FUNC(sub_82F4247C);
PPC_FUNC_IMPL(__imp__sub_82F4247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42480"))) PPC_WEAK_FUNC(sub_82F42480);
PPC_FUNC_IMPL(__imp__sub_82F42480) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-19320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19320, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F424A8"))) PPC_WEAK_FUNC(sub_82F424A8);
PPC_FUNC_IMPL(__imp__sub_82F424A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F424AC"))) PPC_WEAK_FUNC(sub_82F424AC);
PPC_FUNC_IMPL(__imp__sub_82F424AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F424B0"))) PPC_WEAK_FUNC(sub_82F424B0);
PPC_FUNC_IMPL(__imp__sub_82F424B0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-1724
	ctx.r3.s64 = r11.s64 + -1724;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F424DC"))) PPC_WEAK_FUNC(sub_82F424DC);
PPC_FUNC_IMPL(__imp__sub_82F424DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F424E0"))) PPC_WEAK_FUNC(sub_82F424E0);
PPC_FUNC_IMPL(__imp__sub_82F424E0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,-31260
	ctx.r3.s64 = r11.s64 + -31260;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19312, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4250C"))) PPC_WEAK_FUNC(sub_82F4250C);
PPC_FUNC_IMPL(__imp__sub_82F4250C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42510"))) PPC_WEAK_FUNC(sub_82F42510);
PPC_FUNC_IMPL(__imp__sub_82F42510) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-1708
	ctx.r3.s64 = r11.s64 + -1708;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19308, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4253C"))) PPC_WEAK_FUNC(sub_82F4253C);
PPC_FUNC_IMPL(__imp__sub_82F4253C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42540"))) PPC_WEAK_FUNC(sub_82F42540);
PPC_FUNC_IMPL(__imp__sub_82F42540) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-1688
	ctx.r3.s64 = r11.s64 + -1688;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-19304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19304, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F4256C"))) PPC_WEAK_FUNC(sub_82F4256C);
PPC_FUNC_IMPL(__imp__sub_82F4256C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42570"))) PPC_WEAK_FUNC(sub_82F42570);
PPC_FUNC_IMPL(__imp__sub_82F42570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18320
	ctx.r3.s64 = r11.s64 + -18320;
}

__attribute__((alias("__imp__sub_82F42578"))) PPC_WEAK_FUNC(sub_82F42578);
PPC_FUNC_IMPL(__imp__sub_82F42578) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4257C"))) PPC_WEAK_FUNC(sub_82F4257C);
PPC_FUNC_IMPL(__imp__sub_82F4257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42580"))) PPC_WEAK_FUNC(sub_82F42580);
PPC_FUNC_IMPL(__imp__sub_82F42580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18312
	ctx.r3.s64 = r11.s64 + -18312;
}

__attribute__((alias("__imp__sub_82F42588"))) PPC_WEAK_FUNC(sub_82F42588);
PPC_FUNC_IMPL(__imp__sub_82F42588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4258C"))) PPC_WEAK_FUNC(sub_82F4258C);
PPC_FUNC_IMPL(__imp__sub_82F4258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42590"))) PPC_WEAK_FUNC(sub_82F42590);
PPC_FUNC_IMPL(__imp__sub_82F42590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18304
	ctx.r3.s64 = r11.s64 + -18304;
}

__attribute__((alias("__imp__sub_82F42598"))) PPC_WEAK_FUNC(sub_82F42598);
PPC_FUNC_IMPL(__imp__sub_82F42598) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F4259C"))) PPC_WEAK_FUNC(sub_82F4259C);
PPC_FUNC_IMPL(__imp__sub_82F4259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F425A0"))) PPC_WEAK_FUNC(sub_82F425A0);
PPC_FUNC_IMPL(__imp__sub_82F425A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18296
	ctx.r3.s64 = r11.s64 + -18296;
}

__attribute__((alias("__imp__sub_82F425A8"))) PPC_WEAK_FUNC(sub_82F425A8);
PPC_FUNC_IMPL(__imp__sub_82F425A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F425AC"))) PPC_WEAK_FUNC(sub_82F425AC);
PPC_FUNC_IMPL(__imp__sub_82F425AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F425B0"))) PPC_WEAK_FUNC(sub_82F425B0);
PPC_FUNC_IMPL(__imp__sub_82F425B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18288
	ctx.r3.s64 = r11.s64 + -18288;
}

__attribute__((alias("__imp__sub_82F425B8"))) PPC_WEAK_FUNC(sub_82F425B8);
PPC_FUNC_IMPL(__imp__sub_82F425B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F425BC"))) PPC_WEAK_FUNC(sub_82F425BC);
PPC_FUNC_IMPL(__imp__sub_82F425BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F425C0"))) PPC_WEAK_FUNC(sub_82F425C0);
PPC_FUNC_IMPL(__imp__sub_82F425C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18280
	ctx.r3.s64 = r11.s64 + -18280;
}

__attribute__((alias("__imp__sub_82F425C8"))) PPC_WEAK_FUNC(sub_82F425C8);
PPC_FUNC_IMPL(__imp__sub_82F425C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F425CC"))) PPC_WEAK_FUNC(sub_82F425CC);
PPC_FUNC_IMPL(__imp__sub_82F425CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F425D0"))) PPC_WEAK_FUNC(sub_82F425D0);
PPC_FUNC_IMPL(__imp__sub_82F425D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,18704
	r11.s64 = r11.s64 + 18704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r9,r9,27704
	ctx.r9.s64 = ctx.r9.s64 + 27704;
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	f0.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42664"))) PPC_WEAK_FUNC(sub_82F42664);
PPC_FUNC_IMPL(__imp__sub_82F42664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42668"))) PPC_WEAK_FUNC(sub_82F42668);
PPC_FUNC_IMPL(__imp__sub_82F42668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,18752
	r11.s64 = r11.s64 + 18752;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r9,r9,27752
	ctx.r9.s64 = ctx.r9.s64 + 27752;
	// lfs f0,-372(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -372);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	f0.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F426FC"))) PPC_WEAK_FUNC(sub_82F426FC);
PPC_FUNC_IMPL(__imp__sub_82F426FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42700"))) PPC_WEAK_FUNC(sub_82F42700);
PPC_FUNC_IMPL(__imp__sub_82F42700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,18704
	r11.s64 = r11.s64 + 18704;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r9,r9,27800
	ctx.r9.s64 = ctx.r9.s64 + 27800;
	// lfs f0,19224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19224);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	f0.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42794"))) PPC_WEAK_FUNC(sub_82F42794);
PPC_FUNC_IMPL(__imp__sub_82F42794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42798"))) PPC_WEAK_FUNC(sub_82F42798);
PPC_FUNC_IMPL(__imp__sub_82F42798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,18752
	r11.s64 = r11.s64 + 18752;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// addi r9,r9,27848
	ctx.r9.s64 = ctx.r9.s64 + 27848;
	// lfs f0,19224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19224);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * f0.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	f0.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f9,20(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f7,28(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f6,32(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 32, temp.u32);
	// stfs f5,36(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 36, temp.u32);
	// stfs f0,40(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// stfs f3,44(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4282C"))) PPC_WEAK_FUNC(sub_82F4282C);
PPC_FUNC_IMPL(__imp__sub_82F4282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42830"))) PPC_WEAK_FUNC(sub_82F42830);
PPC_FUNC_IMPL(__imp__sub_82F42830) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-13632
	ctx.r3.s64 = r11.s64 + -13632;
	// bl 0x8260acd0
	sub_8260ACD0(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-18272
	ctx.r3.s64 = r11.s64 + -18272;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42860"))) PPC_WEAK_FUNC(sub_82F42860);
PPC_FUNC_IMPL(__imp__sub_82F42860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42864"))) PPC_WEAK_FUNC(sub_82F42864);
PPC_FUNC_IMPL(__imp__sub_82F42864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42868"))) PPC_WEAK_FUNC(sub_82F42868);
PPC_FUNC_IMPL(__imp__sub_82F42868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lfd f0,5176(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 5176);
	// addi r11,r8,28696
	r11.s64 = ctx.r8.s64 + 28696;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(f0.f64);
	// lfd f0,5168(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5168);
	// lfd f13,-28864(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -28864);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// fsqrts f0,f13
	f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F428A4"))) PPC_WEAK_FUNC(sub_82F428A4);
PPC_FUNC_IMPL(__imp__sub_82F428A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F428A8"))) PPC_WEAK_FUNC(sub_82F428A8);
PPC_FUNC_IMPL(__imp__sub_82F428A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,24216(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 24216);
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(f0.f64);
	// lfd f0,27392(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27392);
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-12984(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -12984, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F428D0"))) PPC_WEAK_FUNC(sub_82F428D0);
PPC_FUNC_IMPL(__imp__sub_82F428D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,5184(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 5184);
	// lfd f1,24216(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24216);
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfd f0,27392(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 27392);
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-12988(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12988, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42918"))) PPC_WEAK_FUNC(sub_82F42918);
PPC_FUNC_IMPL(__imp__sub_82F42918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4291C"))) PPC_WEAK_FUNC(sub_82F4291C);
PPC_FUNC_IMPL(__imp__sub_82F4291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42920"))) PPC_WEAK_FUNC(sub_82F42920);
PPC_FUNC_IMPL(__imp__sub_82F42920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-31965
	ctx.r8.s64 = -2094858240;
	// lfd f0,5176(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 5176);
	// addi r11,r8,28708
	r11.s64 = ctx.r8.s64 + 28708;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(f0.f64);
	// lfd f0,5168(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5168);
	// lfd f13,-28864(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -28864);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * f0.f64;
	// fsqrts f0,f13
	f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4295C"))) PPC_WEAK_FUNC(sub_82F4295C);
PPC_FUNC_IMPL(__imp__sub_82F4295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42960"))) PPC_WEAK_FUNC(sub_82F42960);
PPC_FUNC_IMPL(__imp__sub_82F42960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lfd f0,24216(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 24216);
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(f0.f64);
	// lfd f0,27392(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 27392);
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-12920(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -12920, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42988"))) PPC_WEAK_FUNC(sub_82F42988);
PPC_FUNC_IMPL(__imp__sub_82F42988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f2,5184(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 5184);
	// lfd f1,24216(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24216);
	// bl 0x828ec1c8
	sub_828EC1C8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfd f0,27392(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 27392);
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-12924(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12924, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F429D0"))) PPC_WEAK_FUNC(sub_82F429D0);
PPC_FUNC_IMPL(__imp__sub_82F429D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F429D4"))) PPC_WEAK_FUNC(sub_82F429D4);
PPC_FUNC_IMPL(__imp__sub_82F429D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F429D8"))) PPC_WEAK_FUNC(sub_82F429D8);
PPC_FUNC_IMPL(__imp__sub_82F429D8) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// addi r3,r31,-12912
	ctx.r3.s64 = r31.s64 + -12912;
	// bl 0x8261f480
	sub_8261F480(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r11,r11,5332
	r11.s64 = r11.s64 + 5332;
	// addi r3,r10,-18256
	ctx.r3.s64 = ctx.r10.s64 + -18256;
	// stw r11,-12912(r31)
	PPC_STORE_U32(r31.u32 + -12912, r11.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F42A1C"))) PPC_WEAK_FUNC(sub_82F42A1C);
PPC_FUNC_IMPL(__imp__sub_82F42A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42A20"))) PPC_WEAK_FUNC(sub_82F42A20);
PPC_FUNC_IMPL(__imp__sub_82F42A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-12896
	ctx.r3.s64 = r11.s64 + -12896;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828ec890
	sub_828EC890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F42A34"))) PPC_WEAK_FUNC(sub_82F42A34);
PPC_FUNC_IMPL(__imp__sub_82F42A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42A38"))) PPC_WEAK_FUNC(sub_82F42A38);
PPC_FUNC_IMPL(__imp__sub_82F42A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,7520
	ctx.r9.s64 = r11.s64 + 7520;
	// addi r8,r10,-12816
	ctx.r8.s64 = ctx.r10.s64 + -12816;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42A54"))) PPC_WEAK_FUNC(sub_82F42A54);
PPC_FUNC_IMPL(__imp__sub_82F42A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42A58"))) PPC_WEAK_FUNC(sub_82F42A58);
PPC_FUNC_IMPL(__imp__sub_82F42A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// addi r7,r8,-7036
	ctx.r7.s64 = ctx.r8.s64 + -7036;
	// lwz r11,-12748(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12748);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-12748(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12748, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42A78"))) PPC_WEAK_FUNC(sub_82F42A78);
PPC_FUNC_IMPL(__imp__sub_82F42A78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,7736
	ctx.r6.s64 = ctx.r10.s64 + 7736;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12208
	ctx.r5.s64 = ctx.r9.s64 + -12208;
	// addi r4,r8,7784
	ctx.r4.s64 = ctx.r8.s64 + 7784;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-12796
	ctx.r3.s64 = ctx.r7.s64 + -12796;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F42AF0"))) PPC_WEAK_FUNC(sub_82F42AF0);
PPC_FUNC_IMPL(__imp__sub_82F42AF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42AF4"))) PPC_WEAK_FUNC(sub_82F42AF4);
PPC_FUNC_IMPL(__imp__sub_82F42AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42AF8"))) PPC_WEAK_FUNC(sub_82F42AF8);
PPC_FUNC_IMPL(__imp__sub_82F42AF8) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x828e93f8
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// addi r27,r1,-128
	r27.s64 = ctx.r1.s64 + -128;
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, r11.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// addi r4,r6,-12736
	ctx.r4.s64 = ctx.r6.s64 + -12736;
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, r11.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// li r29,48
	r29.s64 = 48;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// addi r28,r1,-208
	r28.s64 = ctx.r1.s64 + -208;
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r26,r1,-224
	r26.s64 = ctx.r1.s64 + -224;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r11.u32);
	// li r25,64
	r25.s64 = 64;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r11.u32);
	// li r24,80
	r24.s64 = 80;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// addi r23,r1,-192
	r23.s64 = ctx.r1.s64 + -192;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r22,96
	r22.s64 = 96;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, r11.u32);
	// li r21,112
	r21.s64 = 112;
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// li r20,128
	r20.s64 = 128;
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, r11.u32);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, r11.u32);
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r10.u32);
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, r11.u32);
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, r11.u32);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, r11.u32);
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, r11.u32);
	// stw r10,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// lvx128 v10,r0,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r10,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, ctx.r10.u32);
	// stvx128 v0,r4,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, r11.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stw r10,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r10.u32);
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, r11.u32);
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, r11.u32);
	// stw r10,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// stvx128 v13,r4,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r11.u32);
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// stvx128 v12,r4,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v0,r4,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stvx128 v11,r4,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, r11.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// stvx128 v10,r4,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// li r31,224
	r31.s64 = 224;
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, r11.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, r11.u32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, r11.u32);
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// stw r10,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r10.u32);
	// lvx128 v10,r0,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r11,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r11.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82F42D0C"))) PPC_WEAK_FUNC(sub_82F42D0C);
PPC_FUNC_IMPL(__imp__sub_82F42D0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82F42D10"))) PPC_WEAK_FUNC(sub_82F42D10);
PPC_FUNC_IMPL(__imp__sub_82F42D10) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x828e93f8
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r11.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stw r11,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, r11.u32);
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// stw r11,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, r11.u32);
	// stw r11,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, r11.u32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, r11.u32);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, r11.u32);
	// addi r30,r1,-144
	r30.s64 = ctx.r1.s64 + -144;
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, r11.u32);
	// addi r27,r1,-128
	r27.s64 = ctx.r1.s64 + -128;
	// stw r10,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r10.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, r11.u32);
	// addi r4,r6,-12480
	ctx.r4.s64 = ctx.r6.s64 + -12480;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r11,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, r11.u32);
	// li r29,48
	r29.s64 = 48;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, r11.u32);
	// addi r28,r1,-208
	r28.s64 = ctx.r1.s64 + -208;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r11.u32);
	// addi r26,r1,-224
	r26.s64 = ctx.r1.s64 + -224;
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// li r25,64
	r25.s64 = 64;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// li r24,80
	r24.s64 = 80;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// addi r23,r1,-192
	r23.s64 = ctx.r1.s64 + -192;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
	// li r22,96
	r22.s64 = 96;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// li r21,112
	r21.s64 = 112;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, r11.u32);
	// li r20,128
	r20.s64 = 128;
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, r11.u32);
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r11.u32);
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, r11.u32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, r11.u32);
	// stw r10,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r10.u32);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, r11.u32);
	// stw r10,-220(r1)
	PPC_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// stw r10,-216(r1)
	PPC_STORE_U32(ctx.r1.u32 + -216, ctx.r10.u32);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r10,-212(r1)
	PPC_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// stw r11,-200(r1)
	PPC_STORE_U32(ctx.r1.u32 + -200, r11.u32);
	// lvx128 v10,r0,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// stw r11,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, r11.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r11,-204(r1)
	PPC_STORE_U32(ctx.r1.u32 + -204, r11.u32);
	// stvx128 v0,r4,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, r11.u32);
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, r11.u32);
	// stw r10,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r10.u32);
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r11.u32);
	// stvx128 v13,r4,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r11.u32);
	// stvx128 v12,r4,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// li r3,144
	ctx.r3.s64 = 144;
	// stvx128 v0,r4,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// stvx128 v11,r4,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r10,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r10.u32);
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v13,r4,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,-144
	ctx.r3.s64 = ctx.r1.s64 + -144;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// stvx128 v0,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stvx128 v10,r4,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// li r9,176
	ctx.r9.s64 = 176;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, r11.u32);
	// li r31,224
	r31.s64 = 224;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// stw r11,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, r11.u32);
	// lvx128 v10,r0,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r10,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r10.u32);
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, r11.u32);
	// stw r11,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, r11.u32);
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r4,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82F42F24"))) PPC_WEAK_FUNC(sub_82F42F24);
PPC_FUNC_IMPL(__imp__sub_82F42F24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82F42F28"))) PPC_WEAK_FUNC(sub_82F42F28);
PPC_FUNC_IMPL(__imp__sub_82F42F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,3776
	ctx.r9.s64 = r11.s64 + 3776;
	// addi r8,r10,-12224
	ctx.r8.s64 = ctx.r10.s64 + -12224;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42F44"))) PPC_WEAK_FUNC(sub_82F42F44);
PPC_FUNC_IMPL(__imp__sub_82F42F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42F48"))) PPC_WEAK_FUNC(sub_82F42F48);
PPC_FUNC_IMPL(__imp__sub_82F42F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,5408
	ctx.r4.s64 = ctx.r10.s64 + 5408;
	// addi r3,r9,-12208
	ctx.r3.s64 = ctx.r9.s64 + -12208;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F42FA8"))) PPC_WEAK_FUNC(sub_82F42FA8);
PPC_FUNC_IMPL(__imp__sub_82F42FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42FAC"))) PPC_WEAK_FUNC(sub_82F42FAC);
PPC_FUNC_IMPL(__imp__sub_82F42FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F42FB0"))) PPC_WEAK_FUNC(sub_82F42FB0);
PPC_FUNC_IMPL(__imp__sub_82F42FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-6480
	ctx.r9.s64 = r11.s64 + -6480;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r10,-12160
	ctx.r5.s64 = ctx.r10.s64 + -12160;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r11,48
	r11.s64 = 48;
	// lvx128 v12,r9,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r9,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r5,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F42FFC"))) PPC_WEAK_FUNC(sub_82F42FFC);
PPC_FUNC_IMPL(__imp__sub_82F42FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43000"))) PPC_WEAK_FUNC(sub_82F43000);
PPC_FUNC_IMPL(__imp__sub_82F43000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-6256
	ctx.r9.s64 = r11.s64 + -6256;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r10,-12096
	ctx.r6.s64 = ctx.r10.s64 + -12096;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r9,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r6,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r6,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4303C"))) PPC_WEAK_FUNC(sub_82F4303C);
PPC_FUNC_IMPL(__imp__sub_82F4303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43040"))) PPC_WEAK_FUNC(sub_82F43040);
PPC_FUNC_IMPL(__imp__sub_82F43040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// addi r7,r8,-6208
	ctx.r7.s64 = ctx.r8.s64 + -6208;
	// lwz r11,-12748(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12748);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,-12748(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12748, ctx.r7.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43060"))) PPC_WEAK_FUNC(sub_82F43060);
PPC_FUNC_IMPL(__imp__sub_82F43060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,8728
	ctx.r4.s64 = ctx.r10.s64 + 8728;
	// addi r3,r9,-12044
	ctx.r3.s64 = ctx.r9.s64 + -12044;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F430C0"))) PPC_WEAK_FUNC(sub_82F430C0);
PPC_FUNC_IMPL(__imp__sub_82F430C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F430C4"))) PPC_WEAK_FUNC(sub_82F430C4);
PPC_FUNC_IMPL(__imp__sub_82F430C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F430C8"))) PPC_WEAK_FUNC(sub_82F430C8);
PPC_FUNC_IMPL(__imp__sub_82F430C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,8804
	ctx.r4.s64 = ctx.r10.s64 + 8804;
	// addi r3,r9,-11996
	ctx.r3.s64 = ctx.r9.s64 + -11996;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F43128"))) PPC_WEAK_FUNC(sub_82F43128);
PPC_FUNC_IMPL(__imp__sub_82F43128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4312C"))) PPC_WEAK_FUNC(sub_82F4312C);
PPC_FUNC_IMPL(__imp__sub_82F4312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43130"))) PPC_WEAK_FUNC(sub_82F43130);
PPC_FUNC_IMPL(__imp__sub_82F43130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-6064
	ctx.r9.s64 = r11.s64 + -6064;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r10,-11936
	ctx.r5.s64 = ctx.r10.s64 + -11936;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r9,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r11,48
	r11.s64 = 48;
	// lvx128 v12,r9,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r9,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r5,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4317C"))) PPC_WEAK_FUNC(sub_82F4317C);
PPC_FUNC_IMPL(__imp__sub_82F4317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43180"))) PPC_WEAK_FUNC(sub_82F43180);
PPC_FUNC_IMPL(__imp__sub_82F43180) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r10,9732
	ctx.r5.s64 = ctx.r10.s64 + 9732;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11632
	ctx.r5.s64 = ctx.r8.s64 + -11632;
	// addi r4,r7,9804
	ctx.r4.s64 = ctx.r7.s64 + 9804;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-11872
	ctx.r3.s64 = ctx.r6.s64 + -11872;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,9712
	ctx.r9.s64 = ctx.r9.s64 + 9712;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F431FC"))) PPC_WEAK_FUNC(sub_82F431FC);
PPC_FUNC_IMPL(__imp__sub_82F431FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43200"))) PPC_WEAK_FUNC(sub_82F43200);
PPC_FUNC_IMPL(__imp__sub_82F43200) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,9756
	ctx.r6.s64 = ctx.r10.s64 + 9756;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11872
	ctx.r5.s64 = ctx.r9.s64 + -11872;
	// addi r4,r8,9820
	ctx.r4.s64 = ctx.r8.s64 + 9820;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-11824
	ctx.r3.s64 = ctx.r7.s64 + -11824;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F43278"))) PPC_WEAK_FUNC(sub_82F43278);
PPC_FUNC_IMPL(__imp__sub_82F43278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4327C"))) PPC_WEAK_FUNC(sub_82F4327C);
PPC_FUNC_IMPL(__imp__sub_82F4327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43280"))) PPC_WEAK_FUNC(sub_82F43280);
PPC_FUNC_IMPL(__imp__sub_82F43280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31964
	r11.s64 = -2094792704;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r10,-5772
	ctx.r9.s64 = ctx.r10.s64 + -5772;
	// lwz r11,-5776(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -5776);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43298"))) PPC_WEAK_FUNC(sub_82F43298);
PPC_FUNC_IMPL(__imp__sub_82F43298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// addi r9,r11,10240
	ctx.r9.s64 = r11.s64 + 10240;
	// addi r4,r10,-5772
	ctx.r4.s64 = ctx.r10.s64 + -5772;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11584
	ctx.r5.s64 = ctx.r8.s64 + -11584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,10272
	ctx.r4.s64 = ctx.r7.s64 + 10272;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-11776
	ctx.r3.s64 = ctx.r6.s64 + -11776;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F43310"))) PPC_WEAK_FUNC(sub_82F43310);
PPC_FUNC_IMPL(__imp__sub_82F43310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43314"))) PPC_WEAK_FUNC(sub_82F43314);
PPC_FUNC_IMPL(__imp__sub_82F43314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43318"))) PPC_WEAK_FUNC(sub_82F43318);
PPC_FUNC_IMPL(__imp__sub_82F43318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,10316
	ctx.r4.s64 = ctx.r10.s64 + 10316;
	// addi r3,r9,-11728
	ctx.r3.s64 = ctx.r9.s64 + -11728;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F43378"))) PPC_WEAK_FUNC(sub_82F43378);
PPC_FUNC_IMPL(__imp__sub_82F43378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F4337C"))) PPC_WEAK_FUNC(sub_82F4337C);
PPC_FUNC_IMPL(__imp__sub_82F4337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43380"))) PPC_WEAK_FUNC(sub_82F43380);
PPC_FUNC_IMPL(__imp__sub_82F43380) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,10292
	ctx.r6.s64 = ctx.r10.s64 + 10292;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11728
	ctx.r5.s64 = ctx.r9.s64 + -11728;
	// addi r4,r8,10336
	ctx.r4.s64 = ctx.r8.s64 + 10336;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-11680
	ctx.r3.s64 = ctx.r7.s64 + -11680;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F433F8"))) PPC_WEAK_FUNC(sub_82F433F8);
PPC_FUNC_IMPL(__imp__sub_82F433F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F433FC"))) PPC_WEAK_FUNC(sub_82F433FC);
PPC_FUNC_IMPL(__imp__sub_82F433FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F43400"))) PPC_WEAK_FUNC(sub_82F43400);
PPC_FUNC_IMPL(__imp__sub_82F43400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-11584
	ctx.r5.s64 = ctx.r10.s64 + -11584;
	// addi r4,r9,10360
	ctx.r4.s64 = ctx.r9.s64 + 10360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-11632
	ctx.r3.s64 = ctx.r8.s64 + -11632;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F43464"))) PPC_WEAK_FUNC(sub_82F43464);
PPC_FUNC_IMPL(__imp__sub_82F43464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F43468"))) PPC_WEAK_FUNC(sub_82F43468);
PPC_FUNC_IMPL(__imp__sub_82F43468) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,10392
	ctx.r6.s64 = ctx.r10.s64 + 10392;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,10440
	ctx.r4.s64 = ctx.r8.s64 + 10440;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-11584
	ctx.r3.s64 = ctx.r7.s64 + -11584;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82F434E0"))) PPC_WEAK_FUNC(sub_82F434E0);
PPC_FUNC_IMPL(__imp__sub_82F434E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F434E4"))) PPC_WEAK_FUNC(sub_82F434E4);
PPC_FUNC_IMPL(__imp__sub_82F434E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F434E8"))) PPC_WEAK_FUNC(sub_82F434E8);
PPC_FUNC_IMPL(__imp__sub_82F434E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r10,14960
	ctx.r5.s64 = ctx.r10.s64 + 14960;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,15152
	ctx.r4.s64 = ctx.r7.s64 + 15152;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-11464
	ctx.r3.s64 = ctx.r6.s64 + -11464;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,14916
	ctx.r9.s64 = ctx.r9.s64 + 14916;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,140
	ctx.r6.s64 = 140;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

