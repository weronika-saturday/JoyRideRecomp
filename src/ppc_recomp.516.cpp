#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F371A4"))) PPC_WEAK_FUNC(sub_82F371A4);
PPC_FUNC_IMPL(__imp__sub_82F371A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F371A8"))) PPC_WEAK_FUNC(sub_82F371A8);
PPC_FUNC_IMPL(__imp__sub_82F371A8) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,17384
	ctx.r3.s64 = ctx.r10.s64 + 17384;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28636(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28636, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F371E0"))) PPC_WEAK_FUNC(sub_82F371E0);
PPC_FUNC_IMPL(__imp__sub_82F371E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F371E4"))) PPC_WEAK_FUNC(sub_82F371E4);
PPC_FUNC_IMPL(__imp__sub_82F371E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F371E8"))) PPC_WEAK_FUNC(sub_82F371E8);
PPC_FUNC_IMPL(__imp__sub_82F371E8) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,17432
	ctx.r3.s64 = ctx.r10.s64 + 17432;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28640(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28640, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37220"))) PPC_WEAK_FUNC(sub_82F37220);
PPC_FUNC_IMPL(__imp__sub_82F37220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37224"))) PPC_WEAK_FUNC(sub_82F37224);
PPC_FUNC_IMPL(__imp__sub_82F37224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37228"))) PPC_WEAK_FUNC(sub_82F37228);
PPC_FUNC_IMPL(__imp__sub_82F37228) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,17484
	ctx.r3.s64 = ctx.r10.s64 + 17484;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28644(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28644, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37260"))) PPC_WEAK_FUNC(sub_82F37260);
PPC_FUNC_IMPL(__imp__sub_82F37260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37264"))) PPC_WEAK_FUNC(sub_82F37264);
PPC_FUNC_IMPL(__imp__sub_82F37264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37268"))) PPC_WEAK_FUNC(sub_82F37268);
PPC_FUNC_IMPL(__imp__sub_82F37268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23888
	ctx.r3.s64 = r11.s64 + -23888;
}

__attribute__((alias("__imp__sub_82F37270"))) PPC_WEAK_FUNC(sub_82F37270);
PPC_FUNC_IMPL(__imp__sub_82F37270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37274"))) PPC_WEAK_FUNC(sub_82F37274);
PPC_FUNC_IMPL(__imp__sub_82F37274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37278"))) PPC_WEAK_FUNC(sub_82F37278);
PPC_FUNC_IMPL(__imp__sub_82F37278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23880
	ctx.r3.s64 = r11.s64 + -23880;
}

__attribute__((alias("__imp__sub_82F37280"))) PPC_WEAK_FUNC(sub_82F37280);
PPC_FUNC_IMPL(__imp__sub_82F37280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37284"))) PPC_WEAK_FUNC(sub_82F37284);
PPC_FUNC_IMPL(__imp__sub_82F37284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37288"))) PPC_WEAK_FUNC(sub_82F37288);
PPC_FUNC_IMPL(__imp__sub_82F37288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23872
	ctx.r3.s64 = r11.s64 + -23872;
}

__attribute__((alias("__imp__sub_82F37290"))) PPC_WEAK_FUNC(sub_82F37290);
PPC_FUNC_IMPL(__imp__sub_82F37290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37294"))) PPC_WEAK_FUNC(sub_82F37294);
PPC_FUNC_IMPL(__imp__sub_82F37294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37298"))) PPC_WEAK_FUNC(sub_82F37298);
PPC_FUNC_IMPL(__imp__sub_82F37298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23864
	ctx.r3.s64 = r11.s64 + -23864;
}

__attribute__((alias("__imp__sub_82F372A0"))) PPC_WEAK_FUNC(sub_82F372A0);
PPC_FUNC_IMPL(__imp__sub_82F372A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F372A4"))) PPC_WEAK_FUNC(sub_82F372A4);
PPC_FUNC_IMPL(__imp__sub_82F372A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372A8"))) PPC_WEAK_FUNC(sub_82F372A8);
PPC_FUNC_IMPL(__imp__sub_82F372A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23856
	ctx.r3.s64 = r11.s64 + -23856;
}

__attribute__((alias("__imp__sub_82F372B0"))) PPC_WEAK_FUNC(sub_82F372B0);
PPC_FUNC_IMPL(__imp__sub_82F372B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F372B4"))) PPC_WEAK_FUNC(sub_82F372B4);
PPC_FUNC_IMPL(__imp__sub_82F372B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372B8"))) PPC_WEAK_FUNC(sub_82F372B8);
PPC_FUNC_IMPL(__imp__sub_82F372B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23848
	ctx.r3.s64 = r11.s64 + -23848;
}

__attribute__((alias("__imp__sub_82F372C0"))) PPC_WEAK_FUNC(sub_82F372C0);
PPC_FUNC_IMPL(__imp__sub_82F372C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F372C4"))) PPC_WEAK_FUNC(sub_82F372C4);
PPC_FUNC_IMPL(__imp__sub_82F372C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372C8"))) PPC_WEAK_FUNC(sub_82F372C8);
PPC_FUNC_IMPL(__imp__sub_82F372C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23840
	ctx.r3.s64 = r11.s64 + -23840;
}

__attribute__((alias("__imp__sub_82F372D0"))) PPC_WEAK_FUNC(sub_82F372D0);
PPC_FUNC_IMPL(__imp__sub_82F372D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F372D4"))) PPC_WEAK_FUNC(sub_82F372D4);
PPC_FUNC_IMPL(__imp__sub_82F372D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372D8"))) PPC_WEAK_FUNC(sub_82F372D8);
PPC_FUNC_IMPL(__imp__sub_82F372D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23832
	ctx.r3.s64 = r11.s64 + -23832;
}

__attribute__((alias("__imp__sub_82F372E0"))) PPC_WEAK_FUNC(sub_82F372E0);
PPC_FUNC_IMPL(__imp__sub_82F372E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F372E4"))) PPC_WEAK_FUNC(sub_82F372E4);
PPC_FUNC_IMPL(__imp__sub_82F372E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372E8"))) PPC_WEAK_FUNC(sub_82F372E8);
PPC_FUNC_IMPL(__imp__sub_82F372E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23824
	ctx.r3.s64 = r11.s64 + -23824;
}

__attribute__((alias("__imp__sub_82F372F0"))) PPC_WEAK_FUNC(sub_82F372F0);
PPC_FUNC_IMPL(__imp__sub_82F372F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F372F4"))) PPC_WEAK_FUNC(sub_82F372F4);
PPC_FUNC_IMPL(__imp__sub_82F372F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F372F8"))) PPC_WEAK_FUNC(sub_82F372F8);
PPC_FUNC_IMPL(__imp__sub_82F372F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23816
	ctx.r3.s64 = r11.s64 + -23816;
}

__attribute__((alias("__imp__sub_82F37300"))) PPC_WEAK_FUNC(sub_82F37300);
PPC_FUNC_IMPL(__imp__sub_82F37300) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37304"))) PPC_WEAK_FUNC(sub_82F37304);
PPC_FUNC_IMPL(__imp__sub_82F37304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37308"))) PPC_WEAK_FUNC(sub_82F37308);
PPC_FUNC_IMPL(__imp__sub_82F37308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23808
	ctx.r3.s64 = r11.s64 + -23808;
}

__attribute__((alias("__imp__sub_82F37310"))) PPC_WEAK_FUNC(sub_82F37310);
PPC_FUNC_IMPL(__imp__sub_82F37310) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37314"))) PPC_WEAK_FUNC(sub_82F37314);
PPC_FUNC_IMPL(__imp__sub_82F37314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37318"))) PPC_WEAK_FUNC(sub_82F37318);
PPC_FUNC_IMPL(__imp__sub_82F37318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23800
	ctx.r3.s64 = r11.s64 + -23800;
}

__attribute__((alias("__imp__sub_82F37320"))) PPC_WEAK_FUNC(sub_82F37320);
PPC_FUNC_IMPL(__imp__sub_82F37320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37324"))) PPC_WEAK_FUNC(sub_82F37324);
PPC_FUNC_IMPL(__imp__sub_82F37324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37328"))) PPC_WEAK_FUNC(sub_82F37328);
PPC_FUNC_IMPL(__imp__sub_82F37328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23792
	ctx.r3.s64 = r11.s64 + -23792;
}

__attribute__((alias("__imp__sub_82F37330"))) PPC_WEAK_FUNC(sub_82F37330);
PPC_FUNC_IMPL(__imp__sub_82F37330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37334"))) PPC_WEAK_FUNC(sub_82F37334);
PPC_FUNC_IMPL(__imp__sub_82F37334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37338"))) PPC_WEAK_FUNC(sub_82F37338);
PPC_FUNC_IMPL(__imp__sub_82F37338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23784
	ctx.r3.s64 = r11.s64 + -23784;
}

__attribute__((alias("__imp__sub_82F37340"))) PPC_WEAK_FUNC(sub_82F37340);
PPC_FUNC_IMPL(__imp__sub_82F37340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37344"))) PPC_WEAK_FUNC(sub_82F37344);
PPC_FUNC_IMPL(__imp__sub_82F37344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37348"))) PPC_WEAK_FUNC(sub_82F37348);
PPC_FUNC_IMPL(__imp__sub_82F37348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23776
	ctx.r3.s64 = r11.s64 + -23776;
}

__attribute__((alias("__imp__sub_82F37350"))) PPC_WEAK_FUNC(sub_82F37350);
PPC_FUNC_IMPL(__imp__sub_82F37350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37354"))) PPC_WEAK_FUNC(sub_82F37354);
PPC_FUNC_IMPL(__imp__sub_82F37354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37358"))) PPC_WEAK_FUNC(sub_82F37358);
PPC_FUNC_IMPL(__imp__sub_82F37358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23768
	ctx.r3.s64 = r11.s64 + -23768;
}

__attribute__((alias("__imp__sub_82F37360"))) PPC_WEAK_FUNC(sub_82F37360);
PPC_FUNC_IMPL(__imp__sub_82F37360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37364"))) PPC_WEAK_FUNC(sub_82F37364);
PPC_FUNC_IMPL(__imp__sub_82F37364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37368"))) PPC_WEAK_FUNC(sub_82F37368);
PPC_FUNC_IMPL(__imp__sub_82F37368) {
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
	// stw r11,-28464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28464, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37390"))) PPC_WEAK_FUNC(sub_82F37390);
PPC_FUNC_IMPL(__imp__sub_82F37390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37394"))) PPC_WEAK_FUNC(sub_82F37394);
PPC_FUNC_IMPL(__imp__sub_82F37394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37398"))) PPC_WEAK_FUNC(sub_82F37398);
PPC_FUNC_IMPL(__imp__sub_82F37398) {
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
	// stw r3,-28460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F373C4"))) PPC_WEAK_FUNC(sub_82F373C4);
PPC_FUNC_IMPL(__imp__sub_82F373C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F373C8"))) PPC_WEAK_FUNC(sub_82F373C8);
PPC_FUNC_IMPL(__imp__sub_82F373C8) {
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
	// addi r3,r7,-28456
	ctx.r3.s64 = ctx.r7.s64 + -28456;
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
	// addi r3,r6,-23760
	ctx.r3.s64 = ctx.r6.s64 + -23760;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37440"))) PPC_WEAK_FUNC(sub_82F37440);
PPC_FUNC_IMPL(__imp__sub_82F37440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37444"))) PPC_WEAK_FUNC(sub_82F37444);
PPC_FUNC_IMPL(__imp__sub_82F37444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37448"))) PPC_WEAK_FUNC(sub_82F37448);
PPC_FUNC_IMPL(__imp__sub_82F37448) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,20136
	ctx.r3.s64 = ctx.r10.s64 + 20136;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28416(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28416, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37480"))) PPC_WEAK_FUNC(sub_82F37480);
PPC_FUNC_IMPL(__imp__sub_82F37480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37484"))) PPC_WEAK_FUNC(sub_82F37484);
PPC_FUNC_IMPL(__imp__sub_82F37484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37488"))) PPC_WEAK_FUNC(sub_82F37488);
PPC_FUNC_IMPL(__imp__sub_82F37488) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,20192
	ctx.r3.s64 = ctx.r10.s64 + 20192;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28420(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F374C0"))) PPC_WEAK_FUNC(sub_82F374C0);
PPC_FUNC_IMPL(__imp__sub_82F374C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F374C4"))) PPC_WEAK_FUNC(sub_82F374C4);
PPC_FUNC_IMPL(__imp__sub_82F374C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F374C8"))) PPC_WEAK_FUNC(sub_82F374C8);
PPC_FUNC_IMPL(__imp__sub_82F374C8) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,18896
	ctx.r3.s64 = ctx.r10.s64 + 18896;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28424(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37500"))) PPC_WEAK_FUNC(sub_82F37500);
PPC_FUNC_IMPL(__imp__sub_82F37500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37504"))) PPC_WEAK_FUNC(sub_82F37504);
PPC_FUNC_IMPL(__imp__sub_82F37504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37508"))) PPC_WEAK_FUNC(sub_82F37508);
PPC_FUNC_IMPL(__imp__sub_82F37508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23752
	ctx.r3.s64 = r11.s64 + -23752;
}

__attribute__((alias("__imp__sub_82F37510"))) PPC_WEAK_FUNC(sub_82F37510);
PPC_FUNC_IMPL(__imp__sub_82F37510) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37514"))) PPC_WEAK_FUNC(sub_82F37514);
PPC_FUNC_IMPL(__imp__sub_82F37514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37518"))) PPC_WEAK_FUNC(sub_82F37518);
PPC_FUNC_IMPL(__imp__sub_82F37518) {
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
	// stw r11,-28396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28396, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37540"))) PPC_WEAK_FUNC(sub_82F37540);
PPC_FUNC_IMPL(__imp__sub_82F37540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37544"))) PPC_WEAK_FUNC(sub_82F37544);
PPC_FUNC_IMPL(__imp__sub_82F37544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37548"))) PPC_WEAK_FUNC(sub_82F37548);
PPC_FUNC_IMPL(__imp__sub_82F37548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23744
	ctx.r3.s64 = r11.s64 + -23744;
}

__attribute__((alias("__imp__sub_82F37550"))) PPC_WEAK_FUNC(sub_82F37550);
PPC_FUNC_IMPL(__imp__sub_82F37550) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37554"))) PPC_WEAK_FUNC(sub_82F37554);
PPC_FUNC_IMPL(__imp__sub_82F37554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37558"))) PPC_WEAK_FUNC(sub_82F37558);
PPC_FUNC_IMPL(__imp__sub_82F37558) {
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
	// stw r11,-28376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28376, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37580"))) PPC_WEAK_FUNC(sub_82F37580);
PPC_FUNC_IMPL(__imp__sub_82F37580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37584"))) PPC_WEAK_FUNC(sub_82F37584);
PPC_FUNC_IMPL(__imp__sub_82F37584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37588"))) PPC_WEAK_FUNC(sub_82F37588);
PPC_FUNC_IMPL(__imp__sub_82F37588) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,20340
	ctx.r3.s64 = ctx.r10.s64 + 20340;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28368(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28368, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F375C0"))) PPC_WEAK_FUNC(sub_82F375C0);
PPC_FUNC_IMPL(__imp__sub_82F375C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F375C4"))) PPC_WEAK_FUNC(sub_82F375C4);
PPC_FUNC_IMPL(__imp__sub_82F375C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F375C8"))) PPC_WEAK_FUNC(sub_82F375C8);
PPC_FUNC_IMPL(__imp__sub_82F375C8) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,20388
	ctx.r3.s64 = ctx.r10.s64 + 20388;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28372(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28372, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37600"))) PPC_WEAK_FUNC(sub_82F37600);
PPC_FUNC_IMPL(__imp__sub_82F37600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37604"))) PPC_WEAK_FUNC(sub_82F37604);
PPC_FUNC_IMPL(__imp__sub_82F37604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37608"))) PPC_WEAK_FUNC(sub_82F37608);
PPC_FUNC_IMPL(__imp__sub_82F37608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23736
	ctx.r3.s64 = r11.s64 + -23736;
}

__attribute__((alias("__imp__sub_82F37610"))) PPC_WEAK_FUNC(sub_82F37610);
PPC_FUNC_IMPL(__imp__sub_82F37610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37614"))) PPC_WEAK_FUNC(sub_82F37614);
PPC_FUNC_IMPL(__imp__sub_82F37614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37618"))) PPC_WEAK_FUNC(sub_82F37618);
PPC_FUNC_IMPL(__imp__sub_82F37618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23728
	ctx.r3.s64 = r11.s64 + -23728;
}

__attribute__((alias("__imp__sub_82F37620"))) PPC_WEAK_FUNC(sub_82F37620);
PPC_FUNC_IMPL(__imp__sub_82F37620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37624"))) PPC_WEAK_FUNC(sub_82F37624);
PPC_FUNC_IMPL(__imp__sub_82F37624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37628"))) PPC_WEAK_FUNC(sub_82F37628);
PPC_FUNC_IMPL(__imp__sub_82F37628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23720
	ctx.r3.s64 = r11.s64 + -23720;
}

__attribute__((alias("__imp__sub_82F37630"))) PPC_WEAK_FUNC(sub_82F37630);
PPC_FUNC_IMPL(__imp__sub_82F37630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37634"))) PPC_WEAK_FUNC(sub_82F37634);
PPC_FUNC_IMPL(__imp__sub_82F37634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37638"))) PPC_WEAK_FUNC(sub_82F37638);
PPC_FUNC_IMPL(__imp__sub_82F37638) {
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
	// stw r11,-28348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28348, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37660"))) PPC_WEAK_FUNC(sub_82F37660);
PPC_FUNC_IMPL(__imp__sub_82F37660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37664"))) PPC_WEAK_FUNC(sub_82F37664);
PPC_FUNC_IMPL(__imp__sub_82F37664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37668"))) PPC_WEAK_FUNC(sub_82F37668);
PPC_FUNC_IMPL(__imp__sub_82F37668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23712
	ctx.r3.s64 = r11.s64 + -23712;
}

__attribute__((alias("__imp__sub_82F37670"))) PPC_WEAK_FUNC(sub_82F37670);
PPC_FUNC_IMPL(__imp__sub_82F37670) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37674"))) PPC_WEAK_FUNC(sub_82F37674);
PPC_FUNC_IMPL(__imp__sub_82F37674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37678"))) PPC_WEAK_FUNC(sub_82F37678);
PPC_FUNC_IMPL(__imp__sub_82F37678) {
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
	// stw r11,-28328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28328, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F376A0"))) PPC_WEAK_FUNC(sub_82F376A0);
PPC_FUNC_IMPL(__imp__sub_82F376A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F376A4"))) PPC_WEAK_FUNC(sub_82F376A4);
PPC_FUNC_IMPL(__imp__sub_82F376A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F376A8"))) PPC_WEAK_FUNC(sub_82F376A8);
PPC_FUNC_IMPL(__imp__sub_82F376A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23704
	ctx.r3.s64 = r11.s64 + -23704;
}

__attribute__((alias("__imp__sub_82F376B0"))) PPC_WEAK_FUNC(sub_82F376B0);
PPC_FUNC_IMPL(__imp__sub_82F376B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F376B4"))) PPC_WEAK_FUNC(sub_82F376B4);
PPC_FUNC_IMPL(__imp__sub_82F376B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F376B8"))) PPC_WEAK_FUNC(sub_82F376B8);
PPC_FUNC_IMPL(__imp__sub_82F376B8) {
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
	// stw r11,-28308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28308, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F376E0"))) PPC_WEAK_FUNC(sub_82F376E0);
PPC_FUNC_IMPL(__imp__sub_82F376E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F376E4"))) PPC_WEAK_FUNC(sub_82F376E4);
PPC_FUNC_IMPL(__imp__sub_82F376E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F376E8"))) PPC_WEAK_FUNC(sub_82F376E8);
PPC_FUNC_IMPL(__imp__sub_82F376E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23696
	ctx.r3.s64 = r11.s64 + -23696;
}

__attribute__((alias("__imp__sub_82F376F0"))) PPC_WEAK_FUNC(sub_82F376F0);
PPC_FUNC_IMPL(__imp__sub_82F376F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F376F4"))) PPC_WEAK_FUNC(sub_82F376F4);
PPC_FUNC_IMPL(__imp__sub_82F376F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F376F8"))) PPC_WEAK_FUNC(sub_82F376F8);
PPC_FUNC_IMPL(__imp__sub_82F376F8) {
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
	// stw r11,-28288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28288, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37720"))) PPC_WEAK_FUNC(sub_82F37720);
PPC_FUNC_IMPL(__imp__sub_82F37720) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37724"))) PPC_WEAK_FUNC(sub_82F37724);
PPC_FUNC_IMPL(__imp__sub_82F37724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37728"))) PPC_WEAK_FUNC(sub_82F37728);
PPC_FUNC_IMPL(__imp__sub_82F37728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23688
	ctx.r3.s64 = r11.s64 + -23688;
}

__attribute__((alias("__imp__sub_82F37730"))) PPC_WEAK_FUNC(sub_82F37730);
PPC_FUNC_IMPL(__imp__sub_82F37730) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37734"))) PPC_WEAK_FUNC(sub_82F37734);
PPC_FUNC_IMPL(__imp__sub_82F37734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37738"))) PPC_WEAK_FUNC(sub_82F37738);
PPC_FUNC_IMPL(__imp__sub_82F37738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23680
	ctx.r3.s64 = r11.s64 + -23680;
}

__attribute__((alias("__imp__sub_82F37740"))) PPC_WEAK_FUNC(sub_82F37740);
PPC_FUNC_IMPL(__imp__sub_82F37740) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37744"))) PPC_WEAK_FUNC(sub_82F37744);
PPC_FUNC_IMPL(__imp__sub_82F37744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37748"))) PPC_WEAK_FUNC(sub_82F37748);
PPC_FUNC_IMPL(__imp__sub_82F37748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23672
	ctx.r3.s64 = r11.s64 + -23672;
}

__attribute__((alias("__imp__sub_82F37750"))) PPC_WEAK_FUNC(sub_82F37750);
PPC_FUNC_IMPL(__imp__sub_82F37750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37754"))) PPC_WEAK_FUNC(sub_82F37754);
PPC_FUNC_IMPL(__imp__sub_82F37754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37758"))) PPC_WEAK_FUNC(sub_82F37758);
PPC_FUNC_IMPL(__imp__sub_82F37758) {
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
	// stw r11,-28268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28268, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37780"))) PPC_WEAK_FUNC(sub_82F37780);
PPC_FUNC_IMPL(__imp__sub_82F37780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37784"))) PPC_WEAK_FUNC(sub_82F37784);
PPC_FUNC_IMPL(__imp__sub_82F37784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37788"))) PPC_WEAK_FUNC(sub_82F37788);
PPC_FUNC_IMPL(__imp__sub_82F37788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6388
	ctx.r9.s64 = ctx.r10.s64 + 6388;
	// li r10,75
	ctx.r10.s64 = 75;
loc_82F37798:
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
	// bne cr6,0x82f37798
	if (!cr6.eq) goto loc_82F37798;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28264, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F377C0"))) PPC_WEAK_FUNC(sub_82F377C0);
PPC_FUNC_IMPL(__imp__sub_82F377C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6396
	ctx.r9.s64 = ctx.r10.s64 + 6396;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F377D0:
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
	// bne cr6,0x82f377d0
	if (!cr6.eq) goto loc_82F377D0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28260, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F377F8"))) PPC_WEAK_FUNC(sub_82F377F8);
PPC_FUNC_IMPL(__imp__sub_82F377F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6408
	ctx.r9.s64 = ctx.r10.s64 + 6408;
	// li r10,80
	ctx.r10.s64 = 80;
loc_82F37808:
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
	// bne cr6,0x82f37808
	if (!cr6.eq) goto loc_82F37808;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28256, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37830"))) PPC_WEAK_FUNC(sub_82F37830);
PPC_FUNC_IMPL(__imp__sub_82F37830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6420
	ctx.r9.s64 = ctx.r10.s64 + 6420;
	// li r10,82
	ctx.r10.s64 = 82;
loc_82F37840:
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
	// bne cr6,0x82f37840
	if (!cr6.eq) goto loc_82F37840;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28252, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37868"))) PPC_WEAK_FUNC(sub_82F37868);
PPC_FUNC_IMPL(__imp__sub_82F37868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6432
	ctx.r9.s64 = ctx.r10.s64 + 6432;
	// li r10,66
	ctx.r10.s64 = 66;
loc_82F37878:
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
	// bne cr6,0x82f37878
	if (!cr6.eq) goto loc_82F37878;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28248, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F378A0"))) PPC_WEAK_FUNC(sub_82F378A0);
PPC_FUNC_IMPL(__imp__sub_82F378A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6444
	ctx.r9.s64 = ctx.r10.s64 + 6444;
	// li r10,65
	ctx.r10.s64 = 65;
loc_82F378B0:
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
	// bne cr6,0x82f378b0
	if (!cr6.eq) goto loc_82F378B0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28244, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F378D8"))) PPC_WEAK_FUNC(sub_82F378D8);
PPC_FUNC_IMPL(__imp__sub_82F378D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6452
	ctx.r9.s64 = ctx.r10.s64 + 6452;
	// li r10,68
	ctx.r10.s64 = 68;
loc_82F378E8:
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
	// bne cr6,0x82f378e8
	if (!cr6.eq) goto loc_82F378E8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28240, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37910"))) PPC_WEAK_FUNC(sub_82F37910);
PPC_FUNC_IMPL(__imp__sub_82F37910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6464
	ctx.r9.s64 = ctx.r10.s64 + 6464;
	// li r10,67
	ctx.r10.s64 = 67;
loc_82F37920:
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
	// bne cr6,0x82f37920
	if (!cr6.eq) goto loc_82F37920;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28236, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37948"))) PPC_WEAK_FUNC(sub_82F37948);
PPC_FUNC_IMPL(__imp__sub_82F37948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24332
	ctx.r9.s64 = ctx.r10.s64 + -24332;
	// li r10,68
	ctx.r10.s64 = 68;
loc_82F37958:
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
	// bne cr6,0x82f37958
	if (!cr6.eq) goto loc_82F37958;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28232, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37980"))) PPC_WEAK_FUNC(sub_82F37980);
PPC_FUNC_IMPL(__imp__sub_82F37980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6476
	ctx.r9.s64 = ctx.r10.s64 + 6476;
	// li r10,68
	ctx.r10.s64 = 68;
loc_82F37990:
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
	// bne cr6,0x82f37990
	if (!cr6.eq) goto loc_82F37990;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28228, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F379B8"))) PPC_WEAK_FUNC(sub_82F379B8);
PPC_FUNC_IMPL(__imp__sub_82F379B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6488
	ctx.r9.s64 = ctx.r10.s64 + 6488;
	// li r10,66
	ctx.r10.s64 = 66;
loc_82F379C8:
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
	// bne cr6,0x82f379c8
	if (!cr6.eq) goto loc_82F379C8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28224, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F379F0"))) PPC_WEAK_FUNC(sub_82F379F0);
PPC_FUNC_IMPL(__imp__sub_82F379F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6500
	ctx.r9.s64 = ctx.r10.s64 + 6500;
	// li r10,84
	ctx.r10.s64 = 84;
loc_82F37A00:
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
	// bne cr6,0x82f37a00
	if (!cr6.eq) goto loc_82F37A00;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28220, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37A28"))) PPC_WEAK_FUNC(sub_82F37A28);
PPC_FUNC_IMPL(__imp__sub_82F37A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6512
	ctx.r9.s64 = ctx.r10.s64 + 6512;
	// li r10,84
	ctx.r10.s64 = 84;
loc_82F37A38:
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
	// bne cr6,0x82f37a38
	if (!cr6.eq) goto loc_82F37A38;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28216, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37A60"))) PPC_WEAK_FUNC(sub_82F37A60);
PPC_FUNC_IMPL(__imp__sub_82F37A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6532
	ctx.r9.s64 = ctx.r10.s64 + 6532;
	// li r10,76
	ctx.r10.s64 = 76;
loc_82F37A70:
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
	// bne cr6,0x82f37a70
	if (!cr6.eq) goto loc_82F37A70;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28212, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37A98"))) PPC_WEAK_FUNC(sub_82F37A98);
PPC_FUNC_IMPL(__imp__sub_82F37A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,6544
	ctx.r9.s64 = ctx.r10.s64 + 6544;
	// li r10,83
	ctx.r10.s64 = 83;
loc_82F37AA8:
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
	// bne cr6,0x82f37aa8
	if (!cr6.eq) goto loc_82F37AA8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28208, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37AD0"))) PPC_WEAK_FUNC(sub_82F37AD0);
PPC_FUNC_IMPL(__imp__sub_82F37AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24316
	ctx.r9.s64 = ctx.r10.s64 + -24316;
	// li r10,66
	ctx.r10.s64 = 66;
loc_82F37AE0:
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
	// bne cr6,0x82f37ae0
	if (!cr6.eq) goto loc_82F37AE0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28204, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37B08"))) PPC_WEAK_FUNC(sub_82F37B08);
PPC_FUNC_IMPL(__imp__sub_82F37B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24304
	ctx.r9.s64 = ctx.r10.s64 + -24304;
	// li r10,73
	ctx.r10.s64 = 73;
loc_82F37B18:
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
	// bne cr6,0x82f37b18
	if (!cr6.eq) goto loc_82F37B18;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28200, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37B40"))) PPC_WEAK_FUNC(sub_82F37B40);
PPC_FUNC_IMPL(__imp__sub_82F37B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24292
	ctx.r9.s64 = ctx.r10.s64 + -24292;
	// li r10,70
	ctx.r10.s64 = 70;
loc_82F37B50:
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
	// bne cr6,0x82f37b50
	if (!cr6.eq) goto loc_82F37B50;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28196, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37B78"))) PPC_WEAK_FUNC(sub_82F37B78);
PPC_FUNC_IMPL(__imp__sub_82F37B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24280
	ctx.r9.s64 = ctx.r10.s64 + -24280;
	// li r10,80
	ctx.r10.s64 = 80;
loc_82F37B88:
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
	// bne cr6,0x82f37b88
	if (!cr6.eq) goto loc_82F37B88;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28192, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37BB0"))) PPC_WEAK_FUNC(sub_82F37BB0);
PPC_FUNC_IMPL(__imp__sub_82F37BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24264
	ctx.r9.s64 = ctx.r10.s64 + -24264;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82F37BC0:
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
	// bne cr6,0x82f37bc0
	if (!cr6.eq) goto loc_82F37BC0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28188, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37BE8"))) PPC_WEAK_FUNC(sub_82F37BE8);
PPC_FUNC_IMPL(__imp__sub_82F37BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24252
	ctx.r9.s64 = ctx.r10.s64 + -24252;
	// li r10,77
	ctx.r10.s64 = 77;
loc_82F37BF8:
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
	// bne cr6,0x82f37bf8
	if (!cr6.eq) goto loc_82F37BF8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28184, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37C20"))) PPC_WEAK_FUNC(sub_82F37C20);
PPC_FUNC_IMPL(__imp__sub_82F37C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-24240
	ctx.r9.s64 = ctx.r10.s64 + -24240;
	// li r10,73
	ctx.r10.s64 = 73;
loc_82F37C30:
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
	// bne cr6,0x82f37c30
	if (!cr6.eq) goto loc_82F37C30;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-28180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28180, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37C58"))) PPC_WEAK_FUNC(sub_82F37C58);
PPC_FUNC_IMPL(__imp__sub_82F37C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23664
	ctx.r3.s64 = r11.s64 + -23664;
}

__attribute__((alias("__imp__sub_82F37C60"))) PPC_WEAK_FUNC(sub_82F37C60);
PPC_FUNC_IMPL(__imp__sub_82F37C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37C64"))) PPC_WEAK_FUNC(sub_82F37C64);
PPC_FUNC_IMPL(__imp__sub_82F37C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37C68"))) PPC_WEAK_FUNC(sub_82F37C68);
PPC_FUNC_IMPL(__imp__sub_82F37C68) {
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
	// stw r11,-28160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28160, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37C90"))) PPC_WEAK_FUNC(sub_82F37C90);
PPC_FUNC_IMPL(__imp__sub_82F37C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37C94"))) PPC_WEAK_FUNC(sub_82F37C94);
PPC_FUNC_IMPL(__imp__sub_82F37C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37C98"))) PPC_WEAK_FUNC(sub_82F37C98);
PPC_FUNC_IMPL(__imp__sub_82F37C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23656
	ctx.r3.s64 = r11.s64 + -23656;
}

__attribute__((alias("__imp__sub_82F37CA0"))) PPC_WEAK_FUNC(sub_82F37CA0);
PPC_FUNC_IMPL(__imp__sub_82F37CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37CA4"))) PPC_WEAK_FUNC(sub_82F37CA4);
PPC_FUNC_IMPL(__imp__sub_82F37CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37CA8"))) PPC_WEAK_FUNC(sub_82F37CA8);
PPC_FUNC_IMPL(__imp__sub_82F37CA8) {
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
	// stw r11,-28140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28140, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37CD0"))) PPC_WEAK_FUNC(sub_82F37CD0);
PPC_FUNC_IMPL(__imp__sub_82F37CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37CD4"))) PPC_WEAK_FUNC(sub_82F37CD4);
PPC_FUNC_IMPL(__imp__sub_82F37CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37CD8"))) PPC_WEAK_FUNC(sub_82F37CD8);
PPC_FUNC_IMPL(__imp__sub_82F37CD8) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,23404
	ctx.r3.s64 = ctx.r10.s64 + 23404;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28128(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28128, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37D10"))) PPC_WEAK_FUNC(sub_82F37D10);
PPC_FUNC_IMPL(__imp__sub_82F37D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37D14"))) PPC_WEAK_FUNC(sub_82F37D14);
PPC_FUNC_IMPL(__imp__sub_82F37D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37D18"))) PPC_WEAK_FUNC(sub_82F37D18);
PPC_FUNC_IMPL(__imp__sub_82F37D18) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,23348
	ctx.r3.s64 = ctx.r10.s64 + 23348;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28132(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37D50"))) PPC_WEAK_FUNC(sub_82F37D50);
PPC_FUNC_IMPL(__imp__sub_82F37D50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37D54"))) PPC_WEAK_FUNC(sub_82F37D54);
PPC_FUNC_IMPL(__imp__sub_82F37D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37D58"))) PPC_WEAK_FUNC(sub_82F37D58);
PPC_FUNC_IMPL(__imp__sub_82F37D58) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,23460
	ctx.r3.s64 = ctx.r10.s64 + 23460;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-28136(r9)
	PPC_STORE_U32(ctx.r9.u32 + -28136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37D90"))) PPC_WEAK_FUNC(sub_82F37D90);
PPC_FUNC_IMPL(__imp__sub_82F37D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37D94"))) PPC_WEAK_FUNC(sub_82F37D94);
PPC_FUNC_IMPL(__imp__sub_82F37D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37D98"))) PPC_WEAK_FUNC(sub_82F37D98);
PPC_FUNC_IMPL(__imp__sub_82F37D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23648
	ctx.r3.s64 = r11.s64 + -23648;
}

__attribute__((alias("__imp__sub_82F37DA0"))) PPC_WEAK_FUNC(sub_82F37DA0);
PPC_FUNC_IMPL(__imp__sub_82F37DA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37DA4"))) PPC_WEAK_FUNC(sub_82F37DA4);
PPC_FUNC_IMPL(__imp__sub_82F37DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37DA8"))) PPC_WEAK_FUNC(sub_82F37DA8);
PPC_FUNC_IMPL(__imp__sub_82F37DA8) {
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
	// stw r11,-28108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28108, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37DD0"))) PPC_WEAK_FUNC(sub_82F37DD0);
PPC_FUNC_IMPL(__imp__sub_82F37DD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37DD4"))) PPC_WEAK_FUNC(sub_82F37DD4);
PPC_FUNC_IMPL(__imp__sub_82F37DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37DD8"))) PPC_WEAK_FUNC(sub_82F37DD8);
PPC_FUNC_IMPL(__imp__sub_82F37DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23640
	ctx.r3.s64 = r11.s64 + -23640;
}

__attribute__((alias("__imp__sub_82F37DE0"))) PPC_WEAK_FUNC(sub_82F37DE0);
PPC_FUNC_IMPL(__imp__sub_82F37DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37DE4"))) PPC_WEAK_FUNC(sub_82F37DE4);
PPC_FUNC_IMPL(__imp__sub_82F37DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37DE8"))) PPC_WEAK_FUNC(sub_82F37DE8);
PPC_FUNC_IMPL(__imp__sub_82F37DE8) {
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
	// stw r11,-28088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28088, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37E10"))) PPC_WEAK_FUNC(sub_82F37E10);
PPC_FUNC_IMPL(__imp__sub_82F37E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37E14"))) PPC_WEAK_FUNC(sub_82F37E14);
PPC_FUNC_IMPL(__imp__sub_82F37E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37E18"))) PPC_WEAK_FUNC(sub_82F37E18);
PPC_FUNC_IMPL(__imp__sub_82F37E18) {
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
	// stw r3,-28084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37E44"))) PPC_WEAK_FUNC(sub_82F37E44);
PPC_FUNC_IMPL(__imp__sub_82F37E44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37E48"))) PPC_WEAK_FUNC(sub_82F37E48);
PPC_FUNC_IMPL(__imp__sub_82F37E48) {
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
	// addi r3,r11,-24008
	ctx.r3.s64 = r11.s64 + -24008;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-28080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37E74"))) PPC_WEAK_FUNC(sub_82F37E74);
PPC_FUNC_IMPL(__imp__sub_82F37E74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37E78"))) PPC_WEAK_FUNC(sub_82F37E78);
PPC_FUNC_IMPL(__imp__sub_82F37E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23632
	ctx.r3.s64 = r11.s64 + -23632;
}

__attribute__((alias("__imp__sub_82F37E80"))) PPC_WEAK_FUNC(sub_82F37E80);
PPC_FUNC_IMPL(__imp__sub_82F37E80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37E84"))) PPC_WEAK_FUNC(sub_82F37E84);
PPC_FUNC_IMPL(__imp__sub_82F37E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37E88"))) PPC_WEAK_FUNC(sub_82F37E88);
PPC_FUNC_IMPL(__imp__sub_82F37E88) {
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
	// stw r11,-28060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28060, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37EB0"))) PPC_WEAK_FUNC(sub_82F37EB0);
PPC_FUNC_IMPL(__imp__sub_82F37EB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37EB4"))) PPC_WEAK_FUNC(sub_82F37EB4);
PPC_FUNC_IMPL(__imp__sub_82F37EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37EB8"))) PPC_WEAK_FUNC(sub_82F37EB8);
PPC_FUNC_IMPL(__imp__sub_82F37EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23624
	ctx.r3.s64 = r11.s64 + -23624;
}

__attribute__((alias("__imp__sub_82F37EC0"))) PPC_WEAK_FUNC(sub_82F37EC0);
PPC_FUNC_IMPL(__imp__sub_82F37EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37EC4"))) PPC_WEAK_FUNC(sub_82F37EC4);
PPC_FUNC_IMPL(__imp__sub_82F37EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37EC8"))) PPC_WEAK_FUNC(sub_82F37EC8);
PPC_FUNC_IMPL(__imp__sub_82F37EC8) {
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
	// stw r11,-28040(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28040, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37EF0"))) PPC_WEAK_FUNC(sub_82F37EF0);
PPC_FUNC_IMPL(__imp__sub_82F37EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37EF4"))) PPC_WEAK_FUNC(sub_82F37EF4);
PPC_FUNC_IMPL(__imp__sub_82F37EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37EF8"))) PPC_WEAK_FUNC(sub_82F37EF8);
PPC_FUNC_IMPL(__imp__sub_82F37EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23616
	ctx.r3.s64 = r11.s64 + -23616;
}

__attribute__((alias("__imp__sub_82F37F00"))) PPC_WEAK_FUNC(sub_82F37F00);
PPC_FUNC_IMPL(__imp__sub_82F37F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37F04"))) PPC_WEAK_FUNC(sub_82F37F04);
PPC_FUNC_IMPL(__imp__sub_82F37F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37F08"))) PPC_WEAK_FUNC(sub_82F37F08);
PPC_FUNC_IMPL(__imp__sub_82F37F08) {
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
	// stw r11,-28020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28020, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37F30"))) PPC_WEAK_FUNC(sub_82F37F30);
PPC_FUNC_IMPL(__imp__sub_82F37F30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37F34"))) PPC_WEAK_FUNC(sub_82F37F34);
PPC_FUNC_IMPL(__imp__sub_82F37F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37F38"))) PPC_WEAK_FUNC(sub_82F37F38);
PPC_FUNC_IMPL(__imp__sub_82F37F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23608
	ctx.r3.s64 = r11.s64 + -23608;
}

__attribute__((alias("__imp__sub_82F37F40"))) PPC_WEAK_FUNC(sub_82F37F40);
PPC_FUNC_IMPL(__imp__sub_82F37F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37F44"))) PPC_WEAK_FUNC(sub_82F37F44);
PPC_FUNC_IMPL(__imp__sub_82F37F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37F48"))) PPC_WEAK_FUNC(sub_82F37F48);
PPC_FUNC_IMPL(__imp__sub_82F37F48) {
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
	// stw r11,-28000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28000, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37F70"))) PPC_WEAK_FUNC(sub_82F37F70);
PPC_FUNC_IMPL(__imp__sub_82F37F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37F74"))) PPC_WEAK_FUNC(sub_82F37F74);
PPC_FUNC_IMPL(__imp__sub_82F37F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37F78"))) PPC_WEAK_FUNC(sub_82F37F78);
PPC_FUNC_IMPL(__imp__sub_82F37F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23600
	ctx.r3.s64 = r11.s64 + -23600;
}

__attribute__((alias("__imp__sub_82F37F80"))) PPC_WEAK_FUNC(sub_82F37F80);
PPC_FUNC_IMPL(__imp__sub_82F37F80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F37F84"))) PPC_WEAK_FUNC(sub_82F37F84);
PPC_FUNC_IMPL(__imp__sub_82F37F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37F88"))) PPC_WEAK_FUNC(sub_82F37F88);
PPC_FUNC_IMPL(__imp__sub_82F37F88) {
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
	// stw r11,-27980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27980, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37FB0"))) PPC_WEAK_FUNC(sub_82F37FB0);
PPC_FUNC_IMPL(__imp__sub_82F37FB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37FB4"))) PPC_WEAK_FUNC(sub_82F37FB4);
PPC_FUNC_IMPL(__imp__sub_82F37FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37FB8"))) PPC_WEAK_FUNC(sub_82F37FB8);
PPC_FUNC_IMPL(__imp__sub_82F37FB8) {
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
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,23952
	ctx.r3.s64 = ctx.r10.s64 + 23952;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r3,-27976(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F37FF0"))) PPC_WEAK_FUNC(sub_82F37FF0);
PPC_FUNC_IMPL(__imp__sub_82F37FF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F37FF4"))) PPC_WEAK_FUNC(sub_82F37FF4);
PPC_FUNC_IMPL(__imp__sub_82F37FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F37FF8"))) PPC_WEAK_FUNC(sub_82F37FF8);
PPC_FUNC_IMPL(__imp__sub_82F37FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23592
	ctx.r3.s64 = r11.s64 + -23592;
}

__attribute__((alias("__imp__sub_82F38000"))) PPC_WEAK_FUNC(sub_82F38000);
PPC_FUNC_IMPL(__imp__sub_82F38000) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38004"))) PPC_WEAK_FUNC(sub_82F38004);
PPC_FUNC_IMPL(__imp__sub_82F38004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38008"))) PPC_WEAK_FUNC(sub_82F38008);
PPC_FUNC_IMPL(__imp__sub_82F38008) {
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
	// stw r11,-27956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27956, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38030"))) PPC_WEAK_FUNC(sub_82F38030);
PPC_FUNC_IMPL(__imp__sub_82F38030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38034"))) PPC_WEAK_FUNC(sub_82F38034);
PPC_FUNC_IMPL(__imp__sub_82F38034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38038"))) PPC_WEAK_FUNC(sub_82F38038);
PPC_FUNC_IMPL(__imp__sub_82F38038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23584
	ctx.r3.s64 = r11.s64 + -23584;
}

__attribute__((alias("__imp__sub_82F38040"))) PPC_WEAK_FUNC(sub_82F38040);
PPC_FUNC_IMPL(__imp__sub_82F38040) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38044"))) PPC_WEAK_FUNC(sub_82F38044);
PPC_FUNC_IMPL(__imp__sub_82F38044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38048"))) PPC_WEAK_FUNC(sub_82F38048);
PPC_FUNC_IMPL(__imp__sub_82F38048) {
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
	// stw r11,-27936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27936, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38070"))) PPC_WEAK_FUNC(sub_82F38070);
PPC_FUNC_IMPL(__imp__sub_82F38070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38074"))) PPC_WEAK_FUNC(sub_82F38074);
PPC_FUNC_IMPL(__imp__sub_82F38074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38078"))) PPC_WEAK_FUNC(sub_82F38078);
PPC_FUNC_IMPL(__imp__sub_82F38078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23576
	ctx.r3.s64 = r11.s64 + -23576;
}

__attribute__((alias("__imp__sub_82F38080"))) PPC_WEAK_FUNC(sub_82F38080);
PPC_FUNC_IMPL(__imp__sub_82F38080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38084"))) PPC_WEAK_FUNC(sub_82F38084);
PPC_FUNC_IMPL(__imp__sub_82F38084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38088"))) PPC_WEAK_FUNC(sub_82F38088);
PPC_FUNC_IMPL(__imp__sub_82F38088) {
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
	// stw r11,-27916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27916, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F380B0"))) PPC_WEAK_FUNC(sub_82F380B0);
PPC_FUNC_IMPL(__imp__sub_82F380B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F380B4"))) PPC_WEAK_FUNC(sub_82F380B4);
PPC_FUNC_IMPL(__imp__sub_82F380B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F380B8"))) PPC_WEAK_FUNC(sub_82F380B8);
PPC_FUNC_IMPL(__imp__sub_82F380B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23568
	ctx.r3.s64 = r11.s64 + -23568;
}

__attribute__((alias("__imp__sub_82F380C0"))) PPC_WEAK_FUNC(sub_82F380C0);
PPC_FUNC_IMPL(__imp__sub_82F380C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F380C4"))) PPC_WEAK_FUNC(sub_82F380C4);
PPC_FUNC_IMPL(__imp__sub_82F380C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F380C8"))) PPC_WEAK_FUNC(sub_82F380C8);
PPC_FUNC_IMPL(__imp__sub_82F380C8) {
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
	// stw r11,-27896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27896, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F380F0"))) PPC_WEAK_FUNC(sub_82F380F0);
PPC_FUNC_IMPL(__imp__sub_82F380F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F380F4"))) PPC_WEAK_FUNC(sub_82F380F4);
PPC_FUNC_IMPL(__imp__sub_82F380F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F380F8"))) PPC_WEAK_FUNC(sub_82F380F8);
PPC_FUNC_IMPL(__imp__sub_82F380F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23560
	ctx.r3.s64 = r11.s64 + -23560;
}

__attribute__((alias("__imp__sub_82F38100"))) PPC_WEAK_FUNC(sub_82F38100);
PPC_FUNC_IMPL(__imp__sub_82F38100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38104"))) PPC_WEAK_FUNC(sub_82F38104);
PPC_FUNC_IMPL(__imp__sub_82F38104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38108"))) PPC_WEAK_FUNC(sub_82F38108);
PPC_FUNC_IMPL(__imp__sub_82F38108) {
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
	// stw r11,-27876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27876, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38130"))) PPC_WEAK_FUNC(sub_82F38130);
PPC_FUNC_IMPL(__imp__sub_82F38130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

