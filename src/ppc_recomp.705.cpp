#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8313CCA4"))) PPC_WEAK_FUNC(sub_8313CCA4);
PPC_FUNC_IMPL(__imp__sub_8313CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313CCA8"))) PPC_WEAK_FUNC(sub_8313CCA8);
PPC_FUNC_IMPL(__imp__sub_8313CCA8) {
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
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-19236
	ctx.r5.s64 = ctx.r10.s64 + -19236;
	// addi r4,r9,10264
	ctx.r4.s64 = ctx.r9.s64 + 10264;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-9780
	ctx.r3.s64 = ctx.r8.s64 + -9780;
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

__attribute__((alias("__imp__sub_8313CD0C"))) PPC_WEAK_FUNC(sub_8313CD0C);
PPC_FUNC_IMPL(__imp__sub_8313CD0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CD10"))) PPC_WEAK_FUNC(sub_8313CD10);
PPC_FUNC_IMPL(__imp__sub_8313CD10) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,23456
	ctx.r6.s64 = ctx.r10.s64 + 23456;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9780
	ctx.r5.s64 = ctx.r9.s64 + -9780;
	// addi r4,r8,10280
	ctx.r4.s64 = ctx.r8.s64 + 10280;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9732
	ctx.r3.s64 = ctx.r7.s64 + -9732;
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

__attribute__((alias("__imp__sub_8313CD88"))) PPC_WEAK_FUNC(sub_8313CD88);
PPC_FUNC_IMPL(__imp__sub_8313CD88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CD8C"))) PPC_WEAK_FUNC(sub_8313CD8C);
PPC_FUNC_IMPL(__imp__sub_8313CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313CD90"))) PPC_WEAK_FUNC(sub_8313CD90);
PPC_FUNC_IMPL(__imp__sub_8313CD90) {
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
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-19236
	ctx.r5.s64 = ctx.r10.s64 + -19236;
	// addi r4,r9,10440
	ctx.r4.s64 = ctx.r9.s64 + 10440;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-9684
	ctx.r3.s64 = ctx.r8.s64 + -9684;
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

__attribute__((alias("__imp__sub_8313CDF4"))) PPC_WEAK_FUNC(sub_8313CDF4);
PPC_FUNC_IMPL(__imp__sub_8313CDF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CDF8"))) PPC_WEAK_FUNC(sub_8313CDF8);
PPC_FUNC_IMPL(__imp__sub_8313CDF8) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,23696
	ctx.r6.s64 = ctx.r10.s64 + 23696;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9684
	ctx.r5.s64 = ctx.r9.s64 + -9684;
	// addi r4,r8,10460
	ctx.r4.s64 = ctx.r8.s64 + 10460;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9636
	ctx.r3.s64 = ctx.r7.s64 + -9636;
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

__attribute__((alias("__imp__sub_8313CE70"))) PPC_WEAK_FUNC(sub_8313CE70);
PPC_FUNC_IMPL(__imp__sub_8313CE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CE74"))) PPC_WEAK_FUNC(sub_8313CE74);
PPC_FUNC_IMPL(__imp__sub_8313CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313CE78"))) PPC_WEAK_FUNC(sub_8313CE78);
PPC_FUNC_IMPL(__imp__sub_8313CE78) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,23768
	ctx.r7.s64 = ctx.r10.s64 + 23768;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10488
	ctx.r4.s64 = ctx.r9.s64 + 10488;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9588
	ctx.r3.s64 = ctx.r8.s64 + -9588;
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

__attribute__((alias("__imp__sub_8313CEE4"))) PPC_WEAK_FUNC(sub_8313CEE4);
PPC_FUNC_IMPL(__imp__sub_8313CEE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CEE8"))) PPC_WEAK_FUNC(sub_8313CEE8);
PPC_FUNC_IMPL(__imp__sub_8313CEE8) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,23840
	ctx.r6.s64 = ctx.r10.s64 + 23840;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19236
	ctx.r5.s64 = ctx.r9.s64 + -19236;
	// addi r4,r8,10536
	ctx.r4.s64 = ctx.r8.s64 + 10536;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9540
	ctx.r3.s64 = ctx.r7.s64 + -9540;
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

__attribute__((alias("__imp__sub_8313CF60"))) PPC_WEAK_FUNC(sub_8313CF60);
PPC_FUNC_IMPL(__imp__sub_8313CF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CF64"))) PPC_WEAK_FUNC(sub_8313CF64);
PPC_FUNC_IMPL(__imp__sub_8313CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313CF68"))) PPC_WEAK_FUNC(sub_8313CF68);
PPC_FUNC_IMPL(__imp__sub_8313CF68) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,23864
	ctx.r7.s64 = ctx.r10.s64 + 23864;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10556
	ctx.r4.s64 = ctx.r9.s64 + 10556;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9492
	ctx.r3.s64 = ctx.r8.s64 + -9492;
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

__attribute__((alias("__imp__sub_8313CFD4"))) PPC_WEAK_FUNC(sub_8313CFD4);
PPC_FUNC_IMPL(__imp__sub_8313CFD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313CFD8"))) PPC_WEAK_FUNC(sub_8313CFD8);
PPC_FUNC_IMPL(__imp__sub_8313CFD8) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,23936
	ctx.r6.s64 = ctx.r10.s64 + 23936;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9540
	ctx.r5.s64 = ctx.r9.s64 + -9540;
	// addi r4,r8,10616
	ctx.r4.s64 = ctx.r8.s64 + 10616;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9444
	ctx.r3.s64 = ctx.r7.s64 + -9444;
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

__attribute__((alias("__imp__sub_8313D050"))) PPC_WEAK_FUNC(sub_8313D050);
PPC_FUNC_IMPL(__imp__sub_8313D050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D054"))) PPC_WEAK_FUNC(sub_8313D054);
PPC_FUNC_IMPL(__imp__sub_8313D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D058"))) PPC_WEAK_FUNC(sub_8313D058);
PPC_FUNC_IMPL(__imp__sub_8313D058) {
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
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-19236
	ctx.r5.s64 = ctx.r10.s64 + -19236;
	// addi r4,r9,10644
	ctx.r4.s64 = ctx.r9.s64 + 10644;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-9396
	ctx.r3.s64 = ctx.r8.s64 + -9396;
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

__attribute__((alias("__imp__sub_8313D0BC"))) PPC_WEAK_FUNC(sub_8313D0BC);
PPC_FUNC_IMPL(__imp__sub_8313D0BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D0C0"))) PPC_WEAK_FUNC(sub_8313D0C0);
PPC_FUNC_IMPL(__imp__sub_8313D0C0) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,23960
	ctx.r6.s64 = ctx.r10.s64 + 23960;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9396
	ctx.r5.s64 = ctx.r9.s64 + -9396;
	// addi r4,r8,10668
	ctx.r4.s64 = ctx.r8.s64 + 10668;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9348
	ctx.r3.s64 = ctx.r7.s64 + -9348;
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

__attribute__((alias("__imp__sub_8313D138"))) PPC_WEAK_FUNC(sub_8313D138);
PPC_FUNC_IMPL(__imp__sub_8313D138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D13C"))) PPC_WEAK_FUNC(sub_8313D13C);
PPC_FUNC_IMPL(__imp__sub_8313D13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D140"))) PPC_WEAK_FUNC(sub_8313D140);
PPC_FUNC_IMPL(__imp__sub_8313D140) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r7,r10,24128
	ctx.r7.s64 = ctx.r10.s64 + 24128;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10700
	ctx.r4.s64 = ctx.r9.s64 + 10700;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-9300
	ctx.r3.s64 = ctx.r8.s64 + -9300;
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

__attribute__((alias("__imp__sub_8313D1AC"))) PPC_WEAK_FUNC(sub_8313D1AC);
PPC_FUNC_IMPL(__imp__sub_8313D1AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D1B0"))) PPC_WEAK_FUNC(sub_8313D1B0);
PPC_FUNC_IMPL(__imp__sub_8313D1B0) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,24176
	ctx.r6.s64 = ctx.r10.s64 + 24176;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19236
	ctx.r5.s64 = ctx.r9.s64 + -19236;
	// addi r4,r8,10716
	ctx.r4.s64 = ctx.r8.s64 + 10716;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9252
	ctx.r3.s64 = ctx.r7.s64 + -9252;
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

__attribute__((alias("__imp__sub_8313D228"))) PPC_WEAK_FUNC(sub_8313D228);
PPC_FUNC_IMPL(__imp__sub_8313D228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D22C"))) PPC_WEAK_FUNC(sub_8313D22C);
PPC_FUNC_IMPL(__imp__sub_8313D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D230"))) PPC_WEAK_FUNC(sub_8313D230);
PPC_FUNC_IMPL(__imp__sub_8313D230) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,24248
	ctx.r6.s64 = ctx.r10.s64 + 24248;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19236
	ctx.r5.s64 = ctx.r9.s64 + -19236;
	// addi r4,r8,10736
	ctx.r4.s64 = ctx.r8.s64 + 10736;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9204
	ctx.r3.s64 = ctx.r7.s64 + -9204;
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

__attribute__((alias("__imp__sub_8313D2A8"))) PPC_WEAK_FUNC(sub_8313D2A8);
PPC_FUNC_IMPL(__imp__sub_8313D2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D2AC"))) PPC_WEAK_FUNC(sub_8313D2AC);
PPC_FUNC_IMPL(__imp__sub_8313D2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D2B0"))) PPC_WEAK_FUNC(sub_8313D2B0);
PPC_FUNC_IMPL(__imp__sub_8313D2B0) {
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
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-19236
	ctx.r5.s64 = ctx.r10.s64 + -19236;
	// addi r4,r9,10752
	ctx.r4.s64 = ctx.r9.s64 + 10752;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-9156
	ctx.r3.s64 = ctx.r8.s64 + -9156;
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

__attribute__((alias("__imp__sub_8313D314"))) PPC_WEAK_FUNC(sub_8313D314);
PPC_FUNC_IMPL(__imp__sub_8313D314) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D318"))) PPC_WEAK_FUNC(sub_8313D318);
PPC_FUNC_IMPL(__imp__sub_8313D318) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,24320
	ctx.r6.s64 = ctx.r10.s64 + 24320;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9156
	ctx.r5.s64 = ctx.r9.s64 + -9156;
	// addi r4,r8,10776
	ctx.r4.s64 = ctx.r8.s64 + 10776;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9108
	ctx.r3.s64 = ctx.r7.s64 + -9108;
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

__attribute__((alias("__imp__sub_8313D390"))) PPC_WEAK_FUNC(sub_8313D390);
PPC_FUNC_IMPL(__imp__sub_8313D390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D394"))) PPC_WEAK_FUNC(sub_8313D394);
PPC_FUNC_IMPL(__imp__sub_8313D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D398"))) PPC_WEAK_FUNC(sub_8313D398);
PPC_FUNC_IMPL(__imp__sub_8313D398) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,24392
	ctx.r6.s64 = ctx.r10.s64 + 24392;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19236
	ctx.r5.s64 = ctx.r9.s64 + -19236;
	// addi r4,r8,10808
	ctx.r4.s64 = ctx.r8.s64 + 10808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9060
	ctx.r3.s64 = ctx.r7.s64 + -9060;
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

__attribute__((alias("__imp__sub_8313D410"))) PPC_WEAK_FUNC(sub_8313D410);
PPC_FUNC_IMPL(__imp__sub_8313D410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D414"))) PPC_WEAK_FUNC(sub_8313D414);
PPC_FUNC_IMPL(__imp__sub_8313D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D418"))) PPC_WEAK_FUNC(sub_8313D418);
PPC_FUNC_IMPL(__imp__sub_8313D418) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,24416
	ctx.r6.s64 = ctx.r10.s64 + 24416;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-19236
	ctx.r5.s64 = ctx.r9.s64 + -19236;
	// addi r4,r8,10832
	ctx.r4.s64 = ctx.r8.s64 + 10832;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-9012
	ctx.r3.s64 = ctx.r7.s64 + -9012;
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

__attribute__((alias("__imp__sub_8313D490"))) PPC_WEAK_FUNC(sub_8313D490);
PPC_FUNC_IMPL(__imp__sub_8313D490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D494"))) PPC_WEAK_FUNC(sub_8313D494);
PPC_FUNC_IMPL(__imp__sub_8313D494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D498"))) PPC_WEAK_FUNC(sub_8313D498);
PPC_FUNC_IMPL(__imp__sub_8313D498) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,24440
	ctx.r6.s64 = ctx.r10.s64 + 24440;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-9060
	ctx.r5.s64 = ctx.r9.s64 + -9060;
	// addi r4,r8,10860
	ctx.r4.s64 = ctx.r8.s64 + 10860;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-8964
	ctx.r3.s64 = ctx.r7.s64 + -8964;
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

__attribute__((alias("__imp__sub_8313D510"))) PPC_WEAK_FUNC(sub_8313D510);
PPC_FUNC_IMPL(__imp__sub_8313D510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D514"))) PPC_WEAK_FUNC(sub_8313D514);
PPC_FUNC_IMPL(__imp__sub_8313D514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D518"))) PPC_WEAK_FUNC(sub_8313D518);
PPC_FUNC_IMPL(__imp__sub_8313D518) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r11,792
	ctx.r6.s64 = r11.s64 + 792;
	// addi r4,r10,2232
	ctx.r4.s64 = ctx.r10.s64 + 2232;
	// addi r3,r9,-8916
	ctx.r3.s64 = ctx.r9.s64 + -8916;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c24678
	sub_82C24678(ctx, base);
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// addi r3,r8,-13656
	ctx.r3.s64 = ctx.r8.s64 + -13656;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313D55C"))) PPC_WEAK_FUNC(sub_8313D55C);
PPC_FUNC_IMPL(__imp__sub_8313D55C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D560"))) PPC_WEAK_FUNC(sub_8313D560);
PPC_FUNC_IMPL(__imp__sub_8313D560) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-21776
	ctx.r9.s64 = ctx.r10.s64 + -21776;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r7,6616
	ctx.r4.s64 = ctx.r7.s64 + 6616;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-8868
	ctx.r3.s64 = ctx.r6.s64 + -8868;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313D5C8"))) PPC_WEAK_FUNC(sub_8313D5C8);
PPC_FUNC_IMPL(__imp__sub_8313D5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D5CC"))) PPC_WEAK_FUNC(sub_8313D5CC);
PPC_FUNC_IMPL(__imp__sub_8313D5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D5D0"))) PPC_WEAK_FUNC(sub_8313D5D0);
PPC_FUNC_IMPL(__imp__sub_8313D5D0) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r9,6488
	ctx.r4.s64 = ctx.r9.s64 + 6488;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-8820
	ctx.r3.s64 = ctx.r8.s64 + -8820;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313D634"))) PPC_WEAK_FUNC(sub_8313D634);
PPC_FUNC_IMPL(__imp__sub_8313D634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D638"))) PPC_WEAK_FUNC(sub_8313D638);
PPC_FUNC_IMPL(__imp__sub_8313D638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r8,r9,29664
	ctx.r8.s64 = ctx.r9.s64 + 29664;
	// lwz r11,29620(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29620);
	// lwz r10,29616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29616);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D65C"))) PPC_WEAK_FUNC(sub_8313D65C);
PPC_FUNC_IMPL(__imp__sub_8313D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D660"))) PPC_WEAK_FUNC(sub_8313D660);
PPC_FUNC_IMPL(__imp__sub_8313D660) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,29664
	ctx.r6.s64 = ctx.r10.s64 + 29664;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,6568
	ctx.r4.s64 = ctx.r8.s64 + 6568;
	// addi r3,r7,-8772
	ctx.r3.s64 = ctx.r7.s64 + -8772;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,10
	r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-21672
	ctx.r9.s64 = ctx.r9.s64 + -21672;
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
	// li r6,40
	ctx.r6.s64 = 40;
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

__attribute__((alias("__imp__sub_8313D6DC"))) PPC_WEAK_FUNC(sub_8313D6DC);
PPC_FUNC_IMPL(__imp__sub_8313D6DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D6E0"))) PPC_WEAK_FUNC(sub_8313D6E0);
PPC_FUNC_IMPL(__imp__sub_8313D6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r8,r9,29904
	ctx.r8.s64 = ctx.r9.s64 + 29904;
	// lwz r11,29620(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29620);
	// lwz r10,29616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29616);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, r11.u32);
	// stw r10,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D704"))) PPC_WEAK_FUNC(sub_8313D704);
PPC_FUNC_IMPL(__imp__sub_8313D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D708"))) PPC_WEAK_FUNC(sub_8313D708);
PPC_FUNC_IMPL(__imp__sub_8313D708) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,29904
	ctx.r7.s64 = ctx.r10.s64 + 29904;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,6584
	ctx.r4.s64 = ctx.r9.s64 + 6584;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-8724
	ctx.r3.s64 = ctx.r8.s64 + -8724;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
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

__attribute__((alias("__imp__sub_8313D778"))) PPC_WEAK_FUNC(sub_8313D778);
PPC_FUNC_IMPL(__imp__sub_8313D778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D77C"))) PPC_WEAK_FUNC(sub_8313D77C);
PPC_FUNC_IMPL(__imp__sub_8313D77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D780"))) PPC_WEAK_FUNC(sub_8313D780);
PPC_FUNC_IMPL(__imp__sub_8313D780) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-21616
	ctx.r9.s64 = ctx.r10.s64 + -21616;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r7,6604
	ctx.r4.s64 = ctx.r7.s64 + 6604;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-8676
	ctx.r3.s64 = ctx.r6.s64 + -8676;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313D7E8"))) PPC_WEAK_FUNC(sub_8313D7E8);
PPC_FUNC_IMPL(__imp__sub_8313D7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D7EC"))) PPC_WEAK_FUNC(sub_8313D7EC);
PPC_FUNC_IMPL(__imp__sub_8313D7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D7F0"))) PPC_WEAK_FUNC(sub_8313D7F0);
PPC_FUNC_IMPL(__imp__sub_8313D7F0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-21592
	ctx.r6.s64 = ctx.r10.s64 + -21592;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-8676
	ctx.r5.s64 = ctx.r9.s64 + -8676;
	// addi r4,r8,6636
	ctx.r4.s64 = ctx.r8.s64 + 6636;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-8628
	ctx.r3.s64 = ctx.r7.s64 + -8628;
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
	// li r6,48
	ctx.r6.s64 = 48;
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

__attribute__((alias("__imp__sub_8313D868"))) PPC_WEAK_FUNC(sub_8313D868);
PPC_FUNC_IMPL(__imp__sub_8313D868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D86C"))) PPC_WEAK_FUNC(sub_8313D86C);
PPC_FUNC_IMPL(__imp__sub_8313D86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D870"))) PPC_WEAK_FUNC(sub_8313D870);
PPC_FUNC_IMPL(__imp__sub_8313D870) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-21492
	ctx.r10.s64 = r11.s64 + -21492;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-8580
	ctx.r8.s64 = ctx.r9.s64 + -8580;
	// addi r11,r11,6636
	r11.s64 = r11.s64 + 6636;
	// lis r10,-32060
	ctx.r10.s64 = -2101084160;
	// stw r11,-8580(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8580, r11.u32);
	// lis r9,-32060
	ctx.r9.s64 = -2101084160;
	// addi r10,r10,5104
	ctx.r10.s64 = ctx.r10.s64 + 5104;
	// addi r9,r9,5064
	ctx.r9.s64 = ctx.r9.s64 + 5064;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313D8D4"))) PPC_WEAK_FUNC(sub_8313D8D4);
PPC_FUNC_IMPL(__imp__sub_8313D8D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D8D8"))) PPC_WEAK_FUNC(sub_8313D8D8);
PPC_FUNC_IMPL(__imp__sub_8313D8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13632
	ctx.r3.s64 = r11.s64 + -13632;
}

__attribute__((alias("__imp__sub_8313D8E0"))) PPC_WEAK_FUNC(sub_8313D8E0);
PPC_FUNC_IMPL(__imp__sub_8313D8E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313D8E4"))) PPC_WEAK_FUNC(sub_8313D8E4);
PPC_FUNC_IMPL(__imp__sub_8313D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D8E8"))) PPC_WEAK_FUNC(sub_8313D8E8);
PPC_FUNC_IMPL(__imp__sub_8313D8E8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-19500
	ctx.r6.s64 = ctx.r10.s64 + -19500;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-5628
	ctx.r5.s64 = ctx.r9.s64 + -5628;
	// addi r4,r8,14192
	ctx.r4.s64 = ctx.r8.s64 + 14192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-8500
	ctx.r3.s64 = ctx.r7.s64 + -8500;
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
	// li r6,92
	ctx.r6.s64 = 92;
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

__attribute__((alias("__imp__sub_8313D960"))) PPC_WEAK_FUNC(sub_8313D960);
PPC_FUNC_IMPL(__imp__sub_8313D960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D964"))) PPC_WEAK_FUNC(sub_8313D964);
PPC_FUNC_IMPL(__imp__sub_8313D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D968"))) PPC_WEAK_FUNC(sub_8313D968);
PPC_FUNC_IMPL(__imp__sub_8313D968) {
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
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,9872
	ctx.r4.s64 = ctx.r10.s64 + 9872;
	// addi r3,r9,-7660
	ctx.r3.s64 = ctx.r9.s64 + -7660;
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

__attribute__((alias("__imp__sub_8313D9C8"))) PPC_WEAK_FUNC(sub_8313D9C8);
PPC_FUNC_IMPL(__imp__sub_8313D9C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D9CC"))) PPC_WEAK_FUNC(sub_8313D9CC);
PPC_FUNC_IMPL(__imp__sub_8313D9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313D9D0"))) PPC_WEAK_FUNC(sub_8313D9D0);
PPC_FUNC_IMPL(__imp__sub_8313D9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r10,31304
	ctx.r9.s64 = ctx.r10.s64 + 31304;
	// lwz r11,31296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31296);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313D9E8"))) PPC_WEAK_FUNC(sub_8313D9E8);
PPC_FUNC_IMPL(__imp__sub_8313D9E8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r11,-19076
	ctx.r9.s64 = r11.s64 + -19076;
	// addi r4,r10,31304
	ctx.r4.s64 = ctx.r10.s64 + 31304;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-7420
	ctx.r5.s64 = ctx.r8.s64 + -7420;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,11548
	ctx.r4.s64 = ctx.r7.s64 + 11548;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-7612
	ctx.r3.s64 = ctx.r6.s64 + -7612;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313DA60"))) PPC_WEAK_FUNC(sub_8313DA60);
PPC_FUNC_IMPL(__imp__sub_8313DA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DA64"))) PPC_WEAK_FUNC(sub_8313DA64);
PPC_FUNC_IMPL(__imp__sub_8313DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DA68"))) PPC_WEAK_FUNC(sub_8313DA68);
PPC_FUNC_IMPL(__imp__sub_8313DA68) {
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
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,11800
	ctx.r4.s64 = ctx.r10.s64 + 11800;
	// addi r3,r9,-7564
	ctx.r3.s64 = ctx.r9.s64 + -7564;
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

__attribute__((alias("__imp__sub_8313DAC8"))) PPC_WEAK_FUNC(sub_8313DAC8);
PPC_FUNC_IMPL(__imp__sub_8313DAC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DACC"))) PPC_WEAK_FUNC(sub_8313DACC);
PPC_FUNC_IMPL(__imp__sub_8313DACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DAD0"))) PPC_WEAK_FUNC(sub_8313DAD0);
PPC_FUNC_IMPL(__imp__sub_8313DAD0) {
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
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,9848
	ctx.r4.s64 = ctx.r10.s64 + 9848;
	// addi r3,r9,-7516
	ctx.r3.s64 = ctx.r9.s64 + -7516;
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

__attribute__((alias("__imp__sub_8313DB30"))) PPC_WEAK_FUNC(sub_8313DB30);
PPC_FUNC_IMPL(__imp__sub_8313DB30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DB34"))) PPC_WEAK_FUNC(sub_8313DB34);
PPC_FUNC_IMPL(__imp__sub_8313DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DB38"))) PPC_WEAK_FUNC(sub_8313DB38);
PPC_FUNC_IMPL(__imp__sub_8313DB38) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-11584
	ctx.r5.s64 = ctx.r10.s64 + -11584;
	// addi r4,r9,11756
	ctx.r4.s64 = ctx.r9.s64 + 11756;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-7468
	ctx.r3.s64 = ctx.r8.s64 + -7468;
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

__attribute__((alias("__imp__sub_8313DB9C"))) PPC_WEAK_FUNC(sub_8313DB9C);
PPC_FUNC_IMPL(__imp__sub_8313DB9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DBA0"))) PPC_WEAK_FUNC(sub_8313DBA0);
PPC_FUNC_IMPL(__imp__sub_8313DBA0) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r10,-11584
	ctx.r5.s64 = ctx.r10.s64 + -11584;
	// addi r4,r9,11400
	ctx.r4.s64 = ctx.r9.s64 + 11400;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,-7420
	ctx.r3.s64 = ctx.r8.s64 + -7420;
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

__attribute__((alias("__imp__sub_8313DC04"))) PPC_WEAK_FUNC(sub_8313DC04);
PPC_FUNC_IMPL(__imp__sub_8313DC04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC08"))) PPC_WEAK_FUNC(sub_8313DC08);
PPC_FUNC_IMPL(__imp__sub_8313DC08) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-18992
	ctx.r9.s64 = ctx.r10.s64 + -18992;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r7,9828
	ctx.r4.s64 = ctx.r7.s64 + 9828;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-7372
	ctx.r3.s64 = ctx.r6.s64 + -7372;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313DC70"))) PPC_WEAK_FUNC(sub_8313DC70);
PPC_FUNC_IMPL(__imp__sub_8313DC70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC74"))) PPC_WEAK_FUNC(sub_8313DC74);
PPC_FUNC_IMPL(__imp__sub_8313DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DC78"))) PPC_WEAK_FUNC(sub_8313DC78);
PPC_FUNC_IMPL(__imp__sub_8313DC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r10,31536
	ctx.r9.s64 = ctx.r10.s64 + 31536;
	// lwz r11,31528(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31528);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DC90"))) PPC_WEAK_FUNC(sub_8313DC90);
PPC_FUNC_IMPL(__imp__sub_8313DC90) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r5,r10,31536
	ctx.r5.s64 = ctx.r10.s64 + 31536;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,9808
	ctx.r4.s64 = ctx.r7.s64 + 9808;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-7324
	ctx.r3.s64 = ctx.r6.s64 + -7324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,3
	r31.s64 = 3;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-18916
	ctx.r9.s64 = ctx.r9.s64 + -18916;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,48
	ctx.r6.s64 = 48;
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

__attribute__((alias("__imp__sub_8313DD0C"))) PPC_WEAK_FUNC(sub_8313DD0C);
PPC_FUNC_IMPL(__imp__sub_8313DD0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DD10"))) PPC_WEAK_FUNC(sub_8313DD10);
PPC_FUNC_IMPL(__imp__sub_8313DD10) {
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
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r10,9768
	ctx.r4.s64 = ctx.r10.s64 + 9768;
	// addi r3,r9,-7276
	ctx.r3.s64 = ctx.r9.s64 + -7276;
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

__attribute__((alias("__imp__sub_8313DD70"))) PPC_WEAK_FUNC(sub_8313DD70);
PPC_FUNC_IMPL(__imp__sub_8313DD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DD74"))) PPC_WEAK_FUNC(sub_8313DD74);
PPC_FUNC_IMPL(__imp__sub_8313DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DD78"))) PPC_WEAK_FUNC(sub_8313DD78);
PPC_FUNC_IMPL(__imp__sub_8313DD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r10,31612
	ctx.r9.s64 = ctx.r10.s64 + 31612;
	// lwz r11,31608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31608);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DD90"))) PPC_WEAK_FUNC(sub_8313DD90);
PPC_FUNC_IMPL(__imp__sub_8313DD90) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r11,-18864
	ctx.r9.s64 = r11.s64 + -18864;
	// addi r4,r10,31612
	ctx.r4.s64 = ctx.r10.s64 + 31612;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r8,-11584
	ctx.r5.s64 = ctx.r8.s64 + -11584;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r4,r7,10908
	ctx.r4.s64 = ctx.r7.s64 + 10908;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-7228
	ctx.r3.s64 = ctx.r6.s64 + -7228;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
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
}

__attribute__((alias("__imp__sub_8313DE04"))) PPC_WEAK_FUNC(sub_8313DE04);
PPC_FUNC_IMPL(__imp__sub_8313DE04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE08"))) PPC_WEAK_FUNC(sub_8313DE08);
PPC_FUNC_IMPL(__imp__sub_8313DE08) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-18832
	ctx.r6.s64 = ctx.r10.s64 + -18832;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7228
	ctx.r5.s64 = ctx.r9.s64 + -7228;
	// addi r4,r8,10924
	ctx.r4.s64 = ctx.r8.s64 + 10924;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-7180
	ctx.r3.s64 = ctx.r7.s64 + -7180;
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
	// li r6,48
	ctx.r6.s64 = 48;
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

__attribute__((alias("__imp__sub_8313DE80"))) PPC_WEAK_FUNC(sub_8313DE80);
PPC_FUNC_IMPL(__imp__sub_8313DE80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DE84"))) PPC_WEAK_FUNC(sub_8313DE84);
PPC_FUNC_IMPL(__imp__sub_8313DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DE88"))) PPC_WEAK_FUNC(sub_8313DE88);
PPC_FUNC_IMPL(__imp__sub_8313DE88) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-18736
	ctx.r6.s64 = ctx.r10.s64 + -18736;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7180
	ctx.r5.s64 = ctx.r9.s64 + -7180;
	// addi r4,r8,10948
	ctx.r4.s64 = ctx.r8.s64 + 10948;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-7132
	ctx.r3.s64 = ctx.r7.s64 + -7132;
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
	// li r6,64
	ctx.r6.s64 = 64;
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

__attribute__((alias("__imp__sub_8313DF00"))) PPC_WEAK_FUNC(sub_8313DF00);
PPC_FUNC_IMPL(__imp__sub_8313DF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DF04"))) PPC_WEAK_FUNC(sub_8313DF04);
PPC_FUNC_IMPL(__imp__sub_8313DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DF08"))) PPC_WEAK_FUNC(sub_8313DF08);
PPC_FUNC_IMPL(__imp__sub_8313DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c6b350
	sub_82C6B350(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-7084
	ctx.r8.s64 = ctx.r9.s64 + -7084;
	// addi r11,r11,10948
	r11.s64 = r11.s64 + 10948;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-7084(r9)
	PPC_STORE_U32(ctx.r9.u32 + -7084, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-19832
	ctx.r10.s64 = ctx.r10.s64 + -19832;
	// addi r9,r9,-19872
	ctx.r9.s64 = ctx.r9.s64 + -19872;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313DF60"))) PPC_WEAK_FUNC(sub_8313DF60);
PPC_FUNC_IMPL(__imp__sub_8313DF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DF64"))) PPC_WEAK_FUNC(sub_8313DF64);
PPC_FUNC_IMPL(__imp__sub_8313DF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313DF68"))) PPC_WEAK_FUNC(sub_8313DF68);
PPC_FUNC_IMPL(__imp__sub_8313DF68) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-18428
	ctx.r9.s64 = ctx.r10.s64 + -18428;
	// addi r4,r8,11844
	ctx.r4.s64 = ctx.r8.s64 + 11844;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-7068
	ctx.r3.s64 = ctx.r7.s64 + -7068;
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
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
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

__attribute__((alias("__imp__sub_8313DFCC"))) PPC_WEAK_FUNC(sub_8313DFCC);
PPC_FUNC_IMPL(__imp__sub_8313DFCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313DFD0"))) PPC_WEAK_FUNC(sub_8313DFD0);
PPC_FUNC_IMPL(__imp__sub_8313DFD0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-18368
	ctx.r6.s64 = ctx.r10.s64 + -18368;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-5532
	ctx.r5.s64 = ctx.r9.s64 + -5532;
	// addi r4,r8,9740
	ctx.r4.s64 = ctx.r8.s64 + 9740;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-7020
	ctx.r3.s64 = ctx.r7.s64 + -7020;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_8313E048"))) PPC_WEAK_FUNC(sub_8313E048);
PPC_FUNC_IMPL(__imp__sub_8313E048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E04C"))) PPC_WEAK_FUNC(sub_8313E04C);
PPC_FUNC_IMPL(__imp__sub_8313E04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E050"))) PPC_WEAK_FUNC(sub_8313E050);
PPC_FUNC_IMPL(__imp__sub_8313E050) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-18272
	ctx.r6.s64 = ctx.r10.s64 + -18272;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-6364
	ctx.r5.s64 = ctx.r9.s64 + -6364;
	// addi r4,r8,10748
	ctx.r4.s64 = ctx.r8.s64 + 10748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-6972
	ctx.r3.s64 = ctx.r7.s64 + -6972;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_8313E0CC"))) PPC_WEAK_FUNC(sub_8313E0CC);
PPC_FUNC_IMPL(__imp__sub_8313E0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E0D0"))) PPC_WEAK_FUNC(sub_8313E0D0);
PPC_FUNC_IMPL(__imp__sub_8313E0D0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r6,r10,-18200
	ctx.r6.s64 = ctx.r10.s64 + -18200;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,10784
	ctx.r4.s64 = ctx.r8.s64 + 10784;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-6924
	ctx.r3.s64 = ctx.r7.s64 + -6924;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,8
	r31.s64 = 8;
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
	// li r6,104
	ctx.r6.s64 = 104;
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

__attribute__((alias("__imp__sub_8313E14C"))) PPC_WEAK_FUNC(sub_8313E14C);
PPC_FUNC_IMPL(__imp__sub_8313E14C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E150"))) PPC_WEAK_FUNC(sub_8313E150);
PPC_FUNC_IMPL(__imp__sub_8313E150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c730e0
	sub_82C730E0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6876
	ctx.r8.s64 = ctx.r9.s64 + -6876;
	// addi r11,r11,10784
	r11.s64 = r11.s64 + 10784;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6876(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6876, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-19256
	ctx.r10.s64 = ctx.r10.s64 + -19256;
	// addi r9,r9,-19240
	ctx.r9.s64 = ctx.r9.s64 + -19240;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E1A8"))) PPC_WEAK_FUNC(sub_8313E1A8);
PPC_FUNC_IMPL(__imp__sub_8313E1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E1AC"))) PPC_WEAK_FUNC(sub_8313E1AC);
PPC_FUNC_IMPL(__imp__sub_8313E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E1B0"))) PPC_WEAK_FUNC(sub_8313E1B0);
PPC_FUNC_IMPL(__imp__sub_8313E1B0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-18008
	ctx.r6.s64 = ctx.r10.s64 + -18008;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,10832
	ctx.r4.s64 = ctx.r8.s64 + 10832;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-6860
	ctx.r3.s64 = ctx.r7.s64 + -6860;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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
	// li r6,44
	ctx.r6.s64 = 44;
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

__attribute__((alias("__imp__sub_8313E22C"))) PPC_WEAK_FUNC(sub_8313E22C);
PPC_FUNC_IMPL(__imp__sub_8313E22C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E230"))) PPC_WEAK_FUNC(sub_8313E230);
PPC_FUNC_IMPL(__imp__sub_8313E230) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c72a60
	sub_82C72A60(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6812
	ctx.r8.s64 = ctx.r9.s64 + -6812;
	// addi r11,r11,10832
	r11.s64 = r11.s64 + 10832;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6812(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6812, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-19152
	ctx.r10.s64 = ctx.r10.s64 + -19152;
	// addi r9,r9,-19136
	ctx.r9.s64 = ctx.r9.s64 + -19136;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E288"))) PPC_WEAK_FUNC(sub_8313E288);
PPC_FUNC_IMPL(__imp__sub_8313E288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E28C"))) PPC_WEAK_FUNC(sub_8313E28C);
PPC_FUNC_IMPL(__imp__sub_8313E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E290"))) PPC_WEAK_FUNC(sub_8313E290);
PPC_FUNC_IMPL(__imp__sub_8313E290) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-17936
	ctx.r6.s64 = ctx.r10.s64 + -17936;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-6060
	ctx.r5.s64 = ctx.r9.s64 + -6060;
	// addi r4,r8,10880
	ctx.r4.s64 = ctx.r8.s64 + 10880;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-6796
	ctx.r3.s64 = ctx.r7.s64 + -6796;
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
	// li r6,272
	ctx.r6.s64 = 272;
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

__attribute__((alias("__imp__sub_8313E308"))) PPC_WEAK_FUNC(sub_8313E308);
PPC_FUNC_IMPL(__imp__sub_8313E308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E30C"))) PPC_WEAK_FUNC(sub_8313E30C);
PPC_FUNC_IMPL(__imp__sub_8313E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E310"))) PPC_WEAK_FUNC(sub_8313E310);
PPC_FUNC_IMPL(__imp__sub_8313E310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c730f0
	sub_82C730F0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6748
	ctx.r8.s64 = ctx.r9.s64 + -6748;
	// addi r11,r11,10880
	r11.s64 = r11.s64 + 10880;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6748(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6748, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-19048
	ctx.r10.s64 = ctx.r10.s64 + -19048;
	// addi r9,r9,-19032
	ctx.r9.s64 = ctx.r9.s64 + -19032;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E368"))) PPC_WEAK_FUNC(sub_8313E368);
PPC_FUNC_IMPL(__imp__sub_8313E368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E36C"))) PPC_WEAK_FUNC(sub_8313E36C);
PPC_FUNC_IMPL(__imp__sub_8313E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E370"))) PPC_WEAK_FUNC(sub_8313E370);
PPC_FUNC_IMPL(__imp__sub_8313E370) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17888
	ctx.r7.s64 = ctx.r10.s64 + -17888;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10700
	ctx.r4.s64 = ctx.r9.s64 + 10700;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6732
	ctx.r3.s64 = ctx.r8.s64 + -6732;
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
	// li r6,16
	ctx.r6.s64 = 16;
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

__attribute__((alias("__imp__sub_8313E3DC"))) PPC_WEAK_FUNC(sub_8313E3DC);
PPC_FUNC_IMPL(__imp__sub_8313E3DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E3E0"))) PPC_WEAK_FUNC(sub_8313E3E0);
PPC_FUNC_IMPL(__imp__sub_8313E3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r10,31856
	ctx.r9.s64 = ctx.r10.s64 + 31856;
	// lwz r11,31740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31740);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E3F8"))) PPC_WEAK_FUNC(sub_8313E3F8);
PPC_FUNC_IMPL(__imp__sub_8313E3F8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r5,r10,-17792
	ctx.r5.s64 = ctx.r10.s64 + -17792;
	// addi r4,r9,31856
	ctx.r4.s64 = ctx.r9.s64 + 31856;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11776
	ctx.r5.s64 = ctx.r8.s64 + -11776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,10728
	ctx.r4.s64 = ctx.r7.s64 + 10728;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-6684
	ctx.r3.s64 = ctx.r6.s64 + -6684;
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
	// li r6,68
	ctx.r6.s64 = 68;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E470"))) PPC_WEAK_FUNC(sub_8313E470);
PPC_FUNC_IMPL(__imp__sub_8313E470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E474"))) PPC_WEAK_FUNC(sub_8313E474);
PPC_FUNC_IMPL(__imp__sub_8313E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E478"))) PPC_WEAK_FUNC(sub_8313E478);
PPC_FUNC_IMPL(__imp__sub_8313E478) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c6b680
	sub_82C6B680(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6636
	ctx.r8.s64 = ctx.r9.s64 + -6636;
	// addi r11,r11,10728
	r11.s64 = r11.s64 + 10728;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6636(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6636, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-18880
	ctx.r10.s64 = ctx.r10.s64 + -18880;
	// addi r9,r9,-18920
	ctx.r9.s64 = ctx.r9.s64 + -18920;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E4D0"))) PPC_WEAK_FUNC(sub_8313E4D0);
PPC_FUNC_IMPL(__imp__sub_8313E4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E4D4"))) PPC_WEAK_FUNC(sub_8313E4D4);
PPC_FUNC_IMPL(__imp__sub_8313E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E4D8"))) PPC_WEAK_FUNC(sub_8313E4D8);
PPC_FUNC_IMPL(__imp__sub_8313E4D8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-17680
	ctx.r6.s64 = ctx.r10.s64 + -17680;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-6364
	ctx.r5.s64 = ctx.r9.s64 + -6364;
	// addi r4,r8,10676
	ctx.r4.s64 = ctx.r8.s64 + 10676;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-6620
	ctx.r3.s64 = ctx.r7.s64 + -6620;
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

__attribute__((alias("__imp__sub_8313E550"))) PPC_WEAK_FUNC(sub_8313E550);
PPC_FUNC_IMPL(__imp__sub_8313E550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E554"))) PPC_WEAK_FUNC(sub_8313E554);
PPC_FUNC_IMPL(__imp__sub_8313E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E558"))) PPC_WEAK_FUNC(sub_8313E558);
PPC_FUNC_IMPL(__imp__sub_8313E558) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17656
	ctx.r7.s64 = ctx.r10.s64 + -17656;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,11716
	ctx.r4.s64 = ctx.r9.s64 + 11716;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6572
	ctx.r3.s64 = ctx.r8.s64 + -6572;
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
	// li r6,32
	ctx.r6.s64 = 32;
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

__attribute__((alias("__imp__sub_8313E5C4"))) PPC_WEAK_FUNC(sub_8313E5C4);
PPC_FUNC_IMPL(__imp__sub_8313E5C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E5C8"))) PPC_WEAK_FUNC(sub_8313E5C8);
PPC_FUNC_IMPL(__imp__sub_8313E5C8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,-17608
	ctx.r6.s64 = ctx.r10.s64 + -17608;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11584
	ctx.r5.s64 = ctx.r9.s64 + -11584;
	// addi r4,r8,11736
	ctx.r4.s64 = ctx.r8.s64 + 11736;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-6524
	ctx.r3.s64 = ctx.r7.s64 + -6524;
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

__attribute__((alias("__imp__sub_8313E640"))) PPC_WEAK_FUNC(sub_8313E640);
PPC_FUNC_IMPL(__imp__sub_8313E640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E644"))) PPC_WEAK_FUNC(sub_8313E644);
PPC_FUNC_IMPL(__imp__sub_8313E644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E648"))) PPC_WEAK_FUNC(sub_8313E648);
PPC_FUNC_IMPL(__imp__sub_8313E648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r8,r9,32080
	ctx.r8.s64 = ctx.r9.s64 + 32080;
	// lwz r11,32056(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32056);
	// lwz r10,32060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32060);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, r11.u32);
	// stw r10,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E66C"))) PPC_WEAK_FUNC(sub_8313E66C);
PPC_FUNC_IMPL(__imp__sub_8313E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E670"))) PPC_WEAK_FUNC(sub_8313E670);
PPC_FUNC_IMPL(__imp__sub_8313E670) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31935
	ctx.r9.s64 = -2092892160;
	// addi r6,r10,-17408
	ctx.r6.s64 = ctx.r10.s64 + -17408;
	// addi r5,r9,32080
	ctx.r5.s64 = ctx.r9.s64 + 32080;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,11288
	ctx.r4.s64 = ctx.r8.s64 + 11288;
	// addi r3,r7,-6476
	ctx.r3.s64 = ctx.r7.s64 + -6476;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,15
	r31.s64 = 15;
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
	// li r6,56
	ctx.r6.s64 = 56;
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

__attribute__((alias("__imp__sub_8313E6EC"))) PPC_WEAK_FUNC(sub_8313E6EC);
PPC_FUNC_IMPL(__imp__sub_8313E6EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E6F0"))) PPC_WEAK_FUNC(sub_8313E6F0);
PPC_FUNC_IMPL(__imp__sub_8313E6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r10,32440
	ctx.r9.s64 = ctx.r10.s64 + 32440;
	// lwz r11,31740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31740);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E708"))) PPC_WEAK_FUNC(sub_8313E708);
PPC_FUNC_IMPL(__imp__sub_8313E708) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r9,r11,-17448
	ctx.r9.s64 = r11.s64 + -17448;
	// addi r4,r10,32440
	ctx.r4.s64 = ctx.r10.s64 + 32440;
	// addi r5,r9,104
	ctx.r5.s64 = ctx.r9.s64 + 104;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11776
	ctx.r5.s64 = ctx.r8.s64 + -11776;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,11308
	ctx.r4.s64 = ctx.r7.s64 + 11308;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-6428
	ctx.r3.s64 = ctx.r6.s64 + -6428;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E780"))) PPC_WEAK_FUNC(sub_8313E780);
PPC_FUNC_IMPL(__imp__sub_8313E780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E784"))) PPC_WEAK_FUNC(sub_8313E784);
PPC_FUNC_IMPL(__imp__sub_8313E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E788"))) PPC_WEAK_FUNC(sub_8313E788);
PPC_FUNC_IMPL(__imp__sub_8313E788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c75960
	sub_82C75960(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6380
	ctx.r8.s64 = ctx.r9.s64 + -6380;
	// addi r11,r11,11308
	r11.s64 = r11.s64 + 11308;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6380(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6380, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-17800
	ctx.r10.s64 = ctx.r10.s64 + -17800;
	// addi r9,r9,-17784
	ctx.r9.s64 = ctx.r9.s64 + -17784;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E7E0"))) PPC_WEAK_FUNC(sub_8313E7E0);
PPC_FUNC_IMPL(__imp__sub_8313E7E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E7E4"))) PPC_WEAK_FUNC(sub_8313E7E4);
PPC_FUNC_IMPL(__imp__sub_8313E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E7E8"))) PPC_WEAK_FUNC(sub_8313E7E8);
PPC_FUNC_IMPL(__imp__sub_8313E7E8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17312
	ctx.r7.s64 = ctx.r10.s64 + -17312;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10660
	ctx.r4.s64 = ctx.r9.s64 + 10660;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6364
	ctx.r3.s64 = ctx.r8.s64 + -6364;
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
	// li r6,4
	ctx.r6.s64 = 4;
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

__attribute__((alias("__imp__sub_8313E854"))) PPC_WEAK_FUNC(sub_8313E854);
PPC_FUNC_IMPL(__imp__sub_8313E854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E858"))) PPC_WEAK_FUNC(sub_8313E858);
PPC_FUNC_IMPL(__imp__sub_8313E858) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-17248
	ctx.r7.s64 = ctx.r10.s64 + -17248;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10620
	ctx.r4.s64 = ctx.r9.s64 + 10620;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6316
	ctx.r3.s64 = ctx.r8.s64 + -6316;
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
	// li r6,16
	ctx.r6.s64 = 16;
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

__attribute__((alias("__imp__sub_8313E8C4"))) PPC_WEAK_FUNC(sub_8313E8C4);
PPC_FUNC_IMPL(__imp__sub_8313E8C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E8C8"))) PPC_WEAK_FUNC(sub_8313E8C8);
PPC_FUNC_IMPL(__imp__sub_8313E8C8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-17272
	ctx.r9.s64 = r11.s64 + -17272;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r9,120
	ctx.r6.s64 = ctx.r9.s64 + 120;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-11776
	ctx.r5.s64 = ctx.r10.s64 + -11776;
	// addi r4,r8,10644
	ctx.r4.s64 = ctx.r8.s64 + 10644;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-6268
	ctx.r3.s64 = ctx.r7.s64 + -6268;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,6
	r31.s64 = 6;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_8313E940"))) PPC_WEAK_FUNC(sub_8313E940);
PPC_FUNC_IMPL(__imp__sub_8313E940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E944"))) PPC_WEAK_FUNC(sub_8313E944);
PPC_FUNC_IMPL(__imp__sub_8313E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E948"))) PPC_WEAK_FUNC(sub_8313E948);
PPC_FUNC_IMPL(__imp__sub_8313E948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826372c0
	sub_826372C0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6220
	ctx.r8.s64 = ctx.r9.s64 + -6220;
	// addi r11,r11,10644
	r11.s64 = r11.s64 + 10644;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6220(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6220, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-17608
	ctx.r10.s64 = ctx.r10.s64 + -17608;
	// addi r9,r9,-17648
	ctx.r9.s64 = ctx.r9.s64 + -17648;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313E9A0"))) PPC_WEAK_FUNC(sub_8313E9A0);
PPC_FUNC_IMPL(__imp__sub_8313E9A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E9A4"))) PPC_WEAK_FUNC(sub_8313E9A4);
PPC_FUNC_IMPL(__imp__sub_8313E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E9A8"))) PPC_WEAK_FUNC(sub_8313E9A8);
PPC_FUNC_IMPL(__imp__sub_8313E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r9,-32768
	ctx.r8.s64 = ctx.r9.s64 + -32768;
	// lwz r11,32656(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32656);
	// lwz r10,32652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32652);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313E9CC"))) PPC_WEAK_FUNC(sub_8313E9CC);
PPC_FUNC_IMPL(__imp__sub_8313E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313E9D0"))) PPC_WEAK_FUNC(sub_8313E9D0);
PPC_FUNC_IMPL(__imp__sub_8313E9D0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-32768
	ctx.r7.s64 = ctx.r10.s64 + -32768;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,10384
	ctx.r4.s64 = ctx.r9.s64 + 10384;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-6204
	ctx.r3.s64 = ctx.r8.s64 + -6204;
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
	// li r6,20
	ctx.r6.s64 = 20;
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

__attribute__((alias("__imp__sub_8313EA3C"))) PPC_WEAK_FUNC(sub_8313EA3C);
PPC_FUNC_IMPL(__imp__sub_8313EA3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EA40"))) PPC_WEAK_FUNC(sub_8313EA40);
PPC_FUNC_IMPL(__imp__sub_8313EA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-32576
	ctx.r9.s64 = ctx.r10.s64 + -32576;
	// lwz r11,32648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32648);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EA58"))) PPC_WEAK_FUNC(sub_8313EA58);
PPC_FUNC_IMPL(__imp__sub_8313EA58) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r5,r10,-16860
	ctx.r5.s64 = ctx.r10.s64 + -16860;
	// addi r4,r9,-32576
	ctx.r4.s64 = ctx.r9.s64 + -32576;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-6204
	ctx.r5.s64 = ctx.r8.s64 + -6204;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,10452
	ctx.r4.s64 = ctx.r7.s64 + 10452;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-6156
	ctx.r3.s64 = ctx.r6.s64 + -6156;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313EAD4"))) PPC_WEAK_FUNC(sub_8313EAD4);
PPC_FUNC_IMPL(__imp__sub_8313EAD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EAD8"))) PPC_WEAK_FUNC(sub_8313EAD8);
PPC_FUNC_IMPL(__imp__sub_8313EAD8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-16808
	ctx.r6.s64 = ctx.r10.s64 + -16808;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-6204
	ctx.r5.s64 = ctx.r9.s64 + -6204;
	// addi r4,r8,10492
	ctx.r4.s64 = ctx.r8.s64 + 10492;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-6108
	ctx.r3.s64 = ctx.r7.s64 + -6108;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,3
	r31.s64 = 3;
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
	// li r6,64
	ctx.r6.s64 = 64;
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

__attribute__((alias("__imp__sub_8313EB54"))) PPC_WEAK_FUNC(sub_8313EB54);
PPC_FUNC_IMPL(__imp__sub_8313EB54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EB58"))) PPC_WEAK_FUNC(sub_8313EB58);
PPC_FUNC_IMPL(__imp__sub_8313EB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-32312
	ctx.r9.s64 = ctx.r10.s64 + -32312;
	// lwz r11,31740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31740);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EB70"))) PPC_WEAK_FUNC(sub_8313EB70);
PPC_FUNC_IMPL(__imp__sub_8313EB70) {
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
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r10,r10,32660
	ctx.r10.s64 = ctx.r10.s64 + 32660;
	// addi r9,r9,-32312
	ctx.r9.s64 = ctx.r9.s64 + -32312;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// li r10,13
	ctx.r10.s64 = 13;
	// lis r3,-31919
	ctx.r3.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r9,r8,-16920
	ctx.r9.s64 = ctx.r8.s64 + -16920;
	// addi r5,r7,-11776
	ctx.r5.s64 = ctx.r7.s64 + -11776;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r4,r6,10596
	ctx.r4.s64 = ctx.r6.s64 + 10596;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r3,r3,-6060
	ctx.r3.s64 = ctx.r3.s64 + -6060;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,240
	ctx.r6.s64 = 240;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313EBF0"))) PPC_WEAK_FUNC(sub_8313EBF0);
PPC_FUNC_IMPL(__imp__sub_8313EBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EBF4"))) PPC_WEAK_FUNC(sub_8313EBF4);
PPC_FUNC_IMPL(__imp__sub_8313EBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EBF8"))) PPC_WEAK_FUNC(sub_8313EBF8);
PPC_FUNC_IMPL(__imp__sub_8313EBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c77b68
	sub_82C77B68(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-6012
	ctx.r8.s64 = ctx.r9.s64 + -6012;
	// addi r11,r11,10596
	r11.s64 = r11.s64 + 10596;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-6012(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6012, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-17464
	ctx.r10.s64 = ctx.r10.s64 + -17464;
	// addi r9,r9,-17448
	ctx.r9.s64 = ctx.r9.s64 + -17448;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313EC50"))) PPC_WEAK_FUNC(sub_8313EC50);
PPC_FUNC_IMPL(__imp__sub_8313EC50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EC54"))) PPC_WEAK_FUNC(sub_8313EC54);
PPC_FUNC_IMPL(__imp__sub_8313EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EC58"))) PPC_WEAK_FUNC(sub_8313EC58);
PPC_FUNC_IMPL(__imp__sub_8313EC58) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16736
	ctx.r7.s64 = ctx.r10.s64 + -16736;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,11108
	ctx.r4.s64 = ctx.r9.s64 + 11108;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5996
	ctx.r3.s64 = ctx.r8.s64 + -5996;
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
	// li r6,48
	ctx.r6.s64 = 48;
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

__attribute__((alias("__imp__sub_8313ECC4"))) PPC_WEAK_FUNC(sub_8313ECC4);
PPC_FUNC_IMPL(__imp__sub_8313ECC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ECC8"))) PPC_WEAK_FUNC(sub_8313ECC8);
PPC_FUNC_IMPL(__imp__sub_8313ECC8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,-16664
	ctx.r6.s64 = ctx.r10.s64 + -16664;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11872
	ctx.r5.s64 = ctx.r9.s64 + -11872;
	// addi r4,r8,11144
	ctx.r4.s64 = ctx.r8.s64 + 11144;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,-5948
	ctx.r3.s64 = ctx.r7.s64 + -5948;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,7
	r31.s64 = 7;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_8313ED44"))) PPC_WEAK_FUNC(sub_8313ED44);
PPC_FUNC_IMPL(__imp__sub_8313ED44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313ED48"))) PPC_WEAK_FUNC(sub_8313ED48);
PPC_FUNC_IMPL(__imp__sub_8313ED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c6a228
	sub_82C6A228(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-5900
	ctx.r8.s64 = ctx.r9.s64 + -5900;
	// addi r11,r11,11144
	r11.s64 = r11.s64 + 11144;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-5900(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5900, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-17272
	ctx.r10.s64 = ctx.r10.s64 + -17272;
	// addi r9,r9,-17312
	ctx.r9.s64 = ctx.r9.s64 + -17312;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313EDA0"))) PPC_WEAK_FUNC(sub_8313EDA0);
PPC_FUNC_IMPL(__imp__sub_8313EDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EDA4"))) PPC_WEAK_FUNC(sub_8313EDA4);
PPC_FUNC_IMPL(__imp__sub_8313EDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EDA8"))) PPC_WEAK_FUNC(sub_8313EDA8);
PPC_FUNC_IMPL(__imp__sub_8313EDA8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16432
	ctx.r7.s64 = ctx.r10.s64 + -16432;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,9992
	ctx.r4.s64 = ctx.r9.s64 + 9992;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-5884
	ctx.r3.s64 = ctx.r8.s64 + -5884;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,80
	ctx.r6.s64 = 80;
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

__attribute__((alias("__imp__sub_8313EE18"))) PPC_WEAK_FUNC(sub_8313EE18);
PPC_FUNC_IMPL(__imp__sub_8313EE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE1C"))) PPC_WEAK_FUNC(sub_8313EE1C);
PPC_FUNC_IMPL(__imp__sub_8313EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EE20"))) PPC_WEAK_FUNC(sub_8313EE20);
PPC_FUNC_IMPL(__imp__sub_8313EE20) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16240
	ctx.r7.s64 = ctx.r10.s64 + -16240;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,10020
	ctx.r4.s64 = ctx.r9.s64 + 10020;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-5836
	ctx.r3.s64 = ctx.r8.s64 + -5836;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
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

__attribute__((alias("__imp__sub_8313EE90"))) PPC_WEAK_FUNC(sub_8313EE90);
PPC_FUNC_IMPL(__imp__sub_8313EE90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EE94"))) PPC_WEAK_FUNC(sub_8313EE94);
PPC_FUNC_IMPL(__imp__sub_8313EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EE98"))) PPC_WEAK_FUNC(sub_8313EE98);
PPC_FUNC_IMPL(__imp__sub_8313EE98) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-16120
	ctx.r7.s64 = ctx.r10.s64 + -16120;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,10056
	ctx.r4.s64 = ctx.r9.s64 + 10056;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-5788
	ctx.r3.s64 = ctx.r8.s64 + -5788;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
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

__attribute__((alias("__imp__sub_8313EF08"))) PPC_WEAK_FUNC(sub_8313EF08);
PPC_FUNC_IMPL(__imp__sub_8313EF08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EF0C"))) PPC_WEAK_FUNC(sub_8313EF0C);
PPC_FUNC_IMPL(__imp__sub_8313EF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EF10"))) PPC_WEAK_FUNC(sub_8313EF10);
PPC_FUNC_IMPL(__imp__sub_8313EF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r9,-31928
	ctx.r8.s64 = ctx.r9.s64 + -31928;
	// lwz r11,31740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31740);
	// lwz r10,-31984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31984);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, r11.u32);
	// stw r10,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EF34"))) PPC_WEAK_FUNC(sub_8313EF34);
PPC_FUNC_IMPL(__imp__sub_8313EF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313EF38"))) PPC_WEAK_FUNC(sub_8313EF38);
PPC_FUNC_IMPL(__imp__sub_8313EF38) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,-16456
	ctx.r9.s64 = r11.s64 + -16456;
	// addi r4,r10,-31928
	ctx.r4.s64 = ctx.r10.s64 + -31928;
	// addi r5,r9,480
	ctx.r5.s64 = ctx.r9.s64 + 480;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11776
	ctx.r5.s64 = ctx.r8.s64 + -11776;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,10256
	ctx.r4.s64 = ctx.r7.s64 + 10256;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,-5740
	ctx.r3.s64 = ctx.r6.s64 + -5740;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,224
	ctx.r6.s64 = 224;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313EFB4"))) PPC_WEAK_FUNC(sub_8313EFB4);
PPC_FUNC_IMPL(__imp__sub_8313EFB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313EFB8"))) PPC_WEAK_FUNC(sub_8313EFB8);
PPC_FUNC_IMPL(__imp__sub_8313EFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c79060
	sub_82C79060(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-5692
	ctx.r8.s64 = ctx.r9.s64 + -5692;
	// addi r11,r11,10256
	r11.s64 = r11.s64 + 10256;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-5692(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5692, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-17112
	ctx.r10.s64 = ctx.r10.s64 + -17112;
	// addi r9,r9,-17152
	ctx.r9.s64 = ctx.r9.s64 + -17152;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313F010"))) PPC_WEAK_FUNC(sub_8313F010);
PPC_FUNC_IMPL(__imp__sub_8313F010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F014"))) PPC_WEAK_FUNC(sub_8313F014);
PPC_FUNC_IMPL(__imp__sub_8313F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F018"))) PPC_WEAK_FUNC(sub_8313F018);
PPC_FUNC_IMPL(__imp__sub_8313F018) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-15840
	ctx.r7.s64 = ctx.r10.s64 + -15840;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,9692
	ctx.r4.s64 = ctx.r9.s64 + 9692;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5676
	ctx.r3.s64 = ctx.r8.s64 + -5676;
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
	// li r6,44
	ctx.r6.s64 = 44;
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

__attribute__((alias("__imp__sub_8313F084"))) PPC_WEAK_FUNC(sub_8313F084);
PPC_FUNC_IMPL(__imp__sub_8313F084) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F088"))) PPC_WEAK_FUNC(sub_8313F088);
PPC_FUNC_IMPL(__imp__sub_8313F088) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// addi r5,r10,-15600
	ctx.r5.s64 = ctx.r10.s64 + -15600;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-5580
	ctx.r5.s64 = ctx.r8.s64 + -5580;
	// addi r4,r7,9724
	ctx.r4.s64 = ctx.r7.s64 + 9724;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-5628
	ctx.r3.s64 = ctx.r6.s64 + -5628;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,6
	r31.s64 = 6;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,-15864
	ctx.r9.s64 = ctx.r9.s64 + -15864;
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
	// li r6,80
	ctx.r6.s64 = 80;
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

__attribute__((alias("__imp__sub_8313F104"))) PPC_WEAK_FUNC(sub_8313F104);
PPC_FUNC_IMPL(__imp__sub_8313F104) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F108"))) PPC_WEAK_FUNC(sub_8313F108);
PPC_FUNC_IMPL(__imp__sub_8313F108) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-15456
	ctx.r7.s64 = ctx.r10.s64 + -15456;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,9680
	ctx.r4.s64 = ctx.r9.s64 + 9680;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,-5580
	ctx.r3.s64 = ctx.r8.s64 + -5580;
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
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

__attribute__((alias("__imp__sub_8313F178"))) PPC_WEAK_FUNC(sub_8313F178);
PPC_FUNC_IMPL(__imp__sub_8313F178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F17C"))) PPC_WEAK_FUNC(sub_8313F17C);
PPC_FUNC_IMPL(__imp__sub_8313F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F180"))) PPC_WEAK_FUNC(sub_8313F180);
PPC_FUNC_IMPL(__imp__sub_8313F180) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-15360
	ctx.r7.s64 = ctx.r10.s64 + -15360;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14212
	ctx.r4.s64 = ctx.r9.s64 + 14212;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5532
	ctx.r3.s64 = ctx.r8.s64 + -5532;
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
	// li r6,4
	ctx.r6.s64 = 4;
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

__attribute__((alias("__imp__sub_8313F1EC"))) PPC_WEAK_FUNC(sub_8313F1EC);
PPC_FUNC_IMPL(__imp__sub_8313F1EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F1F0"))) PPC_WEAK_FUNC(sub_8313F1F0);
PPC_FUNC_IMPL(__imp__sub_8313F1F0) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,-15336
	ctx.r7.s64 = ctx.r10.s64 + -15336;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,14172
	ctx.r4.s64 = ctx.r9.s64 + 14172;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,-5484
	ctx.r3.s64 = ctx.r8.s64 + -5484;
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
	// li r6,512
	ctx.r6.s64 = 512;
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

__attribute__((alias("__imp__sub_8313F25C"))) PPC_WEAK_FUNC(sub_8313F25C);
PPC_FUNC_IMPL(__imp__sub_8313F25C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F260"))) PPC_WEAK_FUNC(sub_8313F260);
PPC_FUNC_IMPL(__imp__sub_8313F260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-31288
	ctx.r9.s64 = ctx.r10.s64 + -31288;
	// lwz r11,31740(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31740);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F278"))) PPC_WEAK_FUNC(sub_8313F278);
PPC_FUNC_IMPL(__imp__sub_8313F278) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r5,r10,-15216
	ctx.r5.s64 = ctx.r10.s64 + -15216;
	// addi r4,r9,-31288
	ctx.r4.s64 = ctx.r9.s64 + -31288;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-11872
	ctx.r5.s64 = ctx.r8.s64 + -11872;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,11224
	ctx.r4.s64 = ctx.r7.s64 + 11224;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,-5436
	ctx.r3.s64 = ctx.r6.s64 + -5436;
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
	// li r6,96
	ctx.r6.s64 = 96;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313F2F0"))) PPC_WEAK_FUNC(sub_8313F2F0);
PPC_FUNC_IMPL(__imp__sub_8313F2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F2F4"))) PPC_WEAK_FUNC(sub_8313F2F4);
PPC_FUNC_IMPL(__imp__sub_8313F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F2F8"))) PPC_WEAK_FUNC(sub_8313F2F8);
PPC_FUNC_IMPL(__imp__sub_8313F2F8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,-15104
	ctx.r6.s64 = ctx.r10.s64 + -15104;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11776
	ctx.r5.s64 = ctx.r9.s64 + -11776;
	// addi r4,r8,11648
	ctx.r4.s64 = ctx.r8.s64 + 11648;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-5388
	ctx.r3.s64 = ctx.r7.s64 + -5388;
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
	// li r6,64
	ctx.r6.s64 = 64;
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

__attribute__((alias("__imp__sub_8313F370"))) PPC_WEAK_FUNC(sub_8313F370);
PPC_FUNC_IMPL(__imp__sub_8313F370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F374"))) PPC_WEAK_FUNC(sub_8313F374);
PPC_FUNC_IMPL(__imp__sub_8313F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F378"))) PPC_WEAK_FUNC(sub_8313F378);
PPC_FUNC_IMPL(__imp__sub_8313F378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c6c188
	sub_82C6C188(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-5340
	ctx.r8.s64 = ctx.r9.s64 + -5340;
	// addi r11,r11,11648
	r11.s64 = r11.s64 + 11648;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-5340(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5340, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-16056
	ctx.r10.s64 = ctx.r10.s64 + -16056;
	// addi r9,r9,-16096
	ctx.r9.s64 = ctx.r9.s64 + -16096;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313F3D0"))) PPC_WEAK_FUNC(sub_8313F3D0);
PPC_FUNC_IMPL(__imp__sub_8313F3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F3D4"))) PPC_WEAK_FUNC(sub_8313F3D4);
PPC_FUNC_IMPL(__imp__sub_8313F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F3D8"))) PPC_WEAK_FUNC(sub_8313F3D8);
PPC_FUNC_IMPL(__imp__sub_8313F3D8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-14896
	ctx.r6.s64 = ctx.r10.s64 + -14896;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7228
	ctx.r5.s64 = ctx.r9.s64 + -7228;
	// addi r4,r8,11612
	ctx.r4.s64 = ctx.r8.s64 + 11612;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-5324
	ctx.r3.s64 = ctx.r7.s64 + -5324;
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
	// li r6,48
	ctx.r6.s64 = 48;
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

__attribute__((alias("__imp__sub_8313F450"))) PPC_WEAK_FUNC(sub_8313F450);
PPC_FUNC_IMPL(__imp__sub_8313F450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F454"))) PPC_WEAK_FUNC(sub_8313F454);
PPC_FUNC_IMPL(__imp__sub_8313F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F458"))) PPC_WEAK_FUNC(sub_8313F458);
PPC_FUNC_IMPL(__imp__sub_8313F458) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,-14736
	ctx.r6.s64 = ctx.r10.s64 + -14736;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-11584
	ctx.r5.s64 = ctx.r9.s64 + -11584;
	// addi r4,r8,11780
	ctx.r4.s64 = ctx.r8.s64 + 11780;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-5276
	ctx.r3.s64 = ctx.r7.s64 + -5276;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_8313F4D0"))) PPC_WEAK_FUNC(sub_8313F4D0);
PPC_FUNC_IMPL(__imp__sub_8313F4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F4D4"))) PPC_WEAK_FUNC(sub_8313F4D4);
PPC_FUNC_IMPL(__imp__sub_8313F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F4D8"))) PPC_WEAK_FUNC(sub_8313F4D8);
PPC_FUNC_IMPL(__imp__sub_8313F4D8) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-14592
	ctx.r6.s64 = ctx.r10.s64 + -14592;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-7612
	ctx.r5.s64 = ctx.r9.s64 + -7612;
	// addi r4,r8,11576
	ctx.r4.s64 = ctx.r8.s64 + 11576;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-5228
	ctx.r3.s64 = ctx.r7.s64 + -5228;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_8313F550"))) PPC_WEAK_FUNC(sub_8313F550);
PPC_FUNC_IMPL(__imp__sub_8313F550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F554"))) PPC_WEAK_FUNC(sub_8313F554);
PPC_FUNC_IMPL(__imp__sub_8313F554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F558"))) PPC_WEAK_FUNC(sub_8313F558);
PPC_FUNC_IMPL(__imp__sub_8313F558) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r6,r10,-14416
	ctx.r6.s64 = ctx.r10.s64 + -14416;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-12796
	ctx.r5.s64 = ctx.r9.s64 + -12796;
	// addi r4,r8,11344
	ctx.r4.s64 = ctx.r8.s64 + 11344;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-5180
	ctx.r3.s64 = ctx.r7.s64 + -5180;
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
	// li r6,80
	ctx.r6.s64 = 80;
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

__attribute__((alias("__imp__sub_8313F5D0"))) PPC_WEAK_FUNC(sub_8313F5D0);
PPC_FUNC_IMPL(__imp__sub_8313F5D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F5D4"))) PPC_WEAK_FUNC(sub_8313F5D4);
PPC_FUNC_IMPL(__imp__sub_8313F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F5D8"))) PPC_WEAK_FUNC(sub_8313F5D8);
PPC_FUNC_IMPL(__imp__sub_8313F5D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c7dd90
	sub_82C7DD90(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-5132
	ctx.r8.s64 = ctx.r9.s64 + -5132;
	// addi r11,r11,11344
	r11.s64 = r11.s64 + 11344;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-5132(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5132, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-14792
	ctx.r10.s64 = ctx.r10.s64 + -14792;
	// addi r9,r9,-14776
	ctx.r9.s64 = ctx.r9.s64 + -14776;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8313F630"))) PPC_WEAK_FUNC(sub_8313F630);
PPC_FUNC_IMPL(__imp__sub_8313F630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F634"))) PPC_WEAK_FUNC(sub_8313F634);
PPC_FUNC_IMPL(__imp__sub_8313F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F638"))) PPC_WEAK_FUNC(sub_8313F638);
PPC_FUNC_IMPL(__imp__sub_8313F638) {
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
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// addi r6,r10,-14272
	ctx.r6.s64 = ctx.r10.s64 + -14272;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,-6428
	ctx.r5.s64 = ctx.r9.s64 + -6428;
	// addi r4,r8,11380
	ctx.r4.s64 = ctx.r8.s64 + 11380;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,-5116
	ctx.r3.s64 = ctx.r7.s64 + -5116;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_8313F6B0"))) PPC_WEAK_FUNC(sub_8313F6B0);
PPC_FUNC_IMPL(__imp__sub_8313F6B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313F6B4"))) PPC_WEAK_FUNC(sub_8313F6B4);
PPC_FUNC_IMPL(__imp__sub_8313F6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8313F6B8"))) PPC_WEAK_FUNC(sub_8313F6B8);
PPC_FUNC_IMPL(__imp__sub_8313F6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c7e6f0
	sub_82C7E6F0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,-5068
	ctx.r8.s64 = ctx.r9.s64 + -5068;
	// addi r11,r11,11380
	r11.s64 = r11.s64 + 11380;
	// lis r10,-32057
	ctx.r10.s64 = -2100887552;
	// stw r11,-5068(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5068, r11.u32);
	// lis r9,-32057
	ctx.r9.s64 = -2100887552;
	// addi r10,r10,-14688
	ctx.r10.s64 = ctx.r10.s64 + -14688;
	// addi r9,r9,-14672
	ctx.r9.s64 = ctx.r9.s64 + -14672;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

