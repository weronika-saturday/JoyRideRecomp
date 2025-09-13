#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F3ADB0"))) PPC_WEAK_FUNC(sub_82F3ADB0);
PPC_FUNC_IMPL(__imp__sub_82F3ADB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22304
	ctx.r3.s64 = r11.s64 + -22304;
}

__attribute__((alias("__imp__sub_82F3ADB8"))) PPC_WEAK_FUNC(sub_82F3ADB8);
PPC_FUNC_IMPL(__imp__sub_82F3ADB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ADBC"))) PPC_WEAK_FUNC(sub_82F3ADBC);
PPC_FUNC_IMPL(__imp__sub_82F3ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ADC0"))) PPC_WEAK_FUNC(sub_82F3ADC0);
PPC_FUNC_IMPL(__imp__sub_82F3ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22296
	ctx.r3.s64 = r11.s64 + -22296;
}

__attribute__((alias("__imp__sub_82F3ADC8"))) PPC_WEAK_FUNC(sub_82F3ADC8);
PPC_FUNC_IMPL(__imp__sub_82F3ADC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ADCC"))) PPC_WEAK_FUNC(sub_82F3ADCC);
PPC_FUNC_IMPL(__imp__sub_82F3ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ADD0"))) PPC_WEAK_FUNC(sub_82F3ADD0);
PPC_FUNC_IMPL(__imp__sub_82F3ADD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22288
	ctx.r3.s64 = r11.s64 + -22288;
}

__attribute__((alias("__imp__sub_82F3ADD8"))) PPC_WEAK_FUNC(sub_82F3ADD8);
PPC_FUNC_IMPL(__imp__sub_82F3ADD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ADDC"))) PPC_WEAK_FUNC(sub_82F3ADDC);
PPC_FUNC_IMPL(__imp__sub_82F3ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ADE0"))) PPC_WEAK_FUNC(sub_82F3ADE0);
PPC_FUNC_IMPL(__imp__sub_82F3ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22280
	ctx.r3.s64 = r11.s64 + -22280;
}

__attribute__((alias("__imp__sub_82F3ADE8"))) PPC_WEAK_FUNC(sub_82F3ADE8);
PPC_FUNC_IMPL(__imp__sub_82F3ADE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3ADEC"))) PPC_WEAK_FUNC(sub_82F3ADEC);
PPC_FUNC_IMPL(__imp__sub_82F3ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3ADF0"))) PPC_WEAK_FUNC(sub_82F3ADF0);
PPC_FUNC_IMPL(__imp__sub_82F3ADF0) {
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
	// stw r11,-25768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25768, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AE18"))) PPC_WEAK_FUNC(sub_82F3AE18);
PPC_FUNC_IMPL(__imp__sub_82F3AE18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AE1C"))) PPC_WEAK_FUNC(sub_82F3AE1C);
PPC_FUNC_IMPL(__imp__sub_82F3AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AE20"))) PPC_WEAK_FUNC(sub_82F3AE20);
PPC_FUNC_IMPL(__imp__sub_82F3AE20) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18056
	ctx.r3.s64 = ctx.r10.s64 + -18056;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25672(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AE54"))) PPC_WEAK_FUNC(sub_82F3AE54);
PPC_FUNC_IMPL(__imp__sub_82F3AE54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AE58"))) PPC_WEAK_FUNC(sub_82F3AE58);
PPC_FUNC_IMPL(__imp__sub_82F3AE58) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-18012
	ctx.r3.s64 = ctx.r10.s64 + -18012;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25676(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AE8C"))) PPC_WEAK_FUNC(sub_82F3AE8C);
PPC_FUNC_IMPL(__imp__sub_82F3AE8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AE90"))) PPC_WEAK_FUNC(sub_82F3AE90);
PPC_FUNC_IMPL(__imp__sub_82F3AE90) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17968
	ctx.r3.s64 = ctx.r10.s64 + -17968;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25680(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25680, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AEC4"))) PPC_WEAK_FUNC(sub_82F3AEC4);
PPC_FUNC_IMPL(__imp__sub_82F3AEC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AEC8"))) PPC_WEAK_FUNC(sub_82F3AEC8);
PPC_FUNC_IMPL(__imp__sub_82F3AEC8) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17924
	ctx.r3.s64 = ctx.r10.s64 + -17924;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25684(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25684, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AEFC"))) PPC_WEAK_FUNC(sub_82F3AEFC);
PPC_FUNC_IMPL(__imp__sub_82F3AEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AF00"))) PPC_WEAK_FUNC(sub_82F3AF00);
PPC_FUNC_IMPL(__imp__sub_82F3AF00) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17880
	ctx.r3.s64 = ctx.r10.s64 + -17880;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25688(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25688, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AF34"))) PPC_WEAK_FUNC(sub_82F3AF34);
PPC_FUNC_IMPL(__imp__sub_82F3AF34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AF38"))) PPC_WEAK_FUNC(sub_82F3AF38);
PPC_FUNC_IMPL(__imp__sub_82F3AF38) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17832
	ctx.r3.s64 = ctx.r10.s64 + -17832;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25692(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25692, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AF6C"))) PPC_WEAK_FUNC(sub_82F3AF6C);
PPC_FUNC_IMPL(__imp__sub_82F3AF6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AF70"))) PPC_WEAK_FUNC(sub_82F3AF70);
PPC_FUNC_IMPL(__imp__sub_82F3AF70) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17788
	ctx.r3.s64 = ctx.r10.s64 + -17788;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25696(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25696, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AFA4"))) PPC_WEAK_FUNC(sub_82F3AFA4);
PPC_FUNC_IMPL(__imp__sub_82F3AFA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AFA8"))) PPC_WEAK_FUNC(sub_82F3AFA8);
PPC_FUNC_IMPL(__imp__sub_82F3AFA8) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17624
	ctx.r3.s64 = ctx.r10.s64 + -17624;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25700(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25700, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3AFE0"))) PPC_WEAK_FUNC(sub_82F3AFE0);
PPC_FUNC_IMPL(__imp__sub_82F3AFE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3AFE4"))) PPC_WEAK_FUNC(sub_82F3AFE4);
PPC_FUNC_IMPL(__imp__sub_82F3AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3AFE8"))) PPC_WEAK_FUNC(sub_82F3AFE8);
PPC_FUNC_IMPL(__imp__sub_82F3AFE8) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17580
	ctx.r3.s64 = ctx.r10.s64 + -17580;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25704(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B020"))) PPC_WEAK_FUNC(sub_82F3B020);
PPC_FUNC_IMPL(__imp__sub_82F3B020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B024"))) PPC_WEAK_FUNC(sub_82F3B024);
PPC_FUNC_IMPL(__imp__sub_82F3B024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B028"))) PPC_WEAK_FUNC(sub_82F3B028);
PPC_FUNC_IMPL(__imp__sub_82F3B028) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17532
	ctx.r3.s64 = ctx.r10.s64 + -17532;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25708(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25708, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B05C"))) PPC_WEAK_FUNC(sub_82F3B05C);
PPC_FUNC_IMPL(__imp__sub_82F3B05C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B060"))) PPC_WEAK_FUNC(sub_82F3B060);
PPC_FUNC_IMPL(__imp__sub_82F3B060) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17488
	ctx.r3.s64 = ctx.r10.s64 + -17488;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25712(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25712, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B094"))) PPC_WEAK_FUNC(sub_82F3B094);
PPC_FUNC_IMPL(__imp__sub_82F3B094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B098"))) PPC_WEAK_FUNC(sub_82F3B098);
PPC_FUNC_IMPL(__imp__sub_82F3B098) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17444
	ctx.r3.s64 = ctx.r10.s64 + -17444;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25716(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25716, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B0CC"))) PPC_WEAK_FUNC(sub_82F3B0CC);
PPC_FUNC_IMPL(__imp__sub_82F3B0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B0D0"))) PPC_WEAK_FUNC(sub_82F3B0D0);
PPC_FUNC_IMPL(__imp__sub_82F3B0D0) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17396
	ctx.r3.s64 = ctx.r10.s64 + -17396;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25720(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25720, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B104"))) PPC_WEAK_FUNC(sub_82F3B104);
PPC_FUNC_IMPL(__imp__sub_82F3B104) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B108"))) PPC_WEAK_FUNC(sub_82F3B108);
PPC_FUNC_IMPL(__imp__sub_82F3B108) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17352
	ctx.r3.s64 = ctx.r10.s64 + -17352;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25724(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B13C"))) PPC_WEAK_FUNC(sub_82F3B13C);
PPC_FUNC_IMPL(__imp__sub_82F3B13C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B140"))) PPC_WEAK_FUNC(sub_82F3B140);
PPC_FUNC_IMPL(__imp__sub_82F3B140) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17308
	ctx.r3.s64 = ctx.r10.s64 + -17308;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25728(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B174"))) PPC_WEAK_FUNC(sub_82F3B174);
PPC_FUNC_IMPL(__imp__sub_82F3B174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B178"))) PPC_WEAK_FUNC(sub_82F3B178);
PPC_FUNC_IMPL(__imp__sub_82F3B178) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17264
	ctx.r3.s64 = ctx.r10.s64 + -17264;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25732(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25732, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B1AC"))) PPC_WEAK_FUNC(sub_82F3B1AC);
PPC_FUNC_IMPL(__imp__sub_82F3B1AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B1B0"))) PPC_WEAK_FUNC(sub_82F3B1B0);
PPC_FUNC_IMPL(__imp__sub_82F3B1B0) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17216
	ctx.r3.s64 = ctx.r10.s64 + -17216;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25736(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B1E4"))) PPC_WEAK_FUNC(sub_82F3B1E4);
PPC_FUNC_IMPL(__imp__sub_82F3B1E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B1E8"))) PPC_WEAK_FUNC(sub_82F3B1E8);
PPC_FUNC_IMPL(__imp__sub_82F3B1E8) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17172
	ctx.r3.s64 = ctx.r10.s64 + -17172;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25740(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25740, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B21C"))) PPC_WEAK_FUNC(sub_82F3B21C);
PPC_FUNC_IMPL(__imp__sub_82F3B21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B220"))) PPC_WEAK_FUNC(sub_82F3B220);
PPC_FUNC_IMPL(__imp__sub_82F3B220) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17124
	ctx.r3.s64 = ctx.r10.s64 + -17124;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25744(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25744, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B254"))) PPC_WEAK_FUNC(sub_82F3B254);
PPC_FUNC_IMPL(__imp__sub_82F3B254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B258"))) PPC_WEAK_FUNC(sub_82F3B258);
PPC_FUNC_IMPL(__imp__sub_82F3B258) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17076
	ctx.r3.s64 = ctx.r10.s64 + -17076;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25748(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25748, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B28C"))) PPC_WEAK_FUNC(sub_82F3B28C);
PPC_FUNC_IMPL(__imp__sub_82F3B28C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B290"))) PPC_WEAK_FUNC(sub_82F3B290);
PPC_FUNC_IMPL(__imp__sub_82F3B290) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-17032
	ctx.r3.s64 = ctx.r10.s64 + -17032;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25752(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25752, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B2C4"))) PPC_WEAK_FUNC(sub_82F3B2C4);
PPC_FUNC_IMPL(__imp__sub_82F3B2C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B2C8"))) PPC_WEAK_FUNC(sub_82F3B2C8);
PPC_FUNC_IMPL(__imp__sub_82F3B2C8) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16984
	ctx.r3.s64 = ctx.r10.s64 + -16984;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25756(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25756, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B2FC"))) PPC_WEAK_FUNC(sub_82F3B2FC);
PPC_FUNC_IMPL(__imp__sub_82F3B2FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B300"))) PPC_WEAK_FUNC(sub_82F3B300);
PPC_FUNC_IMPL(__imp__sub_82F3B300) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16940
	ctx.r3.s64 = ctx.r10.s64 + -16940;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25760(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25760, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B334"))) PPC_WEAK_FUNC(sub_82F3B334);
PPC_FUNC_IMPL(__imp__sub_82F3B334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B338"))) PPC_WEAK_FUNC(sub_82F3B338);
PPC_FUNC_IMPL(__imp__sub_82F3B338) {
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
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-16896
	ctx.r3.s64 = ctx.r10.s64 + -16896;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-25764(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B36C"))) PPC_WEAK_FUNC(sub_82F3B36C);
PPC_FUNC_IMPL(__imp__sub_82F3B36C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B370"))) PPC_WEAK_FUNC(sub_82F3B370);
PPC_FUNC_IMPL(__imp__sub_82F3B370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22272
	ctx.r3.s64 = r11.s64 + -22272;
}

__attribute__((alias("__imp__sub_82F3B378"))) PPC_WEAK_FUNC(sub_82F3B378);
PPC_FUNC_IMPL(__imp__sub_82F3B378) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B37C"))) PPC_WEAK_FUNC(sub_82F3B37C);
PPC_FUNC_IMPL(__imp__sub_82F3B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B380"))) PPC_WEAK_FUNC(sub_82F3B380);
PPC_FUNC_IMPL(__imp__sub_82F3B380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22264
	ctx.r3.s64 = r11.s64 + -22264;
}

__attribute__((alias("__imp__sub_82F3B388"))) PPC_WEAK_FUNC(sub_82F3B388);
PPC_FUNC_IMPL(__imp__sub_82F3B388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B38C"))) PPC_WEAK_FUNC(sub_82F3B38C);
PPC_FUNC_IMPL(__imp__sub_82F3B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B390"))) PPC_WEAK_FUNC(sub_82F3B390);
PPC_FUNC_IMPL(__imp__sub_82F3B390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22256
	ctx.r3.s64 = r11.s64 + -22256;
}

__attribute__((alias("__imp__sub_82F3B398"))) PPC_WEAK_FUNC(sub_82F3B398);
PPC_FUNC_IMPL(__imp__sub_82F3B398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B39C"))) PPC_WEAK_FUNC(sub_82F3B39C);
PPC_FUNC_IMPL(__imp__sub_82F3B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B3A0"))) PPC_WEAK_FUNC(sub_82F3B3A0);
PPC_FUNC_IMPL(__imp__sub_82F3B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22248
	ctx.r3.s64 = r11.s64 + -22248;
}

__attribute__((alias("__imp__sub_82F3B3A8"))) PPC_WEAK_FUNC(sub_82F3B3A8);
PPC_FUNC_IMPL(__imp__sub_82F3B3A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B3AC"))) PPC_WEAK_FUNC(sub_82F3B3AC);
PPC_FUNC_IMPL(__imp__sub_82F3B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B3B0"))) PPC_WEAK_FUNC(sub_82F3B3B0);
PPC_FUNC_IMPL(__imp__sub_82F3B3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22240
	ctx.r3.s64 = r11.s64 + -22240;
}

__attribute__((alias("__imp__sub_82F3B3B8"))) PPC_WEAK_FUNC(sub_82F3B3B8);
PPC_FUNC_IMPL(__imp__sub_82F3B3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B3BC"))) PPC_WEAK_FUNC(sub_82F3B3BC);
PPC_FUNC_IMPL(__imp__sub_82F3B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B3C0"))) PPC_WEAK_FUNC(sub_82F3B3C0);
PPC_FUNC_IMPL(__imp__sub_82F3B3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22232
	ctx.r3.s64 = r11.s64 + -22232;
}

__attribute__((alias("__imp__sub_82F3B3C8"))) PPC_WEAK_FUNC(sub_82F3B3C8);
PPC_FUNC_IMPL(__imp__sub_82F3B3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B3CC"))) PPC_WEAK_FUNC(sub_82F3B3CC);
PPC_FUNC_IMPL(__imp__sub_82F3B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B3D0"))) PPC_WEAK_FUNC(sub_82F3B3D0);
PPC_FUNC_IMPL(__imp__sub_82F3B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22224
	ctx.r3.s64 = r11.s64 + -22224;
}

__attribute__((alias("__imp__sub_82F3B3D8"))) PPC_WEAK_FUNC(sub_82F3B3D8);
PPC_FUNC_IMPL(__imp__sub_82F3B3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B3DC"))) PPC_WEAK_FUNC(sub_82F3B3DC);
PPC_FUNC_IMPL(__imp__sub_82F3B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B3E0"))) PPC_WEAK_FUNC(sub_82F3B3E0);
PPC_FUNC_IMPL(__imp__sub_82F3B3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22216
	ctx.r3.s64 = r11.s64 + -22216;
}

__attribute__((alias("__imp__sub_82F3B3E8"))) PPC_WEAK_FUNC(sub_82F3B3E8);
PPC_FUNC_IMPL(__imp__sub_82F3B3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B3EC"))) PPC_WEAK_FUNC(sub_82F3B3EC);
PPC_FUNC_IMPL(__imp__sub_82F3B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B3F0"))) PPC_WEAK_FUNC(sub_82F3B3F0);
PPC_FUNC_IMPL(__imp__sub_82F3B3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22208
	ctx.r3.s64 = r11.s64 + -22208;
}

__attribute__((alias("__imp__sub_82F3B3F8"))) PPC_WEAK_FUNC(sub_82F3B3F8);
PPC_FUNC_IMPL(__imp__sub_82F3B3F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B3FC"))) PPC_WEAK_FUNC(sub_82F3B3FC);
PPC_FUNC_IMPL(__imp__sub_82F3B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B400"))) PPC_WEAK_FUNC(sub_82F3B400);
PPC_FUNC_IMPL(__imp__sub_82F3B400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22200
	ctx.r3.s64 = r11.s64 + -22200;
}

__attribute__((alias("__imp__sub_82F3B408"))) PPC_WEAK_FUNC(sub_82F3B408);
PPC_FUNC_IMPL(__imp__sub_82F3B408) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B40C"))) PPC_WEAK_FUNC(sub_82F3B40C);
PPC_FUNC_IMPL(__imp__sub_82F3B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B410"))) PPC_WEAK_FUNC(sub_82F3B410);
PPC_FUNC_IMPL(__imp__sub_82F3B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22192
	ctx.r3.s64 = r11.s64 + -22192;
}

__attribute__((alias("__imp__sub_82F3B418"))) PPC_WEAK_FUNC(sub_82F3B418);
PPC_FUNC_IMPL(__imp__sub_82F3B418) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B41C"))) PPC_WEAK_FUNC(sub_82F3B41C);
PPC_FUNC_IMPL(__imp__sub_82F3B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B420"))) PPC_WEAK_FUNC(sub_82F3B420);
PPC_FUNC_IMPL(__imp__sub_82F3B420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22184
	ctx.r3.s64 = r11.s64 + -22184;
}

__attribute__((alias("__imp__sub_82F3B428"))) PPC_WEAK_FUNC(sub_82F3B428);
PPC_FUNC_IMPL(__imp__sub_82F3B428) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B42C"))) PPC_WEAK_FUNC(sub_82F3B42C);
PPC_FUNC_IMPL(__imp__sub_82F3B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B430"))) PPC_WEAK_FUNC(sub_82F3B430);
PPC_FUNC_IMPL(__imp__sub_82F3B430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22176
	ctx.r3.s64 = r11.s64 + -22176;
}

__attribute__((alias("__imp__sub_82F3B438"))) PPC_WEAK_FUNC(sub_82F3B438);
PPC_FUNC_IMPL(__imp__sub_82F3B438) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B43C"))) PPC_WEAK_FUNC(sub_82F3B43C);
PPC_FUNC_IMPL(__imp__sub_82F3B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B440"))) PPC_WEAK_FUNC(sub_82F3B440);
PPC_FUNC_IMPL(__imp__sub_82F3B440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22168
	ctx.r3.s64 = r11.s64 + -22168;
}

__attribute__((alias("__imp__sub_82F3B448"))) PPC_WEAK_FUNC(sub_82F3B448);
PPC_FUNC_IMPL(__imp__sub_82F3B448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B44C"))) PPC_WEAK_FUNC(sub_82F3B44C);
PPC_FUNC_IMPL(__imp__sub_82F3B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B450"))) PPC_WEAK_FUNC(sub_82F3B450);
PPC_FUNC_IMPL(__imp__sub_82F3B450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22160
	ctx.r3.s64 = r11.s64 + -22160;
}

__attribute__((alias("__imp__sub_82F3B458"))) PPC_WEAK_FUNC(sub_82F3B458);
PPC_FUNC_IMPL(__imp__sub_82F3B458) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B45C"))) PPC_WEAK_FUNC(sub_82F3B45C);
PPC_FUNC_IMPL(__imp__sub_82F3B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B460"))) PPC_WEAK_FUNC(sub_82F3B460);
PPC_FUNC_IMPL(__imp__sub_82F3B460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22152
	ctx.r3.s64 = r11.s64 + -22152;
}

__attribute__((alias("__imp__sub_82F3B468"))) PPC_WEAK_FUNC(sub_82F3B468);
PPC_FUNC_IMPL(__imp__sub_82F3B468) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B46C"))) PPC_WEAK_FUNC(sub_82F3B46C);
PPC_FUNC_IMPL(__imp__sub_82F3B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B470"))) PPC_WEAK_FUNC(sub_82F3B470);
PPC_FUNC_IMPL(__imp__sub_82F3B470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22144
	ctx.r3.s64 = r11.s64 + -22144;
}

__attribute__((alias("__imp__sub_82F3B478"))) PPC_WEAK_FUNC(sub_82F3B478);
PPC_FUNC_IMPL(__imp__sub_82F3B478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B47C"))) PPC_WEAK_FUNC(sub_82F3B47C);
PPC_FUNC_IMPL(__imp__sub_82F3B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B480"))) PPC_WEAK_FUNC(sub_82F3B480);
PPC_FUNC_IMPL(__imp__sub_82F3B480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22136
	ctx.r3.s64 = r11.s64 + -22136;
}

__attribute__((alias("__imp__sub_82F3B488"))) PPC_WEAK_FUNC(sub_82F3B488);
PPC_FUNC_IMPL(__imp__sub_82F3B488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B48C"))) PPC_WEAK_FUNC(sub_82F3B48C);
PPC_FUNC_IMPL(__imp__sub_82F3B48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B490"))) PPC_WEAK_FUNC(sub_82F3B490);
PPC_FUNC_IMPL(__imp__sub_82F3B490) {
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
	// stw r11,-25604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25604, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B4B8"))) PPC_WEAK_FUNC(sub_82F3B4B8);
PPC_FUNC_IMPL(__imp__sub_82F3B4B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B4BC"))) PPC_WEAK_FUNC(sub_82F3B4BC);
PPC_FUNC_IMPL(__imp__sub_82F3B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B4C0"))) PPC_WEAK_FUNC(sub_82F3B4C0);
PPC_FUNC_IMPL(__imp__sub_82F3B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22128
	ctx.r3.s64 = r11.s64 + -22128;
}

__attribute__((alias("__imp__sub_82F3B4C8"))) PPC_WEAK_FUNC(sub_82F3B4C8);
PPC_FUNC_IMPL(__imp__sub_82F3B4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B4CC"))) PPC_WEAK_FUNC(sub_82F3B4CC);
PPC_FUNC_IMPL(__imp__sub_82F3B4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B4D0"))) PPC_WEAK_FUNC(sub_82F3B4D0);
PPC_FUNC_IMPL(__imp__sub_82F3B4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22120
	ctx.r3.s64 = r11.s64 + -22120;
}

__attribute__((alias("__imp__sub_82F3B4D8"))) PPC_WEAK_FUNC(sub_82F3B4D8);
PPC_FUNC_IMPL(__imp__sub_82F3B4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B4DC"))) PPC_WEAK_FUNC(sub_82F3B4DC);
PPC_FUNC_IMPL(__imp__sub_82F3B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B4E0"))) PPC_WEAK_FUNC(sub_82F3B4E0);
PPC_FUNC_IMPL(__imp__sub_82F3B4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22112
	ctx.r3.s64 = r11.s64 + -22112;
}

__attribute__((alias("__imp__sub_82F3B4E8"))) PPC_WEAK_FUNC(sub_82F3B4E8);
PPC_FUNC_IMPL(__imp__sub_82F3B4E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B4EC"))) PPC_WEAK_FUNC(sub_82F3B4EC);
PPC_FUNC_IMPL(__imp__sub_82F3B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B4F0"))) PPC_WEAK_FUNC(sub_82F3B4F0);
PPC_FUNC_IMPL(__imp__sub_82F3B4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22104
	ctx.r3.s64 = r11.s64 + -22104;
}

__attribute__((alias("__imp__sub_82F3B4F8"))) PPC_WEAK_FUNC(sub_82F3B4F8);
PPC_FUNC_IMPL(__imp__sub_82F3B4F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B4FC"))) PPC_WEAK_FUNC(sub_82F3B4FC);
PPC_FUNC_IMPL(__imp__sub_82F3B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B500"))) PPC_WEAK_FUNC(sub_82F3B500);
PPC_FUNC_IMPL(__imp__sub_82F3B500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22096
	ctx.r3.s64 = r11.s64 + -22096;
}

__attribute__((alias("__imp__sub_82F3B508"))) PPC_WEAK_FUNC(sub_82F3B508);
PPC_FUNC_IMPL(__imp__sub_82F3B508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B50C"))) PPC_WEAK_FUNC(sub_82F3B50C);
PPC_FUNC_IMPL(__imp__sub_82F3B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B510"))) PPC_WEAK_FUNC(sub_82F3B510);
PPC_FUNC_IMPL(__imp__sub_82F3B510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22088
	ctx.r3.s64 = r11.s64 + -22088;
}

__attribute__((alias("__imp__sub_82F3B518"))) PPC_WEAK_FUNC(sub_82F3B518);
PPC_FUNC_IMPL(__imp__sub_82F3B518) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B51C"))) PPC_WEAK_FUNC(sub_82F3B51C);
PPC_FUNC_IMPL(__imp__sub_82F3B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B520"))) PPC_WEAK_FUNC(sub_82F3B520);
PPC_FUNC_IMPL(__imp__sub_82F3B520) {
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
	// stw r11,-25584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25584, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B548"))) PPC_WEAK_FUNC(sub_82F3B548);
PPC_FUNC_IMPL(__imp__sub_82F3B548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B54C"))) PPC_WEAK_FUNC(sub_82F3B54C);
PPC_FUNC_IMPL(__imp__sub_82F3B54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B550"))) PPC_WEAK_FUNC(sub_82F3B550);
PPC_FUNC_IMPL(__imp__sub_82F3B550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22080
	ctx.r3.s64 = r11.s64 + -22080;
}

__attribute__((alias("__imp__sub_82F3B558"))) PPC_WEAK_FUNC(sub_82F3B558);
PPC_FUNC_IMPL(__imp__sub_82F3B558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B55C"))) PPC_WEAK_FUNC(sub_82F3B55C);
PPC_FUNC_IMPL(__imp__sub_82F3B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B560"))) PPC_WEAK_FUNC(sub_82F3B560);
PPC_FUNC_IMPL(__imp__sub_82F3B560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22072
	ctx.r3.s64 = r11.s64 + -22072;
}

__attribute__((alias("__imp__sub_82F3B568"))) PPC_WEAK_FUNC(sub_82F3B568);
PPC_FUNC_IMPL(__imp__sub_82F3B568) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B56C"))) PPC_WEAK_FUNC(sub_82F3B56C);
PPC_FUNC_IMPL(__imp__sub_82F3B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B570"))) PPC_WEAK_FUNC(sub_82F3B570);
PPC_FUNC_IMPL(__imp__sub_82F3B570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22064
	ctx.r3.s64 = r11.s64 + -22064;
}

__attribute__((alias("__imp__sub_82F3B578"))) PPC_WEAK_FUNC(sub_82F3B578);
PPC_FUNC_IMPL(__imp__sub_82F3B578) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B57C"))) PPC_WEAK_FUNC(sub_82F3B57C);
PPC_FUNC_IMPL(__imp__sub_82F3B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B580"))) PPC_WEAK_FUNC(sub_82F3B580);
PPC_FUNC_IMPL(__imp__sub_82F3B580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22056
	ctx.r3.s64 = r11.s64 + -22056;
}

__attribute__((alias("__imp__sub_82F3B588"))) PPC_WEAK_FUNC(sub_82F3B588);
PPC_FUNC_IMPL(__imp__sub_82F3B588) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B58C"))) PPC_WEAK_FUNC(sub_82F3B58C);
PPC_FUNC_IMPL(__imp__sub_82F3B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B590"))) PPC_WEAK_FUNC(sub_82F3B590);
PPC_FUNC_IMPL(__imp__sub_82F3B590) {
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
	// stw r11,-25564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25564, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B5B8"))) PPC_WEAK_FUNC(sub_82F3B5B8);
PPC_FUNC_IMPL(__imp__sub_82F3B5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B5BC"))) PPC_WEAK_FUNC(sub_82F3B5BC);
PPC_FUNC_IMPL(__imp__sub_82F3B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B5C0"))) PPC_WEAK_FUNC(sub_82F3B5C0);
PPC_FUNC_IMPL(__imp__sub_82F3B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22048
	ctx.r3.s64 = r11.s64 + -22048;
}

__attribute__((alias("__imp__sub_82F3B5C8"))) PPC_WEAK_FUNC(sub_82F3B5C8);
PPC_FUNC_IMPL(__imp__sub_82F3B5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B5CC"))) PPC_WEAK_FUNC(sub_82F3B5CC);
PPC_FUNC_IMPL(__imp__sub_82F3B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B5D0"))) PPC_WEAK_FUNC(sub_82F3B5D0);
PPC_FUNC_IMPL(__imp__sub_82F3B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22040
	ctx.r3.s64 = r11.s64 + -22040;
}

__attribute__((alias("__imp__sub_82F3B5D8"))) PPC_WEAK_FUNC(sub_82F3B5D8);
PPC_FUNC_IMPL(__imp__sub_82F3B5D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B5DC"))) PPC_WEAK_FUNC(sub_82F3B5DC);
PPC_FUNC_IMPL(__imp__sub_82F3B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B5E0"))) PPC_WEAK_FUNC(sub_82F3B5E0);
PPC_FUNC_IMPL(__imp__sub_82F3B5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22032
	ctx.r3.s64 = r11.s64 + -22032;
}

__attribute__((alias("__imp__sub_82F3B5E8"))) PPC_WEAK_FUNC(sub_82F3B5E8);
PPC_FUNC_IMPL(__imp__sub_82F3B5E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B5EC"))) PPC_WEAK_FUNC(sub_82F3B5EC);
PPC_FUNC_IMPL(__imp__sub_82F3B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B5F0"))) PPC_WEAK_FUNC(sub_82F3B5F0);
PPC_FUNC_IMPL(__imp__sub_82F3B5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22024
	ctx.r3.s64 = r11.s64 + -22024;
}

__attribute__((alias("__imp__sub_82F3B5F8"))) PPC_WEAK_FUNC(sub_82F3B5F8);
PPC_FUNC_IMPL(__imp__sub_82F3B5F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B5FC"))) PPC_WEAK_FUNC(sub_82F3B5FC);
PPC_FUNC_IMPL(__imp__sub_82F3B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B600"))) PPC_WEAK_FUNC(sub_82F3B600);
PPC_FUNC_IMPL(__imp__sub_82F3B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22016
	ctx.r3.s64 = r11.s64 + -22016;
}

__attribute__((alias("__imp__sub_82F3B608"))) PPC_WEAK_FUNC(sub_82F3B608);
PPC_FUNC_IMPL(__imp__sub_82F3B608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B60C"))) PPC_WEAK_FUNC(sub_82F3B60C);
PPC_FUNC_IMPL(__imp__sub_82F3B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B610"))) PPC_WEAK_FUNC(sub_82F3B610);
PPC_FUNC_IMPL(__imp__sub_82F3B610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22008
	ctx.r3.s64 = r11.s64 + -22008;
}

__attribute__((alias("__imp__sub_82F3B618"))) PPC_WEAK_FUNC(sub_82F3B618);
PPC_FUNC_IMPL(__imp__sub_82F3B618) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B61C"))) PPC_WEAK_FUNC(sub_82F3B61C);
PPC_FUNC_IMPL(__imp__sub_82F3B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B620"))) PPC_WEAK_FUNC(sub_82F3B620);
PPC_FUNC_IMPL(__imp__sub_82F3B620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-22000
	ctx.r3.s64 = r11.s64 + -22000;
}

__attribute__((alias("__imp__sub_82F3B628"))) PPC_WEAK_FUNC(sub_82F3B628);
PPC_FUNC_IMPL(__imp__sub_82F3B628) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B62C"))) PPC_WEAK_FUNC(sub_82F3B62C);
PPC_FUNC_IMPL(__imp__sub_82F3B62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B630"))) PPC_WEAK_FUNC(sub_82F3B630);
PPC_FUNC_IMPL(__imp__sub_82F3B630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21992
	ctx.r3.s64 = r11.s64 + -21992;
}

__attribute__((alias("__imp__sub_82F3B638"))) PPC_WEAK_FUNC(sub_82F3B638);
PPC_FUNC_IMPL(__imp__sub_82F3B638) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B63C"))) PPC_WEAK_FUNC(sub_82F3B63C);
PPC_FUNC_IMPL(__imp__sub_82F3B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B640"))) PPC_WEAK_FUNC(sub_82F3B640);
PPC_FUNC_IMPL(__imp__sub_82F3B640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21984
	ctx.r3.s64 = r11.s64 + -21984;
}

__attribute__((alias("__imp__sub_82F3B648"))) PPC_WEAK_FUNC(sub_82F3B648);
PPC_FUNC_IMPL(__imp__sub_82F3B648) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B64C"))) PPC_WEAK_FUNC(sub_82F3B64C);
PPC_FUNC_IMPL(__imp__sub_82F3B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B650"))) PPC_WEAK_FUNC(sub_82F3B650);
PPC_FUNC_IMPL(__imp__sub_82F3B650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21976
	ctx.r3.s64 = r11.s64 + -21976;
}

__attribute__((alias("__imp__sub_82F3B658"))) PPC_WEAK_FUNC(sub_82F3B658);
PPC_FUNC_IMPL(__imp__sub_82F3B658) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B65C"))) PPC_WEAK_FUNC(sub_82F3B65C);
PPC_FUNC_IMPL(__imp__sub_82F3B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B660"))) PPC_WEAK_FUNC(sub_82F3B660);
PPC_FUNC_IMPL(__imp__sub_82F3B660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21968
	ctx.r3.s64 = r11.s64 + -21968;
}

__attribute__((alias("__imp__sub_82F3B668"))) PPC_WEAK_FUNC(sub_82F3B668);
PPC_FUNC_IMPL(__imp__sub_82F3B668) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B66C"))) PPC_WEAK_FUNC(sub_82F3B66C);
PPC_FUNC_IMPL(__imp__sub_82F3B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B670"))) PPC_WEAK_FUNC(sub_82F3B670);
PPC_FUNC_IMPL(__imp__sub_82F3B670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21960
	ctx.r3.s64 = r11.s64 + -21960;
}

__attribute__((alias("__imp__sub_82F3B678"))) PPC_WEAK_FUNC(sub_82F3B678);
PPC_FUNC_IMPL(__imp__sub_82F3B678) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B67C"))) PPC_WEAK_FUNC(sub_82F3B67C);
PPC_FUNC_IMPL(__imp__sub_82F3B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B680"))) PPC_WEAK_FUNC(sub_82F3B680);
PPC_FUNC_IMPL(__imp__sub_82F3B680) {
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
	// stw r11,-25512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25512, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B6A8"))) PPC_WEAK_FUNC(sub_82F3B6A8);
PPC_FUNC_IMPL(__imp__sub_82F3B6A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B6AC"))) PPC_WEAK_FUNC(sub_82F3B6AC);
PPC_FUNC_IMPL(__imp__sub_82F3B6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B6B0"))) PPC_WEAK_FUNC(sub_82F3B6B0);
PPC_FUNC_IMPL(__imp__sub_82F3B6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21952
	ctx.r3.s64 = r11.s64 + -21952;
}

__attribute__((alias("__imp__sub_82F3B6B8"))) PPC_WEAK_FUNC(sub_82F3B6B8);
PPC_FUNC_IMPL(__imp__sub_82F3B6B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B6BC"))) PPC_WEAK_FUNC(sub_82F3B6BC);
PPC_FUNC_IMPL(__imp__sub_82F3B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B6C0"))) PPC_WEAK_FUNC(sub_82F3B6C0);
PPC_FUNC_IMPL(__imp__sub_82F3B6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21944
	ctx.r3.s64 = r11.s64 + -21944;
}

__attribute__((alias("__imp__sub_82F3B6C8"))) PPC_WEAK_FUNC(sub_82F3B6C8);
PPC_FUNC_IMPL(__imp__sub_82F3B6C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B6CC"))) PPC_WEAK_FUNC(sub_82F3B6CC);
PPC_FUNC_IMPL(__imp__sub_82F3B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B6D0"))) PPC_WEAK_FUNC(sub_82F3B6D0);
PPC_FUNC_IMPL(__imp__sub_82F3B6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21936
	ctx.r3.s64 = r11.s64 + -21936;
}

__attribute__((alias("__imp__sub_82F3B6D8"))) PPC_WEAK_FUNC(sub_82F3B6D8);
PPC_FUNC_IMPL(__imp__sub_82F3B6D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B6DC"))) PPC_WEAK_FUNC(sub_82F3B6DC);
PPC_FUNC_IMPL(__imp__sub_82F3B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B6E0"))) PPC_WEAK_FUNC(sub_82F3B6E0);
PPC_FUNC_IMPL(__imp__sub_82F3B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21928
	ctx.r3.s64 = r11.s64 + -21928;
}

__attribute__((alias("__imp__sub_82F3B6E8"))) PPC_WEAK_FUNC(sub_82F3B6E8);
PPC_FUNC_IMPL(__imp__sub_82F3B6E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B6EC"))) PPC_WEAK_FUNC(sub_82F3B6EC);
PPC_FUNC_IMPL(__imp__sub_82F3B6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B6F0"))) PPC_WEAK_FUNC(sub_82F3B6F0);
PPC_FUNC_IMPL(__imp__sub_82F3B6F0) {
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
	// stw r11,-25492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25492, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3B718"))) PPC_WEAK_FUNC(sub_82F3B718);
PPC_FUNC_IMPL(__imp__sub_82F3B718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3B71C"))) PPC_WEAK_FUNC(sub_82F3B71C);
PPC_FUNC_IMPL(__imp__sub_82F3B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B720"))) PPC_WEAK_FUNC(sub_82F3B720);
PPC_FUNC_IMPL(__imp__sub_82F3B720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21920
	ctx.r3.s64 = r11.s64 + -21920;
}

__attribute__((alias("__imp__sub_82F3B728"))) PPC_WEAK_FUNC(sub_82F3B728);
PPC_FUNC_IMPL(__imp__sub_82F3B728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B72C"))) PPC_WEAK_FUNC(sub_82F3B72C);
PPC_FUNC_IMPL(__imp__sub_82F3B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B730"))) PPC_WEAK_FUNC(sub_82F3B730);
PPC_FUNC_IMPL(__imp__sub_82F3B730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21912
	ctx.r3.s64 = r11.s64 + -21912;
}

__attribute__((alias("__imp__sub_82F3B738"))) PPC_WEAK_FUNC(sub_82F3B738);
PPC_FUNC_IMPL(__imp__sub_82F3B738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B73C"))) PPC_WEAK_FUNC(sub_82F3B73C);
PPC_FUNC_IMPL(__imp__sub_82F3B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B740"))) PPC_WEAK_FUNC(sub_82F3B740);
PPC_FUNC_IMPL(__imp__sub_82F3B740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21904
	ctx.r3.s64 = r11.s64 + -21904;
}

__attribute__((alias("__imp__sub_82F3B748"))) PPC_WEAK_FUNC(sub_82F3B748);
PPC_FUNC_IMPL(__imp__sub_82F3B748) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B74C"))) PPC_WEAK_FUNC(sub_82F3B74C);
PPC_FUNC_IMPL(__imp__sub_82F3B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B750"))) PPC_WEAK_FUNC(sub_82F3B750);
PPC_FUNC_IMPL(__imp__sub_82F3B750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21896
	ctx.r3.s64 = r11.s64 + -21896;
}

__attribute__((alias("__imp__sub_82F3B758"))) PPC_WEAK_FUNC(sub_82F3B758);
PPC_FUNC_IMPL(__imp__sub_82F3B758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B75C"))) PPC_WEAK_FUNC(sub_82F3B75C);
PPC_FUNC_IMPL(__imp__sub_82F3B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B760"))) PPC_WEAK_FUNC(sub_82F3B760);
PPC_FUNC_IMPL(__imp__sub_82F3B760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21888
	ctx.r3.s64 = r11.s64 + -21888;
}

__attribute__((alias("__imp__sub_82F3B768"))) PPC_WEAK_FUNC(sub_82F3B768);
PPC_FUNC_IMPL(__imp__sub_82F3B768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B76C"))) PPC_WEAK_FUNC(sub_82F3B76C);
PPC_FUNC_IMPL(__imp__sub_82F3B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B770"))) PPC_WEAK_FUNC(sub_82F3B770);
PPC_FUNC_IMPL(__imp__sub_82F3B770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21880
	ctx.r3.s64 = r11.s64 + -21880;
}

__attribute__((alias("__imp__sub_82F3B778"))) PPC_WEAK_FUNC(sub_82F3B778);
PPC_FUNC_IMPL(__imp__sub_82F3B778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B77C"))) PPC_WEAK_FUNC(sub_82F3B77C);
PPC_FUNC_IMPL(__imp__sub_82F3B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B780"))) PPC_WEAK_FUNC(sub_82F3B780);
PPC_FUNC_IMPL(__imp__sub_82F3B780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21872
	ctx.r3.s64 = r11.s64 + -21872;
}

__attribute__((alias("__imp__sub_82F3B788"))) PPC_WEAK_FUNC(sub_82F3B788);
PPC_FUNC_IMPL(__imp__sub_82F3B788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B78C"))) PPC_WEAK_FUNC(sub_82F3B78C);
PPC_FUNC_IMPL(__imp__sub_82F3B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B790"))) PPC_WEAK_FUNC(sub_82F3B790);
PPC_FUNC_IMPL(__imp__sub_82F3B790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21864
	ctx.r3.s64 = r11.s64 + -21864;
}

__attribute__((alias("__imp__sub_82F3B798"))) PPC_WEAK_FUNC(sub_82F3B798);
PPC_FUNC_IMPL(__imp__sub_82F3B798) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B79C"))) PPC_WEAK_FUNC(sub_82F3B79C);
PPC_FUNC_IMPL(__imp__sub_82F3B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B7A0"))) PPC_WEAK_FUNC(sub_82F3B7A0);
PPC_FUNC_IMPL(__imp__sub_82F3B7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21856
	ctx.r3.s64 = r11.s64 + -21856;
}

__attribute__((alias("__imp__sub_82F3B7A8"))) PPC_WEAK_FUNC(sub_82F3B7A8);
PPC_FUNC_IMPL(__imp__sub_82F3B7A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B7AC"))) PPC_WEAK_FUNC(sub_82F3B7AC);
PPC_FUNC_IMPL(__imp__sub_82F3B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B7B0"))) PPC_WEAK_FUNC(sub_82F3B7B0);
PPC_FUNC_IMPL(__imp__sub_82F3B7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21848
	ctx.r3.s64 = r11.s64 + -21848;
}

__attribute__((alias("__imp__sub_82F3B7B8"))) PPC_WEAK_FUNC(sub_82F3B7B8);
PPC_FUNC_IMPL(__imp__sub_82F3B7B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B7BC"))) PPC_WEAK_FUNC(sub_82F3B7BC);
PPC_FUNC_IMPL(__imp__sub_82F3B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B7C0"))) PPC_WEAK_FUNC(sub_82F3B7C0);
PPC_FUNC_IMPL(__imp__sub_82F3B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21840
	ctx.r3.s64 = r11.s64 + -21840;
}

__attribute__((alias("__imp__sub_82F3B7C8"))) PPC_WEAK_FUNC(sub_82F3B7C8);
PPC_FUNC_IMPL(__imp__sub_82F3B7C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B7CC"))) PPC_WEAK_FUNC(sub_82F3B7CC);
PPC_FUNC_IMPL(__imp__sub_82F3B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B7D0"))) PPC_WEAK_FUNC(sub_82F3B7D0);
PPC_FUNC_IMPL(__imp__sub_82F3B7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21832
	ctx.r3.s64 = r11.s64 + -21832;
}

__attribute__((alias("__imp__sub_82F3B7D8"))) PPC_WEAK_FUNC(sub_82F3B7D8);
PPC_FUNC_IMPL(__imp__sub_82F3B7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B7DC"))) PPC_WEAK_FUNC(sub_82F3B7DC);
PPC_FUNC_IMPL(__imp__sub_82F3B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B7E0"))) PPC_WEAK_FUNC(sub_82F3B7E0);
PPC_FUNC_IMPL(__imp__sub_82F3B7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21824
	ctx.r3.s64 = r11.s64 + -21824;
}

__attribute__((alias("__imp__sub_82F3B7E8"))) PPC_WEAK_FUNC(sub_82F3B7E8);
PPC_FUNC_IMPL(__imp__sub_82F3B7E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B7EC"))) PPC_WEAK_FUNC(sub_82F3B7EC);
PPC_FUNC_IMPL(__imp__sub_82F3B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B7F0"))) PPC_WEAK_FUNC(sub_82F3B7F0);
PPC_FUNC_IMPL(__imp__sub_82F3B7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21816
	ctx.r3.s64 = r11.s64 + -21816;
}

__attribute__((alias("__imp__sub_82F3B7F8"))) PPC_WEAK_FUNC(sub_82F3B7F8);
PPC_FUNC_IMPL(__imp__sub_82F3B7F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3B7FC"))) PPC_WEAK_FUNC(sub_82F3B7FC);
PPC_FUNC_IMPL(__imp__sub_82F3B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F3B800"))) PPC_WEAK_FUNC(sub_82F3B800);
PPC_FUNC_IMPL(__imp__sub_82F3B800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-21808
	ctx.r3.s64 = r11.s64 + -21808;
}

__attribute__((alias("__imp__sub_82F3B808"))) PPC_WEAK_FUNC(sub_82F3B808);
PPC_FUNC_IMPL(__imp__sub_82F3B808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

