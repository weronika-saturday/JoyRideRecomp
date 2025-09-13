#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82731558"))) PPC_WEAK_FUNC(sub_82731558);
PPC_FUNC_IMPL(__imp__sub_82731558) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8273155C"))) PPC_WEAK_FUNC(sub_8273155C);
PPC_FUNC_IMPL(__imp__sub_8273155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731560"))) PPC_WEAK_FUNC(sub_82731560);
PPC_FUNC_IMPL(__imp__sub_82731560) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,32120
	ctx.r10.s64 = r11.s64 + 32120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827315A4"))) PPC_WEAK_FUNC(sub_827315A4);
PPC_FUNC_IMPL(__imp__sub_827315A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827315A8"))) PPC_WEAK_FUNC(sub_827315A8);
PPC_FUNC_IMPL(__imp__sub_827315A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,32120
	ctx.r10.s64 = r11.s64 + 32120;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827315F4"))) PPC_WEAK_FUNC(sub_827315F4);
PPC_FUNC_IMPL(__imp__sub_827315F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827315F8"))) PPC_WEAK_FUNC(sub_827315F8);
PPC_FUNC_IMPL(__imp__sub_827315F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,32120
	ctx.r10.s64 = r11.s64 + 32120;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82731654
	if (cr6.eq) goto loc_82731654;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82731654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731668"))) PPC_WEAK_FUNC(sub_82731668);
PPC_FUNC_IMPL(__imp__sub_82731668) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273166C"))) PPC_WEAK_FUNC(sub_8273166C);
PPC_FUNC_IMPL(__imp__sub_8273166C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731670"))) PPC_WEAK_FUNC(sub_82731670);
PPC_FUNC_IMPL(__imp__sub_82731670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82732d18
	sub_82732D18(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827316C4"))) PPC_WEAK_FUNC(sub_827316C4);
PPC_FUNC_IMPL(__imp__sub_827316C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827316C8"))) PPC_WEAK_FUNC(sub_827316C8);
PPC_FUNC_IMPL(__imp__sub_827316C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r31,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r31.u8);
	// bl 0x82732d50
	sub_82732D50(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273170C"))) PPC_WEAK_FUNC(sub_8273170C);
PPC_FUNC_IMPL(__imp__sub_8273170C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731710"))) PPC_WEAK_FUNC(sub_82731710);
PPC_FUNC_IMPL(__imp__sub_82731710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731728"))) PPC_WEAK_FUNC(sub_82731728);
PPC_FUNC_IMPL(__imp__sub_82731728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731740"))) PPC_WEAK_FUNC(sub_82731740);
PPC_FUNC_IMPL(__imp__sub_82731740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r8,12228
	ctx.r7.s64 = ctx.r8.s64 + 12228;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731784"))) PPC_WEAK_FUNC(sub_82731784);
PPC_FUNC_IMPL(__imp__sub_82731784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731788"))) PPC_WEAK_FUNC(sub_82731788);
PPC_FUNC_IMPL(__imp__sub_82731788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,12220
	ctx.r10.s64 = r11.s64 + 12220;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82731794"))) PPC_WEAK_FUNC(sub_82731794);
PPC_FUNC_IMPL(__imp__sub_82731794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731798"))) PPC_WEAK_FUNC(sub_82731798);
PPC_FUNC_IMPL(__imp__sub_82731798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827317e8
	if (cr6.eq) goto loc_827317E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,40(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x827317e8
	if (!cr6.gt) goto loc_827317E8;
	// bl 0x828ec6b0
	sub_828EC6B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
loc_827317E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827317F8"))) PPC_WEAK_FUNC(sub_827317F8);
PPC_FUNC_IMPL(__imp__sub_827317F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827317FC"))) PPC_WEAK_FUNC(sub_827317FC);
PPC_FUNC_IMPL(__imp__sub_827317FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731800"))) PPC_WEAK_FUNC(sub_82731800);
PPC_FUNC_IMPL(__imp__sub_82731800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r8,12328
	ctx.r7.s64 = ctx.r8.s64 + 12328;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lfs f13,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
}

__attribute__((alias("__imp__sub_82731844"))) PPC_WEAK_FUNC(sub_82731844);
PPC_FUNC_IMPL(__imp__sub_82731844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731848"))) PPC_WEAK_FUNC(sub_82731848);
PPC_FUNC_IMPL(__imp__sub_82731848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,12220
	ctx.r10.s64 = r11.s64 + 12220;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82731854"))) PPC_WEAK_FUNC(sub_82731854);
PPC_FUNC_IMPL(__imp__sub_82731854) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731858"))) PPC_WEAK_FUNC(sub_82731858);
PPC_FUNC_IMPL(__imp__sub_82731858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827318a8
	if (cr6.eq) goto loc_827318A8;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8273189c
	if (cr6.eq) goto loc_8273189C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827318a4
	goto loc_827318A4;
loc_8273189C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
loc_827318A4:
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
loc_827318A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827318B8"))) PPC_WEAK_FUNC(sub_827318B8);
PPC_FUNC_IMPL(__imp__sub_827318B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827318BC"))) PPC_WEAK_FUNC(sub_827318BC);
PPC_FUNC_IMPL(__imp__sub_827318BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827318C0"))) PPC_WEAK_FUNC(sub_827318C0);
PPC_FUNC_IMPL(__imp__sub_827318C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lbz r11,32(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82731910
	if (cr6.eq) goto loc_82731910;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// stfs f1,40(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x82731910
	if (!cr6.gt) goto loc_82731910;
	// bl 0x828ec6b0
	sub_828EC6B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
loc_82731910:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82731934
	if (cr6.eq) goto loc_82731934;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
loc_82731934:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731944"))) PPC_WEAK_FUNC(sub_82731944);
PPC_FUNC_IMPL(__imp__sub_82731944) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731948"))) PPC_WEAK_FUNC(sub_82731948);
PPC_FUNC_IMPL(__imp__sub_82731948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r10,32132
	ctx.r3.s64 = ctx.r10.s64 + 32132;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827319d4
	if (cr6.eq) goto loc_827319D4;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827319d4
	if (cr6.eq) goto loc_827319D4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827319d8
	if (!cr6.eq) goto loc_827319D8;
loc_827319D4:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_827319D8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,32124
	ctx.r3.s64 = r11.s64 + 32124;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82731a50
	if (cr6.eq) goto loc_82731A50;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82731a50
	if (cr6.eq) goto loc_82731A50;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82731a54
	if (!cr6.eq) goto loc_82731A54;
loc_82731A50:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82731A54:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731A78"))) PPC_WEAK_FUNC(sub_82731A78);
PPC_FUNC_IMPL(__imp__sub_82731A78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731A7C"))) PPC_WEAK_FUNC(sub_82731A7C);
PPC_FUNC_IMPL(__imp__sub_82731A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731A80"))) PPC_WEAK_FUNC(sub_82731A80);
PPC_FUNC_IMPL(__imp__sub_82731A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82731948
	sub_82731948(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,32152
	ctx.r3.s64 = r11.s64 + 32152;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82731b04
	if (cr6.eq) goto loc_82731B04;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82731b04
	if (cr6.eq) goto loc_82731B04;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82731b08
	if (!cr6.eq) goto loc_82731B08;
loc_82731B04:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82731B08:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r31,r11,32140
	r31.s64 = r11.s64 + 32140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82731bc4
	if (cr6.eq) goto loc_82731BC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822b0a50
	sub_822B0A50(ctx, base);
	// stw r3,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82731bbc
	if (cr6.eq) goto loc_82731BBC;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82731bb0
	if (cr6.eq) goto loc_82731BB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 24, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_82731BB0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,24(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 24, temp.u32);
loc_82731BBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_82731BC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82731BC8"))) PPC_WEAK_FUNC(sub_82731BC8);
PPC_FUNC_IMPL(__imp__sub_82731BC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82731BCC"))) PPC_WEAK_FUNC(sub_82731BCC);
PPC_FUNC_IMPL(__imp__sub_82731BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731BD0"))) PPC_WEAK_FUNC(sub_82731BD0);
PPC_FUNC_IMPL(__imp__sub_82731BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731BD4"))) PPC_WEAK_FUNC(sub_82731BD4);
PPC_FUNC_IMPL(__imp__sub_82731BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731BD8"))) PPC_WEAK_FUNC(sub_82731BD8);
PPC_FUNC_IMPL(__imp__sub_82731BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731BDC"))) PPC_WEAK_FUNC(sub_82731BDC);
PPC_FUNC_IMPL(__imp__sub_82731BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731BE0"))) PPC_WEAK_FUNC(sub_82731BE0);
PPC_FUNC_IMPL(__imp__sub_82731BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
}

__attribute__((alias("__imp__sub_82731BE4"))) PPC_WEAK_FUNC(sub_82731BE4);
PPC_FUNC_IMPL(__imp__sub_82731BE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731BE8"))) PPC_WEAK_FUNC(sub_82731BE8);
PPC_FUNC_IMPL(__imp__sub_82731BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82731C10"))) PPC_WEAK_FUNC(sub_82731C10);
PPC_FUNC_IMPL(__imp__sub_82731C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731C14"))) PPC_WEAK_FUNC(sub_82731C14);
PPC_FUNC_IMPL(__imp__sub_82731C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731C18"))) PPC_WEAK_FUNC(sub_82731C18);
PPC_FUNC_IMPL(__imp__sub_82731C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82731c70
	if (cr6.eq) goto loc_82731C70;
loc_82731C4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82733028
	sub_82733028(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82731c4c
	if (!cr6.eq) goto loc_82731C4C;
loc_82731C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731C84"))) PPC_WEAK_FUNC(sub_82731C84);
PPC_FUNC_IMPL(__imp__sub_82731C84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731C88"))) PPC_WEAK_FUNC(sub_82731C88);
PPC_FUNC_IMPL(__imp__sub_82731C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82731cac
	if (cr6.lt) goto loc_82731CAC;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x82731cac
	if (!cr6.lt) goto loc_82731CAC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// blr 
	return;
loc_82731CAC:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82731CB0"))) PPC_WEAK_FUNC(sub_82731CB0);
PPC_FUNC_IMPL(__imp__sub_82731CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731CB4"))) PPC_WEAK_FUNC(sub_82731CB4);
PPC_FUNC_IMPL(__imp__sub_82731CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731CB8"))) PPC_WEAK_FUNC(sub_82731CB8);
PPC_FUNC_IMPL(__imp__sub_82731CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82731CD8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82731cf4
	if (cr6.eq) goto loc_82731CF4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82731cd8
	if (!cr6.eq) goto loc_82731CD8;
	// blr 
	return;
loc_82731CF4:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// srawi r10,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82731d3c
	if (!cr6.lt) goto loc_82731D3C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82731D14:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82731d14
	if (cr6.lt) goto loc_82731D14;
loc_82731D3C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82731D48"))) PPC_WEAK_FUNC(sub_82731D48);
PPC_FUNC_IMPL(__imp__sub_82731D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731D4C"))) PPC_WEAK_FUNC(sub_82731D4C);
PPC_FUNC_IMPL(__imp__sub_82731D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731D50"))) PPC_WEAK_FUNC(sub_82731D50);
PPC_FUNC_IMPL(__imp__sub_82731D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,32192
	ctx.r9.s64 = ctx.r10.s64 + 32192;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82731D64"))) PPC_WEAK_FUNC(sub_82731D64);
PPC_FUNC_IMPL(__imp__sub_82731D64) {
	PPC_FUNC_PROLOGUE();
	// b 0x82731ff0
	sub_82731FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731D68"))) PPC_WEAK_FUNC(sub_82731D68);
PPC_FUNC_IMPL(__imp__sub_82731D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,32192
	ctx.r9.s64 = r11.s64 + 32192;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,32180
	ctx.r8.s64 = ctx.r10.s64 + 32180;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// or r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r4,r6,32200
	ctx.r4.s64 = ctx.r6.s64 + 32200;
	// stw r5,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r5.u32);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// bge cr6,0x82731df0
	if (!cr6.lt) goto loc_82731DF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82731DF0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731E14"))) PPC_WEAK_FUNC(sub_82731E14);
PPC_FUNC_IMPL(__imp__sub_82731E14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731E18"))) PPC_WEAK_FUNC(sub_82731E18);
PPC_FUNC_IMPL(__imp__sub_82731E18) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,32168
	ctx.r9.s64 = r11.s64 + 32168;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82731e5c
	if (!cr6.gt) goto loc_82731E5C;
loc_82731E44:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82731e44
	if (cr6.gt) goto loc_82731E44;
loc_82731E5C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82731e74
	if (cr6.eq) goto loc_82731E74;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82731E74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731E84"))) PPC_WEAK_FUNC(sub_82731E84);
PPC_FUNC_IMPL(__imp__sub_82731E84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731E88"))) PPC_WEAK_FUNC(sub_82731E88);
PPC_FUNC_IMPL(__imp__sub_82731E88) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,32180
	ctx.r9.s64 = ctx.r10.s64 + 32180;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731EE0"))) PPC_WEAK_FUNC(sub_82731EE0);
PPC_FUNC_IMPL(__imp__sub_82731EE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731EE4"))) PPC_WEAK_FUNC(sub_82731EE4);
PPC_FUNC_IMPL(__imp__sub_82731EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731EE8"))) PPC_WEAK_FUNC(sub_82731EE8);
PPC_FUNC_IMPL(__imp__sub_82731EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x82731fcc
	if (cr6.eq) goto loc_82731FCC;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82731f5c
	if (!cr6.eq) goto loc_82731F5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82731fcc
	if (cr6.eq) goto loc_82731FCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82731fcc
	goto loc_82731FCC;
loc_82731F5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82731e88
	sub_82731E88(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82731f88
	if (!cr6.gt) goto loc_82731F88;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82731F88:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bl 0x82731ff0
	sub_82731FF0(ctx, base);
loc_82731FCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82731FE0"))) PPC_WEAK_FUNC(sub_82731FE0);
PPC_FUNC_IMPL(__imp__sub_82731FE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82731FE4"))) PPC_WEAK_FUNC(sub_82731FE4);
PPC_FUNC_IMPL(__imp__sub_82731FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731FE8"))) PPC_WEAK_FUNC(sub_82731FE8);
PPC_FUNC_IMPL(__imp__sub_82731FE8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82731FE8"))) PPC_WEAK_FUNC(sub_82731FE8);
PPC_FUNC_IMPL(__imp__sub_82731FE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82731ee8
	sub_82731EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82731FEC"))) PPC_WEAK_FUNC(sub_82731FEC);
PPC_FUNC_IMPL(__imp__sub_82731FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82731FF0"))) PPC_WEAK_FUNC(sub_82731FF0);
PPC_FUNC_IMPL(__imp__sub_82731FF0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,32180
	ctx.r9.s64 = r11.s64 + 32180;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82732034
	if (!cr6.gt) goto loc_82732034;
loc_8273201C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8273201c
	if (cr6.gt) goto loc_8273201C;
loc_82732034:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82731ee8
	sub_82731EE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,32168
	ctx.r10.s64 = r11.s64 + 32168;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x82732070
	if (!cr6.gt) goto loc_82732070;
loc_82732058:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82732058
	if (cr6.gt) goto loc_82732058;
loc_82732070:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732080"))) PPC_WEAK_FUNC(sub_82732080);
PPC_FUNC_IMPL(__imp__sub_82732080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732084"))) PPC_WEAK_FUNC(sub_82732084);
PPC_FUNC_IMPL(__imp__sub_82732084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732088"))) PPC_WEAK_FUNC(sub_82732088);
PPC_FUNC_IMPL(__imp__sub_82732088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82731ff0
	sub_82731FF0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827320c0
	if (cr6.eq) goto loc_827320C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827320C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827320D4"))) PPC_WEAK_FUNC(sub_827320D4);
PPC_FUNC_IMPL(__imp__sub_827320D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827320D8"))) PPC_WEAK_FUNC(sub_827320D8);
PPC_FUNC_IMPL(__imp__sub_827320D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,32192
	ctx.r10.s64 = r11.s64 + 32192;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82731ff0
	sub_82731FF0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82732120
	if (cr6.eq) goto loc_82732120;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732134"))) PPC_WEAK_FUNC(sub_82732134);
PPC_FUNC_IMPL(__imp__sub_82732134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732138"))) PPC_WEAK_FUNC(sub_82732138);
PPC_FUNC_IMPL(__imp__sub_82732138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,32212
	ctx.r10.s64 = r11.s64 + 32212;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82732178
	if (cr6.eq) goto loc_82732178;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82732178:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732190"))) PPC_WEAK_FUNC(sub_82732190);
PPC_FUNC_IMPL(__imp__sub_82732190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732194"))) PPC_WEAK_FUNC(sub_82732194);
PPC_FUNC_IMPL(__imp__sub_82732194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732198"))) PPC_WEAK_FUNC(sub_82732198);
PPC_FUNC_IMPL(__imp__sub_82732198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
}

__attribute__((alias("__imp__sub_8273219C"))) PPC_WEAK_FUNC(sub_8273219C);
PPC_FUNC_IMPL(__imp__sub_8273219C) {
	PPC_FUNC_PROLOGUE();
	// b 0x826dadf0
	sub_826DADF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827321A0"))) PPC_WEAK_FUNC(sub_827321A0);
PPC_FUNC_IMPL(__imp__sub_827321A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
}

__attribute__((alias("__imp__sub_827321A4"))) PPC_WEAK_FUNC(sub_827321A4);
PPC_FUNC_IMPL(__imp__sub_827321A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826dadf8
	sub_826DADF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827321A8"))) PPC_WEAK_FUNC(sub_827321A8);
PPC_FUNC_IMPL(__imp__sub_827321A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,140
	ctx.r5.s64 = 140;
}

__attribute__((alias("__imp__sub_827321B0"))) PPC_WEAK_FUNC(sub_827321B0);
PPC_FUNC_IMPL(__imp__sub_827321B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82dbcc50
	sub_82DBCC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827321B4"))) PPC_WEAK_FUNC(sub_827321B4);
PPC_FUNC_IMPL(__imp__sub_827321B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827321B8"))) PPC_WEAK_FUNC(sub_827321B8);
PPC_FUNC_IMPL(__imp__sub_827321B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,32212
	ctx.r10.s64 = r11.s64 + 32212;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// li r6,21
	ctx.r6.s64 = 21;
	// li r30,0
	r30.s64 = 0;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r9,32216
	ctx.r7.s64 = ctx.r9.s64 + 32216;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82732240
	if (cr6.eq) goto loc_82732240;
	// li r4,1680
	ctx.r4.s64 = 1680;
	// bl 0x82dbcaa8
	sub_82DBCAA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x82732244
	goto loc_82732244;
loc_82732240:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82732244:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273225C"))) PPC_WEAK_FUNC(sub_8273225C);
PPC_FUNC_IMPL(__imp__sub_8273225C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732260"))) PPC_WEAK_FUNC(sub_82732260);
PPC_FUNC_IMPL(__imp__sub_82732260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r27,r3,8
	r27.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
loc_8273228C:
	// li r5,140
	ctx.r5.s64 = 140;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dbcd10
	sub_82DBCD10(ctx, base);
	// clrlwi r31,r3,24
	r31.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x827322c4
	if (!cr6.eq) goto loc_827322C4;
	// li r5,140
	ctx.r5.s64 = 140;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbcc50
	sub_82DBCC50(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8273228c
	if (cr6.eq) goto loc_8273228C;
loc_827322C4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_827322DC"))) PPC_WEAK_FUNC(sub_827322DC);
PPC_FUNC_IMPL(__imp__sub_827322DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_827322E0"))) PPC_WEAK_FUNC(sub_827322E0);
PPC_FUNC_IMPL(__imp__sub_827322E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,32212
	ctx.r10.s64 = r11.s64 + 32212;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82732328
	if (cr6.eq) goto loc_82732328;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82732328:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82732348
	if (cr6.eq) goto loc_82732348;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273235C"))) PPC_WEAK_FUNC(sub_8273235C);
PPC_FUNC_IMPL(__imp__sub_8273235C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732360"))) PPC_WEAK_FUNC(sub_82732360);
PPC_FUNC_IMPL(__imp__sub_82732360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,32272
	ctx.r9.s64 = r11.s64 + 32272;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82732390
	if (!cr6.gt) goto loc_82732390;
loc_82732378:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82732378
	if (cr6.gt) goto loc_82732378;
loc_82732390:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-28068
	ctx.r9.s64 = r11.s64 + -28068;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_827323A8:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x827323a8
	if (cr6.gt) goto loc_827323A8;
}

__attribute__((alias("__imp__sub_827323C0"))) PPC_WEAK_FUNC(sub_827323C0);
PPC_FUNC_IMPL(__imp__sub_827323C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827323C4"))) PPC_WEAK_FUNC(sub_827323C4);
PPC_FUNC_IMPL(__imp__sub_827323C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827323C8"))) PPC_WEAK_FUNC(sub_827323C8);
PPC_FUNC_IMPL(__imp__sub_827323C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82732360
	sub_82732360(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82732400
	if (cr6.eq) goto loc_82732400;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732414"))) PPC_WEAK_FUNC(sub_82732414);
PPC_FUNC_IMPL(__imp__sub_82732414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732418"))) PPC_WEAK_FUNC(sub_82732418);
PPC_FUNC_IMPL(__imp__sub_82732418) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82733090
	sub_82733090(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r31,156
	r11.s64 = r31.s64 + 156;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r7,r11,20
	ctx.r7.s64 = r11.s64 + 20;
	// addi r8,r10,32284
	ctx.r8.s64 = ctx.r10.s64 + 32284;
	// addi r6,r9,32272
	ctx.r6.s64 = ctx.r9.s64 + 32272;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r7,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r7.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r6,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r6.u32);
	// stw r5,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// bl 0x82733ac0
	sub_82733AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732488"))) PPC_WEAK_FUNC(sub_82732488);
PPC_FUNC_IMPL(__imp__sub_82732488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273248C"))) PPC_WEAK_FUNC(sub_8273248C);
PPC_FUNC_IMPL(__imp__sub_8273248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732490"))) PPC_WEAK_FUNC(sub_82732490);
PPC_FUNC_IMPL(__imp__sub_82732490) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// addi r10,r11,32284
	ctx.r10.s64 = r11.s64 + 32284;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82732360
	sub_82732360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82733018
	sub_82733018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827324D0"))) PPC_WEAK_FUNC(sub_827324D0);
PPC_FUNC_IMPL(__imp__sub_827324D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827324D4"))) PPC_WEAK_FUNC(sub_827324D4);
PPC_FUNC_IMPL(__imp__sub_827324D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827324D8"))) PPC_WEAK_FUNC(sub_827324D8);
PPC_FUNC_IMPL(__imp__sub_827324D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82732528
	if (!cr6.lt) goto loc_82732528;
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lwz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// lwz r8,160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r5.u8);
	// lwz r7,160(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r5.u8);
	// lwz r6,160(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r5.u8);
	// lwz r4,160(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r5.u8);
	// lwz r11,160(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// stb r5,7(r11)
	PPC_STORE_U8(r11.u32 + 7, ctx.r5.u8);
	// stb r5,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r5.u8);
	// blr 
	return;
loc_82732528:
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// li r11,2
	r11.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r5,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r5.u8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// stb r8,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r8.u8);
	// lwz r8,160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
loc_82732548:
	// lbzx r11,r8,r9
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82732568
	if (cr6.eq) goto loc_82732568;
	// lbz r11,184(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8273256c
	if (!cr6.eq) goto loc_8273256C;
loc_82732568:
	// li r11,0
	r11.s64 = 0;
loc_8273256C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, r11.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82732590
	if (cr6.eq) goto loc_82732590;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82732594
	if (!cr6.eq) goto loc_82732594;
loc_82732590:
	// li r11,0
	r11.s64 = 0;
loc_82732594:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, r11.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827325b8
	if (cr6.eq) goto loc_827325B8;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827325bc
	if (!cr6.eq) goto loc_827325BC;
loc_827325B8:
	// li r11,0
	r11.s64 = 0;
loc_827325BC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, r11.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827325e0
	if (cr6.eq) goto loc_827325E0;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x827325e4
	if (!cr6.eq) goto loc_827325E4;
loc_827325E0:
	// li r11,0
	r11.s64 = 0;
loc_827325E4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, r11.u8);
	// bdnz 0x82732548
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82732548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827325F8"))) PPC_WEAK_FUNC(sub_827325F8);
PPC_FUNC_IMPL(__imp__sub_827325F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// addi r10,r11,32284
	ctx.r10.s64 = r11.s64 + 32284;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82732360
	sub_82732360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82733018
	sub_82733018(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82732648
	if (cr6.eq) goto loc_82732648;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273265C"))) PPC_WEAK_FUNC(sub_8273265C);
PPC_FUNC_IMPL(__imp__sub_8273265C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732660"))) PPC_WEAK_FUNC(sub_82732660);
PPC_FUNC_IMPL(__imp__sub_82732660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,32308
	ctx.r10.s64 = r11.s64 + 32308;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x827326a4
	if (cr6.eq) goto loc_827326A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827326A4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827326cc
	if (cr6.eq) goto loc_827326CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827326CC:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827326E4"))) PPC_WEAK_FUNC(sub_827326E4);
PPC_FUNC_IMPL(__imp__sub_827326E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827326E8"))) PPC_WEAK_FUNC(sub_827326E8);
PPC_FUNC_IMPL(__imp__sub_827326E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_827326EC"))) PPC_WEAK_FUNC(sub_827326EC);
PPC_FUNC_IMPL(__imp__sub_827326EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82733b30
	sub_82733B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827326F0"))) PPC_WEAK_FUNC(sub_827326F0);
PPC_FUNC_IMPL(__imp__sub_827326F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acf20
	sub_826ACF20(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f31,16944(r6)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16944);
	// li r30,0
	r30.s64 = 0;
	// addi r29,r9,32356
	r29.s64 = ctx.r9.s64 + 32356;
	// addi r28,r8,32348
	r28.s64 = ctx.r8.s64 + 32348;
	// addi r27,r7,32336
	r27.s64 = ctx.r7.s64 + 32336;
	// addi r26,r10,32328
	r26.s64 = ctx.r10.s64 + 32328;
	// addi r25,r11,32320
	r25.s64 = r11.s64 + 32320;
loc_8273274C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acf20
	sub_826ACF20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0f8
	sub_826AD0F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0f8
	sub_826AD0F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0f8
	sub_826AD0F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca48
	sub_826ACA48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0f8
	sub_826AD0F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca48
	sub_826ACA48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0f8
	sub_826AD0F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad220
	sub_826AD220(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(r30.s32, 32, xer);
	// blt cr6,0x8273274c
	if (cr6.lt) goto loc_8273274C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,32312
	ctx.r5.s64 = r11.s64 + 32312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad0f8
	sub_826AD0F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_82732820"))) PPC_WEAK_FUNC(sub_82732820);
PPC_FUNC_IMPL(__imp__sub_82732820) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82732824"))) PPC_WEAK_FUNC(sub_82732824);
PPC_FUNC_IMPL(__imp__sub_82732824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732828"))) PPC_WEAK_FUNC(sub_82732828);
PPC_FUNC_IMPL(__imp__sub_82732828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82733c78
	sub_82733C78(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,32312
	ctx.r5.s64 = r11.s64 + 32312;
	// lwz r31,16(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acde8
	sub_826ACDE8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x827329d4
	if (!cr6.eq) goto loc_827329D4;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r7,32356
	r28.s64 = ctx.r7.s64 + 32356;
	// addi r27,r8,32348
	r27.s64 = ctx.r8.s64 + 32348;
	// addi r26,r9,32336
	r26.s64 = ctx.r9.s64 + 32336;
	// addi r25,r10,32328
	r25.s64 = ctx.r10.s64 + 32328;
	// addi r24,r11,32320
	r24.s64 = r11.s64 + 32320;
loc_8273289C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acec8
	sub_826ACEC8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826af008
	sub_826AF008(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca78
	sub_826ACA78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82733b40
	sub_82733B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca28
	sub_826ACA28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad190
	sub_826AD190(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca78
	sub_826ACA78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82733b58
	sub_82733B58(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad190
	sub_826AD190(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca78
	sub_826ACA78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82733b78
	sub_82733B78(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad190
	sub_826AD190(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca78
	sub_826ACA78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82733b98
	sub_82733B98(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad190
	sub_826AD190(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aca78
	sub_826ACA78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82733bb8
	sub_82733BB8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acd28
	sub_826ACD28(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad190
	sub_826AD190(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(r30.s32, 32, xer);
	// blt cr6,0x8273289c
	if (cr6.lt) goto loc_8273289C;
loc_827329D4:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_827329E4"))) PPC_WEAK_FUNC(sub_827329E4);
PPC_FUNC_IMPL(__imp__sub_827329E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827329E8"))) PPC_WEAK_FUNC(sub_827329E8);
PPC_FUNC_IMPL(__imp__sub_827329E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826acde8
	sub_826ACDE8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ad4f0
	sub_826AD4F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82732a44
	if (cr6.eq) goto loc_82732A44;
	// bl 0x827445f8
	sub_827445F8(ctx, base);
	// b 0x82732a8c
	goto loc_82732A8C;
loc_82732A44:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x826ac2e0
	sub_826AC2E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82732a70
	if (cr6.eq) goto loc_82732A70;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82732a8c
	if (!cr6.eq) goto loc_82732A8C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac5f8
	sub_826AC5F8(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// b 0x82732a8c
	goto loc_82732A8C;
loc_82732A70:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac6b0
	sub_826AC6B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82732a8c
	if (cr6.eq) goto loc_82732A8C;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f31,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f31.f64 = double(temp.f32);
loc_82732A8C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ac028
	sub_826AC028(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732AB0"))) PPC_WEAK_FUNC(sub_82732AB0);
PPC_FUNC_IMPL(__imp__sub_82732AB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732AB4"))) PPC_WEAK_FUNC(sub_82732AB4);
PPC_FUNC_IMPL(__imp__sub_82732AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732AB8"))) PPC_WEAK_FUNC(sub_82732AB8);
PPC_FUNC_IMPL(__imp__sub_82732AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,32308
	ctx.r10.s64 = r11.s64 + 32308;
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82732AE8:
	// lwzu r9,4(r11)
	ea = 4 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82732ae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82732AE8;
	// stw r4,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r4.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,32364
	r29.s64 = ctx.r10.s64 + 32364;
	// li r28,21
	r28.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82732b44
	if (cr6.eq) goto loc_82732B44;
	// bl 0x827321b8
	sub_827321B8(ctx, base);
	// b 0x82732b48
	goto loc_82732B48;
loc_82732B44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732B48:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r3,676
	ctx.r3.s64 = 676;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82732b90
	if (cr6.eq) goto loc_82732B90;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82733bd8
	sub_82733BD8(ctx, base);
	// b 0x82732b94
	goto loc_82732B94;
loc_82732B90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732B94:
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827326f0
	sub_827326F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82732BA8"))) PPC_WEAK_FUNC(sub_82732BA8);
PPC_FUNC_IMPL(__imp__sub_82732BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82732BAC"))) PPC_WEAK_FUNC(sub_82732BAC);
PPC_FUNC_IMPL(__imp__sub_82732BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732BB0"))) PPC_WEAK_FUNC(sub_82732BB0);
PPC_FUNC_IMPL(__imp__sub_82732BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82732660
	sub_82732660(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82732be8
	if (cr6.eq) goto loc_82732BE8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732BFC"))) PPC_WEAK_FUNC(sub_82732BFC);
PPC_FUNC_IMPL(__imp__sub_82732BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732C00"))) PPC_WEAK_FUNC(sub_82732C00);
PPC_FUNC_IMPL(__imp__sub_82732C00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732C08"))) PPC_WEAK_FUNC(sub_82732C08);
PPC_FUNC_IMPL(__imp__sub_82732C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lbz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82732cf0
	if (cr6.eq) goto loc_82732CF0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,0(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stfs f31,4(r9)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82732cdc
	if (cr6.eq) goto loc_82732CDC;
loc_82732C74:
	// lbz r11,32(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82732cd0
	if (cr6.eq) goto loc_82732CD0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82732cb8
	if (cr6.eq) goto loc_82732CB8;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82732cbc
	goto loc_82732CBC;
loc_82732CB8:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82732CBC:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfsx f12,r10,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
loc_82732CD0:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82732c74
	if (!cr6.eq) goto loc_82732C74;
loc_82732CDC:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
loc_82732CF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x82732260
	sub_82732260(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_82732D10"))) PPC_WEAK_FUNC(sub_82732D10);
PPC_FUNC_IMPL(__imp__sub_82732D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82732D14"))) PPC_WEAK_FUNC(sub_82732D14);
PPC_FUNC_IMPL(__imp__sub_82732D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732D18"))) PPC_WEAK_FUNC(sub_82732D18);
PPC_FUNC_IMPL(__imp__sub_82732D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82732D48"))) PPC_WEAK_FUNC(sub_82732D48);
PPC_FUNC_IMPL(__imp__sub_82732D48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732D4C"))) PPC_WEAK_FUNC(sub_82732D4C);
PPC_FUNC_IMPL(__imp__sub_82732D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732D50"))) PPC_WEAK_FUNC(sub_82732D50);
PPC_FUNC_IMPL(__imp__sub_82732D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
}

__attribute__((alias("__imp__sub_82732D88"))) PPC_WEAK_FUNC(sub_82732D88);
PPC_FUNC_IMPL(__imp__sub_82732D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732D8C"))) PPC_WEAK_FUNC(sub_82732D8C);
PPC_FUNC_IMPL(__imp__sub_82732D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732D90"))) PPC_WEAK_FUNC(sub_82732D90);
PPC_FUNC_IMPL(__imp__sub_82732D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,32436
	ctx.r10.s64 = r11.s64 + 32436;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82732dd8
	if (cr6.eq) goto loc_82732DD8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
loc_82732DD8:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82732f10
	sub_82732F10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r11,12220
	ctx.r10.s64 = r11.s64 + 12220;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732E00"))) PPC_WEAK_FUNC(sub_82732E00);
PPC_FUNC_IMPL(__imp__sub_82732E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732E04"))) PPC_WEAK_FUNC(sub_82732E04);
PPC_FUNC_IMPL(__imp__sub_82732E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732E08"))) PPC_WEAK_FUNC(sub_82732E08);
PPC_FUNC_IMPL(__imp__sub_82732E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,32436
	ctx.r8.s64 = ctx.r10.s64 + 32436;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r7,r9,12220
	ctx.r7.s64 = ctx.r9.s64 + 12220;
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r5,r6,32424
	ctx.r5.s64 = ctx.r6.s64 + 32424;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r7,r8,32440
	ctx.r7.s64 = ctx.r8.s64 + 32440;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r5,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r4.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82732ed8
	if (cr6.eq) goto loc_82732ED8;
	// bl 0x827321b8
	sub_827321B8(ctx, base);
	// b 0x82732edc
	goto loc_82732EDC;
loc_82732ED8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82732EDC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822ca8f0
	sub_822CA8F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r28,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82732F08"))) PPC_WEAK_FUNC(sub_82732F08);
PPC_FUNC_IMPL(__imp__sub_82732F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82732F0C"))) PPC_WEAK_FUNC(sub_82732F0C);
PPC_FUNC_IMPL(__imp__sub_82732F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732F10"))) PPC_WEAK_FUNC(sub_82732F10);
PPC_FUNC_IMPL(__imp__sub_82732F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,32424
	ctx.r9.s64 = r11.s64 + 32424;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82732f40
	if (!cr6.gt) goto loc_82732F40;
loc_82732F28:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82732f28
	if (cr6.gt) goto loc_82732F28;
loc_82732F40:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,7532
	ctx.r9.s64 = r11.s64 + 7532;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_82732F58:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82732f58
	if (cr6.gt) goto loc_82732F58;
}

__attribute__((alias("__imp__sub_82732F70"))) PPC_WEAK_FUNC(sub_82732F70);
PPC_FUNC_IMPL(__imp__sub_82732F70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732F74"))) PPC_WEAK_FUNC(sub_82732F74);
PPC_FUNC_IMPL(__imp__sub_82732F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82732F78"))) PPC_WEAK_FUNC(sub_82732F78);
PPC_FUNC_IMPL(__imp__sub_82732F78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82732f10
	sub_82732F10(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82732fb0
	if (cr6.eq) goto loc_82732FB0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82732FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82732FC4"))) PPC_WEAK_FUNC(sub_82732FC4);
PPC_FUNC_IMPL(__imp__sub_82732FC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82732FC8"))) PPC_WEAK_FUNC(sub_82732FC8);
PPC_FUNC_IMPL(__imp__sub_82732FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82732d90
	sub_82732D90(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82733000
	if (cr6.eq) goto loc_82733000;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82733000:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82733014"))) PPC_WEAK_FUNC(sub_82733014);
PPC_FUNC_IMPL(__imp__sub_82733014) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733018"))) PPC_WEAK_FUNC(sub_82733018);
PPC_FUNC_IMPL(__imp__sub_82733018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,32496
	ctx.r10.s64 = r11.s64 + 32496;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82733024"))) PPC_WEAK_FUNC(sub_82733024);
PPC_FUNC_IMPL(__imp__sub_82733024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733028"))) PPC_WEAK_FUNC(sub_82733028);
PPC_FUNC_IMPL(__imp__sub_82733028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r3,148
	ctx.r4.s64 = ctx.r3.s64 + 148;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82733088"))) PPC_WEAK_FUNC(sub_82733088);
PPC_FUNC_IMPL(__imp__sub_82733088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273308C"))) PPC_WEAK_FUNC(sub_8273308C);
PPC_FUNC_IMPL(__imp__sub_8273308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733090"))) PPC_WEAK_FUNC(sub_82733090);
PPC_FUNC_IMPL(__imp__sub_82733090) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,32496
	ctx.r9.s64 = ctx.r10.s64 + 32496;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r5,140
	ctx.r5.s64 = 140;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827330E4"))) PPC_WEAK_FUNC(sub_827330E4);
PPC_FUNC_IMPL(__imp__sub_827330E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827330E8"))) PPC_WEAK_FUNC(sub_827330E8);
PPC_FUNC_IMPL(__imp__sub_827330E8) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32496
	ctx.r9.s64 = r11.s64 + 32496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8273311c
	if (cr6.eq) goto loc_8273311C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273311C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273312C"))) PPC_WEAK_FUNC(sub_8273312C);
PPC_FUNC_IMPL(__imp__sub_8273312C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733130"))) PPC_WEAK_FUNC(sub_82733130);
PPC_FUNC_IMPL(__imp__sub_82733130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eaaf8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r30.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r30.u64);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bl 0x82bbafc8
	sub_82BBAFC8(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827331b0
	if (!cr6.eq) goto loc_827331B0;
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827331b0
	if (!cr6.eq) goto loc_827331B0;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stw r28,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r28.u32);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x827331b0
	if (!cr6.eq) goto loc_827331B0;
	// li r11,2
	r11.s64 = 2;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_827331B0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82bbafd0
	sub_82BBAFD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827331f4
	if (cr6.eq) goto loc_827331F4;
	// stb r30,12(r27)
	PPC_STORE_U8(r27.u32 + 12, r30.u8);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab44
	// b 0x828e9464
	return;
loc_827331F4:
	// lhz r11,100(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stb r28,12(r27)
	PPC_STORE_U8(r27.u32 + 12, r28.u8);
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82733220
	if (cr6.eq) goto loc_82733220;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733224
	goto loc_82733224;
loc_82733220:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733224:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273323c
	if (cr6.eq) goto loc_8273323C;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733240
	goto loc_82733240;
loc_8273323C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733240:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// stfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733258
	if (cr6.eq) goto loc_82733258;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x8273325c
	goto loc_8273325C;
loc_82733258:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8273325C:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// stfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733274
	if (cr6.eq) goto loc_82733274;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733278
	goto loc_82733278;
loc_82733274:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733278:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733290
	if (cr6.eq) goto loc_82733290;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733294
	goto loc_82733294;
loc_82733290:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733294:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// stfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827332ac
	if (cr6.eq) goto loc_827332AC;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x827332b0
	goto loc_827332B0;
loc_827332AC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_827332B0:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// stfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827332c8
	if (cr6.eq) goto loc_827332C8;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x827332cc
	goto loc_827332CC;
loc_827332C8:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_827332CC:
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827332e4
	if (cr6.eq) goto loc_827332E4;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x827332e8
	goto loc_827332E8;
loc_827332E4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_827332E8:
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// stfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733300
	if (cr6.eq) goto loc_82733300;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733304
	goto loc_82733304;
loc_82733300:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733304:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	// stfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273331c
	if (cr6.eq) goto loc_8273331C;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733320
	goto loc_82733320;
loc_8273331C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733320:
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	// stfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733338
	if (cr6.eq) goto loc_82733338;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x8273333c
	goto loc_8273333C;
loc_82733338:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8273333C:
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// stfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733354
	if (cr6.eq) goto loc_82733354;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733358
	goto loc_82733358;
loc_82733354:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733358:
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	// stfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82733370
	if (cr6.eq) goto loc_82733370;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733374
	goto loc_82733374;
loc_82733370:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733374:
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// stfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8273338c
	if (cr6.eq) goto loc_8273338C;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x82733390
	goto loc_82733390;
loc_8273338C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733390:
	// rlwinm r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// stfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827333a8
	if (cr6.eq) goto loc_827333A8;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// b 0x827333ac
	goto loc_827333AC;
loc_827333A8:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_827333AC:
	// lbz r6,103(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r5,102(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// stfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,6664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6664);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfs f12,32556(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32556);
	ctx.f12.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsel f2,f4,f4,f31
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f4.f64 : f31.f64;
	// fsel f1,f3,f3,f31
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : f31.f64;
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - f0.f64));
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsel f11,f13,f0,f2
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? f0.f64 : ctx.f2.f64;
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// fsel f10,f12,f0,f1
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f1.f64;
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x827335f4
	if (cr6.eq) goto loc_827335F4;
	// extsh r6,r11
	ctx.r6.s64 = r11.s16;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfs f10,32552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32552);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,32544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32544);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,32540(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32540);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,32548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32548);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f6,f7,f7,f31
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : f31.f64;
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - f0.f64));
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? f0.f64 : ctx.f6.f64;
	// fcmpu cr6,f4,f31
	cr6.compare(ctx.f4.f64, f31.f64);
	// ble cr6,0x8273348c
	if (!cr6.gt) goto loc_8273348C;
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f11,f12,f12,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f12,f7,f0,f11
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// b 0x827334a4
	goto loc_827334A4;
loc_8273348C:
	// fsubs f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fsel f7,f11,f11,f31
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : f31.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// fneg f12,f5
	ctx.f12.u64 = ctx.f5.u64 ^ 0x8000000000000000;
loc_827334A4:
	// lhz r11,106(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// stfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fsubs f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : f31.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// fcmpu cr6,f5,f31
	cr6.compare(ctx.f5.f64, f31.f64);
	// ble cr6,0x827334f0
	if (!cr6.gt) goto loc_827334F0;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f12,f13,f13,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsel f11,f11,f0,f12
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// b 0x82733508
	goto loc_82733508;
loc_827334F0:
	// fsubs f13,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fsel f11,f12,f12,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// fneg f11,f9
	ctx.f11.u64 = ctx.f9.u64 ^ 0x8000000000000000;
loc_82733508:
	// lhz r11,108(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f11,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// extsh r6,r11
	ctx.r6.s64 = r11.s16;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfs f10,32536(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32536);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,32528(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32528);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,32524(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32524);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,32532(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32532);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f6,f7,f7,f31
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : f31.f64;
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - f0.f64));
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? f0.f64 : ctx.f6.f64;
	// fcmpu cr6,f4,f31
	cr6.compare(ctx.f4.f64, f31.f64);
	// ble cr6,0x82733574
	if (!cr6.gt) goto loc_82733574;
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f11,f12,f12,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f12,f7,f0,f11
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// b 0x8273358c
	goto loc_8273358C;
loc_82733574:
	// fsubs f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fsel f7,f11,f11,f31
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : f31.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// fneg f12,f5
	ctx.f12.u64 = ctx.f5.u64 ^ 0x8000000000000000;
loc_8273358C:
	// lhz r11,110(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// stfs f12,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fsubs f11,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : f31.f64;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f7.f64;
	// fcmpu cr6,f5,f31
	cr6.compare(ctx.f5.f64, f31.f64);
	// ble cr6,0x827335d8
	if (!cr6.gt) goto loc_827335D8;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsel f12,f13,f13,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsel f0,f11,f0,f12
	f0.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// b 0x8273376c
	goto loc_8273376C;
loc_827335D8:
	// fsubs f13,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fsel f11,f12,f12,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// fneg f0,f9
	f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// b 0x8273376c
	goto loc_8273376C;
loc_827335F4:
	// extsh r7,r11
	ctx.r7.s64 = r11.s16;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// lfs f13,30352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,32520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32520);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f8,f9,f9,f31
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fsel f6,f7,f0,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f8.f64;
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, f31.f64);
	// ble cr6,0x82733644
	if (!cr6.gt) goto loc_82733644;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsel f12,f9,f0,f10
	ctx.f12.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// b 0x82733658
	goto loc_82733658;
loc_82733644:
	// fmuls f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// fneg f12,f8
	ctx.f12.u64 = ctx.f8.u64 ^ 0x8000000000000000;
loc_82733658:
	// lhz r11,106(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// stfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f8,f9,f9,f31
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fsel f6,f7,f0,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f8.f64;
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, f31.f64);
	// ble cr6,0x827336a0
	if (!cr6.gt) goto loc_827336A0;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsel f12,f9,f0,f10
	ctx.f12.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// b 0x827336b4
	goto loc_827336B4;
loc_827336A0:
	// fmuls f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// fneg f12,f8
	ctx.f12.u64 = ctx.f8.u64 ^ 0x8000000000000000;
loc_827336B4:
	// lhz r11,108(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// stfs f12,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f8,f9,f9,f31
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fsel f6,f7,f0,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f8.f64;
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, f31.f64);
	// ble cr6,0x827336fc
	if (!cr6.gt) goto loc_827336FC;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsel f12,f9,f0,f10
	ctx.f12.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// b 0x82733710
	goto loc_82733710;
loc_827336FC:
	// fmuls f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsel f10,f12,f12,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : f31.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// fneg f12,f8
	ctx.f12.u64 = ctx.f8.u64 ^ 0x8000000000000000;
loc_82733710:
	// lhz r11,110(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// stfs f12,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f8,f9,f9,f31
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : f31.f64;
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fsel f6,f7,f0,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f8.f64;
	// fcmpu cr6,f6,f31
	cr6.compare(ctx.f6.f64, f31.f64);
	// ble cr6,0x82733758
	if (!cr6.gt) goto loc_82733758;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f12,f13,f13,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsel f0,f11,f0,f12
	f0.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// b 0x8273376c
	goto loc_8273376C;
loc_82733758:
	// fmuls f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsel f12,f13,f13,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? f0.f64 : ctx.f12.f64;
	// fneg f0,f10
	f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
loc_8273376C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// lis r28,-32249
	r28.s64 = -2113470464;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// lis r29,-31962
	r29.s64 = -2094661632;
	// lfs f30,15388(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 15388);
	f30.f64 = double(temp.f32);
	// lis r30,-31962
	r30.s64 = -2094661632;
	// bne cr6,0x827337b0
	if (!cr6.eq) goto loc_827337B0;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x827337b0
	if (!cr6.eq) goto loc_827337B0;
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f31,92(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x827338bc
	goto loc_827338BC;
loc_827337B0:
	// lfs f0,-6560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f0,-6560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-6560(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmsubs f29,f11,f29,f10
	f29.f64 = double(float(ctx.f11.f64 * f29.f64 - ctx.f10.f64));
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// lfs f0,-6560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// frsp f28,f1
	f28.f64 = double(float(ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f9,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fmuls f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * f28.f64));
	// lfs f6,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmadds f1,f8,f6,f7
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f7.f64));
	// bl 0x828ea7c8
	sub_828EA7C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f12,-6564(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -6564);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x8273383c
	if (cr6.lt) goto loc_8273383C;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x8273383c
	if (!cr6.lt) goto loc_8273383C;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// b 0x82733840
	goto loc_82733840;
loc_8273383C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733840:
	// stfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x82733864
	if (cr6.gt) goto loc_82733864;
	// lfs f13,32516(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 32516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82733864
	if (cr6.gt) goto loc_82733864;
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// b 0x82733868
	goto loc_82733868;
loc_82733864:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733868:
	// stfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x8273388c
	if (cr6.lt) goto loc_8273388C;
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8273388c
	if (!cr6.lt) goto loc_8273388C;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// b 0x82733890
	goto loc_82733890;
loc_8273388C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733890:
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x827338b4
	if (cr6.gt) goto loc_827338B4;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x827338b4
	if (!cr6.lt) goto loc_827338B4;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x827338b8
	goto loc_827338B8;
loc_827338B4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_827338B8:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
loc_827338BC:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x827338e4
	if (!cr6.eq) goto loc_827338E4;
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x827338e4
	if (!cr6.eq) goto loc_827338E4;
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f31,104(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// b 0x827339e4
	goto loc_827339E4;
loc_827338E4:
	// lfs f0,-6560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f0,-6560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-6560(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// lfs f11,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f29,f29,f11,f10
	f29.f64 = double(float(f29.f64 * ctx.f11.f64 - ctx.f10.f64));
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// lfs f0,-6560(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -6560);
	f0.f64 = double(temp.f32);
	// frsp f28,f1
	f28.f64 = double(float(ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lfs f9,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fmuls f7,f28,f9
	ctx.f7.f64 = double(float(f28.f64 * ctx.f9.f64));
	// lfs f6,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmadds f1,f6,f8,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f7.f64));
	// bl 0x828ea7c8
	sub_828EA7C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f12,-6564(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + -6564);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x82733970
	if (cr6.lt) goto loc_82733970;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x82733970
	if (!cr6.lt) goto loc_82733970;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// b 0x82733974
	goto loc_82733974;
loc_82733970:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82733974:
	// stfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x82733998
	if (cr6.gt) goto loc_82733998;
	// lfs f13,32516(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 32516);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82733998
	if (cr6.gt) goto loc_82733998;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// b 0x8273399c
	goto loc_8273399C;
loc_82733998:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8273399C:
	// stfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x827339c0
	if (cr6.lt) goto loc_827339C0;
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x827339c0
	if (!cr6.lt) goto loc_827339C0;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// b 0x827339c4
	goto loc_827339C4;
loc_827339C0:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_827339C4:
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x827339e4
	if (cr6.gt) goto loc_827339E4;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x827339e4
	if (!cr6.lt) goto loc_827339E4;
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// fabs f31,f0
	f31.u64 = f0.u64 & ~0x8000000000000000;
loc_827339E4:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f31,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82733A00"))) PPC_WEAK_FUNC(sub_82733A00);
PPC_FUNC_IMPL(__imp__sub_82733A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82733A04"))) PPC_WEAK_FUNC(sub_82733A04);
PPC_FUNC_IMPL(__imp__sub_82733A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733A08"))) PPC_WEAK_FUNC(sub_82733A08);
PPC_FUNC_IMPL(__imp__sub_82733A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,184(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82733a84
	if (cr6.eq) goto loc_82733A84;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsel f10,f0,f0,f13
	ctx.f10.f64 = f0.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsel f9,f11,f11,f13
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// lfs f12,30368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30368);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - f0.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsel f6,f8,f0,f10
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? f0.f64 : ctx.f10.f64;
	// fsel f5,f7,f0,f9
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? f0.f64 : ctx.f9.f64;
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fctidz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// fctidz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// b 0x82733a90
	goto loc_82733A90;
loc_82733A84:
	// li r11,0
	r11.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
loc_82733A90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82bbafe0
	sub_82BBAFE0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82733AB8"))) PPC_WEAK_FUNC(sub_82733AB8);
PPC_FUNC_IMPL(__imp__sub_82733AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733ABC"))) PPC_WEAK_FUNC(sub_82733ABC);
PPC_FUNC_IMPL(__imp__sub_82733ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733AC0"))) PPC_WEAK_FUNC(sub_82733AC0);
PPC_FUNC_IMPL(__imp__sub_82733AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8232bce0
	sub_8232BCE0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82733B18"))) PPC_WEAK_FUNC(sub_82733B18);
PPC_FUNC_IMPL(__imp__sub_82733B18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733B1C"))) PPC_WEAK_FUNC(sub_82733B1C);
PPC_FUNC_IMPL(__imp__sub_82733B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733B20"))) PPC_WEAK_FUNC(sub_82733B20);
PPC_FUNC_IMPL(__imp__sub_82733B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,32564
	ctx.r10.s64 = r11.s64 + 32564;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733B30"))) PPC_WEAK_FUNC(sub_82733B30);
PPC_FUNC_IMPL(__imp__sub_82733B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733B3C"))) PPC_WEAK_FUNC(sub_82733B3C);
PPC_FUNC_IMPL(__imp__sub_82733B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733B40"))) PPC_WEAK_FUNC(sub_82733B40);
PPC_FUNC_IMPL(__imp__sub_82733B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// lfs f1,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_82733B54"))) PPC_WEAK_FUNC(sub_82733B54);
PPC_FUNC_IMPL(__imp__sub_82733B54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733B58"))) PPC_WEAK_FUNC(sub_82733B58);
PPC_FUNC_IMPL(__imp__sub_82733B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
}

__attribute__((alias("__imp__sub_82733B70"))) PPC_WEAK_FUNC(sub_82733B70);
PPC_FUNC_IMPL(__imp__sub_82733B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733B74"))) PPC_WEAK_FUNC(sub_82733B74);
PPC_FUNC_IMPL(__imp__sub_82733B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733B78"))) PPC_WEAK_FUNC(sub_82733B78);
PPC_FUNC_IMPL(__imp__sub_82733B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,2
	r11.s64 = ctx.r4.s64 + 2;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
}

__attribute__((alias("__imp__sub_82733B90"))) PPC_WEAK_FUNC(sub_82733B90);
PPC_FUNC_IMPL(__imp__sub_82733B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733B94"))) PPC_WEAK_FUNC(sub_82733B94);
PPC_FUNC_IMPL(__imp__sub_82733B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733B98"))) PPC_WEAK_FUNC(sub_82733B98);
PPC_FUNC_IMPL(__imp__sub_82733B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
}

__attribute__((alias("__imp__sub_82733BB0"))) PPC_WEAK_FUNC(sub_82733BB0);
PPC_FUNC_IMPL(__imp__sub_82733BB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733BB4"))) PPC_WEAK_FUNC(sub_82733BB4);
PPC_FUNC_IMPL(__imp__sub_82733BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733BB8"))) PPC_WEAK_FUNC(sub_82733BB8);
PPC_FUNC_IMPL(__imp__sub_82733BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,20
	r11.s64 = ctx.r4.s64 * 20;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
}

__attribute__((alias("__imp__sub_82733BD0"))) PPC_WEAK_FUNC(sub_82733BD0);
PPC_FUNC_IMPL(__imp__sub_82733BD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733BD4"))) PPC_WEAK_FUNC(sub_82733BD4);
PPC_FUNC_IMPL(__imp__sub_82733BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82733BD8"))) PPC_WEAK_FUNC(sub_82733BD8);
PPC_FUNC_IMPL(__imp__sub_82733BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r7,r11,32564
	ctx.r7.s64 = r11.s64 + 32564;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82733C14:
	// lwzu r8,4(r11)
	ea = 4 + r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82733c14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82733C14;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_82733C38:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stwu r10,20(r11)
	ea = 20 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x82733c38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82733C38;
	// stw r10,672(r31)
	PPC_STORE_U32(r31.u32 + 672, ctx.r10.u32);
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82733C74"))) PPC_WEAK_FUNC(sub_82733C74);
PPC_FUNC_IMPL(__imp__sub_82733C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82733C78"))) PPC_WEAK_FUNC(sub_82733C78);
PPC_FUNC_IMPL(__imp__sub_82733C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r9.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// beq cr6,0x82733dc4
	if (cr6.eq) goto loc_82733DC4;
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
loc_82733CB8:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stwu r31,20(r11)
	ea = 20 + r11.u32;
	PPC_STORE_U32(ea, r31.u32);
	r11.u32 = ea;
	// bdnz 0x82733cb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82733CB8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82732198
	sub_82732198(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827321a8
	sub_827321A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82733dac
	if (cr6.eq) goto loc_82733DAC;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
loc_82733CF4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82733D04:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82733d24
	if (cr6.lt) goto loc_82733D24;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82733D24:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82733d44
	if (cr6.lt) goto loc_82733D44;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82733D44:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82733d64
	if (cr6.lt) goto loc_82733D64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
loc_82733D64:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82733d84
	if (cr6.lt) goto loc_82733D84;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
loc_82733D84:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// bdnz 0x82733d04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82733D04;
	// stb r31,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827321a8
	sub_827321A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82733cf4
	if (!cr6.eq) goto loc_82733CF4;
loc_82733DAC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827321a0
	sub_827321A0(ctx, base);
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x828e9430
	return;
loc_82733DC4:
	// addi r11,r1,252
	r11.s64 = ctx.r1.s64 + 252;
loc_82733DC8:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// stwu r31,20(r11)
	ea = 20 + r11.u32;
	PPC_STORE_U32(ea, r31.u32);
	r11.u32 = ea;
	// bdnz 0x82733dc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82733DC8;
	// li r5,140
	ctx.r5.s64 = 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r7,r1,332
	ctx.r7.s64 = ctx.r1.s64 + 332;
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// addi r8,r1,312
	ctx.r8.s64 = ctx.r1.s64 + 312;
	// li r11,4
	r11.s64 = 4;
	// subf r7,r30,r7
	ctx.r7.s64 = ctx.r7.s64 - r30.s64;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - r30.s64;
	// addi r6,r1,264
	ctx.r6.s64 = ctx.r1.s64 + 264;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r28,r1,276
	r28.s64 = ctx.r1.s64 + 276;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// addi r29,r1,284
	r29.s64 = ctx.r1.s64 + 284;
	// addi r25,r1,304
	r25.s64 = ctx.r1.s64 + 304;
	// addi r27,r1,280
	r27.s64 = ctx.r1.s64 + 280;
	// addi r26,r1,288
	r26.s64 = ctx.r1.s64 + 288;
	// addi r22,r1,308
	r22.s64 = ctx.r1.s64 + 308;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// subf r7,r30,r4
	ctx.r7.s64 = ctx.r4.s64 - r30.s64;
	// addi r24,r1,296
	r24.s64 = ctx.r1.s64 + 296;
	// addi r23,r1,300
	r23.s64 = ctx.r1.s64 + 300;
	// addi r19,r1,320
	r19.s64 = ctx.r1.s64 + 320;
	// subf r9,r30,r6
	ctx.r9.s64 = ctx.r6.s64 - r30.s64;
	// subf r8,r30,r5
	ctx.r8.s64 = ctx.r5.s64 - r30.s64;
	// subf r4,r30,r28
	ctx.r4.s64 = r28.s64 - r30.s64;
	// addi r21,r1,324
	r21.s64 = ctx.r1.s64 + 324;
	// addi r20,r1,316
	r20.s64 = ctx.r1.s64 + 316;
	// addi r16,r1,336
	r16.s64 = ctx.r1.s64 + 336;
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// subf r6,r30,r3
	ctx.r6.s64 = ctx.r3.s64 - r30.s64;
	// subf r5,r30,r29
	ctx.r5.s64 = r29.s64 - r30.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// subf r28,r30,r25
	r28.s64 = r25.s64 - r30.s64;
	// addi r18,r1,328
	r18.s64 = ctx.r1.s64 + 328;
	// addi r17,r1,344
	r17.s64 = ctx.r1.s64 + 344;
	// subf r3,r30,r27
	ctx.r3.s64 = r27.s64 - r30.s64;
	// subf r29,r30,r26
	r29.s64 = r26.s64 - r30.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// subf r25,r30,r22
	r25.s64 = r22.s64 - r30.s64;
	// addi r15,r1,340
	r15.s64 = ctx.r1.s64 + 340;
	// addi r14,r1,348
	r14.s64 = ctx.r1.s64 + 348;
	// subf r27,r30,r24
	r27.s64 = r24.s64 - r30.s64;
	// subf r26,r30,r23
	r26.s64 = r23.s64 - r30.s64;
	// subf r22,r30,r19
	r22.s64 = r19.s64 - r30.s64;
	// subf r19,r30,r16
	r19.s64 = r16.s64 - r30.s64;
	// lwz r16,84(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r24,r30,r21
	r24.s64 = r21.s64 - r30.s64;
	// subf r23,r30,r20
	r23.s64 = r20.s64 - r30.s64;
	// subf r21,r30,r18
	r21.s64 = r18.s64 - r30.s64;
	// subf r20,r30,r17
	r20.s64 = r17.s64 - r30.s64;
	// addi r11,r30,64
	r11.s64 = r30.s64 + 64;
	// subf r18,r30,r15
	r18.s64 = r15.s64 - r30.s64;
	// subf r17,r30,r14
	r17.s64 = r14.s64 - r30.s64;
	// subf r16,r30,r16
	r16.s64 = r16.s64 - r30.s64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82733EDC:
	// lwz r15,-20(r11)
	r15.u64 = PPC_LOAD_U32(r11.u32 + -20);
	// lfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32);
	f0.f64 = double(temp.f32);
	// lwz r14,0(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stfs f0,100(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// stw r31,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r31.u32);
	// lfs f13,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, r31.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, r31.u32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stw r15,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, r15.u32);
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lwz r15,20(r11)
	r15.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// stw r14,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, r14.u32);
	// stfs f13,120(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// stw r31,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, r31.u32);
	// lfs f8,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stw r31,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, r31.u32);
	// lfs f7,108(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stw r31,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, r31.u32);
	// lwz r14,40(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r15,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, r15.u32);
	// stfs f12,140(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 140, temp.u32);
	// stw r31,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, r31.u32);
	// stw r31,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, r31.u32);
	// stw r31,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, r31.u32);
	// lwz r15,60(r11)
	r15.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// stwx r14,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r14.u32);
	// stfsu f11,160(r10)
	temp.f32 = float(ctx.f11.f64);
	ea = 160 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stwx r31,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, r31.u32);
	// stwx r31,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, r31.u32);
	// stwx r31,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, r31.u32);
	// stwx r15,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, r15.u32);
	// stfsx f10,r16,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r16.u32 + r11.u32, temp.u32);
	// lwz r14,80(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r15,92(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r31,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, r31.u32);
	// stwx r31,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, r31.u32);
	// stwx r31,r29,r11
	PPC_STORE_U32(r29.u32 + r11.u32, r31.u32);
	// stwx r14,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, r14.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// stfsx f9,r15,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r15.u32 + r11.u32, temp.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r15,80(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r31,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, r31.u32);
	// stwx r31,r26,r11
	PPC_STORE_U32(r26.u32 + r11.u32, r31.u32);
	// stwx r31,r25,r11
	PPC_STORE_U32(r25.u32 + r11.u32, r31.u32);
	// stwx r10,r24,r11
	PPC_STORE_U32(r24.u32 + r11.u32, ctx.r10.u32);
	// stfsx f8,r15,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r15.u32 + r11.u32, temp.u32);
	// lwz r14,120(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r15,88(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r31,r23,r11
	PPC_STORE_U32(r23.u32 + r11.u32, r31.u32);
	// stwx r31,r22,r11
	PPC_STORE_U32(r22.u32 + r11.u32, r31.u32);
	// stwx r31,r21,r11
	PPC_STORE_U32(r21.u32 + r11.u32, r31.u32);
	// stwx r14,r20,r11
	PPC_STORE_U32(r20.u32 + r11.u32, r14.u32);
	// stfsx f7,r15,r11
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r15.u32 + r11.u32, temp.u32);
	// stwx r31,r19,r11
	PPC_STORE_U32(r19.u32 + r11.u32, r31.u32);
	// stwx r31,r18,r11
	PPC_STORE_U32(r18.u32 + r11.u32, r31.u32);
	// stwx r31,r17,r11
	PPC_STORE_U32(r17.u32 + r11.u32, r31.u32);
	// addi r11,r11,160
	r11.s64 = r11.s64 + 160;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bdnz 0x82733edc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82733EDC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82732198
	sub_82732198(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827321a8
	sub_827321A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82734100
	if (cr6.eq) goto loc_82734100;
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// li r29,1
	r29.s64 = 1;
loc_82734000:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r1,236
	r11.s64 = ctx.r1.s64 + 236;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r9,672(r30)
	PPC_STORE_U32(r30.u32 + 672, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82734020:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82734074
	if (cr6.lt) goto loc_82734074;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82734048
	if (!cr6.eq) goto loc_82734048;
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
loc_82734048:
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x827340d8
	if (!cr6.gt) goto loc_827340D8;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r5,r6
	ctx.r4.s32 = ctx.r5.s32 / ctx.r6.s32;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// subf. r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827340d8
	if (!cr0.eq) goto loc_827340D8;
	// stw r29,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r29.u32);
	// b 0x827340d8
	goto loc_827340D8;
loc_82734074:
	// lfs f12,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x827340c4
	if (cr6.lt) goto loc_827340C4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x827340d8
	if (!cr6.gt) goto loc_827340D8;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x827340d8
	if (!cr6.gt) goto loc_827340D8;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r5,r6
	ctx.r4.s32 = ctx.r5.s32 / ctx.r6.s32;
	// mullw r3,r4,r6
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// subf. r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827340d8
	if (!cr0.eq) goto loc_827340D8;
	// stw r29,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r29.u32);
	// b 0x827340d8
	goto loc_827340D8;
loc_827340C4:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x827340d4
	if (cr6.lt) goto loc_827340D4;
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
loc_827340D4:
	// stw r31,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r31.u32);
loc_827340D8:
	// stfsu f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	ea = 20 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82734020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82734020;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827321a8
	sub_827321A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82734000
	if (!cr6.eq) goto loc_82734000;
loc_82734100:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827321a0
	sub_827321A0(ctx, base);
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
}

__attribute__((alias("__imp__sub_82734124"))) PPC_WEAK_FUNC(sub_82734124);
PPC_FUNC_IMPL(__imp__sub_82734124) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82734128"))) PPC_WEAK_FUNC(sub_82734128);
PPC_FUNC_IMPL(__imp__sub_82734128) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32564
	ctx.r9.s64 = r11.s64 + 32564;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8273415c
	if (cr6.eq) goto loc_8273415C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8273415C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8273416C"))) PPC_WEAK_FUNC(sub_8273416C);
PPC_FUNC_IMPL(__imp__sub_8273416C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734170"))) PPC_WEAK_FUNC(sub_82734170);
PPC_FUNC_IMPL(__imp__sub_82734170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,32572
	ctx.r10.s64 = r11.s64 + 32572;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734180"))) PPC_WEAK_FUNC(sub_82734180);
PPC_FUNC_IMPL(__imp__sub_82734180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addic. r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x827341d4
	if (cr0.lt) goto loc_827341D4;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8273419C:
	// add r11,r7,r8
	r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// ble cr6,0x827341c4
	if (!cr6.gt) goto loc_827341C4;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// b 0x827341cc
	goto loc_827341CC;
loc_827341C4:
	// bge cr6,0x827341dc
	if (!cr6.lt) goto loc_827341DC;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
loc_827341CC:
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// ble cr6,0x8273419c
	if (!cr6.gt) goto loc_8273419C;
loc_827341D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827341DC:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_827341E8"))) PPC_WEAK_FUNC(sub_827341E8);
PPC_FUNC_IMPL(__imp__sub_827341E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827341EC"))) PPC_WEAK_FUNC(sub_827341EC);
PPC_FUNC_IMPL(__imp__sub_827341EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827341F0"))) PPC_WEAK_FUNC(sub_827341F0);
PPC_FUNC_IMPL(__imp__sub_827341F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8273420C:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8273420c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8273420C;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82734240:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82734240
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82734240;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82734274:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82734274
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82734274;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_827342A8:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x827342a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827342A8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_827342DC:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x827342dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827342DC;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82734310:
	// lbzu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// slw r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82734310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82734310;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r11,r6,24
	r11.s64 = ctx.r6.s64 + 24;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82734344"))) PPC_WEAK_FUNC(sub_82734344);
PPC_FUNC_IMPL(__imp__sub_82734344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734348"))) PPC_WEAK_FUNC(sub_82734348);
PPC_FUNC_IMPL(__imp__sub_82734348) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r9,r10,32572
	ctx.r9.s64 = ctx.r10.s64 + 32572;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bl 0x827341f0
	sub_827341F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82734394"))) PPC_WEAK_FUNC(sub_82734394);
PPC_FUNC_IMPL(__imp__sub_82734394) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734398"))) PPC_WEAK_FUNC(sub_82734398);
PPC_FUNC_IMPL(__imp__sub_82734398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82734180
	sub_82734180(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827343BC"))) PPC_WEAK_FUNC(sub_827343BC);
PPC_FUNC_IMPL(__imp__sub_827343BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827343C0"))) PPC_WEAK_FUNC(sub_827343C0);
PPC_FUNC_IMPL(__imp__sub_827343C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82734400
	if (cr6.eq) goto loc_82734400;
loc_827343E4:
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
	// bne cr6,0x827343e4
	if (!cr6.eq) goto loc_827343E4;
loc_82734400:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82734180
	sub_82734180(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82734420"))) PPC_WEAK_FUNC(sub_82734420);
PPC_FUNC_IMPL(__imp__sub_82734420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734424"))) PPC_WEAK_FUNC(sub_82734424);
PPC_FUNC_IMPL(__imp__sub_82734424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82734428"))) PPC_WEAK_FUNC(sub_82734428);
PPC_FUNC_IMPL(__imp__sub_82734428) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r11,5381
	r11.s64 = 5381;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82734468
	if (cr6.eq) goto loc_82734468;
loc_8273444C:
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
	// bne cr6,0x8273444c
	if (!cr6.eq) goto loc_8273444C;
loc_82734468:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82734180
	sub_82734180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82734480"))) PPC_WEAK_FUNC(sub_82734480);
PPC_FUNC_IMPL(__imp__sub_82734480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734484"))) PPC_WEAK_FUNC(sub_82734484);
PPC_FUNC_IMPL(__imp__sub_82734484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82734488"))) PPC_WEAK_FUNC(sub_82734488);
PPC_FUNC_IMPL(__imp__sub_82734488) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,32572
	ctx.r9.s64 = r11.s64 + 32572;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x827344bc
	if (cr6.eq) goto loc_827344BC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827344BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827344CC"))) PPC_WEAK_FUNC(sub_827344CC);
PPC_FUNC_IMPL(__imp__sub_827344CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827344D0"))) PPC_WEAK_FUNC(sub_827344D0);
PPC_FUNC_IMPL(__imp__sub_827344D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// addi r9,r10,32580
	ctx.r9.s64 = ctx.r10.s64 + 32580;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
}

__attribute__((alias("__imp__sub_8273450C"))) PPC_WEAK_FUNC(sub_8273450C);
PPC_FUNC_IMPL(__imp__sub_8273450C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734510"))) PPC_WEAK_FUNC(sub_82734510);
PPC_FUNC_IMPL(__imp__sub_82734510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,32580
	ctx.r10.s64 = r11.s64 + 32580;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8273451C"))) PPC_WEAK_FUNC(sub_8273451C);
PPC_FUNC_IMPL(__imp__sub_8273451C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734520"))) PPC_WEAK_FUNC(sub_82734520);
PPC_FUNC_IMPL(__imp__sub_82734520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bb9588
	sub_82BB9588(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82bb9388
	sub_82BB9388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bgt cr6,0x827346a4
	if (cr6.gt) goto loc_827346A4;
	// lis r12,-32141
	r12.s64 = -2106392576;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17784
	r12.s64 = r12.s64 + 17784;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_827345A8;
	case 1:
		goto loc_827345B4;
	case 2:
		goto loc_827345C4;
	case 3:
		goto loc_827345D4;
	case 4:
		goto loc_827345E4;
	case 5:
		goto loc_827345FC;
	case 6:
		goto loc_8273460C;
	case 7:
		goto loc_8273461C;
	case 8:
		goto loc_82734644;
	case 9:
		goto loc_82734654;
	case 10:
		goto loc_8273467C;
	case 11:
		goto loc_8273468C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,17832(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17832);
	// lwz r19,17844(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17844);
	// lwz r19,17860(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17860);
	// lwz r19,17876(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17876);
	// lwz r19,17892(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17892);
	// lwz r19,17916(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17916);
	// lwz r19,17932(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17932);
	// lwz r19,17948(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17948);
	// lwz r19,17988(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 17988);
	// lwz r19,18004(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18004);
	// lwz r19,18044(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18044);
	// lwz r19,18060(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18060);
loc_827345A8:
	// li r9,101
	ctx.r9.s64 = 101;
	// li r8,110
	ctx.r8.s64 = 110;
	// b 0x82734698
	goto loc_82734698;
loc_827345B4:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,106
	ctx.r9.s64 = 106;
	// li r8,97
	ctx.r8.s64 = 97;
	// b 0x82734698
	goto loc_82734698;
loc_827345C4:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r8,101
	ctx.r8.s64 = 101;
	// b 0x82734698
	goto loc_82734698;
loc_827345D4:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,102
	ctx.r9.s64 = 102;
	// li r8,114
	ctx.r8.s64 = 114;
	// b 0x82734698
	goto loc_82734698;
loc_827345E4:
	// li r7,110
	ctx.r7.s64 = 110;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,101
	ctx.r9.s64 = 101;
	// stb r7,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r7.u8);
	// li r8,115
	ctx.r8.s64 = 115;
	// b 0x82734698
	goto loc_82734698;
loc_827345FC:
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,105
	ctx.r9.s64 = 105;
	// li r8,116
	ctx.r8.s64 = 116;
	// b 0x82734698
	goto loc_82734698;
loc_8273460C:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,107
	ctx.r9.s64 = 107;
	// li r8,111
	ctx.r8.s64 = 111;
	// b 0x82734698
	goto loc_82734698;
loc_8273461C:
	// li r7,45
	ctx.r7.s64 = 45;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r5,119
	ctx.r5.s64 = 119;
	// stb r7,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r7.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r6,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r6.u8);
	// li r9,122
	ctx.r9.s64 = 122;
	// stb r5,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r5.u8);
	// li r8,104
	ctx.r8.s64 = 104;
	// b 0x82734698
	goto loc_82734698;
loc_82734644:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,116
	ctx.r8.s64 = 116;
	// b 0x82734698
	goto loc_82734698;
loc_82734654:
	// li r7,45
	ctx.r7.s64 = 45;
	// li r6,99
	ctx.r6.s64 = 99;
	// li r5,110
	ctx.r5.s64 = 110;
	// stb r7,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r7.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r6,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r6.u8);
	// li r9,122
	ctx.r9.s64 = 122;
	// stb r5,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r5.u8);
	// li r8,104
	ctx.r8.s64 = 104;
	// b 0x82734698
	goto loc_82734698;
loc_8273467C:
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,108
	ctx.r8.s64 = 108;
	// b 0x82734698
	goto loc_82734698;
loc_8273468C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,114
	ctx.r9.s64 = 114;
	// li r8,117
	ctx.r8.s64 = 117;
loc_82734698:
	// stb r8,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r8.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_827346A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_827346B8"))) PPC_WEAK_FUNC(sub_827346B8);
PPC_FUNC_IMPL(__imp__sub_827346B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827346BC"))) PPC_WEAK_FUNC(sub_827346BC);
PPC_FUNC_IMPL(__imp__sub_827346BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827346C0"))) PPC_WEAK_FUNC(sub_827346C0);
PPC_FUNC_IMPL(__imp__sub_827346C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bgt cr6,0x82734938
	if (cr6.gt) goto loc_82734938;
	// lis r12,-32141
	r12.s64 = -2106392576;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18164
	r12.s64 = r12.s64 + 18164;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82734738;
	case 1:
		goto loc_82734754;
	case 2:
		goto loc_82734770;
	case 3:
		goto loc_8273478C;
	case 4:
		goto loc_827347B0;
	case 5:
		goto loc_827347D4;
	case 6:
		goto loc_827347F0;
	case 7:
		goto loc_8273480C;
	case 8:
		goto loc_82734840;
	case 9:
		goto loc_8273485C;
	case 10:
		goto loc_82734890;
	case 11:
		goto loc_827348AC;
	case 12:
		goto loc_827348C8;
	case 13:
		goto loc_827348E4;
	case 14:
		goto loc_827348E4;
	case 15:
		goto loc_82734900;
	case 16:
		goto loc_8273491C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,18232(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18232);
	// lwz r19,18260(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18260);
	// lwz r19,18288(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18288);
	// lwz r19,18316(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18316);
	// lwz r19,18352(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18352);
	// lwz r19,18388(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18388);
	// lwz r19,18416(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18416);
	// lwz r19,18444(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18444);
	// lwz r19,18496(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18496);
	// lwz r19,18524(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18524);
	// lwz r19,18576(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18576);
	// lwz r19,18604(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18604);
	// lwz r19,18632(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18632);
	// lwz r19,18660(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18660);
	// lwz r19,18660(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18660);
	// lwz r19,18688(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18688);
	// lwz r19,18716(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 18716);
loc_82734738:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,106
	ctx.r9.s64 = 106;
	// li r8,97
	ctx.r8.s64 = 97;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_82734754:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r8,101
	ctx.r8.s64 = 101;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_82734770:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,102
	ctx.r9.s64 = 102;
	// li r8,114
	ctx.r8.s64 = 114;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_8273478C:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,115
	ctx.r8.s64 = 115;
	// li r7,110
	ctx.r7.s64 = 110;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r9,101
	ctx.r9.s64 = 101;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// stb r7,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r7.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
loc_827347B0:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r8,115
	ctx.r8.s64 = 115;
	// li r7,109
	ctx.r7.s64 = 109;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r9,101
	ctx.r9.s64 = 101;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// stb r7,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r7.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
loc_827347D4:
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,105
	ctx.r9.s64 = 105;
	// li r8,116
	ctx.r8.s64 = 116;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_827347F0:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,107
	ctx.r9.s64 = 107;
	// li r8,111
	ctx.r8.s64 = 111;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_8273480C:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,122
	ctx.r9.s64 = 122;
	// li r8,104
	ctx.r8.s64 = 104;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,45
	ctx.r7.s64 = 45;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// li r6,116
	ctx.r6.s64 = 116;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// li r5,119
	ctx.r5.s64 = 119;
	// stb r7,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r7.u8);
	// stb r6,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r6.u8);
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// blr 
	return;
loc_82734840:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,116
	ctx.r8.s64 = 116;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_8273485C:
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,122
	ctx.r9.s64 = 122;
	// li r8,104
	ctx.r8.s64 = 104;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r7,45
	ctx.r7.s64 = 45;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// li r6,99
	ctx.r6.s64 = 99;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// li r5,110
	ctx.r5.s64 = 110;
	// stb r7,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r7.u8);
	// stb r6,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r6.u8);
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// blr 
	return;
loc_82734890:
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,108
	ctx.r8.s64 = 108;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_827348AC:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,114
	ctx.r9.s64 = 114;
	// li r8,117
	ctx.r8.s64 = 117;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_827348C8:
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r8,97
	ctx.r8.s64 = 97;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_827348E4:
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,102
	ctx.r9.s64 = 102;
	// li r8,105
	ctx.r8.s64 = 105;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_82734900:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,110
	ctx.r9.s64 = 110;
	// li r8,108
	ctx.r8.s64 = 108;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_8273491C:
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,115
	ctx.r9.s64 = 115;
	// li r8,118
	ctx.r8.s64 = 118;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// blr 
	return;
loc_82734938:
	// li r8,110
	ctx.r8.s64 = 110;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r9,101
	ctx.r9.s64 = 101;
	// stb r8,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r8.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8273494C"))) PPC_WEAK_FUNC(sub_8273494C);
PPC_FUNC_IMPL(__imp__sub_8273494C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734950"))) PPC_WEAK_FUNC(sub_82734950);
PPC_FUNC_IMPL(__imp__sub_82734950) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8314db8c
	__imp__XGetGameRegion(ctx, base);
	// cmplwi cr6,r3,511
	cr6.compare<uint32_t>(ctx.r3.u32, 511, xer);
	// bgt cr6,0x827349c0
	if (cr6.gt) goto loc_827349C0;
	// beq cr6,0x827349b8
	if (cr6.eq) goto loc_827349B8;
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bgt cr6,0x827349a8
	if (cr6.gt) goto loc_827349A8;
	// beq cr6,0x827349a0
	if (cr6.eq) goto loc_827349A0;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// beq cr6,0x82734998
	if (cr6.eq) goto loc_82734998;
	// cmplwi cr6,r3,257
	cr6.compare<uint32_t>(ctx.r3.u32, 257, xer);
	// bne cr6,0x82734a04
	if (!cr6.eq) goto loc_82734A04;
	// li r11,2
	r11.s64 = 2;
	// b 0x82734a00
	goto loc_82734A00;
loc_82734998:
	// li r11,0
	r11.s64 = 0;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349A0:
	// li r11,3
	r11.s64 = 3;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349A8:
	// cmplwi cr6,r3,508
	cr6.compare<uint32_t>(ctx.r3.u32, 508, xer);
	// bne cr6,0x82734a04
	if (!cr6.eq) goto loc_82734A04;
	// li r11,4
	r11.s64 = 4;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349B8:
	// li r11,1
	r11.s64 = 1;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349C0:
	// cmplwi cr6,r3,767
	cr6.compare<uint32_t>(ctx.r3.u32, 767, xer);
	// bgt cr6,0x827349f4
	if (cr6.gt) goto loc_827349F4;
	// beq cr6,0x827349ec
	if (cr6.eq) goto loc_827349EC;
	// cmplwi cr6,r3,513
	cr6.compare<uint32_t>(ctx.r3.u32, 513, xer);
	// beq cr6,0x827349e4
	if (cr6.eq) goto loc_827349E4;
	// cmplwi cr6,r3,766
	cr6.compare<uint32_t>(ctx.r3.u32, 766, xer);
	// bne cr6,0x82734a04
	if (!cr6.eq) goto loc_82734A04;
	// li r11,7
	r11.s64 = 7;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349E4:
	// li r11,6
	r11.s64 = 6;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349EC:
	// li r11,5
	r11.s64 = 5;
	// b 0x82734a00
	goto loc_82734A00;
loc_827349F4:
	// cmplwi cr6,r3,1023
	cr6.compare<uint32_t>(ctx.r3.u32, 1023, xer);
	// bne cr6,0x82734a04
	if (!cr6.eq) goto loc_82734A04;
	// li r11,8
	r11.s64 = 8;
loc_82734A00:
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82734A04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82734A14"))) PPC_WEAK_FUNC(sub_82734A14);
PPC_FUNC_IMPL(__imp__sub_82734A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734A18"))) PPC_WEAK_FUNC(sub_82734A18);
PPC_FUNC_IMPL(__imp__sub_82734A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
	// bgt cr6,0x82734aac
	if (cr6.gt) goto loc_82734AAC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82734aac
	if (cr6.eq) goto loc_82734AAC;
	// bdz 0x82734a4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A4C;
	// bdz 0x82734a58
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A58;
	// bdz 0x82734a64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A64;
	// bdz 0x82734a70
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A70;
	// bdz 0x82734a7c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A7C;
	// bdz 0x82734a88
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A88;
	// bdz 0x82734a94
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82734A94;
	// b 0x82734aa0
	goto loc_82734AA0;
loc_82734A4C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734A58:
	// li r11,2
	r11.s64 = 2;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734A64:
	// li r11,3
	r11.s64 = 3;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734A70:
	// li r11,4
	r11.s64 = 4;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734A7C:
	// li r11,5
	r11.s64 = 5;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734A88:
	// li r11,6
	r11.s64 = 6;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734A94:
	// li r11,7
	r11.s64 = 7;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734AA0:
	// li r11,8
	r11.s64 = 8;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
loc_82734AAC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734AB8"))) PPC_WEAK_FUNC(sub_82734AB8);
PPC_FUNC_IMPL(__imp__sub_82734AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82bb9388
	sub_82BB9388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// bgt cr6,0x82734f1c
	if (cr6.gt) goto loc_82734F1C;
	// lis r12,-32141
	r12.s64 = -2106392576;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19200
	r12.s64 = r12.s64 + 19200;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82734B94;
	case 1:
		goto loc_82734BBC;
	case 2:
		goto loc_82734BD4;
	case 3:
		goto loc_82734BEC;
	case 4:
		goto loc_82734C04;
	case 5:
		goto loc_82734C1C;
	case 6:
		goto loc_82734C34;
	case 7:
		goto loc_82734C4C;
	case 8:
		goto loc_82734C64;
	case 9:
		goto loc_82734C7C;
	case 10:
		goto loc_82734C94;
	case 11:
		goto loc_82734CAC;
	case 12:
		goto loc_82734CC4;
	case 13:
		goto loc_82734CDC;
	case 14:
		goto loc_82734CF4;
	case 15:
		goto loc_82734D0C;
	case 16:
		goto loc_82734D24;
	case 17:
		goto loc_82734D3C;
	case 18:
		goto loc_82734D54;
	case 19:
		goto loc_82734D6C;
	case 20:
		goto loc_82734D84;
	case 21:
		goto loc_82734D9C;
	case 22:
		goto loc_82734DB4;
	case 23:
		goto loc_82734DCC;
	case 24:
		goto loc_82734DE4;
	case 25:
		goto loc_82734DFC;
	case 26:
		goto loc_82734E14;
	case 27:
		goto loc_82734E2C;
	case 28:
		goto loc_82734E44;
	case 29:
		goto loc_82734E5C;
	case 30:
		goto loc_82734E74;
	case 31:
		goto loc_82734E8C;
	case 32:
		goto loc_82734EA4;
	case 33:
		goto loc_82734EBC;
	case 34:
		goto loc_82734ED4;
	case 35:
		goto loc_82734EEC;
	case 36:
		goto loc_82734F04;
	default:
		__builtin_unreachable();
	}
	// lwz r19,19348(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19348);
	// lwz r19,19388(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19388);
	// lwz r19,19412(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19412);
	// lwz r19,19436(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19436);
	// lwz r19,19460(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19460);
	// lwz r19,19484(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19484);
	// lwz r19,19508(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19508);
	// lwz r19,19532(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19532);
	// lwz r19,19556(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19556);
	// lwz r19,19580(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19580);
	// lwz r19,19604(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19604);
	// lwz r19,19628(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19628);
	// lwz r19,19652(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19652);
	// lwz r19,19676(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19676);
	// lwz r19,19700(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19700);
	// lwz r19,19724(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19724);
	// lwz r19,19748(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19748);
	// lwz r19,19772(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19772);
	// lwz r19,19796(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19796);
	// lwz r19,19820(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19820);
	// lwz r19,19844(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19844);
	// lwz r19,19868(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19868);
	// lwz r19,19892(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19892);
	// lwz r19,19916(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19916);
	// lwz r19,19940(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19940);
	// lwz r19,19964(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19964);
	// lwz r19,19988(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 19988);
	// lwz r19,20012(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20012);
	// lwz r19,20036(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20036);
	// lwz r19,20060(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20060);
	// lwz r19,20084(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20084);
	// lwz r19,20108(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20108);
	// lwz r19,20132(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20132);
	// lwz r19,20156(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20156);
	// lwz r19,20180(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20180);
	// lwz r19,20204(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20204);
	// lwz r19,20228(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20228);
loc_82734B94:
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// li r11,65
	r11.s64 = 65;
	// li r10,85
	ctx.r10.s64 = 85;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stb r10,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82734BBC:
	// li r10,65
	ctx.r10.s64 = 65;
	// li r9,84
	ctx.r9.s64 = 84;
	// li r11,1
	r11.s64 = 1;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734BD4:
	// li r10,66
	ctx.r10.s64 = 66;
	// li r9,69
	ctx.r9.s64 = 69;
	// li r11,2
	r11.s64 = 2;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734BEC:
	// li r10,66
	ctx.r10.s64 = 66;
	// li r9,82
	ctx.r9.s64 = 82;
	// li r11,3
	r11.s64 = 3;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C04:
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r11,4
	r11.s64 = 4;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C1C:
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,76
	ctx.r9.s64 = 76;
	// li r11,5
	r11.s64 = 5;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C34:
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,78
	ctx.r9.s64 = 78;
	// li r11,6
	r11.s64 = 6;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C4C:
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,79
	ctx.r9.s64 = 79;
	// li r11,7
	r11.s64 = 7;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C64:
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r11,8
	r11.s64 = 8;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C7C:
	// li r10,68
	ctx.r10.s64 = 68;
	// li r9,75
	ctx.r9.s64 = 75;
	// li r11,9
	r11.s64 = 9;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734C94:
	// li r10,70
	ctx.r10.s64 = 70;
	// li r9,73
	ctx.r9.s64 = 73;
	// li r11,10
	r11.s64 = 10;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734CAC:
	// li r10,70
	ctx.r10.s64 = 70;
	// li r9,82
	ctx.r9.s64 = 82;
	// li r11,11
	r11.s64 = 11;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734CC4:
	// li r10,68
	ctx.r10.s64 = 68;
	// li r9,69
	ctx.r9.s64 = 69;
	// li r11,12
	r11.s64 = 12;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734CDC:
	// li r10,71
	ctx.r10.s64 = 71;
	// li r9,82
	ctx.r9.s64 = 82;
	// li r11,13
	r11.s64 = 13;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734CF4:
	// li r10,72
	ctx.r10.s64 = 72;
	// li r9,75
	ctx.r9.s64 = 75;
	// li r11,14
	r11.s64 = 14;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D0C:
	// li r10,72
	ctx.r10.s64 = 72;
	// li r9,85
	ctx.r9.s64 = 85;
	// li r11,15
	r11.s64 = 15;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D24:
	// li r10,73
	ctx.r10.s64 = 73;
	// li r9,78
	ctx.r9.s64 = 78;
	// li r11,16
	r11.s64 = 16;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D3C:
	// li r10,73
	ctx.r10.s64 = 73;
	// li r9,69
	ctx.r9.s64 = 69;
	// li r11,17
	r11.s64 = 17;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D54:
	// li r10,73
	ctx.r10.s64 = 73;
	// li r9,84
	ctx.r9.s64 = 84;
	// li r11,18
	r11.s64 = 18;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D6C:
	// li r10,74
	ctx.r10.s64 = 74;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r11,19
	r11.s64 = 19;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D84:
	// li r10,75
	ctx.r10.s64 = 75;
	// li r9,82
	ctx.r9.s64 = 82;
	// li r11,20
	r11.s64 = 20;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734D9C:
	// li r10,77
	ctx.r10.s64 = 77;
	// li r9,88
	ctx.r9.s64 = 88;
	// li r11,21
	r11.s64 = 21;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734DB4:
	// li r10,78
	ctx.r10.s64 = 78;
	// li r9,76
	ctx.r9.s64 = 76;
	// li r11,22
	r11.s64 = 22;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734DCC:
	// li r10,78
	ctx.r10.s64 = 78;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r11,23
	r11.s64 = 23;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734DE4:
	// li r10,78
	ctx.r10.s64 = 78;
	// li r9,79
	ctx.r9.s64 = 79;
	// li r11,24
	r11.s64 = 24;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734DFC:
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,76
	ctx.r9.s64 = 76;
	// li r11,25
	r11.s64 = 25;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734E14:
	// li r10,80
	ctx.r10.s64 = 80;
	// li r9,84
	ctx.r9.s64 = 84;
	// li r11,26
	r11.s64 = 26;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734E2C:
	// li r10,83
	ctx.r10.s64 = 83;
	// li r9,71
	ctx.r9.s64 = 71;
	// li r11,27
	r11.s64 = 27;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734E44:
	// li r10,83
	ctx.r10.s64 = 83;
	// li r9,75
	ctx.r9.s64 = 75;
	// li r11,28
	r11.s64 = 28;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734E5C:
	// li r10,90
	ctx.r10.s64 = 90;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r11,29
	r11.s64 = 29;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734E74:
	// li r10,69
	ctx.r10.s64 = 69;
	// li r9,83
	ctx.r9.s64 = 83;
	// li r11,30
	r11.s64 = 30;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734E8C:
	// li r10,83
	ctx.r10.s64 = 83;
	// li r9,69
	ctx.r9.s64 = 69;
	// li r11,31
	r11.s64 = 31;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734EA4:
	// li r10,67
	ctx.r10.s64 = 67;
	// li r9,72
	ctx.r9.s64 = 72;
	// li r11,32
	r11.s64 = 32;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734EBC:
	// li r10,84
	ctx.r10.s64 = 84;
	// li r9,87
	ctx.r9.s64 = 87;
	// li r11,33
	r11.s64 = 33;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734ED4:
	// li r10,71
	ctx.r10.s64 = 71;
	// li r9,66
	ctx.r9.s64 = 66;
	// li r11,34
	r11.s64 = 34;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734EEC:
	// li r10,85
	ctx.r10.s64 = 85;
	// li r9,83
	ctx.r9.s64 = 83;
	// li r11,35
	r11.s64 = 35;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734F04:
	// li r10,82
	ctx.r10.s64 = 82;
	// li r9,85
	ctx.r9.s64 = 85;
	// li r11,36
	r11.s64 = 36;
	// stb r10,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r10.u8);
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// b 0x82734f20
	goto loc_82734F20;
loc_82734F1C:
	// li r11,37
	r11.s64 = 37;
loc_82734F20:
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82734F34"))) PPC_WEAK_FUNC(sub_82734F34);
PPC_FUNC_IMPL(__imp__sub_82734F34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82734F38"))) PPC_WEAK_FUNC(sub_82734F38);
PPC_FUNC_IMPL(__imp__sub_82734F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r4,36
	cr6.compare<uint32_t>(ctx.r4.u32, 36, xer);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// bgt cr6,0x82735404
	if (cr6.gt) {
		sub_82735404(ctx, base);
		return;
	}
	// lis r12,-32141
	r12.s64 = -2106392576;
	// rlwinm r0,r4,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20328
	r12.s64 = r12.s64 + 20328;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82734FFC
		return;
	case 1:
		// ERROR: 0x82735014
		return;
	case 2:
		// ERROR: 0x82735030
		return;
	case 3:
		// ERROR: 0x8273504C
		return;
	case 4:
		// ERROR: 0x82735068
		return;
	case 5:
		// ERROR: 0x82735084
		return;
	case 6:
		// ERROR: 0x827350A0
		return;
	case 7:
		// ERROR: 0x827350BC
		return;
	case 8:
		// ERROR: 0x827350D8
		return;
	case 9:
		// ERROR: 0x827350F4
		return;
	case 10:
		// ERROR: 0x82735110
		return;
	case 11:
		// ERROR: 0x8273512C
		return;
	case 12:
		// ERROR: 0x82735148
		return;
	case 13:
		// ERROR: 0x82735164
		return;
	case 14:
		// ERROR: 0x82735180
		return;
	case 15:
		// ERROR: 0x8273519C
		return;
	case 16:
		// ERROR: 0x827351B8
		return;
	case 17:
		// ERROR: 0x827351D4
		return;
	case 18:
		// ERROR: 0x827351F0
		return;
	case 19:
		// ERROR: 0x8273520C
		return;
	case 20:
		// ERROR: 0x82735228
		return;
	case 21:
		// ERROR: 0x82735244
		return;
	case 22:
		// ERROR: 0x82735260
		return;
	case 23:
		// ERROR: 0x8273527C
		return;
	case 24:
		// ERROR: 0x82735298
		return;
	case 25:
		// ERROR: 0x827352B4
		return;
	case 26:
		// ERROR: 0x827352D0
		return;
	case 27:
		// ERROR: 0x827352EC
		return;
	case 28:
		// ERROR: 0x82735308
		return;
	case 29:
		// ERROR: 0x82735324
		return;
	case 30:
		// ERROR: 0x82735340
		return;
	case 31:
		// ERROR: 0x8273535C
		return;
	case 32:
		// ERROR: 0x82735378
		return;
	case 33:
		// ERROR: 0x82735394
		return;
	case 34:
		// ERROR: 0x827353B0
		return;
	case 35:
		// ERROR: 0x827353CC
		return;
	case 36:
		// ERROR: 0x827353E8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82734F68"))) PPC_WEAK_FUNC(sub_82734F68);
PPC_FUNC_IMPL(__imp__sub_82734F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,20476(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20476);
	// lwz r19,20500(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20500);
	// lwz r19,20528(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20528);
	// lwz r19,20556(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20556);
	// lwz r19,20584(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20584);
	// lwz r19,20612(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20612);
	// lwz r19,20640(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20640);
	// lwz r19,20668(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20668);
	// lwz r19,20696(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20696);
	// lwz r19,20724(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20724);
	// lwz r19,20752(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20752);
	// lwz r19,20780(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20780);
	// lwz r19,20808(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20808);
	// lwz r19,20836(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20836);
	// lwz r19,20864(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20864);
	// lwz r19,20892(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20892);
	// lwz r19,20920(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20920);
	// lwz r19,20948(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20948);
	// lwz r19,20976(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 20976);
	// lwz r19,21004(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21004);
	// lwz r19,21032(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21032);
	// lwz r19,21060(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21060);
	// lwz r19,21088(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21088);
	// lwz r19,21116(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21116);
	// lwz r19,21144(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21144);
	// lwz r19,21172(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21172);
	// lwz r19,21200(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21200);
	// lwz r19,21228(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21228);
	// lwz r19,21256(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21256);
	// lwz r19,21284(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21284);
	// lwz r19,21312(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21312);
	// lwz r19,21340(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21340);
	// lwz r19,21368(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21368);
	// lwz r19,21396(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21396);
	// lwz r19,21424(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21424);
	// lwz r19,21452(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21452);
	// lwz r19,21480(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 21480);
	// li r9,65
	ctx.r9.s64 = 65;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// li r8,85
	ctx.r8.s64 = 85;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735014"))) PPC_WEAK_FUNC(sub_82735014);
PPC_FUNC_IMPL(__imp__sub_82735014) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,65
	ctx.r9.s64 = 65;
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735030"))) PPC_WEAK_FUNC(sub_82735030);
PPC_FUNC_IMPL(__imp__sub_82735030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,66
	ctx.r9.s64 = 66;
	// li r8,69
	ctx.r8.s64 = 69;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273504C"))) PPC_WEAK_FUNC(sub_8273504C);
PPC_FUNC_IMPL(__imp__sub_8273504C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,66
	ctx.r9.s64 = 66;
	// li r8,82
	ctx.r8.s64 = 82;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735068"))) PPC_WEAK_FUNC(sub_82735068);
PPC_FUNC_IMPL(__imp__sub_82735068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,67
	ctx.r9.s64 = 67;
	// li r8,65
	ctx.r8.s64 = 65;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735084"))) PPC_WEAK_FUNC(sub_82735084);
PPC_FUNC_IMPL(__imp__sub_82735084) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,67
	ctx.r9.s64 = 67;
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827350A0"))) PPC_WEAK_FUNC(sub_827350A0);
PPC_FUNC_IMPL(__imp__sub_827350A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,67
	ctx.r9.s64 = 67;
	// li r8,78
	ctx.r8.s64 = 78;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827350BC"))) PPC_WEAK_FUNC(sub_827350BC);
PPC_FUNC_IMPL(__imp__sub_827350BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,67
	ctx.r9.s64 = 67;
	// li r8,79
	ctx.r8.s64 = 79;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827350D8"))) PPC_WEAK_FUNC(sub_827350D8);
PPC_FUNC_IMPL(__imp__sub_827350D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,67
	ctx.r9.s64 = 67;
	// li r8,90
	ctx.r8.s64 = 90;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827350F4"))) PPC_WEAK_FUNC(sub_827350F4);
PPC_FUNC_IMPL(__imp__sub_827350F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,68
	ctx.r9.s64 = 68;
	// li r8,75
	ctx.r8.s64 = 75;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735110"))) PPC_WEAK_FUNC(sub_82735110);
PPC_FUNC_IMPL(__imp__sub_82735110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,70
	ctx.r9.s64 = 70;
	// li r8,73
	ctx.r8.s64 = 73;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273512C"))) PPC_WEAK_FUNC(sub_8273512C);
PPC_FUNC_IMPL(__imp__sub_8273512C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,70
	ctx.r9.s64 = 70;
	// li r8,82
	ctx.r8.s64 = 82;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735148"))) PPC_WEAK_FUNC(sub_82735148);
PPC_FUNC_IMPL(__imp__sub_82735148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,68
	ctx.r9.s64 = 68;
	// li r8,69
	ctx.r8.s64 = 69;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735164"))) PPC_WEAK_FUNC(sub_82735164);
PPC_FUNC_IMPL(__imp__sub_82735164) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,13
	ctx.r10.s64 = 13;
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,82
	ctx.r8.s64 = 82;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735180"))) PPC_WEAK_FUNC(sub_82735180);
PPC_FUNC_IMPL(__imp__sub_82735180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,14
	ctx.r10.s64 = 14;
	// li r9,72
	ctx.r9.s64 = 72;
	// li r8,75
	ctx.r8.s64 = 75;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273519C"))) PPC_WEAK_FUNC(sub_8273519C);
PPC_FUNC_IMPL(__imp__sub_8273519C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,72
	ctx.r9.s64 = 72;
	// li r8,85
	ctx.r8.s64 = 85;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827351B8"))) PPC_WEAK_FUNC(sub_827351B8);
PPC_FUNC_IMPL(__imp__sub_827351B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,73
	ctx.r9.s64 = 73;
	// li r8,78
	ctx.r8.s64 = 78;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827351D4"))) PPC_WEAK_FUNC(sub_827351D4);
PPC_FUNC_IMPL(__imp__sub_827351D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,73
	ctx.r9.s64 = 73;
	// li r8,69
	ctx.r8.s64 = 69;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827351F0"))) PPC_WEAK_FUNC(sub_827351F0);
PPC_FUNC_IMPL(__imp__sub_827351F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,18
	ctx.r10.s64 = 18;
	// li r9,73
	ctx.r9.s64 = 73;
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273520C"))) PPC_WEAK_FUNC(sub_8273520C);
PPC_FUNC_IMPL(__imp__sub_8273520C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,74
	ctx.r9.s64 = 74;
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735228"))) PPC_WEAK_FUNC(sub_82735228);
PPC_FUNC_IMPL(__imp__sub_82735228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,75
	ctx.r9.s64 = 75;
	// li r8,82
	ctx.r8.s64 = 82;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735244"))) PPC_WEAK_FUNC(sub_82735244);
PPC_FUNC_IMPL(__imp__sub_82735244) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,77
	ctx.r9.s64 = 77;
	// li r8,88
	ctx.r8.s64 = 88;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735260"))) PPC_WEAK_FUNC(sub_82735260);
PPC_FUNC_IMPL(__imp__sub_82735260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,22
	ctx.r10.s64 = 22;
	// li r9,78
	ctx.r9.s64 = 78;
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273527C"))) PPC_WEAK_FUNC(sub_8273527C);
PPC_FUNC_IMPL(__imp__sub_8273527C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,23
	ctx.r10.s64 = 23;
	// li r9,78
	ctx.r9.s64 = 78;
	// li r8,90
	ctx.r8.s64 = 90;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735298"))) PPC_WEAK_FUNC(sub_82735298);
PPC_FUNC_IMPL(__imp__sub_82735298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,78
	ctx.r9.s64 = 78;
	// li r8,79
	ctx.r8.s64 = 79;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827352B4"))) PPC_WEAK_FUNC(sub_827352B4);
PPC_FUNC_IMPL(__imp__sub_827352B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,25
	ctx.r10.s64 = 25;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,76
	ctx.r8.s64 = 76;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827352D0"))) PPC_WEAK_FUNC(sub_827352D0);
PPC_FUNC_IMPL(__imp__sub_827352D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,26
	ctx.r10.s64 = 26;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r8,84
	ctx.r8.s64 = 84;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827352EC"))) PPC_WEAK_FUNC(sub_827352EC);
PPC_FUNC_IMPL(__imp__sub_827352EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,27
	ctx.r10.s64 = 27;
	// li r9,83
	ctx.r9.s64 = 83;
	// li r8,71
	ctx.r8.s64 = 71;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735308"))) PPC_WEAK_FUNC(sub_82735308);
PPC_FUNC_IMPL(__imp__sub_82735308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,28
	ctx.r10.s64 = 28;
	// li r9,83
	ctx.r9.s64 = 83;
	// li r8,75
	ctx.r8.s64 = 75;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735324"))) PPC_WEAK_FUNC(sub_82735324);
PPC_FUNC_IMPL(__imp__sub_82735324) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,29
	ctx.r10.s64 = 29;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r8,65
	ctx.r8.s64 = 65;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735340"))) PPC_WEAK_FUNC(sub_82735340);
PPC_FUNC_IMPL(__imp__sub_82735340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,30
	ctx.r10.s64 = 30;
	// li r9,69
	ctx.r9.s64 = 69;
	// li r8,83
	ctx.r8.s64 = 83;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8273535C"))) PPC_WEAK_FUNC(sub_8273535C);
PPC_FUNC_IMPL(__imp__sub_8273535C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,83
	ctx.r9.s64 = 83;
	// li r8,69
	ctx.r8.s64 = 69;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735378"))) PPC_WEAK_FUNC(sub_82735378);
PPC_FUNC_IMPL(__imp__sub_82735378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,67
	ctx.r9.s64 = 67;
	// li r8,72
	ctx.r8.s64 = 72;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82735394"))) PPC_WEAK_FUNC(sub_82735394);
PPC_FUNC_IMPL(__imp__sub_82735394) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,33
	ctx.r10.s64 = 33;
	// li r9,84
	ctx.r9.s64 = 84;
	// li r8,87
	ctx.r8.s64 = 87;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827353B0"))) PPC_WEAK_FUNC(sub_827353B0);
PPC_FUNC_IMPL(__imp__sub_827353B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,34
	ctx.r10.s64 = 34;
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827353CC"))) PPC_WEAK_FUNC(sub_827353CC);
PPC_FUNC_IMPL(__imp__sub_827353CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,35
	ctx.r10.s64 = 35;
	// li r9,85
	ctx.r9.s64 = 85;
	// li r8,83
	ctx.r8.s64 = 83;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// blr 
	return;
}

