#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F69338"))) PPC_WEAK_FUNC(sub_82F69338);
PPC_FUNC_IMPL(__imp__sub_82F69338) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-25456
	ctx.r6.s64 = ctx.r10.s64 + -25456;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28260
	ctx.r5.s64 = ctx.r9.s64 + 28260;
	// addi r4,r8,4600
	ctx.r4.s64 = ctx.r8.s64 + 4600;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28308
	ctx.r3.s64 = ctx.r7.s64 + 28308;
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

__attribute__((alias("__imp__sub_82F693B0"))) PPC_WEAK_FUNC(sub_82F693B0);
PPC_FUNC_IMPL(__imp__sub_82F693B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F693B4"))) PPC_WEAK_FUNC(sub_82F693B4);
PPC_FUNC_IMPL(__imp__sub_82F693B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F693B8"))) PPC_WEAK_FUNC(sub_82F693B8);
PPC_FUNC_IMPL(__imp__sub_82F693B8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-25408
	ctx.r6.s64 = ctx.r10.s64 + -25408;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28260
	ctx.r5.s64 = ctx.r9.s64 + 28260;
	// addi r4,r8,4628
	ctx.r4.s64 = ctx.r8.s64 + 4628;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28356
	ctx.r3.s64 = ctx.r7.s64 + 28356;
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

__attribute__((alias("__imp__sub_82F69430"))) PPC_WEAK_FUNC(sub_82F69430);
PPC_FUNC_IMPL(__imp__sub_82F69430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69434"))) PPC_WEAK_FUNC(sub_82F69434);
PPC_FUNC_IMPL(__imp__sub_82F69434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69438"))) PPC_WEAK_FUNC(sub_82F69438);
PPC_FUNC_IMPL(__imp__sub_82F69438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,24752
	ctx.r9.s64 = ctx.r10.s64 + 24752;
	// lwz r11,-25288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25288);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69450"))) PPC_WEAK_FUNC(sub_82F69450);
PPC_FUNC_IMPL(__imp__sub_82F69450) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// addi r5,r10,24752
	ctx.r5.s64 = ctx.r10.s64 + 24752;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,28260
	ctx.r5.s64 = ctx.r8.s64 + 28260;
	// addi r4,r7,4656
	ctx.r4.s64 = ctx.r7.s64 + 4656;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,28404
	ctx.r3.s64 = ctx.r6.s64 + 28404;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,29300
	ctx.r9.s64 = ctx.r9.s64 + 29300;
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

__attribute__((alias("__imp__sub_82F694CC"))) PPC_WEAK_FUNC(sub_82F694CC);
PPC_FUNC_IMPL(__imp__sub_82F694CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F694D0"))) PPC_WEAK_FUNC(sub_82F694D0);
PPC_FUNC_IMPL(__imp__sub_82F694D0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-25284
	ctx.r6.s64 = ctx.r10.s64 + -25284;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28260
	ctx.r5.s64 = ctx.r9.s64 + 28260;
	// addi r4,r8,4688
	ctx.r4.s64 = ctx.r8.s64 + 4688;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28452
	ctx.r3.s64 = ctx.r7.s64 + 28452;
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

__attribute__((alias("__imp__sub_82F69548"))) PPC_WEAK_FUNC(sub_82F69548);
PPC_FUNC_IMPL(__imp__sub_82F69548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6954C"))) PPC_WEAK_FUNC(sub_82F6954C);
PPC_FUNC_IMPL(__imp__sub_82F6954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69550"))) PPC_WEAK_FUNC(sub_82F69550);
PPC_FUNC_IMPL(__imp__sub_82F69550) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-25232
	ctx.r6.s64 = ctx.r10.s64 + -25232;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,4724
	ctx.r4.s64 = ctx.r8.s64 + 4724;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28500
	ctx.r3.s64 = ctx.r7.s64 + 28500;
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

__attribute__((alias("__imp__sub_82F695C8"))) PPC_WEAK_FUNC(sub_82F695C8);
PPC_FUNC_IMPL(__imp__sub_82F695C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F695CC"))) PPC_WEAK_FUNC(sub_82F695CC);
PPC_FUNC_IMPL(__imp__sub_82F695CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F695D0"))) PPC_WEAK_FUNC(sub_82F695D0);
PPC_FUNC_IMPL(__imp__sub_82F695D0) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,31332
	ctx.r5.s64 = ctx.r10.s64 + 31332;
	// addi r4,r9,4744
	ctx.r4.s64 = ctx.r9.s64 + 4744;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,28548
	ctx.r3.s64 = ctx.r8.s64 + 28548;
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

__attribute__((alias("__imp__sub_82F69634"))) PPC_WEAK_FUNC(sub_82F69634);
PPC_FUNC_IMPL(__imp__sub_82F69634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69638"))) PPC_WEAK_FUNC(sub_82F69638);
PPC_FUNC_IMPL(__imp__sub_82F69638) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-25088
	ctx.r6.s64 = ctx.r10.s64 + -25088;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,4772
	ctx.r4.s64 = ctx.r8.s64 + 4772;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28596
	ctx.r3.s64 = ctx.r7.s64 + 28596;
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

__attribute__((alias("__imp__sub_82F696B0"))) PPC_WEAK_FUNC(sub_82F696B0);
PPC_FUNC_IMPL(__imp__sub_82F696B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F696B4"))) PPC_WEAK_FUNC(sub_82F696B4);
PPC_FUNC_IMPL(__imp__sub_82F696B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F696B8"))) PPC_WEAK_FUNC(sub_82F696B8);
PPC_FUNC_IMPL(__imp__sub_82F696B8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-24920
	ctx.r7.s64 = ctx.r10.s64 + -24920;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,4796
	ctx.r4.s64 = ctx.r9.s64 + 4796;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,28644
	ctx.r3.s64 = ctx.r8.s64 + 28644;
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

__attribute__((alias("__imp__sub_82F69724"))) PPC_WEAK_FUNC(sub_82F69724);
PPC_FUNC_IMPL(__imp__sub_82F69724) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69728"))) PPC_WEAK_FUNC(sub_82F69728);
PPC_FUNC_IMPL(__imp__sub_82F69728) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-24800
	ctx.r7.s64 = ctx.r10.s64 + -24800;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,4840
	ctx.r4.s64 = ctx.r9.s64 + 4840;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,28692
	ctx.r3.s64 = ctx.r8.s64 + 28692;
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

__attribute__((alias("__imp__sub_82F69794"))) PPC_WEAK_FUNC(sub_82F69794);
PPC_FUNC_IMPL(__imp__sub_82F69794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69798"))) PPC_WEAK_FUNC(sub_82F69798);
PPC_FUNC_IMPL(__imp__sub_82F69798) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-24680
	ctx.r7.s64 = ctx.r10.s64 + -24680;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,4876
	ctx.r4.s64 = ctx.r9.s64 + 4876;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,28740
	ctx.r3.s64 = ctx.r8.s64 + 28740;
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

__attribute__((alias("__imp__sub_82F69804"))) PPC_WEAK_FUNC(sub_82F69804);
PPC_FUNC_IMPL(__imp__sub_82F69804) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69808"))) PPC_WEAK_FUNC(sub_82F69808);
PPC_FUNC_IMPL(__imp__sub_82F69808) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-24488
	ctx.r6.s64 = ctx.r10.s64 + -24488;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,4920
	ctx.r4.s64 = ctx.r8.s64 + 4920;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28788
	ctx.r3.s64 = ctx.r7.s64 + 28788;
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

__attribute__((alias("__imp__sub_82F69880"))) PPC_WEAK_FUNC(sub_82F69880);
PPC_FUNC_IMPL(__imp__sub_82F69880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69884"))) PPC_WEAK_FUNC(sub_82F69884);
PPC_FUNC_IMPL(__imp__sub_82F69884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69888"))) PPC_WEAK_FUNC(sub_82F69888);
PPC_FUNC_IMPL(__imp__sub_82F69888) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-24344
	ctx.r6.s64 = ctx.r10.s64 + -24344;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,4948
	ctx.r4.s64 = ctx.r8.s64 + 4948;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28836
	ctx.r3.s64 = ctx.r7.s64 + 28836;
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

__attribute__((alias("__imp__sub_82F69900"))) PPC_WEAK_FUNC(sub_82F69900);
PPC_FUNC_IMPL(__imp__sub_82F69900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69904"))) PPC_WEAK_FUNC(sub_82F69904);
PPC_FUNC_IMPL(__imp__sub_82F69904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69908"))) PPC_WEAK_FUNC(sub_82F69908);
PPC_FUNC_IMPL(__imp__sub_82F69908) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-24224
	ctx.r6.s64 = ctx.r10.s64 + -24224;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,4968
	ctx.r4.s64 = ctx.r8.s64 + 4968;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28884
	ctx.r3.s64 = ctx.r7.s64 + 28884;
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

__attribute__((alias("__imp__sub_82F69980"))) PPC_WEAK_FUNC(sub_82F69980);
PPC_FUNC_IMPL(__imp__sub_82F69980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69984"))) PPC_WEAK_FUNC(sub_82F69984);
PPC_FUNC_IMPL(__imp__sub_82F69984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69988"))) PPC_WEAK_FUNC(sub_82F69988);
PPC_FUNC_IMPL(__imp__sub_82F69988) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-24056
	ctx.r6.s64 = ctx.r10.s64 + -24056;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,4996
	ctx.r4.s64 = ctx.r8.s64 + 4996;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28932
	ctx.r3.s64 = ctx.r7.s64 + 28932;
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

__attribute__((alias("__imp__sub_82F69A00"))) PPC_WEAK_FUNC(sub_82F69A00);
PPC_FUNC_IMPL(__imp__sub_82F69A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69A04"))) PPC_WEAK_FUNC(sub_82F69A04);
PPC_FUNC_IMPL(__imp__sub_82F69A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69A08"))) PPC_WEAK_FUNC(sub_82F69A08);
PPC_FUNC_IMPL(__imp__sub_82F69A08) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23960
	ctx.r6.s64 = ctx.r10.s64 + -23960;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,5024
	ctx.r4.s64 = ctx.r8.s64 + 5024;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,28980
	ctx.r3.s64 = ctx.r7.s64 + 28980;
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

__attribute__((alias("__imp__sub_82F69A80"))) PPC_WEAK_FUNC(sub_82F69A80);
PPC_FUNC_IMPL(__imp__sub_82F69A80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69A84"))) PPC_WEAK_FUNC(sub_82F69A84);
PPC_FUNC_IMPL(__imp__sub_82F69A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69A88"))) PPC_WEAK_FUNC(sub_82F69A88);
PPC_FUNC_IMPL(__imp__sub_82F69A88) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23792
	ctx.r6.s64 = ctx.r10.s64 + -23792;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,5052
	ctx.r4.s64 = ctx.r8.s64 + 5052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29028
	ctx.r3.s64 = ctx.r7.s64 + 29028;
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

__attribute__((alias("__imp__sub_82F69B00"))) PPC_WEAK_FUNC(sub_82F69B00);
PPC_FUNC_IMPL(__imp__sub_82F69B00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69B04"))) PPC_WEAK_FUNC(sub_82F69B04);
PPC_FUNC_IMPL(__imp__sub_82F69B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69B08"))) PPC_WEAK_FUNC(sub_82F69B08);
PPC_FUNC_IMPL(__imp__sub_82F69B08) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23576
	ctx.r6.s64 = ctx.r10.s64 + -23576;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,28548
	ctx.r5.s64 = ctx.r9.s64 + 28548;
	// addi r4,r8,5080
	ctx.r4.s64 = ctx.r8.s64 + 5080;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29076
	ctx.r3.s64 = ctx.r7.s64 + 29076;
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

__attribute__((alias("__imp__sub_82F69B80"))) PPC_WEAK_FUNC(sub_82F69B80);
PPC_FUNC_IMPL(__imp__sub_82F69B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69B84"))) PPC_WEAK_FUNC(sub_82F69B84);
PPC_FUNC_IMPL(__imp__sub_82F69B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69B88"))) PPC_WEAK_FUNC(sub_82F69B88);
PPC_FUNC_IMPL(__imp__sub_82F69B88) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-23432
	ctx.r7.s64 = ctx.r10.s64 + -23432;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,5112
	ctx.r4.s64 = ctx.r9.s64 + 5112;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29124
	ctx.r3.s64 = ctx.r8.s64 + 29124;
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

__attribute__((alias("__imp__sub_82F69BF4"))) PPC_WEAK_FUNC(sub_82F69BF4);
PPC_FUNC_IMPL(__imp__sub_82F69BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69BF8"))) PPC_WEAK_FUNC(sub_82F69BF8);
PPC_FUNC_IMPL(__imp__sub_82F69BF8) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,31332
	ctx.r5.s64 = ctx.r10.s64 + 31332;
	// addi r4,r9,5136
	ctx.r4.s64 = ctx.r9.s64 + 5136;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,29172
	ctx.r3.s64 = ctx.r8.s64 + 29172;
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

__attribute__((alias("__imp__sub_82F69C5C"))) PPC_WEAK_FUNC(sub_82F69C5C);
PPC_FUNC_IMPL(__imp__sub_82F69C5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69C60"))) PPC_WEAK_FUNC(sub_82F69C60);
PPC_FUNC_IMPL(__imp__sub_82F69C60) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23360
	ctx.r6.s64 = ctx.r10.s64 + -23360;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5160
	ctx.r4.s64 = ctx.r8.s64 + 5160;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29220
	ctx.r3.s64 = ctx.r7.s64 + 29220;
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

__attribute__((alias("__imp__sub_82F69CD8"))) PPC_WEAK_FUNC(sub_82F69CD8);
PPC_FUNC_IMPL(__imp__sub_82F69CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69CDC"))) PPC_WEAK_FUNC(sub_82F69CDC);
PPC_FUNC_IMPL(__imp__sub_82F69CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69CE0"))) PPC_WEAK_FUNC(sub_82F69CE0);
PPC_FUNC_IMPL(__imp__sub_82F69CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,24824
	ctx.r9.s64 = ctx.r10.s64 + 24824;
	// lwz r11,-27384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -27384);
	// stw r11,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69CF8"))) PPC_WEAK_FUNC(sub_82F69CF8);
PPC_FUNC_IMPL(__imp__sub_82F69CF8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,24824
	ctx.r6.s64 = ctx.r10.s64 + 24824;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5276
	ctx.r4.s64 = ctx.r8.s64 + 5276;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29268
	ctx.r3.s64 = ctx.r7.s64 + 29268;
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

__attribute__((alias("__imp__sub_82F69D70"))) PPC_WEAK_FUNC(sub_82F69D70);
PPC_FUNC_IMPL(__imp__sub_82F69D70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69D74"))) PPC_WEAK_FUNC(sub_82F69D74);
PPC_FUNC_IMPL(__imp__sub_82F69D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69D78"))) PPC_WEAK_FUNC(sub_82F69D78);
PPC_FUNC_IMPL(__imp__sub_82F69D78) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23192
	ctx.r6.s64 = ctx.r10.s64 + -23192;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5308
	ctx.r4.s64 = ctx.r8.s64 + 5308;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29316
	ctx.r3.s64 = ctx.r7.s64 + 29316;
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

__attribute__((alias("__imp__sub_82F69DF0"))) PPC_WEAK_FUNC(sub_82F69DF0);
PPC_FUNC_IMPL(__imp__sub_82F69DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69DF4"))) PPC_WEAK_FUNC(sub_82F69DF4);
PPC_FUNC_IMPL(__imp__sub_82F69DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69DF8"))) PPC_WEAK_FUNC(sub_82F69DF8);
PPC_FUNC_IMPL(__imp__sub_82F69DF8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23120
	ctx.r6.s64 = ctx.r10.s64 + -23120;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5344
	ctx.r4.s64 = ctx.r8.s64 + 5344;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29364
	ctx.r3.s64 = ctx.r7.s64 + 29364;
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

__attribute__((alias("__imp__sub_82F69E70"))) PPC_WEAK_FUNC(sub_82F69E70);
PPC_FUNC_IMPL(__imp__sub_82F69E70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69E74"))) PPC_WEAK_FUNC(sub_82F69E74);
PPC_FUNC_IMPL(__imp__sub_82F69E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69E78"))) PPC_WEAK_FUNC(sub_82F69E78);
PPC_FUNC_IMPL(__imp__sub_82F69E78) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-23048
	ctx.r6.s64 = ctx.r10.s64 + -23048;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5380
	ctx.r4.s64 = ctx.r8.s64 + 5380;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29412
	ctx.r3.s64 = ctx.r7.s64 + 29412;
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

__attribute__((alias("__imp__sub_82F69EF0"))) PPC_WEAK_FUNC(sub_82F69EF0);
PPC_FUNC_IMPL(__imp__sub_82F69EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69EF4"))) PPC_WEAK_FUNC(sub_82F69EF4);
PPC_FUNC_IMPL(__imp__sub_82F69EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69EF8"))) PPC_WEAK_FUNC(sub_82F69EF8);
PPC_FUNC_IMPL(__imp__sub_82F69EF8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-22904
	ctx.r6.s64 = ctx.r10.s64 + -22904;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5404
	ctx.r4.s64 = ctx.r8.s64 + 5404;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29460
	ctx.r3.s64 = ctx.r7.s64 + 29460;
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

__attribute__((alias("__imp__sub_82F69F70"))) PPC_WEAK_FUNC(sub_82F69F70);
PPC_FUNC_IMPL(__imp__sub_82F69F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69F74"))) PPC_WEAK_FUNC(sub_82F69F74);
PPC_FUNC_IMPL(__imp__sub_82F69F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69F78"))) PPC_WEAK_FUNC(sub_82F69F78);
PPC_FUNC_IMPL(__imp__sub_82F69F78) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-22712
	ctx.r6.s64 = ctx.r10.s64 + -22712;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29172
	ctx.r5.s64 = ctx.r9.s64 + 29172;
	// addi r4,r8,5424
	ctx.r4.s64 = ctx.r8.s64 + 5424;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29508
	ctx.r3.s64 = ctx.r7.s64 + 29508;
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

__attribute__((alias("__imp__sub_82F69FF0"))) PPC_WEAK_FUNC(sub_82F69FF0);
PPC_FUNC_IMPL(__imp__sub_82F69FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F69FF4"))) PPC_WEAK_FUNC(sub_82F69FF4);
PPC_FUNC_IMPL(__imp__sub_82F69FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F69FF8"))) PPC_WEAK_FUNC(sub_82F69FF8);
PPC_FUNC_IMPL(__imp__sub_82F69FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25088
	ctx.r9.s64 = ctx.r10.s64 + 25088;
	// lwz r11,-25236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25236);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A010"))) PPC_WEAK_FUNC(sub_82F6A010);
PPC_FUNC_IMPL(__imp__sub_82F6A010) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// addi r5,r10,25088
	ctx.r5.s64 = ctx.r10.s64 + 25088;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,29172
	ctx.r5.s64 = ctx.r8.s64 + 29172;
	// addi r4,r7,5560
	ctx.r4.s64 = ctx.r7.s64 + 5560;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,29556
	ctx.r3.s64 = ctx.r6.s64 + 29556;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,29336
	ctx.r9.s64 = ctx.r9.s64 + 29336;
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

__attribute__((alias("__imp__sub_82F6A08C"))) PPC_WEAK_FUNC(sub_82F6A08C);
PPC_FUNC_IMPL(__imp__sub_82F6A08C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A090"))) PPC_WEAK_FUNC(sub_82F6A090);
PPC_FUNC_IMPL(__imp__sub_82F6A090) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,29428
	ctx.r9.s64 = ctx.r10.s64 + 29428;
	// addi r5,r8,31332
	ctx.r5.s64 = ctx.r8.s64 + 31332;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r7,5588
	ctx.r4.s64 = ctx.r7.s64 + 5588;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,29604
	ctx.r3.s64 = ctx.r6.s64 + 29604;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
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

__attribute__((alias("__imp__sub_82F6A0F8"))) PPC_WEAK_FUNC(sub_82F6A0F8);
PPC_FUNC_IMPL(__imp__sub_82F6A0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A0FC"))) PPC_WEAK_FUNC(sub_82F6A0FC);
PPC_FUNC_IMPL(__imp__sub_82F6A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A100"))) PPC_WEAK_FUNC(sub_82F6A100);
PPC_FUNC_IMPL(__imp__sub_82F6A100) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-22604
	ctx.r7.s64 = ctx.r10.s64 + -22604;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,5604
	ctx.r4.s64 = ctx.r9.s64 + 5604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29652
	ctx.r3.s64 = ctx.r8.s64 + 29652;
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

__attribute__((alias("__imp__sub_82F6A16C"))) PPC_WEAK_FUNC(sub_82F6A16C);
PPC_FUNC_IMPL(__imp__sub_82F6A16C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A170"))) PPC_WEAK_FUNC(sub_82F6A170);
PPC_FUNC_IMPL(__imp__sub_82F6A170) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,5632
	ctx.r4.s64 = ctx.r10.s64 + 5632;
	// addi r3,r9,29700
	ctx.r3.s64 = ctx.r9.s64 + 29700;
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

__attribute__((alias("__imp__sub_82F6A1D0"))) PPC_WEAK_FUNC(sub_82F6A1D0);
PPC_FUNC_IMPL(__imp__sub_82F6A1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A1D4"))) PPC_WEAK_FUNC(sub_82F6A1D4);
PPC_FUNC_IMPL(__imp__sub_82F6A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A1D8"))) PPC_WEAK_FUNC(sub_82F6A1D8);
PPC_FUNC_IMPL(__imp__sub_82F6A1D8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-22576
	ctx.r6.s64 = ctx.r10.s64 + -22576;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29604
	ctx.r5.s64 = ctx.r9.s64 + 29604;
	// addi r4,r8,5652
	ctx.r4.s64 = ctx.r8.s64 + 5652;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29748
	ctx.r3.s64 = ctx.r7.s64 + 29748;
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

__attribute__((alias("__imp__sub_82F6A250"))) PPC_WEAK_FUNC(sub_82F6A250);
PPC_FUNC_IMPL(__imp__sub_82F6A250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A254"))) PPC_WEAK_FUNC(sub_82F6A254);
PPC_FUNC_IMPL(__imp__sub_82F6A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A258"))) PPC_WEAK_FUNC(sub_82F6A258);
PPC_FUNC_IMPL(__imp__sub_82F6A258) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-22504
	ctx.r6.s64 = ctx.r10.s64 + -22504;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29604
	ctx.r5.s64 = ctx.r9.s64 + 29604;
	// addi r4,r8,5672
	ctx.r4.s64 = ctx.r8.s64 + 5672;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29796
	ctx.r3.s64 = ctx.r7.s64 + 29796;
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

__attribute__((alias("__imp__sub_82F6A2D0"))) PPC_WEAK_FUNC(sub_82F6A2D0);
PPC_FUNC_IMPL(__imp__sub_82F6A2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A2D4"))) PPC_WEAK_FUNC(sub_82F6A2D4);
PPC_FUNC_IMPL(__imp__sub_82F6A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A2D8"))) PPC_WEAK_FUNC(sub_82F6A2D8);
PPC_FUNC_IMPL(__imp__sub_82F6A2D8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-22336
	ctx.r6.s64 = ctx.r10.s64 + -22336;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,5696
	ctx.r4.s64 = ctx.r8.s64 + 5696;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29844
	ctx.r3.s64 = ctx.r7.s64 + 29844;
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
	// li r8,1
	ctx.r8.s64 = 1;
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

__attribute__((alias("__imp__sub_82F6A350"))) PPC_WEAK_FUNC(sub_82F6A350);
PPC_FUNC_IMPL(__imp__sub_82F6A350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A354"))) PPC_WEAK_FUNC(sub_82F6A354);
PPC_FUNC_IMPL(__imp__sub_82F6A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A358"))) PPC_WEAK_FUNC(sub_82F6A358);
PPC_FUNC_IMPL(__imp__sub_82F6A358) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-22264
	ctx.r6.s64 = ctx.r10.s64 + -22264;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29604
	ctx.r5.s64 = ctx.r9.s64 + 29604;
	// addi r4,r8,5728
	ctx.r4.s64 = ctx.r8.s64 + 5728;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,29892
	ctx.r3.s64 = ctx.r7.s64 + 29892;
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
	// li r8,1
	ctx.r8.s64 = 1;
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

__attribute__((alias("__imp__sub_82F6A3D0"))) PPC_WEAK_FUNC(sub_82F6A3D0);
PPC_FUNC_IMPL(__imp__sub_82F6A3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A3D4"))) PPC_WEAK_FUNC(sub_82F6A3D4);
PPC_FUNC_IMPL(__imp__sub_82F6A3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A3D8"))) PPC_WEAK_FUNC(sub_82F6A3D8);
PPC_FUNC_IMPL(__imp__sub_82F6A3D8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-22096
	ctx.r7.s64 = ctx.r10.s64 + -22096;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,5752
	ctx.r4.s64 = ctx.r9.s64 + 5752;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29940
	ctx.r3.s64 = ctx.r8.s64 + 29940;
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

__attribute__((alias("__imp__sub_82F6A444"))) PPC_WEAK_FUNC(sub_82F6A444);
PPC_FUNC_IMPL(__imp__sub_82F6A444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A448"))) PPC_WEAK_FUNC(sub_82F6A448);
PPC_FUNC_IMPL(__imp__sub_82F6A448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25280
	ctx.r9.s64 = ctx.r10.s64 + 25280;
	// lwz r11,-22612(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22612);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A460"))) PPC_WEAK_FUNC(sub_82F6A460);
PPC_FUNC_IMPL(__imp__sub_82F6A460) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,25280
	ctx.r7.s64 = ctx.r10.s64 + 25280;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,5788
	ctx.r4.s64 = ctx.r9.s64 + 5788;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,29988
	ctx.r3.s64 = ctx.r8.s64 + 29988;
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

__attribute__((alias("__imp__sub_82F6A4CC"))) PPC_WEAK_FUNC(sub_82F6A4CC);
PPC_FUNC_IMPL(__imp__sub_82F6A4CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A4D0"))) PPC_WEAK_FUNC(sub_82F6A4D0);
PPC_FUNC_IMPL(__imp__sub_82F6A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25328
	ctx.r9.s64 = ctx.r10.s64 + 25328;
	// lwz r11,-22608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22608);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A4E8"))) PPC_WEAK_FUNC(sub_82F6A4E8);
PPC_FUNC_IMPL(__imp__sub_82F6A4E8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,25328
	ctx.r7.s64 = ctx.r10.s64 + 25328;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,5824
	ctx.r4.s64 = ctx.r9.s64 + 5824;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30036
	ctx.r3.s64 = ctx.r8.s64 + 30036;
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

__attribute__((alias("__imp__sub_82F6A554"))) PPC_WEAK_FUNC(sub_82F6A554);
PPC_FUNC_IMPL(__imp__sub_82F6A554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A558"))) PPC_WEAK_FUNC(sub_82F6A558);
PPC_FUNC_IMPL(__imp__sub_82F6A558) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-22024
	ctx.r7.s64 = ctx.r10.s64 + -22024;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,5860
	ctx.r4.s64 = ctx.r9.s64 + 5860;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30084
	ctx.r3.s64 = ctx.r8.s64 + 30084;
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

__attribute__((alias("__imp__sub_82F6A5C4"))) PPC_WEAK_FUNC(sub_82F6A5C4);
PPC_FUNC_IMPL(__imp__sub_82F6A5C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A5C8"))) PPC_WEAK_FUNC(sub_82F6A5C8);
PPC_FUNC_IMPL(__imp__sub_82F6A5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25376
	ctx.r9.s64 = ctx.r10.s64 + 25376;
	// lwz r11,-22616(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22616);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A5E0"))) PPC_WEAK_FUNC(sub_82F6A5E0);
PPC_FUNC_IMPL(__imp__sub_82F6A5E0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,25376
	ctx.r6.s64 = ctx.r10.s64 + 25376;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,29604
	ctx.r5.s64 = ctx.r9.s64 + 29604;
	// addi r4,r8,5896
	ctx.r4.s64 = ctx.r8.s64 + 5896;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30132
	ctx.r3.s64 = ctx.r7.s64 + 30132;
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

__attribute__((alias("__imp__sub_82F6A658"))) PPC_WEAK_FUNC(sub_82F6A658);
PPC_FUNC_IMPL(__imp__sub_82F6A658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A65C"))) PPC_WEAK_FUNC(sub_82F6A65C);
PPC_FUNC_IMPL(__imp__sub_82F6A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A660"))) PPC_WEAK_FUNC(sub_82F6A660);
PPC_FUNC_IMPL(__imp__sub_82F6A660) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,31332
	ctx.r5.s64 = ctx.r10.s64 + 31332;
	// addi r4,r9,5916
	ctx.r4.s64 = ctx.r9.s64 + 5916;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,30180
	ctx.r3.s64 = ctx.r8.s64 + 30180;
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

__attribute__((alias("__imp__sub_82F6A6C4"))) PPC_WEAK_FUNC(sub_82F6A6C4);
PPC_FUNC_IMPL(__imp__sub_82F6A6C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A6C8"))) PPC_WEAK_FUNC(sub_82F6A6C8);
PPC_FUNC_IMPL(__imp__sub_82F6A6C8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21976
	ctx.r6.s64 = ctx.r10.s64 + -21976;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30180
	ctx.r5.s64 = ctx.r9.s64 + 30180;
	// addi r4,r8,5964
	ctx.r4.s64 = ctx.r8.s64 + 5964;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30228
	ctx.r3.s64 = ctx.r7.s64 + 30228;
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

__attribute__((alias("__imp__sub_82F6A740"))) PPC_WEAK_FUNC(sub_82F6A740);
PPC_FUNC_IMPL(__imp__sub_82F6A740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A744"))) PPC_WEAK_FUNC(sub_82F6A744);
PPC_FUNC_IMPL(__imp__sub_82F6A744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A748"))) PPC_WEAK_FUNC(sub_82F6A748);
PPC_FUNC_IMPL(__imp__sub_82F6A748) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21952
	ctx.r6.s64 = ctx.r10.s64 + -21952;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30180
	ctx.r5.s64 = ctx.r9.s64 + 30180;
	// addi r4,r8,6020
	ctx.r4.s64 = ctx.r8.s64 + 6020;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30276
	ctx.r3.s64 = ctx.r7.s64 + 30276;
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

__attribute__((alias("__imp__sub_82F6A7C0"))) PPC_WEAK_FUNC(sub_82F6A7C0);
PPC_FUNC_IMPL(__imp__sub_82F6A7C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A7C4"))) PPC_WEAK_FUNC(sub_82F6A7C4);
PPC_FUNC_IMPL(__imp__sub_82F6A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A7C8"))) PPC_WEAK_FUNC(sub_82F6A7C8);
PPC_FUNC_IMPL(__imp__sub_82F6A7C8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21928
	ctx.r6.s64 = ctx.r10.s64 + -21928;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,6072
	ctx.r4.s64 = ctx.r8.s64 + 6072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30324
	ctx.r3.s64 = ctx.r7.s64 + 30324;
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

__attribute__((alias("__imp__sub_82F6A840"))) PPC_WEAK_FUNC(sub_82F6A840);
PPC_FUNC_IMPL(__imp__sub_82F6A840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A844"))) PPC_WEAK_FUNC(sub_82F6A844);
PPC_FUNC_IMPL(__imp__sub_82F6A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A848"))) PPC_WEAK_FUNC(sub_82F6A848);
PPC_FUNC_IMPL(__imp__sub_82F6A848) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21904
	ctx.r6.s64 = ctx.r10.s64 + -21904;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,6132
	ctx.r4.s64 = ctx.r8.s64 + 6132;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30372
	ctx.r3.s64 = ctx.r7.s64 + 30372;
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

__attribute__((alias("__imp__sub_82F6A8C0"))) PPC_WEAK_FUNC(sub_82F6A8C0);
PPC_FUNC_IMPL(__imp__sub_82F6A8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A8C4"))) PPC_WEAK_FUNC(sub_82F6A8C4);
PPC_FUNC_IMPL(__imp__sub_82F6A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A8C8"))) PPC_WEAK_FUNC(sub_82F6A8C8);
PPC_FUNC_IMPL(__imp__sub_82F6A8C8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21856
	ctx.r6.s64 = ctx.r10.s64 + -21856;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,6176
	ctx.r4.s64 = ctx.r8.s64 + 6176;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30420
	ctx.r3.s64 = ctx.r7.s64 + 30420;
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
	// li r8,1
	ctx.r8.s64 = 1;
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

__attribute__((alias("__imp__sub_82F6A940"))) PPC_WEAK_FUNC(sub_82F6A940);
PPC_FUNC_IMPL(__imp__sub_82F6A940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A944"))) PPC_WEAK_FUNC(sub_82F6A944);
PPC_FUNC_IMPL(__imp__sub_82F6A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6A948"))) PPC_WEAK_FUNC(sub_82F6A948);
PPC_FUNC_IMPL(__imp__sub_82F6A948) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-21640
	ctx.r7.s64 = ctx.r10.s64 + -21640;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6204
	ctx.r4.s64 = ctx.r9.s64 + 6204;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30468
	ctx.r3.s64 = ctx.r8.s64 + 30468;
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

__attribute__((alias("__imp__sub_82F6A9B4"))) PPC_WEAK_FUNC(sub_82F6A9B4);
PPC_FUNC_IMPL(__imp__sub_82F6A9B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6A9B8"))) PPC_WEAK_FUNC(sub_82F6A9B8);
PPC_FUNC_IMPL(__imp__sub_82F6A9B8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21592
	ctx.r6.s64 = ctx.r10.s64 + -21592;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,6248
	ctx.r4.s64 = ctx.r8.s64 + 6248;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30516
	ctx.r3.s64 = ctx.r7.s64 + 30516;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,17
	r31.s64 = 17;
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

__attribute__((alias("__imp__sub_82F6AA30"))) PPC_WEAK_FUNC(sub_82F6AA30);
PPC_FUNC_IMPL(__imp__sub_82F6AA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AA34"))) PPC_WEAK_FUNC(sub_82F6AA34);
PPC_FUNC_IMPL(__imp__sub_82F6AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6AA38"))) PPC_WEAK_FUNC(sub_82F6AA38);
PPC_FUNC_IMPL(__imp__sub_82F6AA38) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21184
	ctx.r6.s64 = ctx.r10.s64 + -21184;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,6272
	ctx.r4.s64 = ctx.r8.s64 + 6272;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30564
	ctx.r3.s64 = ctx.r7.s64 + 30564;
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

__attribute__((alias("__imp__sub_82F6AAB0"))) PPC_WEAK_FUNC(sub_82F6AAB0);
PPC_FUNC_IMPL(__imp__sub_82F6AAB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AAB4"))) PPC_WEAK_FUNC(sub_82F6AAB4);
PPC_FUNC_IMPL(__imp__sub_82F6AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6AAB8"))) PPC_WEAK_FUNC(sub_82F6AAB8);
PPC_FUNC_IMPL(__imp__sub_82F6AAB8) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,31332
	ctx.r5.s64 = ctx.r10.s64 + 31332;
	// addi r4,r9,6300
	ctx.r4.s64 = ctx.r9.s64 + 6300;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,30612
	ctx.r3.s64 = ctx.r8.s64 + 30612;
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

__attribute__((alias("__imp__sub_82F6AB1C"))) PPC_WEAK_FUNC(sub_82F6AB1C);
PPC_FUNC_IMPL(__imp__sub_82F6AB1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AB20"))) PPC_WEAK_FUNC(sub_82F6AB20);
PPC_FUNC_IMPL(__imp__sub_82F6AB20) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-21136
	ctx.r6.s64 = ctx.r10.s64 + -21136;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,30612
	ctx.r5.s64 = ctx.r9.s64 + 30612;
	// addi r4,r8,6328
	ctx.r4.s64 = ctx.r8.s64 + 6328;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,30660
	ctx.r3.s64 = ctx.r7.s64 + 30660;
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

__attribute__((alias("__imp__sub_82F6AB98"))) PPC_WEAK_FUNC(sub_82F6AB98);
PPC_FUNC_IMPL(__imp__sub_82F6AB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AB9C"))) PPC_WEAK_FUNC(sub_82F6AB9C);
PPC_FUNC_IMPL(__imp__sub_82F6AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6ABA0"))) PPC_WEAK_FUNC(sub_82F6ABA0);
PPC_FUNC_IMPL(__imp__sub_82F6ABA0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-21064
	ctx.r7.s64 = ctx.r10.s64 + -21064;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,6360
	ctx.r4.s64 = ctx.r9.s64 + 6360;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30708
	ctx.r3.s64 = ctx.r8.s64 + 30708;
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

__attribute__((alias("__imp__sub_82F6AC0C"))) PPC_WEAK_FUNC(sub_82F6AC0C);
PPC_FUNC_IMPL(__imp__sub_82F6AC0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AC10"))) PPC_WEAK_FUNC(sub_82F6AC10);
PPC_FUNC_IMPL(__imp__sub_82F6AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25592
	ctx.r9.s64 = ctx.r10.s64 + 25592;
	// lwz r11,-22580(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22580);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AC28"))) PPC_WEAK_FUNC(sub_82F6AC28);
PPC_FUNC_IMPL(__imp__sub_82F6AC28) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,25592
	ctx.r6.s64 = ctx.r10.s64 + 25592;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,6400
	ctx.r4.s64 = ctx.r8.s64 + 6400;
	// addi r3,r7,30756
	ctx.r3.s64 = ctx.r7.s64 + 30756;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29520
	ctx.r9.s64 = ctx.r9.s64 + 29520;
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

__attribute__((alias("__imp__sub_82F6AC98"))) PPC_WEAK_FUNC(sub_82F6AC98);
PPC_FUNC_IMPL(__imp__sub_82F6AC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AC9C"))) PPC_WEAK_FUNC(sub_82F6AC9C);
PPC_FUNC_IMPL(__imp__sub_82F6AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6ACA0"))) PPC_WEAK_FUNC(sub_82F6ACA0);
PPC_FUNC_IMPL(__imp__sub_82F6ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25640
	ctx.r9.s64 = ctx.r10.s64 + 25640;
	// lwz r11,-20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20992);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6ACB8"))) PPC_WEAK_FUNC(sub_82F6ACB8);
PPC_FUNC_IMPL(__imp__sub_82F6ACB8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,25640
	ctx.r6.s64 = ctx.r10.s64 + 25640;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,6444
	ctx.r4.s64 = ctx.r8.s64 + 6444;
	// addi r3,r7,30804
	ctx.r3.s64 = ctx.r7.s64 + 30804;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29556
	ctx.r9.s64 = ctx.r9.s64 + 29556;
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

__attribute__((alias("__imp__sub_82F6AD28"))) PPC_WEAK_FUNC(sub_82F6AD28);
PPC_FUNC_IMPL(__imp__sub_82F6AD28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AD2C"))) PPC_WEAK_FUNC(sub_82F6AD2C);
PPC_FUNC_IMPL(__imp__sub_82F6AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6AD30"))) PPC_WEAK_FUNC(sub_82F6AD30);
PPC_FUNC_IMPL(__imp__sub_82F6AD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25712
	ctx.r9.s64 = ctx.r10.s64 + 25712;
	// lwz r11,-20988(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20988);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AD48"))) PPC_WEAK_FUNC(sub_82F6AD48);
PPC_FUNC_IMPL(__imp__sub_82F6AD48) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,25712
	ctx.r6.s64 = ctx.r10.s64 + 25712;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,6464
	ctx.r4.s64 = ctx.r8.s64 + 6464;
	// addi r3,r7,30852
	ctx.r3.s64 = ctx.r7.s64 + 30852;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29608
	ctx.r9.s64 = ctx.r9.s64 + 29608;
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

__attribute__((alias("__imp__sub_82F6ADB8"))) PPC_WEAK_FUNC(sub_82F6ADB8);
PPC_FUNC_IMPL(__imp__sub_82F6ADB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6ADBC"))) PPC_WEAK_FUNC(sub_82F6ADBC);
PPC_FUNC_IMPL(__imp__sub_82F6ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6ADC0"))) PPC_WEAK_FUNC(sub_82F6ADC0);
PPC_FUNC_IMPL(__imp__sub_82F6ADC0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20984
	ctx.r7.s64 = ctx.r10.s64 + -20984;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20248
	ctx.r4.s64 = ctx.r9.s64 + -20248;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30900
	ctx.r3.s64 = ctx.r8.s64 + 30900;
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

__attribute__((alias("__imp__sub_82F6AE2C"))) PPC_WEAK_FUNC(sub_82F6AE2C);
PPC_FUNC_IMPL(__imp__sub_82F6AE2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AE30"))) PPC_WEAK_FUNC(sub_82F6AE30);
PPC_FUNC_IMPL(__imp__sub_82F6AE30) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-20928
	ctx.r6.s64 = ctx.r10.s64 + -20928;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-28296
	ctx.r4.s64 = ctx.r8.s64 + -28296;
	// addi r3,r7,30948
	ctx.r3.s64 = ctx.r7.s64 + 30948;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29668
	ctx.r9.s64 = ctx.r9.s64 + 29668;
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

__attribute__((alias("__imp__sub_82F6AEA0"))) PPC_WEAK_FUNC(sub_82F6AEA0);
PPC_FUNC_IMPL(__imp__sub_82F6AEA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AEA4"))) PPC_WEAK_FUNC(sub_82F6AEA4);
PPC_FUNC_IMPL(__imp__sub_82F6AEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6AEA8"))) PPC_WEAK_FUNC(sub_82F6AEA8);
PPC_FUNC_IMPL(__imp__sub_82F6AEA8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20856
	ctx.r7.s64 = ctx.r10.s64 + -20856;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-26032
	ctx.r4.s64 = ctx.r9.s64 + -26032;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,30996
	ctx.r3.s64 = ctx.r8.s64 + 30996;
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

__attribute__((alias("__imp__sub_82F6AF14"))) PPC_WEAK_FUNC(sub_82F6AF14);
PPC_FUNC_IMPL(__imp__sub_82F6AF14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AF18"))) PPC_WEAK_FUNC(sub_82F6AF18);
PPC_FUNC_IMPL(__imp__sub_82F6AF18) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20736
	ctx.r7.s64 = ctx.r10.s64 + -20736;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-25604
	ctx.r4.s64 = ctx.r9.s64 + -25604;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31044
	ctx.r3.s64 = ctx.r8.s64 + 31044;
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

__attribute__((alias("__imp__sub_82F6AF84"))) PPC_WEAK_FUNC(sub_82F6AF84);
PPC_FUNC_IMPL(__imp__sub_82F6AF84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AF88"))) PPC_WEAK_FUNC(sub_82F6AF88);
PPC_FUNC_IMPL(__imp__sub_82F6AF88) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20688
	ctx.r7.s64 = ctx.r10.s64 + -20688;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-25568
	ctx.r4.s64 = ctx.r9.s64 + -25568;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31092
	ctx.r3.s64 = ctx.r8.s64 + 31092;
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

__attribute__((alias("__imp__sub_82F6AFF4"))) PPC_WEAK_FUNC(sub_82F6AFF4);
PPC_FUNC_IMPL(__imp__sub_82F6AFF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6AFF8"))) PPC_WEAK_FUNC(sub_82F6AFF8);
PPC_FUNC_IMPL(__imp__sub_82F6AFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25760
	ctx.r9.s64 = ctx.r10.s64 + 25760;
	// lwz r11,-20664(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20664);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B010"))) PPC_WEAK_FUNC(sub_82F6B010);
PPC_FUNC_IMPL(__imp__sub_82F6B010) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,25760
	ctx.r6.s64 = ctx.r10.s64 + 25760;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-25472
	ctx.r4.s64 = ctx.r8.s64 + -25472;
	// addi r3,r7,31140
	ctx.r3.s64 = ctx.r7.s64 + 31140;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29732
	ctx.r9.s64 = ctx.r9.s64 + 29732;
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

__attribute__((alias("__imp__sub_82F6B080"))) PPC_WEAK_FUNC(sub_82F6B080);
PPC_FUNC_IMPL(__imp__sub_82F6B080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B084"))) PPC_WEAK_FUNC(sub_82F6B084);
PPC_FUNC_IMPL(__imp__sub_82F6B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B088"))) PPC_WEAK_FUNC(sub_82F6B088);
PPC_FUNC_IMPL(__imp__sub_82F6B088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,25976
	ctx.r9.s64 = ctx.r10.s64 + 25976;
	// lwz r11,-20132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20132);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B0A0"))) PPC_WEAK_FUNC(sub_82F6B0A0);
PPC_FUNC_IMPL(__imp__sub_82F6B0A0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,25976
	ctx.r7.s64 = ctx.r10.s64 + 25976;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-25444
	ctx.r4.s64 = ctx.r9.s64 + -25444;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31188
	ctx.r3.s64 = ctx.r8.s64 + 31188;
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

__attribute__((alias("__imp__sub_82F6B10C"))) PPC_WEAK_FUNC(sub_82F6B10C);
PPC_FUNC_IMPL(__imp__sub_82F6B10C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B110"))) PPC_WEAK_FUNC(sub_82F6B110);
PPC_FUNC_IMPL(__imp__sub_82F6B110) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-20660
	ctx.r6.s64 = ctx.r10.s64 + -20660;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,-25408
	ctx.r4.s64 = ctx.r8.s64 + -25408;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31236
	ctx.r3.s64 = ctx.r7.s64 + 31236;
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

__attribute__((alias("__imp__sub_82F6B188"))) PPC_WEAK_FUNC(sub_82F6B188);
PPC_FUNC_IMPL(__imp__sub_82F6B188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B18C"))) PPC_WEAK_FUNC(sub_82F6B18C);
PPC_FUNC_IMPL(__imp__sub_82F6B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B190"))) PPC_WEAK_FUNC(sub_82F6B190);
PPC_FUNC_IMPL(__imp__sub_82F6B190) {
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
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,5408
	ctx.r4.s64 = ctx.r10.s64 + 5408;
	// addi r3,r9,31284
	ctx.r3.s64 = ctx.r9.s64 + 31284;
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

__attribute__((alias("__imp__sub_82F6B1F0"))) PPC_WEAK_FUNC(sub_82F6B1F0);
PPC_FUNC_IMPL(__imp__sub_82F6B1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B1F4"))) PPC_WEAK_FUNC(sub_82F6B1F4);
PPC_FUNC_IMPL(__imp__sub_82F6B1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B1F8"))) PPC_WEAK_FUNC(sub_82F6B1F8);
PPC_FUNC_IMPL(__imp__sub_82F6B1F8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-20612
	ctx.r6.s64 = ctx.r10.s64 + -20612;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31284
	ctx.r5.s64 = ctx.r9.s64 + 31284;
	// addi r4,r8,7784
	ctx.r4.s64 = ctx.r8.s64 + 7784;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,31332
	ctx.r3.s64 = ctx.r7.s64 + 31332;
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

__attribute__((alias("__imp__sub_82F6B270"))) PPC_WEAK_FUNC(sub_82F6B270);
PPC_FUNC_IMPL(__imp__sub_82F6B270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B274"))) PPC_WEAK_FUNC(sub_82F6B274);
PPC_FUNC_IMPL(__imp__sub_82F6B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B278"))) PPC_WEAK_FUNC(sub_82F6B278);
PPC_FUNC_IMPL(__imp__sub_82F6B278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26024
	ctx.r9.s64 = ctx.r10.s64 + 26024;
	// lwz r11,-20560(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20560);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B290"))) PPC_WEAK_FUNC(sub_82F6B290);
PPC_FUNC_IMPL(__imp__sub_82F6B290) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26024
	ctx.r6.s64 = ctx.r10.s64 + 26024;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-20320
	ctx.r4.s64 = ctx.r8.s64 + -20320;
	// addi r3,r7,31380
	ctx.r3.s64 = ctx.r7.s64 + 31380;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29776
	ctx.r9.s64 = ctx.r9.s64 + 29776;
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

__attribute__((alias("__imp__sub_82F6B300"))) PPC_WEAK_FUNC(sub_82F6B300);
PPC_FUNC_IMPL(__imp__sub_82F6B300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B304"))) PPC_WEAK_FUNC(sub_82F6B304);
PPC_FUNC_IMPL(__imp__sub_82F6B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B308"))) PPC_WEAK_FUNC(sub_82F6B308);
PPC_FUNC_IMPL(__imp__sub_82F6B308) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20552
	ctx.r7.s64 = ctx.r10.s64 + -20552;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-20580
	ctx.r4.s64 = ctx.r9.s64 + -20580;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31428
	ctx.r3.s64 = ctx.r8.s64 + 31428;
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

__attribute__((alias("__imp__sub_82F6B374"))) PPC_WEAK_FUNC(sub_82F6B374);
PPC_FUNC_IMPL(__imp__sub_82F6B374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B378"))) PPC_WEAK_FUNC(sub_82F6B378);
PPC_FUNC_IMPL(__imp__sub_82F6B378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26264
	ctx.r9.s64 = ctx.r10.s64 + 26264;
	// lwz r11,-20556(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20556);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B390"))) PPC_WEAK_FUNC(sub_82F6B390);
PPC_FUNC_IMPL(__imp__sub_82F6B390) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26264
	ctx.r6.s64 = ctx.r10.s64 + 26264;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-20564
	ctx.r4.s64 = ctx.r8.s64 + -20564;
	// addi r3,r7,31476
	ctx.r3.s64 = ctx.r7.s64 + 31476;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,29824
	ctx.r9.s64 = ctx.r9.s64 + 29824;
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

__attribute__((alias("__imp__sub_82F6B400"))) PPC_WEAK_FUNC(sub_82F6B400);
PPC_FUNC_IMPL(__imp__sub_82F6B400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B404"))) PPC_WEAK_FUNC(sub_82F6B404);
PPC_FUNC_IMPL(__imp__sub_82F6B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B408"))) PPC_WEAK_FUNC(sub_82F6B408);
PPC_FUNC_IMPL(__imp__sub_82F6B408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r8,r9,26360
	ctx.r8.s64 = ctx.r9.s64 + 26360;
	// lwz r11,-20504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20504);
	// lwz r10,-20500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20500);
	// stw r11,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, r11.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B430"))) PPC_WEAK_FUNC(sub_82F6B430);
PPC_FUNC_IMPL(__imp__sub_82F6B430) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26360
	ctx.r6.s64 = ctx.r10.s64 + 26360;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-20672
	ctx.r4.s64 = ctx.r8.s64 + -20672;
	// addi r3,r7,31524
	ctx.r3.s64 = ctx.r7.s64 + 31524;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,30216
	ctx.r9.s64 = ctx.r9.s64 + 30216;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
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

__attribute__((alias("__imp__sub_82F6B4A0"))) PPC_WEAK_FUNC(sub_82F6B4A0);
PPC_FUNC_IMPL(__imp__sub_82F6B4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B4A4"))) PPC_WEAK_FUNC(sub_82F6B4A4);
PPC_FUNC_IMPL(__imp__sub_82F6B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B4A8"))) PPC_WEAK_FUNC(sub_82F6B4A8);
PPC_FUNC_IMPL(__imp__sub_82F6B4A8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20492
	ctx.r7.s64 = ctx.r10.s64 + -20492;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-25108
	ctx.r4.s64 = ctx.r9.s64 + -25108;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31572
	ctx.r3.s64 = ctx.r8.s64 + 31572;
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

__attribute__((alias("__imp__sub_82F6B514"))) PPC_WEAK_FUNC(sub_82F6B514);
PPC_FUNC_IMPL(__imp__sub_82F6B514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B518"))) PPC_WEAK_FUNC(sub_82F6B518);
PPC_FUNC_IMPL(__imp__sub_82F6B518) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20444
	ctx.r7.s64 = ctx.r10.s64 + -20444;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-25080
	ctx.r4.s64 = ctx.r9.s64 + -25080;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31620
	ctx.r3.s64 = ctx.r8.s64 + 31620;
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

__attribute__((alias("__imp__sub_82F6B584"))) PPC_WEAK_FUNC(sub_82F6B584);
PPC_FUNC_IMPL(__imp__sub_82F6B584) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B588"))) PPC_WEAK_FUNC(sub_82F6B588);
PPC_FUNC_IMPL(__imp__sub_82F6B588) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20416
	ctx.r7.s64 = ctx.r10.s64 + -20416;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-27152
	ctx.r4.s64 = ctx.r9.s64 + -27152;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31668
	ctx.r3.s64 = ctx.r8.s64 + 31668;
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

__attribute__((alias("__imp__sub_82F6B5F4"))) PPC_WEAK_FUNC(sub_82F6B5F4);
PPC_FUNC_IMPL(__imp__sub_82F6B5F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B5F8"))) PPC_WEAK_FUNC(sub_82F6B5F8);
PPC_FUNC_IMPL(__imp__sub_82F6B5F8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20320
	ctx.r7.s64 = ctx.r10.s64 + -20320;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-27128
	ctx.r4.s64 = ctx.r9.s64 + -27128;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,31716
	ctx.r3.s64 = ctx.r8.s64 + 31716;
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

__attribute__((alias("__imp__sub_82F6B664"))) PPC_WEAK_FUNC(sub_82F6B664);
PPC_FUNC_IMPL(__imp__sub_82F6B664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B668"))) PPC_WEAK_FUNC(sub_82F6B668);
PPC_FUNC_IMPL(__imp__sub_82F6B668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26576
	ctx.r9.s64 = ctx.r10.s64 + 26576;
	// lwz r11,-20420(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20420);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B680"))) PPC_WEAK_FUNC(sub_82F6B680);
PPC_FUNC_IMPL(__imp__sub_82F6B680) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26576
	ctx.r6.s64 = ctx.r10.s64 + 26576;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-27056
	ctx.r4.s64 = ctx.r8.s64 + -27056;
	// addi r3,r7,31764
	ctx.r3.s64 = ctx.r7.s64 + 31764;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,30300
	ctx.r9.s64 = ctx.r9.s64 + 30300;
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

__attribute__((alias("__imp__sub_82F6B6FC"))) PPC_WEAK_FUNC(sub_82F6B6FC);
PPC_FUNC_IMPL(__imp__sub_82F6B6FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B700"))) PPC_WEAK_FUNC(sub_82F6B700);
PPC_FUNC_IMPL(__imp__sub_82F6B700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26768
	ctx.r9.s64 = ctx.r10.s64 + 26768;
	// lwz r11,-20224(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20224);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B718"))) PPC_WEAK_FUNC(sub_82F6B718);
PPC_FUNC_IMPL(__imp__sub_82F6B718) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26768
	ctx.r6.s64 = ctx.r10.s64 + 26768;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-27040
	ctx.r4.s64 = ctx.r8.s64 + -27040;
	// addi r3,r7,31812
	ctx.r3.s64 = ctx.r7.s64 + 31812;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,30352
	ctx.r9.s64 = ctx.r9.s64 + 30352;
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

__attribute__((alias("__imp__sub_82F6B788"))) PPC_WEAK_FUNC(sub_82F6B788);
PPC_FUNC_IMPL(__imp__sub_82F6B788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B78C"))) PPC_WEAK_FUNC(sub_82F6B78C);
PPC_FUNC_IMPL(__imp__sub_82F6B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B790"))) PPC_WEAK_FUNC(sub_82F6B790);
PPC_FUNC_IMPL(__imp__sub_82F6B790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26840
	ctx.r9.s64 = ctx.r10.s64 + 26840;
	// lwz r11,-20220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20220);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B7A8"))) PPC_WEAK_FUNC(sub_82F6B7A8);
PPC_FUNC_IMPL(__imp__sub_82F6B7A8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26840
	ctx.r6.s64 = ctx.r10.s64 + 26840;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-27020
	ctx.r4.s64 = ctx.r8.s64 + -27020;
	// addi r3,r7,31860
	ctx.r3.s64 = ctx.r7.s64 + 31860;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,30388
	ctx.r9.s64 = ctx.r9.s64 + 30388;
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

__attribute__((alias("__imp__sub_82F6B818"))) PPC_WEAK_FUNC(sub_82F6B818);
PPC_FUNC_IMPL(__imp__sub_82F6B818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B81C"))) PPC_WEAK_FUNC(sub_82F6B81C);
PPC_FUNC_IMPL(__imp__sub_82F6B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B820"))) PPC_WEAK_FUNC(sub_82F6B820);
PPC_FUNC_IMPL(__imp__sub_82F6B820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26864
	ctx.r9.s64 = ctx.r10.s64 + 26864;
	// lwz r11,-20216(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20216);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B838"))) PPC_WEAK_FUNC(sub_82F6B838);
PPC_FUNC_IMPL(__imp__sub_82F6B838) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26864
	ctx.r6.s64 = ctx.r10.s64 + 26864;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-26992
	ctx.r4.s64 = ctx.r8.s64 + -26992;
	// addi r3,r7,31908
	ctx.r3.s64 = ctx.r7.s64 + 31908;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,30448
	ctx.r9.s64 = ctx.r9.s64 + 30448;
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

__attribute__((alias("__imp__sub_82F6B8A8"))) PPC_WEAK_FUNC(sub_82F6B8A8);
PPC_FUNC_IMPL(__imp__sub_82F6B8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B8AC"))) PPC_WEAK_FUNC(sub_82F6B8AC);
PPC_FUNC_IMPL(__imp__sub_82F6B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B8B0"))) PPC_WEAK_FUNC(sub_82F6B8B0);
PPC_FUNC_IMPL(__imp__sub_82F6B8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26888
	ctx.r9.s64 = ctx.r10.s64 + 26888;
	// lwz r11,-20212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20212);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B8C8"))) PPC_WEAK_FUNC(sub_82F6B8C8);
PPC_FUNC_IMPL(__imp__sub_82F6B8C8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26888
	ctx.r6.s64 = ctx.r10.s64 + 26888;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-26976
	ctx.r4.s64 = ctx.r8.s64 + -26976;
	// addi r3,r7,31956
	ctx.r3.s64 = ctx.r7.s64 + 31956;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,30508
	ctx.r9.s64 = ctx.r9.s64 + 30508;
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

__attribute__((alias("__imp__sub_82F6B938"))) PPC_WEAK_FUNC(sub_82F6B938);
PPC_FUNC_IMPL(__imp__sub_82F6B938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B93C"))) PPC_WEAK_FUNC(sub_82F6B93C);
PPC_FUNC_IMPL(__imp__sub_82F6B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6B940"))) PPC_WEAK_FUNC(sub_82F6B940);
PPC_FUNC_IMPL(__imp__sub_82F6B940) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20208
	ctx.r7.s64 = ctx.r10.s64 + -20208;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-26952
	ctx.r4.s64 = ctx.r9.s64 + -26952;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32004
	ctx.r3.s64 = ctx.r8.s64 + 32004;
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

__attribute__((alias("__imp__sub_82F6B9AC"))) PPC_WEAK_FUNC(sub_82F6B9AC);
PPC_FUNC_IMPL(__imp__sub_82F6B9AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B9B0"))) PPC_WEAK_FUNC(sub_82F6B9B0);
PPC_FUNC_IMPL(__imp__sub_82F6B9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,26912
	ctx.r9.s64 = ctx.r10.s64 + 26912;
	// lwz r11,-20184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20184);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6B9C8"))) PPC_WEAK_FUNC(sub_82F6B9C8);
PPC_FUNC_IMPL(__imp__sub_82F6B9C8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,26912
	ctx.r6.s64 = ctx.r10.s64 + 26912;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-26928
	ctx.r4.s64 = ctx.r8.s64 + -26928;
	// addi r3,r7,32052
	ctx.r3.s64 = ctx.r7.s64 + 32052;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,30552
	ctx.r9.s64 = ctx.r9.s64 + 30552;
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

__attribute__((alias("__imp__sub_82F6BA38"))) PPC_WEAK_FUNC(sub_82F6BA38);
PPC_FUNC_IMPL(__imp__sub_82F6BA38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BA3C"))) PPC_WEAK_FUNC(sub_82F6BA3C);
PPC_FUNC_IMPL(__imp__sub_82F6BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6BA40"))) PPC_WEAK_FUNC(sub_82F6BA40);
PPC_FUNC_IMPL(__imp__sub_82F6BA40) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20180
	ctx.r7.s64 = ctx.r10.s64 + -20180;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-26904
	ctx.r4.s64 = ctx.r9.s64 + -26904;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32100
	ctx.r3.s64 = ctx.r8.s64 + 32100;
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

__attribute__((alias("__imp__sub_82F6BAAC"))) PPC_WEAK_FUNC(sub_82F6BAAC);
PPC_FUNC_IMPL(__imp__sub_82F6BAAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BAB0"))) PPC_WEAK_FUNC(sub_82F6BAB0);
PPC_FUNC_IMPL(__imp__sub_82F6BAB0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20156
	ctx.r7.s64 = ctx.r10.s64 + -20156;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-26876
	ctx.r4.s64 = ctx.r9.s64 + -26876;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32148
	ctx.r3.s64 = ctx.r8.s64 + 32148;
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

__attribute__((alias("__imp__sub_82F6BB1C"))) PPC_WEAK_FUNC(sub_82F6BB1C);
PPC_FUNC_IMPL(__imp__sub_82F6BB1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BB20"))) PPC_WEAK_FUNC(sub_82F6BB20);
PPC_FUNC_IMPL(__imp__sub_82F6BB20) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,31720
	ctx.r9.s64 = ctx.r10.s64 + 31720;
	// addi r4,r8,-21852
	ctx.r4.s64 = ctx.r8.s64 + -21852;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,32196
	ctx.r3.s64 = ctx.r7.s64 + 32196;
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

__attribute__((alias("__imp__sub_82F6BB84"))) PPC_WEAK_FUNC(sub_82F6BB84);
PPC_FUNC_IMPL(__imp__sub_82F6BB84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BB88"))) PPC_WEAK_FUNC(sub_82F6BB88);
PPC_FUNC_IMPL(__imp__sub_82F6BB88) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20128
	ctx.r7.s64 = ctx.r10.s64 + -20128;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-19976
	ctx.r4.s64 = ctx.r9.s64 + -19976;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32244
	ctx.r3.s64 = ctx.r8.s64 + 32244;
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

__attribute__((alias("__imp__sub_82F6BBF4"))) PPC_WEAK_FUNC(sub_82F6BBF4);
PPC_FUNC_IMPL(__imp__sub_82F6BBF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BBF8"))) PPC_WEAK_FUNC(sub_82F6BBF8);
PPC_FUNC_IMPL(__imp__sub_82F6BBF8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-20080
	ctx.r7.s64 = ctx.r10.s64 + -20080;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-19968
	ctx.r4.s64 = ctx.r9.s64 + -19968;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32292
	ctx.r3.s64 = ctx.r8.s64 + 32292;
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

__attribute__((alias("__imp__sub_82F6BC64"))) PPC_WEAK_FUNC(sub_82F6BC64);
PPC_FUNC_IMPL(__imp__sub_82F6BC64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BC68"))) PPC_WEAK_FUNC(sub_82F6BC68);
PPC_FUNC_IMPL(__imp__sub_82F6BC68) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,31332
	ctx.r5.s64 = ctx.r10.s64 + 31332;
	// addi r4,r9,-28044
	ctx.r4.s64 = ctx.r9.s64 + -28044;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,32340
	ctx.r3.s64 = ctx.r8.s64 + 32340;
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

__attribute__((alias("__imp__sub_82F6BCCC"))) PPC_WEAK_FUNC(sub_82F6BCCC);
PPC_FUNC_IMPL(__imp__sub_82F6BCCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BCD0"))) PPC_WEAK_FUNC(sub_82F6BCD0);
PPC_FUNC_IMPL(__imp__sub_82F6BCD0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,-19936
	ctx.r6.s64 = ctx.r10.s64 + -19936;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,-28028
	ctx.r4.s64 = ctx.r8.s64 + -28028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,32388
	ctx.r3.s64 = ctx.r7.s64 + 32388;
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

__attribute__((alias("__imp__sub_82F6BD48"))) PPC_WEAK_FUNC(sub_82F6BD48);
PPC_FUNC_IMPL(__imp__sub_82F6BD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BD4C"))) PPC_WEAK_FUNC(sub_82F6BD4C);
PPC_FUNC_IMPL(__imp__sub_82F6BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6BD50"))) PPC_WEAK_FUNC(sub_82F6BD50);
PPC_FUNC_IMPL(__imp__sub_82F6BD50) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-19912
	ctx.r6.s64 = ctx.r10.s64 + -19912;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,32340
	ctx.r5.s64 = ctx.r9.s64 + 32340;
	// addi r4,r8,-28008
	ctx.r4.s64 = ctx.r8.s64 + -28008;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,32436
	ctx.r3.s64 = ctx.r7.s64 + 32436;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,5
	r31.s64 = 5;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
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

__attribute__((alias("__imp__sub_82F6BDCC"))) PPC_WEAK_FUNC(sub_82F6BDCC);
PPC_FUNC_IMPL(__imp__sub_82F6BDCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BDD0"))) PPC_WEAK_FUNC(sub_82F6BDD0);
PPC_FUNC_IMPL(__imp__sub_82F6BDD0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-19792
	ctx.r7.s64 = ctx.r10.s64 + -19792;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-25988
	ctx.r4.s64 = ctx.r9.s64 + -25988;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32484
	ctx.r3.s64 = ctx.r8.s64 + 32484;
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

__attribute__((alias("__imp__sub_82F6BE3C"))) PPC_WEAK_FUNC(sub_82F6BE3C);
PPC_FUNC_IMPL(__imp__sub_82F6BE3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BE40"))) PPC_WEAK_FUNC(sub_82F6BE40);
PPC_FUNC_IMPL(__imp__sub_82F6BE40) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-19768
	ctx.r7.s64 = ctx.r10.s64 + -19768;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-24684
	ctx.r4.s64 = ctx.r9.s64 + -24684;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32532
	ctx.r3.s64 = ctx.r8.s64 + 32532;
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

__attribute__((alias("__imp__sub_82F6BEAC"))) PPC_WEAK_FUNC(sub_82F6BEAC);
PPC_FUNC_IMPL(__imp__sub_82F6BEAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BEB0"))) PPC_WEAK_FUNC(sub_82F6BEB0);
PPC_FUNC_IMPL(__imp__sub_82F6BEB0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r6,r10,-19712
	ctx.r6.s64 = ctx.r10.s64 + -19712;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-24776
	ctx.r4.s64 = ctx.r8.s64 + -24776;
	// addi r3,r7,32580
	ctx.r3.s64 = ctx.r7.s64 + 32580;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,31764
	ctx.r9.s64 = ctx.r9.s64 + 31764;
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

__attribute__((alias("__imp__sub_82F6BF20"))) PPC_WEAK_FUNC(sub_82F6BF20);
PPC_FUNC_IMPL(__imp__sub_82F6BF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BF24"))) PPC_WEAK_FUNC(sub_82F6BF24);
PPC_FUNC_IMPL(__imp__sub_82F6BF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F6BF28"))) PPC_WEAK_FUNC(sub_82F6BF28);
PPC_FUNC_IMPL(__imp__sub_82F6BF28) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r7,r10,-19592
	ctx.r7.s64 = ctx.r10.s64 + -19592;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-26488
	ctx.r4.s64 = ctx.r9.s64 + -26488;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,32628
	ctx.r3.s64 = ctx.r8.s64 + 32628;
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

__attribute__((alias("__imp__sub_82F6BF94"))) PPC_WEAK_FUNC(sub_82F6BF94);
PPC_FUNC_IMPL(__imp__sub_82F6BF94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6BF98"))) PPC_WEAK_FUNC(sub_82F6BF98);
PPC_FUNC_IMPL(__imp__sub_82F6BF98) {
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
	// lis r10,-31931
	ctx.r10.s64 = -2092630016;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,31332
	ctx.r5.s64 = ctx.r10.s64 + 31332;
	// addi r4,r9,6488
	ctx.r4.s64 = ctx.r9.s64 + 6488;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,32676
	ctx.r3.s64 = ctx.r8.s64 + 32676;
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

__attribute__((alias("__imp__sub_82F6BFFC"))) PPC_WEAK_FUNC(sub_82F6BFFC);
PPC_FUNC_IMPL(__imp__sub_82F6BFFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

