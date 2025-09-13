#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824A0350"))) PPC_WEAK_FUNC(sub_824A0350);
PPC_FUNC_IMPL(__imp__sub_824A0350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0354"))) PPC_WEAK_FUNC(sub_824A0354);
PPC_FUNC_IMPL(__imp__sub_824A0354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0358"))) PPC_WEAK_FUNC(sub_824A0358);
PPC_FUNC_IMPL(__imp__sub_824A0358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a0298
	sub_824A0298(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A03F0"))) PPC_WEAK_FUNC(sub_824A03F0);
PPC_FUNC_IMPL(__imp__sub_824A03F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A03F4"))) PPC_WEAK_FUNC(sub_824A03F4);
PPC_FUNC_IMPL(__imp__sub_824A03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A03F8"))) PPC_WEAK_FUNC(sub_824A03F8);
PPC_FUNC_IMPL(__imp__sub_824A03F8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x824a0298
	sub_824A0298(ctx, base);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,21036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824A0444"))) PPC_WEAK_FUNC(sub_824A0444);
PPC_FUNC_IMPL(__imp__sub_824A0444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0448"))) PPC_WEAK_FUNC(sub_824A0448);
PPC_FUNC_IMPL(__imp__sub_824A0448) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31966
	ctx.r10.s64 = -2094923776;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r10,-12976
	ctx.r6.s64 = ctx.r10.s64 + -12976;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lfs f6,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d39a8
	sub_822D39A8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,-4572(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4572);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3280
	sub_822B3280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A04E0"))) PPC_WEAK_FUNC(sub_824A04E0);
PPC_FUNC_IMPL(__imp__sub_824A04E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A04E4"))) PPC_WEAK_FUNC(sub_824A04E4);
PPC_FUNC_IMPL(__imp__sub_824A04E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A04E8"))) PPC_WEAK_FUNC(sub_824A04E8);
PPC_FUNC_IMPL(__imp__sub_824A04E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,-4656(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4656);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x824a0580
	if (cr6.gt) goto loc_824A0580;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824a0570
	if (cr6.eq) goto loc_824A0570;
	// bdz 0x824a052c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_824A052C;
	// bdz 0x824a0544
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_824A0544;
	// b 0x824a055c
	goto loc_824A055C;
loc_824A052C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// bl 0x8249f590
	sub_8249F590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_824A0544:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// bl 0x8249f590
	sub_8249F590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_824A055C:
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a1248
	sub_824A1248(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_824A0570:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824a1bd8
	sub_824A1BD8(ctx, base);
loc_824A0580:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A0584"))) PPC_WEAK_FUNC(sub_824A0584);
PPC_FUNC_IMPL(__imp__sub_824A0584) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A0588"))) PPC_WEAK_FUNC(sub_824A0588);
PPC_FUNC_IMPL(__imp__sub_824A0588) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-4552
	ctx.r10.s64 = r11.s64 + -4552;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826ef410
	sub_826EF410(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a05d8
	if (cr6.eq) goto loc_824A05D8;
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
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_824A05D8:
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// bl 0x8249fd40
	sub_8249FD40(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8249fd40
	sub_8249FD40(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8249fd40
	sub_8249FD40(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8249fd40
	sub_8249FD40(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2228
	sub_824A2228(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A0620"))) PPC_WEAK_FUNC(sub_824A0620);
PPC_FUNC_IMPL(__imp__sub_824A0620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0624"))) PPC_WEAK_FUNC(sub_824A0624);
PPC_FUNC_IMPL(__imp__sub_824A0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0628"))) PPC_WEAK_FUNC(sub_824A0628);
PPC_FUNC_IMPL(__imp__sub_824A0628) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824a2168
	sub_824A2168(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r11,-4552
	ctx.r10.s64 = r11.s64 + -4552;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824a2168
	sub_824A2168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x824a2168
	sub_824A2168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8249fbe8
	sub_8249FBE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x8249fbe8
	sub_8249FBE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x8249fbe8
	sub_8249FBE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,344
	ctx.r3.s64 = r31.s64 + 344;
	// bl 0x8249fbe8
	sub_8249FBE8(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,-4832
	ctx.r3.s64 = ctx.r8.s64 + -4832;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,424(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 424, temp.u32);
	// stfs f0,428(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 428, temp.u32);
	// stfs f0,432(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 432, temp.u32);
	// stfs f0,436(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14120(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14120);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a06e8
	if (cr6.eq) goto loc_824A06E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a06ec
	if (!cr6.eq) goto loc_824A06EC;
loc_824A06E8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_824A06EC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826ef7c0
	sub_826EF7C0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r7,r10,-4548
	ctx.r7.s64 = ctx.r10.s64 + -4548;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r8,34
	ctx.r8.s64 = 34;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a0750
	if (cr6.eq) goto loc_824A0750;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x826ef488
	sub_826EF488(ctx, base);
	// b 0x824a0754
	goto loc_824A0754;
loc_824A0750:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A0754:
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// bl 0x826ef3b8
	sub_826EF3B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_824A0774"))) PPC_WEAK_FUNC(sub_824A0774);
PPC_FUNC_IMPL(__imp__sub_824A0774) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0778"))) PPC_WEAK_FUNC(sub_824A0778);
PPC_FUNC_IMPL(__imp__sub_824A0778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,-4564(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4564);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826eef18
	sub_826EEF18(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824a0878
	if (cr6.eq) goto loc_824A0878;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f5,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fadds f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fadds f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_824A0878:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824A08A4"))) PPC_WEAK_FUNC(sub_824A08A4);
PPC_FUNC_IMPL(__imp__sub_824A08A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A08A8"))) PPC_WEAK_FUNC(sub_824A08A8);
PPC_FUNC_IMPL(__imp__sub_824A08A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e941c
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,64(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// divw r8,r11,r10
	ctx.r8.s32 = r11.s32 / ctx.r10.s32;
	// divw r31,r11,r10
	r31.s32 = r11.s32 / ctx.r10.s32;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r6,r7,r11
	ctx.r6.s64 = r11.s64 - ctx.r7.s64;
loc_824A08D0:
	// li r8,-1
	ctx.r8.s64 = -1;
	// add r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 + r31.u64;
loc_824A08D8:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x824a08e8
	if (!cr6.lt) goto loc_824A08E8;
	// li r11,0
	r11.s64 = 0;
	// b 0x824a0928
	goto loc_824A0928;
loc_824A08E8:
	// add. r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x824a08f8
	if (!cr0.lt) goto loc_824A08F8;
	// li r11,0
	r11.s64 = 0;
	// b 0x824a0928
	goto loc_824A0928;
loc_824A08F8:
	// lwz r11,60(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// ble cr6,0x824a0910
	if (!cr6.gt) goto loc_824A0910;
	// li r11,0
	r11.s64 = 0;
	// b 0x824a0928
	goto loc_824A0928;
loc_824A0910:
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r29,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r11.s32 >> 31;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// adde r11,r30,r29
	temp.u8 = (r30.u32 + r29.u32 < r30.u32) | (r30.u32 + r29.u32 + xer.ca < xer.ca);
	r11.u64 = r30.u64 + r29.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824A0928:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0954
	if (cr6.eq) goto loc_824A0954;
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mullw r11,r11,r7
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824a0974
	if (!cr6.eq) goto loc_824A0974;
loc_824A0954:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// ble cr6,0x824a08d8
	if (!cr6.gt) goto loc_824A08D8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x824a08d0
	if (!cr6.gt) goto loc_824A08D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828e946c
	return;
loc_824A0974:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
}

__attribute__((alias("__imp__sub_824A0988"))) PPC_WEAK_FUNC(sub_824A0988);
PPC_FUNC_IMPL(__imp__sub_824A0988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A098C"))) PPC_WEAK_FUNC(sub_824A098C);
PPC_FUNC_IMPL(__imp__sub_824A098C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0990"))) PPC_WEAK_FUNC(sub_824A0990);
PPC_FUNC_IMPL(__imp__sub_824A0990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,68(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A09A4:
	// lwz r11,60(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824a09d0
	if (cr6.eq) goto loc_824A09D0;
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x824a09d4
	if (!cr6.eq) goto loc_824A09D4;
loc_824A09D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A09D4:
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// stbx r7,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// bdnz 0x824a09a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A09A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A09EC"))) PPC_WEAK_FUNC(sub_824A09EC);
PPC_FUNC_IMPL(__imp__sub_824A09EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A09F0"))) PPC_WEAK_FUNC(sub_824A09F0);
PPC_FUNC_IMPL(__imp__sub_824A09F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// bl 0x8233dce0
	sub_8233DCE0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,60
	r11.s64 = r11.s64 + 60;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x824a0a88
	if (!cr6.lt) goto loc_824A0A88;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_824A0A88:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = r11.s32;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-4488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4488);
	f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f9,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f7,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f30,4028(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4028);
	f30.f64 = double(temp.f32);
	// lfs f31,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fsubs f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 - f30.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f5,f9,f10
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f29,f5,f0
	f29.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fsubs f4,f8,f29
	ctx.f4.f64 = double(float(ctx.f8.f64 - f29.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f3,f7,f29
	ctx.f3.f64 = double(float(ctx.f7.f64 - f29.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f0,f2,f30
	f0.f64 = double(float(ctx.f2.f64 + f30.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fadds f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 + f29.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8233d910
	sub_8233D910(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x826ef020
	sub_826EF020(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A0B70"))) PPC_WEAK_FUNC(sub_824A0B70);
PPC_FUNC_IMPL(__imp__sub_824A0B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0B74"))) PPC_WEAK_FUNC(sub_824A0B74);
PPC_FUNC_IMPL(__imp__sub_824A0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A0B78"))) PPC_WEAK_FUNC(sub_824A0B78);
PPC_FUNC_IMPL(__imp__sub_824A0B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	f0.f64 = double(temp.f32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lfs f13,428(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lfs f12,432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f11,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r3,424
	r11.s64 = ctx.r3.s64 + 424;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,424(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 424, temp.u32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// stfs f9,428(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 428, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// stfs f8,432(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 432, temp.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// stfs f7,436(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// lfs f31,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f31.f64 = double(temp.f32);
	// bne cr6,0x824a0c50
	if (!cr6.eq) goto loc_824A0C50;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x824a0ddc
	if (cr6.eq) goto loc_824A0DDC;
loc_824A0C50:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x824a0d80
	if (!cr6.gt) goto loc_824A0D80;
loc_824A0C74:
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x824a0d70
	if (!cr6.gt) goto loc_824A0D70;
loc_824A0C84:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf. r8,r10,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mullw r10,r6,r4
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bge 0x824a0cb0
	if (!cr0.lt) goto loc_824A0CB0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a0cf0
	goto loc_824A0CF0;
loc_824A0CB0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x824a0cc0
	if (!cr6.lt) goto loc_824A0CC0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a0cf0
	goto loc_824A0CF0;
loc_824A0CC0:
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// ble cr6,0x824a0cd8
	if (!cr6.gt) goto loc_824A0CD8;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a0cf0
	goto loc_824A0CF0;
loc_824A0CD8:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r3,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 31;
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// adde r11,r6,r3
	temp.u8 = (ctx.r6.u32 + ctx.r3.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r6.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824A0CF0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0d40
	if (cr6.eq) goto loc_824A0D40;
	// mullw r11,r5,r8
	r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// stbx r9,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// stbx r6,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lfsx f0,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r5,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, temp.u32);
	// b 0x824a0d5c
	goto loc_824A0D5C;
loc_824A0D40:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r28,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r28.u8);
	// lwz r8,356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// stbx r28,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r28.u8);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stfsx f31,r9,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
loc_824A0D5C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// blt cr6,0x824a0c84
	if (cr6.lt) goto loc_824A0C84;
loc_824A0D70:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// blt cr6,0x824a0c74
	if (cr6.lt) goto loc_824A0C74;
loc_824A0D80:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x824a0ddc
	if (!cr6.gt) goto loc_824A0DDC;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_824A0D94:
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r7.u8);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r6,356(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lbzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// stbx r5,r4,r11
	PPC_STORE_U8(ctx.r4.u32 + r11.u32, ctx.r5.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfsx f0,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r8,r10
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x824a0d94
	if (cr6.lt) goto loc_824A0D94;
loc_824A0DDC:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,176
	ctx.r4.s64 = r11.s64 + 176;
	// bl 0x824a09f0
	sub_824A09F0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r26,1
	r26.s64 = 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mullw r11,r7,r9
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + r30.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x824a0e4c
	if (!cr6.eq) goto loc_824A0E4C;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,116(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r4,r11,176
	ctx.r4.s64 = r11.s64 + 176;
	// bl 0x824a0778
	sub_824A0778(ctx, base);
	// stbx r3,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, ctx.r3.u8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// stbx r26,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r26.u8);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stfsx f0,r10,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
loc_824A0E4C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,68(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lfs f30,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f30.f64 = double(temp.f32);
	// ble cr6,0x824a0f30
	if (!cr6.gt) goto loc_824A0F30;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_824A0E64:
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a0eec
	if (!cr6.eq) goto loc_824A0EEC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x824a08a8
	sub_824A08A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0eec
	if (cr6.eq) goto loc_824A0EEC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r29,116(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a0778
	sub_824A0778(ctx, base);
	// stbx r3,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, ctx.r3.u8);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// stbx r26,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + r30.u32, r26.u8);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
loc_824A0EEC:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a0f14
	if (cr6.eq) goto loc_824A0F14;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a0f14
	if (cr6.eq) goto loc_824A0F14;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
	// b 0x824a0f18
	goto loc_824A0F18;
loc_824A0F14:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64;
loc_824A0F18:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// bne 0x824a0e64
	if (!cr0.eq) goto loc_824A0E64;
loc_824A0F30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
}

__attribute__((alias("__imp__sub_824A0F3C"))) PPC_WEAK_FUNC(sub_824A0F3C);
PPC_FUNC_IMPL(__imp__sub_824A0F3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824A0F40"))) PPC_WEAK_FUNC(sub_824A0F40);
PPC_FUNC_IMPL(__imp__sub_824A0F40) {
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
	// bl 0x824a0588
	sub_824A0588(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a0f78
	if (cr6.eq) goto loc_824A0F78;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A0F78:
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

__attribute__((alias("__imp__sub_824A0F8C"))) PPC_WEAK_FUNC(sub_824A0F8C);
PPC_FUNC_IMPL(__imp__sub_824A0F8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0F90"))) PPC_WEAK_FUNC(sub_824A0F90);
PPC_FUNC_IMPL(__imp__sub_824A0F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0FB8"))) PPC_WEAK_FUNC(sub_824A0FB8);
PPC_FUNC_IMPL(__imp__sub_824A0FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
loc_824A0FD4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f1,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x824a0fd4
	if (cr6.lt) goto loc_824A0FD4;
}

__attribute__((alias("__imp__sub_824A0FEC"))) PPC_WEAK_FUNC(sub_824A0FEC);
PPC_FUNC_IMPL(__imp__sub_824A0FEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A0FF0"))) PPC_WEAK_FUNC(sub_824A0FF0);
PPC_FUNC_IMPL(__imp__sub_824A0FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,68(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A1008:
	// lwz r11,60(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f0,f2
	f0.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmadds f13,f0,f1,f5
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// bdnz 0x824a1008
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A1008;
}

__attribute__((alias("__imp__sub_824A1060"))) PPC_WEAK_FUNC(sub_824A1060);
PPC_FUNC_IMPL(__imp__sub_824A1060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A1064"))) PPC_WEAK_FUNC(sub_824A1064);
PPC_FUNC_IMPL(__imp__sub_824A1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A1068"))) PPC_WEAK_FUNC(sub_824A1068);
PPC_FUNC_IMPL(__imp__sub_824A1068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,68(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mtctr r11
	ctr.u64 = r11.u64;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
loc_824A1084:
	// lwz r11,60(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 - ctx.f10.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// bge cr6,0x824a10e8
	if (!cr6.lt) goto loc_824A10E8;
	// fdivs f0,f0,f2
	f0.f64 = double(float(f0.f64 / ctx.f2.f64));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmadds f10,f11,f1,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
loc_824A10E8:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bdnz 0x824a1084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A1084;
}

__attribute__((alias("__imp__sub_824A10F0"))) PPC_WEAK_FUNC(sub_824A10F0);
PPC_FUNC_IMPL(__imp__sub_824A10F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A10F4"))) PPC_WEAK_FUNC(sub_824A10F4);
PPC_FUNC_IMPL(__imp__sub_824A10F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A10F8"))) PPC_WEAK_FUNC(sub_824A10F8);
PPC_FUNC_IMPL(__imp__sub_824A10F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaaf0
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(f0.f64 * f0.f64 + ctx.f8.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f29,f6
	f29.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f29,f31
	cr6.compare(f29.f64, f31.f64);
	// ble cr6,0x824a1234
	if (!cr6.gt) goto loc_824A1234;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,68(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lfs f30,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f30.f64 = double(temp.f32);
	// fdivs f4,f30,f29
	ctx.f4.f64 = double(float(f30.f64 / f29.f64));
	// fmuls f7,f0,f4
	ctx.f7.f64 = double(float(f0.f64 * ctx.f4.f64));
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f5,f13,f4
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// ble cr6,0x824a1234
	if (!cr6.gt) goto loc_824A1234;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A1178:
	// lwz r11,60(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f13
	f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f28,f9,f12
	f28.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f27,f8,f11
	f27.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f0,f0,f7
	f0.f64 = double(float(f0.f64 * ctx.f7.f64));
	// fmadds f0,f28,f5,f0
	f0.f64 = double(float(f28.f64 * ctx.f5.f64 + f0.f64));
	// fmadds f0,f27,f6,f0
	f0.f64 = double(float(f27.f64 * ctx.f6.f64 + f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x824a122c
	if (!cr6.gt) goto loc_824A122C;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x824a122c
	if (!cr6.lt) goto loc_824A122C;
	// fmuls f28,f6,f0
	f28.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f26,f7,f0
	f26.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f27,f5,f0
	f27.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fadds f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 + f28.f64));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f12,f9,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f11,f8,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fsqrts f13,f11
	ctx.f13.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f13,f3
	cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bge cr6,0x824a122c
	if (!cr6.lt) goto loc_824A122C;
	// fdivs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fsubs f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f30,f13
	ctx.f9.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f0,f8,f11,f1
	f0.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
loc_824A122C:
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// bdnz 0x824a1178
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A1178;
loc_824A1234:
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab3c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824A1244"))) PPC_WEAK_FUNC(sub_824A1244);
PPC_FUNC_IMPL(__imp__sub_824A1244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A1248"))) PPC_WEAK_FUNC(sub_824A1248);
PPC_FUNC_IMPL(__imp__sub_824A1248) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,68(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x824a14ac
	if (!cr6.gt) goto loc_824A14AC;
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x824a1440
	if (!cr6.gt) goto loc_824A1440;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x824a13d4
	if (cr6.lt) goto loc_824A13D4;
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// addi r5,r31,-3
	ctx.r5.s64 = r31.s64 + -3;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r8,20
	ctx.r8.s64 = 20;
loc_824A12B8:
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r4,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x824a12dc
	if (cr6.lt) goto loc_824A12DC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_824A12DC:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x824a12f4
	if (cr6.lt) goto loc_824A12F4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_824A12F4:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x824a131c
	if (cr6.lt) goto loc_824A131C;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_824A131C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x824a1334
	if (cr6.lt) goto loc_824A1334;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_824A1334:
	// addi r11,r8,60
	r11.s64 = ctx.r8.s64 + 60;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// add r10,r11,r7
	ctx.r10.u64 = r11.u64 + ctx.r7.u64;
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x824a1364
	if (cr6.lt) goto loc_824A1364;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_824A1364:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x824a137c
	if (cr6.lt) goto loc_824A137C;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_824A137C:
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x824a13a4
	if (cr6.lt) goto loc_824A13A4;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_824A13A4:
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x824a13bc
	if (cr6.lt) goto loc_824A13BC;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_824A13BC:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// blt cr6,0x824a12b8
	if (cr6.lt) goto loc_824A12B8;
loc_824A13D4:
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, r31.s32, xer);
	// bge cr6,0x824a1440
	if (!cr6.lt) goto loc_824A1440;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// subf r10,r6,r31
	ctx.r10.s64 = r31.s64 - ctx.r6.s64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + r11.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_824A13F8:
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// blt cr6,0x824a1418
	if (cr6.lt) goto loc_824A1418;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_824A1418:
	// lfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x824a1430
	if (cr6.lt) goto loc_824A1430;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_824A1430:
	// lfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bdnz 0x824a13f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A13F8;
loc_824A1440:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x824a14ac
	if (!cr6.gt) goto loc_824A14AC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfs f3,-4484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4484);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x823be900
	sub_823BE900(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mtctr r31
	ctr.u64 = r31.u64;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_824A1470:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x824a1490
	if (cr6.eq) goto loc_824A1490;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
	// b 0x824a14a4
	goto loc_824A14A4;
loc_824A1490:
	// lfsx f12,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(f30.f64 - f31.f64));
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - f31.f64));
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, temp.u32);
loc_824A14A4:
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// bdnz 0x824a1470
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A1470;
loc_824A14AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_824A14B8"))) PPC_WEAK_FUNC(sub_824A14B8);
PPC_FUNC_IMPL(__imp__sub_824A14B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A14BC"))) PPC_WEAK_FUNC(sub_824A14BC);
PPC_FUNC_IMPL(__imp__sub_824A14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A14C0"))) PPC_WEAK_FUNC(sub_824A14C0);
PPC_FUNC_IMPL(__imp__sub_824A14C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x824a15a8
	if (cr6.eq) goto loc_824A15A8;
	// lwz r30,68(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x824a155c
	if (cr6.lt) goto loc_824A155C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r30,-3
	r31.s64 = r30.s64 + -3;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r11,0
	r11.s64 = 0;
loc_824A14F0:
	// lwz r6,60(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// addi r7,r11,60
	ctx.r7.s64 = r11.s64 + 60;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r9,r6
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,60(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r6,r11,r6
	ctx.r6.u64 = r11.u64 + ctx.r6.u64;
	// lwz r6,20(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// stfsx f13,r9,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,60(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r6,-20(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,60(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// blt cr6,0x824a14f0
	if (cr6.lt) goto loc_824A14F0;
loc_824A155C:
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, r30.s32, xer);
	// bge cr6,0x824a15e4
	if (!cr6.lt) goto loc_824A15E4;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r7,r8,r30
	ctx.r7.s64 = r30.s64 - ctx.r8.s64;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r11,r6,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_824A1580:
	// lwz r8,60(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfsx f0,r9,r6
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// bdnz 0x824a1580
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A1580;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824A15A8:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824a15e4
	if (!cr6.gt) goto loc_824A15E4;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_824A15C8:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r11,r8
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x824a15c8
	if (cr6.lt) goto loc_824A15C8;
loc_824A15E4:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_824A15EC"))) PPC_WEAK_FUNC(sub_824A15EC);
PPC_FUNC_IMPL(__imp__sub_824A15EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A15F0"))) PPC_WEAK_FUNC(sub_824A15F0);
PPC_FUNC_IMPL(__imp__sub_824A15F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r30,68(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x824a16a4
	if (cr6.lt) goto loc_824A16A4;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r30,-3
	r31.s64 = r30.s64 + -3;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
loc_824A1618:
	// lwz r8,60(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// addi r6,r10,60
	ctx.r6.s64 = ctx.r10.s64 + 60;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, r31.s32, xer);
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfsx f12,r8,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// lwz r8,60(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lfsx f10,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// lwz r8,60(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lwz r8,-20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfsx f6,r8,r11
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// lwz r8,60(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfsx f3,r8,r11
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// blt cr6,0x824a1618
	if (cr6.lt) goto loc_824A1618;
loc_824A16A4:
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// bge cr6,0x824a16ec
	if (!cr6.lt) goto loc_824A16EC;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r6,r7,r30
	ctx.r6.s64 = r30.s64 - ctx.r7.s64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_824A16C8:
	// lwz r11,60(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// bdnz 0x824a16c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A16C8;
loc_824A16EC:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_824A16F4"))) PPC_WEAK_FUNC(sub_824A16F4);
PPC_FUNC_IMPL(__imp__sub_824A16F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A16F8"))) PPC_WEAK_FUNC(sub_824A16F8);
PPC_FUNC_IMPL(__imp__sub_824A16F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e941c
	// lwz r4,68(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x824a17c4
	if (cr6.lt) goto loc_824A17C4;
	// addi r31,r4,-3
	r31.s64 = ctx.r4.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824A1718:
	// lwz r11,60(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x824a173c
	if (!cr6.gt) goto loc_824A173C;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r5.u8);
loc_824A173C:
	// lwz r11,60(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x824a1764
	if (!cr6.gt) goto loc_824A1764;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r5.u8);
loc_824A1764:
	// lwz r11,60(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// addi r10,r9,60
	ctx.r10.s64 = ctx.r9.s64 + 60;
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,-20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r29,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x824a1790
	if (!cr6.gt) goto loc_824A1790;
	// lwz r30,12(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stbx r5,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r5.u8);
loc_824A1790:
	// lwz r11,60(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x824a17b4
	if (!cr6.gt) goto loc_824A17B4;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r5.u8);
loc_824A17B4:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// blt cr6,0x824a1718
	if (cr6.lt) goto loc_824A1718;
loc_824A17C4:
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bge cr6,0x824a180c
	if (!cr6.lt) {
		sub_824A180C(ctx, base);
		return;
	}
	// subf r9,r8,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_824A17E0:
	// lwz r11,60(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// ble cr6,0x824a1804
	if (!cr6.gt) goto loc_824A1804;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stbx r5,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r5.u8);
loc_824A1804:
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bdnz 0x824a17e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A17E0;
}

__attribute__((alias("__imp__sub_824A180C"))) PPC_WEAK_FUNC(sub_824A180C);
PPC_FUNC_IMPL(__imp__sub_824A180C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A1810"))) PPC_WEAK_FUNC(sub_824A1810);
PPC_FUNC_IMPL(__imp__sub_824A1810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eaae8
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f5,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	cr6.compare(f0.f64, ctx.f5.f64);
	// beq cr6,0x824a185c
	if (cr6.eq) goto loc_824A185C;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f5
	cr6.compare(ctx.f10.f64, ctx.f5.f64);
	// beq cr6,0x824a185c
	if (cr6.eq) goto loc_824A185C;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x824a18cc
	goto loc_824A18CC;
loc_824A185C:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f5
	cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// beq cr6,0x824a1890
	if (cr6.eq) goto loc_824A1890;
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f5
	cr6.compare(ctx.f10.f64, ctx.f5.f64);
	// beq cr6,0x824a1890
	if (cr6.eq) goto loc_824A1890;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// b 0x824a18cc
	goto loc_824A18CC;
loc_824A1890:
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fcmpu cr6,f0,f5
	cr6.compare(f0.f64, ctx.f5.f64);
	// beq cr6,0x824a18c0
	if (cr6.eq) goto loc_824A18C0;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f5
	cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// beq cr6,0x824a18c0
	if (cr6.eq) goto loc_824A18C0;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x824a18cc
	goto loc_824A18CC;
loc_824A18C0:
	// lwz r11,-80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r6,-80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
loc_824A18CC:
	// lwz r9,68(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x824a1adc
	if (!cr6.gt) goto loc_824A1ADC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-31966
	ctx.r9.s64 = -2094923776;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r5,r9,-12840
	ctx.r5.s64 = ctx.r9.s64 + -12840;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,-12840(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12840);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_824A18FC:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,60(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fsubs f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f31,f10,f7
	f31.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f30,f6,f10
	f30.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmuls f29,f9,f0
	f29.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f28,f1,f13
	f28.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f27,f31,f12
	f27.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmsubs f1,f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - f29.f64));
	// fmsubs f31,f31,f0,f28
	f31.f64 = double(float(f31.f64 * f0.f64 - f28.f64));
	// fmsubs f9,f9,f13,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - f27.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmadds f1,f31,f3,f1
	ctx.f1.f64 = double(float(f31.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fmadds f9,f9,f4,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f9,f5
	cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bge cr6,0x824a1974
	if (!cr6.lt) goto loc_824A1974;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A1974:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824a1ad4
	if (cr6.eq) goto loc_824A1AD4;
	// lfs f9,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f31,f6,f9
	f31.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f30,f9,f4
	f30.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// lfs f29,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f28,f10,f29
	f28.f64 = double(float(ctx.f10.f64 - f29.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f27,f8,f9
	f27.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f29,f29,f4
	f29.f64 = double(float(f29.f64 - ctx.f4.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// fmuls f26,f30,f12
	f26.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmuls f25,f27,f0
	f25.f64 = double(float(f27.f64 * f0.f64));
	// fmuls f24,f29,f13
	f24.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmsubs f27,f27,f13,f26
	f27.f64 = double(float(f27.f64 * ctx.f13.f64 - f26.f64));
	// fmsubs f29,f29,f12,f25
	f29.f64 = double(float(f29.f64 * ctx.f12.f64 - f25.f64));
	// fmsubs f30,f30,f0,f24
	f30.f64 = double(float(f30.f64 * f0.f64 - f24.f64));
	// fmuls f28,f27,f28
	f28.f64 = double(float(f27.f64 * f28.f64));
	// fmadds f1,f30,f1,f28
	ctx.f1.f64 = double(float(f30.f64 * ctx.f1.f64 + f28.f64));
	// fmadds f1,f29,f31,f1
	ctx.f1.f64 = double(float(f29.f64 * f31.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f5
	cr6.compare(ctx.f1.f64, ctx.f5.f64);
	// bge cr6,0x824a19e0
	if (!cr6.lt) goto loc_824A19E0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A19E0:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824a1ad4
	if (cr6.eq) goto loc_824A1AD4;
	// fsubs f1,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f31,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfs f30,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f30.f64 = double(temp.f32);
	// fsubs f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 - f31.f64));
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// fsubs f28,f10,f30
	f28.f64 = double(float(ctx.f10.f64 - f30.f64));
	// lfs f27,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f27.f64 = double(temp.f32);
	// fsubs f31,f31,f29
	f31.f64 = double(float(f31.f64 - f29.f64));
	// fsubs f30,f30,f27
	f30.f64 = double(float(f30.f64 - f27.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// fsubs f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fmuls f29,f1,f0
	f29.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmuls f27,f31,f12
	f27.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f26,f30,f13
	f26.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fmsubs f30,f30,f12,f29
	f30.f64 = double(float(f30.f64 * ctx.f12.f64 - f29.f64));
	// fmsubs f1,f1,f13,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - f27.f64));
	// fmsubs f31,f31,f0,f26
	f31.f64 = double(float(f31.f64 * f0.f64 - f26.f64));
	// fmuls f6,f30,f6
	ctx.f6.f64 = double(float(f30.f64 * ctx.f6.f64));
	// fmadds f1,f1,f28,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * f28.f64 + ctx.f6.f64));
	// fmadds f7,f31,f7,f1
	ctx.f7.f64 = double(float(f31.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fcmpu cr6,f7,f5
	cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// bge cr6,0x824a1a48
	if (!cr6.lt) goto loc_824A1A48;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824A1A48:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x824a1ad4
	if (cr6.eq) goto loc_824A1AD4;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f8,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - f0.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 - f0.f64));
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fdivs f0,f3,f13
	f0.f64 = double(float(ctx.f3.f64 / ctx.f13.f64));
	// fdivs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fdivs f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 / ctx.f13.f64));
	// fdivs f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fdivs f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 / ctx.f9.f64));
	// fdivs f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 - f0.f64));
	// fadds f13,f4,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmadds f11,f3,f12,f10
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsubs f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fmuls f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f7,f8,f6,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f6,f1,f12,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfsx f6,r9,r8
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
loc_824A1AD4:
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// bdnz 0x824a18fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A18FC;
loc_824A1ADC:
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x828eab34
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_824A1AEC"))) PPC_WEAK_FUNC(sub_824A1AEC);
PPC_FUNC_IMPL(__imp__sub_824A1AEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A1AF0"))) PPC_WEAK_FUNC(sub_824A1AF0);
PPC_FUNC_IMPL(__imp__sub_824A1AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(f0.f64 - ctx.f8.f64));
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r11,1
	r11.s64 = 1;
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f3,f5,f6,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f4.f64));
	// fcmpu cr6,f3,f31
	cr6.compare(ctx.f3.f64, f31.f64);
	// bgt cr6,0x824a1b58
	if (cr6.gt) goto loc_824A1B58;
	// li r11,0
	r11.s64 = 0;
loc_824A1B58:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a1b70
	if (cr6.eq) goto loc_824A1B70;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824a1810
	sub_824A1810(ctx, base);
loc_824A1B70:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(f0.f64 - ctx.f8.f64));
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f3,f5,f6,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f4.f64));
	// fcmpu cr6,f3,f31
	cr6.compare(ctx.f3.f64, f31.f64);
	// bgt cr6,0x824a1bb0
	if (cr6.gt) goto loc_824A1BB0;
	// li r11,0
	r11.s64 = 0;
loc_824A1BB0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a1bcc
	if (cr6.eq) goto loc_824A1BCC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a1810
	sub_824A1810(ctx, base);
loc_824A1BCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_824A1BD4"))) PPC_WEAK_FUNC(sub_824A1BD4);
PPC_FUNC_IMPL(__imp__sub_824A1BD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A1BD8"))) PPC_WEAK_FUNC(sub_824A1BD8);
PPC_FUNC_IMPL(__imp__sub_824A1BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eaae4
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,68(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// ble cr6,0x824a1de0
	if (!cr6.gt) goto loc_824A1DE0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r29,0
	r29.s64 = 0;
	// lfs f30,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f30.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f29,11288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11288);
	f29.f64 = double(temp.f32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_824A1C50:
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f28,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f28.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - f0.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f12,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f27,f12,f29
	f27.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f27,112(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f27,120(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f26,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f25.f64 = double(temp.f32);
	// lfs f24,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f24.f64 = double(temp.f32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// fneg f23,f27
	ctx.fpscr.disableFlushMode();
	f23.u64 = f27.u64 ^ 0x8000000000000000;
	// stfs f27,80(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f23,88(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// stfs f23,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f23,104(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// stfs f23,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f27,136(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// lfs f10,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f10,f28
	ctx.f7.f64 = double(float(ctx.f10.f64 + f28.f64));
	// lfs f11,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// fadds f3,f6,f24
	ctx.f3.f64 = double(float(ctx.f6.f64 + f24.f64));
	// lfs f2,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f2.f64 = double(temp.f32);
	// fadds f9,f11,f26
	ctx.f9.f64 = double(float(ctx.f11.f64 + f26.f64));
	// lfs f8,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f2,f28
	ctx.f13.f64 = double(float(ctx.f2.f64 + f28.f64));
	// lfs f4,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f8,f25
	ctx.f5.f64 = double(float(ctx.f8.f64 + f25.f64));
	// lfs f0,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	f0.f64 = double(temp.f32);
	// fadds f1,f4,f26
	ctx.f1.f64 = double(float(ctx.f4.f64 + f26.f64));
	// lfs f12,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(f0.f64 + f25.f64));
	// fadds f8,f12,f24
	ctx.f8.f64 = double(float(ctx.f12.f64 + f24.f64));
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f1,208(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f8,220(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f10,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f6.f64 = double(temp.f32);
	// fadds f4,f10,f26
	ctx.f4.f64 = double(float(ctx.f10.f64 + f26.f64));
	// lfs f2,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f6,f28
	f0.f64 = double(float(ctx.f6.f64 + f28.f64));
	// lfs f11,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f2,f25
	ctx.f12.f64 = double(float(ctx.f2.f64 + f25.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f10,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f24
	ctx.f9.f64 = double(float(ctx.f11.f64 + f24.f64));
	// lfs f8,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f26
	ctx.f7.f64 = double(float(ctx.f10.f64 + f26.f64));
	// lfs f6,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f8,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 + f28.f64));
	// lfs f4,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f25
	ctx.f3.f64 = double(float(ctx.f6.f64 + f25.f64));
	// fadds f2,f4,f24
	ctx.f2.f64 = double(float(ctx.f4.f64 + f24.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f3,200(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f2,204(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x8249e5a8
	sub_8249E5A8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x824a1c50
	if (!cr0.eq) goto loc_824A1C50;
loc_824A1DE0:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_824A1DF4"))) PPC_WEAK_FUNC(sub_824A1DF4);
PPC_FUNC_IMPL(__imp__sub_824A1DF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_824A1DF8"))) PPC_WEAK_FUNC(sub_824A1DF8);
PPC_FUNC_IMPL(__imp__sub_824A1DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// mflr r12
	// bl 0x828e93f4
	// lwz r23,4(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r24,-1
	r24.s64 = -1;
	// lwz r20,64(r23)
	r20.u64 = PPC_LOAD_U32(r23.u32 + 64);
	// mullw r21,r11,r20
	r21.s64 = int64_t(r11.s32) * int64_t(r20.s32);
loc_824A1E20:
	// add r11,r21,r7
	r11.u64 = r21.u64 + ctx.r7.u64;
	// li r27,-1
	r27.s64 = -1;
	// add r22,r24,r6
	r22.u64 = r24.u64 + ctx.r6.u64;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
loc_824A1E30:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// bge cr6,0x824a1e40
	if (!cr6.lt) goto loc_824A1E40;
	// li r11,0
	r11.s64 = 0;
	// b 0x824a1e80
	goto loc_824A1E80;
loc_824A1E40:
	// add. r10,r27,r7
	ctx.r10.u64 = r27.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x824a1e50
	if (!cr0.lt) goto loc_824A1E50;
	// li r11,0
	r11.s64 = 0;
	// b 0x824a1e80
	goto loc_824A1E80;
loc_824A1E50:
	// lwz r11,60(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 60);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// ble cr6,0x824a1e68
	if (!cr6.gt) goto loc_824A1E68;
	// li r11,0
	r11.s64 = 0;
	// b 0x824a1e80
	goto loc_824A1E80;
loc_824A1E68:
	// lwz r11,64(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 64);
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r31,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r11.s32 >> 31;
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// adde r11,r3,r31
	temp.u8 = (ctx.r3.u32 + r31.u32 < ctx.r3.u32) | (ctx.r3.u32 + r31.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r3.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824A1E80:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a1f24
	if (cr6.eq) goto loc_824A1F24;
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a1f24
	if (cr6.eq) goto loc_824A1F24;
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a1edc
	if (cr6.eq) goto loc_824A1EDC;
	// lwz r31,4(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r11,0
	r11.s64 = 0;
loc_824A1EB8:
	// lwzx r19,r11,r31
	r19.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmpw cr6,r29,r19
	cr6.compare<int32_t>(r29.s32, r19.s32, xer);
	// beq cr6,0x824a1ed8
	if (cr6.eq) goto loc_824A1ED8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x824a1eb8
	if (cr6.lt) goto loc_824A1EB8;
	// b 0x824a1edc
	goto loc_824A1EDC;
loc_824A1ED8:
	// li r30,1
	r30.s64 = 1;
loc_824A1EDC:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a1f24
	if (!cr6.eq) goto loc_824A1F24;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r10,r26,r6
	ctx.r10.u64 = r26.u64 + ctx.r6.u64;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lfsx f0,r31,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r3.u32);
	f0.f64 = double(temp.f32);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r11,r7
	ctx.r10.u64 = r11.u64 + ctx.r7.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x824a1f24
	if (!cr6.lt) goto loc_824A1F24;
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
loc_824A1F24:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// ble cr6,0x824a1e30
	if (!cr6.gt) goto loc_824A1E30;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r21,r21,r20
	r21.u64 = r21.u64 + r20.u64;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// ble cr6,0x824a1e20
	if (!cr6.gt) goto loc_824A1E20;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x824a1f5c
	if (!cr6.eq) goto loc_824A1F5C;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x824a1f5c
	if (!cr6.eq) goto loc_824A1F5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828e9444
	return;
loc_824A1F5C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r10,r26,r6
	ctx.r10.u64 = r26.u64 + ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mullw r11,r10,r9
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lfsx f0,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
}

__attribute__((alias("__imp__sub_824A1F8C"))) PPC_WEAK_FUNC(sub_824A1F8C);
PPC_FUNC_IMPL(__imp__sub_824A1F8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_824A1F90"))) PPC_WEAK_FUNC(sub_824A1F90);
PPC_FUNC_IMPL(__imp__sub_824A1F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eaae0
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r10,-25148
	ctx.r5.s64 = ctx.r10.s64 + -25148;
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f1,-4480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4480);
	ctx.f1.f64 = double(temp.f32);
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a2158
	if (cr6.eq) goto loc_824A2158;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x824a2158
	if (!cr6.gt) goto loc_824A2158;
	// mtctr r11
	ctr.u64 = r11.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
loc_824A205C:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lfs f8,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f6,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmr f23,f7
	f23.f64 = ctx.f7.f64;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// fsubs f28,f5,f9
	f28.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f27,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f27.f64 = double(temp.f32);
	// fsubs f26,f27,f8
	f26.f64 = double(float(f27.f64 - ctx.f8.f64));
	// lfs f25,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f25.f64 = double(temp.f32);
	// fsubs f24,f25,f7
	f24.f64 = double(float(f25.f64 - ctx.f7.f64));
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fsubs f23,f1,f23
	f23.f64 = double(float(ctx.f1.f64 - f23.f64));
	// lfsx f22,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f22.f64 = double(temp.f32);
	// fmuls f28,f28,f11
	f28.f64 = double(float(f28.f64 * ctx.f11.f64));
	// fmadds f2,f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f4,f26,f13,f28
	ctx.f4.f64 = double(float(f26.f64 * ctx.f13.f64 + f28.f64));
	// fmadds f2,f23,f23,f2
	ctx.f2.f64 = double(float(f23.f64 * f23.f64 + ctx.f2.f64));
	// fmadds f4,f24,f12,f4
	ctx.f4.f64 = double(float(f24.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f2,f2
	ctx.f2.f64 = double(float(sqrt(ctx.f2.f64)));
	// fmuls f28,f13,f4
	f28.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f26,f11,f4
	f26.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + f28.f64));
	// fadds f9,f9,f26
	ctx.f9.f64 = double(float(ctx.f9.f64 + f26.f64));
	// fadds f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fsubs f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fsubs f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f3,f7,f1
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// fsubs f1,f8,f27
	ctx.f1.f64 = double(float(ctx.f8.f64 - f27.f64));
	// fsubs f8,f7,f25
	ctx.f8.f64 = double(float(ctx.f7.f64 - f25.f64));
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmuls f7,f6,f6
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f6,f1,f1
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f5,f4,f4,f7
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f4,f9,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f3,f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f1,f8,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fsqrts f9,f3
	ctx.f9.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// fsqrts f7,f1
	ctx.f7.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - f0.f64));
	// fmuls f5,f9,f29
	ctx.f5.f64 = double(float(ctx.f9.f64 * f29.f64));
	// fsel f4,f6,f0,f8
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? f0.f64 : ctx.f8.f64;
	// fsel f3,f4,f4,f10
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// fsubs f2,f0,f3
	ctx.f2.f64 = double(float(f0.f64 - ctx.f3.f64));
	// fsubs f1,f0,f2
	ctx.f1.f64 = double(float(f0.f64 - ctx.f2.f64));
	// fmuls f9,f2,f30
	ctx.f9.f64 = double(float(ctx.f2.f64 * f30.f64));
	// fmadds f8,f1,f31,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * f31.f64 + ctx.f9.f64));
	// fmadds f7,f7,f8,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fadds f6,f7,f22
	ctx.f6.f64 = double(float(ctx.f7.f64 + f22.f64));
	// stfsx f6,r11,r9
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// bdnz 0x824a205c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A205C;
loc_824A2158:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x828eab2c
}

__attribute__((alias("__imp__sub_824A2164"))) PPC_WEAK_FUNC(sub_824A2164);
PPC_FUNC_IMPL(__imp__sub_824A2164) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A2168"))) PPC_WEAK_FUNC(sub_824A2168);
PPC_FUNC_IMPL(__imp__sub_824A2168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-4460
	ctx.r9.s64 = r11.s64 + -4460;
	// li r30,0
	r30.s64 = 0;
	// addi r8,r10,7572
	ctx.r8.s64 = ctx.r10.s64 + 7572;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// or r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 | ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,21036(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x822ca8f0
	sub_822CA8F0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x824a2218
	if (!cr6.gt) goto loc_824A2218;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_824A2200:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f31,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r7,56(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x824a2200
	if (cr6.lt) goto loc_824A2200;
loc_824A2218:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_824A2224"))) PPC_WEAK_FUNC(sub_824A2224);
PPC_FUNC_IMPL(__imp__sub_824A2224) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A2228"))) PPC_WEAK_FUNC(sub_824A2228);
PPC_FUNC_IMPL(__imp__sub_824A2228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r9,r10,-4460
	ctx.r9.s64 = ctx.r10.s64 + -4460;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_824A223C"))) PPC_WEAK_FUNC(sub_824A223C);
PPC_FUNC_IMPL(__imp__sub_824A223C) {
	PPC_FUNC_PROLOGUE();
	// b 0x822caf88
	sub_822CAF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A2240"))) PPC_WEAK_FUNC(sub_824A2240);
PPC_FUNC_IMPL(__imp__sub_824A2240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaadc
	// stwu r1,-1744(r1)
	ea = -1744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r5,1780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1780, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r28,0
	r28.s64 = 0;
	// addi r9,r10,-4472
	ctx.r9.s64 = ctx.r10.s64 + -4472;
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r16,1
	r16.s64 = 1;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// lwz r7,24192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r16,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r16.u32);
	// mr r15,r28
	r15.u64 = r28.u64;
	// stw r7,1488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1488, ctx.r7.u32);
	// bl 0x824bbd08
	sub_824BBD08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824bb980
	sub_824BB980(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r14,-1
	r14.s64 = -1;
	// lfs f30,-24324(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24324);
	f30.f64 = double(temp.f32);
	// mr r17,r14
	r17.u64 = r14.u64;
	// lfs f21,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f21.f64 = double(temp.f32);
	// lfs f31,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	f31.f64 = double(temp.f32);
loc_824A22D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bb220
	sub_824BB220(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x824a23b8
	if (!cr6.gt) goto loc_824A23B8;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f0.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stfs f21,116(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bge cr6,0x824a2340
	if (!cr6.lt) goto loc_824A2340;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a2380
	goto loc_824A2380;
loc_824A2340:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x824a2350
	if (!cr6.lt) goto loc_824A2350;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a2380
	goto loc_824A2380;
loc_824A2350:
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// ble cr6,0x824a2368
	if (!cr6.gt) goto loc_824A2368;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a2380
	goto loc_824A2380;
loc_824A2368:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r8,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r11.s32 >> 31;
	// subfc r6,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	ctx.r6.s64 = r11.s64 - ctx.r9.s64;
	// adde r11,r10,r8
	temp.u8 = (ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824A2380:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a23a0
	if (cr6.eq) goto loc_824A23A0;
	// lwz r11,12(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824a23a0
	if (cr6.eq) goto loc_824A23A0;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
loc_824A23A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824bba60
	sub_824BBA60(ctx, base);
	// fsubs f30,f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f30.f64 - f31.f64));
	// fcmpu cr6,f30,f21
	cr6.compare(f30.f64, f21.f64);
	// bge cr6,0x824a22d8
	if (!cr6.lt) goto loc_824A22D8;
loc_824A23B8:
	// cmpwi cr6,r17,-1
	cr6.compare<int32_t>(r17.s32, -1, xer);
	// beq cr6,0x824a23e4
	if (cr6.eq) goto loc_824A23E4;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r11,r17,4,0,27
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lfs f22,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f22.f64 = double(temp.f32);
	// lfs f23,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f23.f64 = double(temp.f32);
	// lfs f24,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f24.f64 = double(temp.f32);
	// lfs f25,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f25.f64 = double(temp.f32);
	// b 0x824a23f4
	goto loc_824A23F4;
loc_824A23E4:
	// lfs f25,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f25.f64 = double(temp.f32);
	// lfs f24,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f24.f64 = double(temp.f32);
	// lfs f23,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f23.f64 = double(temp.f32);
	// lfs f22,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f22.f64 = double(temp.f32);
loc_824A23F4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r21,r31,16
	r21.s64 = r31.s64 + 16;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// addi r11,r1,692
	r11.s64 = ctx.r1.s64 + 692;
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r24,r11,-8
	r24.s64 = r11.s64 + -8;
	// addi r25,r10,-8
	r25.s64 = ctx.r10.s64 + -8;
	// lis r11,-31966
	r11.s64 = -2094923776;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f26,6196(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6196);
	f26.f64 = double(temp.f32);
	// mr r22,r28
	r22.u64 = r28.u64;
	// lis r19,-32254
	r19.s64 = -2113798144;
	// addi r23,r11,-12840
	r23.s64 = r11.s64 + -12840;
	// addi r20,r10,-25148
	r20.s64 = ctx.r10.s64 + -25148;
loc_824A245C:
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stfs f21,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mullw r11,r11,r6
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// cmpw cr6,r30,r17
	cr6.compare<int32_t>(r30.s32, r17.s32, xer);
	// bne cr6,0x824a248c
	if (!cr6.eq) goto loc_824A248C;
	// cmpwi cr6,r17,-1
	cr6.compare<int32_t>(r17.s32, -1, xer);
	// bne cr6,0x824a28b0
	if (!cr6.eq) goto loc_824A28B0;
loc_824A248C:
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a1df8
	sub_824A1DF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a253c
	if (cr6.eq) goto loc_824A253C;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// divw r8,r31,r10
	ctx.r8.s32 = r31.s32 / ctx.r10.s32;
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// divw r11,r31,r10
	r11.s32 = r31.s32 / ctx.r10.s32;
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r10,r5,r31
	ctx.r10.s64 = r31.s64 - ctx.r5.s64;
	// subf r3,r6,r11
	ctx.r3.s64 = r11.s64 - ctx.r6.s64;
	// subf r11,r29,r10
	r11.s64 = ctx.r10.s64 - r29.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r25)
	PPC_STORE_U32(r25.u32 + 8, ctx.r3.u32);
	// stw r11,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r11.u32);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// ble cr6,0x824a2518
	if (!cr6.gt) goto loc_824A2518;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A2518:
	// lwz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// beq 0x824a28b4
	if (cr0.eq) goto loc_824A28B4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// b 0x824a28b4
	goto loc_824A28B4;
loc_824A253C:
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(r22.s32, 2, xer);
	// bge cr6,0x824a28b0
	if (!cr6.lt) goto loc_824A28B0;
	// cmpwi cr6,r17,-1
	cr6.compare<int32_t>(r17.s32, -1, xer);
	// beq cr6,0x824a28b0
	if (cr6.eq) goto loc_824A28B0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lfs f1,-4480(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r19.u32 + -4480);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// fsubs f0,f22,f30
	f0.f64 = double(float(f22.f64 - f30.f64));
	// lfs f28,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f28.f64 = double(temp.f32);
	// fsubs f13,f23,f29
	ctx.f13.f64 = double(float(f23.f64 - f29.f64));
	// lfs f27,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f27.f64 = double(temp.f32);
	// fsubs f12,f24,f28
	ctx.f12.f64 = double(float(f24.f64 - f28.f64));
	// fsubs f11,f25,f27
	ctx.f11.f64 = double(float(f25.f64 - f27.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822b3538
	sub_822B3538(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a28b0
	if (cr6.eq) goto loc_824A28B0;
	// lfs f10,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// mr r27,r28
	r27.u64 = r28.u64;
	// lfs f9,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// fmuls f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(f0.f64 * f31.f64));
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f11,8(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * f31.f64));
	// addi r31,r1,616
	r31.s64 = ctx.r1.s64 + 616;
	// mr r30,r28
	r30.u64 = r28.u64;
	// li r29,3
	r29.s64 = 3;
	// fadds f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 + f29.f64));
	// stfs f6,612(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// fmsubs f3,f12,f13,f3
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + f28.f64));
	// stfs f8,616(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// fadds f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 + f30.f64));
	// stfs f7,608(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// fmsubs f5,f10,f11,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmsubs f4,f0,f9,f4
	ctx.f4.f64 = double(float(f0.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fadds f0,f1,f27
	f0.f64 = double(float(ctx.f1.f64 + f27.f64));
	// stfs f0,620(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// stfs f0,636(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 636, temp.u32);
	// stfs f0,652(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// fmuls f0,f3,f31
	f0.f64 = double(float(ctx.f3.f64 * f31.f64));
	// fmuls f2,f5,f31
	ctx.f2.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fsubs f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 - f0.f64));
	// stfs f11,632(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + f0.f64));
	// stfs f8,648(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// fsubs f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// stfs f13,624(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// fsubs f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f12,628(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// fadds f10,f7,f2
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f10,640(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// fadds f9,f6,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// stfs f9,644(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
loc_824A2664:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -8);
	f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r1,672
	ctx.r9.s64 = ctx.r1.s64 + 672;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r5,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r5.u32);
	// bge cr6,0x824a26cc
	if (!cr6.lt) goto loc_824A26CC;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a270c
	goto loc_824A270C;
loc_824A26CC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x824a26dc
	if (!cr6.lt) goto loc_824A26DC;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a270c
	goto loc_824A270C;
loc_824A26DC:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// ble cr6,0x824a26f4
	if (!cr6.gt) goto loc_824A26F4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x824a270c
	goto loc_824A270C;
loc_824A26F4:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r9,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 31;
	// subfc r8,r7,r11
	xer.ca = r11.u32 >= ctx.r7.u32;
	ctx.r8.s64 = r11.s64 - ctx.r7.s64;
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r10.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_824A270C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a2748
	if (cr6.eq) goto loc_824A2748;
	// addi r11,r1,656
	r11.s64 = ctx.r1.s64 + 656;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a1df8
	sub_824A1DF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a2748
	if (cr6.eq) goto loc_824A2748;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_824A2748:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x824a2664
	if (!cr0.eq) goto loc_824A2664;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x824a28b0
	if (!cr6.gt) goto loc_824A28B0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// blt cr6,0x824a27cc
	if (cr6.lt) goto loc_824A27CC;
	// addi r7,r27,-3
	ctx.r7.s64 = r27.s64 + -3;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,660
	ctx.r9.s64 = ctx.r1.s64 + 660;
loc_824A2778:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x824a2788
	if (!cr6.lt) goto loc_824A2788;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_824A2788:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x824a2798
	if (!cr6.lt) goto loc_824A2798;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_824A2798:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x824a27a8
	if (!cr6.lt) goto loc_824A27A8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_824A27A8:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x824a27b8
	if (!cr6.lt) goto loc_824A27B8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
loc_824A27B8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x824a2778
	if (cr6.lt) goto loc_824A2778;
loc_824A27CC:
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x824a2804
	if (!cr6.lt) goto loc_824A2804;
	// subf r7,r11,r27
	ctx.r7.s64 = r27.s64 - r11.s64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_824A27E8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(f0.f64, f26.f64);
	// bge cr6,0x824a27f8
	if (!cr6.lt) goto loc_824A27F8;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_824A27F8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824a27e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824A27E8;
loc_824A2804:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r8,r1,672
	ctx.r8.s64 = ctx.r1.s64 + 672;
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,64(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// divw r9,r8,r3
	ctx.r9.s32 = ctx.r8.s32 / ctx.r3.s32;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// divw r3,r8,r5
	ctx.r3.s32 = ctx.r8.s32 / ctx.r5.s32;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// stwu r7,8(r25)
	ea = 8 + r25.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r25.u32 = ea;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stwu r9,8(r24)
	ea = 8 + r24.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r24.u32 = ea;
	// ble cr6,0x824a287c
	if (!cr6.gt) goto loc_824A287C;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_824A287C:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a289c
	if (cr0.eq) goto loc_824A289C;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_824A289C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x824a28b4
	goto loc_824A28B4;
loc_824A28B0:
	// mr r16,r28
	r16.u64 = r28.u64;
loc_824A28B4:
	// clrlwi r11,r16,24
	r11.u64 = r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a245c
	if (!cr6.eq) goto loc_824A245C;
	// lwz r11,1780(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1780);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x824a28ec
	if (!cr6.gt) goto loc_824A28EC;
loc_824A28D4:
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
	// bgt cr6,0x824a28d4
	if (cr6.gt) goto loc_824A28D4;
loc_824A28EC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824a2914
	if (!cr6.gt) goto loc_824A2914;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A2914:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a2950
	if (cr0.eq) goto loc_824A2950;
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,4(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,8(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,12(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_824A2950:
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f13,4(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f11,12(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8249e0d0
	sub_8249E0D0(ctx, base);
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// ble cr6,0x824a2a60
	if (!cr6.gt) goto loc_824A2A60;
	// addi r27,r15,-1
	r27.s64 = r15.s64 + -1;
	// addi r29,r1,688
	r29.s64 = ctx.r1.s64 + 688;
loc_824A2994:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bne cr6,0x824a29c4
	if (!cr6.eq) goto loc_824A29C4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x824a29e0
	goto loc_824A29E0;
loc_824A29C4:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x824a29dc
	if (!cr6.eq) goto loc_824A29DC;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x824a2a50
	if (cr6.eq) goto loc_824A2A50;
loc_824A29DC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_824A29E0:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x8249ded8
	sub_8249DED8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x824a2a14
	if (!cr6.gt) goto loc_824A2A14;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A2A14:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824a2a50
	if (cr0.eq) goto loc_824A2A50;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_824A2A50:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r15
	cr6.compare<int32_t>(r28.s32, r15.s32, xer);
	// blt cr6,0x824a2994
	if (cr6.lt) goto loc_824A2994;
loc_824A2A60:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824bb970
	sub_824BB970(ctx, base);
	// lwz r3,1488(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1744
	ctx.r1.s64 = ctx.r1.s64 + 1744;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab28
}

__attribute__((alias("__imp__sub_824A2A7C"))) PPC_WEAK_FUNC(sub_824A2A7C);
PPC_FUNC_IMPL(__imp__sub_824A2A7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_824A2A80"))) PPC_WEAK_FUNC(sub_824A2A80);
PPC_FUNC_IMPL(__imp__sub_824A2A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-4472
	ctx.r9.s64 = r11.s64 + -4472;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x824a2ab0
	if (!cr6.gt) goto loc_824A2AB0;
loc_824A2A98:
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
	// bgt cr6,0x824a2a98
	if (cr6.gt) goto loc_824A2A98;
loc_824A2AB0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-22728
	ctx.r9.s64 = r11.s64 + -22728;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_824A2AC8:
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
	// bgt cr6,0x824a2ac8
	if (cr6.gt) goto loc_824A2AC8;
}

__attribute__((alias("__imp__sub_824A2AE0"))) PPC_WEAK_FUNC(sub_824A2AE0);
PPC_FUNC_IMPL(__imp__sub_824A2AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2AE4"))) PPC_WEAK_FUNC(sub_824A2AE4);
PPC_FUNC_IMPL(__imp__sub_824A2AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2AE8"))) PPC_WEAK_FUNC(sub_824A2AE8);
PPC_FUNC_IMPL(__imp__sub_824A2AE8) {
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
	// bl 0x824a2a80
	sub_824A2A80(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a2b20
	if (cr6.eq) goto loc_824A2B20;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A2B20:
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

__attribute__((alias("__imp__sub_824A2B34"))) PPC_WEAK_FUNC(sub_824A2B34);
PPC_FUNC_IMPL(__imp__sub_824A2B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2B38"))) PPC_WEAK_FUNC(sub_824A2B38);
PPC_FUNC_IMPL(__imp__sub_824A2B38) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-4460
	ctx.r10.s64 = r11.s64 + -4460;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822caf88
	sub_822CAF88(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a2b80
	if (cr6.eq) goto loc_824A2B80;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A2B80:
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

__attribute__((alias("__imp__sub_824A2B94"))) PPC_WEAK_FUNC(sub_824A2B94);
PPC_FUNC_IMPL(__imp__sub_824A2B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2B98"))) PPC_WEAK_FUNC(sub_824A2B98);
PPC_FUNC_IMPL(__imp__sub_824A2B98) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,-4444
	ctx.r10.s64 = r11.s64 + -4444;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824a2e40
	sub_824A2E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e5d8
	sub_8249E5D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A2BD8"))) PPC_WEAK_FUNC(sub_824A2BD8);
PPC_FUNC_IMPL(__imp__sub_824A2BD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2BDC"))) PPC_WEAK_FUNC(sub_824A2BDC);
PPC_FUNC_IMPL(__imp__sub_824A2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2BE0"))) PPC_WEAK_FUNC(sub_824A2BE0);
PPC_FUNC_IMPL(__imp__sub_824A2BE0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,-4436
	ctx.r9.s64 = ctx.r10.s64 + -4436;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,67
	ctx.r10.s64 = 67;
loc_824A2C04:
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
	// bne cr6,0x824a2c04
	if (!cr6.eq) goto loc_824A2C04;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e5e8
	sub_8249E5E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-4444
	ctx.r9.s64 = r11.s64 + -4444;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x824a2e50
	sub_824A2E50(ctx, base);
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

__attribute__((alias("__imp__sub_824A2C60"))) PPC_WEAK_FUNC(sub_824A2C60);
PPC_FUNC_IMPL(__imp__sub_824A2C60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2C64"))) PPC_WEAK_FUNC(sub_824A2C64);
PPC_FUNC_IMPL(__imp__sub_824A2C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2C68"))) PPC_WEAK_FUNC(sub_824A2C68);
PPC_FUNC_IMPL(__imp__sub_824A2C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lfs f31,176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 176);
	f31.f64 = double(temp.f32);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lfs f30,180(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 180);
	f30.f64 = double(temp.f32);
	// lfs f29,184(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 184);
	f29.f64 = double(temp.f32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bge 0x824a2d84
	if (!cr0.lt) goto loc_824A2D84;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8249cb80
	sub_8249CB80(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x824a2d7c
	if (!cr6.gt) goto loc_824A2D7C;
	// li r28,200
	r28.s64 = 200;
loc_824A2CD8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8249cc38
	sub_8249CC38(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x824a2d70
	if (cr6.eq) goto loc_824A2D70;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824a2d68
	if (cr6.eq) goto loc_824A2D68;
	// lfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,180(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 - f30.f64));
	// fsubs f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfs f10,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 - f29.f64));
	// fsubs f7,f9,f29
	ctx.f7.f64 = double(float(ctx.f9.f64 - f29.f64));
	// lfs f6,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,176(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 - f31.f64));
	// fsubs f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 - f31.f64));
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f8,f8,f2
	f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f13,f7,f7,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f12,f4,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + f0.f64));
	// fmadds f11,f3,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f9,f11
	ctx.f9.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f10,f9
	cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x824a2d5c
	if (cr6.lt) goto loc_824A2D5C;
	// li r11,0
	r11.s64 = 0;
loc_824A2D5C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a2d70
	if (cr6.eq) goto loc_824A2D70;
loc_824A2D68:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824A2D70:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x824a2cd8
	if (cr6.lt) goto loc_824A2CD8;
loc_824A2D7C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_824A2D84:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lfs f0,-4456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4456);
	f0.f64 = double(temp.f32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,-4452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4452);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_824A2DD0"))) PPC_WEAK_FUNC(sub_824A2DD0);
PPC_FUNC_IMPL(__imp__sub_824A2DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_824A2DD4"))) PPC_WEAK_FUNC(sub_824A2DD4);
PPC_FUNC_IMPL(__imp__sub_824A2DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A2DD8"))) PPC_WEAK_FUNC(sub_824A2DD8);
PPC_FUNC_IMPL(__imp__sub_824A2DD8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// addi r10,r11,-4444
	ctx.r10.s64 = r11.s64 + -4444;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x824a2e40
	sub_824A2E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e5d8
	sub_8249E5D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a2e28
	if (cr6.eq) goto loc_824A2E28;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A2E28:
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

__attribute__((alias("__imp__sub_824A2E3C"))) PPC_WEAK_FUNC(sub_824A2E3C);
PPC_FUNC_IMPL(__imp__sub_824A2E3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2E40"))) PPC_WEAK_FUNC(sub_824A2E40);
PPC_FUNC_IMPL(__imp__sub_824A2E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-4408
	ctx.r10.s64 = r11.s64 + -4408;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_824A2E4C"))) PPC_WEAK_FUNC(sub_824A2E4C);
PPC_FUNC_IMPL(__imp__sub_824A2E4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8249e5d8
	sub_8249E5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A2E50"))) PPC_WEAK_FUNC(sub_824A2E50);
PPC_FUNC_IMPL(__imp__sub_824A2E50) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,-4400
	ctx.r9.s64 = ctx.r10.s64 + -4400;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,70
	ctx.r10.s64 = 70;
loc_824A2E74:
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
	// bne cr6,0x824a2e74
	if (!cr6.eq) goto loc_824A2E74;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e5e8
	sub_8249E5E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-31966
	ctx.r8.s64 = -2094923776;
	// addi r7,r9,-4408
	ctx.r7.s64 = ctx.r9.s64 + -4408;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,4560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4560);
	f0.f64 = double(temp.f32);
	// lfs f13,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r5,r8,-12736
	ctx.r5.s64 = ctx.r8.s64 + -12736;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,15536(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 15536);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12736(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12736);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A2F14"))) PPC_WEAK_FUNC(sub_824A2F14);
PPC_FUNC_IMPL(__imp__sub_824A2F14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A2F18"))) PPC_WEAK_FUNC(sub_824A2F18);
PPC_FUNC_IMPL(__imp__sub_824A2F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eaaf4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x824a0448
	sub_824A0448(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x824a31e8
	sub_824A31E8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f31,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f0,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,4492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4492);
	f0.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * f0.f64));
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f30.f64 = double(temp.f32);
	// lfs f29,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f29.f64 = double(temp.f32);
	// lfs f28,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f28.f64 = double(temp.f32);
	// lfs f27,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f27.f64 = double(temp.f32);
	// bl 0x822b3ef0
	sub_822B3EF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b40c8
	sub_822B40C8(ctx, base);
	// lfs f5,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b3ff0
	sub_822B3FF0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f4,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f30
	ctx.f2.f64 = double(float(ctx.f4.f64 + f30.f64));
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f3,f29
	f0.f64 = double(float(ctx.f3.f64 + f29.f64));
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f28
	ctx.f12.f64 = double(float(ctx.f1.f64 + f28.f64));
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// stfs f11,12(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab40
}

__attribute__((alias("__imp__sub_824A3080"))) PPC_WEAK_FUNC(sub_824A3080);
PPC_FUNC_IMPL(__imp__sub_824A3080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_824A3084"))) PPC_WEAK_FUNC(sub_824A3084);
PPC_FUNC_IMPL(__imp__sub_824A3084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3088"))) PPC_WEAK_FUNC(sub_824A3088);
PPC_FUNC_IMPL(__imp__sub_824A3088) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r25,4(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// beq cr6,0x824a31d8
	if (cr6.eq) goto loc_824A31D8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824a2f18
	sub_824A2F18(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lwz r11,-4656(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4656);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x824a31b4
	if (!cr6.eq) goto loc_824A31B4;
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824a31b4
	if (cr6.eq) goto loc_824A31B4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfs f0,2992(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,140(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + f0.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x824a3288
	sub_824A3288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249e580
	sub_8249E580(ctx, base);
	// lfs f0,2992(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 + f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 + f0.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x824a3288
	sub_824A3288(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8249e580
	sub_8249E580(ctx, base);
loc_824A31B4:
	// lfs f3,36(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r31,16
	ctx.r7.s64 = r31.s64 + 16;
	// lfs f0,2992(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 2992);
	f0.f64 = double(temp.f32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * f0.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x824a1f90
	sub_824A1F90(ctx, base);
loc_824A31D8:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_824A31E4"))) PPC_WEAK_FUNC(sub_824A31E4);
PPC_FUNC_IMPL(__imp__sub_824A31E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_824A31E8"))) PPC_WEAK_FUNC(sub_824A31E8);
PPC_FUNC_IMPL(__imp__sub_824A31E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f9,f0,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f5.f64));
	// fmadds f3,f8,f12,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f2,f7,f13,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f6
	cr6.compare(ctx.f2.f64, ctx.f6.f64);
	// bge cr6,0x824a3238
	if (!cr6.lt) goto loc_824A3238;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_824A3238:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fmuls f6,f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f5,f9,f1
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f10,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f10,f1
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fmuls f1,f0,f2
	ctx.f1.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fmuls f0,f2,f11
	f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fadds f11,f1,f5
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f10,f0,f6
	ctx.f10.f64 = double(float(f0.f64 + ctx.f6.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_824A3284"))) PPC_WEAK_FUNC(sub_824A3284);
PPC_FUNC_IMPL(__imp__sub_824A3284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3288"))) PPC_WEAK_FUNC(sub_824A3288);
PPC_FUNC_IMPL(__imp__sub_824A3288) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,-25104(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25104);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a3300
	if (!cr6.eq) goto loc_824A3300;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r31,r9,-25120
	r31.s64 = ctx.r9.s64 + -25120;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r6,-31979
	ctx.r6.s64 = -2095775744;
	// lfs f13,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,-25104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25104, r11.u32);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r3,r6,-21392
	ctx.r3.s64 = ctx.r6.s64 + -21392;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f13,-25120(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + -25120, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A3300:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-25120
	ctx.r3.s64 = r11.s64 + -25120;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A3318"))) PPC_WEAK_FUNC(sub_824A3318);
PPC_FUNC_IMPL(__imp__sub_824A3318) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A331C"))) PPC_WEAK_FUNC(sub_824A331C);
PPC_FUNC_IMPL(__imp__sub_824A331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3320"))) PPC_WEAK_FUNC(sub_824A3320);
PPC_FUNC_IMPL(__imp__sub_824A3320) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4408
	ctx.r10.s64 = r11.s64 + -4408;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8249e5d8
	sub_8249E5D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a3364
	if (cr6.eq) goto loc_824A3364;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A3364:
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

__attribute__((alias("__imp__sub_824A3378"))) PPC_WEAK_FUNC(sub_824A3378);
PPC_FUNC_IMPL(__imp__sub_824A3378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A337C"))) PPC_WEAK_FUNC(sub_824A337C);
PPC_FUNC_IMPL(__imp__sub_824A337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3380"))) PPC_WEAK_FUNC(sub_824A3380);
PPC_FUNC_IMPL(__imp__sub_824A3380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-4376
	ctx.r10.s64 = r11.s64 + -4376;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8249e5d8
	sub_8249E5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3390"))) PPC_WEAK_FUNC(sub_824A3390);
PPC_FUNC_IMPL(__imp__sub_824A3390) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,-4368
	ctx.r9.s64 = ctx.r10.s64 + -4368;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,71
	ctx.r10.s64 = 71;
loc_824A33B4:
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
	// bne cr6,0x824a33b4
	if (!cr6.eq) goto loc_824A33B4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e5e8
	sub_8249E5E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4376
	ctx.r10.s64 = r11.s64 + -4376;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A3400"))) PPC_WEAK_FUNC(sub_824A3400);
PPC_FUNC_IMPL(__imp__sub_824A3400) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3404"))) PPC_WEAK_FUNC(sub_824A3404);
PPC_FUNC_IMPL(__imp__sub_824A3404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3408"))) PPC_WEAK_FUNC(sub_824A3408);
PPC_FUNC_IMPL(__imp__sub_824A3408) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r27,4(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a3448
	if (cr6.eq) goto loc_824A3448;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a344c
	if (!cr6.eq) goto loc_824A344C;
loc_824A3448:
	// li r11,0
	r11.s64 = 0;
loc_824A344C:
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lfs f1,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// bl 0x82478590
	sub_82478590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A3470"))) PPC_WEAK_FUNC(sub_824A3470);
PPC_FUNC_IMPL(__imp__sub_824A3470) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A3474"))) PPC_WEAK_FUNC(sub_824A3474);
PPC_FUNC_IMPL(__imp__sub_824A3474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3478"))) PPC_WEAK_FUNC(sub_824A3478);
PPC_FUNC_IMPL(__imp__sub_824A3478) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4376
	ctx.r10.s64 = r11.s64 + -4376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8249e5d8
	sub_8249E5D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a34bc
	if (cr6.eq) goto loc_824A34BC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A34BC:
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

__attribute__((alias("__imp__sub_824A34D0"))) PPC_WEAK_FUNC(sub_824A34D0);
PPC_FUNC_IMPL(__imp__sub_824A34D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A34D4"))) PPC_WEAK_FUNC(sub_824A34D4);
PPC_FUNC_IMPL(__imp__sub_824A34D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A34D8"))) PPC_WEAK_FUNC(sub_824A34D8);
PPC_FUNC_IMPL(__imp__sub_824A34D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,-4332
	ctx.r10.s64 = r11.s64 + -4332;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8249e5d8
	sub_8249E5D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A34E8"))) PPC_WEAK_FUNC(sub_824A34E8);
PPC_FUNC_IMPL(__imp__sub_824A34E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
}

__attribute__((alias("__imp__sub_824A3508"))) PPC_WEAK_FUNC(sub_824A3508);
PPC_FUNC_IMPL(__imp__sub_824A3508) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A350C"))) PPC_WEAK_FUNC(sub_824A350C);
PPC_FUNC_IMPL(__imp__sub_824A350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3510"))) PPC_WEAK_FUNC(sub_824A3510);
PPC_FUNC_IMPL(__imp__sub_824A3510) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r10,-4324
	ctx.r9.s64 = ctx.r10.s64 + -4324;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,80
	ctx.r10.s64 = 80;
loc_824A3534:
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
	// bne cr6,0x824a3534
	if (!cr6.eq) goto loc_824A3534;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e5e8
	sub_8249E5E8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,-4332
	ctx.r9.s64 = r11.s64 + -4332;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A3598"))) PPC_WEAK_FUNC(sub_824A3598);
PPC_FUNC_IMPL(__imp__sub_824A3598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A359C"))) PPC_WEAK_FUNC(sub_824A359C);
PPC_FUNC_IMPL(__imp__sub_824A359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A35A0"))) PPC_WEAK_FUNC(sub_824A35A0);
PPC_FUNC_IMPL(__imp__sub_824A35A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lis r31,-32254
	r31.s64 = -2113798144;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,24192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,-4340(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + -4340);
	f0.f64 = double(temp.f32);
	// lfs f13,-4344(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -4344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fmuls f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// bl 0x824a1f90
	sub_824A1F90(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_824A3654"))) PPC_WEAK_FUNC(sub_824A3654);
PPC_FUNC_IMPL(__imp__sub_824A3654) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3658"))) PPC_WEAK_FUNC(sub_824A3658);
PPC_FUNC_IMPL(__imp__sub_824A3658) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4332
	ctx.r10.s64 = r11.s64 + -4332;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8249e5d8
	sub_8249E5D8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a369c
	if (cr6.eq) goto loc_824A369C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A369C:
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

__attribute__((alias("__imp__sub_824A36B0"))) PPC_WEAK_FUNC(sub_824A36B0);
PPC_FUNC_IMPL(__imp__sub_824A36B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A36B4"))) PPC_WEAK_FUNC(sub_824A36B4);
PPC_FUNC_IMPL(__imp__sub_824A36B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A36B8"))) PPC_WEAK_FUNC(sub_824A36B8);
PPC_FUNC_IMPL(__imp__sub_824A36B8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4288
	ctx.r10.s64 = r11.s64 + -4288;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a36fc
	if (cr6.eq) goto loc_824A36FC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A36FC:
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

__attribute__((alias("__imp__sub_824A3710"))) PPC_WEAK_FUNC(sub_824A3710);
PPC_FUNC_IMPL(__imp__sub_824A3710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3714"))) PPC_WEAK_FUNC(sub_824A3714);
PPC_FUNC_IMPL(__imp__sub_824A3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3718"))) PPC_WEAK_FUNC(sub_824A3718);
PPC_FUNC_IMPL(__imp__sub_824A3718) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4240
	ctx.r10.s64 = r11.s64 + -4240;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a375c
	if (cr6.eq) goto loc_824A375C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A375C:
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

__attribute__((alias("__imp__sub_824A3770"))) PPC_WEAK_FUNC(sub_824A3770);
PPC_FUNC_IMPL(__imp__sub_824A3770) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3774"))) PPC_WEAK_FUNC(sub_824A3774);
PPC_FUNC_IMPL(__imp__sub_824A3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3778"))) PPC_WEAK_FUNC(sub_824A3778);
PPC_FUNC_IMPL(__imp__sub_824A3778) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4192
	ctx.r10.s64 = r11.s64 + -4192;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a37bc
	if (cr6.eq) goto loc_824A37BC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A37BC:
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

__attribute__((alias("__imp__sub_824A37D0"))) PPC_WEAK_FUNC(sub_824A37D0);
PPC_FUNC_IMPL(__imp__sub_824A37D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A37D4"))) PPC_WEAK_FUNC(sub_824A37D4);
PPC_FUNC_IMPL(__imp__sub_824A37D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A37D8"))) PPC_WEAK_FUNC(sub_824A37D8);
PPC_FUNC_IMPL(__imp__sub_824A37D8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4144
	ctx.r10.s64 = r11.s64 + -4144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a381c
	if (cr6.eq) goto loc_824A381C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A381C:
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

__attribute__((alias("__imp__sub_824A3830"))) PPC_WEAK_FUNC(sub_824A3830);
PPC_FUNC_IMPL(__imp__sub_824A3830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3834"))) PPC_WEAK_FUNC(sub_824A3834);
PPC_FUNC_IMPL(__imp__sub_824A3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3838"))) PPC_WEAK_FUNC(sub_824A3838);
PPC_FUNC_IMPL(__imp__sub_824A3838) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4096
	ctx.r10.s64 = r11.s64 + -4096;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826e8e28
	sub_826E8E28(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x824a387c
	if (cr6.eq) goto loc_824A387C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824A387C:
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

__attribute__((alias("__imp__sub_824A3890"))) PPC_WEAK_FUNC(sub_824A3890);
PPC_FUNC_IMPL(__imp__sub_824A3890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3894"))) PPC_WEAK_FUNC(sub_824A3894);
PPC_FUNC_IMPL(__imp__sub_824A3894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3898"))) PPC_WEAK_FUNC(sub_824A3898);
PPC_FUNC_IMPL(__imp__sub_824A3898) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
}

__attribute__((alias("__imp__sub_824A389C"))) PPC_WEAK_FUNC(sub_824A389C);
PPC_FUNC_IMPL(__imp__sub_824A389C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A38A0"))) PPC_WEAK_FUNC(sub_824A38A0);
PPC_FUNC_IMPL(__imp__sub_824A38A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A38AC"))) PPC_WEAK_FUNC(sub_824A38AC);
PPC_FUNC_IMPL(__imp__sub_824A38AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A38B0"))) PPC_WEAK_FUNC(sub_824A38B0);
PPC_FUNC_IMPL(__imp__sub_824A38B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x826eba10
	sub_826EBA10(ctx, base);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82424fb8
	sub_82424FB8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// addi r9,r11,-3992
	ctx.r9.s64 = r11.s64 + -3992;
	// addi r8,r10,-4000
	ctx.r8.s64 = ctx.r10.s64 + -4000;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r7,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r7,r6,-4052
	ctx.r7.s64 = ctx.r6.s64 + -4052;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3958
	if (cr6.eq) goto loc_824A3958;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824b95b0
	sub_824B95B0(ctx, base);
	// b 0x824a395c
	goto loc_824A395C;
loc_824A3958:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A395C:
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82424fa8
	sub_82424FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826eb788
	sub_826EB788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_824A397C"))) PPC_WEAK_FUNC(sub_824A397C);
PPC_FUNC_IMPL(__imp__sub_824A397C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A3980"))) PPC_WEAK_FUNC(sub_824A3980);
PPC_FUNC_IMPL(__imp__sub_824A3980) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_824A3984"))) PPC_WEAK_FUNC(sub_824A3984);
PPC_FUNC_IMPL(__imp__sub_824A3984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3988"))) PPC_WEAK_FUNC(sub_824A3988);
PPC_FUNC_IMPL(__imp__sub_824A3988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 13);
}

__attribute__((alias("__imp__sub_824A3990"))) PPC_WEAK_FUNC(sub_824A3990);
PPC_FUNC_IMPL(__imp__sub_824A3990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3994"))) PPC_WEAK_FUNC(sub_824A3994);
PPC_FUNC_IMPL(__imp__sub_824A3994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3998"))) PPC_WEAK_FUNC(sub_824A3998);
PPC_FUNC_IMPL(__imp__sub_824A3998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r4,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A39A4"))) PPC_WEAK_FUNC(sub_824A39A4);
PPC_FUNC_IMPL(__imp__sub_824A39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A39A8"))) PPC_WEAK_FUNC(sub_824A39A8);
PPC_FUNC_IMPL(__imp__sub_824A39A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A39B4"))) PPC_WEAK_FUNC(sub_824A39B4);
PPC_FUNC_IMPL(__imp__sub_824A39B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A39B8"))) PPC_WEAK_FUNC(sub_824A39B8);
PPC_FUNC_IMPL(__imp__sub_824A39B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
}

__attribute__((alias("__imp__sub_824A39C4"))) PPC_WEAK_FUNC(sub_824A39C4);
PPC_FUNC_IMPL(__imp__sub_824A39C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A39C8"))) PPC_WEAK_FUNC(sub_824A39C8);
PPC_FUNC_IMPL(__imp__sub_824A39C8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x824a3b54
	if (cr6.gt) goto loc_824A3B54;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x824a3a44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824A3A44;
	// bdzf 4*cr6+eq,0x824a3a88
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824A3A88;
	// bdzf 4*cr6+eq,0x824a3acc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_824A3ACC;
	// bne cr6,0x824a3b10
	if (!cr6.eq) goto loc_824A3B10;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r11,-25080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a3a38
	if (!cr6.eq) goto loc_824A3A38;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, r11.u32);
	// addi r3,r9,-3920
	ctx.r3.s64 = ctx.r9.s64 + -3920;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,-25084(r31)
	PPC_STORE_U32(r31.u32 + -25084, ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3A38:
	// lwz r3,-25084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25084);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3A44:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r11,-25080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a3a7c
	if (!cr6.eq) goto loc_824A3A7C;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, r11.u32);
	// addi r3,r9,-3928
	ctx.r3.s64 = ctx.r9.s64 + -3928;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,-25088(r31)
	PPC_STORE_U32(r31.u32 + -25088, ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3A7C:
	// lwz r3,-25088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25088);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3A88:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r11,-25080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a3ac0
	if (!cr6.eq) goto loc_824A3AC0;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, r11.u32);
	// addi r3,r9,-3936
	ctx.r3.s64 = ctx.r9.s64 + -3936;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,-25092(r31)
	PPC_STORE_U32(r31.u32 + -25092, ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3AC0:
	// lwz r3,-25092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25092);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3ACC:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r11,-25080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a3b04
	if (!cr6.eq) goto loc_824A3B04;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, r11.u32);
	// addi r3,r9,-3944
	ctx.r3.s64 = ctx.r9.s64 + -3944;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,-25096(r31)
	PPC_STORE_U32(r31.u32 + -25096, ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3B04:
	// lwz r3,-25096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25096);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3B10:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r11,-25080(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824a3b48
	if (!cr6.eq) goto loc_824A3B48;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,-25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25080, r11.u32);
	// addi r3,r9,-3952
	ctx.r3.s64 = ctx.r9.s64 + -3952;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,-25100(r31)
	PPC_STORE_U32(r31.u32 + -25100, ctx.r3.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3B48:
	// lwz r3,-25100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -25100);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x824a3b5c
	goto loc_824A3B5C;
loc_824A3B54:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_824A3B5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_824A3B74"))) PPC_WEAK_FUNC(sub_824A3B74);
PPC_FUNC_IMPL(__imp__sub_824A3B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3B78"))) PPC_WEAK_FUNC(sub_824A3B78);
PPC_FUNC_IMPL(__imp__sub_824A3B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r7,r10,-4052
	ctx.r7.s64 = ctx.r10.s64 + -4052;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,264
	ctx.r8.s64 = 264;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3be4
	if (cr6.eq) goto loc_824A3BE4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x824b4ea8
	sub_824B4EA8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x824a3be8
	goto loc_824A3BE8;
loc_824A3BE4:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_824A3BE8:
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

__attribute__((alias("__imp__sub_824A3BFC"))) PPC_WEAK_FUNC(sub_824A3BFC);
PPC_FUNC_IMPL(__imp__sub_824A3BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3C00"))) PPC_WEAK_FUNC(sub_824A3C00);
PPC_FUNC_IMPL(__imp__sub_824A3C00) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x824b9518
	sub_824B9518(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,-12880
	ctx.r4.s64 = ctx.r10.s64 + -12880;
	// bl 0x826ed0a0
	sub_826ED0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ecff0
	sub_826ECFF0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r9,-20692
	ctx.r4.s64 = ctx.r9.s64 + -20692;
	// bl 0x826ed0a0
	sub_826ED0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ecff0
	sub_826ECFF0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r8,-3892
	ctx.r4.s64 = ctx.r8.s64 + -3892;
	// bl 0x826ed0a0
	sub_826ED0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ecff0
	sub_826ECFF0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r7,-3904
	ctx.r4.s64 = ctx.r7.s64 + -3904;
	// bl 0x826ed0a0
	sub_826ED0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ecff0
	sub_826ECFF0(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r6,-3912
	ctx.r4.s64 = ctx.r6.s64 + -3912;
	// bl 0x826ed0a0
	sub_826ED0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826ecff0
	sub_826ECFF0(ctx, base);
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

__attribute__((alias("__imp__sub_824A3CC4"))) PPC_WEAK_FUNC(sub_824A3CC4);
PPC_FUNC_IMPL(__imp__sub_824A3CC4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3CC8"))) PPC_WEAK_FUNC(sub_824A3CC8);
PPC_FUNC_IMPL(__imp__sub_824A3CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
}

__attribute__((alias("__imp__sub_824A3CE4"))) PPC_WEAK_FUNC(sub_824A3CE4);
PPC_FUNC_IMPL(__imp__sub_824A3CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x826eb970
	sub_826EB970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A3CE8"))) PPC_WEAK_FUNC(sub_824A3CE8);
PPC_FUNC_IMPL(__imp__sub_824A3CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A3CEC"))) PPC_WEAK_FUNC(sub_824A3CEC);
PPC_FUNC_IMPL(__imp__sub_824A3CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3CF0"))) PPC_WEAK_FUNC(sub_824A3CF0);
PPC_FUNC_IMPL(__imp__sub_824A3CF0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r31,92(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3992
	ctx.r9.s64 = r11.s64 + -3992;
	// addi r8,r10,-4000
	ctx.r8.s64 = ctx.r10.s64 + -4000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824a3d40
	if (cr6.eq) goto loc_824A3D40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b9530
	sub_824B9530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
loc_824A3D40:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r28,r11,44
	r28.s64 = r11.s64 + 44;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x824a3dc8
	if (cr6.eq) goto loc_824A3DC8;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a3d78
	if (cr6.eq) goto loc_824A3D78;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a3d7c
	if (!cr6.eq) goto loc_824A3D7C;
loc_824A3D78:
	// li r11,0
	r11.s64 = 0;
loc_824A3D7C:
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3db0
	if (cr6.eq) goto loc_824A3DB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826e5698
	sub_826E5698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_824A3DB0:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,18088(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18088);
	// bl 0x826e59e0
	sub_826E59E0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_824A3DC8:
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82424fd0
	sub_82424FD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ebac0
	sub_826EBAC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A3DE4"))) PPC_WEAK_FUNC(sub_824A3DE4);
PPC_FUNC_IMPL(__imp__sub_824A3DE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_824A3DE8"))) PPC_WEAK_FUNC(sub_824A3DE8);
PPC_FUNC_IMPL(__imp__sub_824A3DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,-26400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26400);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824a3e28
	if (cr6.eq) goto loc_824A3E28;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a3e2c
	if (!cr6.eq) goto loc_824A3E2C;
loc_824A3E28:
	// li r11,0
	r11.s64 = 0;
loc_824A3E2C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3e78
	if (cr6.eq) goto loc_824A3E78;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a3e78
	if (!cr6.eq) goto loc_824A3E78;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A3E78:
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x824a3e94
	if (cr6.eq) goto loc_824A3E94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a3e98
	if (!cr6.eq) goto loc_824A3E98;
loc_824A3E94:
	// li r11,0
	r11.s64 = 0;
loc_824A3E98:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20968(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20968);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r28,100
	ctx.r4.s64 = r28.s64 + 100;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a3eec
	if (!cr6.eq) goto loc_824A3EEC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a3eec
	if (!cr6.eq) goto loc_824A3EEC;
	// lwz r11,20968(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20968);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A3EEC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826eb850
	sub_826EB850(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824A3EF8"))) PPC_WEAK_FUNC(sub_824A3EF8);
PPC_FUNC_IMPL(__imp__sub_824A3EF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A3EFC"))) PPC_WEAK_FUNC(sub_824A3EFC);
PPC_FUNC_IMPL(__imp__sub_824A3EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A3F00"))) PPC_WEAK_FUNC(sub_824A3F00);
PPC_FUNC_IMPL(__imp__sub_824A3F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826eb810
	sub_826EB810(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,-26396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -26396);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x824a3f44
	if (cr6.eq) goto loc_824A3F44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a3f48
	if (!cr6.eq) goto loc_824A3F48;
loc_824A3F44:
	// li r11,0
	r11.s64 = 0;
loc_824A3F48:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a3f94
	if (cr6.eq) goto loc_824A3F94;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824a3f94
	if (!cr6.eq) goto loc_824A3F94;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_824A3F94:
	// lwz r3,-14368(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14368);
	// lis r11,-32182
	r11.s64 = -2109079552;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r31,r11,15560
	r31.s64 = r11.s64 + 15560;
	// beq cr6,0x824a3fb8
	if (cr6.eq) goto loc_824A3FB8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x824a3fbc
	if (!cr6.eq) goto loc_824A3FBC;
loc_824A3FB8:
	// li r11,0
	r11.s64 = 0;
loc_824A3FBC:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,20072
	ctx.r3.s64 = ctx.r9.s64 + 20072;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20968(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20968);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,100
	ctx.r4.s64 = r29.s64 + 100;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_824A400C"))) PPC_WEAK_FUNC(sub_824A400C);
PPC_FUNC_IMPL(__imp__sub_824A400C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A4010"))) PPC_WEAK_FUNC(sub_824A4010);
PPC_FUNC_IMPL(__imp__sub_824A4010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826eba00
	sub_826EBA00(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24880(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -24880);
	// lwz r29,12(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a4ae0
	sub_824A4AE0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826eba00
	sub_826EBA00(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24884(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24884);
	// lwz r29,12(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a4b70
	sub_824A4B70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826eba00
	sub_826EBA00(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24888(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24888);
	// lwz r29,12(r6)
	r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a4c00
	sub_824A4C00(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826eba00
	sub_826EBA00(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24892(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24892);
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a4c90
	sub_824A4C90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826eba00
	sub_826EBA00(ctx, base);
	// lis r3,-31933
	ctx.r3.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24896(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24896);
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x824a4d20
	sub_824A4D20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A4160"))) PPC_WEAK_FUNC(sub_824A4160);
PPC_FUNC_IMPL(__imp__sub_824A4160) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A4164"))) PPC_WEAK_FUNC(sub_824A4164);
PPC_FUNC_IMPL(__imp__sub_824A4164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A4168"))) PPC_WEAK_FUNC(sub_824A4168);
PPC_FUNC_IMPL(__imp__sub_824A4168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,-24916(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -24916);
	// lwz r29,12(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a4fb0
	sub_824A4FB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24920(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24920);
	// lwz r29,12(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5030
	sub_824A5030(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24924(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24924);
	// lwz r29,12(r6)
	r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a50b0
	sub_824A50B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24928(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + -24928);
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5130
	sub_824A5130(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r3,-31933
	ctx.r3.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24932(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24932);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a51b0
	sub_824A51B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24936(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24936);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5230
	sub_824A5230(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r31,-24940(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24940);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a52b0
	sub_824A52B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24944(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24944);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5330
	sub_824A5330(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,18384(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 18384);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a53b0
	sub_824A53B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24948(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24948);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5430
	sub_824A5430(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24952(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24952);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a54b0
	sub_824A54B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24956(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24956);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5530
	sub_824A5530(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24960(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24960);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a55b0
	sub_824A55B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24964(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24964);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5638
	sub_824A5638(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24968(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24968);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a56b8
	sub_824A56B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,18412(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18412);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5738
	sub_824A5738(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24972(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24972);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a57b8
	sub_824A57B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,18364(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18364);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5838
	sub_824A5838(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24976(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24976);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a58b8
	sub_824A58B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24980(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24980);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5938
	sub_824A5938(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24984(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24984);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a59b8
	sub_824A59B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24988(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24988);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5a38
	sub_824A5A38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24992(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24992);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5ab8
	sub_824A5AB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-24996(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -24996);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5b38
	sub_824A5B38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25000(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25000);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5bb8
	sub_824A5BB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25004(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25004);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5c38
	sub_824A5C38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25008(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25008);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5cb8
	sub_824A5CB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25012(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25012);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5d38
	sub_824A5D38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25016(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25016);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5db8
	sub_824A5DB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25020(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25020);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5e38
	sub_824A5E38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25024(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25024);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5eb8
	sub_824A5EB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25028(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25028);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5f38
	sub_824A5F38(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25032(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25032);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a5fb8
	sub_824A5FB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25036(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25036);
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a6038
	sub_824A6038(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25040(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25040);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a60b8
	sub_824A60B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25044(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25044);
	// lwz r29,12(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a6138
	sub_824A6138(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25048(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25048);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a61b8
	sub_824A61B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25052(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25052);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,12(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a6238
	sub_824A6238(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25056(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25056);
	// lwz r29,12(r7)
	r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x824a62b8
	sub_824A62B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r31,-25060(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25060);
	// lwz r30,12(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x824a6338
	sub_824A6338(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e90c8
	sub_826E90C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_824A499C"))) PPC_WEAK_FUNC(sub_824A499C);
PPC_FUNC_IMPL(__imp__sub_824A499C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_824A49A0"))) PPC_WEAK_FUNC(sub_824A49A0);
PPC_FUNC_IMPL(__imp__sub_824A49A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32182
	r11.s64 = -2109079552;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// addi r8,r11,19888
	ctx.r8.s64 = r11.s64 + 19888;
	// addi r7,r9,20280
	ctx.r7.s64 = ctx.r9.s64 + 20280;
	// subfic r6,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r8.s64;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r4,19888
	ctx.r10.s64 = ctx.r4.s64 + 19888;
	// and r9,r11,r7
	ctx.r9.u64 = r11.u64 & ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,-24900
	ctx.r4.s64 = ctx.r8.s64 + -24900;
	// bl 0x826ed7f8
	sub_826ED7F8(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,20016
	ctx.r5.s64 = ctx.r7.s64 + 20016;
	// addi r4,r6,20280
	ctx.r4.s64 = ctx.r6.s64 + 20280;
	// subfic r3,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r5.s64;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,20016
	ctx.r8.s64 = ctx.r10.s64 + 20016;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r6,-24904
	ctx.r4.s64 = ctx.r6.s64 + -24904;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x826ed7f8
	sub_826ED7F8(ctx, base);
	// lis r11,-32182
	r11.s64 = -2109079552;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r9,r11,20144
	ctx.r9.s64 = r11.s64 + 20144;
	// addi r8,r10,20280
	ctx.r8.s64 = ctx.r10.s64 + 20280;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,20144
	r11.s64 = ctx.r5.s64 + 20144;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,-24908
	ctx.r4.s64 = ctx.r9.s64 + -24908;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x826ed7f8
	sub_826ED7F8(ctx, base);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r5,r7,20272
	ctx.r5.s64 = ctx.r7.s64 + 20272;
	// addi r4,r6,20280
	ctx.r4.s64 = ctx.r6.s64 + 20280;
	// subfic r3,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r5.s64;
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,20272
	ctx.r8.s64 = ctx.r10.s64 + 20272;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r6,-24912
	ctx.r4.s64 = ctx.r6.s64 + -24912;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x826ed7f8
	sub_826ED7F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A4AD4"))) PPC_WEAK_FUNC(sub_824A4AD4);
PPC_FUNC_IMPL(__imp__sub_824A4AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4AD8"))) PPC_WEAK_FUNC(sub_824A4AD8);
PPC_FUNC_IMPL(__imp__sub_824A4AD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_824A4ADC"))) PPC_WEAK_FUNC(sub_824A4ADC);
PPC_FUNC_IMPL(__imp__sub_824A4ADC) {
	PPC_FUNC_PROLOGUE();
	// b 0x824a63b8
	sub_824A63B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824A4AE0"))) PPC_WEAK_FUNC(sub_824A4AE0);
PPC_FUNC_IMPL(__imp__sub_824A4AE0) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4b54
	if (cr6.eq) goto loc_824A4B54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4288
	ctx.r10.s64 = r11.s64 + -4288;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824a4b58
	goto loc_824A4B58;
loc_824A4B54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A4B58:
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

__attribute__((alias("__imp__sub_824A4B6C"))) PPC_WEAK_FUNC(sub_824A4B6C);
PPC_FUNC_IMPL(__imp__sub_824A4B6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4B70"))) PPC_WEAK_FUNC(sub_824A4B70);
PPC_FUNC_IMPL(__imp__sub_824A4B70) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4be4
	if (cr6.eq) goto loc_824A4BE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4240
	ctx.r10.s64 = r11.s64 + -4240;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824a4be8
	goto loc_824A4BE8;
loc_824A4BE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A4BE8:
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

__attribute__((alias("__imp__sub_824A4BFC"))) PPC_WEAK_FUNC(sub_824A4BFC);
PPC_FUNC_IMPL(__imp__sub_824A4BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4C00"))) PPC_WEAK_FUNC(sub_824A4C00);
PPC_FUNC_IMPL(__imp__sub_824A4C00) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4c74
	if (cr6.eq) goto loc_824A4C74;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4192
	ctx.r10.s64 = r11.s64 + -4192;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824a4c78
	goto loc_824A4C78;
loc_824A4C74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A4C78:
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

__attribute__((alias("__imp__sub_824A4C8C"))) PPC_WEAK_FUNC(sub_824A4C8C);
PPC_FUNC_IMPL(__imp__sub_824A4C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4C90"))) PPC_WEAK_FUNC(sub_824A4C90);
PPC_FUNC_IMPL(__imp__sub_824A4C90) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4d04
	if (cr6.eq) goto loc_824A4D04;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4144
	ctx.r10.s64 = r11.s64 + -4144;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824a4d08
	goto loc_824A4D08;
loc_824A4D04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A4D08:
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

__attribute__((alias("__imp__sub_824A4D1C"))) PPC_WEAK_FUNC(sub_824A4D1C);
PPC_FUNC_IMPL(__imp__sub_824A4D1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4D20"))) PPC_WEAK_FUNC(sub_824A4D20);
PPC_FUNC_IMPL(__imp__sub_824A4D20) {
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
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,28
	ctx.r3.s64 = 28;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4d94
	if (cr6.eq) goto loc_824A4D94;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x826e8df0
	sub_826E8DF0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4096
	ctx.r10.s64 = r11.s64 + -4096;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824a4d98
	goto loc_824A4D98;
loc_824A4D94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824A4D98:
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

__attribute__((alias("__imp__sub_824A4DAC"))) PPC_WEAK_FUNC(sub_824A4DAC);
PPC_FUNC_IMPL(__imp__sub_824A4DAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4DB0"))) PPC_WEAK_FUNC(sub_824A4DB0);
PPC_FUNC_IMPL(__imp__sub_824A4DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12744
	ctx.r7.s64 = ctx.r10.s64 + -12744;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4e18
	if (cr6.eq) goto loc_824A4E18;
	// bl 0x824b2260
	sub_824B2260(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A4E18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A4E2C"))) PPC_WEAK_FUNC(sub_824A4E2C);
PPC_FUNC_IMPL(__imp__sub_824A4E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4E30"))) PPC_WEAK_FUNC(sub_824A4E30);
PPC_FUNC_IMPL(__imp__sub_824A4E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12744
	ctx.r7.s64 = ctx.r10.s64 + -12744;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4e98
	if (cr6.eq) goto loc_824A4E98;
	// bl 0x824b2438
	sub_824B2438(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A4E98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A4EAC"))) PPC_WEAK_FUNC(sub_824A4EAC);
PPC_FUNC_IMPL(__imp__sub_824A4EAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4EB0"))) PPC_WEAK_FUNC(sub_824A4EB0);
PPC_FUNC_IMPL(__imp__sub_824A4EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12744
	ctx.r7.s64 = ctx.r10.s64 + -12744;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4f18
	if (cr6.eq) goto loc_824A4F18;
	// bl 0x824abff8
	sub_824ABFF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A4F18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A4F2C"))) PPC_WEAK_FUNC(sub_824A4F2C);
PPC_FUNC_IMPL(__imp__sub_824A4F2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4F30"))) PPC_WEAK_FUNC(sub_824A4F30);
PPC_FUNC_IMPL(__imp__sub_824A4F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12744
	ctx.r7.s64 = ctx.r10.s64 + -12744;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a4f98
	if (cr6.eq) goto loc_824A4F98;
	// bl 0x824b2c50
	sub_824B2C50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A4F98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A4FAC"))) PPC_WEAK_FUNC(sub_824A4FAC);
PPC_FUNC_IMPL(__imp__sub_824A4FAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A4FB0"))) PPC_WEAK_FUNC(sub_824A4FB0);
PPC_FUNC_IMPL(__imp__sub_824A4FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,856
	ctx.r3.s64 = 856;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5018
	if (cr6.eq) goto loc_824A5018;
	// bl 0x824ae440
	sub_824AE440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5018:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A502C"))) PPC_WEAK_FUNC(sub_824A502C);
PPC_FUNC_IMPL(__imp__sub_824A502C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5030"))) PPC_WEAK_FUNC(sub_824A5030);
PPC_FUNC_IMPL(__imp__sub_824A5030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,984
	ctx.r3.s64 = 984;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5098
	if (cr6.eq) goto loc_824A5098;
	// bl 0x824b11c0
	sub_824B11C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A50AC"))) PPC_WEAK_FUNC(sub_824A50AC);
PPC_FUNC_IMPL(__imp__sub_824A50AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A50B0"))) PPC_WEAK_FUNC(sub_824A50B0);
PPC_FUNC_IMPL(__imp__sub_824A50B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5118
	if (cr6.eq) goto loc_824A5118;
	// bl 0x824b3638
	sub_824B3638(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5118:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A512C"))) PPC_WEAK_FUNC(sub_824A512C);
PPC_FUNC_IMPL(__imp__sub_824A512C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5130"))) PPC_WEAK_FUNC(sub_824A5130);
PPC_FUNC_IMPL(__imp__sub_824A5130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5198
	if (cr6.eq) goto loc_824A5198;
	// bl 0x824b3e78
	sub_824B3E78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A51AC"))) PPC_WEAK_FUNC(sub_824A51AC);
PPC_FUNC_IMPL(__imp__sub_824A51AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A51B0"))) PPC_WEAK_FUNC(sub_824A51B0);
PPC_FUNC_IMPL(__imp__sub_824A51B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5218
	if (cr6.eq) goto loc_824A5218;
	// bl 0x824b42c0
	sub_824B42C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5218:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A522C"))) PPC_WEAK_FUNC(sub_824A522C);
PPC_FUNC_IMPL(__imp__sub_824A522C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5230"))) PPC_WEAK_FUNC(sub_824A5230);
PPC_FUNC_IMPL(__imp__sub_824A5230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5298
	if (cr6.eq) goto loc_824A5298;
	// bl 0x824b38e8
	sub_824B38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5298:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A52AC"))) PPC_WEAK_FUNC(sub_824A52AC);
PPC_FUNC_IMPL(__imp__sub_824A52AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A52B0"))) PPC_WEAK_FUNC(sub_824A52B0);
PPC_FUNC_IMPL(__imp__sub_824A52B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5318
	if (cr6.eq) goto loc_824A5318;
	// bl 0x824b3ae0
	sub_824B3AE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5318:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A532C"))) PPC_WEAK_FUNC(sub_824A532C);
PPC_FUNC_IMPL(__imp__sub_824A532C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5330"))) PPC_WEAK_FUNC(sub_824A5330);
PPC_FUNC_IMPL(__imp__sub_824A5330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5398
	if (cr6.eq) goto loc_824A5398;
	// bl 0x824b4868
	sub_824B4868(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5398:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A53AC"))) PPC_WEAK_FUNC(sub_824A53AC);
PPC_FUNC_IMPL(__imp__sub_824A53AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A53B0"))) PPC_WEAK_FUNC(sub_824A53B0);
PPC_FUNC_IMPL(__imp__sub_824A53B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5418
	if (cr6.eq) goto loc_824A5418;
	// bl 0x824b4730
	sub_824B4730(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5418:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A542C"))) PPC_WEAK_FUNC(sub_824A542C);
PPC_FUNC_IMPL(__imp__sub_824A542C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5430"))) PPC_WEAK_FUNC(sub_824A5430);
PPC_FUNC_IMPL(__imp__sub_824A5430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5498
	if (cr6.eq) goto loc_824A5498;
	// bl 0x822b4d38
	sub_822B4D38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A54AC"))) PPC_WEAK_FUNC(sub_824A54AC);
PPC_FUNC_IMPL(__imp__sub_824A54AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A54B0"))) PPC_WEAK_FUNC(sub_824A54B0);
PPC_FUNC_IMPL(__imp__sub_824A54B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5518
	if (cr6.eq) goto loc_824A5518;
	// bl 0x824b2660
	sub_824B2660(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5518:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A552C"))) PPC_WEAK_FUNC(sub_824A552C);
PPC_FUNC_IMPL(__imp__sub_824A552C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5530"))) PPC_WEAK_FUNC(sub_824A5530);
PPC_FUNC_IMPL(__imp__sub_824A5530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5598
	if (cr6.eq) goto loc_824A5598;
	// bl 0x824b1ed0
	sub_824B1ED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5598:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A55AC"))) PPC_WEAK_FUNC(sub_824A55AC);
PPC_FUNC_IMPL(__imp__sub_824A55AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A55B0"))) PPC_WEAK_FUNC(sub_824A55B0);
PPC_FUNC_IMPL(__imp__sub_824A55B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ori r3,r3,56148
	ctx.r3.u64 = ctx.r3.u64 | 56148;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a561c
	if (cr6.eq) goto loc_824A561C;
	// bl 0x822b5230
	sub_822B5230(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A561C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5630"))) PPC_WEAK_FUNC(sub_824A5630);
PPC_FUNC_IMPL(__imp__sub_824A5630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5634"))) PPC_WEAK_FUNC(sub_824A5634);
PPC_FUNC_IMPL(__imp__sub_824A5634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824A5638"))) PPC_WEAK_FUNC(sub_824A5638);
PPC_FUNC_IMPL(__imp__sub_824A5638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a56a0
	if (cr6.eq) goto loc_824A56A0;
	// bl 0x824b2720
	sub_824B2720(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A56A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A56B4"))) PPC_WEAK_FUNC(sub_824A56B4);
PPC_FUNC_IMPL(__imp__sub_824A56B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A56B8"))) PPC_WEAK_FUNC(sub_824A56B8);
PPC_FUNC_IMPL(__imp__sub_824A56B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5720
	if (cr6.eq) goto loc_824A5720;
	// bl 0x824b3110
	sub_824B3110(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5734"))) PPC_WEAK_FUNC(sub_824A5734);
PPC_FUNC_IMPL(__imp__sub_824A5734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5738"))) PPC_WEAK_FUNC(sub_824A5738);
PPC_FUNC_IMPL(__imp__sub_824A5738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a57a0
	if (cr6.eq) goto loc_824A57A0;
	// bl 0x824b3320
	sub_824B3320(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A57A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A57B4"))) PPC_WEAK_FUNC(sub_824A57B4);
PPC_FUNC_IMPL(__imp__sub_824A57B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A57B8"))) PPC_WEAK_FUNC(sub_824A57B8);
PPC_FUNC_IMPL(__imp__sub_824A57B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5820
	if (cr6.eq) goto loc_824A5820;
	// bl 0x824a86c8
	sub_824A86C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5820:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5834"))) PPC_WEAK_FUNC(sub_824A5834);
PPC_FUNC_IMPL(__imp__sub_824A5834) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5838"))) PPC_WEAK_FUNC(sub_824A5838);
PPC_FUNC_IMPL(__imp__sub_824A5838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a58a0
	if (cr6.eq) goto loc_824A58A0;
	// bl 0x824a9748
	sub_824A9748(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A58A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A58B4"))) PPC_WEAK_FUNC(sub_824A58B4);
PPC_FUNC_IMPL(__imp__sub_824A58B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A58B8"))) PPC_WEAK_FUNC(sub_824A58B8);
PPC_FUNC_IMPL(__imp__sub_824A58B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5920
	if (cr6.eq) goto loc_824A5920;
	// bl 0x824a9e38
	sub_824A9E38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5920:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5934"))) PPC_WEAK_FUNC(sub_824A5934);
PPC_FUNC_IMPL(__imp__sub_824A5934) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5938"))) PPC_WEAK_FUNC(sub_824A5938);
PPC_FUNC_IMPL(__imp__sub_824A5938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a59a0
	if (cr6.eq) goto loc_824A59A0;
	// bl 0x822b44f8
	sub_822B44F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A59A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A59B4"))) PPC_WEAK_FUNC(sub_824A59B4);
PPC_FUNC_IMPL(__imp__sub_824A59B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A59B8"))) PPC_WEAK_FUNC(sub_824A59B8);
PPC_FUNC_IMPL(__imp__sub_824A59B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5a20
	if (cr6.eq) goto loc_824A5A20;
	// bl 0x824a8b00
	sub_824A8B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5A20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5A34"))) PPC_WEAK_FUNC(sub_824A5A34);
PPC_FUNC_IMPL(__imp__sub_824A5A34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5A38"))) PPC_WEAK_FUNC(sub_824A5A38);
PPC_FUNC_IMPL(__imp__sub_824A5A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5aa0
	if (cr6.eq) goto loc_824A5AA0;
	// bl 0x824a9698
	sub_824A9698(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5AB4"))) PPC_WEAK_FUNC(sub_824A5AB4);
PPC_FUNC_IMPL(__imp__sub_824A5AB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5AB8"))) PPC_WEAK_FUNC(sub_824A5AB8);
PPC_FUNC_IMPL(__imp__sub_824A5AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5b20
	if (cr6.eq) goto loc_824A5B20;
	// bl 0x824a9298
	sub_824A9298(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5B20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5B34"))) PPC_WEAK_FUNC(sub_824A5B34);
PPC_FUNC_IMPL(__imp__sub_824A5B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5B38"))) PPC_WEAK_FUNC(sub_824A5B38);
PPC_FUNC_IMPL(__imp__sub_824A5B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5ba0
	if (cr6.eq) goto loc_824A5BA0;
	// bl 0x822b4400
	sub_822B4400(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5BA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5BB4"))) PPC_WEAK_FUNC(sub_824A5BB4);
PPC_FUNC_IMPL(__imp__sub_824A5BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5BB8"))) PPC_WEAK_FUNC(sub_824A5BB8);
PPC_FUNC_IMPL(__imp__sub_824A5BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5c20
	if (cr6.eq) goto loc_824A5C20;
	// bl 0x822b3628
	sub_822B3628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5C20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5C34"))) PPC_WEAK_FUNC(sub_824A5C34);
PPC_FUNC_IMPL(__imp__sub_824A5C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5C38"))) PPC_WEAK_FUNC(sub_824A5C38);
PPC_FUNC_IMPL(__imp__sub_824A5C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5ca0
	if (cr6.eq) goto loc_824A5CA0;
	// bl 0x822b41b0
	sub_822B41B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5CA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5CB4"))) PPC_WEAK_FUNC(sub_824A5CB4);
PPC_FUNC_IMPL(__imp__sub_824A5CB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5CB8"))) PPC_WEAK_FUNC(sub_824A5CB8);
PPC_FUNC_IMPL(__imp__sub_824A5CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5d20
	if (cr6.eq) goto loc_824A5D20;
	// bl 0x824a8a38
	sub_824A8A38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5D20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_824A5D34"))) PPC_WEAK_FUNC(sub_824A5D34);
PPC_FUNC_IMPL(__imp__sub_824A5D34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824A5D38"))) PPC_WEAK_FUNC(sub_824A5D38);
PPC_FUNC_IMPL(__imp__sub_824A5D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,-12872
	ctx.r7.s64 = ctx.r10.s64 + -12872;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824a5da0
	if (cr6.eq) goto loc_824A5DA0;
	// bl 0x822b4350
	sub_822B4350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_824A5DA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

