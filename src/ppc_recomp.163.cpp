#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825AF4CC"))) PPC_WEAK_FUNC(sub_825AF4CC);
PPC_FUNC_IMPL(__imp__sub_825AF4CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF4D0"))) PPC_WEAK_FUNC(sub_825AF4D0);
PPC_FUNC_IMPL(__imp__sub_825AF4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// bl 0x822f08e0
	sub_822F08E0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r30,84
	ctx.r4.s64 = r30.s64 + 84;
	// bl 0x8234e2d0
	sub_8234E2D0(ctx, base);
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 196);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825AF538"))) PPC_WEAK_FUNC(sub_825AF538);
PPC_FUNC_IMPL(__imp__sub_825AF538) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825AF53C"))) PPC_WEAK_FUNC(sub_825AF53C);
PPC_FUNC_IMPL(__imp__sub_825AF53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF540"))) PPC_WEAK_FUNC(sub_825AF540);
PPC_FUNC_IMPL(__imp__sub_825AF540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF544"))) PPC_WEAK_FUNC(sub_825AF544);
PPC_FUNC_IMPL(__imp__sub_825AF544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF548"))) PPC_WEAK_FUNC(sub_825AF548);
PPC_FUNC_IMPL(__imp__sub_825AF548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF54C"))) PPC_WEAK_FUNC(sub_825AF54C);
PPC_FUNC_IMPL(__imp__sub_825AF54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF550"))) PPC_WEAK_FUNC(sub_825AF550);
PPC_FUNC_IMPL(__imp__sub_825AF550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF55C"))) PPC_WEAK_FUNC(sub_825AF55C);
PPC_FUNC_IMPL(__imp__sub_825AF55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF560"))) PPC_WEAK_FUNC(sub_825AF560);
PPC_FUNC_IMPL(__imp__sub_825AF560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-8108
	ctx.r10.s64 = r11.s64 + -8108;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF570"))) PPC_WEAK_FUNC(sub_825AF570);
PPC_FUNC_IMPL(__imp__sub_825AF570) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f0,13480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13480);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825AF59C"))) PPC_WEAK_FUNC(sub_825AF59C);
PPC_FUNC_IMPL(__imp__sub_825AF59C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF5A0"))) PPC_WEAK_FUNC(sub_825AF5A0);
PPC_FUNC_IMPL(__imp__sub_825AF5A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f0,13480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13480);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825AF5CC"))) PPC_WEAK_FUNC(sub_825AF5CC);
PPC_FUNC_IMPL(__imp__sub_825AF5CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF5D0"))) PPC_WEAK_FUNC(sub_825AF5D0);
PPC_FUNC_IMPL(__imp__sub_825AF5D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3636);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x828edc10
	sub_828EDC10(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825AF5FC"))) PPC_WEAK_FUNC(sub_825AF5FC);
PPC_FUNC_IMPL(__imp__sub_825AF5FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF600"))) PPC_WEAK_FUNC(sub_825AF600);
PPC_FUNC_IMPL(__imp__sub_825AF600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x828eaaf8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f0,13476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13476);
	f0.f64 = double(temp.f32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x825af654
	if (!cr6.gt) goto loc_825AF654;
loc_825AF648:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x825af648
	if (cr6.gt) goto loc_825AF648;
loc_825AF654:
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// addi r9,r11,13460
	ctx.r9.s64 = r11.s64 + 13460;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(f0.f64 * f30.f64));
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lis r11,-32229
	r11.s64 = -2112159744;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,21036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r28,r31,60
	r28.s64 = r31.s64 + 60;
	// fmuls f8,f30,f0
	ctx.f8.f64 = double(float(f30.f64 * f0.f64));
	// subf r26,r30,r29
	r26.s64 = r29.s64 - r30.s64;
	// li r27,3
	r27.s64 = 3;
	// lfs f29,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f29.f64 = double(temp.f32);
	// fmuls f7,f11,f1
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f6,4(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// fmuls f5,f9,f1
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// fmuls f4,f8,f1
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f4,12(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r29.u32 + 12, temp.u32);
	// fmuls f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// lfs f3,96(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 * f30.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 * f30.f64));
	// stfs f2,12(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lfs f30,6240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6240);
	f30.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_825AF714:
	// lfs f28,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -8);
	f28.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// lfsx f13,r26,r30
	temp.u32 = PPC_LOAD_U32(r26.u32 + r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmadds f12,f0,f31,f13
	ctx.f12.f64 = double(float(f0.f64 * f31.f64 + ctx.f13.f64));
	// stfsx f12,r26,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r26.u32 + r30.u32, temp.u32);
	// lfsu f28,4(r28)
	ea = 4 + r28.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	f28.f64 = double(temp.f32);
	// bl 0x826cc0f0
	sub_826CC0F0(ctx, base);
	// fmuls f11,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * f28.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * f31.f64 + ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825af714
	if (!cr0.eq) goto loc_825AF714;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_825AF76C"))) PPC_WEAK_FUNC(sub_825AF76C);
PPC_FUNC_IMPL(__imp__sub_825AF76C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825AF770"))) PPC_WEAK_FUNC(sub_825AF770);
PPC_FUNC_IMPL(__imp__sub_825AF770) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lfs f1,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x825af600
	sub_825AF600(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f0,f10
	ctx.f8.f64 = double(float(f0.f64 + ctx.f10.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fadds f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f3,32(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f10,f2
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// fadds f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f6,f1,f13
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AF848"))) PPC_WEAK_FUNC(sub_825AF848);
PPC_FUNC_IMPL(__imp__sub_825AF848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AF84C"))) PPC_WEAK_FUNC(sub_825AF84C);
PPC_FUNC_IMPL(__imp__sub_825AF84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AF850"))) PPC_WEAK_FUNC(sub_825AF850);
PPC_FUNC_IMPL(__imp__sub_825AF850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,-5160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5160);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x825af8a0
	if (cr6.lt) goto loc_825AF8A0;
	// li r11,0
	r11.s64 = 0;
loc_825AF8A0:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f30,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f30.f64 = double(temp.f32);
	// beq cr6,0x825af8bc
	if (cr6.eq) goto loc_825AF8BC;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x825af8d0
	goto loc_825AF8D0;
loc_825AF8BC:
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fdivs f31,f10,f0
	f31.f64 = double(float(ctx.f10.f64 / f0.f64));
loc_825AF8D0:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825af600
	sub_825AF600(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x825af978
	if (!cr6.eq) goto loc_825AF978;
	// fsubs f10,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f30.f64 - f31.f64));
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r11,-19568
	ctx.r10.s64 = r11.s64 + -19568;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f13,-19568(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19568);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * f31.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f2,f31
	ctx.f9.f64 = double(float(ctx.f2.f64 * f31.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * f31.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f30,f10,f11
	f30.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmr f7,f0
	ctx.f7.f64 = f0.f64;
	// fadds f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f10,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f8,f30,f8
	ctx.f8.f64 = double(float(f30.f64 + ctx.f8.f64));
	// b 0x825af998
	goto loc_825AF998;
loc_825AF978:
	// lfs f7,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
loc_825AF998:
	// lfs f6,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f3,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f12,f1,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f0,f11
	ctx.f1.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fadds f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f2,f7,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AFA24"))) PPC_WEAK_FUNC(sub_825AFA24);
PPC_FUNC_IMPL(__imp__sub_825AFA24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AFA28"))) PPC_WEAK_FUNC(sub_825AFA28);
PPC_FUNC_IMPL(__imp__sub_825AFA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eaaf8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fdivs f31,f10,f0
	f31.f64 = double(float(ctx.f10.f64 / f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825af600
	sub_825AF600(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lfs f4,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x825afb38
	if (!cr6.eq) goto loc_825AFB38;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r10,-19568
	ctx.r8.s64 = ctx.r10.s64 + -19568;
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f3,f0,f31
	ctx.f3.f64 = double(float(f0.f64 - f31.f64));
	// lfs f0,-19568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19568);
	f0.f64 = double(temp.f32);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(f0.f64 * f31.f64));
	// lfs f0,2992(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2992);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * f0.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f3,f11
	f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f31,f3,f9
	f31.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f30,f3,f8
	f30.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f29,f3,f7
	f29.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fadds f0,f0,f2
	f0.f64 = double(float(f0.f64 + ctx.f2.f64));
	// fadds f28,f12,f1
	f28.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fadds f31,f31,f13
	f31.f64 = double(float(f31.f64 + ctx.f13.f64));
	// fadds f2,f30,f2
	ctx.f2.f64 = double(float(f30.f64 + ctx.f2.f64));
	// fadds f1,f29,f1
	ctx.f1.f64 = double(float(f29.f64 + ctx.f1.f64));
	// fadds f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fadds f13,f28,f10
	ctx.f13.f64 = double(float(f28.f64 + ctx.f10.f64));
	// fadds f0,f31,f9
	f0.f64 = double(float(f31.f64 + ctx.f9.f64));
	// fadds f9,f2,f8
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f10,f1,f7
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fadds f11,f3,f6
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// b 0x825afb54
	goto loc_825AFB54;
loc_825AFB38:
	// lfs f5,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
loc_825AFB54:
	// lfs f7,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f0,f3
	f0.f64 = double(float(f0.f64 + ctx.f3.f64));
	// fadds f13,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// fadds f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x828eab44
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825AFBE0"))) PPC_WEAK_FUNC(sub_825AFBE0);
PPC_FUNC_IMPL(__imp__sub_825AFBE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825AFBE4"))) PPC_WEAK_FUNC(sub_825AFBE4);
PPC_FUNC_IMPL(__imp__sub_825AFBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825AFBE8"))) PPC_WEAK_FUNC(sub_825AFBE8);
PPC_FUNC_IMPL(__imp__sub_825AFBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e9410
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x825a1b60
	sub_825A1B60(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,3
	r11.s64 = 3;
	// addi r9,r10,-5048
	ctx.r9.s64 = ctx.r10.s64 + -5048;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r11,-7784
	r27.s64 = r11.s64 + -7784;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-5068
	r30.s64 = r11.s64 + -5068;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r8,r29,24
	ctx.r8.u64 = r29.u32 & 0xFF;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r29,r11,-19552
	r29.s64 = r11.s64 + -19552;
	// beq cr6,0x825afd14
	if (cr6.eq) goto loc_825AFD14;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x822d9ef0
	sub_822D9EF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825AFCEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x825afd10
	if (cr6.eq) goto loc_825AFD10;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r29,12
	ctx.r9.s64 = r29.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x825afcec
	if (cr6.lt) goto loc_825AFCEC;
	// b 0x825afd14
	goto loc_825AFD14;
loc_825AFD10:
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_825AFD14:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-5084
	r30.s64 = r11.s64 + -5084;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825afdfc
	if (cr6.eq) goto loc_825AFDFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x822d9ef0
	sub_822D9EF0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825AFDD4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x825afdf8
	if (cr6.eq) goto loc_825AFDF8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r29,12
	ctx.r9.s64 = r29.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x825afdd4
	if (cr6.lt) goto loc_825AFDD4;
	// b 0x825afdfc
	goto loc_825AFDFC;
loc_825AFDF8:
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_825AFDFC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-5096
	ctx.r3.s64 = ctx.r10.s64 + -5096;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825afe88
	if (cr6.eq) goto loc_825AFE88;
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
	// beq cr6,0x825afe88
	if (cr6.eq) goto loc_825AFE88;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825afe8c
	if (!cr6.eq) goto loc_825AFE8C;
loc_825AFE88:
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
loc_825AFE8C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5108
	ctx.r3.s64 = r11.s64 + -5108;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,-19568
	r30.s64 = r11.s64 + -19568;
	// beq cr6,0x825aff2c
	if (cr6.eq) goto loc_825AFF2C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x825aff2c
	if (cr6.eq) goto loc_825AFF2C;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825aff30
	if (!cr6.eq) goto loc_825AFF30;
loc_825AFF2C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825AFF30:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5120
	ctx.r3.s64 = r11.s64 + -5120;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825affd8
	if (cr6.eq) goto loc_825AFFD8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x825affd8
	if (cr6.eq) goto loc_825AFFD8;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825affdc
	if (!cr6.eq) goto loc_825AFFDC;
loc_825AFFD8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825AFFDC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5136
	ctx.r3.s64 = r11.s64 + -5136;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b0084
	if (cr6.eq) goto loc_825B0084;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x825b0084
	if (cr6.eq) goto loc_825B0084;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0088
	if (!cr6.eq) goto loc_825B0088;
loc_825B0084:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825B0088:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-5152
	ctx.r3.s64 = r11.s64 + -5152;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b0130
	if (cr6.eq) goto loc_825B0130;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x825b0130
	if (cr6.eq) goto loc_825B0130;
	// bl 0x822d1948
	sub_822D1948(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0134
	if (!cr6.eq) goto loc_825B0134;
loc_825B0130:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825B0134:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_825B0164"))) PPC_WEAK_FUNC(sub_825B0164);
PPC_FUNC_IMPL(__imp__sub_825B0164) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825B0168"))) PPC_WEAK_FUNC(sub_825B0168);
PPC_FUNC_IMPL(__imp__sub_825B0168) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-8108
	ctx.r9.s64 = r11.s64 + -8108;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825b019c
	if (cr6.eq) goto loc_825B019C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B019C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B01AC"))) PPC_WEAK_FUNC(sub_825B01AC);
PPC_FUNC_IMPL(__imp__sub_825B01AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B01B0"))) PPC_WEAK_FUNC(sub_825B01B0);
PPC_FUNC_IMPL(__imp__sub_825B01B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-8108
	ctx.r10.s64 = r11.s64 + -8108;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B01C0"))) PPC_WEAK_FUNC(sub_825B01C0);
PPC_FUNC_IMPL(__imp__sub_825B01C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B01C4"))) PPC_WEAK_FUNC(sub_825B01C4);
PPC_FUNC_IMPL(__imp__sub_825B01C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B01C8"))) PPC_WEAK_FUNC(sub_825B01C8);
PPC_FUNC_IMPL(__imp__sub_825B01C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B01CC"))) PPC_WEAK_FUNC(sub_825B01CC);
PPC_FUNC_IMPL(__imp__sub_825B01CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B01D0"))) PPC_WEAK_FUNC(sub_825B01D0);
PPC_FUNC_IMPL(__imp__sub_825B01D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f2,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r6,20
	r11.s64 = ctx.r6.s64 + 20;
	// lfs f4,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f11,f2
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fsubs f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// lfs f4,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f4
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f0,f3,f3,f2
	f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fmadds f7,f6,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + f0.f64));
	// fsqrts f0,f7
	f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fmuls f7,f4,f3
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// beq cr6,0x825b0244
	if (cr6.eq) goto loc_825B0244;
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + f0.f64));
	// b 0x825b024c
	goto loc_825B024C;
loc_825B0244:
	// lfs f4,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * f0.f64));
loc_825B024C:
	// fsubs f9,f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fmuls f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f3,f9,f0,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f4.f64));
	// fmuls f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f0,f6,f3
	f0.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f6,f8,f3
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fsubs f5,f12,f2
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fsubs f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 - f0.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fsubs f3,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fsubs f2,f10,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fmadds f10,f11,f1,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f10,84(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 84, temp.u32);
}

__attribute__((alias("__imp__sub_825B02A0"))) PPC_WEAK_FUNC(sub_825B02A0);
PPC_FUNC_IMPL(__imp__sub_825B02A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B02A4"))) PPC_WEAK_FUNC(sub_825B02A4);
PPC_FUNC_IMPL(__imp__sub_825B02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B02A8"))) PPC_WEAK_FUNC(sub_825B02A8);
PPC_FUNC_IMPL(__imp__sub_825B02A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32229
	r11.s64 = -2112159744;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lfs f1,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825b01d0
	sub_825B01D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B02BC"))) PPC_WEAK_FUNC(sub_825B02BC);
PPC_FUNC_IMPL(__imp__sub_825B02BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B02C0"))) PPC_WEAK_FUNC(sub_825B02C0);
PPC_FUNC_IMPL(__imp__sub_825B02C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lfs f0,13484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13484);
	f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b01d0
	sub_825B01D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825B030C"))) PPC_WEAK_FUNC(sub_825B030C);
PPC_FUNC_IMPL(__imp__sub_825B030C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B0310"))) PPC_WEAK_FUNC(sub_825B0310);
PPC_FUNC_IMPL(__imp__sub_825B0310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lfs f0,13484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13484);
	f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b01d0
	sub_825B01D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825B035C"))) PPC_WEAK_FUNC(sub_825B035C);
PPC_FUNC_IMPL(__imp__sub_825B035C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B0360"))) PPC_WEAK_FUNC(sub_825B0360);
PPC_FUNC_IMPL(__imp__sub_825B0360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825a1b60
	sub_825A1B60(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r9,r10,-4912
	ctx.r9.s64 = ctx.r10.s64 + -4912;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r29,r11,-7784
	r29.s64 = r11.s64 + -7784;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r3,r7,-4936
	ctx.r3.s64 = ctx.r7.s64 + -4936;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825b041c
	if (cr6.eq) goto loc_825B041C;
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
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
	// beq cr6,0x825b041c
	if (cr6.eq) goto loc_825B041C;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0420
	if (!cr6.eq) goto loc_825B0420;
loc_825B041C:
	// addi r11,r1,92
	r11.s64 = ctx.r1.s64 + 92;
loc_825B0420:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4960
	ctx.r3.s64 = ctx.r10.s64 + -4960;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b04c4
	if (cr6.eq) goto loc_825B04C4;
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
	// beq cr6,0x825b04c4
	if (cr6.eq) goto loc_825B04C4;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b04c8
	if (!cr6.eq) goto loc_825B04C8;
loc_825B04C4:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_825B04C8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,40(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4980
	ctx.r3.s64 = ctx.r10.s64 + -4980;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b0568
	if (cr6.eq) goto loc_825B0568;
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
	// beq cr6,0x825b0568
	if (cr6.eq) goto loc_825B0568;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b056c
	if (!cr6.eq) goto loc_825B056C;
loc_825B0568:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B056C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4996
	ctx.r3.s64 = ctx.r10.s64 + -4996;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b0604
	if (cr6.eq) goto loc_825B0604;
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
	// beq cr6,0x825b0604
	if (cr6.eq) goto loc_825B0604;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0608
	if (!cr6.eq) goto loc_825B0608;
loc_825B0604:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_825B0608:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,4492(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4492);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 44, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
}

__attribute__((alias("__imp__sub_825B0638"))) PPC_WEAK_FUNC(sub_825B0638);
PPC_FUNC_IMPL(__imp__sub_825B0638) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B063C"))) PPC_WEAK_FUNC(sub_825B063C);
PPC_FUNC_IMPL(__imp__sub_825B063C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0640"))) PPC_WEAK_FUNC(sub_825B0640);
PPC_FUNC_IMPL(__imp__sub_825B0640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,12(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x825b06c4
	if (!cr6.gt) goto loc_825B06C4;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_825B0668:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825b0694
	if (!cr6.gt) goto loc_825B0694;
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
loc_825B0694:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add. r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825b06b8
	if (cr0.eq) goto loc_825B06B8;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825B06B8:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x825b0668
	if (!cr0.eq) goto loc_825B0668;
loc_825B06C4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825b06e8
	if (!cr6.gt) goto loc_825B06E8;
loc_825B06D0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825b06d0
	if (cr6.gt) goto loc_825B06D0;
loc_825B06E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825B06F0"))) PPC_WEAK_FUNC(sub_825B06F0);
PPC_FUNC_IMPL(__imp__sub_825B06F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825B06F4"))) PPC_WEAK_FUNC(sub_825B06F4);
PPC_FUNC_IMPL(__imp__sub_825B06F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B06F8"))) PPC_WEAK_FUNC(sub_825B06F8);
PPC_FUNC_IMPL(__imp__sub_825B06F8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b0728
	if (cr6.eq) goto loc_825B0728;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b072c
	if (!cr6.eq) goto loc_825B072C;
loc_825B0728:
	// li r11,0
	r11.s64 = 0;
loc_825B072C:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19040(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19040);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r27,24
	r28.s64 = r27.s64 + 24;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0784
	if (!cr6.eq) goto loc_825B0784;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0784
	if (!cr6.eq) goto loc_825B0784;
	// lwz r11,19040(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19040);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B0784:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825B0798"))) PPC_WEAK_FUNC(sub_825B0798);
PPC_FUNC_IMPL(__imp__sub_825B0798) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825B079C"))) PPC_WEAK_FUNC(sub_825B079C);
PPC_FUNC_IMPL(__imp__sub_825B079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B07A0"))) PPC_WEAK_FUNC(sub_825B07A0);
PPC_FUNC_IMPL(__imp__sub_825B07A0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x825b08d4
	if (cr6.lt) goto loc_825B08D4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-4888
	ctx.r9.s64 = ctx.r10.s64 + -4888;
	// li r10,67
	ctx.r10.s64 = 67;
loc_825B07CC:
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
	// bne cr6,0x825b07cc
	if (!cr6.eq) goto loc_825B07CC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
	// lwz r3,-14368(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r31.u32);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// beq cr6,0x825b0864
	if (cr6.eq) goto loc_825B0864;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0868
	if (!cr6.eq) goto loc_825B0868;
loc_825B0864:
	// li r11,0
	r11.s64 = 0;
loc_825B0868:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	// beq cr6,0x825b08b4
	if (cr6.eq) goto loc_825B08B4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b08b4
	if (!cr6.eq) goto loc_825B08B4;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B08B4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r10,r29,52
	ctx.r10.s64 = r29.s64 + 52;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r3,68(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// bl 0x8253e2f8
	sub_8253E2F8(ctx, base);
loc_825B08D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825B08D8"))) PPC_WEAK_FUNC(sub_825B08D8);
PPC_FUNC_IMPL(__imp__sub_825B08D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B08DC"))) PPC_WEAK_FUNC(sub_825B08DC);
PPC_FUNC_IMPL(__imp__sub_825B08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B08E0"))) PPC_WEAK_FUNC(sub_825B08E0);
PPC_FUNC_IMPL(__imp__sub_825B08E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x825b07a0
	sub_825B07A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B08EC"))) PPC_WEAK_FUNC(sub_825B08EC);
PPC_FUNC_IMPL(__imp__sub_825B08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B08F0"))) PPC_WEAK_FUNC(sub_825B08F0);
PPC_FUNC_IMPL(__imp__sub_825B08F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,23372
	ctx.r10.s64 = r11.s64 + 23372;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r11,-32165
	r11.s64 = -2107965440;
	// addi r28,r11,2272
	r28.s64 = r11.s64 + 2272;
	// lwz r3,-14368(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b0964
	if (cr6.eq) goto loc_825B0964;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b0964
	if (cr6.eq) goto loc_825B0964;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825B0964:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,6348
	ctx.r3.s64 = ctx.r10.s64 + 6348;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19040(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19040);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// bge cr6,0x825b09d8
	if (!cr6.lt) goto loc_825B09D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B09D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825B09DC"))) PPC_WEAK_FUNC(sub_825B09DC);
PPC_FUNC_IMPL(__imp__sub_825B09DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B09E0"))) PPC_WEAK_FUNC(sub_825B09E0);
PPC_FUNC_IMPL(__imp__sub_825B09E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r11,32012
	ctx.r9.s64 = r11.s64 + 32012;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,77
	ctx.r10.s64 = 77;
loc_825B09F4:
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
	// bne cr6,0x825b09f4
	if (!cr6.eq) goto loc_825B09F4;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x825b0a20
	if (!cr6.eq) goto loc_825B0A20;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825B0A20:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31996
	ctx.r9.s64 = ctx.r10.s64 + 31996;
	// li r10,77
	ctx.r10.s64 = 77;
loc_825B0A30:
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
	// bne cr6,0x825b0a30
	if (!cr6.eq) goto loc_825B0A30;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x825b0a5c
	if (!cr6.eq) goto loc_825B0A5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825B0A5C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31984
	ctx.r9.s64 = ctx.r10.s64 + 31984;
	// li r10,77
	ctx.r10.s64 = 77;
loc_825B0A6C:
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
	// bne cr6,0x825b0a6c
	if (!cr6.eq) goto loc_825B0A6C;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
}

__attribute__((alias("__imp__sub_825B0A94"))) PPC_WEAK_FUNC(sub_825B0A94);
PPC_FUNC_IMPL(__imp__sub_825B0A94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B0A98"))) PPC_WEAK_FUNC(sub_825B0A98);
PPC_FUNC_IMPL(__imp__sub_825B0A98) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b0ac8
	if (cr6.eq) goto loc_825B0AC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0acc
	if (!cr6.eq) goto loc_825B0ACC;
loc_825B0AC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B0ACC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r4,r11,5264
	ctx.r4.s64 = r11.s64 + 5264;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-4816
	ctx.r5.s64 = ctx.r10.s64 + -4816;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x825b0d84
	if (!cr6.eq) goto loc_825B0D84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825b0d84
	if (!cr6.eq) goto loc_825B0D84;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-4836
	ctx.r5.s64 = r11.s64 + -4836;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-4856
	ctx.r5.s64 = ctx.r10.s64 + -4856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-4872
	ctx.r5.s64 = ctx.r9.s64 + -4872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// lwz r8,236(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// bl 0x825538a0
	sub_825538A0(ctx, base);
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r7,236(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// bl 0x825538a0
	sub_825538A0(ctx, base);
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r6,236(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// bl 0x825538a0
	sub_825538A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r10,77
	ctx.r10.s64 = 77;
	// addi r9,r11,32012
	ctx.r9.s64 = r11.s64 + 32012;
	// li r11,5381
	r11.s64 = 5381;
loc_825B0BF4:
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
	// bne cr6,0x825b0bf4
	if (!cr6.eq) goto loc_825B0BF4;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x825b0c58
	if (!cr6.eq) goto loc_825B0C58;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82554bd0
	sub_82554BD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x825b0d6c
	goto loc_825B0D6C;
loc_825B0C58:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31996
	ctx.r9.s64 = ctx.r10.s64 + 31996;
	// li r10,77
	ctx.r10.s64 = 77;
loc_825B0C68:
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
	// bne cr6,0x825b0c68
	if (!cr6.eq) goto loc_825B0C68;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x825b0ce0
	if (!cr6.eq) goto loc_825B0CE0;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b0cc4
	if (cr6.eq) goto loc_825B0CC4;
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82553920
	sub_82553920(ctx, base);
loc_825B0CC4:
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82554bd0
	sub_82554BD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x825b0d6c
	goto loc_825B0D6C;
loc_825B0CE0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,31984
	ctx.r9.s64 = ctx.r10.s64 + 31984;
	// li r10,77
	ctx.r10.s64 = 77;
loc_825B0CF0:
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
	// bne cr6,0x825b0cf0
	if (!cr6.eq) goto loc_825B0CF0;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0d7c
	if (!cr6.eq) goto loc_825B0D7C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b0d34
	if (cr6.eq) goto loc_825B0D34;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x825b0d44
	goto loc_825B0D44;
loc_825B0D34:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b0d54
	if (cr6.eq) goto loc_825B0D54;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_825B0D44:
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82553920
	sub_82553920(ctx, base);
loc_825B0D54:
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82554bd0
	sub_82554BD0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_825B0D6C:
	// lwz r11,18436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 18436);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x82554c90
	sub_82554C90(ctx, base);
loc_825B0D7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_825B0D84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825B0D90"))) PPC_WEAK_FUNC(sub_825B0D90);
PPC_FUNC_IMPL(__imp__sub_825B0D90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_825B0D94"))) PPC_WEAK_FUNC(sub_825B0D94);
PPC_FUNC_IMPL(__imp__sub_825B0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0D98"))) PPC_WEAK_FUNC(sub_825B0D98);
PPC_FUNC_IMPL(__imp__sub_825B0D98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b0dc8
	if (cr6.eq) goto loc_825B0DC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0dcc
	if (!cr6.eq) goto loc_825B0DCC;
loc_825B0DC8:
	// li r11,0
	r11.s64 = 0;
loc_825B0DCC:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19028);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0e20
	if (!cr6.eq) goto loc_825B0E20;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b0e20
	if (!cr6.eq) goto loc_825B0E20;
	// lwz r11,19028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19028);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B0E20:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B0E2C"))) PPC_WEAK_FUNC(sub_825B0E2C);
PPC_FUNC_IMPL(__imp__sub_825B0E2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B0E30"))) PPC_WEAK_FUNC(sub_825B0E30);
PPC_FUNC_IMPL(__imp__sub_825B0E30) {
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
	// lis r28,-31934
	r28.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,18436(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18436);
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82554108
	sub_82554108(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b0e94
	if (cr6.eq) goto loc_825B0E94;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b09e0
	sub_825B09E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b09e0
	sub_825B09E0(ctx, base);
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// ble cr6,0x825b0eb4
	if (!cr6.gt) goto loc_825B0EB4;
loc_825B0E94:
	// lwz r11,18436(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18436);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82554d48
	sub_82554D48(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r10.u8);
loc_825B0EB4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b0a98
	sub_825B0A98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B0EC8"))) PPC_WEAK_FUNC(sub_825B0EC8);
PPC_FUNC_IMPL(__imp__sub_825B0EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825B0ECC"))) PPC_WEAK_FUNC(sub_825B0ECC);
PPC_FUNC_IMPL(__imp__sub_825B0ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0ED0"))) PPC_WEAK_FUNC(sub_825B0ED0);
PPC_FUNC_IMPL(__imp__sub_825B0ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x825b0e30
	sub_825B0E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0EDC"))) PPC_WEAK_FUNC(sub_825B0EDC);
PPC_FUNC_IMPL(__imp__sub_825B0EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B0EE0"))) PPC_WEAK_FUNC(sub_825B0EE0);
PPC_FUNC_IMPL(__imp__sub_825B0EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-32165
	r11.s64 = -2107965440;
	// addi r30,r11,3792
	r30.s64 = r11.s64 + 3792;
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825b0f1c
	if (cr6.eq) goto loc_825B0F1C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b0f20
	if (!cr6.eq) goto loc_825B0F20;
loc_825B0F1C:
	// li r11,0
	r11.s64 = 0;
loc_825B0F20:
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,6468
	ctx.r3.s64 = ctx.r9.s64 + 6468;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19028(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19028);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r7,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B0F7C"))) PPC_WEAK_FUNC(sub_825B0F7C);
PPC_FUNC_IMPL(__imp__sub_825B0F7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B0F80"))) PPC_WEAK_FUNC(sub_825B0F80);
PPC_FUNC_IMPL(__imp__sub_825B0F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
}

__attribute__((alias("__imp__sub_825B0F84"))) PPC_WEAK_FUNC(sub_825B0F84);
PPC_FUNC_IMPL(__imp__sub_825B0F84) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bf5f0
	sub_825BF5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B0F88"))) PPC_WEAK_FUNC(sub_825B0F88);
PPC_FUNC_IMPL(__imp__sub_825B0F88) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,-4744
	r29.s64 = ctx.r10.s64 + -4744;
	// li r28,21
	r28.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r3,276
	ctx.r3.s64 = 276;
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
	// beq cr6,0x825b0fe4
	if (cr6.eq) goto loc_825B0FE4;
	// bl 0x825c0388
	sub_825C0388(ctx, base);
	// b 0x825b0fe8
	goto loc_825B0FE8;
loc_825B0FE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B0FE8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,22
	ctx.r8.s64 = 22;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,52
	ctx.r3.s64 = 52;
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
	// beq cr6,0x825b1028
	if (cr6.eq) goto loc_825B1028;
	// bl 0x825b08f0
	sub_825B08F0(ctx, base);
	// b 0x825b102c
	goto loc_825B102C;
loc_825B1028:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B102C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b106c
	if (cr6.eq) goto loc_825B106C;
	// bl 0x825b0ee0
	sub_825B0EE0(ctx, base);
	// b 0x825b1070
	goto loc_825B1070;
loc_825B106C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B1070:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b10b0
	if (cr6.eq) goto loc_825B10B0;
	// bl 0x8231d160
	sub_8231D160(ctx, base);
	// b 0x825b10b4
	goto loc_825B10B4;
loc_825B10B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B10B4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,25
	ctx.r8.s64 = 25;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// li r3,220
	ctx.r3.s64 = 220;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b10f4
	if (cr6.eq) goto loc_825B10F4;
	// bl 0x8231d7c0
	sub_8231D7C0(ctx, base);
	// b 0x825b10f8
	goto loc_825B10F8;
loc_825B10F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B10F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// li r3,84
	ctx.r3.s64 = 84;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1148
	if (cr6.eq) goto loc_825B1148;
	// bl 0x8231cf08
	sub_8231CF08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_825B1148:
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825B1154"))) PPC_WEAK_FUNC(sub_825B1154);
PPC_FUNC_IMPL(__imp__sub_825B1154) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B1158"))) PPC_WEAK_FUNC(sub_825B1158);
PPC_FUNC_IMPL(__imp__sub_825B1158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825b118c
	if (cr6.eq) goto loc_825B118C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231cdb8
	sub_8231CDB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
loc_825B118C:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825b11ac
	if (cr6.eq) goto loc_825B11AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231d430
	sub_8231D430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
loc_825B11AC:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825b11cc
	if (cr6.eq) goto loc_825B11CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231d0c8
	sub_8231D0C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_825B11CC:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825b11ec
	if (cr6.eq) goto loc_825B11EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b0d98
	sub_825B0D98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_825B11EC:
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825b120c
	if (cr6.eq) goto loc_825B120C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b06f8
	sub_825B06F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_825B120C:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825b122c
	if (cr6.eq) goto loc_825B122C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bfd28
	sub_825BFD28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_825B122C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825B1230"))) PPC_WEAK_FUNC(sub_825B1230);
PPC_FUNC_IMPL(__imp__sub_825B1230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B1234"))) PPC_WEAK_FUNC(sub_825B1234);
PPC_FUNC_IMPL(__imp__sub_825B1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1238"))) PPC_WEAK_FUNC(sub_825B1238);
PPC_FUNC_IMPL(__imp__sub_825B1238) {
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
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-4676
	ctx.r10.s64 = r11.s64 + -4676;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B1270"))) PPC_WEAK_FUNC(sub_825B1270);
PPC_FUNC_IMPL(__imp__sub_825B1270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1274"))) PPC_WEAK_FUNC(sub_825B1274);
PPC_FUNC_IMPL(__imp__sub_825B1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1278"))) PPC_WEAK_FUNC(sub_825B1278);
PPC_FUNC_IMPL(__imp__sub_825B1278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-4676
	ctx.r10.s64 = r11.s64 + -4676;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825B1284"))) PPC_WEAK_FUNC(sub_825B1284);
PPC_FUNC_IMPL(__imp__sub_825B1284) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb340
	sub_825BB340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1288"))) PPC_WEAK_FUNC(sub_825B1288);
PPC_FUNC_IMPL(__imp__sub_825B1288) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1288"))) PPC_WEAK_FUNC(sub_825B1288);
PPC_FUNC_IMPL(__imp__sub_825B1288) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825B128C"))) PPC_WEAK_FUNC(sub_825B128C);
PPC_FUNC_IMPL(__imp__sub_825B128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1290"))) PPC_WEAK_FUNC(sub_825B1290);
PPC_FUNC_IMPL(__imp__sub_825B1290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B12A4"))) PPC_WEAK_FUNC(sub_825B12A4);
PPC_FUNC_IMPL(__imp__sub_825B12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B12A8"))) PPC_WEAK_FUNC(sub_825B12A8);
PPC_FUNC_IMPL(__imp__sub_825B12A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r10,r11,84
	ctx.r10.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B1304"))) PPC_WEAK_FUNC(sub_825B1304);
PPC_FUNC_IMPL(__imp__sub_825B1304) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1308"))) PPC_WEAK_FUNC(sub_825B1308);
PPC_FUNC_IMPL(__imp__sub_825B1308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// li r11,-1
	r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825B1398"))) PPC_WEAK_FUNC(sub_825B1398);
PPC_FUNC_IMPL(__imp__sub_825B1398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B139C"))) PPC_WEAK_FUNC(sub_825B139C);
PPC_FUNC_IMPL(__imp__sub_825B139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B13A0"))) PPC_WEAK_FUNC(sub_825B13A0);
PPC_FUNC_IMPL(__imp__sub_825B13A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1428
	if (cr6.eq) goto loc_825B1428;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b142c
	if (!cr6.eq) goto loc_825B142C;
loc_825B1428:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_825B142C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B145C"))) PPC_WEAK_FUNC(sub_825B145C);
PPC_FUNC_IMPL(__imp__sub_825B145C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1460"))) PPC_WEAK_FUNC(sub_825B1460);
PPC_FUNC_IMPL(__imp__sub_825B1460) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b14f4
	if (cr6.eq) goto loc_825B14F4;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B14F4:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B150C"))) PPC_WEAK_FUNC(sub_825B150C);
PPC_FUNC_IMPL(__imp__sub_825B150C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1510"))) PPC_WEAK_FUNC(sub_825B1510);
PPC_FUNC_IMPL(__imp__sub_825B1510) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4676
	ctx.r10.s64 = r11.s64 + -4676;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b1554
	if (cr6.eq) goto loc_825B1554;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B1554:
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

__attribute__((alias("__imp__sub_825B1568"))) PPC_WEAK_FUNC(sub_825B1568);
PPC_FUNC_IMPL(__imp__sub_825B1568) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B156C"))) PPC_WEAK_FUNC(sub_825B156C);
PPC_FUNC_IMPL(__imp__sub_825B156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1570"))) PPC_WEAK_FUNC(sub_825B1570);
PPC_FUNC_IMPL(__imp__sub_825B1570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
}

__attribute__((alias("__imp__sub_825B1580"))) PPC_WEAK_FUNC(sub_825B1580);
PPC_FUNC_IMPL(__imp__sub_825B1580) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B1584"))) PPC_WEAK_FUNC(sub_825B1584);
PPC_FUNC_IMPL(__imp__sub_825B1584) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1588"))) PPC_WEAK_FUNC(sub_825B1588);
PPC_FUNC_IMPL(__imp__sub_825B1588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, r11.u32);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B15A0"))) PPC_WEAK_FUNC(sub_825B15A0);
PPC_FUNC_IMPL(__imp__sub_825B15A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r11,84
	ctx.r8.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B15FC"))) PPC_WEAK_FUNC(sub_825B15FC);
PPC_FUNC_IMPL(__imp__sub_825B15FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1600"))) PPC_WEAK_FUNC(sub_825B1600);
PPC_FUNC_IMPL(__imp__sub_825B1600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r7,292(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825B1694"))) PPC_WEAK_FUNC(sub_825B1694);
PPC_FUNC_IMPL(__imp__sub_825B1694) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B1698"))) PPC_WEAK_FUNC(sub_825B1698);
PPC_FUNC_IMPL(__imp__sub_825B1698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r11,r3,268
	r11.s64 = ctx.r3.s64 + 268;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x825b1844
	if (!cr6.lt) goto loc_825B1844;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_825B16D0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// subf r7,r5,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & r11.u64;
	// beq cr6,0x825b173c
	if (cr6.eq) goto loc_825B173C;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b172c
	if (cr6.eq) goto loc_825B172C;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_825B170C:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b1728
	if (cr6.eq) goto loc_825B1728;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b170c
	if (!cr6.eq) goto loc_825B170C;
	// b 0x825b172c
	goto loc_825B172C;
loc_825B1728:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B172C:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B173C:
	// lbz r11,20(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1790
	if (cr6.eq) goto loc_825B1790;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b1780
	if (cr6.eq) goto loc_825B1780;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_825B1760:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b177c
	if (cr6.eq) goto loc_825B177C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b1760
	if (!cr6.eq) goto loc_825B1760;
	// b 0x825b1780
	goto loc_825B1780;
loc_825B177C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B1780:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B1790:
	// lbz r11,36(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b17e4
	if (cr6.eq) goto loc_825B17E4;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b17d4
	if (cr6.eq) goto loc_825B17D4;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825B17B4:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b17d0
	if (cr6.eq) goto loc_825B17D0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b17b4
	if (!cr6.eq) goto loc_825B17B4;
	// b 0x825b17d4
	goto loc_825B17D4;
loc_825B17D0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B17D4:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B17E4:
	// lbz r11,52(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1808
	if (cr6.eq) goto loc_825B1808;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B1808:
	// lbz r11,60(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b182c
	if (cr6.eq) goto loc_825B182C;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B182C:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b1850
	if (!cr6.eq) goto loc_825B1850;
	// addi r8,r8,68
	ctx.r8.s64 = ctx.r8.s64 + 68;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x825b16d0
	if (cr6.lt) goto loc_825B16D0;
loc_825B1844:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_825B1850:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825B1858"))) PPC_WEAK_FUNC(sub_825B1858);
PPC_FUNC_IMPL(__imp__sub_825B1858) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B185C"))) PPC_WEAK_FUNC(sub_825B185C);
PPC_FUNC_IMPL(__imp__sub_825B185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1860"))) PPC_WEAK_FUNC(sub_825B1860);
PPC_FUNC_IMPL(__imp__sub_825B1860) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b18cc
	if (!cr6.eq) goto loc_825B18CC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b18cc
	if (!cr6.eq) goto loc_825B18CC;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B18CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B18D0"))) PPC_WEAK_FUNC(sub_825B18D0);
PPC_FUNC_IMPL(__imp__sub_825B18D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B18D4"))) PPC_WEAK_FUNC(sub_825B18D4);
PPC_FUNC_IMPL(__imp__sub_825B18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B18D8"))) PPC_WEAK_FUNC(sub_825B18D8);
PPC_FUNC_IMPL(__imp__sub_825B18D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825b1698
	sub_825B1698(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	r28.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b190c
	if (cr6.eq) goto loc_825B190C;
	// stw r28,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r28.u32);
	// stb r29,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r29.u8);
loc_825B190C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b1998
	if (!cr6.eq) goto loc_825B1998;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb1d0
	sub_825BB1D0(ctx, base);
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b194c
	if (cr6.eq) goto loc_825B194C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_825B194C:
	// lbz r11,256(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1970
	if (cr6.eq) goto loc_825B1970;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_825B1970:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1994
	if (cr6.eq) goto loc_825B1994;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// stb r29,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r29.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_825B1994:
	// stw r28,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r28.u32);
loc_825B1998:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B199C"))) PPC_WEAK_FUNC(sub_825B199C);
PPC_FUNC_IMPL(__imp__sub_825B199C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B19A0"))) PPC_WEAK_FUNC(sub_825B19A0);
PPC_FUNC_IMPL(__imp__sub_825B19A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r30,r11,6360
	r30.s64 = r11.s64 + 6360;
	// addi r4,r10,-3784
	ctx.r4.s64 = ctx.r10.s64 + -3784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B1A10"))) PPC_WEAK_FUNC(sub_825B1A10);
PPC_FUNC_IMPL(__imp__sub_825B1A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B1A14"))) PPC_WEAK_FUNC(sub_825B1A14);
PPC_FUNC_IMPL(__imp__sub_825B1A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B1A18"))) PPC_WEAK_FUNC(sub_825B1A18);
PPC_FUNC_IMPL(__imp__sub_825B1A18) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1aa8
	if (cr6.eq) goto loc_825B1AA8;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b1aac
	if (!cr6.eq) goto loc_825B1AAC;
loc_825B1AA8:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B1AAC:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b1b34
	if (cr6.eq) goto loc_825B1B34;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b1b38
	if (!cr6.eq) goto loc_825B1B38;
loc_825B1B34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825B1B38:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b1b6c
	if (!cr6.eq) goto loc_825B1B6C;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825b1b80
	if (!cr6.gt) goto loc_825B1B80;
loc_825B1B6C:
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// b 0x825b1b88
	goto loc_825B1B88;
loc_825B1B80:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_825B1B88:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B1B9C"))) PPC_WEAK_FUNC(sub_825B1B9C);
PPC_FUNC_IMPL(__imp__sub_825B1B9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1BA0"))) PPC_WEAK_FUNC(sub_825B1BA0);
PPC_FUNC_IMPL(__imp__sub_825B1BA0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1c8c
	if (cr6.eq) goto loc_825B1C8C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4588
	ctx.r3.s64 = ctx.r9.s64 + -4588;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,292
	ctx.r5.s64 = r31.s64 + 292;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B1C8C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B1CA4"))) PPC_WEAK_FUNC(sub_825B1CA4);
PPC_FUNC_IMPL(__imp__sub_825B1CA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B1CA8"))) PPC_WEAK_FUNC(sub_825B1CA8);
PPC_FUNC_IMPL(__imp__sub_825B1CA8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,1204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1204, ctx.r3.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r27,216
	ctx.r3.s64 = r27.s64 + 216;
	// addi r10,r11,-4492
	ctx.r10.s64 = r11.s64 + -4492;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r7,r8,-4568
	ctx.r7.s64 = ctx.r8.s64 + -4568;
	// addi r28,r27,268
	r28.s64 = r27.s64 + 268;
	// stw r9,244(r27)
	PPC_STORE_U32(r27.u32 + 244, ctx.r9.u32);
	// stw r31,272(r27)
	PPC_STORE_U32(r27.u32 + 272, r31.u32);
	// stw r31,280(r27)
	PPC_STORE_U32(r27.u32 + 280, r31.u32);
	// stw r31,276(r27)
	PPC_STORE_U32(r27.u32 + 276, r31.u32);
	// stw r31,284(r27)
	PPC_STORE_U32(r27.u32 + 284, r31.u32);
	// stw r7,268(r27)
	PPC_STORE_U32(r27.u32 + 268, ctx.r7.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,284(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 284);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r29,r11,-4504
	r29.s64 = r11.s64 + -4504;
	// stw r5,284(r27)
	PPC_STORE_U32(r27.u32 + 284, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r26,24
	ctx.r4.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825b1d90
	if (cr6.eq) goto loc_825B1D90;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,244(r27)
	PPC_STORE_U32(r27.u32 + 244, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B1D90:
	// stb r31,248(r27)
	PPC_STORE_U8(r27.u32 + 248, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4512
	r29.s64 = r11.s64 + -4512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1eb8
	if (cr6.eq) goto loc_825B1EB8;
	// stb r26,248(r27)
	PPC_STORE_U8(r27.u32 + 248, r26.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1e50
	if (cr6.eq) goto loc_825B1E50;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,252(r27)
	PPC_STORE_U32(r27.u32 + 252, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b1eb8
	goto loc_825B1EB8;
loc_825B1E50:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// addi r5,r1,276
	ctx.r5.s64 = ctx.r1.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1eb8
	if (cr6.eq) goto loc_825B1EB8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,252(r27)
	PPC_STORE_U32(r27.u32 + 252, r29.u32);
loc_825B1EB8:
	// stb r31,256(r27)
	PPC_STORE_U8(r27.u32 + 256, r31.u8);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4520
	r29.s64 = r11.s64 + -4520;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1fdc
	if (cr6.eq) goto loc_825B1FDC;
	// stb r26,256(r27)
	PPC_STORE_U8(r27.u32 + 256, r26.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b3140
	sub_825B3140(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1f74
	if (cr6.eq) goto loc_825B1F74;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// addi r5,r1,292
	ctx.r5.s64 = ctx.r1.s64 + 292;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x822c88c0
	sub_822C88C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,260(r27)
	PPC_STORE_U32(r27.u32 + 260, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b1fdc
	goto loc_825B1FDC;
loc_825B1F74:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x825b33b8
	sub_825B33B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b1fdc
	if (cr6.eq) goto loc_825B1FDC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r29,260(r27)
	PPC_STORE_U32(r27.u32 + 260, r29.u32);
loc_825B1FDC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4528
	ctx.r3.s64 = r11.s64 + -4528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r11,20600
	r29.s64 = r11.s64 + 20600;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// beq cr6,0x825b204c
	if (cr6.eq) goto loc_825B204C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x825b204c
	if (cr6.eq) goto loc_825B204C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b2050
	if (!cr6.eq) goto loc_825B2050;
loc_825B204C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825B2050:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,264(r27)
	PPC_STORE_U32(r27.u32 + 264, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4548
	r29.s64 = r11.s64 + -4548;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b2f34
	if (cr6.eq) goto loc_825B2F34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825b2104
	if (!cr6.gt) goto loc_825B2104;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B2104:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x825b2f34
	if (!cr6.gt) goto loc_825B2F34;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// addi r14,r10,-13328
	r14.s64 = ctx.r10.s64 + -13328;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r14.u32);
	// addi r10,r8,27744
	ctx.r10.s64 = ctx.r8.s64 + 27744;
	// addi r8,r5,-25328
	ctx.r8.s64 = ctx.r5.s64 + -25328;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r11,r11,16804
	r11.s64 = r11.s64 + 16804;
	// addi r5,r4,-4560
	ctx.r5.s64 = ctx.r4.s64 + -4560;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r19,16
	r19.s64 = 16;
	// li r20,34
	r20.s64 = 34;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r17,-31934
	r17.s64 = -2092826624;
	// addi r16,r9,-13220
	r16.s64 = ctx.r9.s64 + -13220;
	// addi r18,r7,27264
	r18.s64 = ctx.r7.s64 + 27264;
	// addi r21,r6,4776
	r21.s64 = ctx.r6.s64 + 4776;
	// addi r15,r3,-28152
	r15.s64 = ctx.r3.s64 + -28152;
loc_825B2178:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r19,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r20.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, r31.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r31.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r19,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r20.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, r31.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stw r31,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r31.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r24,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r24.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r19,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r20.u32);
	// addi r5,r1,392
	ctx.r5.s64 = ctx.r1.s64 + 392;
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r31.u32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r31.u32);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r22,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r22.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r29,180(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r23,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r23.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b230c
	if (cr6.eq) goto loc_825B230C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B230C:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2458
	if (cr6.eq) goto loc_825B2458;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r11,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x825b2458
	if (!cr6.gt) goto loc_825B2458;
loc_825B2384:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// lwz r14,4(r24)
	r14.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// stw r19,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r19.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r31.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r20.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, r31.u32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// stw r31,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r31.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r14.u32);
	// beq 0x825b2414
	if (cr0.eq) goto loc_825B2414;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B2414:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b2f44
	if (cr6.lt) goto loc_825B2F44;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x825b2384
	if (cr6.lt) goto loc_825B2384;
	// lwz r14,256(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_825B2458:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2608
	if (cr6.eq) goto loc_825B2608;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r11,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r5,r1,280
	ctx.r5.s64 = ctx.r1.s64 + 280;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b2608
	if (!cr6.gt) goto loc_825B2608;
loc_825B24D0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r27.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2548
	if (cr6.eq) goto loc_825B2548;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2548
	if (cr6.eq) goto loc_825B2548;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2548
	if (cr6.eq) goto loc_825B2548;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b2570
	goto loc_825B2570;
loc_825B2548:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b256c
	if (!cr6.eq) goto loc_825B256C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B256C:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B2570:
	// lwz r28,4(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r31.u32);
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// stw r20,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r20.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// stw r31,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r31.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b25c8
	if (cr0.eq) goto loc_825B25C8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B25C8:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - r27.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b2f50
	if (cr6.lt) goto loc_825B2F50;
	// stw r11,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r27.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(r27.s32, r29.s32, xer);
	// blt cr6,0x825b24d0
	if (cr6.lt) goto loc_825B24D0;
loc_825B2608:
	// lwz r27,148(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stb r31,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, r31.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b284c
	if (cr6.eq) goto loc_825B284C;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r11,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b284c
	if (!cr6.gt) goto loc_825B284C;
loc_825B2684:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b278c
	if (cr6.eq) goto loc_825B278C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b278c
	if (cr6.eq) goto loc_825B278C;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2710
	if (cr6.eq) goto loc_825B2710;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x825b277c
	goto loc_825B277C;
loc_825B2710:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b278c
	if (cr6.eq) goto loc_825B278C;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2778
	if (cr6.eq) goto loc_825B2778;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7bb0
	sub_822D7BB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2778
	if (cr6.eq) goto loc_825B2778;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825b277c
	goto loc_825B277C;
loc_825B2778:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B277C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b278c
	if (cr6.eq) goto loc_825B278C;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b27b4
	goto loc_825B27B4;
loc_825B278C:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b27b0
	if (!cr6.eq) goto loc_825B27B0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B27B0:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B27B4:
	// lwz r28,4(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, r31.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r20,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, r20.u32);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// stw r31,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, r31.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b280c
	if (cr0.eq) goto loc_825B280C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B280C:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r25,r9
	ctx.r8.s64 = ctx.r9.s64 - r25.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b2f5c
	if (cr6.lt) goto loc_825B2F5C;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// stw r25,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// blt cr6,0x825b2684
	if (cr6.lt) goto loc_825B2684;
loc_825B284C:
	// lwz r29,192(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2b34
	if (cr6.eq) goto loc_825B2B34;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b2998
	if (cr6.eq) goto loc_825B2998;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2998
	if (cr6.eq) goto loc_825B2998;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2914
	if (cr6.eq) goto loc_825B2914;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b299c
	goto loc_825B299C;
loc_825B2914:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2988
	if (cr6.eq) goto loc_825B2988;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2988
	if (cr6.eq) goto loc_825B2988;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2988
	if (cr6.eq) goto loc_825B2988;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b299c
	goto loc_825B299C;
loc_825B2988:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b299c
	goto loc_825B299C;
loc_825B2998:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B299C:
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2a24
	if (cr6.eq) goto loc_825B2A24;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2a0c
	if (cr6.eq) goto loc_825B2A0C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2a0c
	if (cr6.eq) goto loc_825B2A0C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b2a10
	if (!cr6.eq) goto loc_825B2A10;
loc_825B2A0C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825B2A10:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b2b34
	goto loc_825B2B34;
loc_825B2A24:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2a80
	if (cr6.eq) goto loc_825B2A80;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2a80
	if (cr6.eq) goto loc_825B2A80;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b2a84
	goto loc_825B2A84;
loc_825B2A80:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B2A84:
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2b34
	if (cr6.eq) goto loc_825B2B34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2afc
	if (cr6.eq) goto loc_825B2AFC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2afc
	if (cr6.eq) goto loc_825B2AFC;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2afc
	if (cr6.eq) goto loc_825B2AFC;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b2b24
	goto loc_825B2B24;
loc_825B2AFC:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b2b20
	if (!cr6.eq) goto loc_825B2B20;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B2B20:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B2B24:
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r30.u32);
loc_825B2B34:
	// lwz r29,112(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stb r31,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2e1c
	if (cr6.eq) goto loc_825B2E1C;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b2c80
	if (cr6.eq) goto loc_825B2C80;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2c80
	if (cr6.eq) goto loc_825B2C80;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2bfc
	if (cr6.eq) goto loc_825B2BFC;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b2c84
	goto loc_825B2C84;
loc_825B2BFC:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2c70
	if (cr6.eq) goto loc_825B2C70;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2c70
	if (cr6.eq) goto loc_825B2C70;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2c70
	if (cr6.eq) goto loc_825B2C70;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b2c84
	goto loc_825B2C84;
loc_825B2C70:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b2c84
	goto loc_825B2C84;
loc_825B2C80:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B2C84:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2d0c
	if (cr6.eq) goto loc_825B2D0C;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2cf4
	if (cr6.eq) goto loc_825B2CF4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2cf4
	if (cr6.eq) goto loc_825B2CF4;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b2cf8
	if (!cr6.eq) goto loc_825B2CF8;
loc_825B2CF4:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825B2CF8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b2e1c
	goto loc_825B2E1C;
loc_825B2D0C:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2d68
	if (cr6.eq) goto loc_825B2D68;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2d68
	if (cr6.eq) goto loc_825B2D68;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b2d6c
	goto loc_825B2D6C;
loc_825B2D68:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B2D6C:
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2e1c
	if (cr6.eq) goto loc_825B2E1C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b2de4
	if (cr6.eq) goto loc_825B2DE4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b2de4
	if (cr6.eq) goto loc_825B2DE4;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b2de4
	if (cr6.eq) goto loc_825B2DE4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b2e0c
	goto loc_825B2E0C;
loc_825B2DE4:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b2e08
	if (!cr6.eq) goto loc_825B2E08;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B2E08:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B2E0C:
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r30.u32);
loc_825B2E1C:
	// lwz r11,1204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
	// addi r30,r11,268
	r30.s64 = r11.s64 + 268;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825b2e4c
	if (!cr6.gt) goto loc_825B2E4C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B2E4C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r10,r11,68
	ctx.r10.s64 = r11.s64 * 68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq 0x825b2e7c
	if (cr0.eq) goto loc_825B2E7C;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x825b31b0
	sub_825B31B0(ctx, base);
	// lwz r23,344(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r22,328(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r24,312(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
loc_825B2E7C:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stw r23,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r23.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, xer);
	// stw r23,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r23.u32);
	// beq cr6,0x825b2ea8
	if (cr6.eq) goto loc_825B2EA8;
loc_825B2E94:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(r30.u32, r23.u32, xer);
	// bne cr6,0x825b2e94
	if (!cr6.eq) goto loc_825B2E94;
loc_825B2EA8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r22,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r22.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, xer);
	// stw r22,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r22.u32);
	// beq cr6,0x825b2edc
	if (cr6.eq) goto loc_825B2EDC;
loc_825B2EC8:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// bne cr6,0x825b2ec8
	if (!cr6.eq) goto loc_825B2EC8;
loc_825B2EDC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r24,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r24.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// stw r24,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r24.u32);
	// beq cr6,0x825b2f10
	if (cr6.eq) goto loc_825B2F10;
loc_825B2EFC:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// bne cr6,0x825b2efc
	if (!cr6.eq) goto loc_825B2EFC;
loc_825B2F10:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825b2178
	if (cr6.lt) goto loc_825B2178;
	// lwz r27,1204(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
loc_825B2F34:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,292(r27)
	PPC_STORE_U32(r27.u32 + 292, r31.u32);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x828e9430
	return;
loc_825B2F44:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B2F50:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B2F5C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825B2F64"))) PPC_WEAK_FUNC(sub_825B2F64);
PPC_FUNC_IMPL(__imp__sub_825B2F64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x828e9128
	sub_828E9128(ctx, base);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-4492
	ctx.r9.s64 = r11.s64 + -4492;
	// addi r8,r10,-4568
	ctx.r8.s64 = ctx.r10.s64 + -4568;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,268
	r30.s64 = ctx.r3.s64 + 268;
	// stw r8,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b3688
	sub_825B3688(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4596
	ctx.r6.s64 = ctx.r7.s64 + -4596;
	// stw r6,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B2F68"))) PPC_WEAK_FUNC(sub_825B2F68);
PPC_FUNC_IMPL(__imp__sub_825B2F68) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-4492
	ctx.r9.s64 = r11.s64 + -4492;
	// addi r8,r10,-4568
	ctx.r8.s64 = ctx.r10.s64 + -4568;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,268
	r30.s64 = ctx.r3.s64 + 268;
	// stw r8,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b3688
	sub_825B3688(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4596
	ctx.r6.s64 = ctx.r7.s64 + -4596;
	// stw r6,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
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

__attribute__((alias("__imp__sub_825B2FEC"))) PPC_WEAK_FUNC(sub_825B2FEC);
PPC_FUNC_IMPL(__imp__sub_825B2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2FF0"))) PPC_WEAK_FUNC(sub_825B2FF0);
PPC_FUNC_IMPL(__imp__sub_825B2FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b3688
	sub_825B3688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B2FF0"))) PPC_WEAK_FUNC(sub_825B2FF0);
PPC_FUNC_IMPL(__imp__sub_825B2FF0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825B2FF4"))) PPC_WEAK_FUNC(sub_825B2FF4);
PPC_FUNC_IMPL(__imp__sub_825B2FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B2FF8"))) PPC_WEAK_FUNC(sub_825B2FF8);
PPC_FUNC_IMPL(__imp__sub_825B2FF8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x825b3050
	if (cr6.eq) goto loc_825B3050;
loc_825B3038:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x825b3038
	if (!cr6.eq) goto loc_825B3038;
loc_825B3050:
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

__attribute__((alias("__imp__sub_825B3064"))) PPC_WEAK_FUNC(sub_825B3064);
PPC_FUNC_IMPL(__imp__sub_825B3064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3068"))) PPC_WEAK_FUNC(sub_825B3068);
PPC_FUNC_IMPL(__imp__sub_825B3068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x825b312c
	if (cr6.eq) goto loc_825B312C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// li r25,16
	r25.s64 = 16;
	// li r31,0
	r31.s64 = 0;
	// li r26,34
	r26.s64 = 34;
	// ori r23,r10,65534
	r23.u64 = ctx.r10.u64 | 65534;
	// addi r28,r11,4776
	r28.s64 = r11.s64 + 4776;
loc_825B30A8:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lwz r22,4(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r22.u32);
	// beq 0x825b30fc
	if (cr0.eq) goto loc_825B30FC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_825B30FC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r10,r11,r23
	ctx.r10.s64 = r23.s64 - r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x825b3134
	if (cr6.lt) goto loc_825B3134;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// bne cr6,0x825b30a8
	if (!cr6.eq) goto loc_825B30A8;
loc_825B312C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9450
	return;
loc_825B3134:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825B313C"))) PPC_WEAK_FUNC(sub_825B313C);
PPC_FUNC_IMPL(__imp__sub_825B313C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// bl 0x828e9128
	sub_828E9128(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b319c
	if (cr6.eq) goto loc_825B319C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b319c
	if (cr6.eq) goto loc_825B319C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
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
	// blr 
	return;
loc_825B319C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3140"))) PPC_WEAK_FUNC(sub_825B3140);
PPC_FUNC_IMPL(__imp__sub_825B3140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b319c
	if (cr6.eq) goto loc_825B319C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b319c
	if (cr6.eq) goto loc_825B319C;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
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
	// blr 
	return;
loc_825B319C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825B31B0"))) PPC_WEAK_FUNC(sub_825B31B0);
PPC_FUNC_IMPL(__imp__sub_825B31B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x825b3068
	sub_825B3068(ctx, base);
	// lbz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r8,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r8.u8);
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825b3068
	sub_825B3068(ctx, base);
	// lbz r11,36(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 36);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r11.u8);
	// bl 0x82332bb8
	sub_82332BB8(ctx, base);
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x825b3068
	sub_825B3068(ctx, base);
	// lbz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,52(r31)
	PPC_STORE_U8(r31.u32 + 52, ctx.r9.u8);
	// lwz r8,56(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// lbz r7,60(r29)
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + 60);
	// stb r7,60(r31)
	PPC_STORE_U8(r31.u32 + 60, ctx.r7.u8);
	// lwz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// stw r6,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B3290"))) PPC_WEAK_FUNC(sub_825B3290);
PPC_FUNC_IMPL(__imp__sub_825B3290) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B3294"))) PPC_WEAK_FUNC(sub_825B3294);
PPC_FUNC_IMPL(__imp__sub_825B3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3298"))) PPC_WEAK_FUNC(sub_825B3298);
PPC_FUNC_IMPL(__imp__sub_825B3298) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825b33b0
	if (!cr6.gt) goto loc_825B33B0;
	// li r28,0
	r28.s64 = 0;
loc_825B32B8:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r11,-68
	r31.s64 = r11.s64 + -68;
	// lwz r9,-28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -28);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -28);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,-28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -28);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// stw r28,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, r28.u32);
	// beq cr6,0x825b3308
	if (cr6.eq) goto loc_825B3308;
loc_825B32F0:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825b32f0
	if (!cr6.eq) goto loc_825B32F0;
loc_825B3308:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// beq cr6,0x825b334c
	if (cr6.eq) goto loc_825B334C;
loc_825B3334:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825b3334
	if (!cr6.eq) goto loc_825B3334;
loc_825B334C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// beq cr6,0x825b3390
	if (cr6.eq) goto loc_825B3390;
loc_825B3378:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x825b3378
	if (!cr6.eq) goto loc_825B3378;
loc_825B3390:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x825b32b8
	if (cr6.gt) goto loc_825B32B8;
loc_825B33B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B33B4"))) PPC_WEAK_FUNC(sub_825B33B4);
PPC_FUNC_IMPL(__imp__sub_825B33B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B33B8"))) PPC_WEAK_FUNC(sub_825B33B8);
PPC_FUNC_IMPL(__imp__sub_825B33B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3414
	if (cr6.eq) goto loc_825B3414;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b3414
	if (cr6.eq) goto loc_825B3414;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
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
	// blr 
	return;
loc_825B3414:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825B3424"))) PPC_WEAK_FUNC(sub_825B3424);
PPC_FUNC_IMPL(__imp__sub_825B3424) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3428"))) PPC_WEAK_FUNC(sub_825B3428);
PPC_FUNC_IMPL(__imp__sub_825B3428) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4596
	ctx.r10.s64 = r11.s64 + -4596;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b346c
	if (cr6.eq) goto loc_825B346C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B346C:
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

__attribute__((alias("__imp__sub_825B3480"))) PPC_WEAK_FUNC(sub_825B3480);
PPC_FUNC_IMPL(__imp__sub_825B3480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3484"))) PPC_WEAK_FUNC(sub_825B3484);
PPC_FUNC_IMPL(__imp__sub_825B3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3488"))) PPC_WEAK_FUNC(sub_825B3488);
PPC_FUNC_IMPL(__imp__sub_825B3488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825b34c4
	if (!cr6.gt) goto loc_825B34C4;
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
loc_825B34C4:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x825b3548
	if (cr6.eq) goto loc_825B3548;
loc_825B34E0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825b3508
	if (!cr6.gt) goto loc_825B3508;
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
loc_825B3508:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r11,68
	ctx.r10.s64 = r11.s64 * 68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x825b352c
	if (cr0.eq) goto loc_825B352C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b31b0
	sub_825B31B0(ctx, base);
loc_825B352C:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,68
	r30.s64 = r30.s64 + 68;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,68
	r11.s64 = r11.s64 * 68;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b34e0
	if (!cr6.eq) goto loc_825B34E0;
loc_825B3548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825B354C"))) PPC_WEAK_FUNC(sub_825B354C);
PPC_FUNC_IMPL(__imp__sub_825B354C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B3550"))) PPC_WEAK_FUNC(sub_825B3550);
PPC_FUNC_IMPL(__imp__sub_825B3550) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4568
	ctx.r9.s64 = ctx.r10.s64 + -4568;
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

__attribute__((alias("__imp__sub_825B35A8"))) PPC_WEAK_FUNC(sub_825B35A8);
PPC_FUNC_IMPL(__imp__sub_825B35A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B35AC"))) PPC_WEAK_FUNC(sub_825B35AC);
PPC_FUNC_IMPL(__imp__sub_825B35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B35B0"))) PPC_WEAK_FUNC(sub_825B35B0);
PPC_FUNC_IMPL(__imp__sub_825B35B0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4568
	ctx.r10.s64 = r11.s64 + -4568;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b3688
	sub_825B3688(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4596
	ctx.r8.s64 = ctx.r9.s64 + -4596;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B3604"))) PPC_WEAK_FUNC(sub_825B3604);
PPC_FUNC_IMPL(__imp__sub_825B3604) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3608"))) PPC_WEAK_FUNC(sub_825B3608);
PPC_FUNC_IMPL(__imp__sub_825B3608) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4568
	ctx.r10.s64 = r11.s64 + -4568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b3688
	sub_825B3688(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4596
	ctx.r8.s64 = ctx.r9.s64 + -4596;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825b366c
	if (cr6.eq) goto loc_825B366C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B366C:
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

__attribute__((alias("__imp__sub_825B3680"))) PPC_WEAK_FUNC(sub_825B3680);
PPC_FUNC_IMPL(__imp__sub_825B3680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3684"))) PPC_WEAK_FUNC(sub_825B3684);
PPC_FUNC_IMPL(__imp__sub_825B3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3688"))) PPC_WEAK_FUNC(sub_825B3688);
PPC_FUNC_IMPL(__imp__sub_825B3688) {
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
	// beq cr6,0x825b376c
	if (cr6.eq) goto loc_825B376C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b36fc
	if (!cr6.eq) goto loc_825B36FC;
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
	// beq cr6,0x825b376c
	if (cr6.eq) goto loc_825B376C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x825b6de0
	sub_825B6DE0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825b376c
	goto loc_825B376C;
loc_825B36FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b3550
	sub_825B3550(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825b3728
	if (!cr6.gt) goto loc_825B3728;
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
loc_825B3728:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b3488
	sub_825B3488(ctx, base);
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
	// bl 0x825b35b0
	sub_825B35B0(ctx, base);
loc_825B376C:
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

__attribute__((alias("__imp__sub_825B3780"))) PPC_WEAK_FUNC(sub_825B3780);
PPC_FUNC_IMPL(__imp__sub_825B3780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3784"))) PPC_WEAK_FUNC(sub_825B3784);
PPC_FUNC_IMPL(__imp__sub_825B3784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3788"))) PPC_WEAK_FUNC(sub_825B3788);
PPC_FUNC_IMPL(__imp__sub_825B3788) {
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
	// bl 0x825b2f68
	sub_825B2F68(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b37c0
	if (cr6.eq) goto loc_825B37C0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B37C0:
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

__attribute__((alias("__imp__sub_825B37D4"))) PPC_WEAK_FUNC(sub_825B37D4);
PPC_FUNC_IMPL(__imp__sub_825B37D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B37D8"))) PPC_WEAK_FUNC(sub_825B37D8);
PPC_FUNC_IMPL(__imp__sub_825B37D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
}

__attribute__((alias("__imp__sub_825B37E8"))) PPC_WEAK_FUNC(sub_825B37E8);
PPC_FUNC_IMPL(__imp__sub_825B37E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B37EC"))) PPC_WEAK_FUNC(sub_825B37EC);
PPC_FUNC_IMPL(__imp__sub_825B37EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B37F0"))) PPC_WEAK_FUNC(sub_825B37F0);
PPC_FUNC_IMPL(__imp__sub_825B37F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3808"))) PPC_WEAK_FUNC(sub_825B3808);
PPC_FUNC_IMPL(__imp__sub_825B3808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r10,r3,280
	ctx.r10.s64 = ctx.r3.s64 + 280;
	// lwz r9,284(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mulli r8,r11,68
	ctx.r8.s64 = r11.s64 * 68;
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x825b3890
	if (!cr6.lt) goto loc_825B3890;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r10,r8,68
	ctx.r10.s64 = ctx.r8.s64 * 68;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_825B383C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 52);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// beq cr6,0x825b3878
	if (cr6.eq) goto loc_825B3878;
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
loc_825B3878:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b3898
	if (!cr6.eq) goto loc_825B3898;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x825b383c
	if (cr6.lt) goto loc_825B383C;
loc_825B3890:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825B3898:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_825B389C"))) PPC_WEAK_FUNC(sub_825B389C);
PPC_FUNC_IMPL(__imp__sub_825B389C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B38A0"))) PPC_WEAK_FUNC(sub_825B38A0);
PPC_FUNC_IMPL(__imp__sub_825B38A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r8,r11,84
	ctx.r8.s64 = r11.s64 + 84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// addi r5,r6,-4636
	ctx.r5.s64 = ctx.r6.s64 + -4636;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// addic r31,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r31.s64 = ctx.r7.s64 + -1;
	// lwz r9,304(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// subfe r7,r31,r7
	temp.u8 = (~r31.u32 + ctx.r7.u32 < ~r31.u32) | (~r31.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~r31.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B38FC"))) PPC_WEAK_FUNC(sub_825B38FC);
PPC_FUNC_IMPL(__imp__sub_825B38FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3900"))) PPC_WEAK_FUNC(sub_825B3900);
PPC_FUNC_IMPL(__imp__sub_825B3900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// stb r11,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r11.u8);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r8,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r8.u8);
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825B3994"))) PPC_WEAK_FUNC(sub_825B3994);
PPC_FUNC_IMPL(__imp__sub_825B3994) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B3998"))) PPC_WEAK_FUNC(sub_825B3998);
PPC_FUNC_IMPL(__imp__sub_825B3998) {
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
	// bl 0x825b3808
	sub_825B3808(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b39cc
	if (cr6.eq) goto loc_825B39CC;
	// li r11,0
	r11.s64 = 0;
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
loc_825B39CC:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b39f0
	if (!cr6.eq) goto loc_825B39F0;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
loc_825B39F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B3A00"))) PPC_WEAK_FUNC(sub_825B3A00);
PPC_FUNC_IMPL(__imp__sub_825B3A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3A04"))) PPC_WEAK_FUNC(sub_825B3A04);
PPC_FUNC_IMPL(__imp__sub_825B3A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3A08"))) PPC_WEAK_FUNC(sub_825B3A08);
PPC_FUNC_IMPL(__imp__sub_825B3A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r11,r3,280
	r11.s64 = ctx.r3.s64 + 280;
	// lwz r10,284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x825b3bb4
	if (!cr6.lt) goto loc_825B3BB4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_825B3A40:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// subf r7,r5,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & r11.u64;
	// beq cr6,0x825b3aac
	if (cr6.eq) goto loc_825B3AAC;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b3a9c
	if (cr6.eq) goto loc_825B3A9C;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_825B3A7C:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b3a98
	if (cr6.eq) goto loc_825B3A98;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b3a7c
	if (!cr6.eq) goto loc_825B3A7C;
	// b 0x825b3a9c
	goto loc_825B3A9C;
loc_825B3A98:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B3A9C:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B3AAC:
	// lbz r11,20(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3b00
	if (cr6.eq) goto loc_825B3B00;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b3af0
	if (cr6.eq) goto loc_825B3AF0;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_825B3AD0:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b3aec
	if (cr6.eq) goto loc_825B3AEC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b3ad0
	if (!cr6.eq) goto loc_825B3AD0;
	// b 0x825b3af0
	goto loc_825B3AF0;
loc_825B3AEC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B3AF0:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B3B00:
	// lbz r11,36(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3b54
	if (cr6.eq) goto loc_825B3B54;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b3b44
	if (cr6.eq) goto loc_825B3B44;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825B3B24:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b3b40
	if (cr6.eq) goto loc_825B3B40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b3b24
	if (!cr6.eq) goto loc_825B3B24;
	// b 0x825b3b44
	goto loc_825B3B44;
loc_825B3B40:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B3B44:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B3B54:
	// lbz r11,52(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3b78
	if (cr6.eq) goto loc_825B3B78;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B3B78:
	// lbz r11,60(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3b9c
	if (cr6.eq) goto loc_825B3B9C;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B3B9C:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b3bc0
	if (!cr6.eq) goto loc_825B3BC0;
	// addi r8,r8,68
	ctx.r8.s64 = ctx.r8.s64 + 68;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x825b3a40
	if (cr6.lt) goto loc_825B3A40;
loc_825B3BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_825B3BC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825B3BC8"))) PPC_WEAK_FUNC(sub_825B3BC8);
PPC_FUNC_IMPL(__imp__sub_825B3BC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3BCC"))) PPC_WEAK_FUNC(sub_825B3BCC);
PPC_FUNC_IMPL(__imp__sub_825B3BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3BD0"))) PPC_WEAK_FUNC(sub_825B3BD0);
PPC_FUNC_IMPL(__imp__sub_825B3BD0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19292);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b3c3c
	if (!cr6.eq) goto loc_825B3C3C;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b3c3c
	if (!cr6.eq) goto loc_825B3C3C;
	// lwz r11,19292(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B3C3C:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b3c94
	if (!cr6.eq) goto loc_825B3C94;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b3c94
	if (!cr6.eq) goto loc_825B3C94;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B3C94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B3C98"))) PPC_WEAK_FUNC(sub_825B3C98);
PPC_FUNC_IMPL(__imp__sub_825B3C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B3C9C"))) PPC_WEAK_FUNC(sub_825B3C9C);
PPC_FUNC_IMPL(__imp__sub_825B3C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3CA0"))) PPC_WEAK_FUNC(sub_825B3CA0);
PPC_FUNC_IMPL(__imp__sub_825B3CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825b3a08
	sub_825B3A08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3cd4
	if (cr6.eq) goto loc_825B3CD4;
	// li r11,0
	r11.s64 = 0;
	// stb r29,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r29.u8);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
loc_825B3CD4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b3d10
	if (!cr6.eq) goto loc_825B3D10;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb1d0
	sub_825BB1D0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b3d10
	if (cr6.eq) goto loc_825B3D10;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// stb r29,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r29.u8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
loc_825B3D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825B3D14"))) PPC_WEAK_FUNC(sub_825B3D14);
PPC_FUNC_IMPL(__imp__sub_825B3D14) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B3D18"))) PPC_WEAK_FUNC(sub_825B3D18);
PPC_FUNC_IMPL(__imp__sub_825B3D18) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// addi r30,r11,15520
	r30.s64 = r11.s64 + 15520;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r30,r11,14744
	r30.s64 = r11.s64 + 14744;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,3168
	ctx.r3.s64 = ctx.r7.s64 + 3168;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19292(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19292);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825B3DE0"))) PPC_WEAK_FUNC(sub_825B3DE0);
PPC_FUNC_IMPL(__imp__sub_825B3DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B3DE4"))) PPC_WEAK_FUNC(sub_825B3DE4);
PPC_FUNC_IMPL(__imp__sub_825B3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B3DE8"))) PPC_WEAK_FUNC(sub_825B3DE8);
PPC_FUNC_IMPL(__imp__sub_825B3DE8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b3e78
	if (cr6.eq) goto loc_825B3E78;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b3e7c
	if (!cr6.eq) goto loc_825B3E7C;
loc_825B3E78:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B3E7C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r10,-4588
	ctx.r3.s64 = ctx.r10.s64 + -4588;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b3f04
	if (cr6.eq) goto loc_825B3F04;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b3f08
	if (!cr6.eq) goto loc_825B3F08;
loc_825B3F04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825B3F08:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b3f3c
	if (!cr6.eq) goto loc_825B3F3C;
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x825b3f50
	if (!cr6.gt) goto loc_825B3F50;
loc_825B3F3C:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// stw r11,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r11.u32);
	// b 0x825b3f58
	goto loc_825B3F58;
loc_825B3F50:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_825B3F58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B3F6C"))) PPC_WEAK_FUNC(sub_825B3F6C);
PPC_FUNC_IMPL(__imp__sub_825B3F6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B3F70"))) PPC_WEAK_FUNC(sub_825B3F70);
PPC_FUNC_IMPL(__imp__sub_825B3F70) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b405c
	if (cr6.eq) goto loc_825B405C;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4588
	ctx.r3.s64 = ctx.r9.s64 + -4588;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,304
	ctx.r5.s64 = r31.s64 + 304;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822e07d8
	sub_822E07D8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B405C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B4074"))) PPC_WEAK_FUNC(sub_825B4074);
PPC_FUNC_IMPL(__imp__sub_825B4074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B4078"))) PPC_WEAK_FUNC(sub_825B4078);
PPC_FUNC_IMPL(__imp__sub_825B4078) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r3.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r27,216
	ctx.r3.s64 = r27.s64 + 216;
	// addi r10,r11,-4424
	ctx.r10.s64 = r11.s64 + -4424;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r27,244
	ctx.r3.s64 = r27.s64 + 244;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r7,r8,-4436
	ctx.r7.s64 = ctx.r8.s64 + -4436;
	// addi r28,r27,280
	r28.s64 = r27.s64 + 280;
	// stw r9,272(r27)
	PPC_STORE_U32(r27.u32 + 272, ctx.r9.u32);
	// stw r31,284(r27)
	PPC_STORE_U32(r27.u32 + 284, r31.u32);
	// stw r31,292(r27)
	PPC_STORE_U32(r27.u32 + 292, r31.u32);
	// stw r31,288(r27)
	PPC_STORE_U32(r27.u32 + 288, r31.u32);
	// stw r31,296(r27)
	PPC_STORE_U32(r27.u32 + 296, r31.u32);
	// stw r7,280(r27)
	PPC_STORE_U32(r27.u32 + 280, ctx.r7.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,296(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 296);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r29,r11,-4504
	r29.s64 = r11.s64 + -4504;
	// stw r5,296(r27)
	PPC_STORE_U32(r27.u32 + 296, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r26,24
	ctx.r4.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825b4168
	if (cr6.eq) goto loc_825B4168;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,272(r27)
	PPC_STORE_U32(r27.u32 + 272, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B4168:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-4528
	ctx.r3.s64 = r11.s64 + -4528;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r11,20600
	r29.s64 = r11.s64 + 20600;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// beq cr6,0x825b41d8
	if (cr6.eq) goto loc_825B41D8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x825b41d8
	if (cr6.eq) goto loc_825B41D8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b41dc
	if (!cr6.eq) goto loc_825B41DC;
loc_825B41D8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825B41DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,276(r27)
	PPC_STORE_U32(r27.u32 + 276, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4548
	r29.s64 = r11.s64 + -4548;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b50d8
	if (cr6.eq) goto loc_825B50D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825b4290
	if (!cr6.gt) goto loc_825B4290;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B4290:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x825b50d8
	if (!cr6.gt) goto loc_825B50D8;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r14,r10,-13328
	r14.s64 = ctx.r10.s64 + -13328;
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r10,r8,27744
	ctx.r10.s64 = ctx.r8.s64 + 27744;
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r14.u32);
	// addi r8,r5,-4520
	ctx.r8.s64 = ctx.r5.s64 + -4520;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r30,-32253
	r30.s64 = -2113732608;
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// addi r5,r4,-4512
	ctx.r5.s64 = ctx.r4.s64 + -4512;
	// addi r4,r3,-25328
	ctx.r4.s64 = ctx.r3.s64 + -25328;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// addi r11,r11,16804
	r11.s64 = r11.s64 + 16804;
	// addi r3,r30,-4560
	ctx.r3.s64 = r30.s64 + -4560;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r19,16
	r19.s64 = 16;
	// li r20,34
	r20.s64 = 34;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r17,-31934
	r17.s64 = -2092826624;
	// addi r16,r9,-13220
	r16.s64 = ctx.r9.s64 + -13220;
	// addi r18,r7,27264
	r18.s64 = ctx.r7.s64 + 27264;
	// addi r21,r6,4776
	r21.s64 = ctx.r6.s64 + 4776;
	// addi r15,r29,-28152
	r15.s64 = r29.s64 + -28152;
loc_825B431C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r19,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r20.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r31.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r31.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r19,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r20.u32);
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// stw r31,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, r31.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r31,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r31.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r24.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r19,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r20.u32);
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// stw r31,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r31.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r31.u32);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r22,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r22.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r29,140(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r23,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r23.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b44b0
	if (cr6.eq) goto loc_825B44B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B44B0:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b45fc
	if (cr6.eq) goto loc_825B45FC;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r11,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x825b45fc
	if (!cr6.gt) goto loc_825B45FC;
loc_825B4528:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// lwz r14,4(r24)
	r14.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// stw r19,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r19.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r31.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r20.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, r31.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, r31.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r14.u32);
	// beq 0x825b45b8
	if (cr0.eq) goto loc_825B45B8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B45B8:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b50e8
	if (cr6.lt) goto loc_825B50E8;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x825b4528
	if (cr6.lt) goto loc_825B4528;
	// lwz r14,240(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
loc_825B45FC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b47ac
	if (cr6.eq) goto loc_825B47AC;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b47ac
	if (!cr6.gt) goto loc_825B47AC;
loc_825B4674:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r27.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b46ec
	if (cr6.eq) goto loc_825B46EC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b46ec
	if (cr6.eq) goto loc_825B46EC;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b46ec
	if (cr6.eq) goto loc_825B46EC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b4714
	goto loc_825B4714;
loc_825B46EC:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b4710
	if (!cr6.eq) goto loc_825B4710;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B4710:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B4714:
	// lwz r28,4(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// stw r20,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r20.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, r31.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b476c
	if (cr0.eq) goto loc_825B476C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B476C:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - r27.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b50f4
	if (cr6.lt) goto loc_825B50F4;
	// stw r11,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r27.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(r27.s32, r29.s32, xer);
	// blt cr6,0x825b4674
	if (cr6.lt) goto loc_825B4674;
loc_825B47AC:
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r31.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b49f0
	if (cr6.eq) goto loc_825B49F0;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r11,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b49f0
	if (!cr6.gt) goto loc_825B49F0;
loc_825B4828:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4930
	if (cr6.eq) goto loc_825B4930;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4930
	if (cr6.eq) goto loc_825B4930;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b48b4
	if (cr6.eq) goto loc_825B48B4;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x825b4920
	goto loc_825B4920;
loc_825B48B4:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4930
	if (cr6.eq) goto loc_825B4930;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b491c
	if (cr6.eq) goto loc_825B491C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7bb0
	sub_822D7BB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b491c
	if (cr6.eq) goto loc_825B491C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825b4920
	goto loc_825B4920;
loc_825B491C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B4920:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4930
	if (cr6.eq) goto loc_825B4930;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b4958
	goto loc_825B4958;
loc_825B4930:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b4954
	if (!cr6.eq) goto loc_825B4954;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B4954:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B4958:
	// lwz r28,4(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r31.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// stw r20,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r20.u32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r31.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b49b0
	if (cr0.eq) goto loc_825B49B0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B49B0:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r25,r9
	ctx.r8.s64 = ctx.r9.s64 - r25.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b5100
	if (cr6.lt) goto loc_825B5100;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r25,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// blt cr6,0x825b4828
	if (cr6.lt) goto loc_825B4828;
loc_825B49F0:
	// lwz r29,152(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4cd8
	if (cr6.eq) goto loc_825B4CD8;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b4b3c
	if (cr6.eq) goto loc_825B4B3C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4b3c
	if (cr6.eq) goto loc_825B4B3C;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4ab8
	if (cr6.eq) goto loc_825B4AB8;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4b40
	goto loc_825B4B40;
loc_825B4AB8:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4b2c
	if (cr6.eq) goto loc_825B4B2C;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4b2c
	if (cr6.eq) goto loc_825B4B2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4b2c
	if (cr6.eq) goto loc_825B4B2C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4b40
	goto loc_825B4B40;
loc_825B4B2C:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4b40
	goto loc_825B4B40;
loc_825B4B3C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B4B40:
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4bc8
	if (cr6.eq) goto loc_825B4BC8;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4bb0
	if (cr6.eq) goto loc_825B4BB0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b4bb0
	if (cr6.eq) goto loc_825B4BB0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b4bb4
	if (!cr6.eq) goto loc_825B4BB4;
loc_825B4BB0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825B4BB4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b4cd8
	goto loc_825B4CD8;
loc_825B4BC8:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4c24
	if (cr6.eq) goto loc_825B4C24;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b4c24
	if (cr6.eq) goto loc_825B4C24;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4c28
	goto loc_825B4C28;
loc_825B4C24:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B4C28:
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4cd8
	if (cr6.eq) goto loc_825B4CD8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4ca0
	if (cr6.eq) goto loc_825B4CA0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b4ca0
	if (cr6.eq) goto loc_825B4CA0;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4ca0
	if (cr6.eq) goto loc_825B4CA0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b4cc8
	goto loc_825B4CC8;
loc_825B4CA0:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b4cc4
	if (!cr6.eq) goto loc_825B4CC4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B4CC4:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B4CC8:
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r30.u32);
loc_825B4CD8:
	// lwz r29,200(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4fc0
	if (cr6.eq) goto loc_825B4FC0;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b4e24
	if (cr6.eq) goto loc_825B4E24;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4e24
	if (cr6.eq) goto loc_825B4E24;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4da0
	if (cr6.eq) goto loc_825B4DA0;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4e28
	goto loc_825B4E28;
loc_825B4DA0:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4e14
	if (cr6.eq) goto loc_825B4E14;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4e14
	if (cr6.eq) goto loc_825B4E14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4e14
	if (cr6.eq) goto loc_825B4E14;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4e28
	goto loc_825B4E28;
loc_825B4E14:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4e28
	goto loc_825B4E28;
loc_825B4E24:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B4E28:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4eb0
	if (cr6.eq) goto loc_825B4EB0;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4e98
	if (cr6.eq) goto loc_825B4E98;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b4e98
	if (cr6.eq) goto loc_825B4E98;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b4e9c
	if (!cr6.eq) goto loc_825B4E9C;
loc_825B4E98:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825B4E9C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b4fc0
	goto loc_825B4FC0;
loc_825B4EB0:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4f0c
	if (cr6.eq) goto loc_825B4F0C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b4f0c
	if (cr6.eq) goto loc_825B4F0C;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b4f10
	goto loc_825B4F10;
loc_825B4F0C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B4F10:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4fc0
	if (cr6.eq) goto loc_825B4FC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b4f88
	if (cr6.eq) goto loc_825B4F88;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b4f88
	if (cr6.eq) goto loc_825B4F88;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b4f88
	if (cr6.eq) goto loc_825B4F88;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b4fb0
	goto loc_825B4FB0;
loc_825B4F88:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b4fac
	if (!cr6.eq) goto loc_825B4FAC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B4FAC:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B4FB0:
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r30.u32);
loc_825B4FC0:
	// lwz r11,1172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// addi r30,r11,280
	r30.s64 = r11.s64 + 280;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825b4ff0
	if (!cr6.gt) goto loc_825B4FF0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B4FF0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r10,r11,68
	ctx.r10.s64 = r11.s64 * 68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq 0x825b5020
	if (cr0.eq) goto loc_825B5020;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x825b31b0
	sub_825B31B0(ctx, base);
	// lwz r23,312(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r22,296(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r24,280(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
loc_825B5020:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stw r23,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r23.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, xer);
	// stw r23,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r23.u32);
	// beq cr6,0x825b504c
	if (cr6.eq) goto loc_825B504C;
loc_825B5038:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(r30.u32, r23.u32, xer);
	// bne cr6,0x825b5038
	if (!cr6.eq) goto loc_825B5038;
loc_825B504C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r22,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r22.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r31.u32);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, xer);
	// stw r22,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r22.u32);
	// beq cr6,0x825b5080
	if (cr6.eq) goto loc_825B5080;
loc_825B506C:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// bne cr6,0x825b506c
	if (!cr6.eq) goto loc_825B506C;
loc_825B5080:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r24,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r24.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// stw r24,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r24.u32);
	// beq cr6,0x825b50b4
	if (cr6.eq) goto loc_825B50B4;
loc_825B50A0:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// bne cr6,0x825b50a0
	if (!cr6.eq) goto loc_825B50A0;
loc_825B50B4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825b431c
	if (cr6.lt) goto loc_825B431C;
	// lwz r27,1172(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
loc_825B50D8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,304(r27)
	PPC_STORE_U32(r27.u32 + 304, r31.u32);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x828e9430
	return;
loc_825B50E8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B50F4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B5100:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825B5108"))) PPC_WEAK_FUNC(sub_825B5108);
PPC_FUNC_IMPL(__imp__sub_825B5108) {
	PPC_FUNC_PROLOGUE();
	// bl 0x828e9128
	sub_828E9128(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5110"))) PPC_WEAK_FUNC(sub_825B5110);
PPC_FUNC_IMPL(__imp__sub_825B5110) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-4424
	ctx.r9.s64 = r11.s64 + -4424;
	// addi r8,r10,-4436
	ctx.r8.s64 = ctx.r10.s64 + -4436;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,280
	r30.s64 = ctx.r3.s64 + 280;
	// stw r8,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b5340
	sub_825B5340(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4448
	ctx.r6.s64 = ctx.r7.s64 + -4448;
	// stw r6,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
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

__attribute__((alias("__imp__sub_825B5198"))) PPC_WEAK_FUNC(sub_825B5198);
PPC_FUNC_IMPL(__imp__sub_825B5198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B519C"))) PPC_WEAK_FUNC(sub_825B519C);
PPC_FUNC_IMPL(__imp__sub_825B519C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B51A0"))) PPC_WEAK_FUNC(sub_825B51A0);
PPC_FUNC_IMPL(__imp__sub_825B51A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b5340
	sub_825B5340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B51A0"))) PPC_WEAK_FUNC(sub_825B51A0);
PPC_FUNC_IMPL(__imp__sub_825B51A0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825B51A4"))) PPC_WEAK_FUNC(sub_825B51A4);
PPC_FUNC_IMPL(__imp__sub_825B51A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B51A8"))) PPC_WEAK_FUNC(sub_825B51A8);
PPC_FUNC_IMPL(__imp__sub_825B51A8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4448
	ctx.r10.s64 = r11.s64 + -4448;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b51ec
	if (cr6.eq) goto loc_825B51EC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B51EC:
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

__attribute__((alias("__imp__sub_825B5200"))) PPC_WEAK_FUNC(sub_825B5200);
PPC_FUNC_IMPL(__imp__sub_825B5200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5204"))) PPC_WEAK_FUNC(sub_825B5204);
PPC_FUNC_IMPL(__imp__sub_825B5204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5208"))) PPC_WEAK_FUNC(sub_825B5208);
PPC_FUNC_IMPL(__imp__sub_825B5208) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4436
	ctx.r9.s64 = ctx.r10.s64 + -4436;
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

__attribute__((alias("__imp__sub_825B5260"))) PPC_WEAK_FUNC(sub_825B5260);
PPC_FUNC_IMPL(__imp__sub_825B5260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5264"))) PPC_WEAK_FUNC(sub_825B5264);
PPC_FUNC_IMPL(__imp__sub_825B5264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5268"))) PPC_WEAK_FUNC(sub_825B5268);
PPC_FUNC_IMPL(__imp__sub_825B5268) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4436
	ctx.r10.s64 = r11.s64 + -4436;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b5340
	sub_825B5340(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4448
	ctx.r8.s64 = ctx.r9.s64 + -4448;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B52BC"))) PPC_WEAK_FUNC(sub_825B52BC);
PPC_FUNC_IMPL(__imp__sub_825B52BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B52C0"))) PPC_WEAK_FUNC(sub_825B52C0);
PPC_FUNC_IMPL(__imp__sub_825B52C0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4436
	ctx.r10.s64 = r11.s64 + -4436;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b5340
	sub_825B5340(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,-4448
	ctx.r8.s64 = ctx.r9.s64 + -4448;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825b5324
	if (cr6.eq) goto loc_825B5324;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B5324:
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

__attribute__((alias("__imp__sub_825B5338"))) PPC_WEAK_FUNC(sub_825B5338);
PPC_FUNC_IMPL(__imp__sub_825B5338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B533C"))) PPC_WEAK_FUNC(sub_825B533C);
PPC_FUNC_IMPL(__imp__sub_825B533C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5340"))) PPC_WEAK_FUNC(sub_825B5340);
PPC_FUNC_IMPL(__imp__sub_825B5340) {
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
	// beq cr6,0x825b5424
	if (cr6.eq) goto loc_825B5424;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b53b4
	if (!cr6.eq) goto loc_825B53B4;
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
	// beq cr6,0x825b5424
	if (cr6.eq) goto loc_825B5424;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x825b6de0
	sub_825B6DE0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x825b5424
	goto loc_825B5424;
loc_825B53B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b5208
	sub_825B5208(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825b53e0
	if (!cr6.gt) goto loc_825B53E0;
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
loc_825B53E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825b3488
	sub_825B3488(ctx, base);
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
	// bl 0x825b5268
	sub_825B5268(ctx, base);
loc_825B5424:
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

__attribute__((alias("__imp__sub_825B5438"))) PPC_WEAK_FUNC(sub_825B5438);
PPC_FUNC_IMPL(__imp__sub_825B5438) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B543C"))) PPC_WEAK_FUNC(sub_825B543C);
PPC_FUNC_IMPL(__imp__sub_825B543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5440"))) PPC_WEAK_FUNC(sub_825B5440);
PPC_FUNC_IMPL(__imp__sub_825B5440) {
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
	// bl 0x825b5110
	sub_825B5110(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b5478
	if (cr6.eq) goto loc_825B5478;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B5478:
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

__attribute__((alias("__imp__sub_825B548C"))) PPC_WEAK_FUNC(sub_825B548C);
PPC_FUNC_IMPL(__imp__sub_825B548C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5490"))) PPC_WEAK_FUNC(sub_825B5490);
PPC_FUNC_IMPL(__imp__sub_825B5490) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,304(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	f0.f64 = double(temp.f32);
	// lfs f13,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (cr6.lt) return;
}

__attribute__((alias("__imp__sub_825B54A0"))) PPC_WEAK_FUNC(sub_825B54A0);
PPC_FUNC_IMPL(__imp__sub_825B54A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bb0c8
	sub_825BB0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B54A4"))) PPC_WEAK_FUNC(sub_825B54A4);
PPC_FUNC_IMPL(__imp__sub_825B54A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B54A8"))) PPC_WEAK_FUNC(sub_825B54A8);
PPC_FUNC_IMPL(__imp__sub_825B54A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,304(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 304, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B54C8"))) PPC_WEAK_FUNC(sub_825B54C8);
PPC_FUNC_IMPL(__imp__sub_825B54C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b5520
	if (!cr6.eq) goto loc_825B5520;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// bl 0x825bb1d0
	sub_825BB1D0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b5520
	if (cr6.eq) goto loc_825B5520;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,304(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_825B5520:
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

__attribute__((alias("__imp__sub_825B5534"))) PPC_WEAK_FUNC(sub_825B5534);
PPC_FUNC_IMPL(__imp__sub_825B5534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5538"))) PPC_WEAK_FUNC(sub_825B5538);
PPC_FUNC_IMPL(__imp__sub_825B5538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r31,r11,84
	r31.s64 = r11.s64 + 84;
	// lfs f0,276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 276);
	f0.f64 = double(temp.f32);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lfs f13,304(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// addi r5,r5,-4636
	ctx.r5.s64 = ctx.r5.s64 + -4636;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// subfe r7,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B55AC"))) PPC_WEAK_FUNC(sub_825B55AC);
PPC_FUNC_IMPL(__imp__sub_825B55AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B55B0"))) PPC_WEAK_FUNC(sub_825B55B0);
PPC_FUNC_IMPL(__imp__sub_825B55B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,24192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r11.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, r11.u8);
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	f0.f64 = double(temp.f32);
	// lfs f12,276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// stb r8,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r8.u8);
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// bl 0x822e6810
	sub_822E6810(ctx, base);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_825B565C"))) PPC_WEAK_FUNC(sub_825B565C);
PPC_FUNC_IMPL(__imp__sub_825B565C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825B5660"))) PPC_WEAK_FUNC(sub_825B5660);
PPC_FUNC_IMPL(__imp__sub_825B5660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r11,r3,280
	r11.s64 = ctx.r3.s64 + 280;
	// lwz r10,284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x825b580c
	if (!cr6.lt) goto loc_825B580C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_825B5698:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// lbz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// subf r7,r5,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 & r11.u64;
	// beq cr6,0x825b5704
	if (cr6.eq) goto loc_825B5704;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b56f4
	if (cr6.eq) goto loc_825B56F4;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_825B56D4:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b56f0
	if (cr6.eq) goto loc_825B56F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b56d4
	if (!cr6.eq) goto loc_825B56D4;
	// b 0x825b56f4
	goto loc_825B56F4;
loc_825B56F0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B56F4:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B5704:
	// lbz r11,20(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b5758
	if (cr6.eq) goto loc_825B5758;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b5748
	if (cr6.eq) goto loc_825B5748;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_825B5728:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b5744
	if (cr6.eq) goto loc_825B5744;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b5728
	if (!cr6.eq) goto loc_825B5728;
	// b 0x825b5748
	goto loc_825B5748;
loc_825B5744:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B5748:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B5758:
	// lbz r11,36(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b57ac
	if (cr6.eq) goto loc_825B57AC;
	// lwz r10,40(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825b579c
	if (cr6.eq) goto loc_825B579C;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_825B577C:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825b5798
	if (cr6.eq) goto loc_825B5798;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825b577c
	if (!cr6.eq) goto loc_825B577C;
	// b 0x825b579c
	goto loc_825B579C;
loc_825B5798:
	// li r7,1
	ctx.r7.s64 = 1;
loc_825B579C:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 & ctx.r6.u64;
loc_825B57AC:
	// lbz r11,52(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b57d0
	if (cr6.eq) goto loc_825B57D0;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,56(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B57D0:
	// lbz r11,60(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b57f4
	if (cr6.eq) goto loc_825B57F4;
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,64(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_825B57F4:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b5818
	if (!cr6.eq) goto loc_825B5818;
	// addi r8,r8,68
	ctx.r8.s64 = ctx.r8.s64 + 68;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// blt cr6,0x825b5698
	if (cr6.lt) goto loc_825B5698;
loc_825B580C:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_825B5818:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_825B5820"))) PPC_WEAK_FUNC(sub_825B5820);
PPC_FUNC_IMPL(__imp__sub_825B5820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5824"))) PPC_WEAK_FUNC(sub_825B5824);
PPC_FUNC_IMPL(__imp__sub_825B5824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5828"))) PPC_WEAK_FUNC(sub_825B5828);
PPC_FUNC_IMPL(__imp__sub_825B5828) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0b0
	sub_825BB0B0(ctx, base);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,104
	r29.s64 = ctx.r10.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b5894
	if (!cr6.eq) goto loc_825B5894;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b5894
	if (!cr6.eq) goto loc_825B5894;
	// lwz r11,19276(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B5894:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19272(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19272);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b58ec
	if (!cr6.eq) goto loc_825B58EC;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b58ec
	if (!cr6.eq) goto loc_825B58EC;
	// lwz r11,19272(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825B58EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825B58F0"))) PPC_WEAK_FUNC(sub_825B58F0);
PPC_FUNC_IMPL(__imp__sub_825B58F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B58F4"))) PPC_WEAK_FUNC(sub_825B58F4);
PPC_FUNC_IMPL(__imp__sub_825B58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B58F8"))) PPC_WEAK_FUNC(sub_825B58F8);
PPC_FUNC_IMPL(__imp__sub_825B58F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825b5660
	sub_825B5660(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b5930
	if (cr6.eq) goto loc_825B5930;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
loc_825B5930:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B5940"))) PPC_WEAK_FUNC(sub_825B5940);
PPC_FUNC_IMPL(__imp__sub_825B5940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5944"))) PPC_WEAK_FUNC(sub_825B5944);
PPC_FUNC_IMPL(__imp__sub_825B5944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5948"))) PPC_WEAK_FUNC(sub_825B5948);
PPC_FUNC_IMPL(__imp__sub_825B5948) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb0a0
	sub_825BB0A0(ctx, base);
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// addi r28,r10,-3784
	r28.s64 = ctx.r10.s64 + -3784;
	// addi r30,r11,21704
	r30.s64 = r11.s64 + 21704;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r9,3436
	ctx.r3.s64 = ctx.r9.s64 + 3436;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19272(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19272);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lis r11,-32165
	r11.s64 = -2107965440;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// addi r30,r11,22776
	r30.s64 = r11.s64 + 22776;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r7,3388
	ctx.r3.s64 = ctx.r7.s64 + 3388;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r11,104
	r29.s64 = r11.s64 + 104;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19276(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,244
	ctx.r4.s64 = r31.s64 + 244;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825B5A10"))) PPC_WEAK_FUNC(sub_825B5A10);
PPC_FUNC_IMPL(__imp__sub_825B5A10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825B5A14"))) PPC_WEAK_FUNC(sub_825B5A14);
PPC_FUNC_IMPL(__imp__sub_825B5A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5A18"))) PPC_WEAK_FUNC(sub_825B5A18);
PPC_FUNC_IMPL(__imp__sub_825B5A18) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b5aa4
	if (cr6.eq) goto loc_825B5AA4;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b5aa8
	if (!cr6.eq) goto loc_825B5AA8;
loc_825B5AA4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B5AA8:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4372
	ctx.r3.s64 = ctx.r9.s64 + -4372;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b5b38
	if (cr6.eq) goto loc_825B5B38;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b5b3c
	if (!cr6.eq) goto loc_825B5B3C;
loc_825B5B38:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_825B5B3C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,304(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825b5b70
	if (!cr6.eq) goto loc_825B5B70;
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 304);
	f0.f64 = double(temp.f32);
	// lfs f13,276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825b5b78
	if (!cr6.gt) goto loc_825B5B78;
loc_825B5B70:
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	f0.f64 = double(temp.f32);
	// stfs f0,304(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
loc_825B5B78:
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B5B90"))) PPC_WEAK_FUNC(sub_825B5B90);
PPC_FUNC_IMPL(__imp__sub_825B5B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5B94"))) PPC_WEAK_FUNC(sub_825B5B94);
PPC_FUNC_IMPL(__imp__sub_825B5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B5B98"))) PPC_WEAK_FUNC(sub_825B5B98);
PPC_FUNC_IMPL(__imp__sub_825B5B98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b5c84
	if (cr6.eq) goto loc_825B5C84;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4616
	ctx.r3.s64 = ctx.r10.s64 + -4616;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,5
	ctx.r5.s64 = r31.s64 + 5;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823298c8
	sub_823298C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r3,r9,-4372
	ctx.r3.s64 = ctx.r9.s64 + -4372;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb4d0
	sub_826CB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826cadd0
	sub_826CADD0(ctx, base);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r31,304
	ctx.r5.s64 = r31.s64 + 304;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82329b80
	sub_82329B80(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cac88
	sub_826CAC88(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825B5C84:
	// li r11,0
	r11.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825B5C9C"))) PPC_WEAK_FUNC(sub_825B5C9C);
PPC_FUNC_IMPL(__imp__sub_825B5C9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B5CA0"))) PPC_WEAK_FUNC(sub_825B5CA0);
PPC_FUNC_IMPL(__imp__sub_825B5CA0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r3.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825bb3b8
	sub_825BB3B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r27,216
	ctx.r3.s64 = r27.s64 + 216;
	// addi r10,r11,-4328
	ctx.r10.s64 = r11.s64 + -4328;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r27,244
	ctx.r3.s64 = r27.s64 + 244;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// li r31,0
	r31.s64 = 0;
	// addi r7,r8,-4352
	ctx.r7.s64 = ctx.r8.s64 + -4352;
	// addi r28,r27,280
	r28.s64 = r27.s64 + 280;
	// stw r9,272(r27)
	PPC_STORE_U32(r27.u32 + 272, ctx.r9.u32);
	// stw r31,284(r27)
	PPC_STORE_U32(r27.u32 + 284, r31.u32);
	// stw r31,292(r27)
	PPC_STORE_U32(r27.u32 + 292, r31.u32);
	// stw r31,288(r27)
	PPC_STORE_U32(r27.u32 + 288, r31.u32);
	// stw r31,296(r27)
	PPC_STORE_U32(r27.u32 + 296, r31.u32);
	// stw r7,280(r27)
	PPC_STORE_U32(r27.u32 + 280, ctx.r7.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r6,296(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 296);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r29,r11,-4504
	r29.s64 = r11.s64 + -4504;
	// stw r5,296(r27)
	PPC_STORE_U32(r27.u32 + 296, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r4,r26,24
	ctx.r4.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825b5d94
	if (cr6.eq) goto loc_825B5D94;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,272(r27)
	PPC_STORE_U32(r27.u32 + 272, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B5D94:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r10,-4344
	ctx.r3.s64 = ctx.r10.s64 + -4344;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
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
	// beq cr6,0x825b5e04
	if (cr6.eq) goto loc_825B5E04;
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
	// beq cr6,0x825b5e04
	if (cr6.eq) goto loc_825B5E04;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b5e08
	if (!cr6.eq) goto loc_825B5E08;
loc_825B5E04:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825B5E08:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,276(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 276, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-4548
	r29.s64 = r11.s64 + -4548;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6d10
	if (cr6.eq) goto loc_825B6D10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cb550
	sub_826CB550(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825b5ebc
	if (!cr6.gt) goto loc_825B5EBC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B5EBC:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x825b6d10
	if (!cr6.gt) goto loc_825B6D10;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// addi r11,r11,20600
	r11.s64 = r11.s64 + 20600;
	// addi r14,r9,-13328
	r14.s64 = ctx.r9.s64 + -13328;
	// addi r9,r7,27744
	ctx.r9.s64 = ctx.r7.s64 + 27744;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r14.u32);
	// lis r30,-32254
	r30.s64 = -2113798144;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r29,-32253
	r29.s64 = -2113732608;
	// addi r7,r4,-4520
	ctx.r7.s64 = ctx.r4.s64 + -4520;
	// addi r4,r3,-4512
	ctx.r4.s64 = ctx.r3.s64 + -4512;
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// addi r10,r10,16804
	ctx.r10.s64 = ctx.r10.s64 + 16804;
	// addi r3,r30,-25328
	ctx.r3.s64 = r30.s64 + -25328;
	// addi r11,r29,-4560
	r11.s64 = r29.s64 + -4560;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r19,16
	r19.s64 = 16;
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// li r20,34
	r20.s64 = 34;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r17,-31934
	r17.s64 = -2092826624;
	// addi r16,r8,-13220
	r16.s64 = ctx.r8.s64 + -13220;
	// addi r18,r6,27264
	r18.s64 = ctx.r6.s64 + 27264;
	// addi r21,r5,4776
	r21.s64 = ctx.r5.s64 + 4776;
	// addi r15,r28,-28152
	r15.s64 = r28.s64 + -28152;
loc_825B5F54:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r19,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r20.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stw r31,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r31.u32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r31.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r19,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, r20.u32);
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// stw r31,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, r31.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stw r31,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, r31.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r24.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r19,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r19.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r20,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r20.u32);
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// stw r31,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r31.u32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// stw r31,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r31.u32);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r22,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r22.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r29,140(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r23,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r23.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b60e8
	if (cr6.eq) goto loc_825B60E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
loc_825B60E8:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6234
	if (cr6.eq) goto loc_825B6234;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stb r11,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x825b6234
	if (!cr6.gt) goto loc_825B6234;
loc_825B6160:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// bl 0x82348790
	sub_82348790(ctx, base);
	// lwz r14,4(r24)
	r14.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// stw r19,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r19.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r31.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, r20.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, r31.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, r31.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r14.u32);
	// beq 0x825b61f0
	if (cr0.eq) goto loc_825B61F0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B61F0:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - r30.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b6d24
	if (cr6.lt) goto loc_825B6D24;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r30.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x825b6160
	if (cr6.lt) goto loc_825B6160;
	// lwz r14,240(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
loc_825B6234:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, r31.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b63e4
	if (cr6.eq) goto loc_825B63E4;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b63e4
	if (!cr6.gt) goto loc_825B63E4;
loc_825B62AC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r27.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6324
	if (cr6.eq) goto loc_825B6324;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b6324
	if (cr6.eq) goto loc_825B6324;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6324
	if (cr6.eq) goto loc_825B6324;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b634c
	goto loc_825B634C;
loc_825B6324:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b6348
	if (!cr6.eq) goto loc_825B6348;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B6348:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B634C:
	// lwz r28,4(r22)
	r28.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r31.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// stw r20,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r20.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// stw r31,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, r31.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b63a4
	if (cr0.eq) goto loc_825B63A4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B63A4:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - r27.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b6d30
	if (cr6.lt) goto loc_825B6D30;
	// stw r11,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r11.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r27.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r27,r29
	cr6.compare<int32_t>(r27.s32, r29.s32, xer);
	// blt cr6,0x825b62ac
	if (cr6.lt) goto loc_825B62AC;
loc_825B63E4:
	// lwz r27,188(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stb r31,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r31.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6628
	if (cr6.eq) goto loc_825B6628;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r11,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca5e8
	sub_826CA5E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x825b6628
	if (!cr6.gt) goto loc_825B6628;
loc_825B6460:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// bl 0x826cac40
	sub_826CAC40(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6568
	if (cr6.eq) goto loc_825B6568;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6568
	if (cr6.eq) goto loc_825B6568;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b64ec
	if (cr6.eq) goto loc_825B64EC;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x825b6558
	goto loc_825B6558;
loc_825B64EC:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6568
	if (cr6.eq) goto loc_825B6568;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6554
	if (cr6.eq) goto loc_825B6554;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d7bb0
	sub_822D7BB0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6554
	if (cr6.eq) goto loc_825B6554;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825b6558
	goto loc_825B6558;
loc_825B6554:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B6558:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6568
	if (cr6.eq) goto loc_825B6568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825b6590
	goto loc_825B6590;
loc_825B6568:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b658c
	if (!cr6.eq) goto loc_825B658C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B658C:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_825B6590:
	// lwz r28,4(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r19.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r31.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// stw r20,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, r20.u32);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// stw r31,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r31,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, r31.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, r31.u32);
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// beq 0x825b65e8
	if (cr0.eq) goto loc_825B65E8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825B65E8:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// subf r8,r25,r9
	ctx.r8.s64 = ctx.r9.s64 - r25.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x825b6d3c
	if (cr6.lt) goto loc_825B6D3C;
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r25,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// blt cr6,0x825b6460
	if (cr6.lt) goto loc_825B6460;
loc_825B6628:
	// lwz r29,152(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6910
	if (cr6.eq) goto loc_825B6910;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b6774
	if (cr6.eq) goto loc_825B6774;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6774
	if (cr6.eq) goto loc_825B6774;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b66f0
	if (cr6.eq) goto loc_825B66F0;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6778
	goto loc_825B6778;
loc_825B66F0:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6764
	if (cr6.eq) goto loc_825B6764;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6764
	if (cr6.eq) goto loc_825B6764;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6764
	if (cr6.eq) goto loc_825B6764;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6778
	goto loc_825B6778;
loc_825B6764:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6778
	goto loc_825B6778;
loc_825B6774:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B6778:
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6800
	if (cr6.eq) goto loc_825B6800;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b67e8
	if (cr6.eq) goto loc_825B67E8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b67e8
	if (cr6.eq) goto loc_825B67E8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b67ec
	if (!cr6.eq) goto loc_825B67EC;
loc_825B67E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825B67EC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b6910
	goto loc_825B6910;
loc_825B6800:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b685c
	if (cr6.eq) goto loc_825B685C;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b685c
	if (cr6.eq) goto loc_825B685C;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6860
	goto loc_825B6860;
loc_825B685C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B6860:
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6910
	if (cr6.eq) goto loc_825B6910;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b68d8
	if (cr6.eq) goto loc_825B68D8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b68d8
	if (cr6.eq) goto loc_825B68D8;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b68d8
	if (cr6.eq) goto loc_825B68D8;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b6900
	goto loc_825B6900;
loc_825B68D8:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b68fc
	if (!cr6.eq) goto loc_825B68FC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B68FC:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B6900:
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r30.u32);
loc_825B6910:
	// lwz r29,200(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stb r31,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, r31.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826ca578
	sub_826CA578(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6bf8
	if (cr6.eq) goto loc_825B6BF8;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825b6a5c
	if (cr6.eq) goto loc_825B6A5C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6a5c
	if (cr6.eq) goto loc_825B6A5C;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b69d8
	if (cr6.eq) goto loc_825B69D8;
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6a60
	goto loc_825B6A60;
loc_825B69D8:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e9fb0
	sub_828E9FB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6a4c
	if (cr6.eq) goto loc_825B6A4C;
	// addi r30,r3,60
	r30.s64 = ctx.r3.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6a4c
	if (cr6.eq) goto loc_825B6A4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822c8308
	sub_822C8308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6a4c
	if (cr6.eq) goto loc_825B6A4C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// subfe r30,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6a60
	goto loc_825B6A60;
loc_825B6A4C:
	// addic r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// subfe r30,r10,r31
	temp.u8 = (~ctx.r10.u32 + r31.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r31.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r10.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6a60
	goto loc_825B6A60;
loc_825B6A5C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B6A60:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6ae8
	if (cr6.eq) goto loc_825B6AE8;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6ad0
	if (cr6.eq) goto loc_825B6AD0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b6ad0
	if (cr6.eq) goto loc_825B6AD0;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825b6ad4
	if (!cr6.eq) goto loc_825B6AD4;
loc_825B6AD0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825B6AD4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// b 0x825b6bf8
	goto loc_825B6BF8;
loc_825B6AE8:
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6b44
	if (cr6.eq) goto loc_825B6B44;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b6b44
	if (cr6.eq) goto loc_825B6B44;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// subfe r30,r11,r3
	temp.u8 = (~r11.u32 + ctx.r3.u32 < ~r11.u32) | (~r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	r30.u64 = ~r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x825b6b48
	goto loc_825B6B48;
loc_825B6B44:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825B6B48:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6bf8
	if (cr6.eq) goto loc_825B6BF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825b6bc0
	if (cr6.eq) goto loc_825B6BC0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
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
	// beq cr6,0x825b6bc0
	if (cr6.eq) goto loc_825B6BC0;
	// bl 0x822d80c0
	sub_822D80C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825b6bc0
	if (cr6.eq) goto loc_825B6BC0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825b6be8
	goto loc_825B6BE8;
loc_825B6BC0:
	// lwz r11,27268(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 27268);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825b6be4
	if (!cr6.eq) goto loc_825B6BE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,27268(r17)
	PPC_STORE_U32(r17.u32 + 27268, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
loc_825B6BE4:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_825B6BE8:
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r30.u32);
loc_825B6BF8:
	// lwz r11,1172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// addi r30,r11,280
	r30.s64 = r11.s64 + 280;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x825b6c28
	if (!cr6.gt) goto loc_825B6C28;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825B6C28:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r10,r11,68
	ctx.r10.s64 = r11.s64 * 68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// beq 0x825b6c58
	if (cr0.eq) goto loc_825B6C58;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x825b31b0
	sub_825B31B0(ctx, base);
	// lwz r23,312(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r22,296(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r24,280(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
loc_825B6C58:
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stw r23,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r23.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, r23.u32, xer);
	// stw r23,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r23.u32);
	// beq cr6,0x825b6c84
	if (cr6.eq) goto loc_825B6C84;
loc_825B6C70:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r23
	cr6.compare<uint32_t>(r30.u32, r23.u32, xer);
	// bne cr6,0x825b6c70
	if (!cr6.eq) goto loc_825B6C70;
loc_825B6C84:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// stw r22,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r22.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r31.u32);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, xer);
	// stw r22,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r22.u32);
	// beq cr6,0x825b6cb8
	if (cr6.eq) goto loc_825B6CB8;
loc_825B6CA4:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// bne cr6,0x825b6ca4
	if (!cr6.eq) goto loc_825B6CA4;
loc_825B6CB8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r24,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r24.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, r24.u32, xer);
	// stw r24,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r24.u32);
	// beq cr6,0x825b6cec
	if (cr6.eq) goto loc_825B6CEC;
loc_825B6CD8:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// bne cr6,0x825b6cd8
	if (!cr6.eq) goto loc_825B6CD8;
loc_825B6CEC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x825b5f54
	if (cr6.lt) goto loc_825B5F54;
	// lwz r27,1172(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
loc_825B6D10:
	// stfs f31,304(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r27.u32 + 304, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x828e9430
	return;
loc_825B6D24:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B6D30:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
	// bl 0x828e9128
	sub_828E9128(ctx, base);
loc_825B6D3C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-27344
	ctx.r3.s64 = r11.s64 + -27344;
}

__attribute__((alias("__imp__sub_825B6D44"))) PPC_WEAK_FUNC(sub_825B6D44);
PPC_FUNC_IMPL(__imp__sub_825B6D44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x828e9128
	sub_828E9128(ctx, base);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-4328
	ctx.r9.s64 = r11.s64 + -4328;
	// addi r8,r10,-4352
	ctx.r8.s64 = ctx.r10.s64 + -4352;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,280
	r30.s64 = ctx.r3.s64 + 280;
	// stw r8,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b6fe0
	sub_825B6FE0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4380
	ctx.r6.s64 = ctx.r7.s64 + -4380;
	// stw r6,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6D48"))) PPC_WEAK_FUNC(sub_825B6D48);
PPC_FUNC_IMPL(__imp__sub_825B6D48) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,-4328
	ctx.r9.s64 = r11.s64 + -4328;
	// addi r8,r10,-4352
	ctx.r8.s64 = ctx.r10.s64 + -4352;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r30,r3,280
	r30.s64 = ctx.r3.s64 + 280;
	// stw r8,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b6fe0
	sub_825B6FE0(ctx, base);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r7,-4380
	ctx.r6.s64 = ctx.r7.s64 + -4380;
	// stw r6,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r6.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb340
	sub_825BB340(ctx, base);
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

__attribute__((alias("__imp__sub_825B6DD4"))) PPC_WEAK_FUNC(sub_825B6DD4);
PPC_FUNC_IMPL(__imp__sub_825B6DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6DD8"))) PPC_WEAK_FUNC(sub_825B6DD8);
PPC_FUNC_IMPL(__imp__sub_825B6DD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825b6fe0
	sub_825B6FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825B6DD8"))) PPC_WEAK_FUNC(sub_825B6DD8);
PPC_FUNC_IMPL(__imp__sub_825B6DD8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825B6DDC"))) PPC_WEAK_FUNC(sub_825B6DDC);
PPC_FUNC_IMPL(__imp__sub_825B6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6DE0"))) PPC_WEAK_FUNC(sub_825B6DE0);
PPC_FUNC_IMPL(__imp__sub_825B6DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r7,34
	ctx.r7.s64 = 34;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r6,r6,4776
	ctx.r6.s64 = ctx.r6.s64 + 4776;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mulli r3,r10,68
	ctx.r3.s64 = ctx.r10.s64 * 68;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825B6E44"))) PPC_WEAK_FUNC(sub_825B6E44);
PPC_FUNC_IMPL(__imp__sub_825B6E44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6E48"))) PPC_WEAK_FUNC(sub_825B6E48);
PPC_FUNC_IMPL(__imp__sub_825B6E48) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4380
	ctx.r10.s64 = r11.s64 + -4380;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x825b3298
	sub_825B3298(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825b6e8c
	if (cr6.eq) goto loc_825B6E8C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825B6E8C:
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

__attribute__((alias("__imp__sub_825B6EA0"))) PPC_WEAK_FUNC(sub_825B6EA0);
PPC_FUNC_IMPL(__imp__sub_825B6EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825B6EA4"))) PPC_WEAK_FUNC(sub_825B6EA4);
PPC_FUNC_IMPL(__imp__sub_825B6EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825B6EA8"))) PPC_WEAK_FUNC(sub_825B6EA8);
PPC_FUNC_IMPL(__imp__sub_825B6EA8) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-4352
	ctx.r9.s64 = ctx.r10.s64 + -4352;
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

