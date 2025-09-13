#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F38134"))) PPC_WEAK_FUNC(sub_82F38134);
PPC_FUNC_IMPL(__imp__sub_82F38134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38138"))) PPC_WEAK_FUNC(sub_82F38138);
PPC_FUNC_IMPL(__imp__sub_82F38138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23552
	ctx.r3.s64 = r11.s64 + -23552;
}

__attribute__((alias("__imp__sub_82F38140"))) PPC_WEAK_FUNC(sub_82F38140);
PPC_FUNC_IMPL(__imp__sub_82F38140) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38144"))) PPC_WEAK_FUNC(sub_82F38144);
PPC_FUNC_IMPL(__imp__sub_82F38144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38148"))) PPC_WEAK_FUNC(sub_82F38148);
PPC_FUNC_IMPL(__imp__sub_82F38148) {
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
	// stw r11,-27856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27856, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38170"))) PPC_WEAK_FUNC(sub_82F38170);
PPC_FUNC_IMPL(__imp__sub_82F38170) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38174"))) PPC_WEAK_FUNC(sub_82F38174);
PPC_FUNC_IMPL(__imp__sub_82F38174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38178"))) PPC_WEAK_FUNC(sub_82F38178);
PPC_FUNC_IMPL(__imp__sub_82F38178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23544
	ctx.r3.s64 = r11.s64 + -23544;
}

__attribute__((alias("__imp__sub_82F38180"))) PPC_WEAK_FUNC(sub_82F38180);
PPC_FUNC_IMPL(__imp__sub_82F38180) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38184"))) PPC_WEAK_FUNC(sub_82F38184);
PPC_FUNC_IMPL(__imp__sub_82F38184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38188"))) PPC_WEAK_FUNC(sub_82F38188);
PPC_FUNC_IMPL(__imp__sub_82F38188) {
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
	// stw r11,-27836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27836, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F381B0"))) PPC_WEAK_FUNC(sub_82F381B0);
PPC_FUNC_IMPL(__imp__sub_82F381B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F381B4"))) PPC_WEAK_FUNC(sub_82F381B4);
PPC_FUNC_IMPL(__imp__sub_82F381B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F381B8"))) PPC_WEAK_FUNC(sub_82F381B8);
PPC_FUNC_IMPL(__imp__sub_82F381B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23536
	ctx.r3.s64 = r11.s64 + -23536;
}

__attribute__((alias("__imp__sub_82F381C0"))) PPC_WEAK_FUNC(sub_82F381C0);
PPC_FUNC_IMPL(__imp__sub_82F381C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F381C4"))) PPC_WEAK_FUNC(sub_82F381C4);
PPC_FUNC_IMPL(__imp__sub_82F381C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F381C8"))) PPC_WEAK_FUNC(sub_82F381C8);
PPC_FUNC_IMPL(__imp__sub_82F381C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23528
	ctx.r3.s64 = r11.s64 + -23528;
}

__attribute__((alias("__imp__sub_82F381D0"))) PPC_WEAK_FUNC(sub_82F381D0);
PPC_FUNC_IMPL(__imp__sub_82F381D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F381D4"))) PPC_WEAK_FUNC(sub_82F381D4);
PPC_FUNC_IMPL(__imp__sub_82F381D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F381D8"))) PPC_WEAK_FUNC(sub_82F381D8);
PPC_FUNC_IMPL(__imp__sub_82F381D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-27832
	ctx.r9.s64 = r11.s64 + -27832;
	// addi r8,r10,-27816
	ctx.r8.s64 = ctx.r10.s64 + -27816;
	// lis r7,-31979
	ctx.r7.s64 = -2095775744;
	// lfs f0,-27832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27832);
	f0.f64 = double(temp.f32);
	// stfs f0,-27816(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -27816, temp.u32);
	// addi r3,r7,-23520
	ctx.r3.s64 = ctx.r7.s64 + -23520;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_82F38210"))) PPC_WEAK_FUNC(sub_82F38210);
PPC_FUNC_IMPL(__imp__sub_82F38210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38214"))) PPC_WEAK_FUNC(sub_82F38214);
PPC_FUNC_IMPL(__imp__sub_82F38214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38218"))) PPC_WEAK_FUNC(sub_82F38218);
PPC_FUNC_IMPL(__imp__sub_82F38218) {
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
	// stw r3,-27800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38244"))) PPC_WEAK_FUNC(sub_82F38244);
PPC_FUNC_IMPL(__imp__sub_82F38244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38248"))) PPC_WEAK_FUNC(sub_82F38248);
PPC_FUNC_IMPL(__imp__sub_82F38248) {
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
	// addi r3,r7,-27796
	ctx.r3.s64 = ctx.r7.s64 + -27796;
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
	// addi r3,r6,-23512
	ctx.r3.s64 = ctx.r6.s64 + -23512;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F382C0"))) PPC_WEAK_FUNC(sub_82F382C0);
PPC_FUNC_IMPL(__imp__sub_82F382C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F382C4"))) PPC_WEAK_FUNC(sub_82F382C4);
PPC_FUNC_IMPL(__imp__sub_82F382C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F382C8"))) PPC_WEAK_FUNC(sub_82F382C8);
PPC_FUNC_IMPL(__imp__sub_82F382C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23504
	ctx.r3.s64 = r11.s64 + -23504;
}

__attribute__((alias("__imp__sub_82F382D0"))) PPC_WEAK_FUNC(sub_82F382D0);
PPC_FUNC_IMPL(__imp__sub_82F382D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F382D4"))) PPC_WEAK_FUNC(sub_82F382D4);
PPC_FUNC_IMPL(__imp__sub_82F382D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F382D8"))) PPC_WEAK_FUNC(sub_82F382D8);
PPC_FUNC_IMPL(__imp__sub_82F382D8) {
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
	// stw r11,-27748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27748, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38300"))) PPC_WEAK_FUNC(sub_82F38300);
PPC_FUNC_IMPL(__imp__sub_82F38300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38304"))) PPC_WEAK_FUNC(sub_82F38304);
PPC_FUNC_IMPL(__imp__sub_82F38304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38308"))) PPC_WEAK_FUNC(sub_82F38308);
PPC_FUNC_IMPL(__imp__sub_82F38308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23496
	ctx.r3.s64 = r11.s64 + -23496;
}

__attribute__((alias("__imp__sub_82F38310"))) PPC_WEAK_FUNC(sub_82F38310);
PPC_FUNC_IMPL(__imp__sub_82F38310) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38314"))) PPC_WEAK_FUNC(sub_82F38314);
PPC_FUNC_IMPL(__imp__sub_82F38314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38318"))) PPC_WEAK_FUNC(sub_82F38318);
PPC_FUNC_IMPL(__imp__sub_82F38318) {
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
	// stw r11,-27728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27728, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38340"))) PPC_WEAK_FUNC(sub_82F38340);
PPC_FUNC_IMPL(__imp__sub_82F38340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38344"))) PPC_WEAK_FUNC(sub_82F38344);
PPC_FUNC_IMPL(__imp__sub_82F38344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38348"))) PPC_WEAK_FUNC(sub_82F38348);
PPC_FUNC_IMPL(__imp__sub_82F38348) {
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
	// stw r3,-27724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27724, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38374"))) PPC_WEAK_FUNC(sub_82F38374);
PPC_FUNC_IMPL(__imp__sub_82F38374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38378"))) PPC_WEAK_FUNC(sub_82F38378);
PPC_FUNC_IMPL(__imp__sub_82F38378) {
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
	// addi r3,r7,-27720
	ctx.r3.s64 = ctx.r7.s64 + -27720;
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
	// addi r3,r6,-23488
	ctx.r3.s64 = ctx.r6.s64 + -23488;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F383F0"))) PPC_WEAK_FUNC(sub_82F383F0);
PPC_FUNC_IMPL(__imp__sub_82F383F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F383F4"))) PPC_WEAK_FUNC(sub_82F383F4);
PPC_FUNC_IMPL(__imp__sub_82F383F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F383F8"))) PPC_WEAK_FUNC(sub_82F383F8);
PPC_FUNC_IMPL(__imp__sub_82F383F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23480
	ctx.r3.s64 = r11.s64 + -23480;
}

__attribute__((alias("__imp__sub_82F38400"))) PPC_WEAK_FUNC(sub_82F38400);
PPC_FUNC_IMPL(__imp__sub_82F38400) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38404"))) PPC_WEAK_FUNC(sub_82F38404);
PPC_FUNC_IMPL(__imp__sub_82F38404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38408"))) PPC_WEAK_FUNC(sub_82F38408);
PPC_FUNC_IMPL(__imp__sub_82F38408) {
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
	// stw r11,-27672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27672, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38430"))) PPC_WEAK_FUNC(sub_82F38430);
PPC_FUNC_IMPL(__imp__sub_82F38430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38434"))) PPC_WEAK_FUNC(sub_82F38434);
PPC_FUNC_IMPL(__imp__sub_82F38434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38438"))) PPC_WEAK_FUNC(sub_82F38438);
PPC_FUNC_IMPL(__imp__sub_82F38438) {
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
	// stw r3,-27668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27668, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38464"))) PPC_WEAK_FUNC(sub_82F38464);
PPC_FUNC_IMPL(__imp__sub_82F38464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38468"))) PPC_WEAK_FUNC(sub_82F38468);
PPC_FUNC_IMPL(__imp__sub_82F38468) {
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
	// addi r3,r7,-27664
	ctx.r3.s64 = ctx.r7.s64 + -27664;
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
	// addi r3,r6,-23472
	ctx.r3.s64 = ctx.r6.s64 + -23472;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F384E0"))) PPC_WEAK_FUNC(sub_82F384E0);
PPC_FUNC_IMPL(__imp__sub_82F384E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F384E4"))) PPC_WEAK_FUNC(sub_82F384E4);
PPC_FUNC_IMPL(__imp__sub_82F384E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F384E8"))) PPC_WEAK_FUNC(sub_82F384E8);
PPC_FUNC_IMPL(__imp__sub_82F384E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23464
	ctx.r3.s64 = r11.s64 + -23464;
}

__attribute__((alias("__imp__sub_82F384F0"))) PPC_WEAK_FUNC(sub_82F384F0);
PPC_FUNC_IMPL(__imp__sub_82F384F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F384F4"))) PPC_WEAK_FUNC(sub_82F384F4);
PPC_FUNC_IMPL(__imp__sub_82F384F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F384F8"))) PPC_WEAK_FUNC(sub_82F384F8);
PPC_FUNC_IMPL(__imp__sub_82F384F8) {
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
	// stw r11,-27616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27616, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38520"))) PPC_WEAK_FUNC(sub_82F38520);
PPC_FUNC_IMPL(__imp__sub_82F38520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38524"))) PPC_WEAK_FUNC(sub_82F38524);
PPC_FUNC_IMPL(__imp__sub_82F38524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38528"))) PPC_WEAK_FUNC(sub_82F38528);
PPC_FUNC_IMPL(__imp__sub_82F38528) {
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
	// stw r3,-27612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38554"))) PPC_WEAK_FUNC(sub_82F38554);
PPC_FUNC_IMPL(__imp__sub_82F38554) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38558"))) PPC_WEAK_FUNC(sub_82F38558);
PPC_FUNC_IMPL(__imp__sub_82F38558) {
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
	// addi r3,r7,-27608
	ctx.r3.s64 = ctx.r7.s64 + -27608;
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
	// addi r3,r6,-23456
	ctx.r3.s64 = ctx.r6.s64 + -23456;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F385D0"))) PPC_WEAK_FUNC(sub_82F385D0);
PPC_FUNC_IMPL(__imp__sub_82F385D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F385D4"))) PPC_WEAK_FUNC(sub_82F385D4);
PPC_FUNC_IMPL(__imp__sub_82F385D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F385D8"))) PPC_WEAK_FUNC(sub_82F385D8);
PPC_FUNC_IMPL(__imp__sub_82F385D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23448
	ctx.r3.s64 = r11.s64 + -23448;
}

__attribute__((alias("__imp__sub_82F385E0"))) PPC_WEAK_FUNC(sub_82F385E0);
PPC_FUNC_IMPL(__imp__sub_82F385E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F385E4"))) PPC_WEAK_FUNC(sub_82F385E4);
PPC_FUNC_IMPL(__imp__sub_82F385E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F385E8"))) PPC_WEAK_FUNC(sub_82F385E8);
PPC_FUNC_IMPL(__imp__sub_82F385E8) {
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
	// stw r11,-27560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27560, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38610"))) PPC_WEAK_FUNC(sub_82F38610);
PPC_FUNC_IMPL(__imp__sub_82F38610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38614"))) PPC_WEAK_FUNC(sub_82F38614);
PPC_FUNC_IMPL(__imp__sub_82F38614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38618"))) PPC_WEAK_FUNC(sub_82F38618);
PPC_FUNC_IMPL(__imp__sub_82F38618) {
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
	// stw r3,-27556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27556, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38644"))) PPC_WEAK_FUNC(sub_82F38644);
PPC_FUNC_IMPL(__imp__sub_82F38644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38648"))) PPC_WEAK_FUNC(sub_82F38648);
PPC_FUNC_IMPL(__imp__sub_82F38648) {
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
	// addi r3,r7,-27552
	ctx.r3.s64 = ctx.r7.s64 + -27552;
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
	// addi r3,r6,-23440
	ctx.r3.s64 = ctx.r6.s64 + -23440;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F386C0"))) PPC_WEAK_FUNC(sub_82F386C0);
PPC_FUNC_IMPL(__imp__sub_82F386C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F386C4"))) PPC_WEAK_FUNC(sub_82F386C4);
PPC_FUNC_IMPL(__imp__sub_82F386C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F386C8"))) PPC_WEAK_FUNC(sub_82F386C8);
PPC_FUNC_IMPL(__imp__sub_82F386C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23432
	ctx.r3.s64 = r11.s64 + -23432;
}

__attribute__((alias("__imp__sub_82F386D0"))) PPC_WEAK_FUNC(sub_82F386D0);
PPC_FUNC_IMPL(__imp__sub_82F386D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F386D4"))) PPC_WEAK_FUNC(sub_82F386D4);
PPC_FUNC_IMPL(__imp__sub_82F386D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F386D8"))) PPC_WEAK_FUNC(sub_82F386D8);
PPC_FUNC_IMPL(__imp__sub_82F386D8) {
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
	// stw r11,-27504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27504, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38700"))) PPC_WEAK_FUNC(sub_82F38700);
PPC_FUNC_IMPL(__imp__sub_82F38700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38704"))) PPC_WEAK_FUNC(sub_82F38704);
PPC_FUNC_IMPL(__imp__sub_82F38704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38708"))) PPC_WEAK_FUNC(sub_82F38708);
PPC_FUNC_IMPL(__imp__sub_82F38708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23424
	ctx.r3.s64 = r11.s64 + -23424;
}

__attribute__((alias("__imp__sub_82F38710"))) PPC_WEAK_FUNC(sub_82F38710);
PPC_FUNC_IMPL(__imp__sub_82F38710) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38714"))) PPC_WEAK_FUNC(sub_82F38714);
PPC_FUNC_IMPL(__imp__sub_82F38714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38718"))) PPC_WEAK_FUNC(sub_82F38718);
PPC_FUNC_IMPL(__imp__sub_82F38718) {
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
	// stw r11,-27484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27484, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38740"))) PPC_WEAK_FUNC(sub_82F38740);
PPC_FUNC_IMPL(__imp__sub_82F38740) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38744"))) PPC_WEAK_FUNC(sub_82F38744);
PPC_FUNC_IMPL(__imp__sub_82F38744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38748"))) PPC_WEAK_FUNC(sub_82F38748);
PPC_FUNC_IMPL(__imp__sub_82F38748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23416
	ctx.r3.s64 = r11.s64 + -23416;
}

__attribute__((alias("__imp__sub_82F38750"))) PPC_WEAK_FUNC(sub_82F38750);
PPC_FUNC_IMPL(__imp__sub_82F38750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38754"))) PPC_WEAK_FUNC(sub_82F38754);
PPC_FUNC_IMPL(__imp__sub_82F38754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38758"))) PPC_WEAK_FUNC(sub_82F38758);
PPC_FUNC_IMPL(__imp__sub_82F38758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23408
	ctx.r3.s64 = r11.s64 + -23408;
}

__attribute__((alias("__imp__sub_82F38760"))) PPC_WEAK_FUNC(sub_82F38760);
PPC_FUNC_IMPL(__imp__sub_82F38760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38764"))) PPC_WEAK_FUNC(sub_82F38764);
PPC_FUNC_IMPL(__imp__sub_82F38764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38768"))) PPC_WEAK_FUNC(sub_82F38768);
PPC_FUNC_IMPL(__imp__sub_82F38768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23400
	ctx.r3.s64 = r11.s64 + -23400;
}

__attribute__((alias("__imp__sub_82F38770"))) PPC_WEAK_FUNC(sub_82F38770);
PPC_FUNC_IMPL(__imp__sub_82F38770) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38774"))) PPC_WEAK_FUNC(sub_82F38774);
PPC_FUNC_IMPL(__imp__sub_82F38774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38778"))) PPC_WEAK_FUNC(sub_82F38778);
PPC_FUNC_IMPL(__imp__sub_82F38778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23392
	ctx.r3.s64 = r11.s64 + -23392;
}

__attribute__((alias("__imp__sub_82F38780"))) PPC_WEAK_FUNC(sub_82F38780);
PPC_FUNC_IMPL(__imp__sub_82F38780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38784"))) PPC_WEAK_FUNC(sub_82F38784);
PPC_FUNC_IMPL(__imp__sub_82F38784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38788"))) PPC_WEAK_FUNC(sub_82F38788);
PPC_FUNC_IMPL(__imp__sub_82F38788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23384
	ctx.r3.s64 = r11.s64 + -23384;
}

__attribute__((alias("__imp__sub_82F38790"))) PPC_WEAK_FUNC(sub_82F38790);
PPC_FUNC_IMPL(__imp__sub_82F38790) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38794"))) PPC_WEAK_FUNC(sub_82F38794);
PPC_FUNC_IMPL(__imp__sub_82F38794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38798"))) PPC_WEAK_FUNC(sub_82F38798);
PPC_FUNC_IMPL(__imp__sub_82F38798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23376
	ctx.r3.s64 = r11.s64 + -23376;
}

__attribute__((alias("__imp__sub_82F387A0"))) PPC_WEAK_FUNC(sub_82F387A0);
PPC_FUNC_IMPL(__imp__sub_82F387A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F387A4"))) PPC_WEAK_FUNC(sub_82F387A4);
PPC_FUNC_IMPL(__imp__sub_82F387A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F387A8"))) PPC_WEAK_FUNC(sub_82F387A8);
PPC_FUNC_IMPL(__imp__sub_82F387A8) {
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
	// stw r11,-27464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27464, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F387D0"))) PPC_WEAK_FUNC(sub_82F387D0);
PPC_FUNC_IMPL(__imp__sub_82F387D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F387D4"))) PPC_WEAK_FUNC(sub_82F387D4);
PPC_FUNC_IMPL(__imp__sub_82F387D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F387D8"))) PPC_WEAK_FUNC(sub_82F387D8);
PPC_FUNC_IMPL(__imp__sub_82F387D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23368
	ctx.r3.s64 = r11.s64 + -23368;
}

__attribute__((alias("__imp__sub_82F387E0"))) PPC_WEAK_FUNC(sub_82F387E0);
PPC_FUNC_IMPL(__imp__sub_82F387E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F387E4"))) PPC_WEAK_FUNC(sub_82F387E4);
PPC_FUNC_IMPL(__imp__sub_82F387E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F387E8"))) PPC_WEAK_FUNC(sub_82F387E8);
PPC_FUNC_IMPL(__imp__sub_82F387E8) {
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
	// stw r11,-27444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27444, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38810"))) PPC_WEAK_FUNC(sub_82F38810);
PPC_FUNC_IMPL(__imp__sub_82F38810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38814"))) PPC_WEAK_FUNC(sub_82F38814);
PPC_FUNC_IMPL(__imp__sub_82F38814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38818"))) PPC_WEAK_FUNC(sub_82F38818);
PPC_FUNC_IMPL(__imp__sub_82F38818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23360
	ctx.r3.s64 = r11.s64 + -23360;
}

__attribute__((alias("__imp__sub_82F38820"))) PPC_WEAK_FUNC(sub_82F38820);
PPC_FUNC_IMPL(__imp__sub_82F38820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38824"))) PPC_WEAK_FUNC(sub_82F38824);
PPC_FUNC_IMPL(__imp__sub_82F38824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38828"))) PPC_WEAK_FUNC(sub_82F38828);
PPC_FUNC_IMPL(__imp__sub_82F38828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23352
	ctx.r3.s64 = r11.s64 + -23352;
}

__attribute__((alias("__imp__sub_82F38830"))) PPC_WEAK_FUNC(sub_82F38830);
PPC_FUNC_IMPL(__imp__sub_82F38830) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38834"))) PPC_WEAK_FUNC(sub_82F38834);
PPC_FUNC_IMPL(__imp__sub_82F38834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38838"))) PPC_WEAK_FUNC(sub_82F38838);
PPC_FUNC_IMPL(__imp__sub_82F38838) {
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
	// stw r11,-27424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27424, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38860"))) PPC_WEAK_FUNC(sub_82F38860);
PPC_FUNC_IMPL(__imp__sub_82F38860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38864"))) PPC_WEAK_FUNC(sub_82F38864);
PPC_FUNC_IMPL(__imp__sub_82F38864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38868"))) PPC_WEAK_FUNC(sub_82F38868);
PPC_FUNC_IMPL(__imp__sub_82F38868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23344
	ctx.r3.s64 = r11.s64 + -23344;
}

__attribute__((alias("__imp__sub_82F38870"))) PPC_WEAK_FUNC(sub_82F38870);
PPC_FUNC_IMPL(__imp__sub_82F38870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38874"))) PPC_WEAK_FUNC(sub_82F38874);
PPC_FUNC_IMPL(__imp__sub_82F38874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38878"))) PPC_WEAK_FUNC(sub_82F38878);
PPC_FUNC_IMPL(__imp__sub_82F38878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23336
	ctx.r3.s64 = r11.s64 + -23336;
}

__attribute__((alias("__imp__sub_82F38880"))) PPC_WEAK_FUNC(sub_82F38880);
PPC_FUNC_IMPL(__imp__sub_82F38880) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38884"))) PPC_WEAK_FUNC(sub_82F38884);
PPC_FUNC_IMPL(__imp__sub_82F38884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38888"))) PPC_WEAK_FUNC(sub_82F38888);
PPC_FUNC_IMPL(__imp__sub_82F38888) {
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
	// stw r11,-27404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27404, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F388B0"))) PPC_WEAK_FUNC(sub_82F388B0);
PPC_FUNC_IMPL(__imp__sub_82F388B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F388B4"))) PPC_WEAK_FUNC(sub_82F388B4);
PPC_FUNC_IMPL(__imp__sub_82F388B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F388B8"))) PPC_WEAK_FUNC(sub_82F388B8);
PPC_FUNC_IMPL(__imp__sub_82F388B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23328
	ctx.r3.s64 = r11.s64 + -23328;
}

__attribute__((alias("__imp__sub_82F388C0"))) PPC_WEAK_FUNC(sub_82F388C0);
PPC_FUNC_IMPL(__imp__sub_82F388C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F388C4"))) PPC_WEAK_FUNC(sub_82F388C4);
PPC_FUNC_IMPL(__imp__sub_82F388C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F388C8"))) PPC_WEAK_FUNC(sub_82F388C8);
PPC_FUNC_IMPL(__imp__sub_82F388C8) {
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
	// stw r11,-27384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27384, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F388F0"))) PPC_WEAK_FUNC(sub_82F388F0);
PPC_FUNC_IMPL(__imp__sub_82F388F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F388F4"))) PPC_WEAK_FUNC(sub_82F388F4);
PPC_FUNC_IMPL(__imp__sub_82F388F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F388F8"))) PPC_WEAK_FUNC(sub_82F388F8);
PPC_FUNC_IMPL(__imp__sub_82F388F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23320
	ctx.r3.s64 = r11.s64 + -23320;
}

__attribute__((alias("__imp__sub_82F38900"))) PPC_WEAK_FUNC(sub_82F38900);
PPC_FUNC_IMPL(__imp__sub_82F38900) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38904"))) PPC_WEAK_FUNC(sub_82F38904);
PPC_FUNC_IMPL(__imp__sub_82F38904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38908"))) PPC_WEAK_FUNC(sub_82F38908);
PPC_FUNC_IMPL(__imp__sub_82F38908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23312
	ctx.r3.s64 = r11.s64 + -23312;
}

__attribute__((alias("__imp__sub_82F38910"))) PPC_WEAK_FUNC(sub_82F38910);
PPC_FUNC_IMPL(__imp__sub_82F38910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38914"))) PPC_WEAK_FUNC(sub_82F38914);
PPC_FUNC_IMPL(__imp__sub_82F38914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38918"))) PPC_WEAK_FUNC(sub_82F38918);
PPC_FUNC_IMPL(__imp__sub_82F38918) {
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
	// stw r11,-27364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27364, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38940"))) PPC_WEAK_FUNC(sub_82F38940);
PPC_FUNC_IMPL(__imp__sub_82F38940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38944"))) PPC_WEAK_FUNC(sub_82F38944);
PPC_FUNC_IMPL(__imp__sub_82F38944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38948"))) PPC_WEAK_FUNC(sub_82F38948);
PPC_FUNC_IMPL(__imp__sub_82F38948) {
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
loc_82F38958:
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
	// bne cr6,0x82f38958
	if (!cr6.eq) goto loc_82F38958;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27360, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38980"))) PPC_WEAK_FUNC(sub_82F38980);
PPC_FUNC_IMPL(__imp__sub_82F38980) {
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
loc_82F38990:
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
	// bne cr6,0x82f38990
	if (!cr6.eq) goto loc_82F38990;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27356, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F389B8"))) PPC_WEAK_FUNC(sub_82F389B8);
PPC_FUNC_IMPL(__imp__sub_82F389B8) {
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
loc_82F389C8:
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
	// bne cr6,0x82f389c8
	if (!cr6.eq) goto loc_82F389C8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27352, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F389F0"))) PPC_WEAK_FUNC(sub_82F389F0);
PPC_FUNC_IMPL(__imp__sub_82F389F0) {
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
loc_82F38A00:
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
	// bne cr6,0x82f38a00
	if (!cr6.eq) goto loc_82F38A00;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27348, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38A28"))) PPC_WEAK_FUNC(sub_82F38A28);
PPC_FUNC_IMPL(__imp__sub_82F38A28) {
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
loc_82F38A38:
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
	// bne cr6,0x82f38a38
	if (!cr6.eq) goto loc_82F38A38;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27344, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38A60"))) PPC_WEAK_FUNC(sub_82F38A60);
PPC_FUNC_IMPL(__imp__sub_82F38A60) {
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
loc_82F38A70:
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
	// bne cr6,0x82f38a70
	if (!cr6.eq) goto loc_82F38A70;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27340, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38A98"))) PPC_WEAK_FUNC(sub_82F38A98);
PPC_FUNC_IMPL(__imp__sub_82F38A98) {
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
loc_82F38AA8:
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
	// bne cr6,0x82f38aa8
	if (!cr6.eq) goto loc_82F38AA8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27336, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38AD0"))) PPC_WEAK_FUNC(sub_82F38AD0);
PPC_FUNC_IMPL(__imp__sub_82F38AD0) {
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
loc_82F38AE0:
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
	// bne cr6,0x82f38ae0
	if (!cr6.eq) goto loc_82F38AE0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27332, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38B08"))) PPC_WEAK_FUNC(sub_82F38B08);
PPC_FUNC_IMPL(__imp__sub_82F38B08) {
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
loc_82F38B18:
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
	// bne cr6,0x82f38b18
	if (!cr6.eq) goto loc_82F38B18;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27328, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38B40"))) PPC_WEAK_FUNC(sub_82F38B40);
PPC_FUNC_IMPL(__imp__sub_82F38B40) {
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
loc_82F38B50:
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
	// bne cr6,0x82f38b50
	if (!cr6.eq) goto loc_82F38B50;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27324, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38B78"))) PPC_WEAK_FUNC(sub_82F38B78);
PPC_FUNC_IMPL(__imp__sub_82F38B78) {
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
loc_82F38B88:
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
	// bne cr6,0x82f38b88
	if (!cr6.eq) goto loc_82F38B88;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27320, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38BB0"))) PPC_WEAK_FUNC(sub_82F38BB0);
PPC_FUNC_IMPL(__imp__sub_82F38BB0) {
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
loc_82F38BC0:
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
	// bne cr6,0x82f38bc0
	if (!cr6.eq) goto loc_82F38BC0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27316, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38BE8"))) PPC_WEAK_FUNC(sub_82F38BE8);
PPC_FUNC_IMPL(__imp__sub_82F38BE8) {
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
loc_82F38BF8:
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
	// bne cr6,0x82f38bf8
	if (!cr6.eq) goto loc_82F38BF8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27312, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38C20"))) PPC_WEAK_FUNC(sub_82F38C20);
PPC_FUNC_IMPL(__imp__sub_82F38C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23304
	ctx.r3.s64 = r11.s64 + -23304;
}

__attribute__((alias("__imp__sub_82F38C28"))) PPC_WEAK_FUNC(sub_82F38C28);
PPC_FUNC_IMPL(__imp__sub_82F38C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38C2C"))) PPC_WEAK_FUNC(sub_82F38C2C);
PPC_FUNC_IMPL(__imp__sub_82F38C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C30"))) PPC_WEAK_FUNC(sub_82F38C30);
PPC_FUNC_IMPL(__imp__sub_82F38C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23296
	ctx.r3.s64 = r11.s64 + -23296;
}

__attribute__((alias("__imp__sub_82F38C38"))) PPC_WEAK_FUNC(sub_82F38C38);
PPC_FUNC_IMPL(__imp__sub_82F38C38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38C3C"))) PPC_WEAK_FUNC(sub_82F38C3C);
PPC_FUNC_IMPL(__imp__sub_82F38C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C40"))) PPC_WEAK_FUNC(sub_82F38C40);
PPC_FUNC_IMPL(__imp__sub_82F38C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23288
	ctx.r3.s64 = r11.s64 + -23288;
}

__attribute__((alias("__imp__sub_82F38C48"))) PPC_WEAK_FUNC(sub_82F38C48);
PPC_FUNC_IMPL(__imp__sub_82F38C48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38C4C"))) PPC_WEAK_FUNC(sub_82F38C4C);
PPC_FUNC_IMPL(__imp__sub_82F38C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C50"))) PPC_WEAK_FUNC(sub_82F38C50);
PPC_FUNC_IMPL(__imp__sub_82F38C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23280
	ctx.r3.s64 = r11.s64 + -23280;
}

__attribute__((alias("__imp__sub_82F38C58"))) PPC_WEAK_FUNC(sub_82F38C58);
PPC_FUNC_IMPL(__imp__sub_82F38C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38C5C"))) PPC_WEAK_FUNC(sub_82F38C5C);
PPC_FUNC_IMPL(__imp__sub_82F38C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C60"))) PPC_WEAK_FUNC(sub_82F38C60);
PPC_FUNC_IMPL(__imp__sub_82F38C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23272
	ctx.r3.s64 = r11.s64 + -23272;
}

__attribute__((alias("__imp__sub_82F38C68"))) PPC_WEAK_FUNC(sub_82F38C68);
PPC_FUNC_IMPL(__imp__sub_82F38C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38C6C"))) PPC_WEAK_FUNC(sub_82F38C6C);
PPC_FUNC_IMPL(__imp__sub_82F38C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C70"))) PPC_WEAK_FUNC(sub_82F38C70);
PPC_FUNC_IMPL(__imp__sub_82F38C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23264
	ctx.r3.s64 = r11.s64 + -23264;
}

__attribute__((alias("__imp__sub_82F38C78"))) PPC_WEAK_FUNC(sub_82F38C78);
PPC_FUNC_IMPL(__imp__sub_82F38C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38C7C"))) PPC_WEAK_FUNC(sub_82F38C7C);
PPC_FUNC_IMPL(__imp__sub_82F38C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38C80"))) PPC_WEAK_FUNC(sub_82F38C80);
PPC_FUNC_IMPL(__imp__sub_82F38C80) {
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
	// stw r11,-27292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27292, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38CA8"))) PPC_WEAK_FUNC(sub_82F38CA8);
PPC_FUNC_IMPL(__imp__sub_82F38CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38CAC"))) PPC_WEAK_FUNC(sub_82F38CAC);
PPC_FUNC_IMPL(__imp__sub_82F38CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38CB0"))) PPC_WEAK_FUNC(sub_82F38CB0);
PPC_FUNC_IMPL(__imp__sub_82F38CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23256
	ctx.r3.s64 = r11.s64 + -23256;
}

__attribute__((alias("__imp__sub_82F38CB8"))) PPC_WEAK_FUNC(sub_82F38CB8);
PPC_FUNC_IMPL(__imp__sub_82F38CB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38CBC"))) PPC_WEAK_FUNC(sub_82F38CBC);
PPC_FUNC_IMPL(__imp__sub_82F38CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38CC0"))) PPC_WEAK_FUNC(sub_82F38CC0);
PPC_FUNC_IMPL(__imp__sub_82F38CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23248
	ctx.r3.s64 = r11.s64 + -23248;
}

__attribute__((alias("__imp__sub_82F38CC8"))) PPC_WEAK_FUNC(sub_82F38CC8);
PPC_FUNC_IMPL(__imp__sub_82F38CC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38CCC"))) PPC_WEAK_FUNC(sub_82F38CCC);
PPC_FUNC_IMPL(__imp__sub_82F38CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38CD0"))) PPC_WEAK_FUNC(sub_82F38CD0);
PPC_FUNC_IMPL(__imp__sub_82F38CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23240
	ctx.r3.s64 = r11.s64 + -23240;
}

__attribute__((alias("__imp__sub_82F38CD8"))) PPC_WEAK_FUNC(sub_82F38CD8);
PPC_FUNC_IMPL(__imp__sub_82F38CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38CDC"))) PPC_WEAK_FUNC(sub_82F38CDC);
PPC_FUNC_IMPL(__imp__sub_82F38CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38CE0"))) PPC_WEAK_FUNC(sub_82F38CE0);
PPC_FUNC_IMPL(__imp__sub_82F38CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23232
	ctx.r3.s64 = r11.s64 + -23232;
}

__attribute__((alias("__imp__sub_82F38CE8"))) PPC_WEAK_FUNC(sub_82F38CE8);
PPC_FUNC_IMPL(__imp__sub_82F38CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38CEC"))) PPC_WEAK_FUNC(sub_82F38CEC);
PPC_FUNC_IMPL(__imp__sub_82F38CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38CF0"))) PPC_WEAK_FUNC(sub_82F38CF0);
PPC_FUNC_IMPL(__imp__sub_82F38CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23224
	ctx.r3.s64 = r11.s64 + -23224;
}

__attribute__((alias("__imp__sub_82F38CF8"))) PPC_WEAK_FUNC(sub_82F38CF8);
PPC_FUNC_IMPL(__imp__sub_82F38CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38CFC"))) PPC_WEAK_FUNC(sub_82F38CFC);
PPC_FUNC_IMPL(__imp__sub_82F38CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D00"))) PPC_WEAK_FUNC(sub_82F38D00);
PPC_FUNC_IMPL(__imp__sub_82F38D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23216
	ctx.r3.s64 = r11.s64 + -23216;
}

__attribute__((alias("__imp__sub_82F38D08"))) PPC_WEAK_FUNC(sub_82F38D08);
PPC_FUNC_IMPL(__imp__sub_82F38D08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38D0C"))) PPC_WEAK_FUNC(sub_82F38D0C);
PPC_FUNC_IMPL(__imp__sub_82F38D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D10"))) PPC_WEAK_FUNC(sub_82F38D10);
PPC_FUNC_IMPL(__imp__sub_82F38D10) {
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
	// stw r11,-27272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27272, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38D38"))) PPC_WEAK_FUNC(sub_82F38D38);
PPC_FUNC_IMPL(__imp__sub_82F38D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38D3C"))) PPC_WEAK_FUNC(sub_82F38D3C);
PPC_FUNC_IMPL(__imp__sub_82F38D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D40"))) PPC_WEAK_FUNC(sub_82F38D40);
PPC_FUNC_IMPL(__imp__sub_82F38D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23208
	ctx.r3.s64 = r11.s64 + -23208;
}

__attribute__((alias("__imp__sub_82F38D48"))) PPC_WEAK_FUNC(sub_82F38D48);
PPC_FUNC_IMPL(__imp__sub_82F38D48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38D4C"))) PPC_WEAK_FUNC(sub_82F38D4C);
PPC_FUNC_IMPL(__imp__sub_82F38D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D50"))) PPC_WEAK_FUNC(sub_82F38D50);
PPC_FUNC_IMPL(__imp__sub_82F38D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23200
	ctx.r3.s64 = r11.s64 + -23200;
}

__attribute__((alias("__imp__sub_82F38D58"))) PPC_WEAK_FUNC(sub_82F38D58);
PPC_FUNC_IMPL(__imp__sub_82F38D58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F38D5C"))) PPC_WEAK_FUNC(sub_82F38D5C);
PPC_FUNC_IMPL(__imp__sub_82F38D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D60"))) PPC_WEAK_FUNC(sub_82F38D60);
PPC_FUNC_IMPL(__imp__sub_82F38D60) {
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
	// stw r11,-27252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27252, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F38D88"))) PPC_WEAK_FUNC(sub_82F38D88);
PPC_FUNC_IMPL(__imp__sub_82F38D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38D8C"))) PPC_WEAK_FUNC(sub_82F38D8C);
PPC_FUNC_IMPL(__imp__sub_82F38D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F38D90"))) PPC_WEAK_FUNC(sub_82F38D90);
PPC_FUNC_IMPL(__imp__sub_82F38D90) {
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
loc_82F38DA0:
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
	// bne cr6,0x82f38da0
	if (!cr6.eq) goto loc_82F38DA0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27248, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38DC8"))) PPC_WEAK_FUNC(sub_82F38DC8);
PPC_FUNC_IMPL(__imp__sub_82F38DC8) {
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
loc_82F38DD8:
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
	// bne cr6,0x82f38dd8
	if (!cr6.eq) goto loc_82F38DD8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27244, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38E00"))) PPC_WEAK_FUNC(sub_82F38E00);
PPC_FUNC_IMPL(__imp__sub_82F38E00) {
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
loc_82F38E10:
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
	// bne cr6,0x82f38e10
	if (!cr6.eq) goto loc_82F38E10;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27240, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38E38"))) PPC_WEAK_FUNC(sub_82F38E38);
PPC_FUNC_IMPL(__imp__sub_82F38E38) {
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
loc_82F38E48:
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
	// bne cr6,0x82f38e48
	if (!cr6.eq) goto loc_82F38E48;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27236, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38E70"))) PPC_WEAK_FUNC(sub_82F38E70);
PPC_FUNC_IMPL(__imp__sub_82F38E70) {
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
loc_82F38E80:
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
	// bne cr6,0x82f38e80
	if (!cr6.eq) goto loc_82F38E80;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27232, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38EA8"))) PPC_WEAK_FUNC(sub_82F38EA8);
PPC_FUNC_IMPL(__imp__sub_82F38EA8) {
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
loc_82F38EB8:
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
	// bne cr6,0x82f38eb8
	if (!cr6.eq) goto loc_82F38EB8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27228, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38EE0"))) PPC_WEAK_FUNC(sub_82F38EE0);
PPC_FUNC_IMPL(__imp__sub_82F38EE0) {
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
loc_82F38EF0:
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
	// bne cr6,0x82f38ef0
	if (!cr6.eq) goto loc_82F38EF0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27224, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38F18"))) PPC_WEAK_FUNC(sub_82F38F18);
PPC_FUNC_IMPL(__imp__sub_82F38F18) {
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
loc_82F38F28:
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
	// bne cr6,0x82f38f28
	if (!cr6.eq) goto loc_82F38F28;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27220, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38F50"))) PPC_WEAK_FUNC(sub_82F38F50);
PPC_FUNC_IMPL(__imp__sub_82F38F50) {
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
loc_82F38F60:
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
	// bne cr6,0x82f38f60
	if (!cr6.eq) goto loc_82F38F60;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27216, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38F88"))) PPC_WEAK_FUNC(sub_82F38F88);
PPC_FUNC_IMPL(__imp__sub_82F38F88) {
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
loc_82F38F98:
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
	// bne cr6,0x82f38f98
	if (!cr6.eq) goto loc_82F38F98;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27212, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38FC0"))) PPC_WEAK_FUNC(sub_82F38FC0);
PPC_FUNC_IMPL(__imp__sub_82F38FC0) {
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
loc_82F38FD0:
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
	// bne cr6,0x82f38fd0
	if (!cr6.eq) goto loc_82F38FD0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27208, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F38FF8"))) PPC_WEAK_FUNC(sub_82F38FF8);
PPC_FUNC_IMPL(__imp__sub_82F38FF8) {
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
loc_82F39008:
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
	// bne cr6,0x82f39008
	if (!cr6.eq) goto loc_82F39008;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27204, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39030"))) PPC_WEAK_FUNC(sub_82F39030);
PPC_FUNC_IMPL(__imp__sub_82F39030) {
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
loc_82F39040:
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
	// bne cr6,0x82f39040
	if (!cr6.eq) goto loc_82F39040;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27200, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39068"))) PPC_WEAK_FUNC(sub_82F39068);
PPC_FUNC_IMPL(__imp__sub_82F39068) {
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
loc_82F39078:
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
	// bne cr6,0x82f39078
	if (!cr6.eq) goto loc_82F39078;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27196, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F390A0"))) PPC_WEAK_FUNC(sub_82F390A0);
PPC_FUNC_IMPL(__imp__sub_82F390A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23192
	ctx.r3.s64 = r11.s64 + -23192;
}

__attribute__((alias("__imp__sub_82F390A8"))) PPC_WEAK_FUNC(sub_82F390A8);
PPC_FUNC_IMPL(__imp__sub_82F390A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F390AC"))) PPC_WEAK_FUNC(sub_82F390AC);
PPC_FUNC_IMPL(__imp__sub_82F390AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F390B0"))) PPC_WEAK_FUNC(sub_82F390B0);
PPC_FUNC_IMPL(__imp__sub_82F390B0) {
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
	// stw r11,-27176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27176, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F390D8"))) PPC_WEAK_FUNC(sub_82F390D8);
PPC_FUNC_IMPL(__imp__sub_82F390D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F390DC"))) PPC_WEAK_FUNC(sub_82F390DC);
PPC_FUNC_IMPL(__imp__sub_82F390DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F390E0"))) PPC_WEAK_FUNC(sub_82F390E0);
PPC_FUNC_IMPL(__imp__sub_82F390E0) {
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
	// stw r3,-27172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27172, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3910C"))) PPC_WEAK_FUNC(sub_82F3910C);
PPC_FUNC_IMPL(__imp__sub_82F3910C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39110"))) PPC_WEAK_FUNC(sub_82F39110);
PPC_FUNC_IMPL(__imp__sub_82F39110) {
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
	// stw r3,-27168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27168, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F3913C"))) PPC_WEAK_FUNC(sub_82F3913C);
PPC_FUNC_IMPL(__imp__sub_82F3913C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39140"))) PPC_WEAK_FUNC(sub_82F39140);
PPC_FUNC_IMPL(__imp__sub_82F39140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23184
	ctx.r3.s64 = r11.s64 + -23184;
}

__attribute__((alias("__imp__sub_82F39148"))) PPC_WEAK_FUNC(sub_82F39148);
PPC_FUNC_IMPL(__imp__sub_82F39148) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3914C"))) PPC_WEAK_FUNC(sub_82F3914C);
PPC_FUNC_IMPL(__imp__sub_82F3914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39150"))) PPC_WEAK_FUNC(sub_82F39150);
PPC_FUNC_IMPL(__imp__sub_82F39150) {
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
	// stw r11,-27148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27148, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F39178"))) PPC_WEAK_FUNC(sub_82F39178);
PPC_FUNC_IMPL(__imp__sub_82F39178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3917C"))) PPC_WEAK_FUNC(sub_82F3917C);
PPC_FUNC_IMPL(__imp__sub_82F3917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39180"))) PPC_WEAK_FUNC(sub_82F39180);
PPC_FUNC_IMPL(__imp__sub_82F39180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-23176
	ctx.r3.s64 = r11.s64 + -23176;
}

__attribute__((alias("__imp__sub_82F39188"))) PPC_WEAK_FUNC(sub_82F39188);
PPC_FUNC_IMPL(__imp__sub_82F39188) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e95f8
	sub_828E95F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F3918C"))) PPC_WEAK_FUNC(sub_82F3918C);
PPC_FUNC_IMPL(__imp__sub_82F3918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39190"))) PPC_WEAK_FUNC(sub_82F39190);
PPC_FUNC_IMPL(__imp__sub_82F39190) {
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
	// stw r11,-27128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27128, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82F391B8"))) PPC_WEAK_FUNC(sub_82F391B8);
PPC_FUNC_IMPL(__imp__sub_82F391B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F391BC"))) PPC_WEAK_FUNC(sub_82F391BC);
PPC_FUNC_IMPL(__imp__sub_82F391BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F391C0"))) PPC_WEAK_FUNC(sub_82F391C0);
PPC_FUNC_IMPL(__imp__sub_82F391C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28588(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28588);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f391f8
	if (cr6.eq) goto loc_82F391F8;
loc_82F391DC:
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
	// bne cr6,0x82f391dc
	if (!cr6.eq) goto loc_82F391DC;
loc_82F391F8:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27124, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39204"))) PPC_WEAK_FUNC(sub_82F39204);
PPC_FUNC_IMPL(__imp__sub_82F39204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39208"))) PPC_WEAK_FUNC(sub_82F39208);
PPC_FUNC_IMPL(__imp__sub_82F39208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28600(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28600);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39240
	if (cr6.eq) goto loc_82F39240;
loc_82F39224:
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
	// bne cr6,0x82f39224
	if (!cr6.eq) goto loc_82F39224;
loc_82F39240:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27120, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F3924C"))) PPC_WEAK_FUNC(sub_82F3924C);
PPC_FUNC_IMPL(__imp__sub_82F3924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39250"))) PPC_WEAK_FUNC(sub_82F39250);
PPC_FUNC_IMPL(__imp__sub_82F39250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28604(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28604);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f39288
	if (cr6.eq) goto loc_82F39288;
loc_82F3926C:
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
	// bne cr6,0x82f3926c
	if (!cr6.eq) goto loc_82F3926C;
loc_82F39288:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27116, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F39294"))) PPC_WEAK_FUNC(sub_82F39294);
PPC_FUNC_IMPL(__imp__sub_82F39294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F39298"))) PPC_WEAK_FUNC(sub_82F39298);
PPC_FUNC_IMPL(__imp__sub_82F39298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// li r11,5381
	r11.s64 = 5381;
	// lwz r9,28620(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28620);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82f392d0
	if (cr6.eq) goto loc_82F392D0;
loc_82F392B4:
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
	// bne cr6,0x82f392b4
	if (!cr6.eq) goto loc_82F392B4;
loc_82F392D0:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-27112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27112, r11.u32);
	// blr 
	return;
}

