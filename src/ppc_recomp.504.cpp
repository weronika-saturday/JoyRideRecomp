#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F2C908"))) PPC_WEAK_FUNC(sub_82F2C908);
PPC_FUNC_IMPL(__imp__sub_82F2C908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C90C"))) PPC_WEAK_FUNC(sub_82F2C90C);
PPC_FUNC_IMPL(__imp__sub_82F2C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C910"))) PPC_WEAK_FUNC(sub_82F2C910);
PPC_FUNC_IMPL(__imp__sub_82F2C910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29864
	ctx.r3.s64 = r11.s64 + -29864;
}

__attribute__((alias("__imp__sub_82F2C918"))) PPC_WEAK_FUNC(sub_82F2C918);
PPC_FUNC_IMPL(__imp__sub_82F2C918) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C91C"))) PPC_WEAK_FUNC(sub_82F2C91C);
PPC_FUNC_IMPL(__imp__sub_82F2C91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C920"))) PPC_WEAK_FUNC(sub_82F2C920);
PPC_FUNC_IMPL(__imp__sub_82F2C920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29856
	ctx.r3.s64 = r11.s64 + -29856;
}

__attribute__((alias("__imp__sub_82F2C928"))) PPC_WEAK_FUNC(sub_82F2C928);
PPC_FUNC_IMPL(__imp__sub_82F2C928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C92C"))) PPC_WEAK_FUNC(sub_82F2C92C);
PPC_FUNC_IMPL(__imp__sub_82F2C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C930"))) PPC_WEAK_FUNC(sub_82F2C930);
PPC_FUNC_IMPL(__imp__sub_82F2C930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29848
	ctx.r3.s64 = r11.s64 + -29848;
}

__attribute__((alias("__imp__sub_82F2C938"))) PPC_WEAK_FUNC(sub_82F2C938);
PPC_FUNC_IMPL(__imp__sub_82F2C938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C93C"))) PPC_WEAK_FUNC(sub_82F2C93C);
PPC_FUNC_IMPL(__imp__sub_82F2C93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C940"))) PPC_WEAK_FUNC(sub_82F2C940);
PPC_FUNC_IMPL(__imp__sub_82F2C940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29840
	ctx.r3.s64 = r11.s64 + -29840;
}

__attribute__((alias("__imp__sub_82F2C948"))) PPC_WEAK_FUNC(sub_82F2C948);
PPC_FUNC_IMPL(__imp__sub_82F2C948) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C94C"))) PPC_WEAK_FUNC(sub_82F2C94C);
PPC_FUNC_IMPL(__imp__sub_82F2C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C950"))) PPC_WEAK_FUNC(sub_82F2C950);
PPC_FUNC_IMPL(__imp__sub_82F2C950) {
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
	// addi r3,r10,-24452
	ctx.r3.s64 = ctx.r10.s64 + -24452;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28032(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28032, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C988"))) PPC_WEAK_FUNC(sub_82F2C988);
PPC_FUNC_IMPL(__imp__sub_82F2C988) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C98C"))) PPC_WEAK_FUNC(sub_82F2C98C);
PPC_FUNC_IMPL(__imp__sub_82F2C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C990"))) PPC_WEAK_FUNC(sub_82F2C990);
PPC_FUNC_IMPL(__imp__sub_82F2C990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29832
	ctx.r3.s64 = r11.s64 + -29832;
}

__attribute__((alias("__imp__sub_82F2C998"))) PPC_WEAK_FUNC(sub_82F2C998);
PPC_FUNC_IMPL(__imp__sub_82F2C998) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C99C"))) PPC_WEAK_FUNC(sub_82F2C99C);
PPC_FUNC_IMPL(__imp__sub_82F2C99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C9A0"))) PPC_WEAK_FUNC(sub_82F2C9A0);
PPC_FUNC_IMPL(__imp__sub_82F2C9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29824
	ctx.r3.s64 = r11.s64 + -29824;
}

__attribute__((alias("__imp__sub_82F2C9A8"))) PPC_WEAK_FUNC(sub_82F2C9A8);
PPC_FUNC_IMPL(__imp__sub_82F2C9A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C9AC"))) PPC_WEAK_FUNC(sub_82F2C9AC);
PPC_FUNC_IMPL(__imp__sub_82F2C9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C9B0"))) PPC_WEAK_FUNC(sub_82F2C9B0);
PPC_FUNC_IMPL(__imp__sub_82F2C9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29816
	ctx.r3.s64 = r11.s64 + -29816;
}

__attribute__((alias("__imp__sub_82F2C9B8"))) PPC_WEAK_FUNC(sub_82F2C9B8);
PPC_FUNC_IMPL(__imp__sub_82F2C9B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C9BC"))) PPC_WEAK_FUNC(sub_82F2C9BC);
PPC_FUNC_IMPL(__imp__sub_82F2C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C9C0"))) PPC_WEAK_FUNC(sub_82F2C9C0);
PPC_FUNC_IMPL(__imp__sub_82F2C9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29808
	ctx.r3.s64 = r11.s64 + -29808;
}

__attribute__((alias("__imp__sub_82F2C9C8"))) PPC_WEAK_FUNC(sub_82F2C9C8);
PPC_FUNC_IMPL(__imp__sub_82F2C9C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2C9CC"))) PPC_WEAK_FUNC(sub_82F2C9CC);
PPC_FUNC_IMPL(__imp__sub_82F2C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2C9D0"))) PPC_WEAK_FUNC(sub_82F2C9D0);
PPC_FUNC_IMPL(__imp__sub_82F2C9D0) {
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
	// stw r11,28112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28112, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2C9F8"))) PPC_WEAK_FUNC(sub_82F2C9F8);
PPC_FUNC_IMPL(__imp__sub_82F2C9F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2C9FC"))) PPC_WEAK_FUNC(sub_82F2C9FC);
PPC_FUNC_IMPL(__imp__sub_82F2C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CA00"))) PPC_WEAK_FUNC(sub_82F2CA00);
PPC_FUNC_IMPL(__imp__sub_82F2CA00) {
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
	// stw r3,28040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28040, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CA2C"))) PPC_WEAK_FUNC(sub_82F2CA2C);
PPC_FUNC_IMPL(__imp__sub_82F2CA2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CA30"))) PPC_WEAK_FUNC(sub_82F2CA30);
PPC_FUNC_IMPL(__imp__sub_82F2CA30) {
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
	// addi r3,r7,28044
	ctx.r3.s64 = ctx.r7.s64 + 28044;
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
	// addi r3,r6,-29800
	ctx.r3.s64 = ctx.r6.s64 + -29800;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CAA8"))) PPC_WEAK_FUNC(sub_82F2CAA8);
PPC_FUNC_IMPL(__imp__sub_82F2CAA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CAAC"))) PPC_WEAK_FUNC(sub_82F2CAAC);
PPC_FUNC_IMPL(__imp__sub_82F2CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CAB0"))) PPC_WEAK_FUNC(sub_82F2CAB0);
PPC_FUNC_IMPL(__imp__sub_82F2CAB0) {
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
	// stw r3,28076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28076, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CADC"))) PPC_WEAK_FUNC(sub_82F2CADC);
PPC_FUNC_IMPL(__imp__sub_82F2CADC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CAE0"))) PPC_WEAK_FUNC(sub_82F2CAE0);
PPC_FUNC_IMPL(__imp__sub_82F2CAE0) {
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
	// stw r3,28080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28080, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CB0C"))) PPC_WEAK_FUNC(sub_82F2CB0C);
PPC_FUNC_IMPL(__imp__sub_82F2CB0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB10"))) PPC_WEAK_FUNC(sub_82F2CB10);
PPC_FUNC_IMPL(__imp__sub_82F2CB10) {
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
	// stw r3,28084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28084, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CB3C"))) PPC_WEAK_FUNC(sub_82F2CB3C);
PPC_FUNC_IMPL(__imp__sub_82F2CB3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB40"))) PPC_WEAK_FUNC(sub_82F2CB40);
PPC_FUNC_IMPL(__imp__sub_82F2CB40) {
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
	// addi r3,r11,-13984
	ctx.r3.s64 = r11.s64 + -13984;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28088, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CB6C"))) PPC_WEAK_FUNC(sub_82F2CB6C);
PPC_FUNC_IMPL(__imp__sub_82F2CB6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CB70"))) PPC_WEAK_FUNC(sub_82F2CB70);
PPC_FUNC_IMPL(__imp__sub_82F2CB70) {
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
	// addi r3,r11,-13972
	ctx.r3.s64 = r11.s64 + -13972;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28092, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CB9C"))) PPC_WEAK_FUNC(sub_82F2CB9C);
PPC_FUNC_IMPL(__imp__sub_82F2CB9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CBA0"))) PPC_WEAK_FUNC(sub_82F2CBA0);
PPC_FUNC_IMPL(__imp__sub_82F2CBA0) {
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
	// addi r3,r11,-13956
	ctx.r3.s64 = r11.s64 + -13956;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28096(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28096, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CBCC"))) PPC_WEAK_FUNC(sub_82F2CBCC);
PPC_FUNC_IMPL(__imp__sub_82F2CBCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CBD0"))) PPC_WEAK_FUNC(sub_82F2CBD0);
PPC_FUNC_IMPL(__imp__sub_82F2CBD0) {
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
	// addi r3,r11,-19628
	ctx.r3.s64 = r11.s64 + -19628;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28100, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CBFC"))) PPC_WEAK_FUNC(sub_82F2CBFC);
PPC_FUNC_IMPL(__imp__sub_82F2CBFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC00"))) PPC_WEAK_FUNC(sub_82F2CC00);
PPC_FUNC_IMPL(__imp__sub_82F2CC00) {
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
	// addi r3,r11,-16756
	ctx.r3.s64 = r11.s64 + -16756;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CC2C"))) PPC_WEAK_FUNC(sub_82F2CC2C);
PPC_FUNC_IMPL(__imp__sub_82F2CC2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC30"))) PPC_WEAK_FUNC(sub_82F2CC30);
PPC_FUNC_IMPL(__imp__sub_82F2CC30) {
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
	// addi r3,r11,-13944
	ctx.r3.s64 = r11.s64 + -13944;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28108, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CC5C"))) PPC_WEAK_FUNC(sub_82F2CC5C);
PPC_FUNC_IMPL(__imp__sub_82F2CC5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC60"))) PPC_WEAK_FUNC(sub_82F2CC60);
PPC_FUNC_IMPL(__imp__sub_82F2CC60) {
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
	// addi r3,r10,1516
	ctx.r3.s64 = ctx.r10.s64 + 1516;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28036(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28036, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CC98"))) PPC_WEAK_FUNC(sub_82F2CC98);
PPC_FUNC_IMPL(__imp__sub_82F2CC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CC9C"))) PPC_WEAK_FUNC(sub_82F2CC9C);
PPC_FUNC_IMPL(__imp__sub_82F2CC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCA0"))) PPC_WEAK_FUNC(sub_82F2CCA0);
PPC_FUNC_IMPL(__imp__sub_82F2CCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29792
	ctx.r3.s64 = r11.s64 + -29792;
}

__attribute__((alias("__imp__sub_82F2CCA8"))) PPC_WEAK_FUNC(sub_82F2CCA8);
PPC_FUNC_IMPL(__imp__sub_82F2CCA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CCAC"))) PPC_WEAK_FUNC(sub_82F2CCAC);
PPC_FUNC_IMPL(__imp__sub_82F2CCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCB0"))) PPC_WEAK_FUNC(sub_82F2CCB0);
PPC_FUNC_IMPL(__imp__sub_82F2CCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29784
	ctx.r3.s64 = r11.s64 + -29784;
}

__attribute__((alias("__imp__sub_82F2CCB8"))) PPC_WEAK_FUNC(sub_82F2CCB8);
PPC_FUNC_IMPL(__imp__sub_82F2CCB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CCBC"))) PPC_WEAK_FUNC(sub_82F2CCBC);
PPC_FUNC_IMPL(__imp__sub_82F2CCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCC0"))) PPC_WEAK_FUNC(sub_82F2CCC0);
PPC_FUNC_IMPL(__imp__sub_82F2CCC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29776
	ctx.r3.s64 = r11.s64 + -29776;
}

__attribute__((alias("__imp__sub_82F2CCC8"))) PPC_WEAK_FUNC(sub_82F2CCC8);
PPC_FUNC_IMPL(__imp__sub_82F2CCC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CCCC"))) PPC_WEAK_FUNC(sub_82F2CCCC);
PPC_FUNC_IMPL(__imp__sub_82F2CCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCD0"))) PPC_WEAK_FUNC(sub_82F2CCD0);
PPC_FUNC_IMPL(__imp__sub_82F2CCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29768
	ctx.r3.s64 = r11.s64 + -29768;
}

__attribute__((alias("__imp__sub_82F2CCD8"))) PPC_WEAK_FUNC(sub_82F2CCD8);
PPC_FUNC_IMPL(__imp__sub_82F2CCD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CCDC"))) PPC_WEAK_FUNC(sub_82F2CCDC);
PPC_FUNC_IMPL(__imp__sub_82F2CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCE0"))) PPC_WEAK_FUNC(sub_82F2CCE0);
PPC_FUNC_IMPL(__imp__sub_82F2CCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29760
	ctx.r3.s64 = r11.s64 + -29760;
}

__attribute__((alias("__imp__sub_82F2CCE8"))) PPC_WEAK_FUNC(sub_82F2CCE8);
PPC_FUNC_IMPL(__imp__sub_82F2CCE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CCEC"))) PPC_WEAK_FUNC(sub_82F2CCEC);
PPC_FUNC_IMPL(__imp__sub_82F2CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CCF0"))) PPC_WEAK_FUNC(sub_82F2CCF0);
PPC_FUNC_IMPL(__imp__sub_82F2CCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29752
	ctx.r3.s64 = r11.s64 + -29752;
}

__attribute__((alias("__imp__sub_82F2CCF8"))) PPC_WEAK_FUNC(sub_82F2CCF8);
PPC_FUNC_IMPL(__imp__sub_82F2CCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CCFC"))) PPC_WEAK_FUNC(sub_82F2CCFC);
PPC_FUNC_IMPL(__imp__sub_82F2CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CD00"))) PPC_WEAK_FUNC(sub_82F2CD00);
PPC_FUNC_IMPL(__imp__sub_82F2CD00) {
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
	// addi r3,r10,1688
	ctx.r3.s64 = ctx.r10.s64 + 1688;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28132, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CD38"))) PPC_WEAK_FUNC(sub_82F2CD38);
PPC_FUNC_IMPL(__imp__sub_82F2CD38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CD3C"))) PPC_WEAK_FUNC(sub_82F2CD3C);
PPC_FUNC_IMPL(__imp__sub_82F2CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CD40"))) PPC_WEAK_FUNC(sub_82F2CD40);
PPC_FUNC_IMPL(__imp__sub_82F2CD40) {
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
	// addi r3,r10,1468
	ctx.r3.s64 = ctx.r10.s64 + 1468;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28136(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28136, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CD78"))) PPC_WEAK_FUNC(sub_82F2CD78);
PPC_FUNC_IMPL(__imp__sub_82F2CD78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CD7C"))) PPC_WEAK_FUNC(sub_82F2CD7C);
PPC_FUNC_IMPL(__imp__sub_82F2CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CD80"))) PPC_WEAK_FUNC(sub_82F2CD80);
PPC_FUNC_IMPL(__imp__sub_82F2CD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29744
	ctx.r3.s64 = r11.s64 + -29744;
}

__attribute__((alias("__imp__sub_82F2CD88"))) PPC_WEAK_FUNC(sub_82F2CD88);
PPC_FUNC_IMPL(__imp__sub_82F2CD88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CD8C"))) PPC_WEAK_FUNC(sub_82F2CD8C);
PPC_FUNC_IMPL(__imp__sub_82F2CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CD90"))) PPC_WEAK_FUNC(sub_82F2CD90);
PPC_FUNC_IMPL(__imp__sub_82F2CD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29736
	ctx.r3.s64 = r11.s64 + -29736;
}

__attribute__((alias("__imp__sub_82F2CD98"))) PPC_WEAK_FUNC(sub_82F2CD98);
PPC_FUNC_IMPL(__imp__sub_82F2CD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CD9C"))) PPC_WEAK_FUNC(sub_82F2CD9C);
PPC_FUNC_IMPL(__imp__sub_82F2CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CDA0"))) PPC_WEAK_FUNC(sub_82F2CDA0);
PPC_FUNC_IMPL(__imp__sub_82F2CDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29728
	ctx.r3.s64 = r11.s64 + -29728;
}

__attribute__((alias("__imp__sub_82F2CDA8"))) PPC_WEAK_FUNC(sub_82F2CDA8);
PPC_FUNC_IMPL(__imp__sub_82F2CDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CDAC"))) PPC_WEAK_FUNC(sub_82F2CDAC);
PPC_FUNC_IMPL(__imp__sub_82F2CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CDB0"))) PPC_WEAK_FUNC(sub_82F2CDB0);
PPC_FUNC_IMPL(__imp__sub_82F2CDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29720
	ctx.r3.s64 = r11.s64 + -29720;
}

__attribute__((alias("__imp__sub_82F2CDB8"))) PPC_WEAK_FUNC(sub_82F2CDB8);
PPC_FUNC_IMPL(__imp__sub_82F2CDB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2CDBC"))) PPC_WEAK_FUNC(sub_82F2CDBC);
PPC_FUNC_IMPL(__imp__sub_82F2CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CDC0"))) PPC_WEAK_FUNC(sub_82F2CDC0);
PPC_FUNC_IMPL(__imp__sub_82F2CDC0) {
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
	// stw r3,28144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CDEC"))) PPC_WEAK_FUNC(sub_82F2CDEC);
PPC_FUNC_IMPL(__imp__sub_82F2CDEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CDF0"))) PPC_WEAK_FUNC(sub_82F2CDF0);
PPC_FUNC_IMPL(__imp__sub_82F2CDF0) {
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
	// addi r3,r7,28148
	ctx.r3.s64 = ctx.r7.s64 + 28148;
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
	// addi r3,r6,-29712
	ctx.r3.s64 = ctx.r6.s64 + -29712;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CE68"))) PPC_WEAK_FUNC(sub_82F2CE68);
PPC_FUNC_IMPL(__imp__sub_82F2CE68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CE6C"))) PPC_WEAK_FUNC(sub_82F2CE6C);
PPC_FUNC_IMPL(__imp__sub_82F2CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2CE70"))) PPC_WEAK_FUNC(sub_82F2CE70);
PPC_FUNC_IMPL(__imp__sub_82F2CE70) {
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
	// addi r3,r11,-13288
	ctx.r3.s64 = r11.s64 + -13288;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28180, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CE9C"))) PPC_WEAK_FUNC(sub_82F2CE9C);
PPC_FUNC_IMPL(__imp__sub_82F2CE9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CEA0"))) PPC_WEAK_FUNC(sub_82F2CEA0);
PPC_FUNC_IMPL(__imp__sub_82F2CEA0) {
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
	// stw r3,28184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28184, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CECC"))) PPC_WEAK_FUNC(sub_82F2CECC);
PPC_FUNC_IMPL(__imp__sub_82F2CECC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CED0"))) PPC_WEAK_FUNC(sub_82F2CED0);
PPC_FUNC_IMPL(__imp__sub_82F2CED0) {
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
	// addi r3,r11,-13280
	ctx.r3.s64 = r11.s64 + -13280;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28188, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CEFC"))) PPC_WEAK_FUNC(sub_82F2CEFC);
PPC_FUNC_IMPL(__imp__sub_82F2CEFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CF00"))) PPC_WEAK_FUNC(sub_82F2CF00);
PPC_FUNC_IMPL(__imp__sub_82F2CF00) {
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
	// stw r3,28192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28192, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CF2C"))) PPC_WEAK_FUNC(sub_82F2CF2C);
PPC_FUNC_IMPL(__imp__sub_82F2CF2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CF30"))) PPC_WEAK_FUNC(sub_82F2CF30);
PPC_FUNC_IMPL(__imp__sub_82F2CF30) {
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
	// stw r3,28196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CF5C"))) PPC_WEAK_FUNC(sub_82F2CF5C);
PPC_FUNC_IMPL(__imp__sub_82F2CF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CF60"))) PPC_WEAK_FUNC(sub_82F2CF60);
PPC_FUNC_IMPL(__imp__sub_82F2CF60) {
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
	// addi r3,r11,-13984
	ctx.r3.s64 = r11.s64 + -13984;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28200, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CF8C"))) PPC_WEAK_FUNC(sub_82F2CF8C);
PPC_FUNC_IMPL(__imp__sub_82F2CF8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CF90"))) PPC_WEAK_FUNC(sub_82F2CF90);
PPC_FUNC_IMPL(__imp__sub_82F2CF90) {
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
	// addi r3,r11,-13972
	ctx.r3.s64 = r11.s64 + -13972;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28204, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CFBC"))) PPC_WEAK_FUNC(sub_82F2CFBC);
PPC_FUNC_IMPL(__imp__sub_82F2CFBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CFC0"))) PPC_WEAK_FUNC(sub_82F2CFC0);
PPC_FUNC_IMPL(__imp__sub_82F2CFC0) {
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
	// addi r3,r11,-20832
	ctx.r3.s64 = r11.s64 + -20832;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28208, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2CFEC"))) PPC_WEAK_FUNC(sub_82F2CFEC);
PPC_FUNC_IMPL(__imp__sub_82F2CFEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2CFF0"))) PPC_WEAK_FUNC(sub_82F2CFF0);
PPC_FUNC_IMPL(__imp__sub_82F2CFF0) {
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
	// addi r3,r11,-13276
	ctx.r3.s64 = r11.s64 + -13276;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,28212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28212, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D01C"))) PPC_WEAK_FUNC(sub_82F2D01C);
PPC_FUNC_IMPL(__imp__sub_82F2D01C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D020"))) PPC_WEAK_FUNC(sub_82F2D020);
PPC_FUNC_IMPL(__imp__sub_82F2D020) {
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
	// addi r3,r10,1556
	ctx.r3.s64 = ctx.r10.s64 + 1556;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28140, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D058"))) PPC_WEAK_FUNC(sub_82F2D058);
PPC_FUNC_IMPL(__imp__sub_82F2D058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D05C"))) PPC_WEAK_FUNC(sub_82F2D05C);
PPC_FUNC_IMPL(__imp__sub_82F2D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D060"))) PPC_WEAK_FUNC(sub_82F2D060);
PPC_FUNC_IMPL(__imp__sub_82F2D060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29704
	ctx.r3.s64 = r11.s64 + -29704;
}

__attribute__((alias("__imp__sub_82F2D068"))) PPC_WEAK_FUNC(sub_82F2D068);
PPC_FUNC_IMPL(__imp__sub_82F2D068) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D06C"))) PPC_WEAK_FUNC(sub_82F2D06C);
PPC_FUNC_IMPL(__imp__sub_82F2D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D070"))) PPC_WEAK_FUNC(sub_82F2D070);
PPC_FUNC_IMPL(__imp__sub_82F2D070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29696
	ctx.r3.s64 = r11.s64 + -29696;
}

__attribute__((alias("__imp__sub_82F2D078"))) PPC_WEAK_FUNC(sub_82F2D078);
PPC_FUNC_IMPL(__imp__sub_82F2D078) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D07C"))) PPC_WEAK_FUNC(sub_82F2D07C);
PPC_FUNC_IMPL(__imp__sub_82F2D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D080"))) PPC_WEAK_FUNC(sub_82F2D080);
PPC_FUNC_IMPL(__imp__sub_82F2D080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29688
	ctx.r3.s64 = r11.s64 + -29688;
}

__attribute__((alias("__imp__sub_82F2D088"))) PPC_WEAK_FUNC(sub_82F2D088);
PPC_FUNC_IMPL(__imp__sub_82F2D088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D08C"))) PPC_WEAK_FUNC(sub_82F2D08C);
PPC_FUNC_IMPL(__imp__sub_82F2D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D090"))) PPC_WEAK_FUNC(sub_82F2D090);
PPC_FUNC_IMPL(__imp__sub_82F2D090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29680
	ctx.r3.s64 = r11.s64 + -29680;
}

__attribute__((alias("__imp__sub_82F2D098"))) PPC_WEAK_FUNC(sub_82F2D098);
PPC_FUNC_IMPL(__imp__sub_82F2D098) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D09C"))) PPC_WEAK_FUNC(sub_82F2D09C);
PPC_FUNC_IMPL(__imp__sub_82F2D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D0A0"))) PPC_WEAK_FUNC(sub_82F2D0A0);
PPC_FUNC_IMPL(__imp__sub_82F2D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29672
	ctx.r3.s64 = r11.s64 + -29672;
}

__attribute__((alias("__imp__sub_82F2D0A8"))) PPC_WEAK_FUNC(sub_82F2D0A8);
PPC_FUNC_IMPL(__imp__sub_82F2D0A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D0AC"))) PPC_WEAK_FUNC(sub_82F2D0AC);
PPC_FUNC_IMPL(__imp__sub_82F2D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D0B0"))) PPC_WEAK_FUNC(sub_82F2D0B0);
PPC_FUNC_IMPL(__imp__sub_82F2D0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r3,r10,-23020
	ctx.r3.s64 = ctx.r10.s64 + -23020;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82f2d100
	if (cr6.eq) goto loc_82F2D100;
loc_82F2D0E4:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82f2d0e4
	if (!cr6.eq) goto loc_82F2D0E4;
loc_82F2D100:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r10,28236(r11)
	PPC_STORE_U32(r11.u32 + 28236, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D114"))) PPC_WEAK_FUNC(sub_82F2D114);
PPC_FUNC_IMPL(__imp__sub_82F2D114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D118"))) PPC_WEAK_FUNC(sub_82F2D118);
PPC_FUNC_IMPL(__imp__sub_82F2D118) {
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
	// addi r3,r10,-22984
	ctx.r3.s64 = ctx.r10.s64 + -22984;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28232(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28232, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D150"))) PPC_WEAK_FUNC(sub_82F2D150);
PPC_FUNC_IMPL(__imp__sub_82F2D150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D154"))) PPC_WEAK_FUNC(sub_82F2D154);
PPC_FUNC_IMPL(__imp__sub_82F2D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D158"))) PPC_WEAK_FUNC(sub_82F2D158);
PPC_FUNC_IMPL(__imp__sub_82F2D158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29664
	ctx.r3.s64 = r11.s64 + -29664;
}

__attribute__((alias("__imp__sub_82F2D160"))) PPC_WEAK_FUNC(sub_82F2D160);
PPC_FUNC_IMPL(__imp__sub_82F2D160) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D164"))) PPC_WEAK_FUNC(sub_82F2D164);
PPC_FUNC_IMPL(__imp__sub_82F2D164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D168"))) PPC_WEAK_FUNC(sub_82F2D168);
PPC_FUNC_IMPL(__imp__sub_82F2D168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29656
	ctx.r3.s64 = r11.s64 + -29656;
}

__attribute__((alias("__imp__sub_82F2D170"))) PPC_WEAK_FUNC(sub_82F2D170);
PPC_FUNC_IMPL(__imp__sub_82F2D170) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D174"))) PPC_WEAK_FUNC(sub_82F2D174);
PPC_FUNC_IMPL(__imp__sub_82F2D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D178"))) PPC_WEAK_FUNC(sub_82F2D178);
PPC_FUNC_IMPL(__imp__sub_82F2D178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29648
	ctx.r3.s64 = r11.s64 + -29648;
}

__attribute__((alias("__imp__sub_82F2D180"))) PPC_WEAK_FUNC(sub_82F2D180);
PPC_FUNC_IMPL(__imp__sub_82F2D180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D184"))) PPC_WEAK_FUNC(sub_82F2D184);
PPC_FUNC_IMPL(__imp__sub_82F2D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D188"))) PPC_WEAK_FUNC(sub_82F2D188);
PPC_FUNC_IMPL(__imp__sub_82F2D188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29640
	ctx.r3.s64 = r11.s64 + -29640;
}

__attribute__((alias("__imp__sub_82F2D190"))) PPC_WEAK_FUNC(sub_82F2D190);
PPC_FUNC_IMPL(__imp__sub_82F2D190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D194"))) PPC_WEAK_FUNC(sub_82F2D194);
PPC_FUNC_IMPL(__imp__sub_82F2D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D198"))) PPC_WEAK_FUNC(sub_82F2D198);
PPC_FUNC_IMPL(__imp__sub_82F2D198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29632
	ctx.r3.s64 = r11.s64 + -29632;
}

__attribute__((alias("__imp__sub_82F2D1A0"))) PPC_WEAK_FUNC(sub_82F2D1A0);
PPC_FUNC_IMPL(__imp__sub_82F2D1A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D1A4"))) PPC_WEAK_FUNC(sub_82F2D1A4);
PPC_FUNC_IMPL(__imp__sub_82F2D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D1A8"))) PPC_WEAK_FUNC(sub_82F2D1A8);
PPC_FUNC_IMPL(__imp__sub_82F2D1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29624
	ctx.r3.s64 = r11.s64 + -29624;
}

__attribute__((alias("__imp__sub_82F2D1B0"))) PPC_WEAK_FUNC(sub_82F2D1B0);
PPC_FUNC_IMPL(__imp__sub_82F2D1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D1B4"))) PPC_WEAK_FUNC(sub_82F2D1B4);
PPC_FUNC_IMPL(__imp__sub_82F2D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D1B8"))) PPC_WEAK_FUNC(sub_82F2D1B8);
PPC_FUNC_IMPL(__imp__sub_82F2D1B8) {
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
	// addi r3,r10,1276
	ctx.r3.s64 = ctx.r10.s64 + 1276;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28276(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28276, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D1F0"))) PPC_WEAK_FUNC(sub_82F2D1F0);
PPC_FUNC_IMPL(__imp__sub_82F2D1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D1F4"))) PPC_WEAK_FUNC(sub_82F2D1F4);
PPC_FUNC_IMPL(__imp__sub_82F2D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D1F8"))) PPC_WEAK_FUNC(sub_82F2D1F8);
PPC_FUNC_IMPL(__imp__sub_82F2D1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29608
	ctx.r3.s64 = r11.s64 + -29608;
}

__attribute__((alias("__imp__sub_82F2D200"))) PPC_WEAK_FUNC(sub_82F2D200);
PPC_FUNC_IMPL(__imp__sub_82F2D200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D204"))) PPC_WEAK_FUNC(sub_82F2D204);
PPC_FUNC_IMPL(__imp__sub_82F2D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D208"))) PPC_WEAK_FUNC(sub_82F2D208);
PPC_FUNC_IMPL(__imp__sub_82F2D208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29600
	ctx.r3.s64 = r11.s64 + -29600;
}

__attribute__((alias("__imp__sub_82F2D210"))) PPC_WEAK_FUNC(sub_82F2D210);
PPC_FUNC_IMPL(__imp__sub_82F2D210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D214"))) PPC_WEAK_FUNC(sub_82F2D214);
PPC_FUNC_IMPL(__imp__sub_82F2D214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D218"))) PPC_WEAK_FUNC(sub_82F2D218);
PPC_FUNC_IMPL(__imp__sub_82F2D218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29592
	ctx.r3.s64 = r11.s64 + -29592;
}

__attribute__((alias("__imp__sub_82F2D220"))) PPC_WEAK_FUNC(sub_82F2D220);
PPC_FUNC_IMPL(__imp__sub_82F2D220) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D224"))) PPC_WEAK_FUNC(sub_82F2D224);
PPC_FUNC_IMPL(__imp__sub_82F2D224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D228"))) PPC_WEAK_FUNC(sub_82F2D228);
PPC_FUNC_IMPL(__imp__sub_82F2D228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29584
	ctx.r3.s64 = r11.s64 + -29584;
}

__attribute__((alias("__imp__sub_82F2D230"))) PPC_WEAK_FUNC(sub_82F2D230);
PPC_FUNC_IMPL(__imp__sub_82F2D230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D234"))) PPC_WEAK_FUNC(sub_82F2D234);
PPC_FUNC_IMPL(__imp__sub_82F2D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D238"))) PPC_WEAK_FUNC(sub_82F2D238);
PPC_FUNC_IMPL(__imp__sub_82F2D238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29576
	ctx.r3.s64 = r11.s64 + -29576;
}

__attribute__((alias("__imp__sub_82F2D240"))) PPC_WEAK_FUNC(sub_82F2D240);
PPC_FUNC_IMPL(__imp__sub_82F2D240) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D244"))) PPC_WEAK_FUNC(sub_82F2D244);
PPC_FUNC_IMPL(__imp__sub_82F2D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D248"))) PPC_WEAK_FUNC(sub_82F2D248);
PPC_FUNC_IMPL(__imp__sub_82F2D248) {
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
	// addi r3,r10,1232
	ctx.r3.s64 = ctx.r10.s64 + 1232;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28296, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D280"))) PPC_WEAK_FUNC(sub_82F2D280);
PPC_FUNC_IMPL(__imp__sub_82F2D280) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D284"))) PPC_WEAK_FUNC(sub_82F2D284);
PPC_FUNC_IMPL(__imp__sub_82F2D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D288"))) PPC_WEAK_FUNC(sub_82F2D288);
PPC_FUNC_IMPL(__imp__sub_82F2D288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29568
	ctx.r3.s64 = r11.s64 + -29568;
}

__attribute__((alias("__imp__sub_82F2D290"))) PPC_WEAK_FUNC(sub_82F2D290);
PPC_FUNC_IMPL(__imp__sub_82F2D290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D294"))) PPC_WEAK_FUNC(sub_82F2D294);
PPC_FUNC_IMPL(__imp__sub_82F2D294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D298"))) PPC_WEAK_FUNC(sub_82F2D298);
PPC_FUNC_IMPL(__imp__sub_82F2D298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29560
	ctx.r3.s64 = r11.s64 + -29560;
}

__attribute__((alias("__imp__sub_82F2D2A0"))) PPC_WEAK_FUNC(sub_82F2D2A0);
PPC_FUNC_IMPL(__imp__sub_82F2D2A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2A4"))) PPC_WEAK_FUNC(sub_82F2D2A4);
PPC_FUNC_IMPL(__imp__sub_82F2D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D2A8"))) PPC_WEAK_FUNC(sub_82F2D2A8);
PPC_FUNC_IMPL(__imp__sub_82F2D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29552
	ctx.r3.s64 = r11.s64 + -29552;
}

__attribute__((alias("__imp__sub_82F2D2B0"))) PPC_WEAK_FUNC(sub_82F2D2B0);
PPC_FUNC_IMPL(__imp__sub_82F2D2B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2B4"))) PPC_WEAK_FUNC(sub_82F2D2B4);
PPC_FUNC_IMPL(__imp__sub_82F2D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D2B8"))) PPC_WEAK_FUNC(sub_82F2D2B8);
PPC_FUNC_IMPL(__imp__sub_82F2D2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29544
	ctx.r3.s64 = r11.s64 + -29544;
}

__attribute__((alias("__imp__sub_82F2D2C0"))) PPC_WEAK_FUNC(sub_82F2D2C0);
PPC_FUNC_IMPL(__imp__sub_82F2D2C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2C4"))) PPC_WEAK_FUNC(sub_82F2D2C4);
PPC_FUNC_IMPL(__imp__sub_82F2D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D2C8"))) PPC_WEAK_FUNC(sub_82F2D2C8);
PPC_FUNC_IMPL(__imp__sub_82F2D2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29536
	ctx.r3.s64 = r11.s64 + -29536;
}

__attribute__((alias("__imp__sub_82F2D2D0"))) PPC_WEAK_FUNC(sub_82F2D2D0);
PPC_FUNC_IMPL(__imp__sub_82F2D2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D2D4"))) PPC_WEAK_FUNC(sub_82F2D2D4);
PPC_FUNC_IMPL(__imp__sub_82F2D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D2D8"))) PPC_WEAK_FUNC(sub_82F2D2D8);
PPC_FUNC_IMPL(__imp__sub_82F2D2D8) {
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
	// addi r3,r10,1328
	ctx.r3.s64 = ctx.r10.s64 + 1328;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28316, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D310"))) PPC_WEAK_FUNC(sub_82F2D310);
PPC_FUNC_IMPL(__imp__sub_82F2D310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D314"))) PPC_WEAK_FUNC(sub_82F2D314);
PPC_FUNC_IMPL(__imp__sub_82F2D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D318"))) PPC_WEAK_FUNC(sub_82F2D318);
PPC_FUNC_IMPL(__imp__sub_82F2D318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29528
	ctx.r3.s64 = r11.s64 + -29528;
}

__attribute__((alias("__imp__sub_82F2D320"))) PPC_WEAK_FUNC(sub_82F2D320);
PPC_FUNC_IMPL(__imp__sub_82F2D320) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D324"))) PPC_WEAK_FUNC(sub_82F2D324);
PPC_FUNC_IMPL(__imp__sub_82F2D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D328"))) PPC_WEAK_FUNC(sub_82F2D328);
PPC_FUNC_IMPL(__imp__sub_82F2D328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29520
	ctx.r3.s64 = r11.s64 + -29520;
}

__attribute__((alias("__imp__sub_82F2D330"))) PPC_WEAK_FUNC(sub_82F2D330);
PPC_FUNC_IMPL(__imp__sub_82F2D330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D334"))) PPC_WEAK_FUNC(sub_82F2D334);
PPC_FUNC_IMPL(__imp__sub_82F2D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D338"))) PPC_WEAK_FUNC(sub_82F2D338);
PPC_FUNC_IMPL(__imp__sub_82F2D338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29512
	ctx.r3.s64 = r11.s64 + -29512;
}

__attribute__((alias("__imp__sub_82F2D340"))) PPC_WEAK_FUNC(sub_82F2D340);
PPC_FUNC_IMPL(__imp__sub_82F2D340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D344"))) PPC_WEAK_FUNC(sub_82F2D344);
PPC_FUNC_IMPL(__imp__sub_82F2D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D348"))) PPC_WEAK_FUNC(sub_82F2D348);
PPC_FUNC_IMPL(__imp__sub_82F2D348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29504
	ctx.r3.s64 = r11.s64 + -29504;
}

__attribute__((alias("__imp__sub_82F2D350"))) PPC_WEAK_FUNC(sub_82F2D350);
PPC_FUNC_IMPL(__imp__sub_82F2D350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D354"))) PPC_WEAK_FUNC(sub_82F2D354);
PPC_FUNC_IMPL(__imp__sub_82F2D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D358"))) PPC_WEAK_FUNC(sub_82F2D358);
PPC_FUNC_IMPL(__imp__sub_82F2D358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29496
	ctx.r3.s64 = r11.s64 + -29496;
}

__attribute__((alias("__imp__sub_82F2D360"))) PPC_WEAK_FUNC(sub_82F2D360);
PPC_FUNC_IMPL(__imp__sub_82F2D360) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D364"))) PPC_WEAK_FUNC(sub_82F2D364);
PPC_FUNC_IMPL(__imp__sub_82F2D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D368"))) PPC_WEAK_FUNC(sub_82F2D368);
PPC_FUNC_IMPL(__imp__sub_82F2D368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29488
	ctx.r3.s64 = r11.s64 + -29488;
}

__attribute__((alias("__imp__sub_82F2D370"))) PPC_WEAK_FUNC(sub_82F2D370);
PPC_FUNC_IMPL(__imp__sub_82F2D370) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D374"))) PPC_WEAK_FUNC(sub_82F2D374);
PPC_FUNC_IMPL(__imp__sub_82F2D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D378"))) PPC_WEAK_FUNC(sub_82F2D378);
PPC_FUNC_IMPL(__imp__sub_82F2D378) {
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
	// addi r3,r10,1732
	ctx.r3.s64 = ctx.r10.s64 + 1732;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28340(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D3B0"))) PPC_WEAK_FUNC(sub_82F2D3B0);
PPC_FUNC_IMPL(__imp__sub_82F2D3B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D3B4"))) PPC_WEAK_FUNC(sub_82F2D3B4);
PPC_FUNC_IMPL(__imp__sub_82F2D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D3B8"))) PPC_WEAK_FUNC(sub_82F2D3B8);
PPC_FUNC_IMPL(__imp__sub_82F2D3B8) {
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
	// addi r3,r10,1776
	ctx.r3.s64 = ctx.r10.s64 + 1776;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28336(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28336, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D3F0"))) PPC_WEAK_FUNC(sub_82F2D3F0);
PPC_FUNC_IMPL(__imp__sub_82F2D3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D3F4"))) PPC_WEAK_FUNC(sub_82F2D3F4);
PPC_FUNC_IMPL(__imp__sub_82F2D3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D3F8"))) PPC_WEAK_FUNC(sub_82F2D3F8);
PPC_FUNC_IMPL(__imp__sub_82F2D3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29480
	ctx.r3.s64 = r11.s64 + -29480;
}

__attribute__((alias("__imp__sub_82F2D400"))) PPC_WEAK_FUNC(sub_82F2D400);
PPC_FUNC_IMPL(__imp__sub_82F2D400) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D404"))) PPC_WEAK_FUNC(sub_82F2D404);
PPC_FUNC_IMPL(__imp__sub_82F2D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D408"))) PPC_WEAK_FUNC(sub_82F2D408);
PPC_FUNC_IMPL(__imp__sub_82F2D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29472
	ctx.r3.s64 = r11.s64 + -29472;
}

__attribute__((alias("__imp__sub_82F2D410"))) PPC_WEAK_FUNC(sub_82F2D410);
PPC_FUNC_IMPL(__imp__sub_82F2D410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D414"))) PPC_WEAK_FUNC(sub_82F2D414);
PPC_FUNC_IMPL(__imp__sub_82F2D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D418"))) PPC_WEAK_FUNC(sub_82F2D418);
PPC_FUNC_IMPL(__imp__sub_82F2D418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29464
	ctx.r3.s64 = r11.s64 + -29464;
}

__attribute__((alias("__imp__sub_82F2D420"))) PPC_WEAK_FUNC(sub_82F2D420);
PPC_FUNC_IMPL(__imp__sub_82F2D420) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D424"))) PPC_WEAK_FUNC(sub_82F2D424);
PPC_FUNC_IMPL(__imp__sub_82F2D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D428"))) PPC_WEAK_FUNC(sub_82F2D428);
PPC_FUNC_IMPL(__imp__sub_82F2D428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29456
	ctx.r3.s64 = r11.s64 + -29456;
}

__attribute__((alias("__imp__sub_82F2D430"))) PPC_WEAK_FUNC(sub_82F2D430);
PPC_FUNC_IMPL(__imp__sub_82F2D430) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D434"))) PPC_WEAK_FUNC(sub_82F2D434);
PPC_FUNC_IMPL(__imp__sub_82F2D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D438"))) PPC_WEAK_FUNC(sub_82F2D438);
PPC_FUNC_IMPL(__imp__sub_82F2D438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29448
	ctx.r3.s64 = r11.s64 + -29448;
}

__attribute__((alias("__imp__sub_82F2D440"))) PPC_WEAK_FUNC(sub_82F2D440);
PPC_FUNC_IMPL(__imp__sub_82F2D440) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D444"))) PPC_WEAK_FUNC(sub_82F2D444);
PPC_FUNC_IMPL(__imp__sub_82F2D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D448"))) PPC_WEAK_FUNC(sub_82F2D448);
PPC_FUNC_IMPL(__imp__sub_82F2D448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29440
	ctx.r3.s64 = r11.s64 + -29440;
}

__attribute__((alias("__imp__sub_82F2D450"))) PPC_WEAK_FUNC(sub_82F2D450);
PPC_FUNC_IMPL(__imp__sub_82F2D450) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D454"))) PPC_WEAK_FUNC(sub_82F2D454);
PPC_FUNC_IMPL(__imp__sub_82F2D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D458"))) PPC_WEAK_FUNC(sub_82F2D458);
PPC_FUNC_IMPL(__imp__sub_82F2D458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29432
	ctx.r3.s64 = r11.s64 + -29432;
}

__attribute__((alias("__imp__sub_82F2D460"))) PPC_WEAK_FUNC(sub_82F2D460);
PPC_FUNC_IMPL(__imp__sub_82F2D460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D464"))) PPC_WEAK_FUNC(sub_82F2D464);
PPC_FUNC_IMPL(__imp__sub_82F2D464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D468"))) PPC_WEAK_FUNC(sub_82F2D468);
PPC_FUNC_IMPL(__imp__sub_82F2D468) {
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
	// addi r3,r10,3068
	ctx.r3.s64 = ctx.r10.s64 + 3068;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,28360(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28360, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F2D4A0"))) PPC_WEAK_FUNC(sub_82F2D4A0);
PPC_FUNC_IMPL(__imp__sub_82F2D4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2D4A4"))) PPC_WEAK_FUNC(sub_82F2D4A4);
PPC_FUNC_IMPL(__imp__sub_82F2D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4A8"))) PPC_WEAK_FUNC(sub_82F2D4A8);
PPC_FUNC_IMPL(__imp__sub_82F2D4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29424
	ctx.r3.s64 = r11.s64 + -29424;
}

__attribute__((alias("__imp__sub_82F2D4B0"))) PPC_WEAK_FUNC(sub_82F2D4B0);
PPC_FUNC_IMPL(__imp__sub_82F2D4B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D4B4"))) PPC_WEAK_FUNC(sub_82F2D4B4);
PPC_FUNC_IMPL(__imp__sub_82F2D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4B8"))) PPC_WEAK_FUNC(sub_82F2D4B8);
PPC_FUNC_IMPL(__imp__sub_82F2D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29416
	ctx.r3.s64 = r11.s64 + -29416;
}

__attribute__((alias("__imp__sub_82F2D4C0"))) PPC_WEAK_FUNC(sub_82F2D4C0);
PPC_FUNC_IMPL(__imp__sub_82F2D4C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D4C4"))) PPC_WEAK_FUNC(sub_82F2D4C4);
PPC_FUNC_IMPL(__imp__sub_82F2D4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4C8"))) PPC_WEAK_FUNC(sub_82F2D4C8);
PPC_FUNC_IMPL(__imp__sub_82F2D4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29408
	ctx.r3.s64 = r11.s64 + -29408;
}

__attribute__((alias("__imp__sub_82F2D4D0"))) PPC_WEAK_FUNC(sub_82F2D4D0);
PPC_FUNC_IMPL(__imp__sub_82F2D4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2D4D4"))) PPC_WEAK_FUNC(sub_82F2D4D4);
PPC_FUNC_IMPL(__imp__sub_82F2D4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F2D4D8"))) PPC_WEAK_FUNC(sub_82F2D4D8);
PPC_FUNC_IMPL(__imp__sub_82F2D4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-29400
	ctx.r3.s64 = r11.s64 + -29400;
}

__attribute__((alias("__imp__sub_82F2D4E0"))) PPC_WEAK_FUNC(sub_82F2D4E0);
PPC_FUNC_IMPL(__imp__sub_82F2D4E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

