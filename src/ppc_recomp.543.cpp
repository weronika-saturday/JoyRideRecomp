#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F6340C"))) PPC_WEAK_FUNC(sub_82F6340C);
PPC_FUNC_IMPL(__imp__sub_82F6340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63410"))) PPC_WEAK_FUNC(sub_82F63410);
PPC_FUNC_IMPL(__imp__sub_82F63410) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,23032
	ctx.r5.s64 = ctx.r10.s64 + 23032;
	// addi r4,r9,21440
	ctx.r4.s64 = ctx.r9.s64 + 21440;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,13
	ctx.r10.s64 = 13;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-3164
	ctx.r4.s64 = ctx.r7.s64 + -3164;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,19188
	ctx.r3.s64 = ctx.r6.s64 + 19188;
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

__attribute__((alias("__imp__sub_82F6348C"))) PPC_WEAK_FUNC(sub_82F6348C);
PPC_FUNC_IMPL(__imp__sub_82F6348C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63490"))) PPC_WEAK_FUNC(sub_82F63490);
PPC_FUNC_IMPL(__imp__sub_82F63490) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,21752
	ctx.r6.s64 = ctx.r10.s64 + 21752;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,21588
	ctx.r5.s64 = ctx.r9.s64 + 21588;
	// addi r4,r8,-3144
	ctx.r4.s64 = ctx.r8.s64 + -3144;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,19236
	ctx.r3.s64 = ctx.r7.s64 + 19236;
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

__attribute__((alias("__imp__sub_82F63508"))) PPC_WEAK_FUNC(sub_82F63508);
PPC_FUNC_IMPL(__imp__sub_82F63508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6350C"))) PPC_WEAK_FUNC(sub_82F6350C);
PPC_FUNC_IMPL(__imp__sub_82F6350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63510"))) PPC_WEAK_FUNC(sub_82F63510);
PPC_FUNC_IMPL(__imp__sub_82F63510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,16520
	ctx.r9.s64 = ctx.r10.s64 + 16520;
	// lwz r11,19012(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19012);
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63528"))) PPC_WEAK_FUNC(sub_82F63528);
PPC_FUNC_IMPL(__imp__sub_82F63528) {
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
	// addi r6,r10,16520
	ctx.r6.s64 = ctx.r10.s64 + 16520;
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
	// addi r4,r8,-3092
	ctx.r4.s64 = ctx.r8.s64 + -3092;
	// addi r3,r7,19284
	ctx.r3.s64 = ctx.r7.s64 + 19284;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,23196
	ctx.r9.s64 = ctx.r9.s64 + 23196;
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

__attribute__((alias("__imp__sub_82F63598"))) PPC_WEAK_FUNC(sub_82F63598);
PPC_FUNC_IMPL(__imp__sub_82F63598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6359C"))) PPC_WEAK_FUNC(sub_82F6359C);
PPC_FUNC_IMPL(__imp__sub_82F6359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F635A0"))) PPC_WEAK_FUNC(sub_82F635A0);
PPC_FUNC_IMPL(__imp__sub_82F635A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,21848
	ctx.r6.s64 = ctx.r10.s64 + 21848;
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
	// addi r4,r8,-3072
	ctx.r4.s64 = ctx.r8.s64 + -3072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,19332
	ctx.r3.s64 = ctx.r7.s64 + 19332;
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

__attribute__((alias("__imp__sub_82F63618"))) PPC_WEAK_FUNC(sub_82F63618);
PPC_FUNC_IMPL(__imp__sub_82F63618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6361C"))) PPC_WEAK_FUNC(sub_82F6361C);
PPC_FUNC_IMPL(__imp__sub_82F6361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63620"))) PPC_WEAK_FUNC(sub_82F63620);
PPC_FUNC_IMPL(__imp__sub_82F63620) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,21872
	ctx.r6.s64 = ctx.r10.s64 + 21872;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-3048
	ctx.r4.s64 = ctx.r8.s64 + -3048;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,19380
	ctx.r3.s64 = ctx.r7.s64 + 19380;
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

__attribute__((alias("__imp__sub_82F63698"))) PPC_WEAK_FUNC(sub_82F63698);
PPC_FUNC_IMPL(__imp__sub_82F63698) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6369C"))) PPC_WEAK_FUNC(sub_82F6369C);
PPC_FUNC_IMPL(__imp__sub_82F6369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F636A0"))) PPC_WEAK_FUNC(sub_82F636A0);
PPC_FUNC_IMPL(__imp__sub_82F636A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,16616
	ctx.r9.s64 = ctx.r10.s64 + 16616;
	// lwz r11,21944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21944);
	// stw r11,152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 152, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F636B8"))) PPC_WEAK_FUNC(sub_82F636B8);
PPC_FUNC_IMPL(__imp__sub_82F636B8) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,23232
	ctx.r9.s64 = r11.s64 + 23232;
	// addi r4,r10,16616
	ctx.r4.s64 = ctx.r10.s64 + 16616;
	// addi r5,r9,24
	ctx.r5.s64 = ctx.r9.s64 + 24;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-2940
	ctx.r4.s64 = ctx.r7.s64 + -2940;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,19428
	ctx.r3.s64 = ctx.r6.s64 + 19428;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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

__attribute__((alias("__imp__sub_82F63734"))) PPC_WEAK_FUNC(sub_82F63734);
PPC_FUNC_IMPL(__imp__sub_82F63734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63738"))) PPC_WEAK_FUNC(sub_82F63738);
PPC_FUNC_IMPL(__imp__sub_82F63738) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,23340
	ctx.r5.s64 = ctx.r10.s64 + 23340;
	// addi r4,r9,21952
	ctx.r4.s64 = ctx.r9.s64 + 21952;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,21588
	ctx.r5.s64 = ctx.r8.s64 + 21588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2912
	ctx.r4.s64 = ctx.r7.s64 + -2912;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,19476
	ctx.r3.s64 = ctx.r6.s64 + 19476;
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

__attribute__((alias("__imp__sub_82F637B0"))) PPC_WEAK_FUNC(sub_82F637B0);
PPC_FUNC_IMPL(__imp__sub_82F637B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F637B4"))) PPC_WEAK_FUNC(sub_82F637B4);
PPC_FUNC_IMPL(__imp__sub_82F637B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F637B8"))) PPC_WEAK_FUNC(sub_82F637B8);
PPC_FUNC_IMPL(__imp__sub_82F637B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,16904
	ctx.r9.s64 = ctx.r10.s64 + 16904;
	// lwz r11,21948(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21948);
	// stw r11,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F637D0"))) PPC_WEAK_FUNC(sub_82F637D0);
PPC_FUNC_IMPL(__imp__sub_82F637D0) {
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
	// addi r6,r10,16904
	ctx.r6.s64 = ctx.r10.s64 + 16904;
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
	// addi r4,r8,-2860
	ctx.r4.s64 = ctx.r8.s64 + -2860;
	// addi r3,r7,19524
	ctx.r3.s64 = ctx.r7.s64 + 19524;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,23380
	ctx.r9.s64 = ctx.r9.s64 + 23380;
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

__attribute__((alias("__imp__sub_82F63840"))) PPC_WEAK_FUNC(sub_82F63840);
PPC_FUNC_IMPL(__imp__sub_82F63840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63844"))) PPC_WEAK_FUNC(sub_82F63844);
PPC_FUNC_IMPL(__imp__sub_82F63844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63848"))) PPC_WEAK_FUNC(sub_82F63848);
PPC_FUNC_IMPL(__imp__sub_82F63848) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,22048
	ctx.r6.s64 = ctx.r10.s64 + 22048;
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
	// addi r4,r8,-2840
	ctx.r4.s64 = ctx.r8.s64 + -2840;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,19572
	ctx.r3.s64 = ctx.r7.s64 + 19572;
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

__attribute__((alias("__imp__sub_82F638C0"))) PPC_WEAK_FUNC(sub_82F638C0);
PPC_FUNC_IMPL(__imp__sub_82F638C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F638C4"))) PPC_WEAK_FUNC(sub_82F638C4);
PPC_FUNC_IMPL(__imp__sub_82F638C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F638C8"))) PPC_WEAK_FUNC(sub_82F638C8);
PPC_FUNC_IMPL(__imp__sub_82F638C8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,22072
	ctx.r6.s64 = ctx.r10.s64 + 22072;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-2816
	ctx.r4.s64 = ctx.r8.s64 + -2816;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,19620
	ctx.r3.s64 = ctx.r7.s64 + 19620;
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

__attribute__((alias("__imp__sub_82F63940"))) PPC_WEAK_FUNC(sub_82F63940);
PPC_FUNC_IMPL(__imp__sub_82F63940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63944"))) PPC_WEAK_FUNC(sub_82F63944);
PPC_FUNC_IMPL(__imp__sub_82F63944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63948"))) PPC_WEAK_FUNC(sub_82F63948);
PPC_FUNC_IMPL(__imp__sub_82F63948) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,22144
	ctx.r7.s64 = ctx.r10.s64 + 22144;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-2788
	ctx.r4.s64 = ctx.r9.s64 + -2788;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,19668
	ctx.r3.s64 = ctx.r8.s64 + 19668;
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

__attribute__((alias("__imp__sub_82F639B4"))) PPC_WEAK_FUNC(sub_82F639B4);
PPC_FUNC_IMPL(__imp__sub_82F639B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F639B8"))) PPC_WEAK_FUNC(sub_82F639B8);
PPC_FUNC_IMPL(__imp__sub_82F639B8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,22168
	ctx.r6.s64 = ctx.r10.s64 + 22168;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-2764
	ctx.r4.s64 = ctx.r8.s64 + -2764;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,19716
	ctx.r3.s64 = ctx.r7.s64 + 19716;
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

__attribute__((alias("__imp__sub_82F63A30"))) PPC_WEAK_FUNC(sub_82F63A30);
PPC_FUNC_IMPL(__imp__sub_82F63A30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63A34"))) PPC_WEAK_FUNC(sub_82F63A34);
PPC_FUNC_IMPL(__imp__sub_82F63A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63A38"))) PPC_WEAK_FUNC(sub_82F63A38);
PPC_FUNC_IMPL(__imp__sub_82F63A38) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r6,r10,23400
	ctx.r6.s64 = ctx.r10.s64 + 23400;
	// addi r5,r9,22192
	ctx.r5.s64 = ctx.r9.s64 + 22192;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-2736
	ctx.r4.s64 = ctx.r8.s64 + -2736;
	// addi r3,r7,19764
	ctx.r3.s64 = ctx.r7.s64 + 19764;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r31,10
	r31.s64 = 10;
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

__attribute__((alias("__imp__sub_82F63AB4"))) PPC_WEAK_FUNC(sub_82F63AB4);
PPC_FUNC_IMPL(__imp__sub_82F63AB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63AB8"))) PPC_WEAK_FUNC(sub_82F63AB8);
PPC_FUNC_IMPL(__imp__sub_82F63AB8) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r5,r9,22432
	ctx.r5.s64 = ctx.r9.s64 + 22432;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r10,23472
	ctx.r6.s64 = ctx.r10.s64 + 23472;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-2720
	ctx.r4.s64 = ctx.r8.s64 + -2720;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,19812
	ctx.r3.s64 = ctx.r7.s64 + 19812;
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

__attribute__((alias("__imp__sub_82F63B30"))) PPC_WEAK_FUNC(sub_82F63B30);
PPC_FUNC_IMPL(__imp__sub_82F63B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63B34"))) PPC_WEAK_FUNC(sub_82F63B34);
PPC_FUNC_IMPL(__imp__sub_82F63B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63B38"))) PPC_WEAK_FUNC(sub_82F63B38);
PPC_FUNC_IMPL(__imp__sub_82F63B38) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,22840
	ctx.r7.s64 = ctx.r10.s64 + 22840;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r4,r9,-2696
	ctx.r4.s64 = ctx.r9.s64 + -2696;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,19860
	ctx.r3.s64 = ctx.r8.s64 + 19860;
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

__attribute__((alias("__imp__sub_82F63BA8"))) PPC_WEAK_FUNC(sub_82F63BA8);
PPC_FUNC_IMPL(__imp__sub_82F63BA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63BAC"))) PPC_WEAK_FUNC(sub_82F63BAC);
PPC_FUNC_IMPL(__imp__sub_82F63BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63BB0"))) PPC_WEAK_FUNC(sub_82F63BB0);
PPC_FUNC_IMPL(__imp__sub_82F63BB0) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,23648
	ctx.r5.s64 = ctx.r10.s64 + 23648;
	// addi r4,r9,22888
	ctx.r4.s64 = ctx.r9.s64 + 22888;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-2592
	ctx.r4.s64 = ctx.r7.s64 + -2592;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,19908
	ctx.r3.s64 = ctx.r6.s64 + 19908;
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

__attribute__((alias("__imp__sub_82F63C2C"))) PPC_WEAK_FUNC(sub_82F63C2C);
PPC_FUNC_IMPL(__imp__sub_82F63C2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63C30"))) PPC_WEAK_FUNC(sub_82F63C30);
PPC_FUNC_IMPL(__imp__sub_82F63C30) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,23724
	ctx.r5.s64 = ctx.r10.s64 + 23724;
	// addi r4,r9,23272
	ctx.r4.s64 = ctx.r9.s64 + 23272;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2572
	ctx.r4.s64 = ctx.r7.s64 + -2572;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,19956
	ctx.r3.s64 = ctx.r6.s64 + 19956;
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

__attribute__((alias("__imp__sub_82F63CA8"))) PPC_WEAK_FUNC(sub_82F63CA8);
PPC_FUNC_IMPL(__imp__sub_82F63CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63CAC"))) PPC_WEAK_FUNC(sub_82F63CAC);
PPC_FUNC_IMPL(__imp__sub_82F63CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63CB0"))) PPC_WEAK_FUNC(sub_82F63CB0);
PPC_FUNC_IMPL(__imp__sub_82F63CB0) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,23744
	ctx.r5.s64 = ctx.r10.s64 + 23744;
	// addi r4,r9,23368
	ctx.r4.s64 = ctx.r9.s64 + 23368;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2544
	ctx.r4.s64 = ctx.r7.s64 + -2544;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,20004
	ctx.r3.s64 = ctx.r6.s64 + 20004;
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

__attribute__((alias("__imp__sub_82F63D28"))) PPC_WEAK_FUNC(sub_82F63D28);
PPC_FUNC_IMPL(__imp__sub_82F63D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63D2C"))) PPC_WEAK_FUNC(sub_82F63D2C);
PPC_FUNC_IMPL(__imp__sub_82F63D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63D30"))) PPC_WEAK_FUNC(sub_82F63D30);
PPC_FUNC_IMPL(__imp__sub_82F63D30) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r5,r9,23536
	ctx.r5.s64 = ctx.r9.s64 + 23536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,23784
	ctx.r6.s64 = ctx.r10.s64 + 23784;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-2524
	ctx.r4.s64 = ctx.r8.s64 + -2524;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,20052
	ctx.r3.s64 = ctx.r7.s64 + 20052;
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

__attribute__((alias("__imp__sub_82F63DA8"))) PPC_WEAK_FUNC(sub_82F63DA8);
PPC_FUNC_IMPL(__imp__sub_82F63DA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63DAC"))) PPC_WEAK_FUNC(sub_82F63DAC);
PPC_FUNC_IMPL(__imp__sub_82F63DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63DB0"))) PPC_WEAK_FUNC(sub_82F63DB0);
PPC_FUNC_IMPL(__imp__sub_82F63DB0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,23704
	ctx.r7.s64 = ctx.r10.s64 + 23704;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-2500
	ctx.r4.s64 = ctx.r9.s64 + -2500;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,20100
	ctx.r3.s64 = ctx.r8.s64 + 20100;
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

__attribute__((alias("__imp__sub_82F63E1C"))) PPC_WEAK_FUNC(sub_82F63E1C);
PPC_FUNC_IMPL(__imp__sub_82F63E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63E20"))) PPC_WEAK_FUNC(sub_82F63E20);
PPC_FUNC_IMPL(__imp__sub_82F63E20) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,23776
	ctx.r6.s64 = ctx.r10.s64 + 23776;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-2468
	ctx.r4.s64 = ctx.r8.s64 + -2468;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,20148
	ctx.r3.s64 = ctx.r7.s64 + 20148;
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

__attribute__((alias("__imp__sub_82F63E98"))) PPC_WEAK_FUNC(sub_82F63E98);
PPC_FUNC_IMPL(__imp__sub_82F63E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63E9C"))) PPC_WEAK_FUNC(sub_82F63E9C);
PPC_FUNC_IMPL(__imp__sub_82F63E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63EA0"))) PPC_WEAK_FUNC(sub_82F63EA0);
PPC_FUNC_IMPL(__imp__sub_82F63EA0) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r5,r9,23800
	ctx.r5.s64 = ctx.r9.s64 + 23800;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r10,23864
	ctx.r6.s64 = ctx.r10.s64 + 23864;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-2440
	ctx.r4.s64 = ctx.r8.s64 + -2440;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,20196
	ctx.r3.s64 = ctx.r7.s64 + 20196;
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

__attribute__((alias("__imp__sub_82F63F18"))) PPC_WEAK_FUNC(sub_82F63F18);
PPC_FUNC_IMPL(__imp__sub_82F63F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63F1C"))) PPC_WEAK_FUNC(sub_82F63F1C);
PPC_FUNC_IMPL(__imp__sub_82F63F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63F20"))) PPC_WEAK_FUNC(sub_82F63F20);
PPC_FUNC_IMPL(__imp__sub_82F63F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,17000
	ctx.r9.s64 = ctx.r10.s64 + 17000;
	// lwz r11,29032(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29032);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63F38"))) PPC_WEAK_FUNC(sub_82F63F38);
PPC_FUNC_IMPL(__imp__sub_82F63F38) {
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
	// addi r6,r10,17000
	ctx.r6.s64 = ctx.r10.s64 + 17000;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-2396
	ctx.r4.s64 = ctx.r8.s64 + -2396;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,20244
	ctx.r3.s64 = ctx.r7.s64 + 20244;
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

__attribute__((alias("__imp__sub_82F63FB0"))) PPC_WEAK_FUNC(sub_82F63FB0);
PPC_FUNC_IMPL(__imp__sub_82F63FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F63FB4"))) PPC_WEAK_FUNC(sub_82F63FB4);
PPC_FUNC_IMPL(__imp__sub_82F63FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F63FB8"))) PPC_WEAK_FUNC(sub_82F63FB8);
PPC_FUNC_IMPL(__imp__sub_82F63FB8) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24000
	ctx.r5.s64 = ctx.r10.s64 + 24000;
	// addi r4,r9,24136
	ctx.r4.s64 = ctx.r9.s64 + 24136;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,21636
	ctx.r5.s64 = ctx.r8.s64 + 21636;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-2376
	ctx.r4.s64 = ctx.r7.s64 + -2376;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,20292
	ctx.r3.s64 = ctx.r6.s64 + 20292;
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

__attribute__((alias("__imp__sub_82F64034"))) PPC_WEAK_FUNC(sub_82F64034);
PPC_FUNC_IMPL(__imp__sub_82F64034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64038"))) PPC_WEAK_FUNC(sub_82F64038);
PPC_FUNC_IMPL(__imp__sub_82F64038) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24068
	ctx.r5.s64 = ctx.r10.s64 + 24068;
	// addi r4,r9,24400
	ctx.r4.s64 = ctx.r9.s64 + 24400;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2360
	ctx.r4.s64 = ctx.r7.s64 + -2360;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,20340
	ctx.r3.s64 = ctx.r6.s64 + 20340;
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

__attribute__((alias("__imp__sub_82F640B0"))) PPC_WEAK_FUNC(sub_82F640B0);
PPC_FUNC_IMPL(__imp__sub_82F640B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F640B4"))) PPC_WEAK_FUNC(sub_82F640B4);
PPC_FUNC_IMPL(__imp__sub_82F640B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F640B8"))) PPC_WEAK_FUNC(sub_82F640B8);
PPC_FUNC_IMPL(__imp__sub_82F640B8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,24472
	ctx.r6.s64 = ctx.r10.s64 + 24472;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-2340
	ctx.r4.s64 = ctx.r8.s64 + -2340;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,20388
	ctx.r3.s64 = ctx.r7.s64 + 20388;
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

__attribute__((alias("__imp__sub_82F64130"))) PPC_WEAK_FUNC(sub_82F64130);
PPC_FUNC_IMPL(__imp__sub_82F64130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64134"))) PPC_WEAK_FUNC(sub_82F64134);
PPC_FUNC_IMPL(__imp__sub_82F64134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64138"))) PPC_WEAK_FUNC(sub_82F64138);
PPC_FUNC_IMPL(__imp__sub_82F64138) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24088
	ctx.r5.s64 = ctx.r10.s64 + 24088;
	// addi r4,r9,24496
	ctx.r4.s64 = ctx.r9.s64 + 24496;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-2324
	ctx.r4.s64 = ctx.r7.s64 + -2324;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,20436
	ctx.r3.s64 = ctx.r6.s64 + 20436;
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

__attribute__((alias("__imp__sub_82F641B4"))) PPC_WEAK_FUNC(sub_82F641B4);
PPC_FUNC_IMPL(__imp__sub_82F641B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F641B8"))) PPC_WEAK_FUNC(sub_82F641B8);
PPC_FUNC_IMPL(__imp__sub_82F641B8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,24904
	ctx.r6.s64 = ctx.r10.s64 + 24904;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-2304
	ctx.r4.s64 = ctx.r8.s64 + -2304;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,20484
	ctx.r3.s64 = ctx.r7.s64 + 20484;
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

__attribute__((alias("__imp__sub_82F64230"))) PPC_WEAK_FUNC(sub_82F64230);
PPC_FUNC_IMPL(__imp__sub_82F64230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64234"))) PPC_WEAK_FUNC(sub_82F64234);
PPC_FUNC_IMPL(__imp__sub_82F64234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64238"))) PPC_WEAK_FUNC(sub_82F64238);
PPC_FUNC_IMPL(__imp__sub_82F64238) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24244
	ctx.r5.s64 = ctx.r10.s64 + 24244;
	// addi r4,r9,24928
	ctx.r4.s64 = ctx.r9.s64 + 24928;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-2284
	ctx.r4.s64 = ctx.r7.s64 + -2284;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,20532
	ctx.r3.s64 = ctx.r6.s64 + 20532;
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

__attribute__((alias("__imp__sub_82F642B0"))) PPC_WEAK_FUNC(sub_82F642B0);
PPC_FUNC_IMPL(__imp__sub_82F642B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F642B4"))) PPC_WEAK_FUNC(sub_82F642B4);
PPC_FUNC_IMPL(__imp__sub_82F642B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F642B8"))) PPC_WEAK_FUNC(sub_82F642B8);
PPC_FUNC_IMPL(__imp__sub_82F642B8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r6,r10,24344
	ctx.r6.s64 = ctx.r10.s64 + 24344;
	// addi r5,r9,24984
	ctx.r5.s64 = ctx.r9.s64 + 24984;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-2256
	ctx.r4.s64 = ctx.r8.s64 + -2256;
	// addi r3,r7,20580
	ctx.r3.s64 = ctx.r7.s64 + 20580;
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

__attribute__((alias("__imp__sub_82F64334"))) PPC_WEAK_FUNC(sub_82F64334);
PPC_FUNC_IMPL(__imp__sub_82F64334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64338"))) PPC_WEAK_FUNC(sub_82F64338);
PPC_FUNC_IMPL(__imp__sub_82F64338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r8,r9,17072
	ctx.r8.s64 = ctx.r9.s64 + 17072;
	// lwz r11,24976(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24976);
	// lwz r10,24980(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24980);
	// stw r11,344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 344, r11.u32);
	// stw r10,368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 368, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6435C"))) PPC_WEAK_FUNC(sub_82F6435C);
PPC_FUNC_IMPL(__imp__sub_82F6435C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64360"))) PPC_WEAK_FUNC(sub_82F64360);
PPC_FUNC_IMPL(__imp__sub_82F64360) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,24300
	ctx.r9.s64 = r11.s64 + 24300;
	// addi r4,r10,17072
	ctx.r4.s64 = ctx.r10.s64 + 17072;
	// addi r5,r9,156
	ctx.r5.s64 = ctx.r9.s64 + 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,29
	ctx.r10.s64 = 29;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1940
	ctx.r4.s64 = ctx.r7.s64 + -1940;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,20628
	ctx.r3.s64 = ctx.r6.s64 + 20628;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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

__attribute__((alias("__imp__sub_82F643DC"))) PPC_WEAK_FUNC(sub_82F643DC);
PPC_FUNC_IMPL(__imp__sub_82F643DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F643E0"))) PPC_WEAK_FUNC(sub_82F643E0);
PPC_FUNC_IMPL(__imp__sub_82F643E0) {
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
	// addi r5,r10,18804
	ctx.r5.s64 = ctx.r10.s64 + 18804;
	// addi r4,r9,-1920
	ctx.r4.s64 = ctx.r9.s64 + -1920;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,20676
	ctx.r3.s64 = ctx.r8.s64 + 20676;
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

__attribute__((alias("__imp__sub_82F64444"))) PPC_WEAK_FUNC(sub_82F64444);
PPC_FUNC_IMPL(__imp__sub_82F64444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64448"))) PPC_WEAK_FUNC(sub_82F64448);
PPC_FUNC_IMPL(__imp__sub_82F64448) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r10,25320
	ctx.r6.s64 = ctx.r10.s64 + 25320;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-1848
	ctx.r4.s64 = ctx.r8.s64 + -1848;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,20724
	ctx.r3.s64 = ctx.r7.s64 + 20724;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,1
	r31.s64 = 1;
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

__attribute__((alias("__imp__sub_82F644C4"))) PPC_WEAK_FUNC(sub_82F644C4);
PPC_FUNC_IMPL(__imp__sub_82F644C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F644C8"))) PPC_WEAK_FUNC(sub_82F644C8);
PPC_FUNC_IMPL(__imp__sub_82F644C8) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r6,r10,24632
	ctx.r6.s64 = ctx.r10.s64 + 24632;
	// addi r5,r9,25344
	ctx.r5.s64 = ctx.r9.s64 + 25344;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-1820
	ctx.r4.s64 = ctx.r8.s64 + -1820;
	// addi r3,r7,20772
	ctx.r3.s64 = ctx.r7.s64 + 20772;
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

__attribute__((alias("__imp__sub_82F64544"))) PPC_WEAK_FUNC(sub_82F64544);
PPC_FUNC_IMPL(__imp__sub_82F64544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64548"))) PPC_WEAK_FUNC(sub_82F64548);
PPC_FUNC_IMPL(__imp__sub_82F64548) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,25464
	ctx.r6.s64 = ctx.r10.s64 + 25464;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-1788
	ctx.r4.s64 = ctx.r8.s64 + -1788;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,20820
	ctx.r3.s64 = ctx.r7.s64 + 20820;
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

__attribute__((alias("__imp__sub_82F645C4"))) PPC_WEAK_FUNC(sub_82F645C4);
PPC_FUNC_IMPL(__imp__sub_82F645C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F645C8"))) PPC_WEAK_FUNC(sub_82F645C8);
PPC_FUNC_IMPL(__imp__sub_82F645C8) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r5,r9,25520
	ctx.r5.s64 = ctx.r9.s64 + 25520;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r10,24716
	ctx.r6.s64 = ctx.r10.s64 + 24716;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-21124
	ctx.r4.s64 = ctx.r8.s64 + -21124;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r7,20868
	ctx.r3.s64 = ctx.r7.s64 + 20868;
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

__attribute__((alias("__imp__sub_82F64640"))) PPC_WEAK_FUNC(sub_82F64640);
PPC_FUNC_IMPL(__imp__sub_82F64640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64644"))) PPC_WEAK_FUNC(sub_82F64644);
PPC_FUNC_IMPL(__imp__sub_82F64644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64648"))) PPC_WEAK_FUNC(sub_82F64648);
PPC_FUNC_IMPL(__imp__sub_82F64648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,17768
	ctx.r9.s64 = ctx.r10.s64 + 17768;
	// lwz r11,25512(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25512);
	// stw r11,200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 200, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64660"))) PPC_WEAK_FUNC(sub_82F64660);
PPC_FUNC_IMPL(__imp__sub_82F64660) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,24696
	ctx.r9.s64 = r11.s64 + 24696;
	// addi r4,r10,17768
	ctx.r4.s64 = ctx.r10.s64 + 17768;
	// addi r5,r9,72
	ctx.r5.s64 = ctx.r9.s64 + 72;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-21028
	ctx.r4.s64 = ctx.r7.s64 + -21028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,20916
	ctx.r3.s64 = ctx.r6.s64 + 20916;
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

__attribute__((alias("__imp__sub_82F646D8"))) PPC_WEAK_FUNC(sub_82F646D8);
PPC_FUNC_IMPL(__imp__sub_82F646D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F646DC"))) PPC_WEAK_FUNC(sub_82F646DC);
PPC_FUNC_IMPL(__imp__sub_82F646DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F646E0"))) PPC_WEAK_FUNC(sub_82F646E0);
PPC_FUNC_IMPL(__imp__sub_82F646E0) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24848
	ctx.r5.s64 = ctx.r10.s64 + 24848;
	// addi r4,r9,25616
	ctx.r4.s64 = ctx.r9.s64 + 25616;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1752
	ctx.r4.s64 = ctx.r7.s64 + -1752;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,20964
	ctx.r3.s64 = ctx.r6.s64 + 20964;
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

__attribute__((alias("__imp__sub_82F6475C"))) PPC_WEAK_FUNC(sub_82F6475C);
PPC_FUNC_IMPL(__imp__sub_82F6475C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64760"))) PPC_WEAK_FUNC(sub_82F64760);
PPC_FUNC_IMPL(__imp__sub_82F64760) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,26000
	ctx.r6.s64 = ctx.r10.s64 + 26000;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-21000
	ctx.r4.s64 = ctx.r8.s64 + -21000;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21012
	ctx.r3.s64 = ctx.r7.s64 + 21012;
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

__attribute__((alias("__imp__sub_82F647D8"))) PPC_WEAK_FUNC(sub_82F647D8);
PPC_FUNC_IMPL(__imp__sub_82F647D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F647DC"))) PPC_WEAK_FUNC(sub_82F647DC);
PPC_FUNC_IMPL(__imp__sub_82F647DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F647E0"))) PPC_WEAK_FUNC(sub_82F647E0);
PPC_FUNC_IMPL(__imp__sub_82F647E0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r6,r10,24920
	ctx.r6.s64 = ctx.r10.s64 + 24920;
	// addi r5,r9,26024
	ctx.r5.s64 = ctx.r9.s64 + 26024;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-1704
	ctx.r4.s64 = ctx.r8.s64 + -1704;
	// addi r3,r7,21060
	ctx.r3.s64 = ctx.r7.s64 + 21060;
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

__attribute__((alias("__imp__sub_82F6485C"))) PPC_WEAK_FUNC(sub_82F6485C);
PPC_FUNC_IMPL(__imp__sub_82F6485C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64860"))) PPC_WEAK_FUNC(sub_82F64860);
PPC_FUNC_IMPL(__imp__sub_82F64860) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,26072
	ctx.r6.s64 = ctx.r10.s64 + 26072;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-1672
	ctx.r4.s64 = ctx.r8.s64 + -1672;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21108
	ctx.r3.s64 = ctx.r7.s64 + 21108;
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

__attribute__((alias("__imp__sub_82F648D8"))) PPC_WEAK_FUNC(sub_82F648D8);
PPC_FUNC_IMPL(__imp__sub_82F648D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F648DC"))) PPC_WEAK_FUNC(sub_82F648DC);
PPC_FUNC_IMPL(__imp__sub_82F648DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F648E0"))) PPC_WEAK_FUNC(sub_82F648E0);
PPC_FUNC_IMPL(__imp__sub_82F648E0) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24932
	ctx.r5.s64 = ctx.r10.s64 + 24932;
	// addi r4,r9,26096
	ctx.r4.s64 = ctx.r9.s64 + 26096;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-20976
	ctx.r4.s64 = ctx.r7.s64 + -20976;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,21156
	ctx.r3.s64 = ctx.r6.s64 + 21156;
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

__attribute__((alias("__imp__sub_82F6495C"))) PPC_WEAK_FUNC(sub_82F6495C);
PPC_FUNC_IMPL(__imp__sub_82F6495C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64960"))) PPC_WEAK_FUNC(sub_82F64960);
PPC_FUNC_IMPL(__imp__sub_82F64960) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,24968
	ctx.r5.s64 = ctx.r10.s64 + 24968;
	// addi r4,r9,26288
	ctx.r4.s64 = ctx.r9.s64 + 26288;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1636
	ctx.r4.s64 = ctx.r7.s64 + -1636;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,21204
	ctx.r3.s64 = ctx.r6.s64 + 21204;
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

__attribute__((alias("__imp__sub_82F649DC"))) PPC_WEAK_FUNC(sub_82F649DC);
PPC_FUNC_IMPL(__imp__sub_82F649DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F649E0"))) PPC_WEAK_FUNC(sub_82F649E0);
PPC_FUNC_IMPL(__imp__sub_82F649E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,18128
	ctx.r9.s64 = ctx.r10.s64 + 18128;
	// lwz r11,25516(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25516);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F649F8"))) PPC_WEAK_FUNC(sub_82F649F8);
PPC_FUNC_IMPL(__imp__sub_82F649F8) {
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
	// addi r6,r10,18128
	ctx.r6.s64 = ctx.r10.s64 + 18128;
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
	// addi r4,r8,-1588
	ctx.r4.s64 = ctx.r8.s64 + -1588;
	// addi r3,r7,21252
	ctx.r3.s64 = ctx.r7.s64 + 21252;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,25032
	ctx.r9.s64 = ctx.r9.s64 + 25032;
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

__attribute__((alias("__imp__sub_82F64A68"))) PPC_WEAK_FUNC(sub_82F64A68);
PPC_FUNC_IMPL(__imp__sub_82F64A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64A6C"))) PPC_WEAK_FUNC(sub_82F64A6C);
PPC_FUNC_IMPL(__imp__sub_82F64A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64A70"))) PPC_WEAK_FUNC(sub_82F64A70);
PPC_FUNC_IMPL(__imp__sub_82F64A70) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,26384
	ctx.r6.s64 = ctx.r10.s64 + 26384;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-1548
	ctx.r4.s64 = ctx.r8.s64 + -1548;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21300
	ctx.r3.s64 = ctx.r7.s64 + 21300;
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

__attribute__((alias("__imp__sub_82F64AE8"))) PPC_WEAK_FUNC(sub_82F64AE8);
PPC_FUNC_IMPL(__imp__sub_82F64AE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64AEC"))) PPC_WEAK_FUNC(sub_82F64AEC);
PPC_FUNC_IMPL(__imp__sub_82F64AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64AF0"))) PPC_WEAK_FUNC(sub_82F64AF0);
PPC_FUNC_IMPL(__imp__sub_82F64AF0) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r6,r10,25156
	ctx.r6.s64 = ctx.r10.s64 + 25156;
	// addi r5,r9,26416
	ctx.r5.s64 = ctx.r9.s64 + 26416;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-1524
	ctx.r4.s64 = ctx.r8.s64 + -1524;
	// addi r3,r7,21348
	ctx.r3.s64 = ctx.r7.s64 + 21348;
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

__attribute__((alias("__imp__sub_82F64B6C"))) PPC_WEAK_FUNC(sub_82F64B6C);
PPC_FUNC_IMPL(__imp__sub_82F64B6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64B70"))) PPC_WEAK_FUNC(sub_82F64B70);
PPC_FUNC_IMPL(__imp__sub_82F64B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,18176
	ctx.r9.s64 = ctx.r10.s64 + 18176;
	// lwz r11,26408(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26408);
	// stw r11,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64B88"))) PPC_WEAK_FUNC(sub_82F64B88);
PPC_FUNC_IMPL(__imp__sub_82F64B88) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,25136
	ctx.r9.s64 = r11.s64 + 25136;
	// addi r4,r10,18176
	ctx.r4.s64 = ctx.r10.s64 + 18176;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1392
	ctx.r4.s64 = ctx.r7.s64 + -1392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,21396
	ctx.r3.s64 = ctx.r6.s64 + 21396;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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

__attribute__((alias("__imp__sub_82F64C04"))) PPC_WEAK_FUNC(sub_82F64C04);
PPC_FUNC_IMPL(__imp__sub_82F64C04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64C08"))) PPC_WEAK_FUNC(sub_82F64C08);
PPC_FUNC_IMPL(__imp__sub_82F64C08) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,26512
	ctx.r6.s64 = ctx.r10.s64 + 26512;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-1368
	ctx.r4.s64 = ctx.r8.s64 + -1368;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,21444
	ctx.r3.s64 = ctx.r7.s64 + 21444;
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

__attribute__((alias("__imp__sub_82F64C84"))) PPC_WEAK_FUNC(sub_82F64C84);
PPC_FUNC_IMPL(__imp__sub_82F64C84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64C88"))) PPC_WEAK_FUNC(sub_82F64C88);
PPC_FUNC_IMPL(__imp__sub_82F64C88) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,25272
	ctx.r5.s64 = ctx.r10.s64 + 25272;
	// addi r4,r9,26584
	ctx.r4.s64 = ctx.r9.s64 + 26584;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1348
	ctx.r4.s64 = ctx.r7.s64 + -1348;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,21492
	ctx.r3.s64 = ctx.r6.s64 + 21492;
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

__attribute__((alias("__imp__sub_82F64D00"))) PPC_WEAK_FUNC(sub_82F64D00);
PPC_FUNC_IMPL(__imp__sub_82F64D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64D04"))) PPC_WEAK_FUNC(sub_82F64D04);
PPC_FUNC_IMPL(__imp__sub_82F64D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64D08"))) PPC_WEAK_FUNC(sub_82F64D08);
PPC_FUNC_IMPL(__imp__sub_82F64D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,18608
	ctx.r9.s64 = ctx.r10.s64 + 18608;
	// lwz r11,26412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26412);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64D20"))) PPC_WEAK_FUNC(sub_82F64D20);
PPC_FUNC_IMPL(__imp__sub_82F64D20) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,25340
	ctx.r9.s64 = r11.s64 + 25340;
	// addi r4,r10,18608
	ctx.r4.s64 = ctx.r10.s64 + 18608;
	// addi r5,r9,20
	ctx.r5.s64 = ctx.r9.s64 + 20;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-1288
	ctx.r4.s64 = ctx.r7.s64 + -1288;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,21540
	ctx.r3.s64 = ctx.r6.s64 + 21540;
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

__attribute__((alias("__imp__sub_82F64D98"))) PPC_WEAK_FUNC(sub_82F64D98);
PPC_FUNC_IMPL(__imp__sub_82F64D98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64D9C"))) PPC_WEAK_FUNC(sub_82F64D9C);
PPC_FUNC_IMPL(__imp__sub_82F64D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64DA0"))) PPC_WEAK_FUNC(sub_82F64DA0);
PPC_FUNC_IMPL(__imp__sub_82F64DA0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,26776
	ctx.r6.s64 = ctx.r10.s64 + 26776;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,18804
	ctx.r5.s64 = ctx.r9.s64 + 18804;
	// addi r4,r8,-1268
	ctx.r4.s64 = ctx.r8.s64 + -1268;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21588
	ctx.r3.s64 = ctx.r7.s64 + 21588;
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

__attribute__((alias("__imp__sub_82F64E18"))) PPC_WEAK_FUNC(sub_82F64E18);
PPC_FUNC_IMPL(__imp__sub_82F64E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64E1C"))) PPC_WEAK_FUNC(sub_82F64E1C);
PPC_FUNC_IMPL(__imp__sub_82F64E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64E20"))) PPC_WEAK_FUNC(sub_82F64E20);
PPC_FUNC_IMPL(__imp__sub_82F64E20) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,26800
	ctx.r6.s64 = ctx.r10.s64 + 26800;
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
	// addi r4,r8,-1248
	ctx.r4.s64 = ctx.r8.s64 + -1248;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21636
	ctx.r3.s64 = ctx.r7.s64 + 21636;
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

__attribute__((alias("__imp__sub_82F64E98"))) PPC_WEAK_FUNC(sub_82F64E98);
PPC_FUNC_IMPL(__imp__sub_82F64E98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64E9C"))) PPC_WEAK_FUNC(sub_82F64E9C);
PPC_FUNC_IMPL(__imp__sub_82F64E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64EA0"))) PPC_WEAK_FUNC(sub_82F64EA0);
PPC_FUNC_IMPL(__imp__sub_82F64EA0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r10,26832
	ctx.r5.s64 = ctx.r10.s64 + 26832;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r5,r8,21636
	ctx.r5.s64 = ctx.r8.s64 + 21636;
	// addi r4,r7,-1236
	ctx.r4.s64 = ctx.r7.s64 + -1236;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,21684
	ctx.r3.s64 = ctx.r6.s64 + 21684;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,25464
	ctx.r9.s64 = ctx.r9.s64 + 25464;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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

__attribute__((alias("__imp__sub_82F64F18"))) PPC_WEAK_FUNC(sub_82F64F18);
PPC_FUNC_IMPL(__imp__sub_82F64F18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64F1C"))) PPC_WEAK_FUNC(sub_82F64F1C);
PPC_FUNC_IMPL(__imp__sub_82F64F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64F20"))) PPC_WEAK_FUNC(sub_82F64F20);
PPC_FUNC_IMPL(__imp__sub_82F64F20) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,26952
	ctx.r6.s64 = ctx.r10.s64 + 26952;
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
	// addi r4,r8,-1228
	ctx.r4.s64 = ctx.r8.s64 + -1228;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21732
	ctx.r3.s64 = ctx.r7.s64 + 21732;
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

__attribute__((alias("__imp__sub_82F64F98"))) PPC_WEAK_FUNC(sub_82F64F98);
PPC_FUNC_IMPL(__imp__sub_82F64F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F64F9C"))) PPC_WEAK_FUNC(sub_82F64F9C);
PPC_FUNC_IMPL(__imp__sub_82F64F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F64FA0"))) PPC_WEAK_FUNC(sub_82F64FA0);
PPC_FUNC_IMPL(__imp__sub_82F64FA0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,27024
	ctx.r6.s64 = ctx.r10.s64 + 27024;
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
	// addi r4,r8,-1212
	ctx.r4.s64 = ctx.r8.s64 + -1212;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21780
	ctx.r3.s64 = ctx.r7.s64 + 21780;
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

__attribute__((alias("__imp__sub_82F65018"))) PPC_WEAK_FUNC(sub_82F65018);
PPC_FUNC_IMPL(__imp__sub_82F65018) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6501C"))) PPC_WEAK_FUNC(sub_82F6501C);
PPC_FUNC_IMPL(__imp__sub_82F6501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65020"))) PPC_WEAK_FUNC(sub_82F65020);
PPC_FUNC_IMPL(__imp__sub_82F65020) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,25504
	ctx.r5.s64 = ctx.r10.s64 + 25504;
	// addi r4,r9,27192
	ctx.r4.s64 = ctx.r9.s64 + 27192;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,11
	ctx.r9.s64 = 11;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,18804
	ctx.r5.s64 = ctx.r8.s64 + 18804;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1188
	ctx.r4.s64 = ctx.r7.s64 + -1188;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,21828
	ctx.r3.s64 = ctx.r6.s64 + 21828;
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

__attribute__((alias("__imp__sub_82F65098"))) PPC_WEAK_FUNC(sub_82F65098);
PPC_FUNC_IMPL(__imp__sub_82F65098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6509C"))) PPC_WEAK_FUNC(sub_82F6509C);
PPC_FUNC_IMPL(__imp__sub_82F6509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F650A0"))) PPC_WEAK_FUNC(sub_82F650A0);
PPC_FUNC_IMPL(__imp__sub_82F650A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,27456
	ctx.r6.s64 = ctx.r10.s64 + 27456;
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
	// addi r4,r8,-1176
	ctx.r4.s64 = ctx.r8.s64 + -1176;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,21876
	ctx.r3.s64 = ctx.r7.s64 + 21876;
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

__attribute__((alias("__imp__sub_82F65118"))) PPC_WEAK_FUNC(sub_82F65118);
PPC_FUNC_IMPL(__imp__sub_82F65118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6511C"))) PPC_WEAK_FUNC(sub_82F6511C);
PPC_FUNC_IMPL(__imp__sub_82F6511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65120"))) PPC_WEAK_FUNC(sub_82F65120);
PPC_FUNC_IMPL(__imp__sub_82F65120) {
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
	// addi r4,r9,-1152
	ctx.r4.s64 = ctx.r9.s64 + -1152;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,21924
	ctx.r3.s64 = ctx.r8.s64 + 21924;
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

__attribute__((alias("__imp__sub_82F65184"))) PPC_WEAK_FUNC(sub_82F65184);
PPC_FUNC_IMPL(__imp__sub_82F65184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65188"))) PPC_WEAK_FUNC(sub_82F65188);
PPC_FUNC_IMPL(__imp__sub_82F65188) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27504
	ctx.r7.s64 = ctx.r10.s64 + 27504;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,21972
	ctx.r3.s64 = ctx.r8.s64 + 21972;
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

__attribute__((alias("__imp__sub_82F651F4"))) PPC_WEAK_FUNC(sub_82F651F4);
PPC_FUNC_IMPL(__imp__sub_82F651F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F651F8"))) PPC_WEAK_FUNC(sub_82F651F8);
PPC_FUNC_IMPL(__imp__sub_82F651F8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,27552
	ctx.r6.s64 = ctx.r10.s64 + 27552;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,21924
	ctx.r5.s64 = ctx.r9.s64 + 21924;
	// addi r4,r8,-1096
	ctx.r4.s64 = ctx.r8.s64 + -1096;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,22020
	ctx.r3.s64 = ctx.r7.s64 + 22020;
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

__attribute__((alias("__imp__sub_82F65270"))) PPC_WEAK_FUNC(sub_82F65270);
PPC_FUNC_IMPL(__imp__sub_82F65270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65274"))) PPC_WEAK_FUNC(sub_82F65274);
PPC_FUNC_IMPL(__imp__sub_82F65274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65278"))) PPC_WEAK_FUNC(sub_82F65278);
PPC_FUNC_IMPL(__imp__sub_82F65278) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27600
	ctx.r7.s64 = ctx.r10.s64 + 27600;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,22068
	ctx.r3.s64 = ctx.r8.s64 + 22068;
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

__attribute__((alias("__imp__sub_82F652E4"))) PPC_WEAK_FUNC(sub_82F652E4);
PPC_FUNC_IMPL(__imp__sub_82F652E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F652E8"))) PPC_WEAK_FUNC(sub_82F652E8);
PPC_FUNC_IMPL(__imp__sub_82F652E8) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,25556
	ctx.r5.s64 = ctx.r10.s64 + 25556;
	// addi r4,r9,27648
	ctx.r4.s64 = ctx.r9.s64 + 27648;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,21924
	ctx.r5.s64 = ctx.r8.s64 + 21924;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-1036
	ctx.r4.s64 = ctx.r7.s64 + -1036;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,22116
	ctx.r3.s64 = ctx.r6.s64 + 22116;
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

__attribute__((alias("__imp__sub_82F65360"))) PPC_WEAK_FUNC(sub_82F65360);
PPC_FUNC_IMPL(__imp__sub_82F65360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65364"))) PPC_WEAK_FUNC(sub_82F65364);
PPC_FUNC_IMPL(__imp__sub_82F65364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65368"))) PPC_WEAK_FUNC(sub_82F65368);
PPC_FUNC_IMPL(__imp__sub_82F65368) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27720
	ctx.r7.s64 = ctx.r10.s64 + 27720;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,22164
	ctx.r3.s64 = ctx.r8.s64 + 22164;
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

__attribute__((alias("__imp__sub_82F653D4"))) PPC_WEAK_FUNC(sub_82F653D4);
PPC_FUNC_IMPL(__imp__sub_82F653D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F653D8"))) PPC_WEAK_FUNC(sub_82F653D8);
PPC_FUNC_IMPL(__imp__sub_82F653D8) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,25572
	ctx.r5.s64 = ctx.r10.s64 + 25572;
	// addi r4,r9,27768
	ctx.r4.s64 = ctx.r9.s64 + 27768;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,21924
	ctx.r5.s64 = ctx.r8.s64 + 21924;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-968
	ctx.r4.s64 = ctx.r7.s64 + -968;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,22212
	ctx.r3.s64 = ctx.r6.s64 + 22212;
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

__attribute__((alias("__imp__sub_82F65450"))) PPC_WEAK_FUNC(sub_82F65450);
PPC_FUNC_IMPL(__imp__sub_82F65450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65454"))) PPC_WEAK_FUNC(sub_82F65454);
PPC_FUNC_IMPL(__imp__sub_82F65454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65458"))) PPC_WEAK_FUNC(sub_82F65458);
PPC_FUNC_IMPL(__imp__sub_82F65458) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27840
	ctx.r7.s64 = ctx.r10.s64 + 27840;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,22260
	ctx.r3.s64 = ctx.r8.s64 + 22260;
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

__attribute__((alias("__imp__sub_82F654C4"))) PPC_WEAK_FUNC(sub_82F654C4);
PPC_FUNC_IMPL(__imp__sub_82F654C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F654C8"))) PPC_WEAK_FUNC(sub_82F654C8);
PPC_FUNC_IMPL(__imp__sub_82F654C8) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,25588
	ctx.r5.s64 = ctx.r10.s64 + 25588;
	// addi r4,r9,27888
	ctx.r4.s64 = ctx.r9.s64 + 27888;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,21924
	ctx.r5.s64 = ctx.r8.s64 + 21924;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r7,-900
	ctx.r4.s64 = ctx.r7.s64 + -900;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,22308
	ctx.r3.s64 = ctx.r6.s64 + 22308;
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

__attribute__((alias("__imp__sub_82F65540"))) PPC_WEAK_FUNC(sub_82F65540);
PPC_FUNC_IMPL(__imp__sub_82F65540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65544"))) PPC_WEAK_FUNC(sub_82F65544);
PPC_FUNC_IMPL(__imp__sub_82F65544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65548"))) PPC_WEAK_FUNC(sub_82F65548);
PPC_FUNC_IMPL(__imp__sub_82F65548) {
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
	// addi r4,r9,-872
	ctx.r4.s64 = ctx.r9.s64 + -872;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r8,22356
	ctx.r3.s64 = ctx.r8.s64 + 22356;
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

__attribute__((alias("__imp__sub_82F655AC"))) PPC_WEAK_FUNC(sub_82F655AC);
PPC_FUNC_IMPL(__imp__sub_82F655AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F655B0"))) PPC_WEAK_FUNC(sub_82F655B0);
PPC_FUNC_IMPL(__imp__sub_82F655B0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,27968
	ctx.r7.s64 = ctx.r10.s64 + 27968;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,22404
	ctx.r3.s64 = ctx.r8.s64 + 22404;
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

__attribute__((alias("__imp__sub_82F6561C"))) PPC_WEAK_FUNC(sub_82F6561C);
PPC_FUNC_IMPL(__imp__sub_82F6561C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65620"))) PPC_WEAK_FUNC(sub_82F65620);
PPC_FUNC_IMPL(__imp__sub_82F65620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,18752
	ctx.r9.s64 = ctx.r10.s64 + 18752;
	// lwz r11,28064(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28064);
	// stw r11,224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 224, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65638"))) PPC_WEAK_FUNC(sub_82F65638);
PPC_FUNC_IMPL(__imp__sub_82F65638) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,18752
	ctx.r6.s64 = ctx.r10.s64 + 18752;
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
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,-824
	ctx.r4.s64 = ctx.r8.s64 + -824;
	// addi r3,r7,22452
	ctx.r3.s64 = ctx.r7.s64 + 22452;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,10
	r31.s64 = 10;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,25840
	ctx.r9.s64 = ctx.r9.s64 + 25840;
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

__attribute__((alias("__imp__sub_82F656B4"))) PPC_WEAK_FUNC(sub_82F656B4);
PPC_FUNC_IMPL(__imp__sub_82F656B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F656B8"))) PPC_WEAK_FUNC(sub_82F656B8);
PPC_FUNC_IMPL(__imp__sub_82F656B8) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,28072
	ctx.r7.s64 = ctx.r10.s64 + 28072;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,22500
	ctx.r3.s64 = ctx.r8.s64 + 22500;
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

__attribute__((alias("__imp__sub_82F65724"))) PPC_WEAK_FUNC(sub_82F65724);
PPC_FUNC_IMPL(__imp__sub_82F65724) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65728"))) PPC_WEAK_FUNC(sub_82F65728);
PPC_FUNC_IMPL(__imp__sub_82F65728) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r7,r10,28192
	ctx.r7.s64 = ctx.r10.s64 + 28192;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r4,r9,-20912
	ctx.r4.s64 = ctx.r9.s64 + -20912;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r3,r8,22548
	ctx.r3.s64 = ctx.r8.s64 + 22548;
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

__attribute__((alias("__imp__sub_82F65798"))) PPC_WEAK_FUNC(sub_82F65798);
PPC_FUNC_IMPL(__imp__sub_82F65798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6579C"))) PPC_WEAK_FUNC(sub_82F6579C);
PPC_FUNC_IMPL(__imp__sub_82F6579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F657A0"))) PPC_WEAK_FUNC(sub_82F657A0);
PPC_FUNC_IMPL(__imp__sub_82F657A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,28312
	ctx.r6.s64 = ctx.r10.s64 + 28312;
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
	// addi r4,r8,-792
	ctx.r4.s64 = ctx.r8.s64 + -792;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,22596
	ctx.r3.s64 = ctx.r7.s64 + 22596;
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

__attribute__((alias("__imp__sub_82F65818"))) PPC_WEAK_FUNC(sub_82F65818);
PPC_FUNC_IMPL(__imp__sub_82F65818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6581C"))) PPC_WEAK_FUNC(sub_82F6581C);
PPC_FUNC_IMPL(__imp__sub_82F6581C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65820"))) PPC_WEAK_FUNC(sub_82F65820);
PPC_FUNC_IMPL(__imp__sub_82F65820) {
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
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r5,r10,25880
	ctx.r5.s64 = ctx.r10.s64 + 25880;
	// addi r4,r9,28336
	ctx.r4.s64 = ctx.r9.s64 + 28336;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,21636
	ctx.r5.s64 = ctx.r8.s64 + 21636;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-756
	ctx.r4.s64 = ctx.r7.s64 + -756;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,22644
	ctx.r3.s64 = ctx.r6.s64 + 22644;
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

__attribute__((alias("__imp__sub_82F6589C"))) PPC_WEAK_FUNC(sub_82F6589C);
PPC_FUNC_IMPL(__imp__sub_82F6589C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F658A0"))) PPC_WEAK_FUNC(sub_82F658A0);
PPC_FUNC_IMPL(__imp__sub_82F658A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,28552
	ctx.r7.s64 = ctx.r10.s64 + 28552;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,22692
	ctx.r3.s64 = ctx.r8.s64 + 22692;
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

__attribute__((alias("__imp__sub_82F6590C"))) PPC_WEAK_FUNC(sub_82F6590C);
PPC_FUNC_IMPL(__imp__sub_82F6590C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65910"))) PPC_WEAK_FUNC(sub_82F65910);
PPC_FUNC_IMPL(__imp__sub_82F65910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r8,r9,18992
	ctx.r8.s64 = ctx.r9.s64 + 18992;
	// lwz r11,27960(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 27960);
	// lwz r10,27964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27964);
	// stw r11,248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 248, r11.u32);
	// stw r10,320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 320, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65934"))) PPC_WEAK_FUNC(sub_82F65934);
PPC_FUNC_IMPL(__imp__sub_82F65934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65938"))) PPC_WEAK_FUNC(sub_82F65938);
PPC_FUNC_IMPL(__imp__sub_82F65938) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,25660
	ctx.r9.s64 = r11.s64 + 25660;
	// addi r4,r10,18992
	ctx.r4.s64 = ctx.r10.s64 + 18992;
	// addi r5,r9,268
	ctx.r5.s64 = ctx.r9.s64 + 268;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,30
	ctx.r10.s64 = 30;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,17796
	ctx.r5.s64 = ctx.r8.s64 + 17796;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-380
	ctx.r4.s64 = ctx.r7.s64 + -380;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r6,22740
	ctx.r3.s64 = ctx.r6.s64 + 22740;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
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

__attribute__((alias("__imp__sub_82F659B4"))) PPC_WEAK_FUNC(sub_82F659B4);
PPC_FUNC_IMPL(__imp__sub_82F659B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F659B8"))) PPC_WEAK_FUNC(sub_82F659B8);
PPC_FUNC_IMPL(__imp__sub_82F659B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r8,r9,19712
	ctx.r8.s64 = ctx.r9.s64 + 19712;
	// lwz r11,28600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28600);
	// lwz r10,28604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28604);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F659DC"))) PPC_WEAK_FUNC(sub_82F659DC);
PPC_FUNC_IMPL(__imp__sub_82F659DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F659E0"))) PPC_WEAK_FUNC(sub_82F659E0);
PPC_FUNC_IMPL(__imp__sub_82F659E0) {
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
	// addi r5,r10,19712
	ctx.r5.s64 = ctx.r10.s64 + 19712;
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
	// addi r5,r8,17796
	ctx.r5.s64 = ctx.r8.s64 + 17796;
	// addi r4,r7,-364
	ctx.r4.s64 = ctx.r7.s64 + -364;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,22788
	ctx.r3.s64 = ctx.r6.s64 + 22788;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,26120
	ctx.r9.s64 = ctx.r9.s64 + 26120;
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

__attribute__((alias("__imp__sub_82F65A5C"))) PPC_WEAK_FUNC(sub_82F65A5C);
PPC_FUNC_IMPL(__imp__sub_82F65A5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65A60"))) PPC_WEAK_FUNC(sub_82F65A60);
PPC_FUNC_IMPL(__imp__sub_82F65A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lwz r11,28608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28608);
	// addi r7,r8,19760
	ctx.r7.s64 = ctx.r8.s64 + 19760;
	// lwz r10,28612(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28612);
	// lwz r9,29032(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29032);
	// stw r11,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, r11.u32);
	// stw r10,80(r7)
	PPC_STORE_U32(ctx.r7.u32 + 80, ctx.r10.u32);
	// stw r9,104(r7)
	PPC_STORE_U32(ctx.r7.u32 + 104, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65A90"))) PPC_WEAK_FUNC(sub_82F65A90);
PPC_FUNC_IMPL(__imp__sub_82F65A90) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,26208
	ctx.r9.s64 = r11.s64 + 26208;
	// addi r4,r10,19760
	ctx.r4.s64 = ctx.r10.s64 + 19760;
	// addi r5,r9,40
	ctx.r5.s64 = ctx.r9.s64 + 40;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r8,22788
	ctx.r5.s64 = ctx.r8.s64 + 22788;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r7,-288
	ctx.r4.s64 = ctx.r7.s64 + -288;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,22836
	ctx.r3.s64 = ctx.r6.s64 + 22836;
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

__attribute__((alias("__imp__sub_82F65B08"))) PPC_WEAK_FUNC(sub_82F65B08);
PPC_FUNC_IMPL(__imp__sub_82F65B08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65B0C"))) PPC_WEAK_FUNC(sub_82F65B0C);
PPC_FUNC_IMPL(__imp__sub_82F65B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65B10"))) PPC_WEAK_FUNC(sub_82F65B10);
PPC_FUNC_IMPL(__imp__sub_82F65B10) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,28616
	ctx.r6.s64 = ctx.r10.s64 + 28616;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,22836
	ctx.r5.s64 = ctx.r9.s64 + 22836;
	// addi r4,r8,-260
	ctx.r4.s64 = ctx.r8.s64 + -260;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,22884
	ctx.r3.s64 = ctx.r7.s64 + 22884;
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

__attribute__((alias("__imp__sub_82F65B88"))) PPC_WEAK_FUNC(sub_82F65B88);
PPC_FUNC_IMPL(__imp__sub_82F65B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65B8C"))) PPC_WEAK_FUNC(sub_82F65B8C);
PPC_FUNC_IMPL(__imp__sub_82F65B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65B90"))) PPC_WEAK_FUNC(sub_82F65B90);
PPC_FUNC_IMPL(__imp__sub_82F65B90) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// addi r5,r10,28768
	ctx.r5.s64 = ctx.r10.s64 + 28768;
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
	// addi r5,r8,22788
	ctx.r5.s64 = ctx.r8.s64 + 22788;
	// addi r4,r7,-224
	ctx.r4.s64 = ctx.r7.s64 + -224;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r6,22932
	ctx.r3.s64 = ctx.r6.s64 + 22932;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,11
	r31.s64 = 11;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,26348
	ctx.r9.s64 = ctx.r9.s64 + 26348;
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

__attribute__((alias("__imp__sub_82F65C0C"))) PPC_WEAK_FUNC(sub_82F65C0C);
PPC_FUNC_IMPL(__imp__sub_82F65C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65C10"))) PPC_WEAK_FUNC(sub_82F65C10);
PPC_FUNC_IMPL(__imp__sub_82F65C10) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,26420
	ctx.r9.s64 = ctx.r10.s64 + 26420;
	// addi r4,r8,-192
	ctx.r4.s64 = ctx.r8.s64 + -192;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,22980
	ctx.r3.s64 = ctx.r7.s64 + 22980;
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

__attribute__((alias("__imp__sub_82F65C74"))) PPC_WEAK_FUNC(sub_82F65C74);
PPC_FUNC_IMPL(__imp__sub_82F65C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65C78"))) PPC_WEAK_FUNC(sub_82F65C78);
PPC_FUNC_IMPL(__imp__sub_82F65C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r8,r9,20000
	ctx.r8.s64 = ctx.r9.s64 + 20000;
	// lwz r11,29036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29036);
	// lwz r10,29040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29040);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, r11.u32);
	// stw r10,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65C9C"))) PPC_WEAK_FUNC(sub_82F65C9C);
PPC_FUNC_IMPL(__imp__sub_82F65C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65CA0"))) PPC_WEAK_FUNC(sub_82F65CA0);
PPC_FUNC_IMPL(__imp__sub_82F65CA0) {
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
	// addi r6,r10,20000
	ctx.r6.s64 = ctx.r10.s64 + 20000;
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
	// addi r4,r8,-172
	ctx.r4.s64 = ctx.r8.s64 + -172;
	// addi r3,r7,23028
	ctx.r3.s64 = ctx.r7.s64 + 23028;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r9,r9,26816
	ctx.r9.s64 = ctx.r9.s64 + 26816;
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

__attribute__((alias("__imp__sub_82F65D10"))) PPC_WEAK_FUNC(sub_82F65D10);
PPC_FUNC_IMPL(__imp__sub_82F65D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65D14"))) PPC_WEAK_FUNC(sub_82F65D14);
PPC_FUNC_IMPL(__imp__sub_82F65D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65D18"))) PPC_WEAK_FUNC(sub_82F65D18);
PPC_FUNC_IMPL(__imp__sub_82F65D18) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,29048
	ctx.r6.s64 = ctx.r10.s64 + 29048;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,-140
	ctx.r4.s64 = ctx.r8.s64 + -140;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,23076
	ctx.r3.s64 = ctx.r7.s64 + 23076;
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

__attribute__((alias("__imp__sub_82F65D94"))) PPC_WEAK_FUNC(sub_82F65D94);
PPC_FUNC_IMPL(__imp__sub_82F65D94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65D98"))) PPC_WEAK_FUNC(sub_82F65D98);
PPC_FUNC_IMPL(__imp__sub_82F65D98) {
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
	// addi r4,r10,-112
	ctx.r4.s64 = ctx.r10.s64 + -112;
	// addi r3,r9,23124
	ctx.r3.s64 = ctx.r9.s64 + 23124;
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

__attribute__((alias("__imp__sub_82F65DF8"))) PPC_WEAK_FUNC(sub_82F65DF8);
PPC_FUNC_IMPL(__imp__sub_82F65DF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65DFC"))) PPC_WEAK_FUNC(sub_82F65DFC);
PPC_FUNC_IMPL(__imp__sub_82F65DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65E00"))) PPC_WEAK_FUNC(sub_82F65E00);
PPC_FUNC_IMPL(__imp__sub_82F65E00) {
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
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// addi r6,r10,26856
	ctx.r6.s64 = ctx.r10.s64 + 26856;
	// addi r5,r9,29120
	ctx.r5.s64 = ctx.r9.s64 + 29120;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-88
	ctx.r4.s64 = ctx.r8.s64 + -88;
	// addi r3,r7,23172
	ctx.r3.s64 = ctx.r7.s64 + 23172;
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

__attribute__((alias("__imp__sub_82F65E7C"))) PPC_WEAK_FUNC(sub_82F65E7C);
PPC_FUNC_IMPL(__imp__sub_82F65E7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65E80"))) PPC_WEAK_FUNC(sub_82F65E80);
PPC_FUNC_IMPL(__imp__sub_82F65E80) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,29216
	ctx.r7.s64 = ctx.r10.s64 + 29216;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r9,-76
	ctx.r4.s64 = ctx.r9.s64 + -76;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r8,23220
	ctx.r3.s64 = ctx.r8.s64 + 23220;
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

__attribute__((alias("__imp__sub_82F65EEC"))) PPC_WEAK_FUNC(sub_82F65EEC);
PPC_FUNC_IMPL(__imp__sub_82F65EEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65EF0"))) PPC_WEAK_FUNC(sub_82F65EF0);
PPC_FUNC_IMPL(__imp__sub_82F65EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,20072
	ctx.r9.s64 = ctx.r10.s64 + 20072;
	// lwz r11,29044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29044);
	// stw r11,152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 152, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65F08"))) PPC_WEAK_FUNC(sub_82F65F08);
PPC_FUNC_IMPL(__imp__sub_82F65F08) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r11,26908
	ctx.r9.s64 = r11.s64 + 26908;
	// addi r5,r10,20072
	ctx.r5.s64 = ctx.r10.s64 + 20072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r9,40
	ctx.r6.s64 = ctx.r9.s64 + 40;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r8,-48
	ctx.r4.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r7,23268
	ctx.r3.s64 = ctx.r7.s64 + 23268;
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

__attribute__((alias("__imp__sub_82F65F80"))) PPC_WEAK_FUNC(sub_82F65F80);
PPC_FUNC_IMPL(__imp__sub_82F65F80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F65F84"))) PPC_WEAK_FUNC(sub_82F65F84);
PPC_FUNC_IMPL(__imp__sub_82F65F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F65F88"))) PPC_WEAK_FUNC(sub_82F65F88);
PPC_FUNC_IMPL(__imp__sub_82F65F88) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r8,-31959
	ctx.r8.s64 = -2094465024;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r9,26988
	ctx.r10.s64 = ctx.r9.s64 + 26988;
	// addi r9,r8,29268
	ctx.r9.s64 = ctx.r8.s64 + 29268;
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r3,-31931
	ctx.r3.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r7,31332
	ctx.r5.s64 = ctx.r7.s64 + 31332;
	// addi r4,r6,-16
	ctx.r4.s64 = ctx.r6.s64 + -16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r3,23316
	ctx.r3.s64 = ctx.r3.s64 + 23316;
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

__attribute__((alias("__imp__sub_82F66000"))) PPC_WEAK_FUNC(sub_82F66000);
PPC_FUNC_IMPL(__imp__sub_82F66000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F66004"))) PPC_WEAK_FUNC(sub_82F66004);
PPC_FUNC_IMPL(__imp__sub_82F66004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F66008"))) PPC_WEAK_FUNC(sub_82F66008);
PPC_FUNC_IMPL(__imp__sub_82F66008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r9,r10,20288
	ctx.r9.s64 = ctx.r10.s64 + 20288;
	// lwz r11,29316(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 29316);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F66020"))) PPC_WEAK_FUNC(sub_82F66020);
PPC_FUNC_IMPL(__imp__sub_82F66020) {
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
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// addi r6,r10,20288
	ctx.r6.s64 = ctx.r10.s64 + 20288;
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
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// addi r3,r7,23364
	ctx.r3.s64 = ctx.r7.s64 + 23364;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r31,2
	r31.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r9,r9,27080
	ctx.r9.s64 = ctx.r9.s64 + 27080;
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

__attribute__((alias("__imp__sub_82F6609C"))) PPC_WEAK_FUNC(sub_82F6609C);
PPC_FUNC_IMPL(__imp__sub_82F6609C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F660A0"))) PPC_WEAK_FUNC(sub_82F660A0);
PPC_FUNC_IMPL(__imp__sub_82F660A0) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,29320
	ctx.r7.s64 = ctx.r10.s64 + 29320;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,23412
	ctx.r3.s64 = ctx.r8.s64 + 23412;
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

__attribute__((alias("__imp__sub_82F6610C"))) PPC_WEAK_FUNC(sub_82F6610C);
PPC_FUNC_IMPL(__imp__sub_82F6610C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F66110"))) PPC_WEAK_FUNC(sub_82F66110);
PPC_FUNC_IMPL(__imp__sub_82F66110) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// addi r6,r10,29344
	ctx.r6.s64 = ctx.r10.s64 + 29344;
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
	// addi r4,r8,44
	ctx.r4.s64 = ctx.r8.s64 + 44;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r3,r7,23460
	ctx.r3.s64 = ctx.r7.s64 + 23460;
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

__attribute__((alias("__imp__sub_82F66188"))) PPC_WEAK_FUNC(sub_82F66188);
PPC_FUNC_IMPL(__imp__sub_82F66188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F6618C"))) PPC_WEAK_FUNC(sub_82F6618C);
PPC_FUNC_IMPL(__imp__sub_82F6618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F66190"))) PPC_WEAK_FUNC(sub_82F66190);
PPC_FUNC_IMPL(__imp__sub_82F66190) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,29416
	ctx.r6.s64 = ctx.r10.s64 + 29416;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,16788
	ctx.r5.s64 = ctx.r9.s64 + 16788;
	// addi r4,r8,64
	ctx.r4.s64 = ctx.r8.s64 + 64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,23508
	ctx.r3.s64 = ctx.r7.s64 + 23508;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r31,10
	r31.s64 = 10;
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

__attribute__((alias("__imp__sub_82F6620C"))) PPC_WEAK_FUNC(sub_82F6620C);
PPC_FUNC_IMPL(__imp__sub_82F6620C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F66210"))) PPC_WEAK_FUNC(sub_82F66210);
PPC_FUNC_IMPL(__imp__sub_82F66210) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r10,29656
	ctx.r6.s64 = ctx.r10.s64 + 29656;
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r7,-31931
	ctx.r7.s64 = -2092630016;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r9,31332
	ctx.r5.s64 = ctx.r9.s64 + 31332;
	// addi r4,r8,84
	ctx.r4.s64 = ctx.r8.s64 + 84;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r3,r7,23556
	ctx.r3.s64 = ctx.r7.s64 + 23556;
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

__attribute__((alias("__imp__sub_82F6628C"))) PPC_WEAK_FUNC(sub_82F6628C);
PPC_FUNC_IMPL(__imp__sub_82F6628C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F66290"))) PPC_WEAK_FUNC(sub_82F66290);
PPC_FUNC_IMPL(__imp__sub_82F66290) {
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
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r7,r10,29776
	ctx.r7.s64 = ctx.r10.s64 + 29776;
	// lis r8,-31931
	ctx.r8.s64 = -2092630016;
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
	// addi r3,r8,23604
	ctx.r3.s64 = ctx.r8.s64 + 23604;
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

__attribute__((alias("__imp__sub_82F662FC"))) PPC_WEAK_FUNC(sub_82F662FC);
PPC_FUNC_IMPL(__imp__sub_82F662FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

