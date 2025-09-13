#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2FAE8"))) PPC_WEAK_FUNC(sub_82F2FAE8);
PPC_FUNC_IMPL(__imp__sub_82F2FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28208
	ctx.r3.s64 = r11.s64 + -28208;
}

__attribute__((alias("__imp__sub_82F2FAF0"))) PPC_WEAK_FUNC(sub_82F2FAF0);
PPC_FUNC_IMPL(__imp__sub_82F2FAF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FAF4"))) PPC_WEAK_FUNC(sub_82F2FAF4);
PPC_FUNC_IMPL(__imp__sub_82F2FAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FAF8"))) PPC_WEAK_FUNC(sub_82F2FAF8);
PPC_FUNC_IMPL(__imp__sub_82F2FAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28200
	ctx.r3.s64 = r11.s64 + -28200;
}

__attribute__((alias("__imp__sub_82F2FB00"))) PPC_WEAK_FUNC(sub_82F2FB00);
PPC_FUNC_IMPL(__imp__sub_82F2FB00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB04"))) PPC_WEAK_FUNC(sub_82F2FB04);
PPC_FUNC_IMPL(__imp__sub_82F2FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB08"))) PPC_WEAK_FUNC(sub_82F2FB08);
PPC_FUNC_IMPL(__imp__sub_82F2FB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28192
	ctx.r3.s64 = r11.s64 + -28192;
}

__attribute__((alias("__imp__sub_82F2FB10"))) PPC_WEAK_FUNC(sub_82F2FB10);
PPC_FUNC_IMPL(__imp__sub_82F2FB10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB14"))) PPC_WEAK_FUNC(sub_82F2FB14);
PPC_FUNC_IMPL(__imp__sub_82F2FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB18"))) PPC_WEAK_FUNC(sub_82F2FB18);
PPC_FUNC_IMPL(__imp__sub_82F2FB18) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,3460
	ctx.r3.s64 = ctx.r10.s64 + 3460;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29224, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FB50"))) PPC_WEAK_FUNC(sub_82F2FB50);
PPC_FUNC_IMPL(__imp__sub_82F2FB50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FB54"))) PPC_WEAK_FUNC(sub_82F2FB54);
PPC_FUNC_IMPL(__imp__sub_82F2FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB58"))) PPC_WEAK_FUNC(sub_82F2FB58);
PPC_FUNC_IMPL(__imp__sub_82F2FB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28184
	ctx.r3.s64 = r11.s64 + -28184;
}

__attribute__((alias("__imp__sub_82F2FB60"))) PPC_WEAK_FUNC(sub_82F2FB60);
PPC_FUNC_IMPL(__imp__sub_82F2FB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB64"))) PPC_WEAK_FUNC(sub_82F2FB64);
PPC_FUNC_IMPL(__imp__sub_82F2FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB68"))) PPC_WEAK_FUNC(sub_82F2FB68);
PPC_FUNC_IMPL(__imp__sub_82F2FB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28176
	ctx.r3.s64 = r11.s64 + -28176;
}

__attribute__((alias("__imp__sub_82F2FB70"))) PPC_WEAK_FUNC(sub_82F2FB70);
PPC_FUNC_IMPL(__imp__sub_82F2FB70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB74"))) PPC_WEAK_FUNC(sub_82F2FB74);
PPC_FUNC_IMPL(__imp__sub_82F2FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB78"))) PPC_WEAK_FUNC(sub_82F2FB78);
PPC_FUNC_IMPL(__imp__sub_82F2FB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28168
	ctx.r3.s64 = r11.s64 + -28168;
}

__attribute__((alias("__imp__sub_82F2FB80"))) PPC_WEAK_FUNC(sub_82F2FB80);
PPC_FUNC_IMPL(__imp__sub_82F2FB80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB84"))) PPC_WEAK_FUNC(sub_82F2FB84);
PPC_FUNC_IMPL(__imp__sub_82F2FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB88"))) PPC_WEAK_FUNC(sub_82F2FB88);
PPC_FUNC_IMPL(__imp__sub_82F2FB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28160
	ctx.r3.s64 = r11.s64 + -28160;
}

__attribute__((alias("__imp__sub_82F2FB90"))) PPC_WEAK_FUNC(sub_82F2FB90);
PPC_FUNC_IMPL(__imp__sub_82F2FB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FB94"))) PPC_WEAK_FUNC(sub_82F2FB94);
PPC_FUNC_IMPL(__imp__sub_82F2FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FB98"))) PPC_WEAK_FUNC(sub_82F2FB98);
PPC_FUNC_IMPL(__imp__sub_82F2FB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28152
	ctx.r3.s64 = r11.s64 + -28152;
}

__attribute__((alias("__imp__sub_82F2FBA0"))) PPC_WEAK_FUNC(sub_82F2FBA0);
PPC_FUNC_IMPL(__imp__sub_82F2FBA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FBA4"))) PPC_WEAK_FUNC(sub_82F2FBA4);
PPC_FUNC_IMPL(__imp__sub_82F2FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FBA8"))) PPC_WEAK_FUNC(sub_82F2FBA8);
PPC_FUNC_IMPL(__imp__sub_82F2FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28144
	ctx.r3.s64 = r11.s64 + -28144;
}

__attribute__((alias("__imp__sub_82F2FBB0"))) PPC_WEAK_FUNC(sub_82F2FBB0);
PPC_FUNC_IMPL(__imp__sub_82F2FBB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FBB4"))) PPC_WEAK_FUNC(sub_82F2FBB4);
PPC_FUNC_IMPL(__imp__sub_82F2FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FBB8"))) PPC_WEAK_FUNC(sub_82F2FBB8);
PPC_FUNC_IMPL(__imp__sub_82F2FBB8) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,156
	ctx.r3.s64 = ctx.r10.s64 + 156;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29244(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29244, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FBF0"))) PPC_WEAK_FUNC(sub_82F2FBF0);
PPC_FUNC_IMPL(__imp__sub_82F2FBF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FBF4"))) PPC_WEAK_FUNC(sub_82F2FBF4);
PPC_FUNC_IMPL(__imp__sub_82F2FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FBF8"))) PPC_WEAK_FUNC(sub_82F2FBF8);
PPC_FUNC_IMPL(__imp__sub_82F2FBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28136
	ctx.r3.s64 = r11.s64 + -28136;
}

__attribute__((alias("__imp__sub_82F2FC00"))) PPC_WEAK_FUNC(sub_82F2FC00);
PPC_FUNC_IMPL(__imp__sub_82F2FC00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FC04"))) PPC_WEAK_FUNC(sub_82F2FC04);
PPC_FUNC_IMPL(__imp__sub_82F2FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC08"))) PPC_WEAK_FUNC(sub_82F2FC08);
PPC_FUNC_IMPL(__imp__sub_82F2FC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28128
	ctx.r3.s64 = r11.s64 + -28128;
}

__attribute__((alias("__imp__sub_82F2FC10"))) PPC_WEAK_FUNC(sub_82F2FC10);
PPC_FUNC_IMPL(__imp__sub_82F2FC10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FC14"))) PPC_WEAK_FUNC(sub_82F2FC14);
PPC_FUNC_IMPL(__imp__sub_82F2FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC18"))) PPC_WEAK_FUNC(sub_82F2FC18);
PPC_FUNC_IMPL(__imp__sub_82F2FC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28120
	ctx.r3.s64 = r11.s64 + -28120;
}

__attribute__((alias("__imp__sub_82F2FC20"))) PPC_WEAK_FUNC(sub_82F2FC20);
PPC_FUNC_IMPL(__imp__sub_82F2FC20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FC24"))) PPC_WEAK_FUNC(sub_82F2FC24);
PPC_FUNC_IMPL(__imp__sub_82F2FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC28"))) PPC_WEAK_FUNC(sub_82F2FC28);
PPC_FUNC_IMPL(__imp__sub_82F2FC28) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,204
	ctx.r3.s64 = ctx.r10.s64 + 204;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29264, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FC60"))) PPC_WEAK_FUNC(sub_82F2FC60);
PPC_FUNC_IMPL(__imp__sub_82F2FC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FC64"))) PPC_WEAK_FUNC(sub_82F2FC64);
PPC_FUNC_IMPL(__imp__sub_82F2FC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC68"))) PPC_WEAK_FUNC(sub_82F2FC68);
PPC_FUNC_IMPL(__imp__sub_82F2FC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28112
	ctx.r3.s64 = r11.s64 + -28112;
}

__attribute__((alias("__imp__sub_82F2FC70"))) PPC_WEAK_FUNC(sub_82F2FC70);
PPC_FUNC_IMPL(__imp__sub_82F2FC70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FC74"))) PPC_WEAK_FUNC(sub_82F2FC74);
PPC_FUNC_IMPL(__imp__sub_82F2FC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC78"))) PPC_WEAK_FUNC(sub_82F2FC78);
PPC_FUNC_IMPL(__imp__sub_82F2FC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28104
	ctx.r3.s64 = r11.s64 + -28104;
}

__attribute__((alias("__imp__sub_82F2FC80"))) PPC_WEAK_FUNC(sub_82F2FC80);
PPC_FUNC_IMPL(__imp__sub_82F2FC80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FC84"))) PPC_WEAK_FUNC(sub_82F2FC84);
PPC_FUNC_IMPL(__imp__sub_82F2FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC88"))) PPC_WEAK_FUNC(sub_82F2FC88);
PPC_FUNC_IMPL(__imp__sub_82F2FC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28096
	ctx.r3.s64 = r11.s64 + -28096;
}

__attribute__((alias("__imp__sub_82F2FC90"))) PPC_WEAK_FUNC(sub_82F2FC90);
PPC_FUNC_IMPL(__imp__sub_82F2FC90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FC94"))) PPC_WEAK_FUNC(sub_82F2FC94);
PPC_FUNC_IMPL(__imp__sub_82F2FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FC98"))) PPC_WEAK_FUNC(sub_82F2FC98);
PPC_FUNC_IMPL(__imp__sub_82F2FC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28088
	ctx.r3.s64 = r11.s64 + -28088;
}

__attribute__((alias("__imp__sub_82F2FCA0"))) PPC_WEAK_FUNC(sub_82F2FCA0);
PPC_FUNC_IMPL(__imp__sub_82F2FCA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FCA4"))) PPC_WEAK_FUNC(sub_82F2FCA4);
PPC_FUNC_IMPL(__imp__sub_82F2FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FCA8"))) PPC_WEAK_FUNC(sub_82F2FCA8);
PPC_FUNC_IMPL(__imp__sub_82F2FCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28080
	ctx.r3.s64 = r11.s64 + -28080;
}

__attribute__((alias("__imp__sub_82F2FCB0"))) PPC_WEAK_FUNC(sub_82F2FCB0);
PPC_FUNC_IMPL(__imp__sub_82F2FCB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FCB4"))) PPC_WEAK_FUNC(sub_82F2FCB4);
PPC_FUNC_IMPL(__imp__sub_82F2FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FCB8"))) PPC_WEAK_FUNC(sub_82F2FCB8);
PPC_FUNC_IMPL(__imp__sub_82F2FCB8) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-80
	ctx.r3.s64 = ctx.r10.s64 + -80;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FCF0"))) PPC_WEAK_FUNC(sub_82F2FCF0);
PPC_FUNC_IMPL(__imp__sub_82F2FCF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FCF4"))) PPC_WEAK_FUNC(sub_82F2FCF4);
PPC_FUNC_IMPL(__imp__sub_82F2FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FCF8"))) PPC_WEAK_FUNC(sub_82F2FCF8);
PPC_FUNC_IMPL(__imp__sub_82F2FCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28072
	ctx.r3.s64 = r11.s64 + -28072;
}

__attribute__((alias("__imp__sub_82F2FD00"))) PPC_WEAK_FUNC(sub_82F2FD00);
PPC_FUNC_IMPL(__imp__sub_82F2FD00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FD04"))) PPC_WEAK_FUNC(sub_82F2FD04);
PPC_FUNC_IMPL(__imp__sub_82F2FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD08"))) PPC_WEAK_FUNC(sub_82F2FD08);
PPC_FUNC_IMPL(__imp__sub_82F2FD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28064
	ctx.r3.s64 = r11.s64 + -28064;
}

__attribute__((alias("__imp__sub_82F2FD10"))) PPC_WEAK_FUNC(sub_82F2FD10);
PPC_FUNC_IMPL(__imp__sub_82F2FD10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FD14"))) PPC_WEAK_FUNC(sub_82F2FD14);
PPC_FUNC_IMPL(__imp__sub_82F2FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD18"))) PPC_WEAK_FUNC(sub_82F2FD18);
PPC_FUNC_IMPL(__imp__sub_82F2FD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28056
	ctx.r3.s64 = r11.s64 + -28056;
}

__attribute__((alias("__imp__sub_82F2FD20"))) PPC_WEAK_FUNC(sub_82F2FD20);
PPC_FUNC_IMPL(__imp__sub_82F2FD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FD24"))) PPC_WEAK_FUNC(sub_82F2FD24);
PPC_FUNC_IMPL(__imp__sub_82F2FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD28"))) PPC_WEAK_FUNC(sub_82F2FD28);
PPC_FUNC_IMPL(__imp__sub_82F2FD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28048
	ctx.r3.s64 = r11.s64 + -28048;
}

__attribute__((alias("__imp__sub_82F2FD30"))) PPC_WEAK_FUNC(sub_82F2FD30);
PPC_FUNC_IMPL(__imp__sub_82F2FD30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FD34"))) PPC_WEAK_FUNC(sub_82F2FD34);
PPC_FUNC_IMPL(__imp__sub_82F2FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD38"))) PPC_WEAK_FUNC(sub_82F2FD38);
PPC_FUNC_IMPL(__imp__sub_82F2FD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28040
	ctx.r3.s64 = r11.s64 + -28040;
}

__attribute__((alias("__imp__sub_82F2FD40"))) PPC_WEAK_FUNC(sub_82F2FD40);
PPC_FUNC_IMPL(__imp__sub_82F2FD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FD44"))) PPC_WEAK_FUNC(sub_82F2FD44);
PPC_FUNC_IMPL(__imp__sub_82F2FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD48"))) PPC_WEAK_FUNC(sub_82F2FD48);
PPC_FUNC_IMPL(__imp__sub_82F2FD48) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-2500
	ctx.r3.s64 = ctx.r10.s64 + -2500;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29288, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FD80"))) PPC_WEAK_FUNC(sub_82F2FD80);
PPC_FUNC_IMPL(__imp__sub_82F2FD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FD84"))) PPC_WEAK_FUNC(sub_82F2FD84);
PPC_FUNC_IMPL(__imp__sub_82F2FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD88"))) PPC_WEAK_FUNC(sub_82F2FD88);
PPC_FUNC_IMPL(__imp__sub_82F2FD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28032
	ctx.r3.s64 = r11.s64 + -28032;
}

__attribute__((alias("__imp__sub_82F2FD90"))) PPC_WEAK_FUNC(sub_82F2FD90);
PPC_FUNC_IMPL(__imp__sub_82F2FD90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FD94"))) PPC_WEAK_FUNC(sub_82F2FD94);
PPC_FUNC_IMPL(__imp__sub_82F2FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FD98"))) PPC_WEAK_FUNC(sub_82F2FD98);
PPC_FUNC_IMPL(__imp__sub_82F2FD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28024
	ctx.r3.s64 = r11.s64 + -28024;
}

__attribute__((alias("__imp__sub_82F2FDA0"))) PPC_WEAK_FUNC(sub_82F2FDA0);
PPC_FUNC_IMPL(__imp__sub_82F2FDA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FDA4"))) PPC_WEAK_FUNC(sub_82F2FDA4);
PPC_FUNC_IMPL(__imp__sub_82F2FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FDA8"))) PPC_WEAK_FUNC(sub_82F2FDA8);
PPC_FUNC_IMPL(__imp__sub_82F2FDA8) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-36
	ctx.r3.s64 = ctx.r10.s64 + -36;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29292(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29292, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FDE0"))) PPC_WEAK_FUNC(sub_82F2FDE0);
PPC_FUNC_IMPL(__imp__sub_82F2FDE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FDE4"))) PPC_WEAK_FUNC(sub_82F2FDE4);
PPC_FUNC_IMPL(__imp__sub_82F2FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FDE8"))) PPC_WEAK_FUNC(sub_82F2FDE8);
PPC_FUNC_IMPL(__imp__sub_82F2FDE8) {
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
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,4252
	ctx.r3.s64 = ctx.r10.s64 + 4252;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FE20"))) PPC_WEAK_FUNC(sub_82F2FE20);
PPC_FUNC_IMPL(__imp__sub_82F2FE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FE24"))) PPC_WEAK_FUNC(sub_82F2FE24);
PPC_FUNC_IMPL(__imp__sub_82F2FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE28"))) PPC_WEAK_FUNC(sub_82F2FE28);
PPC_FUNC_IMPL(__imp__sub_82F2FE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28016
	ctx.r3.s64 = r11.s64 + -28016;
}

__attribute__((alias("__imp__sub_82F2FE30"))) PPC_WEAK_FUNC(sub_82F2FE30);
PPC_FUNC_IMPL(__imp__sub_82F2FE30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FE34"))) PPC_WEAK_FUNC(sub_82F2FE34);
PPC_FUNC_IMPL(__imp__sub_82F2FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE38"))) PPC_WEAK_FUNC(sub_82F2FE38);
PPC_FUNC_IMPL(__imp__sub_82F2FE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28008
	ctx.r3.s64 = r11.s64 + -28008;
}

__attribute__((alias("__imp__sub_82F2FE40"))) PPC_WEAK_FUNC(sub_82F2FE40);
PPC_FUNC_IMPL(__imp__sub_82F2FE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FE44"))) PPC_WEAK_FUNC(sub_82F2FE44);
PPC_FUNC_IMPL(__imp__sub_82F2FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE48"))) PPC_WEAK_FUNC(sub_82F2FE48);
PPC_FUNC_IMPL(__imp__sub_82F2FE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28000
	ctx.r3.s64 = r11.s64 + -28000;
}

__attribute__((alias("__imp__sub_82F2FE50"))) PPC_WEAK_FUNC(sub_82F2FE50);
PPC_FUNC_IMPL(__imp__sub_82F2FE50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FE54"))) PPC_WEAK_FUNC(sub_82F2FE54);
PPC_FUNC_IMPL(__imp__sub_82F2FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE58"))) PPC_WEAK_FUNC(sub_82F2FE58);
PPC_FUNC_IMPL(__imp__sub_82F2FE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27992
	ctx.r3.s64 = r11.s64 + -27992;
}

__attribute__((alias("__imp__sub_82F2FE60"))) PPC_WEAK_FUNC(sub_82F2FE60);
PPC_FUNC_IMPL(__imp__sub_82F2FE60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FE64"))) PPC_WEAK_FUNC(sub_82F2FE64);
PPC_FUNC_IMPL(__imp__sub_82F2FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE68"))) PPC_WEAK_FUNC(sub_82F2FE68);
PPC_FUNC_IMPL(__imp__sub_82F2FE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27984
	ctx.r3.s64 = r11.s64 + -27984;
}

__attribute__((alias("__imp__sub_82F2FE70"))) PPC_WEAK_FUNC(sub_82F2FE70);
PPC_FUNC_IMPL(__imp__sub_82F2FE70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FE74"))) PPC_WEAK_FUNC(sub_82F2FE74);
PPC_FUNC_IMPL(__imp__sub_82F2FE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FE78"))) PPC_WEAK_FUNC(sub_82F2FE78);
PPC_FUNC_IMPL(__imp__sub_82F2FE78) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,29408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FEA4"))) PPC_WEAK_FUNC(sub_82F2FEA4);
PPC_FUNC_IMPL(__imp__sub_82F2FEA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FEA8"))) PPC_WEAK_FUNC(sub_82F2FEA8);
PPC_FUNC_IMPL(__imp__sub_82F2FEA8) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,29412
	ctx.r3.s64 = ctx.r7.s64 + 29412;
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
	// addi r3,r6,-27976
	ctx.r3.s64 = ctx.r6.s64 + -27976;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FF20"))) PPC_WEAK_FUNC(sub_82F2FF20);
PPC_FUNC_IMPL(__imp__sub_82F2FF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FF24"))) PPC_WEAK_FUNC(sub_82F2FF24);
PPC_FUNC_IMPL(__imp__sub_82F2FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FF28"))) PPC_WEAK_FUNC(sub_82F2FF28);
PPC_FUNC_IMPL(__imp__sub_82F2FF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,3388
	ctx.r9.s64 = r11.s64 + 3388;
	// li r8,20
	ctx.r8.s64 = 20;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r6,r7,29456
	ctx.r6.s64 = ctx.r7.s64 + 29456;
	// lvlx128 v63,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// lvlx128 v61,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,4,3
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 57), 4));
	// vor128 v63,v62,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrlimi128 v63,v61,2,2
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 78), 2));
	// vrlimi128 v63,v61,1,1
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 147), 1));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FF64"))) PPC_WEAK_FUNC(sub_82F2FF64);
PPC_FUNC_IMPL(__imp__sub_82F2FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FF68"))) PPC_WEAK_FUNC(sub_82F2FF68);
PPC_FUNC_IMPL(__imp__sub_82F2FF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,3388
	ctx.r9.s64 = r11.s64 + 3388;
	// li r8,24
	ctx.r8.s64 = 24;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r6,r7,29472
	ctx.r6.s64 = ctx.r7.s64 + 29472;
	// lvlx128 v63,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// lvlx128 v61,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v61,4,3
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 57), 4));
	// vor128 v60,v62,v62
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v62.u8));
	// vrlimi128 v60,v63,2,2
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 78), 2));
	// vor128 v63,v60,v60
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)v60.u8));
	// vrlimi128 v63,v61,1,1
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v61.f32), 147), 1));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FFA8"))) PPC_WEAK_FUNC(sub_82F2FFA8);
PPC_FUNC_IMPL(__imp__sub_82F2FFA8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,29492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FFD4"))) PPC_WEAK_FUNC(sub_82F2FFD4);
PPC_FUNC_IMPL(__imp__sub_82F2FFD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FFD8"))) PPC_WEAK_FUNC(sub_82F2FFD8);
PPC_FUNC_IMPL(__imp__sub_82F2FFD8) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,29496
	ctx.r3.s64 = ctx.r7.s64 + 29496;
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
	// addi r3,r6,-27968
	ctx.r3.s64 = ctx.r6.s64 + -27968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30050"))) PPC_WEAK_FUNC(sub_82F30050);
PPC_FUNC_IMPL(__imp__sub_82F30050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30054"))) PPC_WEAK_FUNC(sub_82F30054);
PPC_FUNC_IMPL(__imp__sub_82F30054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30058"))) PPC_WEAK_FUNC(sub_82F30058);
PPC_FUNC_IMPL(__imp__sub_82F30058) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-1808
	ctx.r3.s64 = ctx.r10.s64 + -1808;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30090"))) PPC_WEAK_FUNC(sub_82F30090);
PPC_FUNC_IMPL(__imp__sub_82F30090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30094"))) PPC_WEAK_FUNC(sub_82F30094);
PPC_FUNC_IMPL(__imp__sub_82F30094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30098"))) PPC_WEAK_FUNC(sub_82F30098);
PPC_FUNC_IMPL(__imp__sub_82F30098) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,29784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F300C4"))) PPC_WEAK_FUNC(sub_82F300C4);
PPC_FUNC_IMPL(__imp__sub_82F300C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F300C8"))) PPC_WEAK_FUNC(sub_82F300C8);
PPC_FUNC_IMPL(__imp__sub_82F300C8) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,29788
	ctx.r3.s64 = ctx.r7.s64 + 29788;
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
	// addi r3,r6,-27960
	ctx.r3.s64 = ctx.r6.s64 + -27960;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30140"))) PPC_WEAK_FUNC(sub_82F30140);
PPC_FUNC_IMPL(__imp__sub_82F30140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30144"))) PPC_WEAK_FUNC(sub_82F30144);
PPC_FUNC_IMPL(__imp__sub_82F30144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30148"))) PPC_WEAK_FUNC(sub_82F30148);
PPC_FUNC_IMPL(__imp__sub_82F30148) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,29824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30174"))) PPC_WEAK_FUNC(sub_82F30174);
PPC_FUNC_IMPL(__imp__sub_82F30174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30178"))) PPC_WEAK_FUNC(sub_82F30178);
PPC_FUNC_IMPL(__imp__sub_82F30178) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,29828
	ctx.r3.s64 = ctx.r7.s64 + 29828;
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
	// addi r3,r6,-27904
	ctx.r3.s64 = ctx.r6.s64 + -27904;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F301F0"))) PPC_WEAK_FUNC(sub_82F301F0);
PPC_FUNC_IMPL(__imp__sub_82F301F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F301F4"))) PPC_WEAK_FUNC(sub_82F301F4);
PPC_FUNC_IMPL(__imp__sub_82F301F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F301F8"))) PPC_WEAK_FUNC(sub_82F301F8);
PPC_FUNC_IMPL(__imp__sub_82F301F8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,29864
	ctx.r3.s64 = r11.s64 + 29864;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-27952
	ctx.r3.s64 = ctx.r10.s64 + -27952;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30228"))) PPC_WEAK_FUNC(sub_82F30228);
PPC_FUNC_IMPL(__imp__sub_82F30228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3022C"))) PPC_WEAK_FUNC(sub_82F3022C);
PPC_FUNC_IMPL(__imp__sub_82F3022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30230"))) PPC_WEAK_FUNC(sub_82F30230);
PPC_FUNC_IMPL(__imp__sub_82F30230) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,29976
	ctx.r3.s64 = r11.s64 + 29976;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-27936
	ctx.r3.s64 = ctx.r10.s64 + -27936;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30260"))) PPC_WEAK_FUNC(sub_82F30260);
PPC_FUNC_IMPL(__imp__sub_82F30260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30264"))) PPC_WEAK_FUNC(sub_82F30264);
PPC_FUNC_IMPL(__imp__sub_82F30264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30268"))) PPC_WEAK_FUNC(sub_82F30268);
PPC_FUNC_IMPL(__imp__sub_82F30268) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,30088
	ctx.r3.s64 = r11.s64 + 30088;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-27920
	ctx.r3.s64 = ctx.r10.s64 + -27920;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30298"))) PPC_WEAK_FUNC(sub_82F30298);
PPC_FUNC_IMPL(__imp__sub_82F30298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3029C"))) PPC_WEAK_FUNC(sub_82F3029C);
PPC_FUNC_IMPL(__imp__sub_82F3029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F302A0"))) PPC_WEAK_FUNC(sub_82F302A0);
PPC_FUNC_IMPL(__imp__sub_82F302A0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F302CC"))) PPC_WEAK_FUNC(sub_82F302CC);
PPC_FUNC_IMPL(__imp__sub_82F302CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F302D0"))) PPC_WEAK_FUNC(sub_82F302D0);
PPC_FUNC_IMPL(__imp__sub_82F302D0) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,30200
	ctx.r3.s64 = ctx.r7.s64 + 30200;
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
	// addi r3,r6,-27896
	ctx.r3.s64 = ctx.r6.s64 + -27896;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30348"))) PPC_WEAK_FUNC(sub_82F30348);
PPC_FUNC_IMPL(__imp__sub_82F30348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3034C"))) PPC_WEAK_FUNC(sub_82F3034C);
PPC_FUNC_IMPL(__imp__sub_82F3034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30350"))) PPC_WEAK_FUNC(sub_82F30350);
PPC_FUNC_IMPL(__imp__sub_82F30350) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3037C"))) PPC_WEAK_FUNC(sub_82F3037C);
PPC_FUNC_IMPL(__imp__sub_82F3037C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30380"))) PPC_WEAK_FUNC(sub_82F30380);
PPC_FUNC_IMPL(__imp__sub_82F30380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27888
	ctx.r3.s64 = r11.s64 + -27888;
}

__attribute__((alias("__imp__sub_82F30388"))) PPC_WEAK_FUNC(sub_82F30388);
PPC_FUNC_IMPL(__imp__sub_82F30388) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3038C"))) PPC_WEAK_FUNC(sub_82F3038C);
PPC_FUNC_IMPL(__imp__sub_82F3038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30390"))) PPC_WEAK_FUNC(sub_82F30390);
PPC_FUNC_IMPL(__imp__sub_82F30390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r7,20548(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20548);
	// clrlwi r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82f303e4
	if (!cr6.eq) goto loc_82F303E4;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// li r11,255
	r11.s64 = 255;
	// addi r4,r5,20544
	ctx.r4.s64 = ctx.r5.s64 + 20544;
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, r11.u8);
	// ori r11,r7,1
	r11.u64 = ctx.r7.u64 | 1;
	// stb r10,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// stb r8,20544(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20544, ctx.r8.u8);
	// lwz r10,20544(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20544);
	// stw r11,20548(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20548, r11.u32);
	// stw r10,30272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 30272, ctx.r10.u32);
	// blr 
	return;
loc_82F303E4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,20544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20544);
	// stw r11,30272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30272, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F303F8"))) PPC_WEAK_FUNC(sub_82F303F8);
PPC_FUNC_IMPL(__imp__sub_82F303F8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,30280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30280, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30420"))) PPC_WEAK_FUNC(sub_82F30420);
PPC_FUNC_IMPL(__imp__sub_82F30420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30424"))) PPC_WEAK_FUNC(sub_82F30424);
PPC_FUNC_IMPL(__imp__sub_82F30424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30428"))) PPC_WEAK_FUNC(sub_82F30428);
PPC_FUNC_IMPL(__imp__sub_82F30428) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30284, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30454"))) PPC_WEAK_FUNC(sub_82F30454);
PPC_FUNC_IMPL(__imp__sub_82F30454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30458"))) PPC_WEAK_FUNC(sub_82F30458);
PPC_FUNC_IMPL(__imp__sub_82F30458) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,30288
	ctx.r3.s64 = ctx.r7.s64 + 30288;
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
	// addi r3,r6,-27880
	ctx.r3.s64 = ctx.r6.s64 + -27880;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F304D0"))) PPC_WEAK_FUNC(sub_82F304D0);
PPC_FUNC_IMPL(__imp__sub_82F304D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F304D4"))) PPC_WEAK_FUNC(sub_82F304D4);
PPC_FUNC_IMPL(__imp__sub_82F304D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F304D8"))) PPC_WEAK_FUNC(sub_82F304D8);
PPC_FUNC_IMPL(__imp__sub_82F304D8) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,17616
	ctx.r3.s64 = ctx.r10.s64 + 17616;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,30324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30324, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30510"))) PPC_WEAK_FUNC(sub_82F30510);
PPC_FUNC_IMPL(__imp__sub_82F30510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30514"))) PPC_WEAK_FUNC(sub_82F30514);
PPC_FUNC_IMPL(__imp__sub_82F30514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30518"))) PPC_WEAK_FUNC(sub_82F30518);
PPC_FUNC_IMPL(__imp__sub_82F30518) {
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
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,17672
	ctx.r3.s64 = ctx.r10.s64 + 17672;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,30320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30550"))) PPC_WEAK_FUNC(sub_82F30550);
PPC_FUNC_IMPL(__imp__sub_82F30550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30554"))) PPC_WEAK_FUNC(sub_82F30554);
PPC_FUNC_IMPL(__imp__sub_82F30554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30558"))) PPC_WEAK_FUNC(sub_82F30558);
PPC_FUNC_IMPL(__imp__sub_82F30558) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30328, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30584"))) PPC_WEAK_FUNC(sub_82F30584);
PPC_FUNC_IMPL(__imp__sub_82F30584) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30588"))) PPC_WEAK_FUNC(sub_82F30588);
PPC_FUNC_IMPL(__imp__sub_82F30588) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,30332
	ctx.r3.s64 = ctx.r7.s64 + 30332;
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
	// addi r3,r6,-27872
	ctx.r3.s64 = ctx.r6.s64 + -27872;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30600"))) PPC_WEAK_FUNC(sub_82F30600);
PPC_FUNC_IMPL(__imp__sub_82F30600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30604"))) PPC_WEAK_FUNC(sub_82F30604);
PPC_FUNC_IMPL(__imp__sub_82F30604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30608"))) PPC_WEAK_FUNC(sub_82F30608);
PPC_FUNC_IMPL(__imp__sub_82F30608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27856
	ctx.r3.s64 = r11.s64 + -27856;
}

__attribute__((alias("__imp__sub_82F30610"))) PPC_WEAK_FUNC(sub_82F30610);
PPC_FUNC_IMPL(__imp__sub_82F30610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30614"))) PPC_WEAK_FUNC(sub_82F30614);
PPC_FUNC_IMPL(__imp__sub_82F30614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30618"))) PPC_WEAK_FUNC(sub_82F30618);
PPC_FUNC_IMPL(__imp__sub_82F30618) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30644"))) PPC_WEAK_FUNC(sub_82F30644);
PPC_FUNC_IMPL(__imp__sub_82F30644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30648"))) PPC_WEAK_FUNC(sub_82F30648);
PPC_FUNC_IMPL(__imp__sub_82F30648) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,30396
	ctx.r3.s64 = ctx.r7.s64 + 30396;
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
	// addi r3,r6,-27848
	ctx.r3.s64 = ctx.r6.s64 + -27848;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F306C0"))) PPC_WEAK_FUNC(sub_82F306C0);
PPC_FUNC_IMPL(__imp__sub_82F306C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F306C4"))) PPC_WEAK_FUNC(sub_82F306C4);
PPC_FUNC_IMPL(__imp__sub_82F306C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F306C8"))) PPC_WEAK_FUNC(sub_82F306C8);
PPC_FUNC_IMPL(__imp__sub_82F306C8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,30428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30428, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F306F0"))) PPC_WEAK_FUNC(sub_82F306F0);
PPC_FUNC_IMPL(__imp__sub_82F306F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F306F4"))) PPC_WEAK_FUNC(sub_82F306F4);
PPC_FUNC_IMPL(__imp__sub_82F306F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F306F8"))) PPC_WEAK_FUNC(sub_82F306F8);
PPC_FUNC_IMPL(__imp__sub_82F306F8) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30724"))) PPC_WEAK_FUNC(sub_82F30724);
PPC_FUNC_IMPL(__imp__sub_82F30724) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30728"))) PPC_WEAK_FUNC(sub_82F30728);
PPC_FUNC_IMPL(__imp__sub_82F30728) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,30436
	ctx.r3.s64 = ctx.r7.s64 + 30436;
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
	// addi r3,r6,-27840
	ctx.r3.s64 = ctx.r6.s64 + -27840;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F307A0"))) PPC_WEAK_FUNC(sub_82F307A0);
PPC_FUNC_IMPL(__imp__sub_82F307A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F307A4"))) PPC_WEAK_FUNC(sub_82F307A4);
PPC_FUNC_IMPL(__imp__sub_82F307A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F307A8"))) PPC_WEAK_FUNC(sub_82F307A8);
PPC_FUNC_IMPL(__imp__sub_82F307A8) {
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
	// lis r31,-31968
	r31.s64 = -2095054848;
loc_82F307BC:
	// bl 0x8314d05c
	__imp__KeTlsAlloc(ctx, base);
	// stw r3,18224(r31)
	PPC_STORE_U32(r31.u32 + 18224, ctx.r3.u32);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// blt cr6,0x82f307bc
	if (cr6.lt) goto loc_82F307BC;
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27832
	ctx.r3.s64 = r11.s64 + -27832;
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

__attribute__((alias("__imp__sub_82F307E8"))) PPC_WEAK_FUNC(sub_82F307E8);
PPC_FUNC_IMPL(__imp__sub_82F307E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F307EC"))) PPC_WEAK_FUNC(sub_82F307EC);
PPC_FUNC_IMPL(__imp__sub_82F307EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F307F0"))) PPC_WEAK_FUNC(sub_82F307F0);
PPC_FUNC_IMPL(__imp__sub_82F307F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27808
	ctx.r3.s64 = r11.s64 + -27808;
}

__attribute__((alias("__imp__sub_82F307F8"))) PPC_WEAK_FUNC(sub_82F307F8);
PPC_FUNC_IMPL(__imp__sub_82F307F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F307FC"))) PPC_WEAK_FUNC(sub_82F307FC);
PPC_FUNC_IMPL(__imp__sub_82F307FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30800"))) PPC_WEAK_FUNC(sub_82F30800);
PPC_FUNC_IMPL(__imp__sub_82F30800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
}

__attribute__((alias("__imp__sub_82F30808"))) PPC_WEAK_FUNC(sub_82F30808);
PPC_FUNC_IMPL(__imp__sub_82F30808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3080C"))) PPC_WEAK_FUNC(sub_82F3080C);
PPC_FUNC_IMPL(__imp__sub_82F3080C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30810"))) PPC_WEAK_FUNC(sub_82F30810);
PPC_FUNC_IMPL(__imp__sub_82F30810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27792
	ctx.r3.s64 = r11.s64 + -27792;
}

__attribute__((alias("__imp__sub_82F30818"))) PPC_WEAK_FUNC(sub_82F30818);
PPC_FUNC_IMPL(__imp__sub_82F30818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3081C"))) PPC_WEAK_FUNC(sub_82F3081C);
PPC_FUNC_IMPL(__imp__sub_82F3081C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30820"))) PPC_WEAK_FUNC(sub_82F30820);
PPC_FUNC_IMPL(__imp__sub_82F30820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27784
	ctx.r3.s64 = r11.s64 + -27784;
}

__attribute__((alias("__imp__sub_82F30828"))) PPC_WEAK_FUNC(sub_82F30828);
PPC_FUNC_IMPL(__imp__sub_82F30828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3082C"))) PPC_WEAK_FUNC(sub_82F3082C);
PPC_FUNC_IMPL(__imp__sub_82F3082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30830"))) PPC_WEAK_FUNC(sub_82F30830);
PPC_FUNC_IMPL(__imp__sub_82F30830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27744
	ctx.r3.s64 = r11.s64 + -27744;
}

__attribute__((alias("__imp__sub_82F30838"))) PPC_WEAK_FUNC(sub_82F30838);
PPC_FUNC_IMPL(__imp__sub_82F30838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3083C"))) PPC_WEAK_FUNC(sub_82F3083C);
PPC_FUNC_IMPL(__imp__sub_82F3083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30840"))) PPC_WEAK_FUNC(sub_82F30840);
PPC_FUNC_IMPL(__imp__sub_82F30840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27736
	ctx.r3.s64 = r11.s64 + -27736;
}

__attribute__((alias("__imp__sub_82F30848"))) PPC_WEAK_FUNC(sub_82F30848);
PPC_FUNC_IMPL(__imp__sub_82F30848) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3084C"))) PPC_WEAK_FUNC(sub_82F3084C);
PPC_FUNC_IMPL(__imp__sub_82F3084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30850"))) PPC_WEAK_FUNC(sub_82F30850);
PPC_FUNC_IMPL(__imp__sub_82F30850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27728
	ctx.r3.s64 = r11.s64 + -27728;
}

__attribute__((alias("__imp__sub_82F30858"))) PPC_WEAK_FUNC(sub_82F30858);
PPC_FUNC_IMPL(__imp__sub_82F30858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3085C"))) PPC_WEAK_FUNC(sub_82F3085C);
PPC_FUNC_IMPL(__imp__sub_82F3085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30860"))) PPC_WEAK_FUNC(sub_82F30860);
PPC_FUNC_IMPL(__imp__sub_82F30860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27720
	ctx.r3.s64 = r11.s64 + -27720;
}

__attribute__((alias("__imp__sub_82F30868"))) PPC_WEAK_FUNC(sub_82F30868);
PPC_FUNC_IMPL(__imp__sub_82F30868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3086C"))) PPC_WEAK_FUNC(sub_82F3086C);
PPC_FUNC_IMPL(__imp__sub_82F3086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30870"))) PPC_WEAK_FUNC(sub_82F30870);
PPC_FUNC_IMPL(__imp__sub_82F30870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27712
	ctx.r3.s64 = r11.s64 + -27712;
}

__attribute__((alias("__imp__sub_82F30878"))) PPC_WEAK_FUNC(sub_82F30878);
PPC_FUNC_IMPL(__imp__sub_82F30878) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3087C"))) PPC_WEAK_FUNC(sub_82F3087C);
PPC_FUNC_IMPL(__imp__sub_82F3087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30880"))) PPC_WEAK_FUNC(sub_82F30880);
PPC_FUNC_IMPL(__imp__sub_82F30880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27704
	ctx.r3.s64 = r11.s64 + -27704;
}

__attribute__((alias("__imp__sub_82F30888"))) PPC_WEAK_FUNC(sub_82F30888);
PPC_FUNC_IMPL(__imp__sub_82F30888) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3088C"))) PPC_WEAK_FUNC(sub_82F3088C);
PPC_FUNC_IMPL(__imp__sub_82F3088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30890"))) PPC_WEAK_FUNC(sub_82F30890);
PPC_FUNC_IMPL(__imp__sub_82F30890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27696
	ctx.r3.s64 = r11.s64 + -27696;
}

__attribute__((alias("__imp__sub_82F30898"))) PPC_WEAK_FUNC(sub_82F30898);
PPC_FUNC_IMPL(__imp__sub_82F30898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3089C"))) PPC_WEAK_FUNC(sub_82F3089C);
PPC_FUNC_IMPL(__imp__sub_82F3089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F308A0"))) PPC_WEAK_FUNC(sub_82F308A0);
PPC_FUNC_IMPL(__imp__sub_82F308A0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F308CC"))) PPC_WEAK_FUNC(sub_82F308CC);
PPC_FUNC_IMPL(__imp__sub_82F308CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F308D0"))) PPC_WEAK_FUNC(sub_82F308D0);
PPC_FUNC_IMPL(__imp__sub_82F308D0) {
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
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f0,9460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9460);
	f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,30520
	ctx.r3.s64 = ctx.r7.s64 + 30520;
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
	// addi r3,r6,-27688
	ctx.r3.s64 = ctx.r6.s64 + -27688;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30948"))) PPC_WEAK_FUNC(sub_82F30948);
PPC_FUNC_IMPL(__imp__sub_82F30948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3094C"))) PPC_WEAK_FUNC(sub_82F3094C);
PPC_FUNC_IMPL(__imp__sub_82F3094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30950"))) PPC_WEAK_FUNC(sub_82F30950);
PPC_FUNC_IMPL(__imp__sub_82F30950) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4692
	ctx.r3.s64 = r11.s64 + 4692;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30552, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3097C"))) PPC_WEAK_FUNC(sub_82F3097C);
PPC_FUNC_IMPL(__imp__sub_82F3097C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30980"))) PPC_WEAK_FUNC(sub_82F30980);
PPC_FUNC_IMPL(__imp__sub_82F30980) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4704
	ctx.r3.s64 = r11.s64 + 4704;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F309AC"))) PPC_WEAK_FUNC(sub_82F309AC);
PPC_FUNC_IMPL(__imp__sub_82F309AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F309B0"))) PPC_WEAK_FUNC(sub_82F309B0);
PPC_FUNC_IMPL(__imp__sub_82F309B0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4716
	ctx.r3.s64 = r11.s64 + 4716;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F309DC"))) PPC_WEAK_FUNC(sub_82F309DC);
PPC_FUNC_IMPL(__imp__sub_82F309DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F309E0"))) PPC_WEAK_FUNC(sub_82F309E0);
PPC_FUNC_IMPL(__imp__sub_82F309E0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4728
	ctx.r3.s64 = r11.s64 + 4728;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30564, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30A0C"))) PPC_WEAK_FUNC(sub_82F30A0C);
PPC_FUNC_IMPL(__imp__sub_82F30A0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30A10"))) PPC_WEAK_FUNC(sub_82F30A10);
PPC_FUNC_IMPL(__imp__sub_82F30A10) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-28772
	ctx.r3.s64 = r11.s64 + -28772;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30568, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30A3C"))) PPC_WEAK_FUNC(sub_82F30A3C);
PPC_FUNC_IMPL(__imp__sub_82F30A3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30A40"))) PPC_WEAK_FUNC(sub_82F30A40);
PPC_FUNC_IMPL(__imp__sub_82F30A40) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4740
	ctx.r3.s64 = r11.s64 + 4740;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30572, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30A6C"))) PPC_WEAK_FUNC(sub_82F30A6C);
PPC_FUNC_IMPL(__imp__sub_82F30A6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30A70"))) PPC_WEAK_FUNC(sub_82F30A70);
PPC_FUNC_IMPL(__imp__sub_82F30A70) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-14008
	ctx.r3.s64 = r11.s64 + -14008;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30576, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30A9C"))) PPC_WEAK_FUNC(sub_82F30A9C);
PPC_FUNC_IMPL(__imp__sub_82F30A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30AA0"))) PPC_WEAK_FUNC(sub_82F30AA0);
PPC_FUNC_IMPL(__imp__sub_82F30AA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-13996
	ctx.r3.s64 = r11.s64 + -13996;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30ACC"))) PPC_WEAK_FUNC(sub_82F30ACC);
PPC_FUNC_IMPL(__imp__sub_82F30ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30AD0"))) PPC_WEAK_FUNC(sub_82F30AD0);
PPC_FUNC_IMPL(__imp__sub_82F30AD0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4748
	ctx.r3.s64 = r11.s64 + 4748;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30584, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30AFC"))) PPC_WEAK_FUNC(sub_82F30AFC);
PPC_FUNC_IMPL(__imp__sub_82F30AFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30B00"))) PPC_WEAK_FUNC(sub_82F30B00);
PPC_FUNC_IMPL(__imp__sub_82F30B00) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-11384
	ctx.r3.s64 = r11.s64 + -11384;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30588, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30B2C"))) PPC_WEAK_FUNC(sub_82F30B2C);
PPC_FUNC_IMPL(__imp__sub_82F30B2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30B30"))) PPC_WEAK_FUNC(sub_82F30B30);
PPC_FUNC_IMPL(__imp__sub_82F30B30) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4760
	ctx.r3.s64 = r11.s64 + 4760;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30592, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30B5C"))) PPC_WEAK_FUNC(sub_82F30B5C);
PPC_FUNC_IMPL(__imp__sub_82F30B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30B60"))) PPC_WEAK_FUNC(sub_82F30B60);
PPC_FUNC_IMPL(__imp__sub_82F30B60) {
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
	// addi r3,r11,9468
	ctx.r3.s64 = r11.s64 + 9468;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30596, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30B8C"))) PPC_WEAK_FUNC(sub_82F30B8C);
PPC_FUNC_IMPL(__imp__sub_82F30B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30B90"))) PPC_WEAK_FUNC(sub_82F30B90);
PPC_FUNC_IMPL(__imp__sub_82F30B90) {
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
	// addi r3,r11,9464
	ctx.r3.s64 = r11.s64 + 9464;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30600, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30BBC"))) PPC_WEAK_FUNC(sub_82F30BBC);
PPC_FUNC_IMPL(__imp__sub_82F30BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

