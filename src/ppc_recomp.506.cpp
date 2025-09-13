#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2E354"))) PPC_WEAK_FUNC(sub_82F2E354);
PPC_FUNC_IMPL(__imp__sub_82F2E354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E358"))) PPC_WEAK_FUNC(sub_82F2E358);
PPC_FUNC_IMPL(__imp__sub_82F2E358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29048
	ctx.r3.s64 = r11.s64 + -29048;
}

__attribute__((alias("__imp__sub_82F2E360"))) PPC_WEAK_FUNC(sub_82F2E360);
PPC_FUNC_IMPL(__imp__sub_82F2E360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E364"))) PPC_WEAK_FUNC(sub_82F2E364);
PPC_FUNC_IMPL(__imp__sub_82F2E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E368"))) PPC_WEAK_FUNC(sub_82F2E368);
PPC_FUNC_IMPL(__imp__sub_82F2E368) {
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
	// stw r3,28736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28736, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E394"))) PPC_WEAK_FUNC(sub_82F2E394);
PPC_FUNC_IMPL(__imp__sub_82F2E394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E398"))) PPC_WEAK_FUNC(sub_82F2E398);
PPC_FUNC_IMPL(__imp__sub_82F2E398) {
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
	// addi r3,r7,28740
	ctx.r3.s64 = ctx.r7.s64 + 28740;
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
	// addi r3,r6,-29040
	ctx.r3.s64 = ctx.r6.s64 + -29040;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E410"))) PPC_WEAK_FUNC(sub_82F2E410);
PPC_FUNC_IMPL(__imp__sub_82F2E410) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E414"))) PPC_WEAK_FUNC(sub_82F2E414);
PPC_FUNC_IMPL(__imp__sub_82F2E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E418"))) PPC_WEAK_FUNC(sub_82F2E418);
PPC_FUNC_IMPL(__imp__sub_82F2E418) {
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
	// addi r3,r10,-208
	ctx.r3.s64 = ctx.r10.s64 + -208;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28772(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28772, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E450"))) PPC_WEAK_FUNC(sub_82F2E450);
PPC_FUNC_IMPL(__imp__sub_82F2E450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E454"))) PPC_WEAK_FUNC(sub_82F2E454);
PPC_FUNC_IMPL(__imp__sub_82F2E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E458"))) PPC_WEAK_FUNC(sub_82F2E458);
PPC_FUNC_IMPL(__imp__sub_82F2E458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29032
	ctx.r3.s64 = r11.s64 + -29032;
}

__attribute__((alias("__imp__sub_82F2E460"))) PPC_WEAK_FUNC(sub_82F2E460);
PPC_FUNC_IMPL(__imp__sub_82F2E460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E464"))) PPC_WEAK_FUNC(sub_82F2E464);
PPC_FUNC_IMPL(__imp__sub_82F2E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E468"))) PPC_WEAK_FUNC(sub_82F2E468);
PPC_FUNC_IMPL(__imp__sub_82F2E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29024
	ctx.r3.s64 = r11.s64 + -29024;
}

__attribute__((alias("__imp__sub_82F2E470"))) PPC_WEAK_FUNC(sub_82F2E470);
PPC_FUNC_IMPL(__imp__sub_82F2E470) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E474"))) PPC_WEAK_FUNC(sub_82F2E474);
PPC_FUNC_IMPL(__imp__sub_82F2E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E478"))) PPC_WEAK_FUNC(sub_82F2E478);
PPC_FUNC_IMPL(__imp__sub_82F2E478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29016
	ctx.r3.s64 = r11.s64 + -29016;
}

__attribute__((alias("__imp__sub_82F2E480"))) PPC_WEAK_FUNC(sub_82F2E480);
PPC_FUNC_IMPL(__imp__sub_82F2E480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E484"))) PPC_WEAK_FUNC(sub_82F2E484);
PPC_FUNC_IMPL(__imp__sub_82F2E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E488"))) PPC_WEAK_FUNC(sub_82F2E488);
PPC_FUNC_IMPL(__imp__sub_82F2E488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29008
	ctx.r3.s64 = r11.s64 + -29008;
}

__attribute__((alias("__imp__sub_82F2E490"))) PPC_WEAK_FUNC(sub_82F2E490);
PPC_FUNC_IMPL(__imp__sub_82F2E490) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E494"))) PPC_WEAK_FUNC(sub_82F2E494);
PPC_FUNC_IMPL(__imp__sub_82F2E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E498"))) PPC_WEAK_FUNC(sub_82F2E498);
PPC_FUNC_IMPL(__imp__sub_82F2E498) {
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
	// addi r3,r10,3760
	ctx.r3.s64 = ctx.r10.s64 + 3760;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28784(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E4D0"))) PPC_WEAK_FUNC(sub_82F2E4D0);
PPC_FUNC_IMPL(__imp__sub_82F2E4D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E4D4"))) PPC_WEAK_FUNC(sub_82F2E4D4);
PPC_FUNC_IMPL(__imp__sub_82F2E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E4D8"))) PPC_WEAK_FUNC(sub_82F2E4D8);
PPC_FUNC_IMPL(__imp__sub_82F2E4D8) {
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
	// addi r3,r10,-14248
	ctx.r3.s64 = ctx.r10.s64 + -14248;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28780, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E510"))) PPC_WEAK_FUNC(sub_82F2E510);
PPC_FUNC_IMPL(__imp__sub_82F2E510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E514"))) PPC_WEAK_FUNC(sub_82F2E514);
PPC_FUNC_IMPL(__imp__sub_82F2E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E518"))) PPC_WEAK_FUNC(sub_82F2E518);
PPC_FUNC_IMPL(__imp__sub_82F2E518) {
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
	// addi r3,r10,-14160
	ctx.r3.s64 = ctx.r10.s64 + -14160;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28776, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E550"))) PPC_WEAK_FUNC(sub_82F2E550);
PPC_FUNC_IMPL(__imp__sub_82F2E550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E554"))) PPC_WEAK_FUNC(sub_82F2E554);
PPC_FUNC_IMPL(__imp__sub_82F2E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E558"))) PPC_WEAK_FUNC(sub_82F2E558);
PPC_FUNC_IMPL(__imp__sub_82F2E558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29000
	ctx.r3.s64 = r11.s64 + -29000;
}

__attribute__((alias("__imp__sub_82F2E560"))) PPC_WEAK_FUNC(sub_82F2E560);
PPC_FUNC_IMPL(__imp__sub_82F2E560) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E564"))) PPC_WEAK_FUNC(sub_82F2E564);
PPC_FUNC_IMPL(__imp__sub_82F2E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E568"))) PPC_WEAK_FUNC(sub_82F2E568);
PPC_FUNC_IMPL(__imp__sub_82F2E568) {
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
	// stw r11,28804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28804, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E590"))) PPC_WEAK_FUNC(sub_82F2E590);
PPC_FUNC_IMPL(__imp__sub_82F2E590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E594"))) PPC_WEAK_FUNC(sub_82F2E594);
PPC_FUNC_IMPL(__imp__sub_82F2E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E598"))) PPC_WEAK_FUNC(sub_82F2E598);
PPC_FUNC_IMPL(__imp__sub_82F2E598) {
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
	// addi r3,r10,3572
	ctx.r3.s64 = ctx.r10.s64 + 3572;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E5D0"))) PPC_WEAK_FUNC(sub_82F2E5D0);
PPC_FUNC_IMPL(__imp__sub_82F2E5D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E5D4"))) PPC_WEAK_FUNC(sub_82F2E5D4);
PPC_FUNC_IMPL(__imp__sub_82F2E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E5D8"))) PPC_WEAK_FUNC(sub_82F2E5D8);
PPC_FUNC_IMPL(__imp__sub_82F2E5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28992
	ctx.r3.s64 = r11.s64 + -28992;
}

__attribute__((alias("__imp__sub_82F2E5E0"))) PPC_WEAK_FUNC(sub_82F2E5E0);
PPC_FUNC_IMPL(__imp__sub_82F2E5E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E5E4"))) PPC_WEAK_FUNC(sub_82F2E5E4);
PPC_FUNC_IMPL(__imp__sub_82F2E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E5E8"))) PPC_WEAK_FUNC(sub_82F2E5E8);
PPC_FUNC_IMPL(__imp__sub_82F2E5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28984
	ctx.r3.s64 = r11.s64 + -28984;
}

__attribute__((alias("__imp__sub_82F2E5F0"))) PPC_WEAK_FUNC(sub_82F2E5F0);
PPC_FUNC_IMPL(__imp__sub_82F2E5F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E5F4"))) PPC_WEAK_FUNC(sub_82F2E5F4);
PPC_FUNC_IMPL(__imp__sub_82F2E5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E5F8"))) PPC_WEAK_FUNC(sub_82F2E5F8);
PPC_FUNC_IMPL(__imp__sub_82F2E5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28976
	ctx.r3.s64 = r11.s64 + -28976;
}

__attribute__((alias("__imp__sub_82F2E600"))) PPC_WEAK_FUNC(sub_82F2E600);
PPC_FUNC_IMPL(__imp__sub_82F2E600) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E604"))) PPC_WEAK_FUNC(sub_82F2E604);
PPC_FUNC_IMPL(__imp__sub_82F2E604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E608"))) PPC_WEAK_FUNC(sub_82F2E608);
PPC_FUNC_IMPL(__imp__sub_82F2E608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28968
	ctx.r3.s64 = r11.s64 + -28968;
}

__attribute__((alias("__imp__sub_82F2E610"))) PPC_WEAK_FUNC(sub_82F2E610);
PPC_FUNC_IMPL(__imp__sub_82F2E610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E614"))) PPC_WEAK_FUNC(sub_82F2E614);
PPC_FUNC_IMPL(__imp__sub_82F2E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E618"))) PPC_WEAK_FUNC(sub_82F2E618);
PPC_FUNC_IMPL(__imp__sub_82F2E618) {
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
	// addi r3,r10,3812
	ctx.r3.s64 = ctx.r10.s64 + 3812;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28820, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E650"))) PPC_WEAK_FUNC(sub_82F2E650);
PPC_FUNC_IMPL(__imp__sub_82F2E650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E654"))) PPC_WEAK_FUNC(sub_82F2E654);
PPC_FUNC_IMPL(__imp__sub_82F2E654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E658"))) PPC_WEAK_FUNC(sub_82F2E658);
PPC_FUNC_IMPL(__imp__sub_82F2E658) {
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
	// addi r3,r10,-13736
	ctx.r3.s64 = ctx.r10.s64 + -13736;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28816(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28816, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E690"))) PPC_WEAK_FUNC(sub_82F2E690);
PPC_FUNC_IMPL(__imp__sub_82F2E690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E694"))) PPC_WEAK_FUNC(sub_82F2E694);
PPC_FUNC_IMPL(__imp__sub_82F2E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E698"))) PPC_WEAK_FUNC(sub_82F2E698);
PPC_FUNC_IMPL(__imp__sub_82F2E698) {
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
	// addi r3,r10,-13656
	ctx.r3.s64 = ctx.r10.s64 + -13656;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28812(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E6D0"))) PPC_WEAK_FUNC(sub_82F2E6D0);
PPC_FUNC_IMPL(__imp__sub_82F2E6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E6D4"))) PPC_WEAK_FUNC(sub_82F2E6D4);
PPC_FUNC_IMPL(__imp__sub_82F2E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E6D8"))) PPC_WEAK_FUNC(sub_82F2E6D8);
PPC_FUNC_IMPL(__imp__sub_82F2E6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28960
	ctx.r3.s64 = r11.s64 + -28960;
}

__attribute__((alias("__imp__sub_82F2E6E0"))) PPC_WEAK_FUNC(sub_82F2E6E0);
PPC_FUNC_IMPL(__imp__sub_82F2E6E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E6E4"))) PPC_WEAK_FUNC(sub_82F2E6E4);
PPC_FUNC_IMPL(__imp__sub_82F2E6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E6E8"))) PPC_WEAK_FUNC(sub_82F2E6E8);
PPC_FUNC_IMPL(__imp__sub_82F2E6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28952
	ctx.r3.s64 = r11.s64 + -28952;
}

__attribute__((alias("__imp__sub_82F2E6F0"))) PPC_WEAK_FUNC(sub_82F2E6F0);
PPC_FUNC_IMPL(__imp__sub_82F2E6F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E6F4"))) PPC_WEAK_FUNC(sub_82F2E6F4);
PPC_FUNC_IMPL(__imp__sub_82F2E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E6F8"))) PPC_WEAK_FUNC(sub_82F2E6F8);
PPC_FUNC_IMPL(__imp__sub_82F2E6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28944
	ctx.r3.s64 = r11.s64 + -28944;
}

__attribute__((alias("__imp__sub_82F2E700"))) PPC_WEAK_FUNC(sub_82F2E700);
PPC_FUNC_IMPL(__imp__sub_82F2E700) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E704"))) PPC_WEAK_FUNC(sub_82F2E704);
PPC_FUNC_IMPL(__imp__sub_82F2E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E708"))) PPC_WEAK_FUNC(sub_82F2E708);
PPC_FUNC_IMPL(__imp__sub_82F2E708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28936
	ctx.r3.s64 = r11.s64 + -28936;
}

__attribute__((alias("__imp__sub_82F2E710"))) PPC_WEAK_FUNC(sub_82F2E710);
PPC_FUNC_IMPL(__imp__sub_82F2E710) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E714"))) PPC_WEAK_FUNC(sub_82F2E714);
PPC_FUNC_IMPL(__imp__sub_82F2E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E718"))) PPC_WEAK_FUNC(sub_82F2E718);
PPC_FUNC_IMPL(__imp__sub_82F2E718) {
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
	// addi r3,r10,3712
	ctx.r3.s64 = ctx.r10.s64 + 3712;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28832(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E750"))) PPC_WEAK_FUNC(sub_82F2E750);
PPC_FUNC_IMPL(__imp__sub_82F2E750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E754"))) PPC_WEAK_FUNC(sub_82F2E754);
PPC_FUNC_IMPL(__imp__sub_82F2E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E758"))) PPC_WEAK_FUNC(sub_82F2E758);
PPC_FUNC_IMPL(__imp__sub_82F2E758) {
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
	// addi r3,r10,-13424
	ctx.r3.s64 = ctx.r10.s64 + -13424;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E790"))) PPC_WEAK_FUNC(sub_82F2E790);
PPC_FUNC_IMPL(__imp__sub_82F2E790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E794"))) PPC_WEAK_FUNC(sub_82F2E794);
PPC_FUNC_IMPL(__imp__sub_82F2E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E798"))) PPC_WEAK_FUNC(sub_82F2E798);
PPC_FUNC_IMPL(__imp__sub_82F2E798) {
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
	// addi r3,r10,-13344
	ctx.r3.s64 = ctx.r10.s64 + -13344;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28824, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E7D0"))) PPC_WEAK_FUNC(sub_82F2E7D0);
PPC_FUNC_IMPL(__imp__sub_82F2E7D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E7D4"))) PPC_WEAK_FUNC(sub_82F2E7D4);
PPC_FUNC_IMPL(__imp__sub_82F2E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E7D8"))) PPC_WEAK_FUNC(sub_82F2E7D8);
PPC_FUNC_IMPL(__imp__sub_82F2E7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28928
	ctx.r3.s64 = r11.s64 + -28928;
}

__attribute__((alias("__imp__sub_82F2E7E0"))) PPC_WEAK_FUNC(sub_82F2E7E0);
PPC_FUNC_IMPL(__imp__sub_82F2E7E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E7E4"))) PPC_WEAK_FUNC(sub_82F2E7E4);
PPC_FUNC_IMPL(__imp__sub_82F2E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E7E8"))) PPC_WEAK_FUNC(sub_82F2E7E8);
PPC_FUNC_IMPL(__imp__sub_82F2E7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28920
	ctx.r3.s64 = r11.s64 + -28920;
}

__attribute__((alias("__imp__sub_82F2E7F0"))) PPC_WEAK_FUNC(sub_82F2E7F0);
PPC_FUNC_IMPL(__imp__sub_82F2E7F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E7F4"))) PPC_WEAK_FUNC(sub_82F2E7F4);
PPC_FUNC_IMPL(__imp__sub_82F2E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E7F8"))) PPC_WEAK_FUNC(sub_82F2E7F8);
PPC_FUNC_IMPL(__imp__sub_82F2E7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28912
	ctx.r3.s64 = r11.s64 + -28912;
}

__attribute__((alias("__imp__sub_82F2E800"))) PPC_WEAK_FUNC(sub_82F2E800);
PPC_FUNC_IMPL(__imp__sub_82F2E800) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E804"))) PPC_WEAK_FUNC(sub_82F2E804);
PPC_FUNC_IMPL(__imp__sub_82F2E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E808"))) PPC_WEAK_FUNC(sub_82F2E808);
PPC_FUNC_IMPL(__imp__sub_82F2E808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28904
	ctx.r3.s64 = r11.s64 + -28904;
}

__attribute__((alias("__imp__sub_82F2E810"))) PPC_WEAK_FUNC(sub_82F2E810);
PPC_FUNC_IMPL(__imp__sub_82F2E810) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E814"))) PPC_WEAK_FUNC(sub_82F2E814);
PPC_FUNC_IMPL(__imp__sub_82F2E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E818"))) PPC_WEAK_FUNC(sub_82F2E818);
PPC_FUNC_IMPL(__imp__sub_82F2E818) {
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
	// addi r3,r10,3616
	ctx.r3.s64 = ctx.r10.s64 + 3616;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28844(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E850"))) PPC_WEAK_FUNC(sub_82F2E850);
PPC_FUNC_IMPL(__imp__sub_82F2E850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E854"))) PPC_WEAK_FUNC(sub_82F2E854);
PPC_FUNC_IMPL(__imp__sub_82F2E854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E858"))) PPC_WEAK_FUNC(sub_82F2E858);
PPC_FUNC_IMPL(__imp__sub_82F2E858) {
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
	// addi r3,r10,-13112
	ctx.r3.s64 = ctx.r10.s64 + -13112;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28840(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E890"))) PPC_WEAK_FUNC(sub_82F2E890);
PPC_FUNC_IMPL(__imp__sub_82F2E890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E894"))) PPC_WEAK_FUNC(sub_82F2E894);
PPC_FUNC_IMPL(__imp__sub_82F2E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E898"))) PPC_WEAK_FUNC(sub_82F2E898);
PPC_FUNC_IMPL(__imp__sub_82F2E898) {
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
	// addi r3,r10,-13024
	ctx.r3.s64 = ctx.r10.s64 + -13024;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E8D0"))) PPC_WEAK_FUNC(sub_82F2E8D0);
PPC_FUNC_IMPL(__imp__sub_82F2E8D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E8D4"))) PPC_WEAK_FUNC(sub_82F2E8D4);
PPC_FUNC_IMPL(__imp__sub_82F2E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E8D8"))) PPC_WEAK_FUNC(sub_82F2E8D8);
PPC_FUNC_IMPL(__imp__sub_82F2E8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28896
	ctx.r3.s64 = r11.s64 + -28896;
}

__attribute__((alias("__imp__sub_82F2E8E0"))) PPC_WEAK_FUNC(sub_82F2E8E0);
PPC_FUNC_IMPL(__imp__sub_82F2E8E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E8E4"))) PPC_WEAK_FUNC(sub_82F2E8E4);
PPC_FUNC_IMPL(__imp__sub_82F2E8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E8E8"))) PPC_WEAK_FUNC(sub_82F2E8E8);
PPC_FUNC_IMPL(__imp__sub_82F2E8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28888
	ctx.r3.s64 = r11.s64 + -28888;
}

__attribute__((alias("__imp__sub_82F2E8F0"))) PPC_WEAK_FUNC(sub_82F2E8F0);
PPC_FUNC_IMPL(__imp__sub_82F2E8F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E8F4"))) PPC_WEAK_FUNC(sub_82F2E8F4);
PPC_FUNC_IMPL(__imp__sub_82F2E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E8F8"))) PPC_WEAK_FUNC(sub_82F2E8F8);
PPC_FUNC_IMPL(__imp__sub_82F2E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28880
	ctx.r3.s64 = r11.s64 + -28880;
}

__attribute__((alias("__imp__sub_82F2E900"))) PPC_WEAK_FUNC(sub_82F2E900);
PPC_FUNC_IMPL(__imp__sub_82F2E900) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E904"))) PPC_WEAK_FUNC(sub_82F2E904);
PPC_FUNC_IMPL(__imp__sub_82F2E904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E908"))) PPC_WEAK_FUNC(sub_82F2E908);
PPC_FUNC_IMPL(__imp__sub_82F2E908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28872
	ctx.r3.s64 = r11.s64 + -28872;
}

__attribute__((alias("__imp__sub_82F2E910"))) PPC_WEAK_FUNC(sub_82F2E910);
PPC_FUNC_IMPL(__imp__sub_82F2E910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2E914"))) PPC_WEAK_FUNC(sub_82F2E914);
PPC_FUNC_IMPL(__imp__sub_82F2E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E918"))) PPC_WEAK_FUNC(sub_82F2E918);
PPC_FUNC_IMPL(__imp__sub_82F2E918) {
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
	// addi r3,r10,3668
	ctx.r3.s64 = ctx.r10.s64 + 3668;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28856(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E950"))) PPC_WEAK_FUNC(sub_82F2E950);
PPC_FUNC_IMPL(__imp__sub_82F2E950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E954"))) PPC_WEAK_FUNC(sub_82F2E954);
PPC_FUNC_IMPL(__imp__sub_82F2E954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E958"))) PPC_WEAK_FUNC(sub_82F2E958);
PPC_FUNC_IMPL(__imp__sub_82F2E958) {
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
	// addi r3,r10,-12792
	ctx.r3.s64 = ctx.r10.s64 + -12792;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28852(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E990"))) PPC_WEAK_FUNC(sub_82F2E990);
PPC_FUNC_IMPL(__imp__sub_82F2E990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E994"))) PPC_WEAK_FUNC(sub_82F2E994);
PPC_FUNC_IMPL(__imp__sub_82F2E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E998"))) PPC_WEAK_FUNC(sub_82F2E998);
PPC_FUNC_IMPL(__imp__sub_82F2E998) {
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
	// addi r3,r10,-12712
	ctx.r3.s64 = ctx.r10.s64 + -12712;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2E9D0"))) PPC_WEAK_FUNC(sub_82F2E9D0);
PPC_FUNC_IMPL(__imp__sub_82F2E9D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2E9D4"))) PPC_WEAK_FUNC(sub_82F2E9D4);
PPC_FUNC_IMPL(__imp__sub_82F2E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2E9D8"))) PPC_WEAK_FUNC(sub_82F2E9D8);
PPC_FUNC_IMPL(__imp__sub_82F2E9D8) {
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
	// addi r3,r10,448
	ctx.r3.s64 = ctx.r10.s64 + 448;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28860(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EA10"))) PPC_WEAK_FUNC(sub_82F2EA10);
PPC_FUNC_IMPL(__imp__sub_82F2EA10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EA14"))) PPC_WEAK_FUNC(sub_82F2EA14);
PPC_FUNC_IMPL(__imp__sub_82F2EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EA18"))) PPC_WEAK_FUNC(sub_82F2EA18);
PPC_FUNC_IMPL(__imp__sub_82F2EA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28864
	ctx.r3.s64 = r11.s64 + -28864;
}

__attribute__((alias("__imp__sub_82F2EA20"))) PPC_WEAK_FUNC(sub_82F2EA20);
PPC_FUNC_IMPL(__imp__sub_82F2EA20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EA24"))) PPC_WEAK_FUNC(sub_82F2EA24);
PPC_FUNC_IMPL(__imp__sub_82F2EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EA28"))) PPC_WEAK_FUNC(sub_82F2EA28);
PPC_FUNC_IMPL(__imp__sub_82F2EA28) {
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
	// addi r3,r10,496
	ctx.r3.s64 = ctx.r10.s64 + 496;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28880(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28880, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EA60"))) PPC_WEAK_FUNC(sub_82F2EA60);
PPC_FUNC_IMPL(__imp__sub_82F2EA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EA64"))) PPC_WEAK_FUNC(sub_82F2EA64);
PPC_FUNC_IMPL(__imp__sub_82F2EA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EA68"))) PPC_WEAK_FUNC(sub_82F2EA68);
PPC_FUNC_IMPL(__imp__sub_82F2EA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28856
	ctx.r3.s64 = r11.s64 + -28856;
}

__attribute__((alias("__imp__sub_82F2EA70"))) PPC_WEAK_FUNC(sub_82F2EA70);
PPC_FUNC_IMPL(__imp__sub_82F2EA70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EA74"))) PPC_WEAK_FUNC(sub_82F2EA74);
PPC_FUNC_IMPL(__imp__sub_82F2EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EA78"))) PPC_WEAK_FUNC(sub_82F2EA78);
PPC_FUNC_IMPL(__imp__sub_82F2EA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28848
	ctx.r3.s64 = r11.s64 + -28848;
}

__attribute__((alias("__imp__sub_82F2EA80"))) PPC_WEAK_FUNC(sub_82F2EA80);
PPC_FUNC_IMPL(__imp__sub_82F2EA80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EA84"))) PPC_WEAK_FUNC(sub_82F2EA84);
PPC_FUNC_IMPL(__imp__sub_82F2EA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EA88"))) PPC_WEAK_FUNC(sub_82F2EA88);
PPC_FUNC_IMPL(__imp__sub_82F2EA88) {
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
	// addi r3,r10,552
	ctx.r3.s64 = ctx.r10.s64 + 552;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28884(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EAC0"))) PPC_WEAK_FUNC(sub_82F2EAC0);
PPC_FUNC_IMPL(__imp__sub_82F2EAC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EAC4"))) PPC_WEAK_FUNC(sub_82F2EAC4);
PPC_FUNC_IMPL(__imp__sub_82F2EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EAC8"))) PPC_WEAK_FUNC(sub_82F2EAC8);
PPC_FUNC_IMPL(__imp__sub_82F2EAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28840
	ctx.r3.s64 = r11.s64 + -28840;
}

__attribute__((alias("__imp__sub_82F2EAD0"))) PPC_WEAK_FUNC(sub_82F2EAD0);
PPC_FUNC_IMPL(__imp__sub_82F2EAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EAD4"))) PPC_WEAK_FUNC(sub_82F2EAD4);
PPC_FUNC_IMPL(__imp__sub_82F2EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EAD8"))) PPC_WEAK_FUNC(sub_82F2EAD8);
PPC_FUNC_IMPL(__imp__sub_82F2EAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28832
	ctx.r3.s64 = r11.s64 + -28832;
}

__attribute__((alias("__imp__sub_82F2EAE0"))) PPC_WEAK_FUNC(sub_82F2EAE0);
PPC_FUNC_IMPL(__imp__sub_82F2EAE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EAE4"))) PPC_WEAK_FUNC(sub_82F2EAE4);
PPC_FUNC_IMPL(__imp__sub_82F2EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EAE8"))) PPC_WEAK_FUNC(sub_82F2EAE8);
PPC_FUNC_IMPL(__imp__sub_82F2EAE8) {
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
	// addi r3,r10,616
	ctx.r3.s64 = ctx.r10.s64 + 616;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EB20"))) PPC_WEAK_FUNC(sub_82F2EB20);
PPC_FUNC_IMPL(__imp__sub_82F2EB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EB24"))) PPC_WEAK_FUNC(sub_82F2EB24);
PPC_FUNC_IMPL(__imp__sub_82F2EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EB28"))) PPC_WEAK_FUNC(sub_82F2EB28);
PPC_FUNC_IMPL(__imp__sub_82F2EB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28824
	ctx.r3.s64 = r11.s64 + -28824;
}

__attribute__((alias("__imp__sub_82F2EB30"))) PPC_WEAK_FUNC(sub_82F2EB30);
PPC_FUNC_IMPL(__imp__sub_82F2EB30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EB34"))) PPC_WEAK_FUNC(sub_82F2EB34);
PPC_FUNC_IMPL(__imp__sub_82F2EB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EB38"))) PPC_WEAK_FUNC(sub_82F2EB38);
PPC_FUNC_IMPL(__imp__sub_82F2EB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28816
	ctx.r3.s64 = r11.s64 + -28816;
}

__attribute__((alias("__imp__sub_82F2EB40"))) PPC_WEAK_FUNC(sub_82F2EB40);
PPC_FUNC_IMPL(__imp__sub_82F2EB40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EB44"))) PPC_WEAK_FUNC(sub_82F2EB44);
PPC_FUNC_IMPL(__imp__sub_82F2EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EB48"))) PPC_WEAK_FUNC(sub_82F2EB48);
PPC_FUNC_IMPL(__imp__sub_82F2EB48) {
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
	// addi r3,r10,680
	ctx.r3.s64 = ctx.r10.s64 + 680;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28892, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EB80"))) PPC_WEAK_FUNC(sub_82F2EB80);
PPC_FUNC_IMPL(__imp__sub_82F2EB80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EB84"))) PPC_WEAK_FUNC(sub_82F2EB84);
PPC_FUNC_IMPL(__imp__sub_82F2EB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EB88"))) PPC_WEAK_FUNC(sub_82F2EB88);
PPC_FUNC_IMPL(__imp__sub_82F2EB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28808
	ctx.r3.s64 = r11.s64 + -28808;
}

__attribute__((alias("__imp__sub_82F2EB90"))) PPC_WEAK_FUNC(sub_82F2EB90);
PPC_FUNC_IMPL(__imp__sub_82F2EB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EB94"))) PPC_WEAK_FUNC(sub_82F2EB94);
PPC_FUNC_IMPL(__imp__sub_82F2EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EB98"))) PPC_WEAK_FUNC(sub_82F2EB98);
PPC_FUNC_IMPL(__imp__sub_82F2EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28800
	ctx.r3.s64 = r11.s64 + -28800;
}

__attribute__((alias("__imp__sub_82F2EBA0"))) PPC_WEAK_FUNC(sub_82F2EBA0);
PPC_FUNC_IMPL(__imp__sub_82F2EBA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EBA4"))) PPC_WEAK_FUNC(sub_82F2EBA4);
PPC_FUNC_IMPL(__imp__sub_82F2EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EBA8"))) PPC_WEAK_FUNC(sub_82F2EBA8);
PPC_FUNC_IMPL(__imp__sub_82F2EBA8) {
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
	// addi r3,r10,736
	ctx.r3.s64 = ctx.r10.s64 + 736;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28896, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EBE0"))) PPC_WEAK_FUNC(sub_82F2EBE0);
PPC_FUNC_IMPL(__imp__sub_82F2EBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EBE4"))) PPC_WEAK_FUNC(sub_82F2EBE4);
PPC_FUNC_IMPL(__imp__sub_82F2EBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EBE8"))) PPC_WEAK_FUNC(sub_82F2EBE8);
PPC_FUNC_IMPL(__imp__sub_82F2EBE8) {
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
	// addi r3,r10,4108
	ctx.r3.s64 = ctx.r10.s64 + 4108;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28900(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EC20"))) PPC_WEAK_FUNC(sub_82F2EC20);
PPC_FUNC_IMPL(__imp__sub_82F2EC20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EC24"))) PPC_WEAK_FUNC(sub_82F2EC24);
PPC_FUNC_IMPL(__imp__sub_82F2EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC28"))) PPC_WEAK_FUNC(sub_82F2EC28);
PPC_FUNC_IMPL(__imp__sub_82F2EC28) {
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
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,25852
	ctx.r3.s64 = ctx.r10.s64 + 25852;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28904(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EC60"))) PPC_WEAK_FUNC(sub_82F2EC60);
PPC_FUNC_IMPL(__imp__sub_82F2EC60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EC64"))) PPC_WEAK_FUNC(sub_82F2EC64);
PPC_FUNC_IMPL(__imp__sub_82F2EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC68"))) PPC_WEAK_FUNC(sub_82F2EC68);
PPC_FUNC_IMPL(__imp__sub_82F2EC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28792
	ctx.r3.s64 = r11.s64 + -28792;
}

__attribute__((alias("__imp__sub_82F2EC70"))) PPC_WEAK_FUNC(sub_82F2EC70);
PPC_FUNC_IMPL(__imp__sub_82F2EC70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EC74"))) PPC_WEAK_FUNC(sub_82F2EC74);
PPC_FUNC_IMPL(__imp__sub_82F2EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC78"))) PPC_WEAK_FUNC(sub_82F2EC78);
PPC_FUNC_IMPL(__imp__sub_82F2EC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28784
	ctx.r3.s64 = r11.s64 + -28784;
}

__attribute__((alias("__imp__sub_82F2EC80"))) PPC_WEAK_FUNC(sub_82F2EC80);
PPC_FUNC_IMPL(__imp__sub_82F2EC80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EC84"))) PPC_WEAK_FUNC(sub_82F2EC84);
PPC_FUNC_IMPL(__imp__sub_82F2EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC88"))) PPC_WEAK_FUNC(sub_82F2EC88);
PPC_FUNC_IMPL(__imp__sub_82F2EC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28776
	ctx.r3.s64 = r11.s64 + -28776;
}

__attribute__((alias("__imp__sub_82F2EC90"))) PPC_WEAK_FUNC(sub_82F2EC90);
PPC_FUNC_IMPL(__imp__sub_82F2EC90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EC94"))) PPC_WEAK_FUNC(sub_82F2EC94);
PPC_FUNC_IMPL(__imp__sub_82F2EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EC98"))) PPC_WEAK_FUNC(sub_82F2EC98);
PPC_FUNC_IMPL(__imp__sub_82F2EC98) {
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
	// addi r3,r10,3860
	ctx.r3.s64 = ctx.r10.s64 + 3860;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28924(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28924, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2ECD0"))) PPC_WEAK_FUNC(sub_82F2ECD0);
PPC_FUNC_IMPL(__imp__sub_82F2ECD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ECD4"))) PPC_WEAK_FUNC(sub_82F2ECD4);
PPC_FUNC_IMPL(__imp__sub_82F2ECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ECD8"))) PPC_WEAK_FUNC(sub_82F2ECD8);
PPC_FUNC_IMPL(__imp__sub_82F2ECD8) {
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
	// addi r3,r10,4456
	ctx.r3.s64 = ctx.r10.s64 + 4456;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28928(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28928, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2ED10"))) PPC_WEAK_FUNC(sub_82F2ED10);
PPC_FUNC_IMPL(__imp__sub_82F2ED10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ED14"))) PPC_WEAK_FUNC(sub_82F2ED14);
PPC_FUNC_IMPL(__imp__sub_82F2ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED18"))) PPC_WEAK_FUNC(sub_82F2ED18);
PPC_FUNC_IMPL(__imp__sub_82F2ED18) {
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
	// addi r3,r10,4408
	ctx.r3.s64 = ctx.r10.s64 + 4408;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28932(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28932, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2ED50"))) PPC_WEAK_FUNC(sub_82F2ED50);
PPC_FUNC_IMPL(__imp__sub_82F2ED50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2ED54"))) PPC_WEAK_FUNC(sub_82F2ED54);
PPC_FUNC_IMPL(__imp__sub_82F2ED54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED58"))) PPC_WEAK_FUNC(sub_82F2ED58);
PPC_FUNC_IMPL(__imp__sub_82F2ED58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28768
	ctx.r3.s64 = r11.s64 + -28768;
}

__attribute__((alias("__imp__sub_82F2ED60"))) PPC_WEAK_FUNC(sub_82F2ED60);
PPC_FUNC_IMPL(__imp__sub_82F2ED60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ED64"))) PPC_WEAK_FUNC(sub_82F2ED64);
PPC_FUNC_IMPL(__imp__sub_82F2ED64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED68"))) PPC_WEAK_FUNC(sub_82F2ED68);
PPC_FUNC_IMPL(__imp__sub_82F2ED68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28760
	ctx.r3.s64 = r11.s64 + -28760;
}

__attribute__((alias("__imp__sub_82F2ED70"))) PPC_WEAK_FUNC(sub_82F2ED70);
PPC_FUNC_IMPL(__imp__sub_82F2ED70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ED74"))) PPC_WEAK_FUNC(sub_82F2ED74);
PPC_FUNC_IMPL(__imp__sub_82F2ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED78"))) PPC_WEAK_FUNC(sub_82F2ED78);
PPC_FUNC_IMPL(__imp__sub_82F2ED78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28752
	ctx.r3.s64 = r11.s64 + -28752;
}

__attribute__((alias("__imp__sub_82F2ED80"))) PPC_WEAK_FUNC(sub_82F2ED80);
PPC_FUNC_IMPL(__imp__sub_82F2ED80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ED84"))) PPC_WEAK_FUNC(sub_82F2ED84);
PPC_FUNC_IMPL(__imp__sub_82F2ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED88"))) PPC_WEAK_FUNC(sub_82F2ED88);
PPC_FUNC_IMPL(__imp__sub_82F2ED88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28744
	ctx.r3.s64 = r11.s64 + -28744;
}

__attribute__((alias("__imp__sub_82F2ED90"))) PPC_WEAK_FUNC(sub_82F2ED90);
PPC_FUNC_IMPL(__imp__sub_82F2ED90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2ED94"))) PPC_WEAK_FUNC(sub_82F2ED94);
PPC_FUNC_IMPL(__imp__sub_82F2ED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2ED98"))) PPC_WEAK_FUNC(sub_82F2ED98);
PPC_FUNC_IMPL(__imp__sub_82F2ED98) {
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
	// addi r3,r10,4152
	ctx.r3.s64 = ctx.r10.s64 + 4152;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28936(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28936, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EDD0"))) PPC_WEAK_FUNC(sub_82F2EDD0);
PPC_FUNC_IMPL(__imp__sub_82F2EDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EDD4"))) PPC_WEAK_FUNC(sub_82F2EDD4);
PPC_FUNC_IMPL(__imp__sub_82F2EDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EDD8"))) PPC_WEAK_FUNC(sub_82F2EDD8);
PPC_FUNC_IMPL(__imp__sub_82F2EDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28736
	ctx.r3.s64 = r11.s64 + -28736;
}

__attribute__((alias("__imp__sub_82F2EDE0"))) PPC_WEAK_FUNC(sub_82F2EDE0);
PPC_FUNC_IMPL(__imp__sub_82F2EDE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EDE4"))) PPC_WEAK_FUNC(sub_82F2EDE4);
PPC_FUNC_IMPL(__imp__sub_82F2EDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EDE8"))) PPC_WEAK_FUNC(sub_82F2EDE8);
PPC_FUNC_IMPL(__imp__sub_82F2EDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28728
	ctx.r3.s64 = r11.s64 + -28728;
}

__attribute__((alias("__imp__sub_82F2EDF0"))) PPC_WEAK_FUNC(sub_82F2EDF0);
PPC_FUNC_IMPL(__imp__sub_82F2EDF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EDF4"))) PPC_WEAK_FUNC(sub_82F2EDF4);
PPC_FUNC_IMPL(__imp__sub_82F2EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EDF8"))) PPC_WEAK_FUNC(sub_82F2EDF8);
PPC_FUNC_IMPL(__imp__sub_82F2EDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28720
	ctx.r3.s64 = r11.s64 + -28720;
}

__attribute__((alias("__imp__sub_82F2EE00"))) PPC_WEAK_FUNC(sub_82F2EE00);
PPC_FUNC_IMPL(__imp__sub_82F2EE00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EE04"))) PPC_WEAK_FUNC(sub_82F2EE04);
PPC_FUNC_IMPL(__imp__sub_82F2EE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE08"))) PPC_WEAK_FUNC(sub_82F2EE08);
PPC_FUNC_IMPL(__imp__sub_82F2EE08) {
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
	// addi r3,r10,4304
	ctx.r3.s64 = ctx.r10.s64 + 4304;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28940(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28940, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EE40"))) PPC_WEAK_FUNC(sub_82F2EE40);
PPC_FUNC_IMPL(__imp__sub_82F2EE40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EE44"))) PPC_WEAK_FUNC(sub_82F2EE44);
PPC_FUNC_IMPL(__imp__sub_82F2EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE48"))) PPC_WEAK_FUNC(sub_82F2EE48);
PPC_FUNC_IMPL(__imp__sub_82F2EE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28712
	ctx.r3.s64 = r11.s64 + -28712;
}

__attribute__((alias("__imp__sub_82F2EE50"))) PPC_WEAK_FUNC(sub_82F2EE50);
PPC_FUNC_IMPL(__imp__sub_82F2EE50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EE54"))) PPC_WEAK_FUNC(sub_82F2EE54);
PPC_FUNC_IMPL(__imp__sub_82F2EE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE58"))) PPC_WEAK_FUNC(sub_82F2EE58);
PPC_FUNC_IMPL(__imp__sub_82F2EE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28704
	ctx.r3.s64 = r11.s64 + -28704;
}

__attribute__((alias("__imp__sub_82F2EE60"))) PPC_WEAK_FUNC(sub_82F2EE60);
PPC_FUNC_IMPL(__imp__sub_82F2EE60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EE64"))) PPC_WEAK_FUNC(sub_82F2EE64);
PPC_FUNC_IMPL(__imp__sub_82F2EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE68"))) PPC_WEAK_FUNC(sub_82F2EE68);
PPC_FUNC_IMPL(__imp__sub_82F2EE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28696
	ctx.r3.s64 = r11.s64 + -28696;
}

__attribute__((alias("__imp__sub_82F2EE70"))) PPC_WEAK_FUNC(sub_82F2EE70);
PPC_FUNC_IMPL(__imp__sub_82F2EE70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EE74"))) PPC_WEAK_FUNC(sub_82F2EE74);
PPC_FUNC_IMPL(__imp__sub_82F2EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE78"))) PPC_WEAK_FUNC(sub_82F2EE78);
PPC_FUNC_IMPL(__imp__sub_82F2EE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28688
	ctx.r3.s64 = r11.s64 + -28688;
}

__attribute__((alias("__imp__sub_82F2EE80"))) PPC_WEAK_FUNC(sub_82F2EE80);
PPC_FUNC_IMPL(__imp__sub_82F2EE80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EE84"))) PPC_WEAK_FUNC(sub_82F2EE84);
PPC_FUNC_IMPL(__imp__sub_82F2EE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE88"))) PPC_WEAK_FUNC(sub_82F2EE88);
PPC_FUNC_IMPL(__imp__sub_82F2EE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28680
	ctx.r3.s64 = r11.s64 + -28680;
}

__attribute__((alias("__imp__sub_82F2EE90"))) PPC_WEAK_FUNC(sub_82F2EE90);
PPC_FUNC_IMPL(__imp__sub_82F2EE90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2EE94"))) PPC_WEAK_FUNC(sub_82F2EE94);
PPC_FUNC_IMPL(__imp__sub_82F2EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EE98"))) PPC_WEAK_FUNC(sub_82F2EE98);
PPC_FUNC_IMPL(__imp__sub_82F2EE98) {
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
	// stw r11,28960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28960, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EEC0"))) PPC_WEAK_FUNC(sub_82F2EEC0);
PPC_FUNC_IMPL(__imp__sub_82F2EEC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EEC4"))) PPC_WEAK_FUNC(sub_82F2EEC4);
PPC_FUNC_IMPL(__imp__sub_82F2EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EEC8"))) PPC_WEAK_FUNC(sub_82F2EEC8);
PPC_FUNC_IMPL(__imp__sub_82F2EEC8) {
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
	// addi r3,r10,4356
	ctx.r3.s64 = ctx.r10.s64 + 4356;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28964(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EF00"))) PPC_WEAK_FUNC(sub_82F2EF00);
PPC_FUNC_IMPL(__imp__sub_82F2EF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EF04"))) PPC_WEAK_FUNC(sub_82F2EF04);
PPC_FUNC_IMPL(__imp__sub_82F2EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EF08"))) PPC_WEAK_FUNC(sub_82F2EF08);
PPC_FUNC_IMPL(__imp__sub_82F2EF08) {
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
	// addi r3,r10,4200
	ctx.r3.s64 = ctx.r10.s64 + 4200;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28968(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28968, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EF40"))) PPC_WEAK_FUNC(sub_82F2EF40);
PPC_FUNC_IMPL(__imp__sub_82F2EF40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EF44"))) PPC_WEAK_FUNC(sub_82F2EF44);
PPC_FUNC_IMPL(__imp__sub_82F2EF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EF48"))) PPC_WEAK_FUNC(sub_82F2EF48);
PPC_FUNC_IMPL(__imp__sub_82F2EF48) {
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
	// addi r3,r10,3952
	ctx.r3.s64 = ctx.r10.s64 + 3952;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28972(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28972, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EF80"))) PPC_WEAK_FUNC(sub_82F2EF80);
PPC_FUNC_IMPL(__imp__sub_82F2EF80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EF84"))) PPC_WEAK_FUNC(sub_82F2EF84);
PPC_FUNC_IMPL(__imp__sub_82F2EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EF88"))) PPC_WEAK_FUNC(sub_82F2EF88);
PPC_FUNC_IMPL(__imp__sub_82F2EF88) {
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
	// addi r3,r10,3900
	ctx.r3.s64 = ctx.r10.s64 + 3900;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28976(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28976, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2EFC0"))) PPC_WEAK_FUNC(sub_82F2EFC0);
PPC_FUNC_IMPL(__imp__sub_82F2EFC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2EFC4"))) PPC_WEAK_FUNC(sub_82F2EFC4);
PPC_FUNC_IMPL(__imp__sub_82F2EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2EFC8"))) PPC_WEAK_FUNC(sub_82F2EFC8);
PPC_FUNC_IMPL(__imp__sub_82F2EFC8) {
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
	// addi r3,r10,4004
	ctx.r3.s64 = ctx.r10.s64 + 4004;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28980(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28980, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F000"))) PPC_WEAK_FUNC(sub_82F2F000);
PPC_FUNC_IMPL(__imp__sub_82F2F000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F004"))) PPC_WEAK_FUNC(sub_82F2F004);
PPC_FUNC_IMPL(__imp__sub_82F2F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F008"))) PPC_WEAK_FUNC(sub_82F2F008);
PPC_FUNC_IMPL(__imp__sub_82F2F008) {
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
	// addi r3,r10,4056
	ctx.r3.s64 = ctx.r10.s64 + 4056;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28984(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28984, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

