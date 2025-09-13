#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83144FD0"))) PPC_WEAK_FUNC(sub_83144FD0);
PPC_FUNC_IMPL(__imp__sub_83144FD0) {
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
	// addi r6,r10,12136
	ctx.r6.s64 = ctx.r10.s64 + 12136;
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
	// addi r4,r8,7308
	ctx.r4.s64 = ctx.r8.s64 + 7308;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3172
	ctx.r3.s64 = ctx.r7.s64 + 3172;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,4
	r31.s64 = 4;
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
	// li r6,40
	ctx.r6.s64 = 40;
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

__attribute__((alias("__imp__sub_8314504C"))) PPC_WEAK_FUNC(sub_8314504C);
PPC_FUNC_IMPL(__imp__sub_8314504C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145050"))) PPC_WEAK_FUNC(sub_83145050);
PPC_FUNC_IMPL(__imp__sub_83145050) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,12248
	ctx.r3.s64 = ctx.r9.s64 + 12248;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7180
	ctx.r4.s64 = ctx.r7.s64 + 7180;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3220
	ctx.r3.s64 = ctx.r6.s64 + 3220;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
}

__attribute__((alias("__imp__sub_831450C0"))) PPC_WEAK_FUNC(sub_831450C0);
PPC_FUNC_IMPL(__imp__sub_831450C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831450C4"))) PPC_WEAK_FUNC(sub_831450C4);
PPC_FUNC_IMPL(__imp__sub_831450C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831450C8"))) PPC_WEAK_FUNC(sub_831450C8);
PPC_FUNC_IMPL(__imp__sub_831450C8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce7bb0
	sub_82CE7BB0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3268
	ctx.r8.s64 = ctx.r9.s64 + 3268;
	// addi r11,r11,7180
	r11.s64 = r11.s64 + 7180;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3268, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,17120
	ctx.r10.s64 = ctx.r10.s64 + 17120;
	// addi r9,r9,17136
	ctx.r9.s64 = ctx.r9.s64 + 17136;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83145120"))) PPC_WEAK_FUNC(sub_83145120);
PPC_FUNC_IMPL(__imp__sub_83145120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145124"))) PPC_WEAK_FUNC(sub_83145124);
PPC_FUNC_IMPL(__imp__sub_83145124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145128"))) PPC_WEAK_FUNC(sub_83145128);
PPC_FUNC_IMPL(__imp__sub_83145128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-17720
	ctx.r9.s64 = ctx.r10.s64 + -17720;
	// lwz r11,-17728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17728);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145140"))) PPC_WEAK_FUNC(sub_83145140);
PPC_FUNC_IMPL(__imp__sub_83145140) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-17720
	ctx.r5.s64 = ctx.r10.s64 + -17720;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7160
	ctx.r4.s64 = ctx.r7.s64 + 7160;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3284
	ctx.r3.s64 = ctx.r6.s64 + 3284;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,12328
	ctx.r9.s64 = ctx.r9.s64 + 12328;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831451B8"))) PPC_WEAK_FUNC(sub_831451B8);
PPC_FUNC_IMPL(__imp__sub_831451B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831451BC"))) PPC_WEAK_FUNC(sub_831451BC);
PPC_FUNC_IMPL(__imp__sub_831451BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831451C0"))) PPC_WEAK_FUNC(sub_831451C0);
PPC_FUNC_IMPL(__imp__sub_831451C0) {
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
	// bl 0x82ce43b0
	sub_82CE43B0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3332
	ctx.r8.s64 = ctx.r9.s64 + 3332;
	// addi r11,r11,7160
	r11.s64 = r11.s64 + 7160;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3332, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,17264
	ctx.r10.s64 = ctx.r10.s64 + 17264;
	// addi r9,r9,17224
	ctx.r9.s64 = ctx.r9.s64 + 17224;
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

__attribute__((alias("__imp__sub_83145218"))) PPC_WEAK_FUNC(sub_83145218);
PPC_FUNC_IMPL(__imp__sub_83145218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314521C"))) PPC_WEAK_FUNC(sub_8314521C);
PPC_FUNC_IMPL(__imp__sub_8314521C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145220"))) PPC_WEAK_FUNC(sub_83145220);
PPC_FUNC_IMPL(__imp__sub_83145220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-17536
	ctx.r9.s64 = ctx.r10.s64 + -17536;
	// lwz r11,-17544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17544);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145238"))) PPC_WEAK_FUNC(sub_83145238);
PPC_FUNC_IMPL(__imp__sub_83145238) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-17536
	ctx.r5.s64 = ctx.r10.s64 + -17536;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7092
	ctx.r4.s64 = ctx.r7.s64 + 7092;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3348
	ctx.r3.s64 = ctx.r6.s64 + 3348;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,12420
	ctx.r9.s64 = ctx.r9.s64 + 12420;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,28
	ctx.r6.s64 = 28;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831452B0"))) PPC_WEAK_FUNC(sub_831452B0);
PPC_FUNC_IMPL(__imp__sub_831452B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831452B4"))) PPC_WEAK_FUNC(sub_831452B4);
PPC_FUNC_IMPL(__imp__sub_831452B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831452B8"))) PPC_WEAK_FUNC(sub_831452B8);
PPC_FUNC_IMPL(__imp__sub_831452B8) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,12444
	ctx.r10.s64 = r11.s64 + 12444;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3396
	ctx.r8.s64 = ctx.r9.s64 + 3396;
	// addi r11,r11,7092
	r11.s64 = r11.s64 + 7092;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3396(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3396, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,17728
	ctx.r10.s64 = ctx.r10.s64 + 17728;
	// addi r9,r9,17688
	ctx.r9.s64 = ctx.r9.s64 + 17688;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8314531C"))) PPC_WEAK_FUNC(sub_8314531C);
PPC_FUNC_IMPL(__imp__sub_8314531C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145320"))) PPC_WEAK_FUNC(sub_83145320);
PPC_FUNC_IMPL(__imp__sub_83145320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-17408
	ctx.r9.s64 = ctx.r10.s64 + -17408;
	// lwz r11,-17432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17432);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145338"))) PPC_WEAK_FUNC(sub_83145338);
PPC_FUNC_IMPL(__imp__sub_83145338) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-17408
	ctx.r5.s64 = ctx.r10.s64 + -17408;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7028
	ctx.r4.s64 = ctx.r7.s64 + 7028;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3412
	ctx.r3.s64 = ctx.r6.s64 + 3412;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,12480
	ctx.r9.s64 = ctx.r9.s64 + 12480;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
}

__attribute__((alias("__imp__sub_831453B0"))) PPC_WEAK_FUNC(sub_831453B0);
PPC_FUNC_IMPL(__imp__sub_831453B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831453B4"))) PPC_WEAK_FUNC(sub_831453B4);
PPC_FUNC_IMPL(__imp__sub_831453B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831453B8"))) PPC_WEAK_FUNC(sub_831453B8);
PPC_FUNC_IMPL(__imp__sub_831453B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-17240
	ctx.r9.s64 = ctx.r10.s64 + -17240;
	// lwz r11,-17264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17264);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831453D0"))) PPC_WEAK_FUNC(sub_831453D0);
PPC_FUNC_IMPL(__imp__sub_831453D0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-17240
	ctx.r5.s64 = ctx.r10.s64 + -17240;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7260
	ctx.r4.s64 = ctx.r7.s64 + 7260;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3460
	ctx.r3.s64 = ctx.r6.s64 + 3460;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,12556
	ctx.r9.s64 = ctx.r9.s64 + 12556;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
}

__attribute__((alias("__imp__sub_83145448"))) PPC_WEAK_FUNC(sub_83145448);
PPC_FUNC_IMPL(__imp__sub_83145448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314544C"))) PPC_WEAK_FUNC(sub_8314544C);
PPC_FUNC_IMPL(__imp__sub_8314544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145450"))) PPC_WEAK_FUNC(sub_83145450);
PPC_FUNC_IMPL(__imp__sub_83145450) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,12592
	ctx.r3.s64 = ctx.r9.s64 + 12592;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,7444
	ctx.r4.s64 = ctx.r7.s64 + 7444;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3508
	ctx.r3.s64 = ctx.r6.s64 + 3508;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
}

__attribute__((alias("__imp__sub_831454C0"))) PPC_WEAK_FUNC(sub_831454C0);
PPC_FUNC_IMPL(__imp__sub_831454C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831454C4"))) PPC_WEAK_FUNC(sub_831454C4);
PPC_FUNC_IMPL(__imp__sub_831454C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831454C8"))) PPC_WEAK_FUNC(sub_831454C8);
PPC_FUNC_IMPL(__imp__sub_831454C8) {
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
	// addi r6,r10,12632
	ctx.r6.s64 = ctx.r10.s64 + 12632;
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
	// addi r4,r8,6944
	ctx.r4.s64 = ctx.r8.s64 + 6944;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3556
	ctx.r3.s64 = ctx.r7.s64 + 3556;
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

__attribute__((alias("__imp__sub_83145544"))) PPC_WEAK_FUNC(sub_83145544);
PPC_FUNC_IMPL(__imp__sub_83145544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145548"))) PPC_WEAK_FUNC(sub_83145548);
PPC_FUNC_IMPL(__imp__sub_83145548) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,12816
	ctx.r3.s64 = ctx.r9.s64 + 12816;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,6804
	ctx.r4.s64 = ctx.r7.s64 + 6804;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3604
	ctx.r3.s64 = ctx.r6.s64 + 3604;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
}

__attribute__((alias("__imp__sub_831455B8"))) PPC_WEAK_FUNC(sub_831455B8);
PPC_FUNC_IMPL(__imp__sub_831455B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831455BC"))) PPC_WEAK_FUNC(sub_831455BC);
PPC_FUNC_IMPL(__imp__sub_831455BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831455C0"))) PPC_WEAK_FUNC(sub_831455C0);
PPC_FUNC_IMPL(__imp__sub_831455C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-16928
	ctx.r9.s64 = ctx.r10.s64 + -16928;
	// lwz r11,-18476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -18476);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831455D8"))) PPC_WEAK_FUNC(sub_831455D8);
PPC_FUNC_IMPL(__imp__sub_831455D8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-16928
	ctx.r6.s64 = ctx.r10.s64 + -16928;
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
	// addi r4,r8,6748
	ctx.r4.s64 = ctx.r8.s64 + 6748;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3652
	ctx.r3.s64 = ctx.r7.s64 + 3652;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
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
	// li r6,24
	ctx.r6.s64 = 24;
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

__attribute__((alias("__imp__sub_83145654"))) PPC_WEAK_FUNC(sub_83145654);
PPC_FUNC_IMPL(__imp__sub_83145654) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145658"))) PPC_WEAK_FUNC(sub_83145658);
PPC_FUNC_IMPL(__imp__sub_83145658) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,12856
	ctx.r3.s64 = ctx.r9.s64 + 12856;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,6724
	ctx.r4.s64 = ctx.r7.s64 + 6724;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3700
	ctx.r3.s64 = ctx.r6.s64 + 3700;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
}

__attribute__((alias("__imp__sub_831456C8"))) PPC_WEAK_FUNC(sub_831456C8);
PPC_FUNC_IMPL(__imp__sub_831456C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831456CC"))) PPC_WEAK_FUNC(sub_831456CC);
PPC_FUNC_IMPL(__imp__sub_831456CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831456D0"))) PPC_WEAK_FUNC(sub_831456D0);
PPC_FUNC_IMPL(__imp__sub_831456D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-16780
	ctx.r9.s64 = ctx.r10.s64 + -16780;
	// lwz r11,-18476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -18476);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831456E8"))) PPC_WEAK_FUNC(sub_831456E8);
PPC_FUNC_IMPL(__imp__sub_831456E8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-16780
	ctx.r6.s64 = ctx.r10.s64 + -16780;
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
	// addi r4,r8,6704
	ctx.r4.s64 = ctx.r8.s64 + 6704;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3748
	ctx.r3.s64 = ctx.r7.s64 + 3748;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
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
	// li r6,24
	ctx.r6.s64 = 24;
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

__attribute__((alias("__imp__sub_83145764"))) PPC_WEAK_FUNC(sub_83145764);
PPC_FUNC_IMPL(__imp__sub_83145764) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145768"))) PPC_WEAK_FUNC(sub_83145768);
PPC_FUNC_IMPL(__imp__sub_83145768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-16684
	ctx.r9.s64 = ctx.r10.s64 + -16684;
	// lwz r11,-18476(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -18476);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145780"))) PPC_WEAK_FUNC(sub_83145780);
PPC_FUNC_IMPL(__imp__sub_83145780) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,-16684
	ctx.r6.s64 = ctx.r10.s64 + -16684;
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
	// addi r4,r8,6684
	ctx.r4.s64 = ctx.r8.s64 + 6684;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3796
	ctx.r3.s64 = ctx.r7.s64 + 3796;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,2
	r31.s64 = 2;
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
	// li r6,24
	ctx.r6.s64 = 24;
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

__attribute__((alias("__imp__sub_831457FC"))) PPC_WEAK_FUNC(sub_831457FC);
PPC_FUNC_IMPL(__imp__sub_831457FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145800"))) PPC_WEAK_FUNC(sub_83145800);
PPC_FUNC_IMPL(__imp__sub_83145800) {
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
	// addi r6,r10,12928
	ctx.r6.s64 = ctx.r10.s64 + 12928;
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
	// addi r4,r8,6656
	ctx.r4.s64 = ctx.r8.s64 + 6656;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3844
	ctx.r3.s64 = ctx.r7.s64 + 3844;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,9
	r31.s64 = 9;
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
	// li r6,24
	ctx.r6.s64 = 24;
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

__attribute__((alias("__imp__sub_8314587C"))) PPC_WEAK_FUNC(sub_8314587C);
PPC_FUNC_IMPL(__imp__sub_8314587C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145880"))) PPC_WEAK_FUNC(sub_83145880);
PPC_FUNC_IMPL(__imp__sub_83145880) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ce7d28
	sub_82CE7D28(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,3892
	ctx.r8.s64 = ctx.r9.s64 + 3892;
	// addi r11,r11,6656
	r11.s64 = r11.s64 + 6656;
	// lis r10,-32050
	ctx.r10.s64 = -2100428800;
	// stw r11,3892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3892, r11.u32);
	// lis r9,-32050
	ctx.r9.s64 = -2100428800;
	// addi r10,r10,19488
	ctx.r10.s64 = ctx.r10.s64 + 19488;
	// addi r9,r9,19504
	ctx.r9.s64 = ctx.r9.s64 + 19504;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831458D8"))) PPC_WEAK_FUNC(sub_831458D8);
PPC_FUNC_IMPL(__imp__sub_831458D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831458DC"))) PPC_WEAK_FUNC(sub_831458DC);
PPC_FUNC_IMPL(__imp__sub_831458DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831458E0"))) PPC_WEAK_FUNC(sub_831458E0);
PPC_FUNC_IMPL(__imp__sub_831458E0) {
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
	// addi r6,r10,14160
	ctx.r6.s64 = ctx.r10.s64 + 14160;
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
	// addi r4,r8,-6604
	ctx.r4.s64 = ctx.r8.s64 + -6604;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,3908
	ctx.r3.s64 = ctx.r7.s64 + 3908;
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
	// li r6,68
	ctx.r6.s64 = 68;
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

__attribute__((alias("__imp__sub_8314595C"))) PPC_WEAK_FUNC(sub_8314595C);
PPC_FUNC_IMPL(__imp__sub_8314595C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145960"))) PPC_WEAK_FUNC(sub_83145960);
PPC_FUNC_IMPL(__imp__sub_83145960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-16408
	ctx.r9.s64 = ctx.r10.s64 + -16408;
	// lwz r11,-16416(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16416);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145978"))) PPC_WEAK_FUNC(sub_83145978);
PPC_FUNC_IMPL(__imp__sub_83145978) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-16408
	ctx.r5.s64 = ctx.r10.s64 + -16408;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,-6500
	ctx.r4.s64 = ctx.r7.s64 + -6500;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,3956
	ctx.r3.s64 = ctx.r6.s64 + 3956;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,14344
	ctx.r9.s64 = ctx.r9.s64 + 14344;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,40
	ctx.r6.s64 = 40;
	// bl 0x8262c768
	sub_8262C768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831459F0"))) PPC_WEAK_FUNC(sub_831459F0);
PPC_FUNC_IMPL(__imp__sub_831459F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831459F4"))) PPC_WEAK_FUNC(sub_831459F4);
PPC_FUNC_IMPL(__imp__sub_831459F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831459F8"))) PPC_WEAK_FUNC(sub_831459F8);
PPC_FUNC_IMPL(__imp__sub_831459F8) {
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
	// addi r4,r9,-5764
	ctx.r4.s64 = ctx.r9.s64 + -5764;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,4004
	ctx.r3.s64 = ctx.r8.s64 + 4004;
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

__attribute__((alias("__imp__sub_83145A5C"))) PPC_WEAK_FUNC(sub_83145A5C);
PPC_FUNC_IMPL(__imp__sub_83145A5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145A60"))) PPC_WEAK_FUNC(sub_83145A60);
PPC_FUNC_IMPL(__imp__sub_83145A60) {
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
	// addi r7,r10,14368
	ctx.r7.s64 = ctx.r10.s64 + 14368;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-6048
	ctx.r4.s64 = ctx.r9.s64 + -6048;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4052
	ctx.r3.s64 = ctx.r8.s64 + 4052;
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
	// li r6,36
	ctx.r6.s64 = 36;
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

__attribute__((alias("__imp__sub_83145ACC"))) PPC_WEAK_FUNC(sub_83145ACC);
PPC_FUNC_IMPL(__imp__sub_83145ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145AD0"))) PPC_WEAK_FUNC(sub_83145AD0);
PPC_FUNC_IMPL(__imp__sub_83145AD0) {
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
	// addi r7,r10,14608
	ctx.r7.s64 = ctx.r10.s64 + 14608;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-6000
	ctx.r4.s64 = ctx.r9.s64 + -6000;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4100
	ctx.r3.s64 = ctx.r8.s64 + 4100;
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

__attribute__((alias("__imp__sub_83145B3C"))) PPC_WEAK_FUNC(sub_83145B3C);
PPC_FUNC_IMPL(__imp__sub_83145B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145B40"))) PPC_WEAK_FUNC(sub_83145B40);
PPC_FUNC_IMPL(__imp__sub_83145B40) {
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
	// addi r6,r10,14752
	ctx.r6.s64 = ctx.r10.s64 + 14752;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3956
	ctx.r5.s64 = ctx.r9.s64 + 3956;
	// addi r4,r8,-5952
	ctx.r4.s64 = ctx.r8.s64 + -5952;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4148
	ctx.r3.s64 = ctx.r7.s64 + 4148;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,12
	r31.s64 = 12;
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

__attribute__((alias("__imp__sub_83145BB8"))) PPC_WEAK_FUNC(sub_83145BB8);
PPC_FUNC_IMPL(__imp__sub_83145BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145BBC"))) PPC_WEAK_FUNC(sub_83145BBC);
PPC_FUNC_IMPL(__imp__sub_83145BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145BC0"))) PPC_WEAK_FUNC(sub_83145BC0);
PPC_FUNC_IMPL(__imp__sub_83145BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// addi r7,r8,-16088
	ctx.r7.s64 = ctx.r8.s64 + -16088;
	// lwz r10,-16144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -16144);
	// lwz r11,-16140(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16140);
	// stw r10,200(r7)
	PPC_STORE_U32(ctx.r7.u32 + 200, ctx.r10.u32);
	// stw r11,224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 224, r11.u32);
	// stw r11,248(r7)
	PPC_STORE_U32(ctx.r7.u32 + 248, r11.u32);
	// stw r11,272(r7)
	PPC_STORE_U32(ctx.r7.u32 + 272, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145BEC"))) PPC_WEAK_FUNC(sub_83145BEC);
PPC_FUNC_IMPL(__imp__sub_83145BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145BF0"))) PPC_WEAK_FUNC(sub_83145BF0);
PPC_FUNC_IMPL(__imp__sub_83145BF0) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-16088
	ctx.r6.s64 = ctx.r10.s64 + -16088;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r8,-6224
	ctx.r4.s64 = ctx.r8.s64 + -6224;
	// addi r3,r7,4196
	ctx.r3.s64 = ctx.r7.s64 + 4196;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,15456
	ctx.r9.s64 = ctx.r9.s64 + 15456;
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
	// li r6,28
	ctx.r6.s64 = 28;
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

__attribute__((alias("__imp__sub_83145C60"))) PPC_WEAK_FUNC(sub_83145C60);
PPC_FUNC_IMPL(__imp__sub_83145C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145C64"))) PPC_WEAK_FUNC(sub_83145C64);
PPC_FUNC_IMPL(__imp__sub_83145C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145C68"))) PPC_WEAK_FUNC(sub_83145C68);
PPC_FUNC_IMPL(__imp__sub_83145C68) {
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
	// addi r7,r10,15496
	ctx.r7.s64 = ctx.r10.s64 + 15496;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-6172
	ctx.r4.s64 = ctx.r9.s64 + -6172;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4244
	ctx.r3.s64 = ctx.r8.s64 + 4244;
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

__attribute__((alias("__imp__sub_83145CD4"))) PPC_WEAK_FUNC(sub_83145CD4);
PPC_FUNC_IMPL(__imp__sub_83145CD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145CD8"))) PPC_WEAK_FUNC(sub_83145CD8);
PPC_FUNC_IMPL(__imp__sub_83145CD8) {
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
	// addi r6,r10,15544
	ctx.r6.s64 = ctx.r10.s64 + 15544;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3956
	ctx.r5.s64 = ctx.r9.s64 + 3956;
	// addi r4,r8,-6116
	ctx.r4.s64 = ctx.r8.s64 + -6116;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4292
	ctx.r3.s64 = ctx.r7.s64 + 4292;
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
	// li r6,132
	ctx.r6.s64 = 132;
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

__attribute__((alias("__imp__sub_83145D50"))) PPC_WEAK_FUNC(sub_83145D50);
PPC_FUNC_IMPL(__imp__sub_83145D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145D54"))) PPC_WEAK_FUNC(sub_83145D54);
PPC_FUNC_IMPL(__imp__sub_83145D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145D58"))) PPC_WEAK_FUNC(sub_83145D58);
PPC_FUNC_IMPL(__imp__sub_83145D58) {
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
	// addi r7,r10,15968
	ctx.r7.s64 = ctx.r10.s64 + 15968;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-5860
	ctx.r4.s64 = ctx.r9.s64 + -5860;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4340
	ctx.r3.s64 = ctx.r8.s64 + 4340;
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

__attribute__((alias("__imp__sub_83145DC4"))) PPC_WEAK_FUNC(sub_83145DC4);
PPC_FUNC_IMPL(__imp__sub_83145DC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145DC8"))) PPC_WEAK_FUNC(sub_83145DC8);
PPC_FUNC_IMPL(__imp__sub_83145DC8) {
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
	// addi r7,r10,16040
	ctx.r7.s64 = ctx.r10.s64 + 16040;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-5824
	ctx.r4.s64 = ctx.r9.s64 + -5824;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4388
	ctx.r3.s64 = ctx.r8.s64 + 4388;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_83145E34"))) PPC_WEAK_FUNC(sub_83145E34);
PPC_FUNC_IMPL(__imp__sub_83145E34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145E38"))) PPC_WEAK_FUNC(sub_83145E38);
PPC_FUNC_IMPL(__imp__sub_83145E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-15696
	ctx.r9.s64 = ctx.r10.s64 + -15696;
	// lwz r11,-15752(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -15752);
	// stw r11,176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 176, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145E50"))) PPC_WEAK_FUNC(sub_83145E50);
PPC_FUNC_IMPL(__imp__sub_83145E50) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,-15696
	ctx.r6.s64 = ctx.r10.s64 + -15696;
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
	// addi r4,r8,-5788
	ctx.r4.s64 = ctx.r8.s64 + -5788;
	// addi r3,r7,4436
	ctx.r3.s64 = ctx.r7.s64 + 4436;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,8
	r31.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,15944
	ctx.r9.s64 = ctx.r9.s64 + 15944;
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
	// li r6,112
	ctx.r6.s64 = 112;
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

__attribute__((alias("__imp__sub_83145ECC"))) PPC_WEAK_FUNC(sub_83145ECC);
PPC_FUNC_IMPL(__imp__sub_83145ECC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145ED0"))) PPC_WEAK_FUNC(sub_83145ED0);
PPC_FUNC_IMPL(__imp__sub_83145ED0) {
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
	// addi r7,r10,16184
	ctx.r7.s64 = ctx.r10.s64 + 16184;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-5612
	ctx.r4.s64 = ctx.r9.s64 + -5612;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4484
	ctx.r3.s64 = ctx.r8.s64 + 4484;
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
	// li r6,8
	ctx.r6.s64 = 8;
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

__attribute__((alias("__imp__sub_83145F3C"))) PPC_WEAK_FUNC(sub_83145F3C);
PPC_FUNC_IMPL(__imp__sub_83145F3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145F40"))) PPC_WEAK_FUNC(sub_83145F40);
PPC_FUNC_IMPL(__imp__sub_83145F40) {
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
	// addi r6,r10,16232
	ctx.r6.s64 = ctx.r10.s64 + 16232;
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
	// addi r4,r8,-5584
	ctx.r4.s64 = ctx.r8.s64 + -5584;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,4532
	ctx.r3.s64 = ctx.r7.s64 + 4532;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,6
	r31.s64 = 6;
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
	// li r6,72
	ctx.r6.s64 = 72;
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

__attribute__((alias("__imp__sub_83145FBC"))) PPC_WEAK_FUNC(sub_83145FBC);
PPC_FUNC_IMPL(__imp__sub_83145FBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145FC0"))) PPC_WEAK_FUNC(sub_83145FC0);
PPC_FUNC_IMPL(__imp__sub_83145FC0) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,16380
	ctx.r10.s64 = r11.s64 + 16380;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,4580
	ctx.r8.s64 = ctx.r9.s64 + 4580;
	// addi r11,r11,-5584
	r11.s64 = r11.s64 + -5584;
	// lis r10,-32049
	ctx.r10.s64 = -2100363264;
	// stw r11,4580(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4580, r11.u32);
	// lis r9,-32049
	ctx.r9.s64 = -2100363264;
	// addi r10,r10,-24968
	ctx.r10.s64 = ctx.r10.s64 + -24968;
	// addi r9,r9,-25080
	ctx.r9.s64 = ctx.r9.s64 + -25080;
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

__attribute__((alias("__imp__sub_83146024"))) PPC_WEAK_FUNC(sub_83146024);
PPC_FUNC_IMPL(__imp__sub_83146024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146028"))) PPC_WEAK_FUNC(sub_83146028);
PPC_FUNC_IMPL(__imp__sub_83146028) {
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
	// addi r7,r10,16392
	ctx.r7.s64 = ctx.r10.s64 + 16392;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-5920
	ctx.r4.s64 = ctx.r9.s64 + -5920;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4596
	ctx.r3.s64 = ctx.r8.s64 + 4596;
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
	// li r6,12
	ctx.r6.s64 = 12;
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

__attribute__((alias("__imp__sub_83146094"))) PPC_WEAK_FUNC(sub_83146094);
PPC_FUNC_IMPL(__imp__sub_83146094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146098"))) PPC_WEAK_FUNC(sub_83146098);
PPC_FUNC_IMPL(__imp__sub_83146098) {
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
	// addi r6,r10,16416
	ctx.r6.s64 = ctx.r10.s64 + 16416;
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
	// addi r4,r8,-5896
	ctx.r4.s64 = ctx.r8.s64 + -5896;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,4644
	ctx.r3.s64 = ctx.r7.s64 + 4644;
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

__attribute__((alias("__imp__sub_83146114"))) PPC_WEAK_FUNC(sub_83146114);
PPC_FUNC_IMPL(__imp__sub_83146114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146118"))) PPC_WEAK_FUNC(sub_83146118);
PPC_FUNC_IMPL(__imp__sub_83146118) {
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
	// bl 0x82cfab68
	sub_82CFAB68(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,4692
	ctx.r8.s64 = ctx.r9.s64 + 4692;
	// addi r11,r11,-5896
	r11.s64 = r11.s64 + -5896;
	// lis r10,-32049
	ctx.r10.s64 = -2100363264;
	// stw r11,4692(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4692, r11.u32);
	// lis r9,-32049
	ctx.r9.s64 = -2100363264;
	// addi r10,r10,-24216
	ctx.r10.s64 = ctx.r10.s64 + -24216;
	// addi r9,r9,-24200
	ctx.r9.s64 = ctx.r9.s64 + -24200;
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

__attribute__((alias("__imp__sub_83146170"))) PPC_WEAK_FUNC(sub_83146170);
PPC_FUNC_IMPL(__imp__sub_83146170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146174"))) PPC_WEAK_FUNC(sub_83146174);
PPC_FUNC_IMPL(__imp__sub_83146174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146178"))) PPC_WEAK_FUNC(sub_83146178);
PPC_FUNC_IMPL(__imp__sub_83146178) {
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
	// addi r7,r10,16536
	ctx.r7.s64 = ctx.r10.s64 + 16536;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-6412
	ctx.r4.s64 = ctx.r9.s64 + -6412;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4708
	ctx.r3.s64 = ctx.r8.s64 + 4708;
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

__attribute__((alias("__imp__sub_831461E4"))) PPC_WEAK_FUNC(sub_831461E4);
PPC_FUNC_IMPL(__imp__sub_831461E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831461E8"))) PPC_WEAK_FUNC(sub_831461E8);
PPC_FUNC_IMPL(__imp__sub_831461E8) {
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
	// addi r6,r10,16680
	ctx.r6.s64 = ctx.r10.s64 + 16680;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3956
	ctx.r5.s64 = ctx.r9.s64 + 3956;
	// addi r4,r8,-6364
	ctx.r4.s64 = ctx.r8.s64 + -6364;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4756
	ctx.r3.s64 = ctx.r7.s64 + 4756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,14
	r31.s64 = 14;
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
	// li r6,120
	ctx.r6.s64 = 120;
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

__attribute__((alias("__imp__sub_83146260"))) PPC_WEAK_FUNC(sub_83146260);
PPC_FUNC_IMPL(__imp__sub_83146260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146264"))) PPC_WEAK_FUNC(sub_83146264);
PPC_FUNC_IMPL(__imp__sub_83146264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146268"))) PPC_WEAK_FUNC(sub_83146268);
PPC_FUNC_IMPL(__imp__sub_83146268) {
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
	// addi r7,r10,17088
	ctx.r7.s64 = ctx.r10.s64 + 17088;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-5640
	ctx.r4.s64 = ctx.r9.s64 + -5640;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4804
	ctx.r3.s64 = ctx.r8.s64 + 4804;
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
	// li r6,8
	ctx.r6.s64 = 8;
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

__attribute__((alias("__imp__sub_831462D4"))) PPC_WEAK_FUNC(sub_831462D4);
PPC_FUNC_IMPL(__imp__sub_831462D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831462D8"))) PPC_WEAK_FUNC(sub_831462D8);
PPC_FUNC_IMPL(__imp__sub_831462D8) {
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
	// addi r7,r10,17136
	ctx.r7.s64 = ctx.r10.s64 + 17136;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-6464
	ctx.r4.s64 = ctx.r9.s64 + -6464;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4852
	ctx.r3.s64 = ctx.r8.s64 + 4852;
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
	// li r6,8
	ctx.r6.s64 = 8;
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

__attribute__((alias("__imp__sub_83146344"))) PPC_WEAK_FUNC(sub_83146344);
PPC_FUNC_IMPL(__imp__sub_83146344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146348"))) PPC_WEAK_FUNC(sub_83146348);
PPC_FUNC_IMPL(__imp__sub_83146348) {
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
	// addi r7,r10,17184
	ctx.r7.s64 = ctx.r10.s64 + 17184;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-6432
	ctx.r4.s64 = ctx.r9.s64 + -6432;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,4900
	ctx.r3.s64 = ctx.r8.s64 + 4900;
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

__attribute__((alias("__imp__sub_831463B4"))) PPC_WEAK_FUNC(sub_831463B4);
PPC_FUNC_IMPL(__imp__sub_831463B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831463B8"))) PPC_WEAK_FUNC(sub_831463B8);
PPC_FUNC_IMPL(__imp__sub_831463B8) {
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
	// addi r9,r11,17256
	ctx.r9.s64 = r11.s64 + 17256;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r9,20
	ctx.r6.s64 = ctx.r9.s64 + 20;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// li r11,0
	r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r5,r10,-12796
	ctx.r5.s64 = ctx.r10.s64 + -12796;
	// addi r4,r8,-5880
	ctx.r4.s64 = ctx.r8.s64 + -5880;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,4948
	ctx.r3.s64 = ctx.r7.s64 + 4948;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,1
	r31.s64 = 1;
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
	// li r6,128
	ctx.r6.s64 = 128;
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

__attribute__((alias("__imp__sub_83146430"))) PPC_WEAK_FUNC(sub_83146430);
PPC_FUNC_IMPL(__imp__sub_83146430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146434"))) PPC_WEAK_FUNC(sub_83146434);
PPC_FUNC_IMPL(__imp__sub_83146434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146438"))) PPC_WEAK_FUNC(sub_83146438);
PPC_FUNC_IMPL(__imp__sub_83146438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,17304
	ctx.r10.s64 = r11.s64 + 17304;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82cfa9d0
	sub_82CFA9D0(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,4996
	ctx.r8.s64 = ctx.r9.s64 + 4996;
	// addi r11,r11,-5880
	r11.s64 = r11.s64 + -5880;
	// lis r10,-32049
	ctx.r10.s64 = -2100363264;
	// stw r11,4996(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4996, r11.u32);
	// lis r9,-32049
	ctx.r9.s64 = -2100363264;
	// addi r10,r10,-23520
	ctx.r10.s64 = ctx.r10.s64 + -23520;
	// addi r9,r9,-23560
	ctx.r9.s64 = ctx.r9.s64 + -23560;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8314649C"))) PPC_WEAK_FUNC(sub_8314649C);
PPC_FUNC_IMPL(__imp__sub_8314649C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831464A0"))) PPC_WEAK_FUNC(sub_831464A0);
PPC_FUNC_IMPL(__imp__sub_831464A0) {
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
	// addi r6,r10,17316
	ctx.r6.s64 = ctx.r10.s64 + 17316;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,3956
	ctx.r5.s64 = ctx.r9.s64 + 3956;
	// addi r4,r8,-6336
	ctx.r4.s64 = ctx.r8.s64 + -6336;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5012
	ctx.r3.s64 = ctx.r7.s64 + 5012;
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

__attribute__((alias("__imp__sub_83146518"))) PPC_WEAK_FUNC(sub_83146518);
PPC_FUNC_IMPL(__imp__sub_83146518) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314651C"))) PPC_WEAK_FUNC(sub_8314651C);
PPC_FUNC_IMPL(__imp__sub_8314651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146520"))) PPC_WEAK_FUNC(sub_83146520);
PPC_FUNC_IMPL(__imp__sub_83146520) {
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
	// addi r6,r10,17440
	ctx.r6.s64 = ctx.r10.s64 + 17440;
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
	// addi r4,r8,-5700
	ctx.r4.s64 = ctx.r8.s64 + -5700;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,5060
	ctx.r3.s64 = ctx.r7.s64 + 5060;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,14
	r31.s64 = 14;
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
	// li r6,152
	ctx.r6.s64 = 152;
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

__attribute__((alias("__imp__sub_8314659C"))) PPC_WEAK_FUNC(sub_8314659C);
PPC_FUNC_IMPL(__imp__sub_8314659C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831465A0"))) PPC_WEAK_FUNC(sub_831465A0);
PPC_FUNC_IMPL(__imp__sub_831465A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d00f38
	sub_82D00F38(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,5108
	ctx.r8.s64 = ctx.r9.s64 + 5108;
	// addi r11,r11,-5700
	r11.s64 = r11.s64 + -5700;
	// lis r10,-32049
	ctx.r10.s64 = -2100363264;
	// stw r11,5108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5108, r11.u32);
	// lis r9,-32049
	ctx.r9.s64 = -2100363264;
	// addi r10,r10,-22960
	ctx.r10.s64 = ctx.r10.s64 + -22960;
	// addi r9,r9,-22944
	ctx.r9.s64 = ctx.r9.s64 + -22944;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_831465F8"))) PPC_WEAK_FUNC(sub_831465F8);
PPC_FUNC_IMPL(__imp__sub_831465F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831465FC"))) PPC_WEAK_FUNC(sub_831465FC);
PPC_FUNC_IMPL(__imp__sub_831465FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146600"))) PPC_WEAK_FUNC(sub_83146600);
PPC_FUNC_IMPL(__imp__sub_83146600) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,17776
	ctx.r3.s64 = ctx.r9.s64 + 17776;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,-5676
	ctx.r4.s64 = ctx.r7.s64 + -5676;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,5124
	ctx.r3.s64 = ctx.r6.s64 + 5124;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
}

__attribute__((alias("__imp__sub_83146670"))) PPC_WEAK_FUNC(sub_83146670);
PPC_FUNC_IMPL(__imp__sub_83146670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146674"))) PPC_WEAK_FUNC(sub_83146674);
PPC_FUNC_IMPL(__imp__sub_83146674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146678"))) PPC_WEAK_FUNC(sub_83146678);
PPC_FUNC_IMPL(__imp__sub_83146678) {
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
	// addi r6,r10,17816
	ctx.r6.s64 = ctx.r10.s64 + 17816;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31919
	ctx.r7.s64 = -2091843584;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,4004
	ctx.r5.s64 = ctx.r9.s64 + 4004;
	// addi r4,r8,-5736
	ctx.r4.s64 = ctx.r8.s64 + -5736;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5172
	ctx.r3.s64 = ctx.r7.s64 + 5172;
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

__attribute__((alias("__imp__sub_831466F0"))) PPC_WEAK_FUNC(sub_831466F0);
PPC_FUNC_IMPL(__imp__sub_831466F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831466F4"))) PPC_WEAK_FUNC(sub_831466F4);
PPC_FUNC_IMPL(__imp__sub_831466F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831466F8"))) PPC_WEAK_FUNC(sub_831466F8);
PPC_FUNC_IMPL(__imp__sub_831466F8) {
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
	// addi r6,r10,17944
	ctx.r6.s64 = ctx.r10.s64 + 17944;
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
	// addi r4,r8,-5632
	ctx.r4.s64 = ctx.r8.s64 + -5632;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,5220
	ctx.r3.s64 = ctx.r7.s64 + 5220;
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
	// li r6,96
	ctx.r6.s64 = 96;
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

__attribute__((alias("__imp__sub_83146774"))) PPC_WEAK_FUNC(sub_83146774);
PPC_FUNC_IMPL(__imp__sub_83146774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146778"))) PPC_WEAK_FUNC(sub_83146778);
PPC_FUNC_IMPL(__imp__sub_83146778) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,18068
	ctx.r10.s64 = r11.s64 + 18068;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,5268
	ctx.r8.s64 = ctx.r9.s64 + 5268;
	// addi r11,r11,-5632
	r11.s64 = r11.s64 + -5632;
	// lis r10,-32049
	ctx.r10.s64 = -2100363264;
	// stw r11,5268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5268, r11.u32);
	// lis r9,-32049
	ctx.r9.s64 = -2100363264;
	// addi r10,r10,-22336
	ctx.r10.s64 = ctx.r10.s64 + -22336;
	// addi r9,r9,-22376
	ctx.r9.s64 = ctx.r9.s64 + -22376;
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
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_831467F4"))) PPC_WEAK_FUNC(sub_831467F4);
PPC_FUNC_IMPL(__imp__sub_831467F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831467F8"))) PPC_WEAK_FUNC(sub_831467F8);
PPC_FUNC_IMPL(__imp__sub_831467F8) {
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r9,18080
	ctx.r3.s64 = ctx.r9.s64 + 18080;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,-6084
	ctx.r4.s64 = ctx.r7.s64 + -6084;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,5284
	ctx.r3.s64 = ctx.r6.s64 + 5284;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
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
}

__attribute__((alias("__imp__sub_83146868"))) PPC_WEAK_FUNC(sub_83146868);
PPC_FUNC_IMPL(__imp__sub_83146868) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314686C"))) PPC_WEAK_FUNC(sub_8314686C);
PPC_FUNC_IMPL(__imp__sub_8314686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146870"))) PPC_WEAK_FUNC(sub_83146870);
PPC_FUNC_IMPL(__imp__sub_83146870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r10,-14944
	ctx.r9.s64 = ctx.r10.s64 + -14944;
	// lwz r11,-14952(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -14952);
	// stw r11,104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146888"))) PPC_WEAK_FUNC(sub_83146888);
PPC_FUNC_IMPL(__imp__sub_83146888) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,-14944
	ctx.r5.s64 = ctx.r10.s64 + -14944;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31919
	ctx.r6.s64 = -2091843584;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,-12796
	ctx.r5.s64 = ctx.r8.s64 + -12796;
	// addi r4,r7,-6484
	ctx.r4.s64 = ctx.r7.s64 + -6484;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,5332
	ctx.r3.s64 = ctx.r6.s64 + 5332;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,18136
	ctx.r9.s64 = ctx.r9.s64 + 18136;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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
}

__attribute__((alias("__imp__sub_83146900"))) PPC_WEAK_FUNC(sub_83146900);
PPC_FUNC_IMPL(__imp__sub_83146900) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146904"))) PPC_WEAK_FUNC(sub_83146904);
PPC_FUNC_IMPL(__imp__sub_83146904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146908"))) PPC_WEAK_FUNC(sub_83146908);
PPC_FUNC_IMPL(__imp__sub_83146908) {
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
	// addi r10,r11,18160
	ctx.r10.s64 = r11.s64 + 18160;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82bf7648
	sub_82BF7648(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,5380
	ctx.r8.s64 = ctx.r9.s64 + 5380;
	// addi r11,r11,-6484
	r11.s64 = r11.s64 + -6484;
	// lis r10,-32049
	ctx.r10.s64 = -2100363264;
	// stw r11,5380(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5380, r11.u32);
	// lis r9,-32049
	ctx.r9.s64 = -2100363264;
	// addi r10,r10,-21784
	ctx.r10.s64 = ctx.r10.s64 + -21784;
	// addi r9,r9,-21824
	ctx.r9.s64 = ctx.r9.s64 + -21824;
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

__attribute__((alias("__imp__sub_8314696C"))) PPC_WEAK_FUNC(sub_8314696C);
PPC_FUNC_IMPL(__imp__sub_8314696C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146970"))) PPC_WEAK_FUNC(sub_83146970);
PPC_FUNC_IMPL(__imp__sub_83146970) {
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
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r11,r11,24944
	r11.s64 = r11.s64 + 24944;
	// lis r8,-31919
	ctx.r8.s64 = -2091843584;
	// addi r7,r11,288
	ctx.r7.s64 = r11.s64 + 288;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r4,r9,-5572
	ctx.r4.s64 = ctx.r9.s64 + -5572;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,5716
	ctx.r3.s64 = ctx.r8.s64 + 5716;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831469DC"))) PPC_WEAK_FUNC(sub_831469DC);
PPC_FUNC_IMPL(__imp__sub_831469DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831469E0"))) PPC_WEAK_FUNC(sub_831469E0);
PPC_FUNC_IMPL(__imp__sub_831469E0) {
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
	// addi r4,r10,-5532
	ctx.r4.s64 = ctx.r10.s64 + -5532;
	// addi r3,r9,5764
	ctx.r3.s64 = ctx.r9.s64 + 5764;
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

__attribute__((alias("__imp__sub_83146A40"))) PPC_WEAK_FUNC(sub_83146A40);
PPC_FUNC_IMPL(__imp__sub_83146A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146A44"))) PPC_WEAK_FUNC(sub_83146A44);
PPC_FUNC_IMPL(__imp__sub_83146A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146A48"))) PPC_WEAK_FUNC(sub_83146A48);
PPC_FUNC_IMPL(__imp__sub_83146A48) {
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
	// addi r6,r10,25328
	ctx.r6.s64 = ctx.r10.s64 + 25328;
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
	// addi r4,r8,-5504
	ctx.r4.s64 = ctx.r8.s64 + -5504;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,5812
	ctx.r3.s64 = ctx.r7.s64 + 5812;
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

__attribute__((alias("__imp__sub_83146AC0"))) PPC_WEAK_FUNC(sub_83146AC0);
PPC_FUNC_IMPL(__imp__sub_83146AC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146AC4"))) PPC_WEAK_FUNC(sub_83146AC4);
PPC_FUNC_IMPL(__imp__sub_83146AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146AC8"))) PPC_WEAK_FUNC(sub_83146AC8);
PPC_FUNC_IMPL(__imp__sub_83146AC8) {
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
	// bl 0x82d14330
	sub_82D14330(ctx, base);
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r8,r9,5860
	ctx.r8.s64 = ctx.r9.s64 + 5860;
	// addi r11,r11,-5504
	r11.s64 = r11.s64 + -5504;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// stw r11,5860(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5860, r11.u32);
	// lis r9,-32047
	ctx.r9.s64 = -2100232192;
	// addi r10,r10,11936
	ctx.r10.s64 = ctx.r10.s64 + 11936;
	// addi r9,r9,11952
	ctx.r9.s64 = ctx.r9.s64 + 11952;
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

__attribute__((alias("__imp__sub_83146B20"))) PPC_WEAK_FUNC(sub_83146B20);
PPC_FUNC_IMPL(__imp__sub_83146B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B24"))) PPC_WEAK_FUNC(sub_83146B24);
PPC_FUNC_IMPL(__imp__sub_83146B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146B28"))) PPC_WEAK_FUNC(sub_83146B28);
PPC_FUNC_IMPL(__imp__sub_83146B28) {
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
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r3,r11,5996
	ctx.r3.s64 = r11.s64 + 5996;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-13608
	ctx.r3.s64 = ctx.r10.s64 + -13608;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83146B58"))) PPC_WEAK_FUNC(sub_83146B58);
PPC_FUNC_IMPL(__imp__sub_83146B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B5C"))) PPC_WEAK_FUNC(sub_83146B5C);
PPC_FUNC_IMPL(__imp__sub_83146B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146B60"))) PPC_WEAK_FUNC(sub_83146B60);
PPC_FUNC_IMPL(__imp__sub_83146B60) {
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
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r3,r11,6024
	ctx.r3.s64 = r11.s64 + 6024;
	// bl 0x82d3b480
	sub_82D3B480(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-13600
	ctx.r3.s64 = ctx.r10.s64 + -13600;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83146B90"))) PPC_WEAK_FUNC(sub_83146B90);
PPC_FUNC_IMPL(__imp__sub_83146B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146B94"))) PPC_WEAK_FUNC(sub_83146B94);
PPC_FUNC_IMPL(__imp__sub_83146B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146B98"))) PPC_WEAK_FUNC(sub_83146B98);
PPC_FUNC_IMPL(__imp__sub_83146B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13584
	ctx.r3.s64 = r11.s64 + -13584;
}

__attribute__((alias("__imp__sub_83146BA0"))) PPC_WEAK_FUNC(sub_83146BA0);
PPC_FUNC_IMPL(__imp__sub_83146BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146BA4"))) PPC_WEAK_FUNC(sub_83146BA4);
PPC_FUNC_IMPL(__imp__sub_83146BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146BA8"))) PPC_WEAK_FUNC(sub_83146BA8);
PPC_FUNC_IMPL(__imp__sub_83146BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13576
	ctx.r3.s64 = r11.s64 + -13576;
}

__attribute__((alias("__imp__sub_83146BB0"))) PPC_WEAK_FUNC(sub_83146BB0);
PPC_FUNC_IMPL(__imp__sub_83146BB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146BB4"))) PPC_WEAK_FUNC(sub_83146BB4);
PPC_FUNC_IMPL(__imp__sub_83146BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146BB8"))) PPC_WEAK_FUNC(sub_83146BB8);
PPC_FUNC_IMPL(__imp__sub_83146BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13560
	ctx.r3.s64 = r11.s64 + -13560;
}

__attribute__((alias("__imp__sub_83146BC0"))) PPC_WEAK_FUNC(sub_83146BC0);
PPC_FUNC_IMPL(__imp__sub_83146BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146BC4"))) PPC_WEAK_FUNC(sub_83146BC4);
PPC_FUNC_IMPL(__imp__sub_83146BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146BC8"))) PPC_WEAK_FUNC(sub_83146BC8);
PPC_FUNC_IMPL(__imp__sub_83146BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r11,r11,6264
	r11.s64 = r11.s64 + 6264;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83146BE0:
	// stwu r10,12(r11)
	ea = 12 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x83146be0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83146BE0;
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13568
	ctx.r3.s64 = r11.s64 + -13568;
}

__attribute__((alias("__imp__sub_83146BF0"))) PPC_WEAK_FUNC(sub_83146BF0);
PPC_FUNC_IMPL(__imp__sub_83146BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146BF4"))) PPC_WEAK_FUNC(sub_83146BF4);
PPC_FUNC_IMPL(__imp__sub_83146BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146BF8"))) PPC_WEAK_FUNC(sub_83146BF8);
PPC_FUNC_IMPL(__imp__sub_83146BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13552
	ctx.r3.s64 = r11.s64 + -13552;
}

__attribute__((alias("__imp__sub_83146C00"))) PPC_WEAK_FUNC(sub_83146C00);
PPC_FUNC_IMPL(__imp__sub_83146C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C04"))) PPC_WEAK_FUNC(sub_83146C04);
PPC_FUNC_IMPL(__imp__sub_83146C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C08"))) PPC_WEAK_FUNC(sub_83146C08);
PPC_FUNC_IMPL(__imp__sub_83146C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13544
	ctx.r3.s64 = r11.s64 + -13544;
}

__attribute__((alias("__imp__sub_83146C10"))) PPC_WEAK_FUNC(sub_83146C10);
PPC_FUNC_IMPL(__imp__sub_83146C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C14"))) PPC_WEAK_FUNC(sub_83146C14);
PPC_FUNC_IMPL(__imp__sub_83146C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C18"))) PPC_WEAK_FUNC(sub_83146C18);
PPC_FUNC_IMPL(__imp__sub_83146C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13536
	ctx.r3.s64 = r11.s64 + -13536;
}

__attribute__((alias("__imp__sub_83146C20"))) PPC_WEAK_FUNC(sub_83146C20);
PPC_FUNC_IMPL(__imp__sub_83146C20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C24"))) PPC_WEAK_FUNC(sub_83146C24);
PPC_FUNC_IMPL(__imp__sub_83146C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C28"))) PPC_WEAK_FUNC(sub_83146C28);
PPC_FUNC_IMPL(__imp__sub_83146C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13528
	ctx.r3.s64 = r11.s64 + -13528;
}

__attribute__((alias("__imp__sub_83146C30"))) PPC_WEAK_FUNC(sub_83146C30);
PPC_FUNC_IMPL(__imp__sub_83146C30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C34"))) PPC_WEAK_FUNC(sub_83146C34);
PPC_FUNC_IMPL(__imp__sub_83146C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C38"))) PPC_WEAK_FUNC(sub_83146C38);
PPC_FUNC_IMPL(__imp__sub_83146C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13520
	ctx.r3.s64 = r11.s64 + -13520;
}

__attribute__((alias("__imp__sub_83146C40"))) PPC_WEAK_FUNC(sub_83146C40);
PPC_FUNC_IMPL(__imp__sub_83146C40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C44"))) PPC_WEAK_FUNC(sub_83146C44);
PPC_FUNC_IMPL(__imp__sub_83146C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C48"))) PPC_WEAK_FUNC(sub_83146C48);
PPC_FUNC_IMPL(__imp__sub_83146C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13512
	ctx.r3.s64 = r11.s64 + -13512;
}

__attribute__((alias("__imp__sub_83146C50"))) PPC_WEAK_FUNC(sub_83146C50);
PPC_FUNC_IMPL(__imp__sub_83146C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C54"))) PPC_WEAK_FUNC(sub_83146C54);
PPC_FUNC_IMPL(__imp__sub_83146C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C58"))) PPC_WEAK_FUNC(sub_83146C58);
PPC_FUNC_IMPL(__imp__sub_83146C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13488
	ctx.r3.s64 = r11.s64 + -13488;
}

__attribute__((alias("__imp__sub_83146C60"))) PPC_WEAK_FUNC(sub_83146C60);
PPC_FUNC_IMPL(__imp__sub_83146C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C64"))) PPC_WEAK_FUNC(sub_83146C64);
PPC_FUNC_IMPL(__imp__sub_83146C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C68"))) PPC_WEAK_FUNC(sub_83146C68);
PPC_FUNC_IMPL(__imp__sub_83146C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13464
	ctx.r3.s64 = r11.s64 + -13464;
}

__attribute__((alias("__imp__sub_83146C70"))) PPC_WEAK_FUNC(sub_83146C70);
PPC_FUNC_IMPL(__imp__sub_83146C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C74"))) PPC_WEAK_FUNC(sub_83146C74);
PPC_FUNC_IMPL(__imp__sub_83146C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C78"))) PPC_WEAK_FUNC(sub_83146C78);
PPC_FUNC_IMPL(__imp__sub_83146C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13456
	ctx.r3.s64 = r11.s64 + -13456;
}

__attribute__((alias("__imp__sub_83146C80"))) PPC_WEAK_FUNC(sub_83146C80);
PPC_FUNC_IMPL(__imp__sub_83146C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C84"))) PPC_WEAK_FUNC(sub_83146C84);
PPC_FUNC_IMPL(__imp__sub_83146C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C88"))) PPC_WEAK_FUNC(sub_83146C88);
PPC_FUNC_IMPL(__imp__sub_83146C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13448
	ctx.r3.s64 = r11.s64 + -13448;
}

__attribute__((alias("__imp__sub_83146C90"))) PPC_WEAK_FUNC(sub_83146C90);
PPC_FUNC_IMPL(__imp__sub_83146C90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146C94"))) PPC_WEAK_FUNC(sub_83146C94);
PPC_FUNC_IMPL(__imp__sub_83146C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146C98"))) PPC_WEAK_FUNC(sub_83146C98);
PPC_FUNC_IMPL(__imp__sub_83146C98) {
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
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r3,r11,6740
	ctx.r3.s64 = r11.s64 + 6740;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-13440
	ctx.r3.s64 = ctx.r10.s64 + -13440;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83146CC8"))) PPC_WEAK_FUNC(sub_83146CC8);
PPC_FUNC_IMPL(__imp__sub_83146CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146CCC"))) PPC_WEAK_FUNC(sub_83146CCC);
PPC_FUNC_IMPL(__imp__sub_83146CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146CD0"))) PPC_WEAK_FUNC(sub_83146CD0);
PPC_FUNC_IMPL(__imp__sub_83146CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13432
	ctx.r3.s64 = r11.s64 + -13432;
}

__attribute__((alias("__imp__sub_83146CD8"))) PPC_WEAK_FUNC(sub_83146CD8);
PPC_FUNC_IMPL(__imp__sub_83146CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146CDC"))) PPC_WEAK_FUNC(sub_83146CDC);
PPC_FUNC_IMPL(__imp__sub_83146CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146CE0"))) PPC_WEAK_FUNC(sub_83146CE0);
PPC_FUNC_IMPL(__imp__sub_83146CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13424
	ctx.r3.s64 = r11.s64 + -13424;
}

__attribute__((alias("__imp__sub_83146CE8"))) PPC_WEAK_FUNC(sub_83146CE8);
PPC_FUNC_IMPL(__imp__sub_83146CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146CEC"))) PPC_WEAK_FUNC(sub_83146CEC);
PPC_FUNC_IMPL(__imp__sub_83146CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146CF0"))) PPC_WEAK_FUNC(sub_83146CF0);
PPC_FUNC_IMPL(__imp__sub_83146CF0) {
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
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r3,r11,9060
	ctx.r3.s64 = r11.s64 + 9060;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-13416
	ctx.r3.s64 = ctx.r10.s64 + -13416;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83146D20"))) PPC_WEAK_FUNC(sub_83146D20);
PPC_FUNC_IMPL(__imp__sub_83146D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146D24"))) PPC_WEAK_FUNC(sub_83146D24);
PPC_FUNC_IMPL(__imp__sub_83146D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146D28"))) PPC_WEAK_FUNC(sub_83146D28);
PPC_FUNC_IMPL(__imp__sub_83146D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13408
	ctx.r3.s64 = r11.s64 + -13408;
}

__attribute__((alias("__imp__sub_83146D30"))) PPC_WEAK_FUNC(sub_83146D30);
PPC_FUNC_IMPL(__imp__sub_83146D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146D34"))) PPC_WEAK_FUNC(sub_83146D34);
PPC_FUNC_IMPL(__imp__sub_83146D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146D38"))) PPC_WEAK_FUNC(sub_83146D38);
PPC_FUNC_IMPL(__imp__sub_83146D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13400
	ctx.r3.s64 = r11.s64 + -13400;
}

__attribute__((alias("__imp__sub_83146D40"))) PPC_WEAK_FUNC(sub_83146D40);
PPC_FUNC_IMPL(__imp__sub_83146D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146D44"))) PPC_WEAK_FUNC(sub_83146D44);
PPC_FUNC_IMPL(__imp__sub_83146D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146D48"))) PPC_WEAK_FUNC(sub_83146D48);
PPC_FUNC_IMPL(__imp__sub_83146D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13376
	ctx.r3.s64 = r11.s64 + -13376;
}

__attribute__((alias("__imp__sub_83146D50"))) PPC_WEAK_FUNC(sub_83146D50);
PPC_FUNC_IMPL(__imp__sub_83146D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146D54"))) PPC_WEAK_FUNC(sub_83146D54);
PPC_FUNC_IMPL(__imp__sub_83146D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146D58"))) PPC_WEAK_FUNC(sub_83146D58);
PPC_FUNC_IMPL(__imp__sub_83146D58) {
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
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r3,r11,9276
	ctx.r3.s64 = r11.s64 + 9276;
	// bl 0x82d89d88
	sub_82D89D88(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-13392
	ctx.r3.s64 = ctx.r10.s64 + -13392;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83146D88"))) PPC_WEAK_FUNC(sub_83146D88);
PPC_FUNC_IMPL(__imp__sub_83146D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146D8C"))) PPC_WEAK_FUNC(sub_83146D8C);
PPC_FUNC_IMPL(__imp__sub_83146D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146D90"))) PPC_WEAK_FUNC(sub_83146D90);
PPC_FUNC_IMPL(__imp__sub_83146D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13368
	ctx.r3.s64 = r11.s64 + -13368;
}

__attribute__((alias("__imp__sub_83146D98"))) PPC_WEAK_FUNC(sub_83146D98);
PPC_FUNC_IMPL(__imp__sub_83146D98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146D9C"))) PPC_WEAK_FUNC(sub_83146D9C);
PPC_FUNC_IMPL(__imp__sub_83146D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146DA0"))) PPC_WEAK_FUNC(sub_83146DA0);
PPC_FUNC_IMPL(__imp__sub_83146DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f1,25576(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 25576);
	// bl 0x828f2070
	sub_828F2070(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-31919
	ctx.r9.s64 = -2091843584;
	// lfd f0,-29928(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29928);
	// fmul f0,f1,f0
	f0.f64 = ctx.f1.f64 * f0.f64;
	// stfd f0,9416(r9)
	PPC_STORE_U64(ctx.r9.u32 + 9416, f0.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_83146DD8"))) PPC_WEAK_FUNC(sub_83146DD8);
PPC_FUNC_IMPL(__imp__sub_83146DD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146DDC"))) PPC_WEAK_FUNC(sub_83146DDC);
PPC_FUNC_IMPL(__imp__sub_83146DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146DE0"))) PPC_WEAK_FUNC(sub_83146DE0);
PPC_FUNC_IMPL(__imp__sub_83146DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13320
	ctx.r3.s64 = r11.s64 + -13320;
}

__attribute__((alias("__imp__sub_83146DE8"))) PPC_WEAK_FUNC(sub_83146DE8);
PPC_FUNC_IMPL(__imp__sub_83146DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146DEC"))) PPC_WEAK_FUNC(sub_83146DEC);
PPC_FUNC_IMPL(__imp__sub_83146DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146DF0"))) PPC_WEAK_FUNC(sub_83146DF0);
PPC_FUNC_IMPL(__imp__sub_83146DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13312
	ctx.r3.s64 = r11.s64 + -13312;
}

__attribute__((alias("__imp__sub_83146DF8"))) PPC_WEAK_FUNC(sub_83146DF8);
PPC_FUNC_IMPL(__imp__sub_83146DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146DFC"))) PPC_WEAK_FUNC(sub_83146DFC);
PPC_FUNC_IMPL(__imp__sub_83146DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E00"))) PPC_WEAK_FUNC(sub_83146E00);
PPC_FUNC_IMPL(__imp__sub_83146E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13304
	ctx.r3.s64 = r11.s64 + -13304;
}

__attribute__((alias("__imp__sub_83146E08"))) PPC_WEAK_FUNC(sub_83146E08);
PPC_FUNC_IMPL(__imp__sub_83146E08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E0C"))) PPC_WEAK_FUNC(sub_83146E0C);
PPC_FUNC_IMPL(__imp__sub_83146E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E10"))) PPC_WEAK_FUNC(sub_83146E10);
PPC_FUNC_IMPL(__imp__sub_83146E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13296
	ctx.r3.s64 = r11.s64 + -13296;
}

__attribute__((alias("__imp__sub_83146E18"))) PPC_WEAK_FUNC(sub_83146E18);
PPC_FUNC_IMPL(__imp__sub_83146E18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E1C"))) PPC_WEAK_FUNC(sub_83146E1C);
PPC_FUNC_IMPL(__imp__sub_83146E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E20"))) PPC_WEAK_FUNC(sub_83146E20);
PPC_FUNC_IMPL(__imp__sub_83146E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13288
	ctx.r3.s64 = r11.s64 + -13288;
}

__attribute__((alias("__imp__sub_83146E28"))) PPC_WEAK_FUNC(sub_83146E28);
PPC_FUNC_IMPL(__imp__sub_83146E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E2C"))) PPC_WEAK_FUNC(sub_83146E2C);
PPC_FUNC_IMPL(__imp__sub_83146E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E30"))) PPC_WEAK_FUNC(sub_83146E30);
PPC_FUNC_IMPL(__imp__sub_83146E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13280
	ctx.r3.s64 = r11.s64 + -13280;
}

__attribute__((alias("__imp__sub_83146E38"))) PPC_WEAK_FUNC(sub_83146E38);
PPC_FUNC_IMPL(__imp__sub_83146E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E3C"))) PPC_WEAK_FUNC(sub_83146E3C);
PPC_FUNC_IMPL(__imp__sub_83146E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E40"))) PPC_WEAK_FUNC(sub_83146E40);
PPC_FUNC_IMPL(__imp__sub_83146E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13272
	ctx.r3.s64 = r11.s64 + -13272;
}

__attribute__((alias("__imp__sub_83146E48"))) PPC_WEAK_FUNC(sub_83146E48);
PPC_FUNC_IMPL(__imp__sub_83146E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E4C"))) PPC_WEAK_FUNC(sub_83146E4C);
PPC_FUNC_IMPL(__imp__sub_83146E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E50"))) PPC_WEAK_FUNC(sub_83146E50);
PPC_FUNC_IMPL(__imp__sub_83146E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13264
	ctx.r3.s64 = r11.s64 + -13264;
}

__attribute__((alias("__imp__sub_83146E58"))) PPC_WEAK_FUNC(sub_83146E58);
PPC_FUNC_IMPL(__imp__sub_83146E58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E5C"))) PPC_WEAK_FUNC(sub_83146E5C);
PPC_FUNC_IMPL(__imp__sub_83146E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E60"))) PPC_WEAK_FUNC(sub_83146E60);
PPC_FUNC_IMPL(__imp__sub_83146E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-13256
	ctx.r3.s64 = r11.s64 + -13256;
}

