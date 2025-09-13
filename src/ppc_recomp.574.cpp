#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FBDC88"))) PPC_WEAK_FUNC(sub_82FBDC88);
PPC_FUNC_IMPL(__imp__sub_82FBDC88) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r5,r10,-13384
	ctx.r5.s64 = ctx.r10.s64 + -13384;
	// addi r4,r9,31480
	ctx.r4.s64 = ctx.r9.s64 + 31480;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27132
	ctx.r5.s64 = ctx.r8.s64 + -27132;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2376
	ctx.r4.s64 = ctx.r7.s64 + -2376;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,30388
	ctx.r3.s64 = ctx.r6.s64 + 30388;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBDD00"))) PPC_WEAK_FUNC(sub_82FBDD00);
PPC_FUNC_IMPL(__imp__sub_82FBDD00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDD04"))) PPC_WEAK_FUNC(sub_82FBDD04);
PPC_FUNC_IMPL(__imp__sub_82FBDD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDD08"))) PPC_WEAK_FUNC(sub_82FBDD08);
PPC_FUNC_IMPL(__imp__sub_82FBDD08) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r5,r10,-13316
	ctx.r5.s64 = ctx.r10.s64 + -13316;
	// addi r4,r9,31744
	ctx.r4.s64 = ctx.r9.s64 + 31744;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2360
	ctx.r4.s64 = ctx.r7.s64 + -2360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,30436
	ctx.r3.s64 = ctx.r6.s64 + 30436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBDD80"))) PPC_WEAK_FUNC(sub_82FBDD80);
PPC_FUNC_IMPL(__imp__sub_82FBDD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDD84"))) PPC_WEAK_FUNC(sub_82FBDD84);
PPC_FUNC_IMPL(__imp__sub_82FBDD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDD88"))) PPC_WEAK_FUNC(sub_82FBDD88);
PPC_FUNC_IMPL(__imp__sub_82FBDD88) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,31816
	ctx.r6.s64 = ctx.r10.s64 + 31816;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-2340
	ctx.r4.s64 = ctx.r8.s64 + -2340;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30484
	ctx.r3.s64 = ctx.r7.s64 + 30484;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBDE00"))) PPC_WEAK_FUNC(sub_82FBDE00);
PPC_FUNC_IMPL(__imp__sub_82FBDE00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDE04"))) PPC_WEAK_FUNC(sub_82FBDE04);
PPC_FUNC_IMPL(__imp__sub_82FBDE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDE08"))) PPC_WEAK_FUNC(sub_82FBDE08);
PPC_FUNC_IMPL(__imp__sub_82FBDE08) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r5,r10,-13296
	ctx.r5.s64 = ctx.r10.s64 + -13296;
	// addi r4,r9,31840
	ctx.r4.s64 = ctx.r9.s64 + 31840;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2324
	ctx.r4.s64 = ctx.r7.s64 + -2324;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,30532
	ctx.r3.s64 = ctx.r6.s64 + 30532;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBDE80"))) PPC_WEAK_FUNC(sub_82FBDE80);
PPC_FUNC_IMPL(__imp__sub_82FBDE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDE84"))) PPC_WEAK_FUNC(sub_82FBDE84);
PPC_FUNC_IMPL(__imp__sub_82FBDE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDE88"))) PPC_WEAK_FUNC(sub_82FBDE88);
PPC_FUNC_IMPL(__imp__sub_82FBDE88) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,32176
	ctx.r6.s64 = ctx.r10.s64 + 32176;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-2304
	ctx.r4.s64 = ctx.r8.s64 + -2304;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30580
	ctx.r3.s64 = ctx.r7.s64 + 30580;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBDF00"))) PPC_WEAK_FUNC(sub_82FBDF00);
PPC_FUNC_IMPL(__imp__sub_82FBDF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDF04"))) PPC_WEAK_FUNC(sub_82FBDF04);
PPC_FUNC_IMPL(__imp__sub_82FBDF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDF08"))) PPC_WEAK_FUNC(sub_82FBDF08);
PPC_FUNC_IMPL(__imp__sub_82FBDF08) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r5,r10,-13168
	ctx.r5.s64 = ctx.r10.s64 + -13168;
	// addi r4,r9,32200
	ctx.r4.s64 = ctx.r9.s64 + 32200;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2284
	ctx.r4.s64 = ctx.r7.s64 + -2284;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,30628
	ctx.r3.s64 = ctx.r6.s64 + 30628;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBDF80"))) PPC_WEAK_FUNC(sub_82FBDF80);
PPC_FUNC_IMPL(__imp__sub_82FBDF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBDF84"))) PPC_WEAK_FUNC(sub_82FBDF84);
PPC_FUNC_IMPL(__imp__sub_82FBDF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBDF88"))) PPC_WEAK_FUNC(sub_82FBDF88);
PPC_FUNC_IMPL(__imp__sub_82FBDF88) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r6,r10,-13072
	ctx.r6.s64 = ctx.r10.s64 + -13072;
	// addi r5,r9,32256
	ctx.r5.s64 = ctx.r9.s64 + 32256;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-2256
	ctx.r4.s64 = ctx.r8.s64 + -2256;
	// addi r3,r7,30676
	ctx.r3.s64 = ctx.r7.s64 + 30676;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,14
	r31.s64 = 14;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE004"))) PPC_WEAK_FUNC(sub_82FBE004);
PPC_FUNC_IMPL(__imp__sub_82FBE004) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE008"))) PPC_WEAK_FUNC(sub_82FBE008);
PPC_FUNC_IMPL(__imp__sub_82FBE008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31954
	r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r8,r9,14792
	ctx.r8.s64 = ctx.r9.s64 + 14792;
	// lwz r11,32248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32248);
	// lwz r10,32252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32252);
	// stw r11,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, r11.u32);
	// stw r10,368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 368, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE02C"))) PPC_WEAK_FUNC(sub_82FBE02C);
PPC_FUNC_IMPL(__imp__sub_82FBE02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE030"))) PPC_WEAK_FUNC(sub_82FBE030);
PPC_FUNC_IMPL(__imp__sub_82FBE030) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-13112
	ctx.r9.s64 = r11.s64 + -13112;
	// addi r4,r10,14792
	ctx.r4.s64 = ctx.r10.s64 + 14792;
	// addi r5,r9,152
	ctx.r5.s64 = ctx.r9.s64 + 152;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r10,25
	ctx.r10.s64 = 25;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1940
	ctx.r4.s64 = ctx.r7.s64 + -1940;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,30724
	ctx.r3.s64 = ctx.r6.s64 + 30724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE0A8"))) PPC_WEAK_FUNC(sub_82FBE0A8);
PPC_FUNC_IMPL(__imp__sub_82FBE0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE0AC"))) PPC_WEAK_FUNC(sub_82FBE0AC);
PPC_FUNC_IMPL(__imp__sub_82FBE0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE0B0"))) PPC_WEAK_FUNC(sub_82FBE0B0);
PPC_FUNC_IMPL(__imp__sub_82FBE0B0) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,32592
	ctx.r6.s64 = ctx.r10.s64 + 32592;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-1848
	ctx.r4.s64 = ctx.r8.s64 + -1848;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30772
	ctx.r3.s64 = ctx.r7.s64 + 30772;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE128"))) PPC_WEAK_FUNC(sub_82FBE128);
PPC_FUNC_IMPL(__imp__sub_82FBE128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE12C"))) PPC_WEAK_FUNC(sub_82FBE12C);
PPC_FUNC_IMPL(__imp__sub_82FBE12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE130"))) PPC_WEAK_FUNC(sub_82FBE130);
PPC_FUNC_IMPL(__imp__sub_82FBE130) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r6,r10,-12804
	ctx.r6.s64 = ctx.r10.s64 + -12804;
	// addi r5,r9,32640
	ctx.r5.s64 = ctx.r9.s64 + 32640;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-1820
	ctx.r4.s64 = ctx.r8.s64 + -1820;
	// addi r3,r7,30820
	ctx.r3.s64 = ctx.r7.s64 + 30820;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE1AC"))) PPC_WEAK_FUNC(sub_82FBE1AC);
PPC_FUNC_IMPL(__imp__sub_82FBE1AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE1B0"))) PPC_WEAK_FUNC(sub_82FBE1B0);
PPC_FUNC_IMPL(__imp__sub_82FBE1B0) {
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
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,32760
	ctx.r6.s64 = ctx.r10.s64 + 32760;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-1788
	ctx.r4.s64 = ctx.r8.s64 + -1788;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30868
	ctx.r3.s64 = ctx.r7.s64 + 30868;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE228"))) PPC_WEAK_FUNC(sub_82FBE228);
PPC_FUNC_IMPL(__imp__sub_82FBE228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE22C"))) PPC_WEAK_FUNC(sub_82FBE22C);
PPC_FUNC_IMPL(__imp__sub_82FBE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE230"))) PPC_WEAK_FUNC(sub_82FBE230);
PPC_FUNC_IMPL(__imp__sub_82FBE230) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r6,r10,-12720
	ctx.r6.s64 = ctx.r10.s64 + -12720;
	// addi r5,r9,-32720
	ctx.r5.s64 = ctx.r9.s64 + -32720;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-21124
	ctx.r4.s64 = ctx.r8.s64 + -21124;
	// addi r3,r7,30916
	ctx.r3.s64 = ctx.r7.s64 + 30916;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE2AC"))) PPC_WEAK_FUNC(sub_82FBE2AC);
PPC_FUNC_IMPL(__imp__sub_82FBE2AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE2B0"))) PPC_WEAK_FUNC(sub_82FBE2B0);
PPC_FUNC_IMPL(__imp__sub_82FBE2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,15392
	ctx.r9.s64 = ctx.r10.s64 + 15392;
	// lwz r11,-32728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -32728);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE2C8"))) PPC_WEAK_FUNC(sub_82FBE2C8);
PPC_FUNC_IMPL(__imp__sub_82FBE2C8) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-12740
	ctx.r9.s64 = r11.s64 + -12740;
	// addi r4,r10,15392
	ctx.r4.s64 = ctx.r10.s64 + 15392;
	// addi r5,r9,76
	ctx.r5.s64 = ctx.r9.s64 + 76;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-21028
	ctx.r4.s64 = ctx.r7.s64 + -21028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,30964
	ctx.r3.s64 = ctx.r6.s64 + 30964;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE340"))) PPC_WEAK_FUNC(sub_82FBE340);
PPC_FUNC_IMPL(__imp__sub_82FBE340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE344"))) PPC_WEAK_FUNC(sub_82FBE344);
PPC_FUNC_IMPL(__imp__sub_82FBE344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE348"))) PPC_WEAK_FUNC(sub_82FBE348);
PPC_FUNC_IMPL(__imp__sub_82FBE348) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12584
	ctx.r5.s64 = ctx.r10.s64 + -12584;
	// addi r4,r9,-32600
	ctx.r4.s64 = ctx.r9.s64 + -32600;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1752
	ctx.r4.s64 = ctx.r7.s64 + -1752;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31012
	ctx.r3.s64 = ctx.r6.s64 + 31012;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE3C0"))) PPC_WEAK_FUNC(sub_82FBE3C0);
PPC_FUNC_IMPL(__imp__sub_82FBE3C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE3C4"))) PPC_WEAK_FUNC(sub_82FBE3C4);
PPC_FUNC_IMPL(__imp__sub_82FBE3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE3C8"))) PPC_WEAK_FUNC(sub_82FBE3C8);
PPC_FUNC_IMPL(__imp__sub_82FBE3C8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-32408
	ctx.r6.s64 = ctx.r10.s64 + -32408;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-21000
	ctx.r4.s64 = ctx.r8.s64 + -21000;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31060
	ctx.r3.s64 = ctx.r7.s64 + 31060;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE440"))) PPC_WEAK_FUNC(sub_82FBE440);
PPC_FUNC_IMPL(__imp__sub_82FBE440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE444"))) PPC_WEAK_FUNC(sub_82FBE444);
PPC_FUNC_IMPL(__imp__sub_82FBE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE448"))) PPC_WEAK_FUNC(sub_82FBE448);
PPC_FUNC_IMPL(__imp__sub_82FBE448) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r6,r10,-12548
	ctx.r6.s64 = ctx.r10.s64 + -12548;
	// addi r5,r9,-32384
	ctx.r5.s64 = ctx.r9.s64 + -32384;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-1704
	ctx.r4.s64 = ctx.r8.s64 + -1704;
	// addi r3,r7,31108
	ctx.r3.s64 = ctx.r7.s64 + 31108;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE4C4"))) PPC_WEAK_FUNC(sub_82FBE4C4);
PPC_FUNC_IMPL(__imp__sub_82FBE4C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE4C8"))) PPC_WEAK_FUNC(sub_82FBE4C8);
PPC_FUNC_IMPL(__imp__sub_82FBE4C8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-32336
	ctx.r6.s64 = ctx.r10.s64 + -32336;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-1672
	ctx.r4.s64 = ctx.r8.s64 + -1672;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31156
	ctx.r3.s64 = ctx.r7.s64 + 31156;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE540"))) PPC_WEAK_FUNC(sub_82FBE540);
PPC_FUNC_IMPL(__imp__sub_82FBE540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE544"))) PPC_WEAK_FUNC(sub_82FBE544);
PPC_FUNC_IMPL(__imp__sub_82FBE544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE548"))) PPC_WEAK_FUNC(sub_82FBE548);
PPC_FUNC_IMPL(__imp__sub_82FBE548) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12536
	ctx.r5.s64 = ctx.r10.s64 + -12536;
	// addi r4,r9,-32312
	ctx.r4.s64 = ctx.r9.s64 + -32312;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-20976
	ctx.r4.s64 = ctx.r7.s64 + -20976;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31204
	ctx.r3.s64 = ctx.r6.s64 + 31204;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE5C0"))) PPC_WEAK_FUNC(sub_82FBE5C0);
PPC_FUNC_IMPL(__imp__sub_82FBE5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE5C4"))) PPC_WEAK_FUNC(sub_82FBE5C4);
PPC_FUNC_IMPL(__imp__sub_82FBE5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE5C8"))) PPC_WEAK_FUNC(sub_82FBE5C8);
PPC_FUNC_IMPL(__imp__sub_82FBE5C8) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12500
	ctx.r5.s64 = ctx.r10.s64 + -12500;
	// addi r4,r9,-32120
	ctx.r4.s64 = ctx.r9.s64 + -32120;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1636
	ctx.r4.s64 = ctx.r7.s64 + -1636;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31252
	ctx.r3.s64 = ctx.r6.s64 + 31252;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE640"))) PPC_WEAK_FUNC(sub_82FBE640);
PPC_FUNC_IMPL(__imp__sub_82FBE640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE644"))) PPC_WEAK_FUNC(sub_82FBE644);
PPC_FUNC_IMPL(__imp__sub_82FBE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE648"))) PPC_WEAK_FUNC(sub_82FBE648);
PPC_FUNC_IMPL(__imp__sub_82FBE648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,15752
	ctx.r9.s64 = ctx.r10.s64 + 15752;
	// lwz r11,-32724(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -32724);
	// stw r11,248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 248, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE660"))) PPC_WEAK_FUNC(sub_82FBE660);
PPC_FUNC_IMPL(__imp__sub_82FBE660) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-12392
	ctx.r9.s64 = r11.s64 + -12392;
	// addi r4,r10,15752
	ctx.r4.s64 = ctx.r10.s64 + 15752;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1392
	ctx.r4.s64 = ctx.r7.s64 + -1392;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31300
	ctx.r3.s64 = ctx.r6.s64 + 31300;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE6D8"))) PPC_WEAK_FUNC(sub_82FBE6D8);
PPC_FUNC_IMPL(__imp__sub_82FBE6D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE6DC"))) PPC_WEAK_FUNC(sub_82FBE6DC);
PPC_FUNC_IMPL(__imp__sub_82FBE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE6E0"))) PPC_WEAK_FUNC(sub_82FBE6E0);
PPC_FUNC_IMPL(__imp__sub_82FBE6E0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12284
	ctx.r5.s64 = ctx.r10.s64 + -12284;
	// addi r4,r9,-32048
	ctx.r4.s64 = ctx.r9.s64 + -32048;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1368
	ctx.r4.s64 = ctx.r7.s64 + -1368;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31348
	ctx.r3.s64 = ctx.r6.s64 + 31348;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE758"))) PPC_WEAK_FUNC(sub_82FBE758);
PPC_FUNC_IMPL(__imp__sub_82FBE758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE75C"))) PPC_WEAK_FUNC(sub_82FBE75C);
PPC_FUNC_IMPL(__imp__sub_82FBE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE760"))) PPC_WEAK_FUNC(sub_82FBE760);
PPC_FUNC_IMPL(__imp__sub_82FBE760) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12268
	ctx.r5.s64 = ctx.r10.s64 + -12268;
	// addi r4,r9,-31976
	ctx.r4.s64 = ctx.r9.s64 + -31976;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1348
	ctx.r4.s64 = ctx.r7.s64 + -1348;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31396
	ctx.r3.s64 = ctx.r6.s64 + 31396;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE7D8"))) PPC_WEAK_FUNC(sub_82FBE7D8);
PPC_FUNC_IMPL(__imp__sub_82FBE7D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE7DC"))) PPC_WEAK_FUNC(sub_82FBE7DC);
PPC_FUNC_IMPL(__imp__sub_82FBE7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE7E0"))) PPC_WEAK_FUNC(sub_82FBE7E0);
PPC_FUNC_IMPL(__imp__sub_82FBE7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,16112
	ctx.r9.s64 = ctx.r10.s64 + 16112;
	// lwz r11,-31784(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -31784);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE7F8"))) PPC_WEAK_FUNC(sub_82FBE7F8);
PPC_FUNC_IMPL(__imp__sub_82FBE7F8) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-12200
	ctx.r9.s64 = r11.s64 + -12200;
	// addi r4,r10,16112
	ctx.r4.s64 = ctx.r10.s64 + 16112;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1288
	ctx.r4.s64 = ctx.r7.s64 + -1288;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31444
	ctx.r3.s64 = ctx.r6.s64 + 31444;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE870"))) PPC_WEAK_FUNC(sub_82FBE870);
PPC_FUNC_IMPL(__imp__sub_82FBE870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE874"))) PPC_WEAK_FUNC(sub_82FBE874);
PPC_FUNC_IMPL(__imp__sub_82FBE874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE878"))) PPC_WEAK_FUNC(sub_82FBE878);
PPC_FUNC_IMPL(__imp__sub_82FBE878) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-31780
	ctx.r6.s64 = ctx.r10.s64 + -31780;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,-1268
	ctx.r4.s64 = ctx.r8.s64 + -1268;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31492
	ctx.r3.s64 = ctx.r7.s64 + 31492;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE8F0"))) PPC_WEAK_FUNC(sub_82FBE8F0);
PPC_FUNC_IMPL(__imp__sub_82FBE8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE8F4"))) PPC_WEAK_FUNC(sub_82FBE8F4);
PPC_FUNC_IMPL(__imp__sub_82FBE8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBE8F8"))) PPC_WEAK_FUNC(sub_82FBE8F8);
PPC_FUNC_IMPL(__imp__sub_82FBE8F8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// addi r5,r10,-31752
	ctx.r5.s64 = ctx.r10.s64 + -31752;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27132
	ctx.r5.s64 = ctx.r8.s64 + -27132;
	// addi r4,r7,-1236
	ctx.r4.s64 = ctx.r7.s64 + -1236;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31540
	ctx.r3.s64 = ctx.r6.s64 + 31540;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-12116
	ctx.r9.s64 = ctx.r9.s64 + -12116;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBE974"))) PPC_WEAK_FUNC(sub_82FBE974);
PPC_FUNC_IMPL(__imp__sub_82FBE974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE978"))) PPC_WEAK_FUNC(sub_82FBE978);
PPC_FUNC_IMPL(__imp__sub_82FBE978) {
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
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-27132
	ctx.r5.s64 = ctx.r10.s64 + -27132;
	// addi r4,r9,2524
	ctx.r4.s64 = ctx.r9.s64 + 2524;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,31588
	ctx.r3.s64 = ctx.r8.s64 + 31588;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBE9DC"))) PPC_WEAK_FUNC(sub_82FBE9DC);
PPC_FUNC_IMPL(__imp__sub_82FBE9DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBE9E0"))) PPC_WEAK_FUNC(sub_82FBE9E0);
PPC_FUNC_IMPL(__imp__sub_82FBE9E0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-31680
	ctx.r6.s64 = ctx.r10.s64 + -31680;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31588
	ctx.r5.s64 = ctx.r9.s64 + 31588;
	// addi r4,r8,2540
	ctx.r4.s64 = ctx.r8.s64 + 2540;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31636
	ctx.r3.s64 = ctx.r7.s64 + 31636;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEA58"))) PPC_WEAK_FUNC(sub_82FBEA58);
PPC_FUNC_IMPL(__imp__sub_82FBEA58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEA5C"))) PPC_WEAK_FUNC(sub_82FBEA5C);
PPC_FUNC_IMPL(__imp__sub_82FBEA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEA60"))) PPC_WEAK_FUNC(sub_82FBEA60);
PPC_FUNC_IMPL(__imp__sub_82FBEA60) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r6,r10,-31656
	ctx.r6.s64 = ctx.r10.s64 + -31656;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27132
	ctx.r5.s64 = ctx.r9.s64 + -27132;
	// addi r4,r8,-1228
	ctx.r4.s64 = ctx.r8.s64 + -1228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31684
	ctx.r3.s64 = ctx.r7.s64 + 31684;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEAD8"))) PPC_WEAK_FUNC(sub_82FBEAD8);
PPC_FUNC_IMPL(__imp__sub_82FBEAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEADC"))) PPC_WEAK_FUNC(sub_82FBEADC);
PPC_FUNC_IMPL(__imp__sub_82FBEADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEAE0"))) PPC_WEAK_FUNC(sub_82FBEAE0);
PPC_FUNC_IMPL(__imp__sub_82FBEAE0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r6,r10,-31584
	ctx.r6.s64 = ctx.r10.s64 + -31584;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27132
	ctx.r5.s64 = ctx.r9.s64 + -27132;
	// addi r4,r8,-1212
	ctx.r4.s64 = ctx.r8.s64 + -1212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31732
	ctx.r3.s64 = ctx.r7.s64 + 31732;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,7
	r31.s64 = 7;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEB58"))) PPC_WEAK_FUNC(sub_82FBEB58);
PPC_FUNC_IMPL(__imp__sub_82FBEB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEB5C"))) PPC_WEAK_FUNC(sub_82FBEB5C);
PPC_FUNC_IMPL(__imp__sub_82FBEB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEB60"))) PPC_WEAK_FUNC(sub_82FBEB60);
PPC_FUNC_IMPL(__imp__sub_82FBEB60) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12096
	ctx.r5.s64 = ctx.r10.s64 + -12096;
	// addi r4,r9,-31416
	ctx.r4.s64 = ctx.r9.s64 + -31416;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1188
	ctx.r4.s64 = ctx.r7.s64 + -1188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,31780
	ctx.r3.s64 = ctx.r6.s64 + 31780;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBEBD8"))) PPC_WEAK_FUNC(sub_82FBEBD8);
PPC_FUNC_IMPL(__imp__sub_82FBEBD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEBDC"))) PPC_WEAK_FUNC(sub_82FBEBDC);
PPC_FUNC_IMPL(__imp__sub_82FBEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEBE0"))) PPC_WEAK_FUNC(sub_82FBEBE0);
PPC_FUNC_IMPL(__imp__sub_82FBEBE0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r6,r10,-31152
	ctx.r6.s64 = ctx.r10.s64 + -31152;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27132
	ctx.r5.s64 = ctx.r9.s64 + -27132;
	// addi r4,r8,-1176
	ctx.r4.s64 = ctx.r8.s64 + -1176;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31828
	ctx.r3.s64 = ctx.r7.s64 + 31828;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEC58"))) PPC_WEAK_FUNC(sub_82FBEC58);
PPC_FUNC_IMPL(__imp__sub_82FBEC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEC5C"))) PPC_WEAK_FUNC(sub_82FBEC5C);
PPC_FUNC_IMPL(__imp__sub_82FBEC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEC60"))) PPC_WEAK_FUNC(sub_82FBEC60);
PPC_FUNC_IMPL(__imp__sub_82FBEC60) {
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
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-27132
	ctx.r5.s64 = ctx.r10.s64 + -27132;
	// addi r4,r9,-1152
	ctx.r4.s64 = ctx.r9.s64 + -1152;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,31876
	ctx.r3.s64 = ctx.r8.s64 + 31876;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBECC4"))) PPC_WEAK_FUNC(sub_82FBECC4);
PPC_FUNC_IMPL(__imp__sub_82FBECC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBECC8"))) PPC_WEAK_FUNC(sub_82FBECC8);
PPC_FUNC_IMPL(__imp__sub_82FBECC8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-31104
	ctx.r7.s64 = ctx.r10.s64 + -31104;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-1132
	ctx.r4.s64 = ctx.r9.s64 + -1132;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31924
	ctx.r3.s64 = ctx.r8.s64 + 31924;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBED34"))) PPC_WEAK_FUNC(sub_82FBED34);
PPC_FUNC_IMPL(__imp__sub_82FBED34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBED38"))) PPC_WEAK_FUNC(sub_82FBED38);
PPC_FUNC_IMPL(__imp__sub_82FBED38) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-31056
	ctx.r6.s64 = ctx.r10.s64 + -31056;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31876
	ctx.r5.s64 = ctx.r9.s64 + 31876;
	// addi r4,r8,-1096
	ctx.r4.s64 = ctx.r8.s64 + -1096;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31972
	ctx.r3.s64 = ctx.r7.s64 + 31972;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEDB0"))) PPC_WEAK_FUNC(sub_82FBEDB0);
PPC_FUNC_IMPL(__imp__sub_82FBEDB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEDB4"))) PPC_WEAK_FUNC(sub_82FBEDB4);
PPC_FUNC_IMPL(__imp__sub_82FBEDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEDB8"))) PPC_WEAK_FUNC(sub_82FBEDB8);
PPC_FUNC_IMPL(__imp__sub_82FBEDB8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-31008
	ctx.r7.s64 = ctx.r10.s64 + -31008;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-1072
	ctx.r4.s64 = ctx.r9.s64 + -1072;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32020
	ctx.r3.s64 = ctx.r8.s64 + 32020;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEE24"))) PPC_WEAK_FUNC(sub_82FBEE24);
PPC_FUNC_IMPL(__imp__sub_82FBEE24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEE28"))) PPC_WEAK_FUNC(sub_82FBEE28);
PPC_FUNC_IMPL(__imp__sub_82FBEE28) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12044
	ctx.r5.s64 = ctx.r10.s64 + -12044;
	// addi r4,r9,-30960
	ctx.r4.s64 = ctx.r9.s64 + -30960;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,31876
	ctx.r5.s64 = ctx.r8.s64 + 31876;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1036
	ctx.r4.s64 = ctx.r7.s64 + -1036;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,32068
	ctx.r3.s64 = ctx.r6.s64 + 32068;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBEEA0"))) PPC_WEAK_FUNC(sub_82FBEEA0);
PPC_FUNC_IMPL(__imp__sub_82FBEEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEEA4"))) PPC_WEAK_FUNC(sub_82FBEEA4);
PPC_FUNC_IMPL(__imp__sub_82FBEEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEEA8"))) PPC_WEAK_FUNC(sub_82FBEEA8);
PPC_FUNC_IMPL(__imp__sub_82FBEEA8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30888
	ctx.r7.s64 = ctx.r10.s64 + -30888;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-1004
	ctx.r4.s64 = ctx.r9.s64 + -1004;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32116
	ctx.r3.s64 = ctx.r8.s64 + 32116;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBEF14"))) PPC_WEAK_FUNC(sub_82FBEF14);
PPC_FUNC_IMPL(__imp__sub_82FBEF14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEF18"))) PPC_WEAK_FUNC(sub_82FBEF18);
PPC_FUNC_IMPL(__imp__sub_82FBEF18) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12028
	ctx.r5.s64 = ctx.r10.s64 + -12028;
	// addi r4,r9,-30840
	ctx.r4.s64 = ctx.r9.s64 + -30840;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,31876
	ctx.r5.s64 = ctx.r8.s64 + 31876;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-968
	ctx.r4.s64 = ctx.r7.s64 + -968;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,32164
	ctx.r3.s64 = ctx.r6.s64 + 32164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBEF90"))) PPC_WEAK_FUNC(sub_82FBEF90);
PPC_FUNC_IMPL(__imp__sub_82FBEF90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBEF94"))) PPC_WEAK_FUNC(sub_82FBEF94);
PPC_FUNC_IMPL(__imp__sub_82FBEF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEF98"))) PPC_WEAK_FUNC(sub_82FBEF98);
PPC_FUNC_IMPL(__imp__sub_82FBEF98) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30768
	ctx.r7.s64 = ctx.r10.s64 + -30768;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-936
	ctx.r4.s64 = ctx.r9.s64 + -936;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32212
	ctx.r3.s64 = ctx.r8.s64 + 32212;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF004"))) PPC_WEAK_FUNC(sub_82FBF004);
PPC_FUNC_IMPL(__imp__sub_82FBF004) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF008"))) PPC_WEAK_FUNC(sub_82FBF008);
PPC_FUNC_IMPL(__imp__sub_82FBF008) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-12012
	ctx.r5.s64 = ctx.r10.s64 + -12012;
	// addi r4,r9,-30720
	ctx.r4.s64 = ctx.r9.s64 + -30720;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,31876
	ctx.r5.s64 = ctx.r8.s64 + 31876;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-900
	ctx.r4.s64 = ctx.r7.s64 + -900;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,32260
	ctx.r3.s64 = ctx.r6.s64 + 32260;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBF080"))) PPC_WEAK_FUNC(sub_82FBF080);
PPC_FUNC_IMPL(__imp__sub_82FBF080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF084"))) PPC_WEAK_FUNC(sub_82FBF084);
PPC_FUNC_IMPL(__imp__sub_82FBF084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF088"))) PPC_WEAK_FUNC(sub_82FBF088);
PPC_FUNC_IMPL(__imp__sub_82FBF088) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30640
	ctx.r7.s64 = ctx.r10.s64 + -30640;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-852
	ctx.r4.s64 = ctx.r9.s64 + -852;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32308
	ctx.r3.s64 = ctx.r8.s64 + 32308;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF0F4"))) PPC_WEAK_FUNC(sub_82FBF0F4);
PPC_FUNC_IMPL(__imp__sub_82FBF0F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF0F8"))) PPC_WEAK_FUNC(sub_82FBF0F8);
PPC_FUNC_IMPL(__imp__sub_82FBF0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,16256
	ctx.r9.s64 = ctx.r10.s64 + 16256;
	// lwz r11,-30544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30544);
	// stw r11,224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 224, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF110"))) PPC_WEAK_FUNC(sub_82FBF110);
PPC_FUNC_IMPL(__imp__sub_82FBF110) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,16256
	ctx.r6.s64 = ctx.r10.s64 + 16256;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-824
	ctx.r4.s64 = ctx.r8.s64 + -824;
	// addi r3,r7,32356
	ctx.r3.s64 = ctx.r7.s64 + 32356;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,-11760
	ctx.r9.s64 = ctx.r9.s64 + -11760;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF180"))) PPC_WEAK_FUNC(sub_82FBF180);
PPC_FUNC_IMPL(__imp__sub_82FBF180) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF184"))) PPC_WEAK_FUNC(sub_82FBF184);
PPC_FUNC_IMPL(__imp__sub_82FBF184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF188"))) PPC_WEAK_FUNC(sub_82FBF188);
PPC_FUNC_IMPL(__imp__sub_82FBF188) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-30536
	ctx.r7.s64 = ctx.r10.s64 + -30536;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20948
	ctx.r4.s64 = ctx.r9.s64 + -20948;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32404
	ctx.r3.s64 = ctx.r8.s64 + 32404;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF1F4"))) PPC_WEAK_FUNC(sub_82FBF1F4);
PPC_FUNC_IMPL(__imp__sub_82FBF1F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF1F8"))) PPC_WEAK_FUNC(sub_82FBF1F8);
PPC_FUNC_IMPL(__imp__sub_82FBF1F8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,-30416
	ctx.r7.s64 = ctx.r10.s64 + -30416;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20912
	ctx.r4.s64 = ctx.r9.s64 + -20912;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32452
	ctx.r3.s64 = ctx.r8.s64 + 32452;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF264"))) PPC_WEAK_FUNC(sub_82FBF264);
PPC_FUNC_IMPL(__imp__sub_82FBF264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF268"))) PPC_WEAK_FUNC(sub_82FBF268);
PPC_FUNC_IMPL(__imp__sub_82FBF268) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30320
	ctx.r7.s64 = ctx.r10.s64 + -30320;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-756
	ctx.r4.s64 = ctx.r9.s64 + -756;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32500
	ctx.r3.s64 = ctx.r8.s64 + 32500;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF2D4"))) PPC_WEAK_FUNC(sub_82FBF2D4);
PPC_FUNC_IMPL(__imp__sub_82FBF2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF2D8"))) PPC_WEAK_FUNC(sub_82FBF2D8);
PPC_FUNC_IMPL(__imp__sub_82FBF2D8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-30152
	ctx.r7.s64 = ctx.r10.s64 + -30152;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-728
	ctx.r4.s64 = ctx.r9.s64 + -728;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32548
	ctx.r3.s64 = ctx.r8.s64 + 32548;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF344"))) PPC_WEAK_FUNC(sub_82FBF344);
PPC_FUNC_IMPL(__imp__sub_82FBF344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF348"))) PPC_WEAK_FUNC(sub_82FBF348);
PPC_FUNC_IMPL(__imp__sub_82FBF348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r8,r9,16520
	ctx.r8.s64 = ctx.r9.s64 + 16520;
	// lwz r11,-30648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30648);
	// lwz r10,-30644(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30644);
	// stw r11,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, r11.u32);
	// stw r10,296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 296, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF36C"))) PPC_WEAK_FUNC(sub_82FBF36C);
PPC_FUNC_IMPL(__imp__sub_82FBF36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF370"))) PPC_WEAK_FUNC(sub_82FBF370);
PPC_FUNC_IMPL(__imp__sub_82FBF370) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-11940
	ctx.r9.s64 = r11.s64 + -11940;
	// addi r4,r10,16520
	ctx.r4.s64 = ctx.r10.s64 + 16520;
	// addi r5,r9,220
	ctx.r5.s64 = ctx.r9.s64 + 220;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r10,30
	ctx.r10.s64 = 30;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,28372
	ctx.r5.s64 = ctx.r8.s64 + 28372;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-380
	ctx.r4.s64 = ctx.r7.s64 + -380;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,32596
	ctx.r3.s64 = ctx.r6.s64 + 32596;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBF3E8"))) PPC_WEAK_FUNC(sub_82FBF3E8);
PPC_FUNC_IMPL(__imp__sub_82FBF3E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF3EC"))) PPC_WEAK_FUNC(sub_82FBF3EC);
PPC_FUNC_IMPL(__imp__sub_82FBF3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF3F0"))) PPC_WEAK_FUNC(sub_82FBF3F0);
PPC_FUNC_IMPL(__imp__sub_82FBF3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r8,r9,17240
	ctx.r8.s64 = ctx.r9.s64 + 17240;
	// lwz r11,-30104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30104);
	// lwz r10,-30100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30100);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF414"))) PPC_WEAK_FUNC(sub_82FBF414);
PPC_FUNC_IMPL(__imp__sub_82FBF414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF418"))) PPC_WEAK_FUNC(sub_82FBF418);
PPC_FUNC_IMPL(__imp__sub_82FBF418) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// addi r5,r10,17240
	ctx.r5.s64 = ctx.r10.s64 + 17240;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,28372
	ctx.r5.s64 = ctx.r8.s64 + 28372;
	// addi r4,r7,-364
	ctx.r4.s64 = ctx.r7.s64 + -364;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,32644
	ctx.r3.s64 = ctx.r6.s64 + 32644;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-11528
	ctx.r9.s64 = ctx.r9.s64 + -11528;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF494"))) PPC_WEAK_FUNC(sub_82FBF494);
PPC_FUNC_IMPL(__imp__sub_82FBF494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF498"))) PPC_WEAK_FUNC(sub_82FBF498);
PPC_FUNC_IMPL(__imp__sub_82FBF498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// lwz r11,-30096(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30096);
	// addi r7,r8,17288
	ctx.r7.s64 = ctx.r8.s64 + 17288;
	// lwz r10,-30092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30092);
	// lwz r9,-29940(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29940);
	// stw r11,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, r11.u32);
	// stw r10,80(r7)
	PPC_STORE_U32(ctx.r7.u32 + 80, ctx.r10.u32);
	// stw r9,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF4C8"))) PPC_WEAK_FUNC(sub_82FBF4C8);
PPC_FUNC_IMPL(__imp__sub_82FBF4C8) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-11440
	ctx.r9.s64 = r11.s64 + -11440;
	// addi r4,r10,17288
	ctx.r4.s64 = ctx.r10.s64 + 17288;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31929
	ctx.r6.s64 = -2092498944;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,32644
	ctx.r5.s64 = ctx.r8.s64 + 32644;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-288
	ctx.r4.s64 = ctx.r7.s64 + -288;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,32692
	ctx.r3.s64 = ctx.r6.s64 + 32692;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBF540"))) PPC_WEAK_FUNC(sub_82FBF540);
PPC_FUNC_IMPL(__imp__sub_82FBF540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF544"))) PPC_WEAK_FUNC(sub_82FBF544);
PPC_FUNC_IMPL(__imp__sub_82FBF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF548"))) PPC_WEAK_FUNC(sub_82FBF548);
PPC_FUNC_IMPL(__imp__sub_82FBF548) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-30088
	ctx.r6.s64 = ctx.r10.s64 + -30088;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31929
	ctx.r7.s64 = -2092498944;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,32692
	ctx.r5.s64 = ctx.r9.s64 + 32692;
	// addi r4,r8,-260
	ctx.r4.s64 = ctx.r8.s64 + -260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,32740
	ctx.r3.s64 = ctx.r7.s64 + 32740;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,6
	r31.s64 = 6;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF5C0"))) PPC_WEAK_FUNC(sub_82FBF5C0);
PPC_FUNC_IMPL(__imp__sub_82FBF5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF5C4"))) PPC_WEAK_FUNC(sub_82FBF5C4);
PPC_FUNC_IMPL(__imp__sub_82FBF5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF5C8"))) PPC_WEAK_FUNC(sub_82FBF5C8);
PPC_FUNC_IMPL(__imp__sub_82FBF5C8) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// addi r5,r10,-29936
	ctx.r5.s64 = ctx.r10.s64 + -29936;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,32644
	ctx.r5.s64 = ctx.r8.s64 + 32644;
	// addi r4,r7,-224
	ctx.r4.s64 = ctx.r7.s64 + -224;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-32748
	ctx.r3.s64 = ctx.r6.s64 + -32748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,11
	r31.s64 = 11;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-11320
	ctx.r9.s64 = ctx.r9.s64 + -11320;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF644"))) PPC_WEAK_FUNC(sub_82FBF644);
PPC_FUNC_IMPL(__imp__sub_82FBF644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF648"))) PPC_WEAK_FUNC(sub_82FBF648);
PPC_FUNC_IMPL(__imp__sub_82FBF648) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-11268
	ctx.r9.s64 = ctx.r10.s64 + -11268;
	// addi r4,r8,-192
	ctx.r4.s64 = ctx.r8.s64 + -192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-32700
	ctx.r3.s64 = ctx.r7.s64 + -32700;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF6AC"))) PPC_WEAK_FUNC(sub_82FBF6AC);
PPC_FUNC_IMPL(__imp__sub_82FBF6AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF6B0"))) PPC_WEAK_FUNC(sub_82FBF6B0);
PPC_FUNC_IMPL(__imp__sub_82FBF6B0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-29672
	ctx.r7.s64 = ctx.r10.s64 + -29672;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-88
	ctx.r4.s64 = ctx.r9.s64 + -88;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32652
	ctx.r3.s64 = ctx.r8.s64 + -32652;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF71C"))) PPC_WEAK_FUNC(sub_82FBF71C);
PPC_FUNC_IMPL(__imp__sub_82FBF71C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF720"))) PPC_WEAK_FUNC(sub_82FBF720);
PPC_FUNC_IMPL(__imp__sub_82FBF720) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-11240
	ctx.r9.s64 = r11.s64 + -11240;
	// addi r5,r10,-29568
	ctx.r5.s64 = ctx.r10.s64 + -29568;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-48
	ctx.r4.s64 = ctx.r8.s64 + -48;
	// addi r3,r7,-32604
	ctx.r3.s64 = ctx.r7.s64 + -32604;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF79C"))) PPC_WEAK_FUNC(sub_82FBF79C);
PPC_FUNC_IMPL(__imp__sub_82FBF79C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF7A0"))) PPC_WEAK_FUNC(sub_82FBF7A0);
PPC_FUNC_IMPL(__imp__sub_82FBF7A0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r6,r10,-29376
	ctx.r6.s64 = ctx.r10.s64 + -29376;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27132
	ctx.r5.s64 = ctx.r9.s64 + -27132;
	// addi r4,r8,-16
	ctx.r4.s64 = ctx.r8.s64 + -16;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-32556
	ctx.r3.s64 = ctx.r7.s64 + -32556;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF818"))) PPC_WEAK_FUNC(sub_82FBF818);
PPC_FUNC_IMPL(__imp__sub_82FBF818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF81C"))) PPC_WEAK_FUNC(sub_82FBF81C);
PPC_FUNC_IMPL(__imp__sub_82FBF81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF820"))) PPC_WEAK_FUNC(sub_82FBF820);
PPC_FUNC_IMPL(__imp__sub_82FBF820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,17552
	ctx.r9.s64 = ctx.r10.s64 + 17552;
	// lwz r11,-29572(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29572);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF838"))) PPC_WEAK_FUNC(sub_82FBF838);
PPC_FUNC_IMPL(__imp__sub_82FBF838) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,17552
	ctx.r6.s64 = ctx.r10.s64 + 17552;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// addi r3,r7,-32508
	ctx.r3.s64 = ctx.r7.s64 + -32508;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,-11104
	ctx.r9.s64 = ctx.r9.s64 + -11104;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF8A8"))) PPC_WEAK_FUNC(sub_82FBF8A8);
PPC_FUNC_IMPL(__imp__sub_82FBF8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF8AC"))) PPC_WEAK_FUNC(sub_82FBF8AC);
PPC_FUNC_IMPL(__imp__sub_82FBF8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF8B0"))) PPC_WEAK_FUNC(sub_82FBF8B0);
PPC_FUNC_IMPL(__imp__sub_82FBF8B0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-29352
	ctx.r7.s64 = ctx.r10.s64 + -29352;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32460
	ctx.r3.s64 = ctx.r8.s64 + -32460;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF91C"))) PPC_WEAK_FUNC(sub_82FBF91C);
PPC_FUNC_IMPL(__imp__sub_82FBF91C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF920"))) PPC_WEAK_FUNC(sub_82FBF920);
PPC_FUNC_IMPL(__imp__sub_82FBF920) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-29328
	ctx.r6.s64 = ctx.r10.s64 + -29328;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,27940
	ctx.r5.s64 = ctx.r9.s64 + 27940;
	// addi r4,r8,64
	ctx.r4.s64 = ctx.r8.s64 + 64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-32412
	ctx.r3.s64 = ctx.r7.s64 + -32412;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBF998"))) PPC_WEAK_FUNC(sub_82FBF998);
PPC_FUNC_IMPL(__imp__sub_82FBF998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF99C"))) PPC_WEAK_FUNC(sub_82FBF99C);
PPC_FUNC_IMPL(__imp__sub_82FBF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF9A0"))) PPC_WEAK_FUNC(sub_82FBF9A0);
PPC_FUNC_IMPL(__imp__sub_82FBF9A0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r6,r10,-29136
	ctx.r6.s64 = ctx.r10.s64 + -29136;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27132
	ctx.r5.s64 = ctx.r9.s64 + -27132;
	// addi r4,r8,84
	ctx.r4.s64 = ctx.r8.s64 + 84;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-32364
	ctx.r3.s64 = ctx.r7.s64 + -32364;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,9
	r31.s64 = 9;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFA18"))) PPC_WEAK_FUNC(sub_82FBFA18);
PPC_FUNC_IMPL(__imp__sub_82FBFA18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFA1C"))) PPC_WEAK_FUNC(sub_82FBFA1C);
PPC_FUNC_IMPL(__imp__sub_82FBFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFA20"))) PPC_WEAK_FUNC(sub_82FBFA20);
PPC_FUNC_IMPL(__imp__sub_82FBFA20) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-28920
	ctx.r7.s64 = ctx.r10.s64 + -28920;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,112
	ctx.r4.s64 = ctx.r9.s64 + 112;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32316
	ctx.r3.s64 = ctx.r8.s64 + -32316;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFA8C"))) PPC_WEAK_FUNC(sub_82FBFA8C);
PPC_FUNC_IMPL(__imp__sub_82FBFA8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFA90"))) PPC_WEAK_FUNC(sub_82FBFA90);
PPC_FUNC_IMPL(__imp__sub_82FBFA90) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-28800
	ctx.r7.s64 = ctx.r10.s64 + -28800;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,184
	ctx.r4.s64 = ctx.r9.s64 + 184;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32268
	ctx.r3.s64 = ctx.r8.s64 + -32268;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFAFC"))) PPC_WEAK_FUNC(sub_82FBFAFC);
PPC_FUNC_IMPL(__imp__sub_82FBFAFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFB00"))) PPC_WEAK_FUNC(sub_82FBFB00);
PPC_FUNC_IMPL(__imp__sub_82FBFB00) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-11080
	ctx.r5.s64 = ctx.r10.s64 + -11080;
	// addi r4,r9,-28728
	ctx.r4.s64 = ctx.r9.s64 + -28728;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-27132
	ctx.r5.s64 = ctx.r8.s64 + -27132;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,216
	ctx.r4.s64 = ctx.r7.s64 + 216;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-32220
	ctx.r3.s64 = ctx.r6.s64 + -32220;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBFB78"))) PPC_WEAK_FUNC(sub_82FBFB78);
PPC_FUNC_IMPL(__imp__sub_82FBFB78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFB7C"))) PPC_WEAK_FUNC(sub_82FBFB7C);
PPC_FUNC_IMPL(__imp__sub_82FBFB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFB80"))) PPC_WEAK_FUNC(sub_82FBFB80);
PPC_FUNC_IMPL(__imp__sub_82FBFB80) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-28152
	ctx.r6.s64 = ctx.r10.s64 + -28152;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28372
	ctx.r5.s64 = ctx.r9.s64 + 28372;
	// addi r4,r8,232
	ctx.r4.s64 = ctx.r8.s64 + 232;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-32172
	ctx.r3.s64 = ctx.r7.s64 + -32172;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFBF8"))) PPC_WEAK_FUNC(sub_82FBFBF8);
PPC_FUNC_IMPL(__imp__sub_82FBFBF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFBFC"))) PPC_WEAK_FUNC(sub_82FBFBFC);
PPC_FUNC_IMPL(__imp__sub_82FBFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFC00"))) PPC_WEAK_FUNC(sub_82FBFC00);
PPC_FUNC_IMPL(__imp__sub_82FBFC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r8,r9,17600
	ctx.r8.s64 = ctx.r9.s64 + 17600;
	// lwz r11,-28128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -28128);
	// lwz r10,-28124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28124);
	// stw r11,248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 248, r11.u32);
	// stw r11,272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 272, r11.u32);
	// stw r11,296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 296, r11.u32);
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, r11.u32);
	// stw r11,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, r11.u32);
	// stw r11,368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 368, r11.u32);
	// stw r10,392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 392, ctx.r10.u32);
	// stw r10,416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 416, ctx.r10.u32);
	// stw r10,440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 440, ctx.r10.u32);
	// stw r10,464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 464, ctx.r10.u32);
	// stw r10,488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 488, ctx.r10.u32);
	// stw r10,512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 512, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFC4C"))) PPC_WEAK_FUNC(sub_82FBFC4C);
PPC_FUNC_IMPL(__imp__sub_82FBFC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFC50"))) PPC_WEAK_FUNC(sub_82FBFC50);
PPC_FUNC_IMPL(__imp__sub_82FBFC50) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,17600
	ctx.r7.s64 = ctx.r10.s64 + 17600;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,26
	ctx.r6.s64 = 26;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,488
	ctx.r4.s64 = ctx.r9.s64 + 488;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-32124
	ctx.r3.s64 = ctx.r8.s64 + -32124;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFCBC"))) PPC_WEAK_FUNC(sub_82FBFCBC);
PPC_FUNC_IMPL(__imp__sub_82FBFCBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFCC0"))) PPC_WEAK_FUNC(sub_82FBFCC0);
PPC_FUNC_IMPL(__imp__sub_82FBFCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r8,r9,18224
	ctx.r8.s64 = ctx.r9.s64 + 18224;
	// lwz r11,-28128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -28128);
	// lwz r10,-28124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28124);
	// stw r11,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, r11.u32);
	// stw r11,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, r11.u32);
	// stw r11,368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 368, r11.u32);
	// stw r11,392(r8)
	PPC_STORE_U32(ctx.r8.u32 + 392, r11.u32);
	// stw r11,416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 416, r11.u32);
	// stw r11,440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 440, r11.u32);
	// stw r10,464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 464, ctx.r10.u32);
	// stw r10,488(r8)
	PPC_STORE_U32(ctx.r8.u32 + 488, ctx.r10.u32);
	// stw r10,512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 512, ctx.r10.u32);
	// stw r10,536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 536, ctx.r10.u32);
	// stw r10,560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 560, ctx.r10.u32);
	// stw r10,584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 584, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFD0C"))) PPC_WEAK_FUNC(sub_82FBFD0C);
PPC_FUNC_IMPL(__imp__sub_82FBFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFD10"))) PPC_WEAK_FUNC(sub_82FBFD10);
PPC_FUNC_IMPL(__imp__sub_82FBFD10) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// addi r5,r10,18224
	ctx.r5.s64 = ctx.r10.s64 + 18224;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29236
	ctx.r5.s64 = ctx.r8.s64 + 29236;
	// addi r4,r7,732
	ctx.r4.s64 = ctx.r7.s64 + 732;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-32076
	ctx.r3.s64 = ctx.r6.s64 + -32076;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,43
	r31.s64 = 43;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-10920
	ctx.r9.s64 = ctx.r9.s64 + -10920;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFD8C"))) PPC_WEAK_FUNC(sub_82FBFD8C);
PPC_FUNC_IMPL(__imp__sub_82FBFD8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFD90"))) PPC_WEAK_FUNC(sub_82FBFD90);
PPC_FUNC_IMPL(__imp__sub_82FBFD90) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r6,r10,-28120
	ctx.r6.s64 = ctx.r10.s64 + -28120;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-27132
	ctx.r5.s64 = ctx.r9.s64 + -27132;
	// addi r4,r8,756
	ctx.r4.s64 = ctx.r8.s64 + 756;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-32028
	ctx.r3.s64 = ctx.r7.s64 + -32028;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,4
	r31.s64 = 4;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFE08"))) PPC_WEAK_FUNC(sub_82FBFE08);
PPC_FUNC_IMPL(__imp__sub_82FBFE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFE0C"))) PPC_WEAK_FUNC(sub_82FBFE0C);
PPC_FUNC_IMPL(__imp__sub_82FBFE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFE10"))) PPC_WEAK_FUNC(sub_82FBFE10);
PPC_FUNC_IMPL(__imp__sub_82FBFE10) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-28024
	ctx.r6.s64 = ctx.r10.s64 + -28024;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28708
	ctx.r5.s64 = ctx.r9.s64 + 28708;
	// addi r4,r8,804
	ctx.r4.s64 = ctx.r8.s64 + 804;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-31980
	ctx.r3.s64 = ctx.r7.s64 + -31980;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFE88"))) PPC_WEAK_FUNC(sub_82FBFE88);
PPC_FUNC_IMPL(__imp__sub_82FBFE88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFE8C"))) PPC_WEAK_FUNC(sub_82FBFE8C);
PPC_FUNC_IMPL(__imp__sub_82FBFE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFE90"))) PPC_WEAK_FUNC(sub_82FBFE90);
PPC_FUNC_IMPL(__imp__sub_82FBFE90) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-27952
	ctx.r7.s64 = ctx.r10.s64 + -27952;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,844
	ctx.r4.s64 = ctx.r9.s64 + 844;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31932
	ctx.r3.s64 = ctx.r8.s64 + -31932;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFEFC"))) PPC_WEAK_FUNC(sub_82FBFEFC);
PPC_FUNC_IMPL(__imp__sub_82FBFEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFF00"))) PPC_WEAK_FUNC(sub_82FBFF00);
PPC_FUNC_IMPL(__imp__sub_82FBFF00) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-27880
	ctx.r7.s64 = ctx.r10.s64 + -27880;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,884
	ctx.r4.s64 = ctx.r9.s64 + 884;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31884
	ctx.r3.s64 = ctx.r8.s64 + -31884;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FBFF6C"))) PPC_WEAK_FUNC(sub_82FBFF6C);
PPC_FUNC_IMPL(__imp__sub_82FBFF6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFF70"))) PPC_WEAK_FUNC(sub_82FBFF70);
PPC_FUNC_IMPL(__imp__sub_82FBFF70) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-10880
	ctx.r5.s64 = ctx.r10.s64 + -10880;
	// addi r4,r9,-27808
	ctx.r4.s64 = ctx.r9.s64 + -27808;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,28372
	ctx.r5.s64 = ctx.r8.s64 + 28372;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,924
	ctx.r4.s64 = ctx.r7.s64 + 924;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31836
	ctx.r3.s64 = ctx.r6.s64 + -31836;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FBFFE8"))) PPC_WEAK_FUNC(sub_82FBFFE8);
PPC_FUNC_IMPL(__imp__sub_82FBFFE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFFEC"))) PPC_WEAK_FUNC(sub_82FBFFEC);
PPC_FUNC_IMPL(__imp__sub_82FBFFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFFF0"))) PPC_WEAK_FUNC(sub_82FBFFF0);
PPC_FUNC_IMPL(__imp__sub_82FBFFF0) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-10844
	ctx.r5.s64 = ctx.r10.s64 + -10844;
	// addi r4,r9,-27640
	ctx.r4.s64 = ctx.r9.s64 + -27640;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-31836
	ctx.r5.s64 = ctx.r8.s64 + -31836;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,952
	ctx.r4.s64 = ctx.r7.s64 + 952;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31788
	ctx.r3.s64 = ctx.r6.s64 + -31788;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0068"))) PPC_WEAK_FUNC(sub_82FC0068);
PPC_FUNC_IMPL(__imp__sub_82FC0068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC006C"))) PPC_WEAK_FUNC(sub_82FC006C);
PPC_FUNC_IMPL(__imp__sub_82FC006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0070"))) PPC_WEAK_FUNC(sub_82FC0070);
PPC_FUNC_IMPL(__imp__sub_82FC0070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r8,r9,19256
	ctx.r8.s64 = ctx.r9.s64 + 19256;
	// lwz r11,-27568(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -27568);
	// lwz r10,-27564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27564);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0094"))) PPC_WEAK_FUNC(sub_82FC0094);
PPC_FUNC_IMPL(__imp__sub_82FC0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0098"))) PPC_WEAK_FUNC(sub_82FC0098);
PPC_FUNC_IMPL(__imp__sub_82FC0098) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// addi r5,r10,19256
	ctx.r5.s64 = ctx.r10.s64 + 19256;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// addi r4,r7,1108
	ctx.r4.s64 = ctx.r7.s64 + 1108;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31740
	ctx.r3.s64 = ctx.r6.s64 + -31740;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,11
	r31.s64 = 11;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-10780
	ctx.r9.s64 = ctx.r9.s64 + -10780;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0114"))) PPC_WEAK_FUNC(sub_82FC0114);
PPC_FUNC_IMPL(__imp__sub_82FC0114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0118"))) PPC_WEAK_FUNC(sub_82FC0118);
PPC_FUNC_IMPL(__imp__sub_82FC0118) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-27560
	ctx.r6.s64 = ctx.r10.s64 + -27560;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,1132
	ctx.r4.s64 = ctx.r8.s64 + 1132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-31692
	ctx.r3.s64 = ctx.r7.s64 + -31692;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0190"))) PPC_WEAK_FUNC(sub_82FC0190);
PPC_FUNC_IMPL(__imp__sub_82FC0190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0194"))) PPC_WEAK_FUNC(sub_82FC0194);
PPC_FUNC_IMPL(__imp__sub_82FC0194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0198"))) PPC_WEAK_FUNC(sub_82FC0198);
PPC_FUNC_IMPL(__imp__sub_82FC0198) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-27368
	ctx.r7.s64 = ctx.r10.s64 + -27368;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,1164
	ctx.r4.s64 = ctx.r9.s64 + 1164;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-31644
	ctx.r3.s64 = ctx.r8.s64 + -31644;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0204"))) PPC_WEAK_FUNC(sub_82FC0204);
PPC_FUNC_IMPL(__imp__sub_82FC0204) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0208"))) PPC_WEAK_FUNC(sub_82FC0208);
PPC_FUNC_IMPL(__imp__sub_82FC0208) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-27320
	ctx.r6.s64 = ctx.r10.s64 + -27320;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,1192
	ctx.r4.s64 = ctx.r8.s64 + 1192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-31596
	ctx.r3.s64 = ctx.r7.s64 + -31596;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,11
	r31.s64 = 11;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0280"))) PPC_WEAK_FUNC(sub_82FC0280);
PPC_FUNC_IMPL(__imp__sub_82FC0280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0284"))) PPC_WEAK_FUNC(sub_82FC0284);
PPC_FUNC_IMPL(__imp__sub_82FC0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0288"))) PPC_WEAK_FUNC(sub_82FC0288);
PPC_FUNC_IMPL(__imp__sub_82FC0288) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-27056
	ctx.r6.s64 = ctx.r10.s64 + -27056;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,1212
	ctx.r4.s64 = ctx.r8.s64 + 1212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-31548
	ctx.r3.s64 = ctx.r7.s64 + -31548;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,13
	r31.s64 = 13;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0300"))) PPC_WEAK_FUNC(sub_82FC0300);
PPC_FUNC_IMPL(__imp__sub_82FC0300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0304"))) PPC_WEAK_FUNC(sub_82FC0304);
PPC_FUNC_IMPL(__imp__sub_82FC0304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0308"))) PPC_WEAK_FUNC(sub_82FC0308);
PPC_FUNC_IMPL(__imp__sub_82FC0308) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r6,r10,-10704
	ctx.r6.s64 = ctx.r10.s64 + -10704;
	// addi r5,r9,-26736
	ctx.r5.s64 = ctx.r9.s64 + -26736;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,1252
	ctx.r4.s64 = ctx.r8.s64 + 1252;
	// addi r3,r7,-31500
	ctx.r3.s64 = ctx.r7.s64 + -31500;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,4
	r31.s64 = 4;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0384"))) PPC_WEAK_FUNC(sub_82FC0384);
PPC_FUNC_IMPL(__imp__sub_82FC0384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0388"))) PPC_WEAK_FUNC(sub_82FC0388);
PPC_FUNC_IMPL(__imp__sub_82FC0388) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-10724
	ctx.r9.s64 = r11.s64 + -10724;
	// addi r4,r10,-26640
	ctx.r4.s64 = ctx.r10.s64 + -26640;
	// addi r5,r9,44
	ctx.r5.s64 = ctx.r9.s64 + 44;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r10,31
	ctx.r10.s64 = 31;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,1280
	ctx.r4.s64 = ctx.r7.s64 + 1280;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31452
	ctx.r3.s64 = ctx.r6.s64 + -31452;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0400"))) PPC_WEAK_FUNC(sub_82FC0400);
PPC_FUNC_IMPL(__imp__sub_82FC0400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0404"))) PPC_WEAK_FUNC(sub_82FC0404);
PPC_FUNC_IMPL(__imp__sub_82FC0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0408"))) PPC_WEAK_FUNC(sub_82FC0408);
PPC_FUNC_IMPL(__imp__sub_82FC0408) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-10456
	ctx.r5.s64 = ctx.r10.s64 + -10456;
	// addi r4,r9,-25896
	ctx.r4.s64 = ctx.r9.s64 + -25896;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,1304
	ctx.r4.s64 = ctx.r7.s64 + 1304;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31404
	ctx.r3.s64 = ctx.r6.s64 + -31404;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0480"))) PPC_WEAK_FUNC(sub_82FC0480);
PPC_FUNC_IMPL(__imp__sub_82FC0480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0484"))) PPC_WEAK_FUNC(sub_82FC0484);
PPC_FUNC_IMPL(__imp__sub_82FC0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0488"))) PPC_WEAK_FUNC(sub_82FC0488);
PPC_FUNC_IMPL(__imp__sub_82FC0488) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-10440
	ctx.r5.s64 = ctx.r10.s64 + -10440;
	// addi r4,r9,-25824
	ctx.r4.s64 = ctx.r9.s64 + -25824;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,1336
	ctx.r4.s64 = ctx.r7.s64 + 1336;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31356
	ctx.r3.s64 = ctx.r6.s64 + -31356;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0500"))) PPC_WEAK_FUNC(sub_82FC0500);
PPC_FUNC_IMPL(__imp__sub_82FC0500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0504"))) PPC_WEAK_FUNC(sub_82FC0504);
PPC_FUNC_IMPL(__imp__sub_82FC0504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0508"))) PPC_WEAK_FUNC(sub_82FC0508);
PPC_FUNC_IMPL(__imp__sub_82FC0508) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-10420
	ctx.r5.s64 = ctx.r10.s64 + -10420;
	// addi r4,r9,-25752
	ctx.r4.s64 = ctx.r9.s64 + -25752;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-3124
	ctx.r4.s64 = ctx.r7.s64 + -3124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31308
	ctx.r3.s64 = ctx.r6.s64 + -31308;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0580"))) PPC_WEAK_FUNC(sub_82FC0580);
PPC_FUNC_IMPL(__imp__sub_82FC0580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0584"))) PPC_WEAK_FUNC(sub_82FC0584);
PPC_FUNC_IMPL(__imp__sub_82FC0584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0588"))) PPC_WEAK_FUNC(sub_82FC0588);
PPC_FUNC_IMPL(__imp__sub_82FC0588) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r5,r10,-10372
	ctx.r5.s64 = ctx.r10.s64 + -10372;
	// addi r4,r9,-25584
	ctx.r4.s64 = ctx.r9.s64 + -25584;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,1372
	ctx.r4.s64 = ctx.r7.s64 + 1372;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31260
	ctx.r3.s64 = ctx.r6.s64 + -31260;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0600"))) PPC_WEAK_FUNC(sub_82FC0600);
PPC_FUNC_IMPL(__imp__sub_82FC0600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0604"))) PPC_WEAK_FUNC(sub_82FC0604);
PPC_FUNC_IMPL(__imp__sub_82FC0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0608"))) PPC_WEAK_FUNC(sub_82FC0608);
PPC_FUNC_IMPL(__imp__sub_82FC0608) {
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
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// addi r6,r10,-10284
	ctx.r6.s64 = ctx.r10.s64 + -10284;
	// addi r5,r9,-25488
	ctx.r5.s64 = ctx.r9.s64 + -25488;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,1392
	ctx.r4.s64 = ctx.r8.s64 + 1392;
	// addi r3,r7,-31212
	ctx.r3.s64 = ctx.r7.s64 + -31212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0684"))) PPC_WEAK_FUNC(sub_82FC0684);
PPC_FUNC_IMPL(__imp__sub_82FC0684) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0688"))) PPC_WEAK_FUNC(sub_82FC0688);
PPC_FUNC_IMPL(__imp__sub_82FC0688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,19520
	ctx.r9.s64 = ctx.r10.s64 + 19520;
	// lwz r11,-26740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26740);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC06A0"))) PPC_WEAK_FUNC(sub_82FC06A0);
PPC_FUNC_IMPL(__imp__sub_82FC06A0) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-10304
	ctx.r9.s64 = r11.s64 + -10304;
	// addi r4,r10,19520
	ctx.r4.s64 = ctx.r10.s64 + 19520;
	// addi r5,r9,80
	ctx.r5.s64 = ctx.r9.s64 + 80;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,1460
	ctx.r4.s64 = ctx.r7.s64 + 1460;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31164
	ctx.r3.s64 = ctx.r6.s64 + -31164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0718"))) PPC_WEAK_FUNC(sub_82FC0718);
PPC_FUNC_IMPL(__imp__sub_82FC0718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC071C"))) PPC_WEAK_FUNC(sub_82FC071C);
PPC_FUNC_IMPL(__imp__sub_82FC071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0720"))) PPC_WEAK_FUNC(sub_82FC0720);
PPC_FUNC_IMPL(__imp__sub_82FC0720) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-25368
	ctx.r6.s64 = ctx.r10.s64 + -25368;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,1480
	ctx.r4.s64 = ctx.r8.s64 + 1480;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-31116
	ctx.r3.s64 = ctx.r7.s64 + -31116;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,5
	r31.s64 = 5;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0798"))) PPC_WEAK_FUNC(sub_82FC0798);
PPC_FUNC_IMPL(__imp__sub_82FC0798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC079C"))) PPC_WEAK_FUNC(sub_82FC079C);
PPC_FUNC_IMPL(__imp__sub_82FC079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC07A0"))) PPC_WEAK_FUNC(sub_82FC07A0);
PPC_FUNC_IMPL(__imp__sub_82FC07A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31953
	ctx.r9.s64 = -2094071808;
	// lis r8,-31953
	ctx.r8.s64 = -2094071808;
	// lwz r11,-25248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25248);
	// addi r7,r8,19832
	ctx.r7.s64 = ctx.r8.s64 + 19832;
	// lwz r10,-25244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25244);
	// lwz r9,1656(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1656);
	// stw r11,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, r11.u32);
	// stw r10,128(r7)
	PPC_STORE_U32(ctx.r7.u32 + 128, ctx.r10.u32);
	// stw r9,152(r7)
	PPC_STORE_U32(ctx.r7.u32 + 152, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC07D0"))) PPC_WEAK_FUNC(sub_82FC07D0);
PPC_FUNC_IMPL(__imp__sub_82FC07D0) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-10108
	ctx.r9.s64 = r11.s64 + -10108;
	// addi r4,r10,19832
	ctx.r4.s64 = ctx.r10.s64 + 19832;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,1600
	ctx.r4.s64 = ctx.r7.s64 + 1600;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-31068
	ctx.r3.s64 = ctx.r6.s64 + -31068;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC0848"))) PPC_WEAK_FUNC(sub_82FC0848);
PPC_FUNC_IMPL(__imp__sub_82FC0848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC084C"))) PPC_WEAK_FUNC(sub_82FC084C);
PPC_FUNC_IMPL(__imp__sub_82FC084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0850"))) PPC_WEAK_FUNC(sub_82FC0850);
PPC_FUNC_IMPL(__imp__sub_82FC0850) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-25240
	ctx.r6.s64 = ctx.r10.s64 + -25240;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,1632
	ctx.r4.s64 = ctx.r8.s64 + 1632;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-31020
	ctx.r3.s64 = ctx.r7.s64 + -31020;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,10
	r31.s64 = 10;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC08C8"))) PPC_WEAK_FUNC(sub_82FC08C8);
PPC_FUNC_IMPL(__imp__sub_82FC08C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC08CC"))) PPC_WEAK_FUNC(sub_82FC08CC);
PPC_FUNC_IMPL(__imp__sub_82FC08CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC08D0"))) PPC_WEAK_FUNC(sub_82FC08D0);
PPC_FUNC_IMPL(__imp__sub_82FC08D0) {
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
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// lis r9,-31929
	ctx.r9.s64 = -2092498944;
	// addi r6,r10,-25000
	ctx.r6.s64 = ctx.r10.s64 + -25000;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29332
	ctx.r5.s64 = ctx.r9.s64 + 29332;
	// addi r4,r8,1660
	ctx.r4.s64 = ctx.r8.s64 + 1660;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-30972
	ctx.r3.s64 = ctx.r7.s64 + -30972;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,5
	r31.s64 = 5;
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
	// li r6,0
	ctx.r6.s64 = 0;
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

__attribute__((alias("__imp__sub_82FC0948"))) PPC_WEAK_FUNC(sub_82FC0948);
PPC_FUNC_IMPL(__imp__sub_82FC0948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC094C"))) PPC_WEAK_FUNC(sub_82FC094C);
PPC_FUNC_IMPL(__imp__sub_82FC094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0950"))) PPC_WEAK_FUNC(sub_82FC0950);
PPC_FUNC_IMPL(__imp__sub_82FC0950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31953
	r11.s64 = -2094071808;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r10,20096
	ctx.r9.s64 = ctx.r10.s64 + 20096;
	// lwz r11,-24880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24880);
	// stw r11,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0968"))) PPC_WEAK_FUNC(sub_82FC0968);
PPC_FUNC_IMPL(__imp__sub_82FC0968) {
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
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lis r10,-31953
	ctx.r10.s64 = -2094071808;
	// addi r9,r11,-9960
	ctx.r9.s64 = r11.s64 + -9960;
	// addi r4,r10,20096
	ctx.r4.s64 = ctx.r10.s64 + 20096;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// lis r8,-31929
	ctx.r8.s64 = -2092498944;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29332
	ctx.r5.s64 = ctx.r8.s64 + 29332;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,1964
	ctx.r4.s64 = ctx.r7.s64 + 1964;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-30924
	ctx.r3.s64 = ctx.r6.s64 + -30924;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82FC09E0"))) PPC_WEAK_FUNC(sub_82FC09E0);
PPC_FUNC_IMPL(__imp__sub_82FC09E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC09E4"))) PPC_WEAK_FUNC(sub_82FC09E4);
PPC_FUNC_IMPL(__imp__sub_82FC09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

