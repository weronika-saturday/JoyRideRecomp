#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F34660"))) PPC_WEAK_FUNC(sub_82F34660);
PPC_FUNC_IMPL(__imp__sub_82F34660) {
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
	// stw r3,-30616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3468C"))) PPC_WEAK_FUNC(sub_82F3468C);
PPC_FUNC_IMPL(__imp__sub_82F3468C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34690"))) PPC_WEAK_FUNC(sub_82F34690);
PPC_FUNC_IMPL(__imp__sub_82F34690) {
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
	// addi r3,r7,-30612
	ctx.r3.s64 = ctx.r7.s64 + -30612;
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
	// addi r3,r6,-26040
	ctx.r3.s64 = ctx.r6.s64 + -26040;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34708"))) PPC_WEAK_FUNC(sub_82F34708);
PPC_FUNC_IMPL(__imp__sub_82F34708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3470C"))) PPC_WEAK_FUNC(sub_82F3470C);
PPC_FUNC_IMPL(__imp__sub_82F3470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34710"))) PPC_WEAK_FUNC(sub_82F34710);
PPC_FUNC_IMPL(__imp__sub_82F34710) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-30540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30540, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34738"))) PPC_WEAK_FUNC(sub_82F34738);
PPC_FUNC_IMPL(__imp__sub_82F34738) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3473C"))) PPC_WEAK_FUNC(sub_82F3473C);
PPC_FUNC_IMPL(__imp__sub_82F3473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34740"))) PPC_WEAK_FUNC(sub_82F34740);
PPC_FUNC_IMPL(__imp__sub_82F34740) {
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
	// stw r3,-30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30580, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3476C"))) PPC_WEAK_FUNC(sub_82F3476C);
PPC_FUNC_IMPL(__imp__sub_82F3476C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34770"))) PPC_WEAK_FUNC(sub_82F34770);
PPC_FUNC_IMPL(__imp__sub_82F34770) {
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
	// addi r3,r7,-30576
	ctx.r3.s64 = ctx.r7.s64 + -30576;
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
	// addi r3,r6,-26032
	ctx.r3.s64 = ctx.r6.s64 + -26032;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F347E8"))) PPC_WEAK_FUNC(sub_82F347E8);
PPC_FUNC_IMPL(__imp__sub_82F347E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F347EC"))) PPC_WEAK_FUNC(sub_82F347EC);
PPC_FUNC_IMPL(__imp__sub_82F347EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F347F0"))) PPC_WEAK_FUNC(sub_82F347F0);
PPC_FUNC_IMPL(__imp__sub_82F347F0) {
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
	// addi r3,r11,10552
	ctx.r3.s64 = r11.s64 + 10552;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r3,-30544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3481C"))) PPC_WEAK_FUNC(sub_82F3481C);
PPC_FUNC_IMPL(__imp__sub_82F3481C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34820"))) PPC_WEAK_FUNC(sub_82F34820);
PPC_FUNC_IMPL(__imp__sub_82F34820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-26024
	ctx.r3.s64 = r11.s64 + -26024;
}

__attribute__((alias("__imp__sub_82F34828"))) PPC_WEAK_FUNC(sub_82F34828);
PPC_FUNC_IMPL(__imp__sub_82F34828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3482C"))) PPC_WEAK_FUNC(sub_82F3482C);
PPC_FUNC_IMPL(__imp__sub_82F3482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34830"))) PPC_WEAK_FUNC(sub_82F34830);
PPC_FUNC_IMPL(__imp__sub_82F34830) {
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
	// stw r3,-30520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3485C"))) PPC_WEAK_FUNC(sub_82F3485C);
PPC_FUNC_IMPL(__imp__sub_82F3485C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34860"))) PPC_WEAK_FUNC(sub_82F34860);
PPC_FUNC_IMPL(__imp__sub_82F34860) {
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
	// addi r3,r7,-30516
	ctx.r3.s64 = ctx.r7.s64 + -30516;
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
	// addi r3,r6,-26016
	ctx.r3.s64 = ctx.r6.s64 + -26016;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F348D8"))) PPC_WEAK_FUNC(sub_82F348D8);
PPC_FUNC_IMPL(__imp__sub_82F348D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F348DC"))) PPC_WEAK_FUNC(sub_82F348DC);
PPC_FUNC_IMPL(__imp__sub_82F348DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F348E0"))) PPC_WEAK_FUNC(sub_82F348E0);
PPC_FUNC_IMPL(__imp__sub_82F348E0) {
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
	// stw r11,-30484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30484, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34908"))) PPC_WEAK_FUNC(sub_82F34908);
PPC_FUNC_IMPL(__imp__sub_82F34908) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3490C"))) PPC_WEAK_FUNC(sub_82F3490C);
PPC_FUNC_IMPL(__imp__sub_82F3490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34910"))) PPC_WEAK_FUNC(sub_82F34910);
PPC_FUNC_IMPL(__imp__sub_82F34910) {
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
	// stw r3,-30480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3493C"))) PPC_WEAK_FUNC(sub_82F3493C);
PPC_FUNC_IMPL(__imp__sub_82F3493C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34940"))) PPC_WEAK_FUNC(sub_82F34940);
PPC_FUNC_IMPL(__imp__sub_82F34940) {
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
	// addi r3,r7,-30476
	ctx.r3.s64 = ctx.r7.s64 + -30476;
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
	// addi r3,r6,-26008
	ctx.r3.s64 = ctx.r6.s64 + -26008;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F349B8"))) PPC_WEAK_FUNC(sub_82F349B8);
PPC_FUNC_IMPL(__imp__sub_82F349B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F349BC"))) PPC_WEAK_FUNC(sub_82F349BC);
PPC_FUNC_IMPL(__imp__sub_82F349BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F349C0"))) PPC_WEAK_FUNC(sub_82F349C0);
PPC_FUNC_IMPL(__imp__sub_82F349C0) {
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
	// stw r3,-30436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F349EC"))) PPC_WEAK_FUNC(sub_82F349EC);
PPC_FUNC_IMPL(__imp__sub_82F349EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F349F0"))) PPC_WEAK_FUNC(sub_82F349F0);
PPC_FUNC_IMPL(__imp__sub_82F349F0) {
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
	// addi r3,r7,-30432
	ctx.r3.s64 = ctx.r7.s64 + -30432;
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
	// addi r3,r6,-26000
	ctx.r3.s64 = ctx.r6.s64 + -26000;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34A68"))) PPC_WEAK_FUNC(sub_82F34A68);
PPC_FUNC_IMPL(__imp__sub_82F34A68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34A6C"))) PPC_WEAK_FUNC(sub_82F34A6C);
PPC_FUNC_IMPL(__imp__sub_82F34A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34A70"))) PPC_WEAK_FUNC(sub_82F34A70);
PPC_FUNC_IMPL(__imp__sub_82F34A70) {
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
	// stw r3,-30400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34A9C"))) PPC_WEAK_FUNC(sub_82F34A9C);
PPC_FUNC_IMPL(__imp__sub_82F34A9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34AA0"))) PPC_WEAK_FUNC(sub_82F34AA0);
PPC_FUNC_IMPL(__imp__sub_82F34AA0) {
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
	// addi r3,r7,-30396
	ctx.r3.s64 = ctx.r7.s64 + -30396;
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
	// addi r3,r6,-25968
	ctx.r3.s64 = ctx.r6.s64 + -25968;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34B18"))) PPC_WEAK_FUNC(sub_82F34B18);
PPC_FUNC_IMPL(__imp__sub_82F34B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34B1C"))) PPC_WEAK_FUNC(sub_82F34B1C);
PPC_FUNC_IMPL(__imp__sub_82F34B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34B20"))) PPC_WEAK_FUNC(sub_82F34B20);
PPC_FUNC_IMPL(__imp__sub_82F34B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25960
	ctx.r3.s64 = r11.s64 + -25960;
}

__attribute__((alias("__imp__sub_82F34B28"))) PPC_WEAK_FUNC(sub_82F34B28);
PPC_FUNC_IMPL(__imp__sub_82F34B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34B2C"))) PPC_WEAK_FUNC(sub_82F34B2C);
PPC_FUNC_IMPL(__imp__sub_82F34B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34B30"))) PPC_WEAK_FUNC(sub_82F34B30);
PPC_FUNC_IMPL(__imp__sub_82F34B30) {
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
	// bne cr6,0x82f34b84
	if (!cr6.eq) goto loc_82F34B84;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// li r11,255
	r11.s64 = 255;
	// addi r4,r5,20544
	ctx.r4.s64 = ctx.r5.s64 + 20544;
	// lis r3,-31933
	ctx.r3.s64 = -2092761088;
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
	// stw r10,-30348(r3)
	PPC_STORE_U32(ctx.r3.u32 + -30348, ctx.r10.u32);
	// blr 
	return;
loc_82F34B84:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,20544(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20544);
	// stw r11,-30348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30348, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34B98"))) PPC_WEAK_FUNC(sub_82F34B98);
PPC_FUNC_IMPL(__imp__sub_82F34B98) {
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
	// stw r3,-30340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30340, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34BC4"))) PPC_WEAK_FUNC(sub_82F34BC4);
PPC_FUNC_IMPL(__imp__sub_82F34BC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34BC8"))) PPC_WEAK_FUNC(sub_82F34BC8);
PPC_FUNC_IMPL(__imp__sub_82F34BC8) {
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
	// addi r3,r7,-30336
	ctx.r3.s64 = ctx.r7.s64 + -30336;
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
	// addi r3,r6,-25952
	ctx.r3.s64 = ctx.r6.s64 + -25952;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34C40"))) PPC_WEAK_FUNC(sub_82F34C40);
PPC_FUNC_IMPL(__imp__sub_82F34C40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34C44"))) PPC_WEAK_FUNC(sub_82F34C44);
PPC_FUNC_IMPL(__imp__sub_82F34C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34C48"))) PPC_WEAK_FUNC(sub_82F34C48);
PPC_FUNC_IMPL(__imp__sub_82F34C48) {
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
	// stw r11,-30304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30304, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34C70"))) PPC_WEAK_FUNC(sub_82F34C70);
PPC_FUNC_IMPL(__imp__sub_82F34C70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34C74"))) PPC_WEAK_FUNC(sub_82F34C74);
PPC_FUNC_IMPL(__imp__sub_82F34C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34C78"))) PPC_WEAK_FUNC(sub_82F34C78);
PPC_FUNC_IMPL(__imp__sub_82F34C78) {
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
	// stw r3,-30300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30300, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34CA4"))) PPC_WEAK_FUNC(sub_82F34CA4);
PPC_FUNC_IMPL(__imp__sub_82F34CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34CA8"))) PPC_WEAK_FUNC(sub_82F34CA8);
PPC_FUNC_IMPL(__imp__sub_82F34CA8) {
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
	// addi r3,r7,-30296
	ctx.r3.s64 = ctx.r7.s64 + -30296;
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
	// addi r3,r6,-25944
	ctx.r3.s64 = ctx.r6.s64 + -25944;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34D20"))) PPC_WEAK_FUNC(sub_82F34D20);
PPC_FUNC_IMPL(__imp__sub_82F34D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34D24"))) PPC_WEAK_FUNC(sub_82F34D24);
PPC_FUNC_IMPL(__imp__sub_82F34D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34D28"))) PPC_WEAK_FUNC(sub_82F34D28);
PPC_FUNC_IMPL(__imp__sub_82F34D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25936
	ctx.r3.s64 = r11.s64 + -25936;
}

__attribute__((alias("__imp__sub_82F34D30"))) PPC_WEAK_FUNC(sub_82F34D30);
PPC_FUNC_IMPL(__imp__sub_82F34D30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34D34"))) PPC_WEAK_FUNC(sub_82F34D34);
PPC_FUNC_IMPL(__imp__sub_82F34D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34D38"))) PPC_WEAK_FUNC(sub_82F34D38);
PPC_FUNC_IMPL(__imp__sub_82F34D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25928
	ctx.r3.s64 = r11.s64 + -25928;
}

__attribute__((alias("__imp__sub_82F34D40"))) PPC_WEAK_FUNC(sub_82F34D40);
PPC_FUNC_IMPL(__imp__sub_82F34D40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34D44"))) PPC_WEAK_FUNC(sub_82F34D44);
PPC_FUNC_IMPL(__imp__sub_82F34D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34D48"))) PPC_WEAK_FUNC(sub_82F34D48);
PPC_FUNC_IMPL(__imp__sub_82F34D48) {
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
	// stw r3,-30248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30248, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34D74"))) PPC_WEAK_FUNC(sub_82F34D74);
PPC_FUNC_IMPL(__imp__sub_82F34D74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34D78"))) PPC_WEAK_FUNC(sub_82F34D78);
PPC_FUNC_IMPL(__imp__sub_82F34D78) {
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
	// addi r3,r7,-30244
	ctx.r3.s64 = ctx.r7.s64 + -30244;
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
	// addi r3,r6,-25920
	ctx.r3.s64 = ctx.r6.s64 + -25920;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34DF0"))) PPC_WEAK_FUNC(sub_82F34DF0);
PPC_FUNC_IMPL(__imp__sub_82F34DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34DF4"))) PPC_WEAK_FUNC(sub_82F34DF4);
PPC_FUNC_IMPL(__imp__sub_82F34DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34DF8"))) PPC_WEAK_FUNC(sub_82F34DF8);
PPC_FUNC_IMPL(__imp__sub_82F34DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25912
	ctx.r3.s64 = r11.s64 + -25912;
}

__attribute__((alias("__imp__sub_82F34E00"))) PPC_WEAK_FUNC(sub_82F34E00);
PPC_FUNC_IMPL(__imp__sub_82F34E00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34E04"))) PPC_WEAK_FUNC(sub_82F34E04);
PPC_FUNC_IMPL(__imp__sub_82F34E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34E08"))) PPC_WEAK_FUNC(sub_82F34E08);
PPC_FUNC_IMPL(__imp__sub_82F34E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25904
	ctx.r3.s64 = r11.s64 + -25904;
}

__attribute__((alias("__imp__sub_82F34E10"))) PPC_WEAK_FUNC(sub_82F34E10);
PPC_FUNC_IMPL(__imp__sub_82F34E10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34E14"))) PPC_WEAK_FUNC(sub_82F34E14);
PPC_FUNC_IMPL(__imp__sub_82F34E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34E18"))) PPC_WEAK_FUNC(sub_82F34E18);
PPC_FUNC_IMPL(__imp__sub_82F34E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25896
	ctx.r3.s64 = r11.s64 + -25896;
}

__attribute__((alias("__imp__sub_82F34E20"))) PPC_WEAK_FUNC(sub_82F34E20);
PPC_FUNC_IMPL(__imp__sub_82F34E20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34E24"))) PPC_WEAK_FUNC(sub_82F34E24);
PPC_FUNC_IMPL(__imp__sub_82F34E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34E28"))) PPC_WEAK_FUNC(sub_82F34E28);
PPC_FUNC_IMPL(__imp__sub_82F34E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25888
	ctx.r3.s64 = r11.s64 + -25888;
}

__attribute__((alias("__imp__sub_82F34E30"))) PPC_WEAK_FUNC(sub_82F34E30);
PPC_FUNC_IMPL(__imp__sub_82F34E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34E34"))) PPC_WEAK_FUNC(sub_82F34E34);
PPC_FUNC_IMPL(__imp__sub_82F34E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34E38"))) PPC_WEAK_FUNC(sub_82F34E38);
PPC_FUNC_IMPL(__imp__sub_82F34E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25880
	ctx.r3.s64 = r11.s64 + -25880;
}

__attribute__((alias("__imp__sub_82F34E40"))) PPC_WEAK_FUNC(sub_82F34E40);
PPC_FUNC_IMPL(__imp__sub_82F34E40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34E44"))) PPC_WEAK_FUNC(sub_82F34E44);
PPC_FUNC_IMPL(__imp__sub_82F34E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34E48"))) PPC_WEAK_FUNC(sub_82F34E48);
PPC_FUNC_IMPL(__imp__sub_82F34E48) {
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
	// stw r3,-30196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30196, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34E74"))) PPC_WEAK_FUNC(sub_82F34E74);
PPC_FUNC_IMPL(__imp__sub_82F34E74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34E78"))) PPC_WEAK_FUNC(sub_82F34E78);
PPC_FUNC_IMPL(__imp__sub_82F34E78) {
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
	// addi r3,r7,-30192
	ctx.r3.s64 = ctx.r7.s64 + -30192;
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
	// addi r3,r6,-25872
	ctx.r3.s64 = ctx.r6.s64 + -25872;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34EF0"))) PPC_WEAK_FUNC(sub_82F34EF0);
PPC_FUNC_IMPL(__imp__sub_82F34EF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34EF4"))) PPC_WEAK_FUNC(sub_82F34EF4);
PPC_FUNC_IMPL(__imp__sub_82F34EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34EF8"))) PPC_WEAK_FUNC(sub_82F34EF8);
PPC_FUNC_IMPL(__imp__sub_82F34EF8) {
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
	// stw r11,-30160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30160, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F34F20"))) PPC_WEAK_FUNC(sub_82F34F20);
PPC_FUNC_IMPL(__imp__sub_82F34F20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F34F24"))) PPC_WEAK_FUNC(sub_82F34F24);
PPC_FUNC_IMPL(__imp__sub_82F34F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F28"))) PPC_WEAK_FUNC(sub_82F34F28);
PPC_FUNC_IMPL(__imp__sub_82F34F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25864
	ctx.r3.s64 = r11.s64 + -25864;
}

__attribute__((alias("__imp__sub_82F34F30"))) PPC_WEAK_FUNC(sub_82F34F30);
PPC_FUNC_IMPL(__imp__sub_82F34F30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F34"))) PPC_WEAK_FUNC(sub_82F34F34);
PPC_FUNC_IMPL(__imp__sub_82F34F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F38"))) PPC_WEAK_FUNC(sub_82F34F38);
PPC_FUNC_IMPL(__imp__sub_82F34F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25856
	ctx.r3.s64 = r11.s64 + -25856;
}

__attribute__((alias("__imp__sub_82F34F40"))) PPC_WEAK_FUNC(sub_82F34F40);
PPC_FUNC_IMPL(__imp__sub_82F34F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F44"))) PPC_WEAK_FUNC(sub_82F34F44);
PPC_FUNC_IMPL(__imp__sub_82F34F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F48"))) PPC_WEAK_FUNC(sub_82F34F48);
PPC_FUNC_IMPL(__imp__sub_82F34F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25848
	ctx.r3.s64 = r11.s64 + -25848;
}

__attribute__((alias("__imp__sub_82F34F50"))) PPC_WEAK_FUNC(sub_82F34F50);
PPC_FUNC_IMPL(__imp__sub_82F34F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F54"))) PPC_WEAK_FUNC(sub_82F34F54);
PPC_FUNC_IMPL(__imp__sub_82F34F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F58"))) PPC_WEAK_FUNC(sub_82F34F58);
PPC_FUNC_IMPL(__imp__sub_82F34F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25840
	ctx.r3.s64 = r11.s64 + -25840;
}

__attribute__((alias("__imp__sub_82F34F60"))) PPC_WEAK_FUNC(sub_82F34F60);
PPC_FUNC_IMPL(__imp__sub_82F34F60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F64"))) PPC_WEAK_FUNC(sub_82F34F64);
PPC_FUNC_IMPL(__imp__sub_82F34F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F68"))) PPC_WEAK_FUNC(sub_82F34F68);
PPC_FUNC_IMPL(__imp__sub_82F34F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25832
	ctx.r3.s64 = r11.s64 + -25832;
}

__attribute__((alias("__imp__sub_82F34F70"))) PPC_WEAK_FUNC(sub_82F34F70);
PPC_FUNC_IMPL(__imp__sub_82F34F70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F74"))) PPC_WEAK_FUNC(sub_82F34F74);
PPC_FUNC_IMPL(__imp__sub_82F34F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F78"))) PPC_WEAK_FUNC(sub_82F34F78);
PPC_FUNC_IMPL(__imp__sub_82F34F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25824
	ctx.r3.s64 = r11.s64 + -25824;
}

__attribute__((alias("__imp__sub_82F34F80"))) PPC_WEAK_FUNC(sub_82F34F80);
PPC_FUNC_IMPL(__imp__sub_82F34F80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F84"))) PPC_WEAK_FUNC(sub_82F34F84);
PPC_FUNC_IMPL(__imp__sub_82F34F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F88"))) PPC_WEAK_FUNC(sub_82F34F88);
PPC_FUNC_IMPL(__imp__sub_82F34F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25816
	ctx.r3.s64 = r11.s64 + -25816;
}

__attribute__((alias("__imp__sub_82F34F90"))) PPC_WEAK_FUNC(sub_82F34F90);
PPC_FUNC_IMPL(__imp__sub_82F34F90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34F94"))) PPC_WEAK_FUNC(sub_82F34F94);
PPC_FUNC_IMPL(__imp__sub_82F34F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34F98"))) PPC_WEAK_FUNC(sub_82F34F98);
PPC_FUNC_IMPL(__imp__sub_82F34F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25808
	ctx.r3.s64 = r11.s64 + -25808;
}

__attribute__((alias("__imp__sub_82F34FA0"))) PPC_WEAK_FUNC(sub_82F34FA0);
PPC_FUNC_IMPL(__imp__sub_82F34FA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34FA4"))) PPC_WEAK_FUNC(sub_82F34FA4);
PPC_FUNC_IMPL(__imp__sub_82F34FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34FA8"))) PPC_WEAK_FUNC(sub_82F34FA8);
PPC_FUNC_IMPL(__imp__sub_82F34FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25800
	ctx.r3.s64 = r11.s64 + -25800;
}

__attribute__((alias("__imp__sub_82F34FB0"))) PPC_WEAK_FUNC(sub_82F34FB0);
PPC_FUNC_IMPL(__imp__sub_82F34FB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34FB4"))) PPC_WEAK_FUNC(sub_82F34FB4);
PPC_FUNC_IMPL(__imp__sub_82F34FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34FB8"))) PPC_WEAK_FUNC(sub_82F34FB8);
PPC_FUNC_IMPL(__imp__sub_82F34FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25792
	ctx.r3.s64 = r11.s64 + -25792;
}

__attribute__((alias("__imp__sub_82F34FC0"))) PPC_WEAK_FUNC(sub_82F34FC0);
PPC_FUNC_IMPL(__imp__sub_82F34FC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34FC4"))) PPC_WEAK_FUNC(sub_82F34FC4);
PPC_FUNC_IMPL(__imp__sub_82F34FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34FC8"))) PPC_WEAK_FUNC(sub_82F34FC8);
PPC_FUNC_IMPL(__imp__sub_82F34FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25784
	ctx.r3.s64 = r11.s64 + -25784;
}

__attribute__((alias("__imp__sub_82F34FD0"))) PPC_WEAK_FUNC(sub_82F34FD0);
PPC_FUNC_IMPL(__imp__sub_82F34FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34FD4"))) PPC_WEAK_FUNC(sub_82F34FD4);
PPC_FUNC_IMPL(__imp__sub_82F34FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34FD8"))) PPC_WEAK_FUNC(sub_82F34FD8);
PPC_FUNC_IMPL(__imp__sub_82F34FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25776
	ctx.r3.s64 = r11.s64 + -25776;
}

__attribute__((alias("__imp__sub_82F34FE0"))) PPC_WEAK_FUNC(sub_82F34FE0);
PPC_FUNC_IMPL(__imp__sub_82F34FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34FE4"))) PPC_WEAK_FUNC(sub_82F34FE4);
PPC_FUNC_IMPL(__imp__sub_82F34FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34FE8"))) PPC_WEAK_FUNC(sub_82F34FE8);
PPC_FUNC_IMPL(__imp__sub_82F34FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25768
	ctx.r3.s64 = r11.s64 + -25768;
}

__attribute__((alias("__imp__sub_82F34FF0"))) PPC_WEAK_FUNC(sub_82F34FF0);
PPC_FUNC_IMPL(__imp__sub_82F34FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F34FF4"))) PPC_WEAK_FUNC(sub_82F34FF4);
PPC_FUNC_IMPL(__imp__sub_82F34FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F34FF8"))) PPC_WEAK_FUNC(sub_82F34FF8);
PPC_FUNC_IMPL(__imp__sub_82F34FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25760
	ctx.r3.s64 = r11.s64 + -25760;
}

__attribute__((alias("__imp__sub_82F35000"))) PPC_WEAK_FUNC(sub_82F35000);
PPC_FUNC_IMPL(__imp__sub_82F35000) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35004"))) PPC_WEAK_FUNC(sub_82F35004);
PPC_FUNC_IMPL(__imp__sub_82F35004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35008"))) PPC_WEAK_FUNC(sub_82F35008);
PPC_FUNC_IMPL(__imp__sub_82F35008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25752
	ctx.r3.s64 = r11.s64 + -25752;
}

__attribute__((alias("__imp__sub_82F35010"))) PPC_WEAK_FUNC(sub_82F35010);
PPC_FUNC_IMPL(__imp__sub_82F35010) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35014"))) PPC_WEAK_FUNC(sub_82F35014);
PPC_FUNC_IMPL(__imp__sub_82F35014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35018"))) PPC_WEAK_FUNC(sub_82F35018);
PPC_FUNC_IMPL(__imp__sub_82F35018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25744
	ctx.r3.s64 = r11.s64 + -25744;
}

__attribute__((alias("__imp__sub_82F35020"))) PPC_WEAK_FUNC(sub_82F35020);
PPC_FUNC_IMPL(__imp__sub_82F35020) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35024"))) PPC_WEAK_FUNC(sub_82F35024);
PPC_FUNC_IMPL(__imp__sub_82F35024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35028"))) PPC_WEAK_FUNC(sub_82F35028);
PPC_FUNC_IMPL(__imp__sub_82F35028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25736
	ctx.r3.s64 = r11.s64 + -25736;
}

__attribute__((alias("__imp__sub_82F35030"))) PPC_WEAK_FUNC(sub_82F35030);
PPC_FUNC_IMPL(__imp__sub_82F35030) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35034"))) PPC_WEAK_FUNC(sub_82F35034);
PPC_FUNC_IMPL(__imp__sub_82F35034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35038"))) PPC_WEAK_FUNC(sub_82F35038);
PPC_FUNC_IMPL(__imp__sub_82F35038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25728
	ctx.r3.s64 = r11.s64 + -25728;
}

__attribute__((alias("__imp__sub_82F35040"))) PPC_WEAK_FUNC(sub_82F35040);
PPC_FUNC_IMPL(__imp__sub_82F35040) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35044"))) PPC_WEAK_FUNC(sub_82F35044);
PPC_FUNC_IMPL(__imp__sub_82F35044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35048"))) PPC_WEAK_FUNC(sub_82F35048);
PPC_FUNC_IMPL(__imp__sub_82F35048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25720
	ctx.r3.s64 = r11.s64 + -25720;
}

__attribute__((alias("__imp__sub_82F35050"))) PPC_WEAK_FUNC(sub_82F35050);
PPC_FUNC_IMPL(__imp__sub_82F35050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35054"))) PPC_WEAK_FUNC(sub_82F35054);
PPC_FUNC_IMPL(__imp__sub_82F35054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35058"))) PPC_WEAK_FUNC(sub_82F35058);
PPC_FUNC_IMPL(__imp__sub_82F35058) {
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
	// stw r11,-30108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30108, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F35080"))) PPC_WEAK_FUNC(sub_82F35080);
PPC_FUNC_IMPL(__imp__sub_82F35080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F35084"))) PPC_WEAK_FUNC(sub_82F35084);
PPC_FUNC_IMPL(__imp__sub_82F35084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35088"))) PPC_WEAK_FUNC(sub_82F35088);
PPC_FUNC_IMPL(__imp__sub_82F35088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25712
	ctx.r3.s64 = r11.s64 + -25712;
}

__attribute__((alias("__imp__sub_82F35090"))) PPC_WEAK_FUNC(sub_82F35090);
PPC_FUNC_IMPL(__imp__sub_82F35090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35094"))) PPC_WEAK_FUNC(sub_82F35094);
PPC_FUNC_IMPL(__imp__sub_82F35094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35098"))) PPC_WEAK_FUNC(sub_82F35098);
PPC_FUNC_IMPL(__imp__sub_82F35098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25704
	ctx.r3.s64 = r11.s64 + -25704;
}

__attribute__((alias("__imp__sub_82F350A0"))) PPC_WEAK_FUNC(sub_82F350A0);
PPC_FUNC_IMPL(__imp__sub_82F350A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F350A4"))) PPC_WEAK_FUNC(sub_82F350A4);
PPC_FUNC_IMPL(__imp__sub_82F350A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F350A8"))) PPC_WEAK_FUNC(sub_82F350A8);
PPC_FUNC_IMPL(__imp__sub_82F350A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25696
	ctx.r3.s64 = r11.s64 + -25696;
}

__attribute__((alias("__imp__sub_82F350B0"))) PPC_WEAK_FUNC(sub_82F350B0);
PPC_FUNC_IMPL(__imp__sub_82F350B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F350B4"))) PPC_WEAK_FUNC(sub_82F350B4);
PPC_FUNC_IMPL(__imp__sub_82F350B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F350B8"))) PPC_WEAK_FUNC(sub_82F350B8);
PPC_FUNC_IMPL(__imp__sub_82F350B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25688
	ctx.r3.s64 = r11.s64 + -25688;
}

__attribute__((alias("__imp__sub_82F350C0"))) PPC_WEAK_FUNC(sub_82F350C0);
PPC_FUNC_IMPL(__imp__sub_82F350C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F350C4"))) PPC_WEAK_FUNC(sub_82F350C4);
PPC_FUNC_IMPL(__imp__sub_82F350C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F350C8"))) PPC_WEAK_FUNC(sub_82F350C8);
PPC_FUNC_IMPL(__imp__sub_82F350C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25680
	ctx.r3.s64 = r11.s64 + -25680;
}

__attribute__((alias("__imp__sub_82F350D0"))) PPC_WEAK_FUNC(sub_82F350D0);
PPC_FUNC_IMPL(__imp__sub_82F350D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F350D4"))) PPC_WEAK_FUNC(sub_82F350D4);
PPC_FUNC_IMPL(__imp__sub_82F350D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F350D8"))) PPC_WEAK_FUNC(sub_82F350D8);
PPC_FUNC_IMPL(__imp__sub_82F350D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25672
	ctx.r3.s64 = r11.s64 + -25672;
}

__attribute__((alias("__imp__sub_82F350E0"))) PPC_WEAK_FUNC(sub_82F350E0);
PPC_FUNC_IMPL(__imp__sub_82F350E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F350E4"))) PPC_WEAK_FUNC(sub_82F350E4);
PPC_FUNC_IMPL(__imp__sub_82F350E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F350E8"))) PPC_WEAK_FUNC(sub_82F350E8);
PPC_FUNC_IMPL(__imp__sub_82F350E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25664
	ctx.r3.s64 = r11.s64 + -25664;
}

__attribute__((alias("__imp__sub_82F350F0"))) PPC_WEAK_FUNC(sub_82F350F0);
PPC_FUNC_IMPL(__imp__sub_82F350F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F350F4"))) PPC_WEAK_FUNC(sub_82F350F4);
PPC_FUNC_IMPL(__imp__sub_82F350F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F350F8"))) PPC_WEAK_FUNC(sub_82F350F8);
PPC_FUNC_IMPL(__imp__sub_82F350F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25656
	ctx.r3.s64 = r11.s64 + -25656;
}

__attribute__((alias("__imp__sub_82F35100"))) PPC_WEAK_FUNC(sub_82F35100);
PPC_FUNC_IMPL(__imp__sub_82F35100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35104"))) PPC_WEAK_FUNC(sub_82F35104);
PPC_FUNC_IMPL(__imp__sub_82F35104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35108"))) PPC_WEAK_FUNC(sub_82F35108);
PPC_FUNC_IMPL(__imp__sub_82F35108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25648
	ctx.r3.s64 = r11.s64 + -25648;
}

__attribute__((alias("__imp__sub_82F35110"))) PPC_WEAK_FUNC(sub_82F35110);
PPC_FUNC_IMPL(__imp__sub_82F35110) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35114"))) PPC_WEAK_FUNC(sub_82F35114);
PPC_FUNC_IMPL(__imp__sub_82F35114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35118"))) PPC_WEAK_FUNC(sub_82F35118);
PPC_FUNC_IMPL(__imp__sub_82F35118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25640
	ctx.r3.s64 = r11.s64 + -25640;
}

__attribute__((alias("__imp__sub_82F35120"))) PPC_WEAK_FUNC(sub_82F35120);
PPC_FUNC_IMPL(__imp__sub_82F35120) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35124"))) PPC_WEAK_FUNC(sub_82F35124);
PPC_FUNC_IMPL(__imp__sub_82F35124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35128"))) PPC_WEAK_FUNC(sub_82F35128);
PPC_FUNC_IMPL(__imp__sub_82F35128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25632
	ctx.r3.s64 = r11.s64 + -25632;
}

__attribute__((alias("__imp__sub_82F35130"))) PPC_WEAK_FUNC(sub_82F35130);
PPC_FUNC_IMPL(__imp__sub_82F35130) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35134"))) PPC_WEAK_FUNC(sub_82F35134);
PPC_FUNC_IMPL(__imp__sub_82F35134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35138"))) PPC_WEAK_FUNC(sub_82F35138);
PPC_FUNC_IMPL(__imp__sub_82F35138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25624
	ctx.r3.s64 = r11.s64 + -25624;
}

__attribute__((alias("__imp__sub_82F35140"))) PPC_WEAK_FUNC(sub_82F35140);
PPC_FUNC_IMPL(__imp__sub_82F35140) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35144"))) PPC_WEAK_FUNC(sub_82F35144);
PPC_FUNC_IMPL(__imp__sub_82F35144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35148"))) PPC_WEAK_FUNC(sub_82F35148);
PPC_FUNC_IMPL(__imp__sub_82F35148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25616
	ctx.r3.s64 = r11.s64 + -25616;
}

__attribute__((alias("__imp__sub_82F35150"))) PPC_WEAK_FUNC(sub_82F35150);
PPC_FUNC_IMPL(__imp__sub_82F35150) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35154"))) PPC_WEAK_FUNC(sub_82F35154);
PPC_FUNC_IMPL(__imp__sub_82F35154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35158"))) PPC_WEAK_FUNC(sub_82F35158);
PPC_FUNC_IMPL(__imp__sub_82F35158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25608
	ctx.r3.s64 = r11.s64 + -25608;
}

__attribute__((alias("__imp__sub_82F35160"))) PPC_WEAK_FUNC(sub_82F35160);
PPC_FUNC_IMPL(__imp__sub_82F35160) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35164"))) PPC_WEAK_FUNC(sub_82F35164);
PPC_FUNC_IMPL(__imp__sub_82F35164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35168"))) PPC_WEAK_FUNC(sub_82F35168);
PPC_FUNC_IMPL(__imp__sub_82F35168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25600
	ctx.r3.s64 = r11.s64 + -25600;
}

__attribute__((alias("__imp__sub_82F35170"))) PPC_WEAK_FUNC(sub_82F35170);
PPC_FUNC_IMPL(__imp__sub_82F35170) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35174"))) PPC_WEAK_FUNC(sub_82F35174);
PPC_FUNC_IMPL(__imp__sub_82F35174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35178"))) PPC_WEAK_FUNC(sub_82F35178);
PPC_FUNC_IMPL(__imp__sub_82F35178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25592
	ctx.r3.s64 = r11.s64 + -25592;
}

__attribute__((alias("__imp__sub_82F35180"))) PPC_WEAK_FUNC(sub_82F35180);
PPC_FUNC_IMPL(__imp__sub_82F35180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35184"))) PPC_WEAK_FUNC(sub_82F35184);
PPC_FUNC_IMPL(__imp__sub_82F35184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35188"))) PPC_WEAK_FUNC(sub_82F35188);
PPC_FUNC_IMPL(__imp__sub_82F35188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25584
	ctx.r3.s64 = r11.s64 + -25584;
}

__attribute__((alias("__imp__sub_82F35190"))) PPC_WEAK_FUNC(sub_82F35190);
PPC_FUNC_IMPL(__imp__sub_82F35190) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35194"))) PPC_WEAK_FUNC(sub_82F35194);
PPC_FUNC_IMPL(__imp__sub_82F35194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35198"))) PPC_WEAK_FUNC(sub_82F35198);
PPC_FUNC_IMPL(__imp__sub_82F35198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25576
	ctx.r3.s64 = r11.s64 + -25576;
}

__attribute__((alias("__imp__sub_82F351A0"))) PPC_WEAK_FUNC(sub_82F351A0);
PPC_FUNC_IMPL(__imp__sub_82F351A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F351A4"))) PPC_WEAK_FUNC(sub_82F351A4);
PPC_FUNC_IMPL(__imp__sub_82F351A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F351A8"))) PPC_WEAK_FUNC(sub_82F351A8);
PPC_FUNC_IMPL(__imp__sub_82F351A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25568
	ctx.r3.s64 = r11.s64 + -25568;
}

__attribute__((alias("__imp__sub_82F351B0"))) PPC_WEAK_FUNC(sub_82F351B0);
PPC_FUNC_IMPL(__imp__sub_82F351B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F351B4"))) PPC_WEAK_FUNC(sub_82F351B4);
PPC_FUNC_IMPL(__imp__sub_82F351B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F351B8"))) PPC_WEAK_FUNC(sub_82F351B8);
PPC_FUNC_IMPL(__imp__sub_82F351B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25560
	ctx.r3.s64 = r11.s64 + -25560;
}

__attribute__((alias("__imp__sub_82F351C0"))) PPC_WEAK_FUNC(sub_82F351C0);
PPC_FUNC_IMPL(__imp__sub_82F351C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F351C4"))) PPC_WEAK_FUNC(sub_82F351C4);
PPC_FUNC_IMPL(__imp__sub_82F351C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F351C8"))) PPC_WEAK_FUNC(sub_82F351C8);
PPC_FUNC_IMPL(__imp__sub_82F351C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25552
	ctx.r3.s64 = r11.s64 + -25552;
}

__attribute__((alias("__imp__sub_82F351D0"))) PPC_WEAK_FUNC(sub_82F351D0);
PPC_FUNC_IMPL(__imp__sub_82F351D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F351D4"))) PPC_WEAK_FUNC(sub_82F351D4);
PPC_FUNC_IMPL(__imp__sub_82F351D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F351D8"))) PPC_WEAK_FUNC(sub_82F351D8);
PPC_FUNC_IMPL(__imp__sub_82F351D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25544
	ctx.r3.s64 = r11.s64 + -25544;
}

__attribute__((alias("__imp__sub_82F351E0"))) PPC_WEAK_FUNC(sub_82F351E0);
PPC_FUNC_IMPL(__imp__sub_82F351E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F351E4"))) PPC_WEAK_FUNC(sub_82F351E4);
PPC_FUNC_IMPL(__imp__sub_82F351E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F351E8"))) PPC_WEAK_FUNC(sub_82F351E8);
PPC_FUNC_IMPL(__imp__sub_82F351E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25536
	ctx.r3.s64 = r11.s64 + -25536;
}

__attribute__((alias("__imp__sub_82F351F0"))) PPC_WEAK_FUNC(sub_82F351F0);
PPC_FUNC_IMPL(__imp__sub_82F351F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F351F4"))) PPC_WEAK_FUNC(sub_82F351F4);
PPC_FUNC_IMPL(__imp__sub_82F351F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F351F8"))) PPC_WEAK_FUNC(sub_82F351F8);
PPC_FUNC_IMPL(__imp__sub_82F351F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25528
	ctx.r3.s64 = r11.s64 + -25528;
}

__attribute__((alias("__imp__sub_82F35200"))) PPC_WEAK_FUNC(sub_82F35200);
PPC_FUNC_IMPL(__imp__sub_82F35200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35204"))) PPC_WEAK_FUNC(sub_82F35204);
PPC_FUNC_IMPL(__imp__sub_82F35204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35208"))) PPC_WEAK_FUNC(sub_82F35208);
PPC_FUNC_IMPL(__imp__sub_82F35208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25520
	ctx.r3.s64 = r11.s64 + -25520;
}

__attribute__((alias("__imp__sub_82F35210"))) PPC_WEAK_FUNC(sub_82F35210);
PPC_FUNC_IMPL(__imp__sub_82F35210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35214"))) PPC_WEAK_FUNC(sub_82F35214);
PPC_FUNC_IMPL(__imp__sub_82F35214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35218"))) PPC_WEAK_FUNC(sub_82F35218);
PPC_FUNC_IMPL(__imp__sub_82F35218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25512
	ctx.r3.s64 = r11.s64 + -25512;
}

__attribute__((alias("__imp__sub_82F35220"))) PPC_WEAK_FUNC(sub_82F35220);
PPC_FUNC_IMPL(__imp__sub_82F35220) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35224"))) PPC_WEAK_FUNC(sub_82F35224);
PPC_FUNC_IMPL(__imp__sub_82F35224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35228"))) PPC_WEAK_FUNC(sub_82F35228);
PPC_FUNC_IMPL(__imp__sub_82F35228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25504
	ctx.r3.s64 = r11.s64 + -25504;
}

__attribute__((alias("__imp__sub_82F35230"))) PPC_WEAK_FUNC(sub_82F35230);
PPC_FUNC_IMPL(__imp__sub_82F35230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35234"))) PPC_WEAK_FUNC(sub_82F35234);
PPC_FUNC_IMPL(__imp__sub_82F35234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35238"))) PPC_WEAK_FUNC(sub_82F35238);
PPC_FUNC_IMPL(__imp__sub_82F35238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25496
	ctx.r3.s64 = r11.s64 + -25496;
}

__attribute__((alias("__imp__sub_82F35240"))) PPC_WEAK_FUNC(sub_82F35240);
PPC_FUNC_IMPL(__imp__sub_82F35240) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35244"))) PPC_WEAK_FUNC(sub_82F35244);
PPC_FUNC_IMPL(__imp__sub_82F35244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35248"))) PPC_WEAK_FUNC(sub_82F35248);
PPC_FUNC_IMPL(__imp__sub_82F35248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25488
	ctx.r3.s64 = r11.s64 + -25488;
}

__attribute__((alias("__imp__sub_82F35250"))) PPC_WEAK_FUNC(sub_82F35250);
PPC_FUNC_IMPL(__imp__sub_82F35250) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35254"))) PPC_WEAK_FUNC(sub_82F35254);
PPC_FUNC_IMPL(__imp__sub_82F35254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35258"))) PPC_WEAK_FUNC(sub_82F35258);
PPC_FUNC_IMPL(__imp__sub_82F35258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25480
	ctx.r3.s64 = r11.s64 + -25480;
}

__attribute__((alias("__imp__sub_82F35260"))) PPC_WEAK_FUNC(sub_82F35260);
PPC_FUNC_IMPL(__imp__sub_82F35260) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35264"))) PPC_WEAK_FUNC(sub_82F35264);
PPC_FUNC_IMPL(__imp__sub_82F35264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35268"))) PPC_WEAK_FUNC(sub_82F35268);
PPC_FUNC_IMPL(__imp__sub_82F35268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25472
	ctx.r3.s64 = r11.s64 + -25472;
}

__attribute__((alias("__imp__sub_82F35270"))) PPC_WEAK_FUNC(sub_82F35270);
PPC_FUNC_IMPL(__imp__sub_82F35270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35274"))) PPC_WEAK_FUNC(sub_82F35274);
PPC_FUNC_IMPL(__imp__sub_82F35274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35278"))) PPC_WEAK_FUNC(sub_82F35278);
PPC_FUNC_IMPL(__imp__sub_82F35278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25464
	ctx.r3.s64 = r11.s64 + -25464;
}

__attribute__((alias("__imp__sub_82F35280"))) PPC_WEAK_FUNC(sub_82F35280);
PPC_FUNC_IMPL(__imp__sub_82F35280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35284"))) PPC_WEAK_FUNC(sub_82F35284);
PPC_FUNC_IMPL(__imp__sub_82F35284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35288"))) PPC_WEAK_FUNC(sub_82F35288);
PPC_FUNC_IMPL(__imp__sub_82F35288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25456
	ctx.r3.s64 = r11.s64 + -25456;
}

__attribute__((alias("__imp__sub_82F35290"))) PPC_WEAK_FUNC(sub_82F35290);
PPC_FUNC_IMPL(__imp__sub_82F35290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F35294"))) PPC_WEAK_FUNC(sub_82F35294);
PPC_FUNC_IMPL(__imp__sub_82F35294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F35298"))) PPC_WEAK_FUNC(sub_82F35298);
PPC_FUNC_IMPL(__imp__sub_82F35298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25448
	ctx.r3.s64 = r11.s64 + -25448;
}

__attribute__((alias("__imp__sub_82F352A0"))) PPC_WEAK_FUNC(sub_82F352A0);
PPC_FUNC_IMPL(__imp__sub_82F352A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F352A4"))) PPC_WEAK_FUNC(sub_82F352A4);
PPC_FUNC_IMPL(__imp__sub_82F352A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F352A8"))) PPC_WEAK_FUNC(sub_82F352A8);
PPC_FUNC_IMPL(__imp__sub_82F352A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-25440
	ctx.r3.s64 = r11.s64 + -25440;
}

__attribute__((alias("__imp__sub_82F352B0"))) PPC_WEAK_FUNC(sub_82F352B0);
PPC_FUNC_IMPL(__imp__sub_82F352B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

