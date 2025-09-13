#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2F040"))) PPC_WEAK_FUNC(sub_82F2F040);
PPC_FUNC_IMPL(__imp__sub_82F2F040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F044"))) PPC_WEAK_FUNC(sub_82F2F044);
PPC_FUNC_IMPL(__imp__sub_82F2F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F048"))) PPC_WEAK_FUNC(sub_82F2F048);
PPC_FUNC_IMPL(__imp__sub_82F2F048) {
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
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F080"))) PPC_WEAK_FUNC(sub_82F2F080);
PPC_FUNC_IMPL(__imp__sub_82F2F080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F084"))) PPC_WEAK_FUNC(sub_82F2F084);
PPC_FUNC_IMPL(__imp__sub_82F2F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F088"))) PPC_WEAK_FUNC(sub_82F2F088);
PPC_FUNC_IMPL(__imp__sub_82F2F088) {
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
	// addi r3,r10,56
	ctx.r3.s64 = ctx.r10.s64 + 56;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28992(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28992, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F0C0"))) PPC_WEAK_FUNC(sub_82F2F0C0);
PPC_FUNC_IMPL(__imp__sub_82F2F0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F0C4"))) PPC_WEAK_FUNC(sub_82F2F0C4);
PPC_FUNC_IMPL(__imp__sub_82F2F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F0C8"))) PPC_WEAK_FUNC(sub_82F2F0C8);
PPC_FUNC_IMPL(__imp__sub_82F2F0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28672
	ctx.r3.s64 = r11.s64 + -28672;
}

__attribute__((alias("__imp__sub_82F2F0D0"))) PPC_WEAK_FUNC(sub_82F2F0D0);
PPC_FUNC_IMPL(__imp__sub_82F2F0D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F0D4"))) PPC_WEAK_FUNC(sub_82F2F0D4);
PPC_FUNC_IMPL(__imp__sub_82F2F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F0D8"))) PPC_WEAK_FUNC(sub_82F2F0D8);
PPC_FUNC_IMPL(__imp__sub_82F2F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28664
	ctx.r3.s64 = r11.s64 + -28664;
}

__attribute__((alias("__imp__sub_82F2F0E0"))) PPC_WEAK_FUNC(sub_82F2F0E0);
PPC_FUNC_IMPL(__imp__sub_82F2F0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F0E4"))) PPC_WEAK_FUNC(sub_82F2F0E4);
PPC_FUNC_IMPL(__imp__sub_82F2F0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F0E8"))) PPC_WEAK_FUNC(sub_82F2F0E8);
PPC_FUNC_IMPL(__imp__sub_82F2F0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28656
	ctx.r3.s64 = r11.s64 + -28656;
}

__attribute__((alias("__imp__sub_82F2F0F0"))) PPC_WEAK_FUNC(sub_82F2F0F0);
PPC_FUNC_IMPL(__imp__sub_82F2F0F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F0F4"))) PPC_WEAK_FUNC(sub_82F2F0F4);
PPC_FUNC_IMPL(__imp__sub_82F2F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F0F8"))) PPC_WEAK_FUNC(sub_82F2F0F8);
PPC_FUNC_IMPL(__imp__sub_82F2F0F8) {
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
	// stw r11,29012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29012, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F120"))) PPC_WEAK_FUNC(sub_82F2F120);
PPC_FUNC_IMPL(__imp__sub_82F2F120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F124"))) PPC_WEAK_FUNC(sub_82F2F124);
PPC_FUNC_IMPL(__imp__sub_82F2F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F128"))) PPC_WEAK_FUNC(sub_82F2F128);
PPC_FUNC_IMPL(__imp__sub_82F2F128) {
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
	// stw r3,29016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F154"))) PPC_WEAK_FUNC(sub_82F2F154);
PPC_FUNC_IMPL(__imp__sub_82F2F154) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F158"))) PPC_WEAK_FUNC(sub_82F2F158);
PPC_FUNC_IMPL(__imp__sub_82F2F158) {
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
	// addi r3,r7,29020
	ctx.r3.s64 = ctx.r7.s64 + 29020;
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
	// addi r3,r6,-28648
	ctx.r3.s64 = ctx.r6.s64 + -28648;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F1D0"))) PPC_WEAK_FUNC(sub_82F2F1D0);
PPC_FUNC_IMPL(__imp__sub_82F2F1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F1D4"))) PPC_WEAK_FUNC(sub_82F2F1D4);
PPC_FUNC_IMPL(__imp__sub_82F2F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F1D8"))) PPC_WEAK_FUNC(sub_82F2F1D8);
PPC_FUNC_IMPL(__imp__sub_82F2F1D8) {
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
	// addi r3,r10,2096
	ctx.r3.s64 = ctx.r10.s64 + 2096;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29052(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29052, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F210"))) PPC_WEAK_FUNC(sub_82F2F210);
PPC_FUNC_IMPL(__imp__sub_82F2F210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F214"))) PPC_WEAK_FUNC(sub_82F2F214);
PPC_FUNC_IMPL(__imp__sub_82F2F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F218"))) PPC_WEAK_FUNC(sub_82F2F218);
PPC_FUNC_IMPL(__imp__sub_82F2F218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28640
	ctx.r3.s64 = r11.s64 + -28640;
}

__attribute__((alias("__imp__sub_82F2F220"))) PPC_WEAK_FUNC(sub_82F2F220);
PPC_FUNC_IMPL(__imp__sub_82F2F220) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F224"))) PPC_WEAK_FUNC(sub_82F2F224);
PPC_FUNC_IMPL(__imp__sub_82F2F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F228"))) PPC_WEAK_FUNC(sub_82F2F228);
PPC_FUNC_IMPL(__imp__sub_82F2F228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28632
	ctx.r3.s64 = r11.s64 + -28632;
}

__attribute__((alias("__imp__sub_82F2F230"))) PPC_WEAK_FUNC(sub_82F2F230);
PPC_FUNC_IMPL(__imp__sub_82F2F230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F234"))) PPC_WEAK_FUNC(sub_82F2F234);
PPC_FUNC_IMPL(__imp__sub_82F2F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F238"))) PPC_WEAK_FUNC(sub_82F2F238);
PPC_FUNC_IMPL(__imp__sub_82F2F238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28624
	ctx.r3.s64 = r11.s64 + -28624;
}

__attribute__((alias("__imp__sub_82F2F240"))) PPC_WEAK_FUNC(sub_82F2F240);
PPC_FUNC_IMPL(__imp__sub_82F2F240) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F244"))) PPC_WEAK_FUNC(sub_82F2F244);
PPC_FUNC_IMPL(__imp__sub_82F2F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F248"))) PPC_WEAK_FUNC(sub_82F2F248);
PPC_FUNC_IMPL(__imp__sub_82F2F248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28616
	ctx.r3.s64 = r11.s64 + -28616;
}

__attribute__((alias("__imp__sub_82F2F250"))) PPC_WEAK_FUNC(sub_82F2F250);
PPC_FUNC_IMPL(__imp__sub_82F2F250) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F254"))) PPC_WEAK_FUNC(sub_82F2F254);
PPC_FUNC_IMPL(__imp__sub_82F2F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F258"))) PPC_WEAK_FUNC(sub_82F2F258);
PPC_FUNC_IMPL(__imp__sub_82F2F258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28608
	ctx.r3.s64 = r11.s64 + -28608;
}

__attribute__((alias("__imp__sub_82F2F260"))) PPC_WEAK_FUNC(sub_82F2F260);
PPC_FUNC_IMPL(__imp__sub_82F2F260) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F264"))) PPC_WEAK_FUNC(sub_82F2F264);
PPC_FUNC_IMPL(__imp__sub_82F2F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F268"))) PPC_WEAK_FUNC(sub_82F2F268);
PPC_FUNC_IMPL(__imp__sub_82F2F268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28600
	ctx.r3.s64 = r11.s64 + -28600;
}

__attribute__((alias("__imp__sub_82F2F270"))) PPC_WEAK_FUNC(sub_82F2F270);
PPC_FUNC_IMPL(__imp__sub_82F2F270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F274"))) PPC_WEAK_FUNC(sub_82F2F274);
PPC_FUNC_IMPL(__imp__sub_82F2F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F278"))) PPC_WEAK_FUNC(sub_82F2F278);
PPC_FUNC_IMPL(__imp__sub_82F2F278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28592
	ctx.r3.s64 = r11.s64 + -28592;
}

__attribute__((alias("__imp__sub_82F2F280"))) PPC_WEAK_FUNC(sub_82F2F280);
PPC_FUNC_IMPL(__imp__sub_82F2F280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F284"))) PPC_WEAK_FUNC(sub_82F2F284);
PPC_FUNC_IMPL(__imp__sub_82F2F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F288"))) PPC_WEAK_FUNC(sub_82F2F288);
PPC_FUNC_IMPL(__imp__sub_82F2F288) {
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
	// addi r3,r10,2040
	ctx.r3.s64 = ctx.r10.s64 + 2040;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29072(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29072, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F2C0"))) PPC_WEAK_FUNC(sub_82F2F2C0);
PPC_FUNC_IMPL(__imp__sub_82F2F2C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F2C4"))) PPC_WEAK_FUNC(sub_82F2F2C4);
PPC_FUNC_IMPL(__imp__sub_82F2F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F2C8"))) PPC_WEAK_FUNC(sub_82F2F2C8);
PPC_FUNC_IMPL(__imp__sub_82F2F2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28584
	ctx.r3.s64 = r11.s64 + -28584;
}

__attribute__((alias("__imp__sub_82F2F2D0"))) PPC_WEAK_FUNC(sub_82F2F2D0);
PPC_FUNC_IMPL(__imp__sub_82F2F2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F2D4"))) PPC_WEAK_FUNC(sub_82F2F2D4);
PPC_FUNC_IMPL(__imp__sub_82F2F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F2D8"))) PPC_WEAK_FUNC(sub_82F2F2D8);
PPC_FUNC_IMPL(__imp__sub_82F2F2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28576
	ctx.r3.s64 = r11.s64 + -28576;
}

__attribute__((alias("__imp__sub_82F2F2E0"))) PPC_WEAK_FUNC(sub_82F2F2E0);
PPC_FUNC_IMPL(__imp__sub_82F2F2E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F2E4"))) PPC_WEAK_FUNC(sub_82F2F2E4);
PPC_FUNC_IMPL(__imp__sub_82F2F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F2E8"))) PPC_WEAK_FUNC(sub_82F2F2E8);
PPC_FUNC_IMPL(__imp__sub_82F2F2E8) {
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
	// addi r3,r10,1984
	ctx.r3.s64 = ctx.r10.s64 + 1984;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29076(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F320"))) PPC_WEAK_FUNC(sub_82F2F320);
PPC_FUNC_IMPL(__imp__sub_82F2F320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F324"))) PPC_WEAK_FUNC(sub_82F2F324);
PPC_FUNC_IMPL(__imp__sub_82F2F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F328"))) PPC_WEAK_FUNC(sub_82F2F328);
PPC_FUNC_IMPL(__imp__sub_82F2F328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28568
	ctx.r3.s64 = r11.s64 + -28568;
}

__attribute__((alias("__imp__sub_82F2F330"))) PPC_WEAK_FUNC(sub_82F2F330);
PPC_FUNC_IMPL(__imp__sub_82F2F330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F334"))) PPC_WEAK_FUNC(sub_82F2F334);
PPC_FUNC_IMPL(__imp__sub_82F2F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F338"))) PPC_WEAK_FUNC(sub_82F2F338);
PPC_FUNC_IMPL(__imp__sub_82F2F338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28560
	ctx.r3.s64 = r11.s64 + -28560;
}

__attribute__((alias("__imp__sub_82F2F340"))) PPC_WEAK_FUNC(sub_82F2F340);
PPC_FUNC_IMPL(__imp__sub_82F2F340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F344"))) PPC_WEAK_FUNC(sub_82F2F344);
PPC_FUNC_IMPL(__imp__sub_82F2F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F348"))) PPC_WEAK_FUNC(sub_82F2F348);
PPC_FUNC_IMPL(__imp__sub_82F2F348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28552
	ctx.r3.s64 = r11.s64 + -28552;
}

__attribute__((alias("__imp__sub_82F2F350"))) PPC_WEAK_FUNC(sub_82F2F350);
PPC_FUNC_IMPL(__imp__sub_82F2F350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F354"))) PPC_WEAK_FUNC(sub_82F2F354);
PPC_FUNC_IMPL(__imp__sub_82F2F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F358"))) PPC_WEAK_FUNC(sub_82F2F358);
PPC_FUNC_IMPL(__imp__sub_82F2F358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28544
	ctx.r3.s64 = r11.s64 + -28544;
}

__attribute__((alias("__imp__sub_82F2F360"))) PPC_WEAK_FUNC(sub_82F2F360);
PPC_FUNC_IMPL(__imp__sub_82F2F360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F364"))) PPC_WEAK_FUNC(sub_82F2F364);
PPC_FUNC_IMPL(__imp__sub_82F2F364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F368"))) PPC_WEAK_FUNC(sub_82F2F368);
PPC_FUNC_IMPL(__imp__sub_82F2F368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28536
	ctx.r3.s64 = r11.s64 + -28536;
}

__attribute__((alias("__imp__sub_82F2F370"))) PPC_WEAK_FUNC(sub_82F2F370);
PPC_FUNC_IMPL(__imp__sub_82F2F370) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F374"))) PPC_WEAK_FUNC(sub_82F2F374);
PPC_FUNC_IMPL(__imp__sub_82F2F374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F378"))) PPC_WEAK_FUNC(sub_82F2F378);
PPC_FUNC_IMPL(__imp__sub_82F2F378) {
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
	// addi r3,r10,1928
	ctx.r3.s64 = ctx.r10.s64 + 1928;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29080(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F3B0"))) PPC_WEAK_FUNC(sub_82F2F3B0);
PPC_FUNC_IMPL(__imp__sub_82F2F3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F3B4"))) PPC_WEAK_FUNC(sub_82F2F3B4);
PPC_FUNC_IMPL(__imp__sub_82F2F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F3B8"))) PPC_WEAK_FUNC(sub_82F2F3B8);
PPC_FUNC_IMPL(__imp__sub_82F2F3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28528
	ctx.r3.s64 = r11.s64 + -28528;
}

__attribute__((alias("__imp__sub_82F2F3C0"))) PPC_WEAK_FUNC(sub_82F2F3C0);
PPC_FUNC_IMPL(__imp__sub_82F2F3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F3C4"))) PPC_WEAK_FUNC(sub_82F2F3C4);
PPC_FUNC_IMPL(__imp__sub_82F2F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F3C8"))) PPC_WEAK_FUNC(sub_82F2F3C8);
PPC_FUNC_IMPL(__imp__sub_82F2F3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28520
	ctx.r3.s64 = r11.s64 + -28520;
}

__attribute__((alias("__imp__sub_82F2F3D0"))) PPC_WEAK_FUNC(sub_82F2F3D0);
PPC_FUNC_IMPL(__imp__sub_82F2F3D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F3D4"))) PPC_WEAK_FUNC(sub_82F2F3D4);
PPC_FUNC_IMPL(__imp__sub_82F2F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F3D8"))) PPC_WEAK_FUNC(sub_82F2F3D8);
PPC_FUNC_IMPL(__imp__sub_82F2F3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28512
	ctx.r3.s64 = r11.s64 + -28512;
}

__attribute__((alias("__imp__sub_82F2F3E0"))) PPC_WEAK_FUNC(sub_82F2F3E0);
PPC_FUNC_IMPL(__imp__sub_82F2F3E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F3E4"))) PPC_WEAK_FUNC(sub_82F2F3E4);
PPC_FUNC_IMPL(__imp__sub_82F2F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F3E8"))) PPC_WEAK_FUNC(sub_82F2F3E8);
PPC_FUNC_IMPL(__imp__sub_82F2F3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28504
	ctx.r3.s64 = r11.s64 + -28504;
}

__attribute__((alias("__imp__sub_82F2F3F0"))) PPC_WEAK_FUNC(sub_82F2F3F0);
PPC_FUNC_IMPL(__imp__sub_82F2F3F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F3F4"))) PPC_WEAK_FUNC(sub_82F2F3F4);
PPC_FUNC_IMPL(__imp__sub_82F2F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F3F8"))) PPC_WEAK_FUNC(sub_82F2F3F8);
PPC_FUNC_IMPL(__imp__sub_82F2F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28496
	ctx.r3.s64 = r11.s64 + -28496;
}

__attribute__((alias("__imp__sub_82F2F400"))) PPC_WEAK_FUNC(sub_82F2F400);
PPC_FUNC_IMPL(__imp__sub_82F2F400) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F404"))) PPC_WEAK_FUNC(sub_82F2F404);
PPC_FUNC_IMPL(__imp__sub_82F2F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F408"))) PPC_WEAK_FUNC(sub_82F2F408);
PPC_FUNC_IMPL(__imp__sub_82F2F408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28488
	ctx.r3.s64 = r11.s64 + -28488;
}

__attribute__((alias("__imp__sub_82F2F410"))) PPC_WEAK_FUNC(sub_82F2F410);
PPC_FUNC_IMPL(__imp__sub_82F2F410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F414"))) PPC_WEAK_FUNC(sub_82F2F414);
PPC_FUNC_IMPL(__imp__sub_82F2F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F418"))) PPC_WEAK_FUNC(sub_82F2F418);
PPC_FUNC_IMPL(__imp__sub_82F2F418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28480
	ctx.r3.s64 = r11.s64 + -28480;
}

__attribute__((alias("__imp__sub_82F2F420"))) PPC_WEAK_FUNC(sub_82F2F420);
PPC_FUNC_IMPL(__imp__sub_82F2F420) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F424"))) PPC_WEAK_FUNC(sub_82F2F424);
PPC_FUNC_IMPL(__imp__sub_82F2F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F428"))) PPC_WEAK_FUNC(sub_82F2F428);
PPC_FUNC_IMPL(__imp__sub_82F2F428) {
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
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,29100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29100, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F450"))) PPC_WEAK_FUNC(sub_82F2F450);
PPC_FUNC_IMPL(__imp__sub_82F2F450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F454"))) PPC_WEAK_FUNC(sub_82F2F454);
PPC_FUNC_IMPL(__imp__sub_82F2F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F458"))) PPC_WEAK_FUNC(sub_82F2F458);
PPC_FUNC_IMPL(__imp__sub_82F2F458) {
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
	// addi r3,r10,960
	ctx.r3.s64 = ctx.r10.s64 + 960;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F490"))) PPC_WEAK_FUNC(sub_82F2F490);
PPC_FUNC_IMPL(__imp__sub_82F2F490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F494"))) PPC_WEAK_FUNC(sub_82F2F494);
PPC_FUNC_IMPL(__imp__sub_82F2F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F498"))) PPC_WEAK_FUNC(sub_82F2F498);
PPC_FUNC_IMPL(__imp__sub_82F2F498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28472
	ctx.r3.s64 = r11.s64 + -28472;
}

__attribute__((alias("__imp__sub_82F2F4A0"))) PPC_WEAK_FUNC(sub_82F2F4A0);
PPC_FUNC_IMPL(__imp__sub_82F2F4A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F4A4"))) PPC_WEAK_FUNC(sub_82F2F4A4);
PPC_FUNC_IMPL(__imp__sub_82F2F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F4A8"))) PPC_WEAK_FUNC(sub_82F2F4A8);
PPC_FUNC_IMPL(__imp__sub_82F2F4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28464
	ctx.r3.s64 = r11.s64 + -28464;
}

__attribute__((alias("__imp__sub_82F2F4B0"))) PPC_WEAK_FUNC(sub_82F2F4B0);
PPC_FUNC_IMPL(__imp__sub_82F2F4B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F4B4"))) PPC_WEAK_FUNC(sub_82F2F4B4);
PPC_FUNC_IMPL(__imp__sub_82F2F4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F4B8"))) PPC_WEAK_FUNC(sub_82F2F4B8);
PPC_FUNC_IMPL(__imp__sub_82F2F4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28456
	ctx.r3.s64 = r11.s64 + -28456;
}

__attribute__((alias("__imp__sub_82F2F4C0"))) PPC_WEAK_FUNC(sub_82F2F4C0);
PPC_FUNC_IMPL(__imp__sub_82F2F4C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F4C4"))) PPC_WEAK_FUNC(sub_82F2F4C4);
PPC_FUNC_IMPL(__imp__sub_82F2F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F4C8"))) PPC_WEAK_FUNC(sub_82F2F4C8);
PPC_FUNC_IMPL(__imp__sub_82F2F4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28448
	ctx.r3.s64 = r11.s64 + -28448;
}

__attribute__((alias("__imp__sub_82F2F4D0"))) PPC_WEAK_FUNC(sub_82F2F4D0);
PPC_FUNC_IMPL(__imp__sub_82F2F4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F4D4"))) PPC_WEAK_FUNC(sub_82F2F4D4);
PPC_FUNC_IMPL(__imp__sub_82F2F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F4D8"))) PPC_WEAK_FUNC(sub_82F2F4D8);
PPC_FUNC_IMPL(__imp__sub_82F2F4D8) {
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
	// addi r3,r10,912
	ctx.r3.s64 = ctx.r10.s64 + 912;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F510"))) PPC_WEAK_FUNC(sub_82F2F510);
PPC_FUNC_IMPL(__imp__sub_82F2F510) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F514"))) PPC_WEAK_FUNC(sub_82F2F514);
PPC_FUNC_IMPL(__imp__sub_82F2F514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F518"))) PPC_WEAK_FUNC(sub_82F2F518);
PPC_FUNC_IMPL(__imp__sub_82F2F518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28440
	ctx.r3.s64 = r11.s64 + -28440;
}

__attribute__((alias("__imp__sub_82F2F520"))) PPC_WEAK_FUNC(sub_82F2F520);
PPC_FUNC_IMPL(__imp__sub_82F2F520) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F524"))) PPC_WEAK_FUNC(sub_82F2F524);
PPC_FUNC_IMPL(__imp__sub_82F2F524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F528"))) PPC_WEAK_FUNC(sub_82F2F528);
PPC_FUNC_IMPL(__imp__sub_82F2F528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28432
	ctx.r3.s64 = r11.s64 + -28432;
}

__attribute__((alias("__imp__sub_82F2F530"))) PPC_WEAK_FUNC(sub_82F2F530);
PPC_FUNC_IMPL(__imp__sub_82F2F530) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F534"))) PPC_WEAK_FUNC(sub_82F2F534);
PPC_FUNC_IMPL(__imp__sub_82F2F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F538"))) PPC_WEAK_FUNC(sub_82F2F538);
PPC_FUNC_IMPL(__imp__sub_82F2F538) {
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
	// addi r3,r10,792
	ctx.r3.s64 = ctx.r10.s64 + 792;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29112(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29112, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F570"))) PPC_WEAK_FUNC(sub_82F2F570);
PPC_FUNC_IMPL(__imp__sub_82F2F570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F574"))) PPC_WEAK_FUNC(sub_82F2F574);
PPC_FUNC_IMPL(__imp__sub_82F2F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F578"))) PPC_WEAK_FUNC(sub_82F2F578);
PPC_FUNC_IMPL(__imp__sub_82F2F578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28424
	ctx.r3.s64 = r11.s64 + -28424;
}

__attribute__((alias("__imp__sub_82F2F580"))) PPC_WEAK_FUNC(sub_82F2F580);
PPC_FUNC_IMPL(__imp__sub_82F2F580) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F584"))) PPC_WEAK_FUNC(sub_82F2F584);
PPC_FUNC_IMPL(__imp__sub_82F2F584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F588"))) PPC_WEAK_FUNC(sub_82F2F588);
PPC_FUNC_IMPL(__imp__sub_82F2F588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28416
	ctx.r3.s64 = r11.s64 + -28416;
}

__attribute__((alias("__imp__sub_82F2F590"))) PPC_WEAK_FUNC(sub_82F2F590);
PPC_FUNC_IMPL(__imp__sub_82F2F590) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F594"))) PPC_WEAK_FUNC(sub_82F2F594);
PPC_FUNC_IMPL(__imp__sub_82F2F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F598"))) PPC_WEAK_FUNC(sub_82F2F598);
PPC_FUNC_IMPL(__imp__sub_82F2F598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28408
	ctx.r3.s64 = r11.s64 + -28408;
}

__attribute__((alias("__imp__sub_82F2F5A0"))) PPC_WEAK_FUNC(sub_82F2F5A0);
PPC_FUNC_IMPL(__imp__sub_82F2F5A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F5A4"))) PPC_WEAK_FUNC(sub_82F2F5A4);
PPC_FUNC_IMPL(__imp__sub_82F2F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F5A8"))) PPC_WEAK_FUNC(sub_82F2F5A8);
PPC_FUNC_IMPL(__imp__sub_82F2F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28400
	ctx.r3.s64 = r11.s64 + -28400;
}

__attribute__((alias("__imp__sub_82F2F5B0"))) PPC_WEAK_FUNC(sub_82F2F5B0);
PPC_FUNC_IMPL(__imp__sub_82F2F5B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F5B4"))) PPC_WEAK_FUNC(sub_82F2F5B4);
PPC_FUNC_IMPL(__imp__sub_82F2F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F5B8"))) PPC_WEAK_FUNC(sub_82F2F5B8);
PPC_FUNC_IMPL(__imp__sub_82F2F5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28392
	ctx.r3.s64 = r11.s64 + -28392;
}

__attribute__((alias("__imp__sub_82F2F5C0"))) PPC_WEAK_FUNC(sub_82F2F5C0);
PPC_FUNC_IMPL(__imp__sub_82F2F5C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F5C4"))) PPC_WEAK_FUNC(sub_82F2F5C4);
PPC_FUNC_IMPL(__imp__sub_82F2F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F5C8"))) PPC_WEAK_FUNC(sub_82F2F5C8);
PPC_FUNC_IMPL(__imp__sub_82F2F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28384
	ctx.r3.s64 = r11.s64 + -28384;
}

__attribute__((alias("__imp__sub_82F2F5D0"))) PPC_WEAK_FUNC(sub_82F2F5D0);
PPC_FUNC_IMPL(__imp__sub_82F2F5D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F5D4"))) PPC_WEAK_FUNC(sub_82F2F5D4);
PPC_FUNC_IMPL(__imp__sub_82F2F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F5D8"))) PPC_WEAK_FUNC(sub_82F2F5D8);
PPC_FUNC_IMPL(__imp__sub_82F2F5D8) {
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
	// addi r3,r10,852
	ctx.r3.s64 = ctx.r10.s64 + 852;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F610"))) PPC_WEAK_FUNC(sub_82F2F610);
PPC_FUNC_IMPL(__imp__sub_82F2F610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F614"))) PPC_WEAK_FUNC(sub_82F2F614);
PPC_FUNC_IMPL(__imp__sub_82F2F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F618"))) PPC_WEAK_FUNC(sub_82F2F618);
PPC_FUNC_IMPL(__imp__sub_82F2F618) {
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
	// addi r3,r10,4544
	ctx.r3.s64 = ctx.r10.s64 + 4544;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F650"))) PPC_WEAK_FUNC(sub_82F2F650);
PPC_FUNC_IMPL(__imp__sub_82F2F650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F654"))) PPC_WEAK_FUNC(sub_82F2F654);
PPC_FUNC_IMPL(__imp__sub_82F2F654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F658"))) PPC_WEAK_FUNC(sub_82F2F658);
PPC_FUNC_IMPL(__imp__sub_82F2F658) {
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
	// addi r3,r10,4504
	ctx.r3.s64 = ctx.r10.s64 + 4504;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29152, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F690"))) PPC_WEAK_FUNC(sub_82F2F690);
PPC_FUNC_IMPL(__imp__sub_82F2F690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F694"))) PPC_WEAK_FUNC(sub_82F2F694);
PPC_FUNC_IMPL(__imp__sub_82F2F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F698"))) PPC_WEAK_FUNC(sub_82F2F698);
PPC_FUNC_IMPL(__imp__sub_82F2F698) {
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
	// addi r3,r10,-6516
	ctx.r3.s64 = ctx.r10.s64 + -6516;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29148, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F6D0"))) PPC_WEAK_FUNC(sub_82F2F6D0);
PPC_FUNC_IMPL(__imp__sub_82F2F6D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F6D4"))) PPC_WEAK_FUNC(sub_82F2F6D4);
PPC_FUNC_IMPL(__imp__sub_82F2F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F6D8"))) PPC_WEAK_FUNC(sub_82F2F6D8);
PPC_FUNC_IMPL(__imp__sub_82F2F6D8) {
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
	// addi r3,r10,-6472
	ctx.r3.s64 = ctx.r10.s64 + -6472;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F710"))) PPC_WEAK_FUNC(sub_82F2F710);
PPC_FUNC_IMPL(__imp__sub_82F2F710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F714"))) PPC_WEAK_FUNC(sub_82F2F714);
PPC_FUNC_IMPL(__imp__sub_82F2F714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F718"))) PPC_WEAK_FUNC(sub_82F2F718);
PPC_FUNC_IMPL(__imp__sub_82F2F718) {
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
	// addi r3,r10,-6428
	ctx.r3.s64 = ctx.r10.s64 + -6428;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F750"))) PPC_WEAK_FUNC(sub_82F2F750);
PPC_FUNC_IMPL(__imp__sub_82F2F750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F754"))) PPC_WEAK_FUNC(sub_82F2F754);
PPC_FUNC_IMPL(__imp__sub_82F2F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F758"))) PPC_WEAK_FUNC(sub_82F2F758);
PPC_FUNC_IMPL(__imp__sub_82F2F758) {
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
	// addi r3,r10,4588
	ctx.r3.s64 = ctx.r10.s64 + 4588;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29156, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F790"))) PPC_WEAK_FUNC(sub_82F2F790);
PPC_FUNC_IMPL(__imp__sub_82F2F790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F794"))) PPC_WEAK_FUNC(sub_82F2F794);
PPC_FUNC_IMPL(__imp__sub_82F2F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F798"))) PPC_WEAK_FUNC(sub_82F2F798);
PPC_FUNC_IMPL(__imp__sub_82F2F798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28376
	ctx.r3.s64 = r11.s64 + -28376;
}

__attribute__((alias("__imp__sub_82F2F7A0"))) PPC_WEAK_FUNC(sub_82F2F7A0);
PPC_FUNC_IMPL(__imp__sub_82F2F7A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F7A4"))) PPC_WEAK_FUNC(sub_82F2F7A4);
PPC_FUNC_IMPL(__imp__sub_82F2F7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F7A8"))) PPC_WEAK_FUNC(sub_82F2F7A8);
PPC_FUNC_IMPL(__imp__sub_82F2F7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28368
	ctx.r3.s64 = r11.s64 + -28368;
}

__attribute__((alias("__imp__sub_82F2F7B0"))) PPC_WEAK_FUNC(sub_82F2F7B0);
PPC_FUNC_IMPL(__imp__sub_82F2F7B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F7B4"))) PPC_WEAK_FUNC(sub_82F2F7B4);
PPC_FUNC_IMPL(__imp__sub_82F2F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F7B8"))) PPC_WEAK_FUNC(sub_82F2F7B8);
PPC_FUNC_IMPL(__imp__sub_82F2F7B8) {
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
	// addi r3,r10,4640
	ctx.r3.s64 = ctx.r10.s64 + 4640;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29160, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F7F0"))) PPC_WEAK_FUNC(sub_82F2F7F0);
PPC_FUNC_IMPL(__imp__sub_82F2F7F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F7F4"))) PPC_WEAK_FUNC(sub_82F2F7F4);
PPC_FUNC_IMPL(__imp__sub_82F2F7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F7F8"))) PPC_WEAK_FUNC(sub_82F2F7F8);
PPC_FUNC_IMPL(__imp__sub_82F2F7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28360
	ctx.r3.s64 = r11.s64 + -28360;
}

__attribute__((alias("__imp__sub_82F2F800"))) PPC_WEAK_FUNC(sub_82F2F800);
PPC_FUNC_IMPL(__imp__sub_82F2F800) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F804"))) PPC_WEAK_FUNC(sub_82F2F804);
PPC_FUNC_IMPL(__imp__sub_82F2F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F808"))) PPC_WEAK_FUNC(sub_82F2F808);
PPC_FUNC_IMPL(__imp__sub_82F2F808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28352
	ctx.r3.s64 = r11.s64 + -28352;
}

__attribute__((alias("__imp__sub_82F2F810"))) PPC_WEAK_FUNC(sub_82F2F810);
PPC_FUNC_IMPL(__imp__sub_82F2F810) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F814"))) PPC_WEAK_FUNC(sub_82F2F814);
PPC_FUNC_IMPL(__imp__sub_82F2F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F818"))) PPC_WEAK_FUNC(sub_82F2F818);
PPC_FUNC_IMPL(__imp__sub_82F2F818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28344
	ctx.r3.s64 = r11.s64 + -28344;
}

__attribute__((alias("__imp__sub_82F2F820"))) PPC_WEAK_FUNC(sub_82F2F820);
PPC_FUNC_IMPL(__imp__sub_82F2F820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F824"))) PPC_WEAK_FUNC(sub_82F2F824);
PPC_FUNC_IMPL(__imp__sub_82F2F824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F828"))) PPC_WEAK_FUNC(sub_82F2F828);
PPC_FUNC_IMPL(__imp__sub_82F2F828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28336
	ctx.r3.s64 = r11.s64 + -28336;
}

__attribute__((alias("__imp__sub_82F2F830"))) PPC_WEAK_FUNC(sub_82F2F830);
PPC_FUNC_IMPL(__imp__sub_82F2F830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F834"))) PPC_WEAK_FUNC(sub_82F2F834);
PPC_FUNC_IMPL(__imp__sub_82F2F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F838"))) PPC_WEAK_FUNC(sub_82F2F838);
PPC_FUNC_IMPL(__imp__sub_82F2F838) {
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
	// addi r3,r10,4692
	ctx.r3.s64 = ctx.r10.s64 + 4692;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F870"))) PPC_WEAK_FUNC(sub_82F2F870);
PPC_FUNC_IMPL(__imp__sub_82F2F870) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F874"))) PPC_WEAK_FUNC(sub_82F2F874);
PPC_FUNC_IMPL(__imp__sub_82F2F874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F878"))) PPC_WEAK_FUNC(sub_82F2F878);
PPC_FUNC_IMPL(__imp__sub_82F2F878) {
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
	// addi r3,r10,3520
	ctx.r3.s64 = ctx.r10.s64 + 3520;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29184(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F8B0"))) PPC_WEAK_FUNC(sub_82F2F8B0);
PPC_FUNC_IMPL(__imp__sub_82F2F8B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F8B4"))) PPC_WEAK_FUNC(sub_82F2F8B4);
PPC_FUNC_IMPL(__imp__sub_82F2F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F8B8"))) PPC_WEAK_FUNC(sub_82F2F8B8);
PPC_FUNC_IMPL(__imp__sub_82F2F8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28328
	ctx.r3.s64 = r11.s64 + -28328;
}

__attribute__((alias("__imp__sub_82F2F8C0"))) PPC_WEAK_FUNC(sub_82F2F8C0);
PPC_FUNC_IMPL(__imp__sub_82F2F8C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F8C4"))) PPC_WEAK_FUNC(sub_82F2F8C4);
PPC_FUNC_IMPL(__imp__sub_82F2F8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F8C8"))) PPC_WEAK_FUNC(sub_82F2F8C8);
PPC_FUNC_IMPL(__imp__sub_82F2F8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28320
	ctx.r3.s64 = r11.s64 + -28320;
}

__attribute__((alias("__imp__sub_82F2F8D0"))) PPC_WEAK_FUNC(sub_82F2F8D0);
PPC_FUNC_IMPL(__imp__sub_82F2F8D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F8D4"))) PPC_WEAK_FUNC(sub_82F2F8D4);
PPC_FUNC_IMPL(__imp__sub_82F2F8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F8D8"))) PPC_WEAK_FUNC(sub_82F2F8D8);
PPC_FUNC_IMPL(__imp__sub_82F2F8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28312
	ctx.r3.s64 = r11.s64 + -28312;
}

__attribute__((alias("__imp__sub_82F2F8E0"))) PPC_WEAK_FUNC(sub_82F2F8E0);
PPC_FUNC_IMPL(__imp__sub_82F2F8E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F8E4"))) PPC_WEAK_FUNC(sub_82F2F8E4);
PPC_FUNC_IMPL(__imp__sub_82F2F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F8E8"))) PPC_WEAK_FUNC(sub_82F2F8E8);
PPC_FUNC_IMPL(__imp__sub_82F2F8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28304
	ctx.r3.s64 = r11.s64 + -28304;
}

__attribute__((alias("__imp__sub_82F2F8F0"))) PPC_WEAK_FUNC(sub_82F2F8F0);
PPC_FUNC_IMPL(__imp__sub_82F2F8F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F8F4"))) PPC_WEAK_FUNC(sub_82F2F8F4);
PPC_FUNC_IMPL(__imp__sub_82F2F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F8F8"))) PPC_WEAK_FUNC(sub_82F2F8F8);
PPC_FUNC_IMPL(__imp__sub_82F2F8F8) {
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
	// addi r3,r10,3352
	ctx.r3.s64 = ctx.r10.s64 + 3352;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F930"))) PPC_WEAK_FUNC(sub_82F2F930);
PPC_FUNC_IMPL(__imp__sub_82F2F930) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F934"))) PPC_WEAK_FUNC(sub_82F2F934);
PPC_FUNC_IMPL(__imp__sub_82F2F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F938"))) PPC_WEAK_FUNC(sub_82F2F938);
PPC_FUNC_IMPL(__imp__sub_82F2F938) {
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
	// addi r3,r10,-5568
	ctx.r3.s64 = ctx.r10.s64 + -5568;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29192(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F970"))) PPC_WEAK_FUNC(sub_82F2F970);
PPC_FUNC_IMPL(__imp__sub_82F2F970) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F974"))) PPC_WEAK_FUNC(sub_82F2F974);
PPC_FUNC_IMPL(__imp__sub_82F2F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F978"))) PPC_WEAK_FUNC(sub_82F2F978);
PPC_FUNC_IMPL(__imp__sub_82F2F978) {
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
	// addi r3,r10,-5480
	ctx.r3.s64 = ctx.r10.s64 + -5480;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29188(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2F9B0"))) PPC_WEAK_FUNC(sub_82F2F9B0);
PPC_FUNC_IMPL(__imp__sub_82F2F9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2F9B4"))) PPC_WEAK_FUNC(sub_82F2F9B4);
PPC_FUNC_IMPL(__imp__sub_82F2F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F9B8"))) PPC_WEAK_FUNC(sub_82F2F9B8);
PPC_FUNC_IMPL(__imp__sub_82F2F9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28296
	ctx.r3.s64 = r11.s64 + -28296;
}

__attribute__((alias("__imp__sub_82F2F9C0"))) PPC_WEAK_FUNC(sub_82F2F9C0);
PPC_FUNC_IMPL(__imp__sub_82F2F9C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F9C4"))) PPC_WEAK_FUNC(sub_82F2F9C4);
PPC_FUNC_IMPL(__imp__sub_82F2F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F9C8"))) PPC_WEAK_FUNC(sub_82F2F9C8);
PPC_FUNC_IMPL(__imp__sub_82F2F9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28288
	ctx.r3.s64 = r11.s64 + -28288;
}

__attribute__((alias("__imp__sub_82F2F9D0"))) PPC_WEAK_FUNC(sub_82F2F9D0);
PPC_FUNC_IMPL(__imp__sub_82F2F9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F9D4"))) PPC_WEAK_FUNC(sub_82F2F9D4);
PPC_FUNC_IMPL(__imp__sub_82F2F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F9D8"))) PPC_WEAK_FUNC(sub_82F2F9D8);
PPC_FUNC_IMPL(__imp__sub_82F2F9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28280
	ctx.r3.s64 = r11.s64 + -28280;
}

__attribute__((alias("__imp__sub_82F2F9E0"))) PPC_WEAK_FUNC(sub_82F2F9E0);
PPC_FUNC_IMPL(__imp__sub_82F2F9E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F9E4"))) PPC_WEAK_FUNC(sub_82F2F9E4);
PPC_FUNC_IMPL(__imp__sub_82F2F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F9E8"))) PPC_WEAK_FUNC(sub_82F2F9E8);
PPC_FUNC_IMPL(__imp__sub_82F2F9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28272
	ctx.r3.s64 = r11.s64 + -28272;
}

__attribute__((alias("__imp__sub_82F2F9F0"))) PPC_WEAK_FUNC(sub_82F2F9F0);
PPC_FUNC_IMPL(__imp__sub_82F2F9F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2F9F4"))) PPC_WEAK_FUNC(sub_82F2F9F4);
PPC_FUNC_IMPL(__imp__sub_82F2F9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2F9F8"))) PPC_WEAK_FUNC(sub_82F2F9F8);
PPC_FUNC_IMPL(__imp__sub_82F2F9F8) {
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
	// addi r3,r10,3296
	ctx.r3.s64 = ctx.r10.s64 + 3296;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FA30"))) PPC_WEAK_FUNC(sub_82F2FA30);
PPC_FUNC_IMPL(__imp__sub_82F2FA30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FA34"))) PPC_WEAK_FUNC(sub_82F2FA34);
PPC_FUNC_IMPL(__imp__sub_82F2FA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FA38"))) PPC_WEAK_FUNC(sub_82F2FA38);
PPC_FUNC_IMPL(__imp__sub_82F2FA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28264
	ctx.r3.s64 = r11.s64 + -28264;
}

__attribute__((alias("__imp__sub_82F2FA40"))) PPC_WEAK_FUNC(sub_82F2FA40);
PPC_FUNC_IMPL(__imp__sub_82F2FA40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FA44"))) PPC_WEAK_FUNC(sub_82F2FA44);
PPC_FUNC_IMPL(__imp__sub_82F2FA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FA48"))) PPC_WEAK_FUNC(sub_82F2FA48);
PPC_FUNC_IMPL(__imp__sub_82F2FA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28256
	ctx.r3.s64 = r11.s64 + -28256;
}

__attribute__((alias("__imp__sub_82F2FA50"))) PPC_WEAK_FUNC(sub_82F2FA50);
PPC_FUNC_IMPL(__imp__sub_82F2FA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FA54"))) PPC_WEAK_FUNC(sub_82F2FA54);
PPC_FUNC_IMPL(__imp__sub_82F2FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FA58"))) PPC_WEAK_FUNC(sub_82F2FA58);
PPC_FUNC_IMPL(__imp__sub_82F2FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28248
	ctx.r3.s64 = r11.s64 + -28248;
}

__attribute__((alias("__imp__sub_82F2FA60"))) PPC_WEAK_FUNC(sub_82F2FA60);
PPC_FUNC_IMPL(__imp__sub_82F2FA60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FA64"))) PPC_WEAK_FUNC(sub_82F2FA64);
PPC_FUNC_IMPL(__imp__sub_82F2FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FA68"))) PPC_WEAK_FUNC(sub_82F2FA68);
PPC_FUNC_IMPL(__imp__sub_82F2FA68) {
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
	// addi r3,r10,3400
	ctx.r3.s64 = ctx.r10.s64 + 3400;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,29204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2FAA0"))) PPC_WEAK_FUNC(sub_82F2FAA0);
PPC_FUNC_IMPL(__imp__sub_82F2FAA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2FAA4"))) PPC_WEAK_FUNC(sub_82F2FAA4);
PPC_FUNC_IMPL(__imp__sub_82F2FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FAA8"))) PPC_WEAK_FUNC(sub_82F2FAA8);
PPC_FUNC_IMPL(__imp__sub_82F2FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28240
	ctx.r3.s64 = r11.s64 + -28240;
}

__attribute__((alias("__imp__sub_82F2FAB0"))) PPC_WEAK_FUNC(sub_82F2FAB0);
PPC_FUNC_IMPL(__imp__sub_82F2FAB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FAB4"))) PPC_WEAK_FUNC(sub_82F2FAB4);
PPC_FUNC_IMPL(__imp__sub_82F2FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FAB8"))) PPC_WEAK_FUNC(sub_82F2FAB8);
PPC_FUNC_IMPL(__imp__sub_82F2FAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28232
	ctx.r3.s64 = r11.s64 + -28232;
}

__attribute__((alias("__imp__sub_82F2FAC0"))) PPC_WEAK_FUNC(sub_82F2FAC0);
PPC_FUNC_IMPL(__imp__sub_82F2FAC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FAC4"))) PPC_WEAK_FUNC(sub_82F2FAC4);
PPC_FUNC_IMPL(__imp__sub_82F2FAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FAC8"))) PPC_WEAK_FUNC(sub_82F2FAC8);
PPC_FUNC_IMPL(__imp__sub_82F2FAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28224
	ctx.r3.s64 = r11.s64 + -28224;
}

__attribute__((alias("__imp__sub_82F2FAD0"))) PPC_WEAK_FUNC(sub_82F2FAD0);
PPC_FUNC_IMPL(__imp__sub_82F2FAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FAD4"))) PPC_WEAK_FUNC(sub_82F2FAD4);
PPC_FUNC_IMPL(__imp__sub_82F2FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2FAD8"))) PPC_WEAK_FUNC(sub_82F2FAD8);
PPC_FUNC_IMPL(__imp__sub_82F2FAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-28216
	ctx.r3.s64 = r11.s64 + -28216;
}

__attribute__((alias("__imp__sub_82F2FAE0"))) PPC_WEAK_FUNC(sub_82F2FAE0);
PPC_FUNC_IMPL(__imp__sub_82F2FAE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2FAE4"))) PPC_WEAK_FUNC(sub_82F2FAE4);
PPC_FUNC_IMPL(__imp__sub_82F2FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

