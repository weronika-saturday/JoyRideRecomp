#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F30BC0"))) PPC_WEAK_FUNC(sub_82F30BC0);
PPC_FUNC_IMPL(__imp__sub_82F30BC0) {
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
	// addi r3,r11,-11320
	ctx.r3.s64 = r11.s64 + -11320;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,30604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30604, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30BEC"))) PPC_WEAK_FUNC(sub_82F30BEC);
PPC_FUNC_IMPL(__imp__sub_82F30BEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30BF0"))) PPC_WEAK_FUNC(sub_82F30BF0);
PPC_FUNC_IMPL(__imp__sub_82F30BF0) {
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
	// stw r11,30608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30608, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30C18"))) PPC_WEAK_FUNC(sub_82F30C18);
PPC_FUNC_IMPL(__imp__sub_82F30C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30C1C"))) PPC_WEAK_FUNC(sub_82F30C1C);
PPC_FUNC_IMPL(__imp__sub_82F30C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30C20"))) PPC_WEAK_FUNC(sub_82F30C20);
PPC_FUNC_IMPL(__imp__sub_82F30C20) {
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
	// addi r3,r11,30612
	ctx.r3.s64 = r11.s64 + 30612;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// addi r3,r10,-27760
	ctx.r3.s64 = ctx.r10.s64 + -27760;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30C50"))) PPC_WEAK_FUNC(sub_82F30C50);
PPC_FUNC_IMPL(__imp__sub_82F30C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30C54"))) PPC_WEAK_FUNC(sub_82F30C54);
PPC_FUNC_IMPL(__imp__sub_82F30C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30C58"))) PPC_WEAK_FUNC(sub_82F30C58);
PPC_FUNC_IMPL(__imp__sub_82F30C58) {
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
	// stw r3,30672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30672, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30C84"))) PPC_WEAK_FUNC(sub_82F30C84);
PPC_FUNC_IMPL(__imp__sub_82F30C84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30C88"))) PPC_WEAK_FUNC(sub_82F30C88);
PPC_FUNC_IMPL(__imp__sub_82F30C88) {
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
	// addi r3,r7,30676
	ctx.r3.s64 = ctx.r7.s64 + 30676;
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
	// addi r3,r6,-27680
	ctx.r3.s64 = ctx.r6.s64 + -27680;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30D00"))) PPC_WEAK_FUNC(sub_82F30D00);
PPC_FUNC_IMPL(__imp__sub_82F30D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30D04"))) PPC_WEAK_FUNC(sub_82F30D04);
PPC_FUNC_IMPL(__imp__sub_82F30D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30D08"))) PPC_WEAK_FUNC(sub_82F30D08);
PPC_FUNC_IMPL(__imp__sub_82F30D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27672
	ctx.r3.s64 = r11.s64 + -27672;
}

__attribute__((alias("__imp__sub_82F30D10"))) PPC_WEAK_FUNC(sub_82F30D10);
PPC_FUNC_IMPL(__imp__sub_82F30D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30D14"))) PPC_WEAK_FUNC(sub_82F30D14);
PPC_FUNC_IMPL(__imp__sub_82F30D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30D18"))) PPC_WEAK_FUNC(sub_82F30D18);
PPC_FUNC_IMPL(__imp__sub_82F30D18) {
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
	// stw r3,30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30D44"))) PPC_WEAK_FUNC(sub_82F30D44);
PPC_FUNC_IMPL(__imp__sub_82F30D44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30D48"))) PPC_WEAK_FUNC(sub_82F30D48);
PPC_FUNC_IMPL(__imp__sub_82F30D48) {
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
	// addi r3,r7,30728
	ctx.r3.s64 = ctx.r7.s64 + 30728;
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
	// addi r3,r6,-27664
	ctx.r3.s64 = ctx.r6.s64 + -27664;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30DC0"))) PPC_WEAK_FUNC(sub_82F30DC0);
PPC_FUNC_IMPL(__imp__sub_82F30DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30DC4"))) PPC_WEAK_FUNC(sub_82F30DC4);
PPC_FUNC_IMPL(__imp__sub_82F30DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30DC8"))) PPC_WEAK_FUNC(sub_82F30DC8);
PPC_FUNC_IMPL(__imp__sub_82F30DC8) {
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
	// stw r11,30760(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30760, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30DF0"))) PPC_WEAK_FUNC(sub_82F30DF0);
PPC_FUNC_IMPL(__imp__sub_82F30DF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30DF4"))) PPC_WEAK_FUNC(sub_82F30DF4);
PPC_FUNC_IMPL(__imp__sub_82F30DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30DF8"))) PPC_WEAK_FUNC(sub_82F30DF8);
PPC_FUNC_IMPL(__imp__sub_82F30DF8) {
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
	// stw r3,30764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30764, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30E24"))) PPC_WEAK_FUNC(sub_82F30E24);
PPC_FUNC_IMPL(__imp__sub_82F30E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30E28"))) PPC_WEAK_FUNC(sub_82F30E28);
PPC_FUNC_IMPL(__imp__sub_82F30E28) {
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
	// addi r3,r7,30768
	ctx.r3.s64 = ctx.r7.s64 + 30768;
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
	// addi r3,r6,-27656
	ctx.r3.s64 = ctx.r6.s64 + -27656;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30EA0"))) PPC_WEAK_FUNC(sub_82F30EA0);
PPC_FUNC_IMPL(__imp__sub_82F30EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30EA4"))) PPC_WEAK_FUNC(sub_82F30EA4);
PPC_FUNC_IMPL(__imp__sub_82F30EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30EA8"))) PPC_WEAK_FUNC(sub_82F30EA8);
PPC_FUNC_IMPL(__imp__sub_82F30EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27640
	ctx.r3.s64 = r11.s64 + -27640;
}

__attribute__((alias("__imp__sub_82F30EB0"))) PPC_WEAK_FUNC(sub_82F30EB0);
PPC_FUNC_IMPL(__imp__sub_82F30EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30EB4"))) PPC_WEAK_FUNC(sub_82F30EB4);
PPC_FUNC_IMPL(__imp__sub_82F30EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30EB8"))) PPC_WEAK_FUNC(sub_82F30EB8);
PPC_FUNC_IMPL(__imp__sub_82F30EB8) {
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
	// stw r11,30896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30896, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30EE0"))) PPC_WEAK_FUNC(sub_82F30EE0);
PPC_FUNC_IMPL(__imp__sub_82F30EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30EE4"))) PPC_WEAK_FUNC(sub_82F30EE4);
PPC_FUNC_IMPL(__imp__sub_82F30EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30EE8"))) PPC_WEAK_FUNC(sub_82F30EE8);
PPC_FUNC_IMPL(__imp__sub_82F30EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27584
	ctx.r3.s64 = r11.s64 + -27584;
}

__attribute__((alias("__imp__sub_82F30EF0"))) PPC_WEAK_FUNC(sub_82F30EF0);
PPC_FUNC_IMPL(__imp__sub_82F30EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30EF4"))) PPC_WEAK_FUNC(sub_82F30EF4);
PPC_FUNC_IMPL(__imp__sub_82F30EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30EF8"))) PPC_WEAK_FUNC(sub_82F30EF8);
PPC_FUNC_IMPL(__imp__sub_82F30EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27632
	ctx.r3.s64 = r11.s64 + -27632;
}

__attribute__((alias("__imp__sub_82F30F00"))) PPC_WEAK_FUNC(sub_82F30F00);
PPC_FUNC_IMPL(__imp__sub_82F30F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30F04"))) PPC_WEAK_FUNC(sub_82F30F04);
PPC_FUNC_IMPL(__imp__sub_82F30F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30F08"))) PPC_WEAK_FUNC(sub_82F30F08);
PPC_FUNC_IMPL(__imp__sub_82F30F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27624
	ctx.r3.s64 = r11.s64 + -27624;
}

__attribute__((alias("__imp__sub_82F30F10"))) PPC_WEAK_FUNC(sub_82F30F10);
PPC_FUNC_IMPL(__imp__sub_82F30F10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30F14"))) PPC_WEAK_FUNC(sub_82F30F14);
PPC_FUNC_IMPL(__imp__sub_82F30F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30F18"))) PPC_WEAK_FUNC(sub_82F30F18);
PPC_FUNC_IMPL(__imp__sub_82F30F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27616
	ctx.r3.s64 = r11.s64 + -27616;
}

__attribute__((alias("__imp__sub_82F30F20"))) PPC_WEAK_FUNC(sub_82F30F20);
PPC_FUNC_IMPL(__imp__sub_82F30F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30F24"))) PPC_WEAK_FUNC(sub_82F30F24);
PPC_FUNC_IMPL(__imp__sub_82F30F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30F28"))) PPC_WEAK_FUNC(sub_82F30F28);
PPC_FUNC_IMPL(__imp__sub_82F30F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27608
	ctx.r3.s64 = r11.s64 + -27608;
}

__attribute__((alias("__imp__sub_82F30F30"))) PPC_WEAK_FUNC(sub_82F30F30);
PPC_FUNC_IMPL(__imp__sub_82F30F30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30F34"))) PPC_WEAK_FUNC(sub_82F30F34);
PPC_FUNC_IMPL(__imp__sub_82F30F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30F38"))) PPC_WEAK_FUNC(sub_82F30F38);
PPC_FUNC_IMPL(__imp__sub_82F30F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27600
	ctx.r3.s64 = r11.s64 + -27600;
}

__attribute__((alias("__imp__sub_82F30F40"))) PPC_WEAK_FUNC(sub_82F30F40);
PPC_FUNC_IMPL(__imp__sub_82F30F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30F44"))) PPC_WEAK_FUNC(sub_82F30F44);
PPC_FUNC_IMPL(__imp__sub_82F30F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30F48"))) PPC_WEAK_FUNC(sub_82F30F48);
PPC_FUNC_IMPL(__imp__sub_82F30F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27592
	ctx.r3.s64 = r11.s64 + -27592;
}

__attribute__((alias("__imp__sub_82F30F50"))) PPC_WEAK_FUNC(sub_82F30F50);
PPC_FUNC_IMPL(__imp__sub_82F30F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F30F54"))) PPC_WEAK_FUNC(sub_82F30F54);
PPC_FUNC_IMPL(__imp__sub_82F30F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F30F58"))) PPC_WEAK_FUNC(sub_82F30F58);
PPC_FUNC_IMPL(__imp__sub_82F30F58) {
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
	// stw r3,30988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30988, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F30F84"))) PPC_WEAK_FUNC(sub_82F30F84);
PPC_FUNC_IMPL(__imp__sub_82F30F84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F30F88"))) PPC_WEAK_FUNC(sub_82F30F88);
PPC_FUNC_IMPL(__imp__sub_82F30F88) {
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
	// addi r3,r7,30992
	ctx.r3.s64 = ctx.r7.s64 + 30992;
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
	// addi r3,r6,-27576
	ctx.r3.s64 = ctx.r6.s64 + -27576;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31000"))) PPC_WEAK_FUNC(sub_82F31000);
PPC_FUNC_IMPL(__imp__sub_82F31000) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31004"))) PPC_WEAK_FUNC(sub_82F31004);
PPC_FUNC_IMPL(__imp__sub_82F31004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31008"))) PPC_WEAK_FUNC(sub_82F31008);
PPC_FUNC_IMPL(__imp__sub_82F31008) {
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
	// stw r3,31120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31120, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31034"))) PPC_WEAK_FUNC(sub_82F31034);
PPC_FUNC_IMPL(__imp__sub_82F31034) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31038"))) PPC_WEAK_FUNC(sub_82F31038);
PPC_FUNC_IMPL(__imp__sub_82F31038) {
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
	// addi r3,r7,31124
	ctx.r3.s64 = ctx.r7.s64 + 31124;
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
	// addi r3,r6,-27552
	ctx.r3.s64 = ctx.r6.s64 + -27552;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F310B0"))) PPC_WEAK_FUNC(sub_82F310B0);
PPC_FUNC_IMPL(__imp__sub_82F310B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F310B4"))) PPC_WEAK_FUNC(sub_82F310B4);
PPC_FUNC_IMPL(__imp__sub_82F310B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F310B8"))) PPC_WEAK_FUNC(sub_82F310B8);
PPC_FUNC_IMPL(__imp__sub_82F310B8) {
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
	// addi r3,r10,21712
	ctx.r3.s64 = ctx.r10.s64 + 21712;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r3,31116(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31116, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F310F0"))) PPC_WEAK_FUNC(sub_82F310F0);
PPC_FUNC_IMPL(__imp__sub_82F310F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F310F4"))) PPC_WEAK_FUNC(sub_82F310F4);
PPC_FUNC_IMPL(__imp__sub_82F310F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F310F8"))) PPC_WEAK_FUNC(sub_82F310F8);
PPC_FUNC_IMPL(__imp__sub_82F310F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27544
	ctx.r3.s64 = r11.s64 + -27544;
}

__attribute__((alias("__imp__sub_82F31100"))) PPC_WEAK_FUNC(sub_82F31100);
PPC_FUNC_IMPL(__imp__sub_82F31100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31104"))) PPC_WEAK_FUNC(sub_82F31104);
PPC_FUNC_IMPL(__imp__sub_82F31104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31108"))) PPC_WEAK_FUNC(sub_82F31108);
PPC_FUNC_IMPL(__imp__sub_82F31108) {
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
	// stw r3,31964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31964, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31134"))) PPC_WEAK_FUNC(sub_82F31134);
PPC_FUNC_IMPL(__imp__sub_82F31134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31138"))) PPC_WEAK_FUNC(sub_82F31138);
PPC_FUNC_IMPL(__imp__sub_82F31138) {
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
	// addi r3,r7,31968
	ctx.r3.s64 = ctx.r7.s64 + 31968;
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
	// addi r3,r6,-27536
	ctx.r3.s64 = ctx.r6.s64 + -27536;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F311B0"))) PPC_WEAK_FUNC(sub_82F311B0);
PPC_FUNC_IMPL(__imp__sub_82F311B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F311B4"))) PPC_WEAK_FUNC(sub_82F311B4);
PPC_FUNC_IMPL(__imp__sub_82F311B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F311B8"))) PPC_WEAK_FUNC(sub_82F311B8);
PPC_FUNC_IMPL(__imp__sub_82F311B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27504
	ctx.r3.s64 = r11.s64 + -27504;
}

__attribute__((alias("__imp__sub_82F311C0"))) PPC_WEAK_FUNC(sub_82F311C0);
PPC_FUNC_IMPL(__imp__sub_82F311C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F311C4"))) PPC_WEAK_FUNC(sub_82F311C4);
PPC_FUNC_IMPL(__imp__sub_82F311C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F311C8"))) PPC_WEAK_FUNC(sub_82F311C8);
PPC_FUNC_IMPL(__imp__sub_82F311C8) {
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
	// stw r3,32020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32020, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F311F4"))) PPC_WEAK_FUNC(sub_82F311F4);
PPC_FUNC_IMPL(__imp__sub_82F311F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F311F8"))) PPC_WEAK_FUNC(sub_82F311F8);
PPC_FUNC_IMPL(__imp__sub_82F311F8) {
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
	// addi r3,r7,32024
	ctx.r3.s64 = ctx.r7.s64 + 32024;
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
	// addi r3,r6,-27496
	ctx.r3.s64 = ctx.r6.s64 + -27496;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31270"))) PPC_WEAK_FUNC(sub_82F31270);
PPC_FUNC_IMPL(__imp__sub_82F31270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31274"))) PPC_WEAK_FUNC(sub_82F31274);
PPC_FUNC_IMPL(__imp__sub_82F31274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31278"))) PPC_WEAK_FUNC(sub_82F31278);
PPC_FUNC_IMPL(__imp__sub_82F31278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27488
	ctx.r3.s64 = r11.s64 + -27488;
}

__attribute__((alias("__imp__sub_82F31280"))) PPC_WEAK_FUNC(sub_82F31280);
PPC_FUNC_IMPL(__imp__sub_82F31280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31284"))) PPC_WEAK_FUNC(sub_82F31284);
PPC_FUNC_IMPL(__imp__sub_82F31284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31288"))) PPC_WEAK_FUNC(sub_82F31288);
PPC_FUNC_IMPL(__imp__sub_82F31288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27480
	ctx.r3.s64 = r11.s64 + -27480;
}

__attribute__((alias("__imp__sub_82F31290"))) PPC_WEAK_FUNC(sub_82F31290);
PPC_FUNC_IMPL(__imp__sub_82F31290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31294"))) PPC_WEAK_FUNC(sub_82F31294);
PPC_FUNC_IMPL(__imp__sub_82F31294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31298"))) PPC_WEAK_FUNC(sub_82F31298);
PPC_FUNC_IMPL(__imp__sub_82F31298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27472
	ctx.r3.s64 = r11.s64 + -27472;
}

__attribute__((alias("__imp__sub_82F312A0"))) PPC_WEAK_FUNC(sub_82F312A0);
PPC_FUNC_IMPL(__imp__sub_82F312A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F312A4"))) PPC_WEAK_FUNC(sub_82F312A4);
PPC_FUNC_IMPL(__imp__sub_82F312A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F312A8"))) PPC_WEAK_FUNC(sub_82F312A8);
PPC_FUNC_IMPL(__imp__sub_82F312A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27464
	ctx.r3.s64 = r11.s64 + -27464;
}

__attribute__((alias("__imp__sub_82F312B0"))) PPC_WEAK_FUNC(sub_82F312B0);
PPC_FUNC_IMPL(__imp__sub_82F312B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F312B4"))) PPC_WEAK_FUNC(sub_82F312B4);
PPC_FUNC_IMPL(__imp__sub_82F312B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F312B8"))) PPC_WEAK_FUNC(sub_82F312B8);
PPC_FUNC_IMPL(__imp__sub_82F312B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27456
	ctx.r3.s64 = r11.s64 + -27456;
}

__attribute__((alias("__imp__sub_82F312C0"))) PPC_WEAK_FUNC(sub_82F312C0);
PPC_FUNC_IMPL(__imp__sub_82F312C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F312C4"))) PPC_WEAK_FUNC(sub_82F312C4);
PPC_FUNC_IMPL(__imp__sub_82F312C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F312C8"))) PPC_WEAK_FUNC(sub_82F312C8);
PPC_FUNC_IMPL(__imp__sub_82F312C8) {
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
	// stw r3,32268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32268, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F312F4"))) PPC_WEAK_FUNC(sub_82F312F4);
PPC_FUNC_IMPL(__imp__sub_82F312F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F312F8"))) PPC_WEAK_FUNC(sub_82F312F8);
PPC_FUNC_IMPL(__imp__sub_82F312F8) {
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
	// addi r3,r7,32272
	ctx.r3.s64 = ctx.r7.s64 + 32272;
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
	// addi r3,r6,-27448
	ctx.r3.s64 = ctx.r6.s64 + -27448;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31370"))) PPC_WEAK_FUNC(sub_82F31370);
PPC_FUNC_IMPL(__imp__sub_82F31370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31374"))) PPC_WEAK_FUNC(sub_82F31374);
PPC_FUNC_IMPL(__imp__sub_82F31374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31378"))) PPC_WEAK_FUNC(sub_82F31378);
PPC_FUNC_IMPL(__imp__sub_82F31378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27440
	ctx.r3.s64 = r11.s64 + -27440;
}

__attribute__((alias("__imp__sub_82F31380"))) PPC_WEAK_FUNC(sub_82F31380);
PPC_FUNC_IMPL(__imp__sub_82F31380) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31384"))) PPC_WEAK_FUNC(sub_82F31384);
PPC_FUNC_IMPL(__imp__sub_82F31384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31388"))) PPC_WEAK_FUNC(sub_82F31388);
PPC_FUNC_IMPL(__imp__sub_82F31388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27432
	ctx.r3.s64 = r11.s64 + -27432;
}

__attribute__((alias("__imp__sub_82F31390"))) PPC_WEAK_FUNC(sub_82F31390);
PPC_FUNC_IMPL(__imp__sub_82F31390) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31394"))) PPC_WEAK_FUNC(sub_82F31394);
PPC_FUNC_IMPL(__imp__sub_82F31394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31398"))) PPC_WEAK_FUNC(sub_82F31398);
PPC_FUNC_IMPL(__imp__sub_82F31398) {
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
	// stw r3,32320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32320, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F313C4"))) PPC_WEAK_FUNC(sub_82F313C4);
PPC_FUNC_IMPL(__imp__sub_82F313C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F313C8"))) PPC_WEAK_FUNC(sub_82F313C8);
PPC_FUNC_IMPL(__imp__sub_82F313C8) {
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
	// addi r3,r7,32324
	ctx.r3.s64 = ctx.r7.s64 + 32324;
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
	// addi r3,r6,-27424
	ctx.r3.s64 = ctx.r6.s64 + -27424;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31440"))) PPC_WEAK_FUNC(sub_82F31440);
PPC_FUNC_IMPL(__imp__sub_82F31440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31444"))) PPC_WEAK_FUNC(sub_82F31444);
PPC_FUNC_IMPL(__imp__sub_82F31444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31448"))) PPC_WEAK_FUNC(sub_82F31448);
PPC_FUNC_IMPL(__imp__sub_82F31448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27416
	ctx.r3.s64 = r11.s64 + -27416;
}

__attribute__((alias("__imp__sub_82F31450"))) PPC_WEAK_FUNC(sub_82F31450);
PPC_FUNC_IMPL(__imp__sub_82F31450) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31454"))) PPC_WEAK_FUNC(sub_82F31454);
PPC_FUNC_IMPL(__imp__sub_82F31454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31458"))) PPC_WEAK_FUNC(sub_82F31458);
PPC_FUNC_IMPL(__imp__sub_82F31458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27408
	ctx.r3.s64 = r11.s64 + -27408;
}

__attribute__((alias("__imp__sub_82F31460"))) PPC_WEAK_FUNC(sub_82F31460);
PPC_FUNC_IMPL(__imp__sub_82F31460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31464"))) PPC_WEAK_FUNC(sub_82F31464);
PPC_FUNC_IMPL(__imp__sub_82F31464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31468"))) PPC_WEAK_FUNC(sub_82F31468);
PPC_FUNC_IMPL(__imp__sub_82F31468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27400
	ctx.r3.s64 = r11.s64 + -27400;
}

__attribute__((alias("__imp__sub_82F31470"))) PPC_WEAK_FUNC(sub_82F31470);
PPC_FUNC_IMPL(__imp__sub_82F31470) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31474"))) PPC_WEAK_FUNC(sub_82F31474);
PPC_FUNC_IMPL(__imp__sub_82F31474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31478"))) PPC_WEAK_FUNC(sub_82F31478);
PPC_FUNC_IMPL(__imp__sub_82F31478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27392
	ctx.r3.s64 = r11.s64 + -27392;
}

__attribute__((alias("__imp__sub_82F31480"))) PPC_WEAK_FUNC(sub_82F31480);
PPC_FUNC_IMPL(__imp__sub_82F31480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31484"))) PPC_WEAK_FUNC(sub_82F31484);
PPC_FUNC_IMPL(__imp__sub_82F31484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31488"))) PPC_WEAK_FUNC(sub_82F31488);
PPC_FUNC_IMPL(__imp__sub_82F31488) {
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
	// stw r3,32356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32356, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F314B4"))) PPC_WEAK_FUNC(sub_82F314B4);
PPC_FUNC_IMPL(__imp__sub_82F314B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F314B8"))) PPC_WEAK_FUNC(sub_82F314B8);
PPC_FUNC_IMPL(__imp__sub_82F314B8) {
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
	// addi r3,r7,32360
	ctx.r3.s64 = ctx.r7.s64 + 32360;
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
	// addi r3,r6,-27384
	ctx.r3.s64 = ctx.r6.s64 + -27384;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31530"))) PPC_WEAK_FUNC(sub_82F31530);
PPC_FUNC_IMPL(__imp__sub_82F31530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31534"))) PPC_WEAK_FUNC(sub_82F31534);
PPC_FUNC_IMPL(__imp__sub_82F31534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31538"))) PPC_WEAK_FUNC(sub_82F31538);
PPC_FUNC_IMPL(__imp__sub_82F31538) {
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
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lwz r3,23360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 23360);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,32392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32392, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31564"))) PPC_WEAK_FUNC(sub_82F31564);
PPC_FUNC_IMPL(__imp__sub_82F31564) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31568"))) PPC_WEAK_FUNC(sub_82F31568);
PPC_FUNC_IMPL(__imp__sub_82F31568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27376
	ctx.r3.s64 = r11.s64 + -27376;
}

__attribute__((alias("__imp__sub_82F31570"))) PPC_WEAK_FUNC(sub_82F31570);
PPC_FUNC_IMPL(__imp__sub_82F31570) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31574"))) PPC_WEAK_FUNC(sub_82F31574);
PPC_FUNC_IMPL(__imp__sub_82F31574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31578"))) PPC_WEAK_FUNC(sub_82F31578);
PPC_FUNC_IMPL(__imp__sub_82F31578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27368
	ctx.r3.s64 = r11.s64 + -27368;
}

__attribute__((alias("__imp__sub_82F31580"))) PPC_WEAK_FUNC(sub_82F31580);
PPC_FUNC_IMPL(__imp__sub_82F31580) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31584"))) PPC_WEAK_FUNC(sub_82F31584);
PPC_FUNC_IMPL(__imp__sub_82F31584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31588"))) PPC_WEAK_FUNC(sub_82F31588);
PPC_FUNC_IMPL(__imp__sub_82F31588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27360
	ctx.r3.s64 = r11.s64 + -27360;
}

__attribute__((alias("__imp__sub_82F31590"))) PPC_WEAK_FUNC(sub_82F31590);
PPC_FUNC_IMPL(__imp__sub_82F31590) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31594"))) PPC_WEAK_FUNC(sub_82F31594);
PPC_FUNC_IMPL(__imp__sub_82F31594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31598"))) PPC_WEAK_FUNC(sub_82F31598);
PPC_FUNC_IMPL(__imp__sub_82F31598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27352
	ctx.r3.s64 = r11.s64 + -27352;
}

__attribute__((alias("__imp__sub_82F315A0"))) PPC_WEAK_FUNC(sub_82F315A0);
PPC_FUNC_IMPL(__imp__sub_82F315A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F315A4"))) PPC_WEAK_FUNC(sub_82F315A4);
PPC_FUNC_IMPL(__imp__sub_82F315A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F315A8"))) PPC_WEAK_FUNC(sub_82F315A8);
PPC_FUNC_IMPL(__imp__sub_82F315A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_82F315B0"))) PPC_WEAK_FUNC(sub_82F315B0);
PPC_FUNC_IMPL(__imp__sub_82F315B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F315B4"))) PPC_WEAK_FUNC(sub_82F315B4);
PPC_FUNC_IMPL(__imp__sub_82F315B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F315B8"))) PPC_WEAK_FUNC(sub_82F315B8);
PPC_FUNC_IMPL(__imp__sub_82F315B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27336
	ctx.r3.s64 = r11.s64 + -27336;
}

__attribute__((alias("__imp__sub_82F315C0"))) PPC_WEAK_FUNC(sub_82F315C0);
PPC_FUNC_IMPL(__imp__sub_82F315C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F315C4"))) PPC_WEAK_FUNC(sub_82F315C4);
PPC_FUNC_IMPL(__imp__sub_82F315C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F315C8"))) PPC_WEAK_FUNC(sub_82F315C8);
PPC_FUNC_IMPL(__imp__sub_82F315C8) {
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
	// stw r3,32412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32412, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F315F4"))) PPC_WEAK_FUNC(sub_82F315F4);
PPC_FUNC_IMPL(__imp__sub_82F315F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F315F8"))) PPC_WEAK_FUNC(sub_82F315F8);
PPC_FUNC_IMPL(__imp__sub_82F315F8) {
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
	// addi r3,r7,32416
	ctx.r3.s64 = ctx.r7.s64 + 32416;
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
	// addi r3,r6,-27304
	ctx.r3.s64 = ctx.r6.s64 + -27304;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31670"))) PPC_WEAK_FUNC(sub_82F31670);
PPC_FUNC_IMPL(__imp__sub_82F31670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31674"))) PPC_WEAK_FUNC(sub_82F31674);
PPC_FUNC_IMPL(__imp__sub_82F31674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31678"))) PPC_WEAK_FUNC(sub_82F31678);
PPC_FUNC_IMPL(__imp__sub_82F31678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27328
	ctx.r3.s64 = r11.s64 + -27328;
}

__attribute__((alias("__imp__sub_82F31680"))) PPC_WEAK_FUNC(sub_82F31680);
PPC_FUNC_IMPL(__imp__sub_82F31680) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31684"))) PPC_WEAK_FUNC(sub_82F31684);
PPC_FUNC_IMPL(__imp__sub_82F31684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31688"))) PPC_WEAK_FUNC(sub_82F31688);
PPC_FUNC_IMPL(__imp__sub_82F31688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27320
	ctx.r3.s64 = r11.s64 + -27320;
}

__attribute__((alias("__imp__sub_82F31690"))) PPC_WEAK_FUNC(sub_82F31690);
PPC_FUNC_IMPL(__imp__sub_82F31690) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31694"))) PPC_WEAK_FUNC(sub_82F31694);
PPC_FUNC_IMPL(__imp__sub_82F31694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31698"))) PPC_WEAK_FUNC(sub_82F31698);
PPC_FUNC_IMPL(__imp__sub_82F31698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27312
	ctx.r3.s64 = r11.s64 + -27312;
}

__attribute__((alias("__imp__sub_82F316A0"))) PPC_WEAK_FUNC(sub_82F316A0);
PPC_FUNC_IMPL(__imp__sub_82F316A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F316A4"))) PPC_WEAK_FUNC(sub_82F316A4);
PPC_FUNC_IMPL(__imp__sub_82F316A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F316A8"))) PPC_WEAK_FUNC(sub_82F316A8);
PPC_FUNC_IMPL(__imp__sub_82F316A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27296
	ctx.r3.s64 = r11.s64 + -27296;
}

__attribute__((alias("__imp__sub_82F316B0"))) PPC_WEAK_FUNC(sub_82F316B0);
PPC_FUNC_IMPL(__imp__sub_82F316B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F316B4"))) PPC_WEAK_FUNC(sub_82F316B4);
PPC_FUNC_IMPL(__imp__sub_82F316B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F316B8"))) PPC_WEAK_FUNC(sub_82F316B8);
PPC_FUNC_IMPL(__imp__sub_82F316B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27288
	ctx.r3.s64 = r11.s64 + -27288;
}

__attribute__((alias("__imp__sub_82F316C0"))) PPC_WEAK_FUNC(sub_82F316C0);
PPC_FUNC_IMPL(__imp__sub_82F316C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F316C4"))) PPC_WEAK_FUNC(sub_82F316C4);
PPC_FUNC_IMPL(__imp__sub_82F316C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F316C8"))) PPC_WEAK_FUNC(sub_82F316C8);
PPC_FUNC_IMPL(__imp__sub_82F316C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27280
	ctx.r3.s64 = r11.s64 + -27280;
}

__attribute__((alias("__imp__sub_82F316D0"))) PPC_WEAK_FUNC(sub_82F316D0);
PPC_FUNC_IMPL(__imp__sub_82F316D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F316D4"))) PPC_WEAK_FUNC(sub_82F316D4);
PPC_FUNC_IMPL(__imp__sub_82F316D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F316D8"))) PPC_WEAK_FUNC(sub_82F316D8);
PPC_FUNC_IMPL(__imp__sub_82F316D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27272
	ctx.r3.s64 = r11.s64 + -27272;
}

__attribute__((alias("__imp__sub_82F316E0"))) PPC_WEAK_FUNC(sub_82F316E0);
PPC_FUNC_IMPL(__imp__sub_82F316E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F316E4"))) PPC_WEAK_FUNC(sub_82F316E4);
PPC_FUNC_IMPL(__imp__sub_82F316E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F316E8"))) PPC_WEAK_FUNC(sub_82F316E8);
PPC_FUNC_IMPL(__imp__sub_82F316E8) {
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
	// stw r3,32460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32460, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31714"))) PPC_WEAK_FUNC(sub_82F31714);
PPC_FUNC_IMPL(__imp__sub_82F31714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31718"))) PPC_WEAK_FUNC(sub_82F31718);
PPC_FUNC_IMPL(__imp__sub_82F31718) {
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
	// addi r3,r7,32464
	ctx.r3.s64 = ctx.r7.s64 + 32464;
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
	// addi r3,r6,-27240
	ctx.r3.s64 = ctx.r6.s64 + -27240;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31790"))) PPC_WEAK_FUNC(sub_82F31790);
PPC_FUNC_IMPL(__imp__sub_82F31790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31794"))) PPC_WEAK_FUNC(sub_82F31794);
PPC_FUNC_IMPL(__imp__sub_82F31794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31798"))) PPC_WEAK_FUNC(sub_82F31798);
PPC_FUNC_IMPL(__imp__sub_82F31798) {
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
	// addi r3,r11,10044
	ctx.r3.s64 = r11.s64 + 10044;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,32496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F317C4"))) PPC_WEAK_FUNC(sub_82F317C4);
PPC_FUNC_IMPL(__imp__sub_82F317C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F317C8"))) PPC_WEAK_FUNC(sub_82F317C8);
PPC_FUNC_IMPL(__imp__sub_82F317C8) {
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
	// addi r3,r11,-15212
	ctx.r3.s64 = r11.s64 + -15212;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,32500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F317F4"))) PPC_WEAK_FUNC(sub_82F317F4);
PPC_FUNC_IMPL(__imp__sub_82F317F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F317F8"))) PPC_WEAK_FUNC(sub_82F317F8);
PPC_FUNC_IMPL(__imp__sub_82F317F8) {
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
	// addi r3,r11,-29344
	ctx.r3.s64 = r11.s64 + -29344;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31824"))) PPC_WEAK_FUNC(sub_82F31824);
PPC_FUNC_IMPL(__imp__sub_82F31824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31828"))) PPC_WEAK_FUNC(sub_82F31828);
PPC_FUNC_IMPL(__imp__sub_82F31828) {
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
	// addi r3,r11,-29356
	ctx.r3.s64 = r11.s64 + -29356;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r3,32508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31854"))) PPC_WEAK_FUNC(sub_82F31854);
PPC_FUNC_IMPL(__imp__sub_82F31854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31858"))) PPC_WEAK_FUNC(sub_82F31858);
PPC_FUNC_IMPL(__imp__sub_82F31858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27264
	ctx.r3.s64 = r11.s64 + -27264;
}

__attribute__((alias("__imp__sub_82F31860"))) PPC_WEAK_FUNC(sub_82F31860);
PPC_FUNC_IMPL(__imp__sub_82F31860) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31864"))) PPC_WEAK_FUNC(sub_82F31864);
PPC_FUNC_IMPL(__imp__sub_82F31864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31868"))) PPC_WEAK_FUNC(sub_82F31868);
PPC_FUNC_IMPL(__imp__sub_82F31868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27256
	ctx.r3.s64 = r11.s64 + -27256;
}

__attribute__((alias("__imp__sub_82F31870"))) PPC_WEAK_FUNC(sub_82F31870);
PPC_FUNC_IMPL(__imp__sub_82F31870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31874"))) PPC_WEAK_FUNC(sub_82F31874);
PPC_FUNC_IMPL(__imp__sub_82F31874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31878"))) PPC_WEAK_FUNC(sub_82F31878);
PPC_FUNC_IMPL(__imp__sub_82F31878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27248
	ctx.r3.s64 = r11.s64 + -27248;
}

__attribute__((alias("__imp__sub_82F31880"))) PPC_WEAK_FUNC(sub_82F31880);
PPC_FUNC_IMPL(__imp__sub_82F31880) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31884"))) PPC_WEAK_FUNC(sub_82F31884);
PPC_FUNC_IMPL(__imp__sub_82F31884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31888"))) PPC_WEAK_FUNC(sub_82F31888);
PPC_FUNC_IMPL(__imp__sub_82F31888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27224
	ctx.r3.s64 = r11.s64 + -27224;
}

__attribute__((alias("__imp__sub_82F31890"))) PPC_WEAK_FUNC(sub_82F31890);
PPC_FUNC_IMPL(__imp__sub_82F31890) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31894"))) PPC_WEAK_FUNC(sub_82F31894);
PPC_FUNC_IMPL(__imp__sub_82F31894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31898"))) PPC_WEAK_FUNC(sub_82F31898);
PPC_FUNC_IMPL(__imp__sub_82F31898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27216
	ctx.r3.s64 = r11.s64 + -27216;
}

__attribute__((alias("__imp__sub_82F318A0"))) PPC_WEAK_FUNC(sub_82F318A0);
PPC_FUNC_IMPL(__imp__sub_82F318A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F318A4"))) PPC_WEAK_FUNC(sub_82F318A4);
PPC_FUNC_IMPL(__imp__sub_82F318A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F318A8"))) PPC_WEAK_FUNC(sub_82F318A8);
PPC_FUNC_IMPL(__imp__sub_82F318A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27208
	ctx.r3.s64 = r11.s64 + -27208;
}

__attribute__((alias("__imp__sub_82F318B0"))) PPC_WEAK_FUNC(sub_82F318B0);
PPC_FUNC_IMPL(__imp__sub_82F318B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F318B4"))) PPC_WEAK_FUNC(sub_82F318B4);
PPC_FUNC_IMPL(__imp__sub_82F318B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F318B8"))) PPC_WEAK_FUNC(sub_82F318B8);
PPC_FUNC_IMPL(__imp__sub_82F318B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27200
	ctx.r3.s64 = r11.s64 + -27200;
}

__attribute__((alias("__imp__sub_82F318C0"))) PPC_WEAK_FUNC(sub_82F318C0);
PPC_FUNC_IMPL(__imp__sub_82F318C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F318C4"))) PPC_WEAK_FUNC(sub_82F318C4);
PPC_FUNC_IMPL(__imp__sub_82F318C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F318C8"))) PPC_WEAK_FUNC(sub_82F318C8);
PPC_FUNC_IMPL(__imp__sub_82F318C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27192
	ctx.r3.s64 = r11.s64 + -27192;
}

__attribute__((alias("__imp__sub_82F318D0"))) PPC_WEAK_FUNC(sub_82F318D0);
PPC_FUNC_IMPL(__imp__sub_82F318D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F318D4"))) PPC_WEAK_FUNC(sub_82F318D4);
PPC_FUNC_IMPL(__imp__sub_82F318D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F318D8"))) PPC_WEAK_FUNC(sub_82F318D8);
PPC_FUNC_IMPL(__imp__sub_82F318D8) {
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
	// stw r3,32540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31904"))) PPC_WEAK_FUNC(sub_82F31904);
PPC_FUNC_IMPL(__imp__sub_82F31904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31908"))) PPC_WEAK_FUNC(sub_82F31908);
PPC_FUNC_IMPL(__imp__sub_82F31908) {
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
	// addi r3,r7,32544
	ctx.r3.s64 = ctx.r7.s64 + 32544;
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
	// addi r3,r6,-27104
	ctx.r3.s64 = ctx.r6.s64 + -27104;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31980"))) PPC_WEAK_FUNC(sub_82F31980);
PPC_FUNC_IMPL(__imp__sub_82F31980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F31984"))) PPC_WEAK_FUNC(sub_82F31984);
PPC_FUNC_IMPL(__imp__sub_82F31984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31988"))) PPC_WEAK_FUNC(sub_82F31988);
PPC_FUNC_IMPL(__imp__sub_82F31988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27184
	ctx.r3.s64 = r11.s64 + -27184;
}

__attribute__((alias("__imp__sub_82F31990"))) PPC_WEAK_FUNC(sub_82F31990);
PPC_FUNC_IMPL(__imp__sub_82F31990) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31994"))) PPC_WEAK_FUNC(sub_82F31994);
PPC_FUNC_IMPL(__imp__sub_82F31994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31998"))) PPC_WEAK_FUNC(sub_82F31998);
PPC_FUNC_IMPL(__imp__sub_82F31998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-27176
	ctx.r3.s64 = r11.s64 + -27176;
}

__attribute__((alias("__imp__sub_82F319A0"))) PPC_WEAK_FUNC(sub_82F319A0);
PPC_FUNC_IMPL(__imp__sub_82F319A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F319A4"))) PPC_WEAK_FUNC(sub_82F319A4);
PPC_FUNC_IMPL(__imp__sub_82F319A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F319A8"))) PPC_WEAK_FUNC(sub_82F319A8);
PPC_FUNC_IMPL(__imp__sub_82F319A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,10288(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r7,32576
	ctx.r4.s64 = ctx.r7.s64 + 32576;
	// lfs f11,6664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6664);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r3,-31979
	ctx.r3.s64 = -2095775744;
	// lfs f9,10284(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10284);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,10280(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10280);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f0,32576(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32576, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r3,r3,-27168
	ctx.r3.s64 = ctx.r3.s64 + -27168;
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31A10"))) PPC_WEAK_FUNC(sub_82F31A10);
PPC_FUNC_IMPL(__imp__sub_82F31A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31A14"))) PPC_WEAK_FUNC(sub_82F31A14);
PPC_FUNC_IMPL(__imp__sub_82F31A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31A18"))) PPC_WEAK_FUNC(sub_82F31A18);
PPC_FUNC_IMPL(__imp__sub_82F31A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f13,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// lfs f0,10296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10296);
	f0.f64 = double(temp.f32);
	// addi r5,r7,32592
	ctx.r5.s64 = ctx.r7.s64 + 32592;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,10292(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r6,-27160
	ctx.r3.s64 = ctx.r6.s64 + -27160;
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,32592(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32592, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31A70"))) PPC_WEAK_FUNC(sub_82F31A70);
PPC_FUNC_IMPL(__imp__sub_82F31A70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31A74"))) PPC_WEAK_FUNC(sub_82F31A74);
PPC_FUNC_IMPL(__imp__sub_82F31A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31A78"))) PPC_WEAK_FUNC(sub_82F31A78);
PPC_FUNC_IMPL(__imp__sub_82F31A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10304);
	f0.f64 = double(temp.f32);
	// addi r5,r7,32608
	ctx.r5.s64 = ctx.r7.s64 + 32608;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-31979
	ctx.r4.s64 = -2095775744;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f12,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,10300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10300);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r4,-27152
	ctx.r3.s64 = ctx.r4.s64 + -27152;
	// fmuls f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f0,32608(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32608, temp.u32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31AD8"))) PPC_WEAK_FUNC(sub_82F31AD8);
PPC_FUNC_IMPL(__imp__sub_82F31AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31ADC"))) PPC_WEAK_FUNC(sub_82F31ADC);
PPC_FUNC_IMPL(__imp__sub_82F31ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31AE0"))) PPC_WEAK_FUNC(sub_82F31AE0);
PPC_FUNC_IMPL(__imp__sub_82F31AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10304);
	f0.f64 = double(temp.f32);
	// addi r5,r7,32624
	ctx.r5.s64 = ctx.r7.s64 + 32624;
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f11,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-31979
	ctx.r4.s64 = -2095775744;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,10300(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10300);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r4,-27144
	ctx.r3.s64 = ctx.r4.s64 + -27144;
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,32624(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32624, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f8,12(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31B40"))) PPC_WEAK_FUNC(sub_82F31B40);
PPC_FUNC_IMPL(__imp__sub_82F31B40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31B44"))) PPC_WEAK_FUNC(sub_82F31B44);
PPC_FUNC_IMPL(__imp__sub_82F31B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31B48"))) PPC_WEAK_FUNC(sub_82F31B48);
PPC_FUNC_IMPL(__imp__sub_82F31B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lfs f13,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// lfs f0,10304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10304);
	f0.f64 = double(temp.f32);
	// addi r5,r7,32640
	ctx.r5.s64 = ctx.r7.s64 + 32640;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,10300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10300);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r6,-27136
	ctx.r3.s64 = ctx.r6.s64 + -27136;
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f12,32640(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32640, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31BA0"))) PPC_WEAK_FUNC(sub_82F31BA0);
PPC_FUNC_IMPL(__imp__sub_82F31BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31BA4"))) PPC_WEAK_FUNC(sub_82F31BA4);
PPC_FUNC_IMPL(__imp__sub_82F31BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31BA8"))) PPC_WEAK_FUNC(sub_82F31BA8);
PPC_FUNC_IMPL(__imp__sub_82F31BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,10316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r7,32656
	ctx.r4.s64 = ctx.r7.s64 + 32656;
	// lfs f11,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r3,-31979
	ctx.r3.s64 = -2095775744;
	// lfs f9,10312(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,10308(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10308);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f0,32656(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32656, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r3,r3,-27128
	ctx.r3.s64 = ctx.r3.s64 + -27128;
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31C10"))) PPC_WEAK_FUNC(sub_82F31C10);
PPC_FUNC_IMPL(__imp__sub_82F31C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31C14"))) PPC_WEAK_FUNC(sub_82F31C14);
PPC_FUNC_IMPL(__imp__sub_82F31C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31C18"))) PPC_WEAK_FUNC(sub_82F31C18);
PPC_FUNC_IMPL(__imp__sub_82F31C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10300);
	f0.f64 = double(temp.f32);
	// addi r5,r7,32672
	ctx.r5.s64 = ctx.r7.s64 + 32672;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-31979
	ctx.r4.s64 = -2095775744;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f12,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,10320(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10320);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r4,-27120
	ctx.r3.s64 = ctx.r4.s64 + -27120;
	// fmuls f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f0,32672(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32672, temp.u32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31C78"))) PPC_WEAK_FUNC(sub_82F31C78);
PPC_FUNC_IMPL(__imp__sub_82F31C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31C7C"))) PPC_WEAK_FUNC(sub_82F31C7C);
PPC_FUNC_IMPL(__imp__sub_82F31C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31C80"))) PPC_WEAK_FUNC(sub_82F31C80);
PPC_FUNC_IMPL(__imp__sub_82F31C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,25456
	ctx.r9.s64 = r11.s64 + 25456;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,25456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 25456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10324);
	f0.f64 = double(temp.f32);
	// addi r5,r7,32688
	ctx.r5.s64 = ctx.r7.s64 + 32688;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-31979
	ctx.r4.s64 = -2095775744;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f12,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,10304(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 10304);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r4,-27112
	ctx.r3.s64 = ctx.r4.s64 + -27112;
	// fmuls f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f0,32688(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32688, temp.u32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f13,12(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F31CE0"))) PPC_WEAK_FUNC(sub_82F31CE0);
PPC_FUNC_IMPL(__imp__sub_82F31CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F31CE4"))) PPC_WEAK_FUNC(sub_82F31CE4);
PPC_FUNC_IMPL(__imp__sub_82F31CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31CE8"))) PPC_WEAK_FUNC(sub_82F31CE8);
PPC_FUNC_IMPL(__imp__sub_82F31CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31968
	r11.s64 = -2095054848;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r7,r11,25492
	ctx.r7.s64 = r11.s64 + 25492;
	// lis r5,-31968
	ctx.r5.s64 = -2095054848;
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// lwz r6,25492(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 25492);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// lfs f6,32672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32672);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r5,25496
	ctx.r5.s64 = ctx.r5.s64 + 25496;
	// lwz r11,-20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -20);
	// addi r30,r10,32672
	r30.s64 = ctx.r10.s64 + 32672;
	// lwz r10,-12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r9,-4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r8,-16(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -16);
	// addi r28,r4,32608
	r28.s64 = ctx.r4.s64 + 32608;
	// addi r27,r3,32592
	r27.s64 = ctx.r3.s64 + 32592;
	// lwz r7,-8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// addi r26,r31,32576
	r26.s64 = r31.s64 + 32576;
	// stfs f6,48(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// addi r25,r29,32624
	r25.s64 = r29.s64 + 32624;
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stw r11,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, r11.u32);
	// stfs f5,52(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// stw r11,108(r5)
	PPC_STORE_U32(ctx.r5.u32 + 108, r11.u32);
	// stfs f4,56(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// stw r11,140(r5)
	PPC_STORE_U32(ctx.r5.u32 + 140, r11.u32);
	// lfs f0,32592(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32592);
	f0.f64 = double(temp.f32);
	// stw r10,172(r5)
	PPC_STORE_U32(ctx.r5.u32 + 172, ctx.r10.u32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,204(r5)
	PPC_STORE_U32(ctx.r5.u32 + 204, ctx.r8.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,236(r5)
	PPC_STORE_U32(ctx.r5.u32 + 236, ctx.r8.u32);
	// lfs f11,12(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,268(r5)
	PPC_STORE_U32(ctx.r5.u32 + 268, ctx.r10.u32);
	// lfs f10,32608(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32608);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,300(r5)
	PPC_STORE_U32(ctx.r5.u32 + 300, ctx.r10.u32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,332(r5)
	PPC_STORE_U32(ctx.r5.u32 + 332, ctx.r9.u32);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,364(r5)
	PPC_STORE_U32(ctx.r5.u32 + 364, ctx.r7.u32);
	// lfs f7,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stw r7,396(r5)
	PPC_STORE_U32(ctx.r5.u32 + 396, ctx.r7.u32);
	// lfs f6,32576(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32576);
	ctx.f6.f64 = double(temp.f32);
	// stw r6,428(r5)
	PPC_STORE_U32(ctx.r5.u32 + 428, ctx.r6.u32);
	// lfs f5,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r4,-31979
	ctx.r4.s64 = -2095775744;
	// lfs f4,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f3,60(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// lfs f2,32624(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32624);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f30,12(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	f30.f64 = double(temp.f32);
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f9,20(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f8,24(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f7,28(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stfs f0,80(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// stfs f13,84(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// stfs f12,88(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// stfs f11,92(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// stfs f0,112(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 112, temp.u32);
	// stfs f13,116(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 116, temp.u32);
	// stfs f12,120(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 120, temp.u32);
	// stfs f11,124(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 124, temp.u32);
	// stfs f0,144(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 144, temp.u32);
	// stfs f13,148(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 148, temp.u32);
	// stfs f12,152(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 152, temp.u32);
	// stfs f11,156(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 156, temp.u32);
	// stfs f0,176(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 176, temp.u32);
	// stfs f13,180(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 180, temp.u32);
	// stfs f12,184(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 184, temp.u32);
	// stfs f11,188(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 188, temp.u32);
	// stfs f6,208(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 208, temp.u32);
	// stfs f5,212(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 212, temp.u32);
	// stfs f4,216(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 216, temp.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stfs f0,336(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 336, temp.u32);
	// stfs f13,340(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 340, temp.u32);
	// addi r3,r4,-27096
	ctx.r3.s64 = ctx.r4.s64 + -27096;
	// addi r10,r11,32640
	ctx.r10.s64 = r11.s64 + 32640;
	// stfs f12,344(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 344, temp.u32);
	// stfs f11,348(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 348, temp.u32);
	// stfs f0,368(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 368, temp.u32);
	// stfs f13,372(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 372, temp.u32);
	// stfs f12,376(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 376, temp.u32);
	// stfs f11,380(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 380, temp.u32);
	// lfs f0,32640(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32640);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f3,220(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 220, temp.u32);
	// stfs f6,240(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 240, temp.u32);
	// stfs f5,244(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 244, temp.u32);
	// stfs f4,248(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 248, temp.u32);
	// stfs f3,252(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 252, temp.u32);
	// stfs f10,272(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 272, temp.u32);
	// stfs f9,276(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 276, temp.u32);
	// stfs f8,280(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 280, temp.u32);
	// stfs f7,284(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 284, temp.u32);
	// stfs f2,304(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 304, temp.u32);
	// stfs f1,308(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 308, temp.u32);
	// stfs f31,312(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 312, temp.u32);
	// stfs f30,316(r5)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 316, temp.u32);
	// stfs f10,400(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 400, temp.u32);
	// stfs f9,404(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 404, temp.u32);
	// stfs f8,408(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 408, temp.u32);
	// stfs f7,412(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 412, temp.u32);
	// stfs f0,432(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 432, temp.u32);
	// stfs f13,436(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 436, temp.u32);
	// stfs f12,440(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 440, temp.u32);
	// stfs f11,444(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 444, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_82F31EE0"))) PPC_WEAK_FUNC(sub_82F31EE0);
PPC_FUNC_IMPL(__imp__sub_82F31EE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82F31EE4"))) PPC_WEAK_FUNC(sub_82F31EE4);
PPC_FUNC_IMPL(__imp__sub_82F31EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F31EE8"))) PPC_WEAK_FUNC(sub_82F31EE8);
PPC_FUNC_IMPL(__imp__sub_82F31EE8) {
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
	// stw r3,32704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32704, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F31F14"))) PPC_WEAK_FUNC(sub_82F31F14);
PPC_FUNC_IMPL(__imp__sub_82F31F14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

